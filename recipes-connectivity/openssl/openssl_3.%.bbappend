FILESEXTRAPATHS:prepend := "${THISDIR}/${BPN}:"

SRC_URI:append:imx8s-cpu = " \
    file://customized_openssl_e8afc6a3f874.cnf \
    file://customized_openssl_bfdc30bd205b.cnf \
"

RDEPENDS:${PN}-conf:append:imx8s-cpu = " pkcs11-provider optee-client"

do_install:append:imx8s-cpu() {
    # Ensure that the upstream version of openssl.cnf did not change
    ACTUAL=$(md5sum ${B}/apps/openssl.cnf | awk '{print $1}')

    case "${PV}" in
        3.2.4|3.2.6)
            EXPECTED=e8afc6a3f874e6d772b1c5902ce1e09e
            ;;
        3.5.5|3.5.6|3.5.7)
            EXPECTED=bfdc30bd205b6ca2c15a46b17721c6f2
            ;;
        *)
            bbfatal "Unknown version ${PV} of OpenSSL recipe. Found hash value ${ACTUAL}. \
Please update meta-skov-cpu-bsp's openssl_3.%.bbappend accordingly."
            ;;
    esac

    if [ "${ACTUAL}" != "${EXPECTED}" ]; then
        bbfatal "Original OpenSSL config file changed \
(hash mismatch: expected ${EXPECTED}, but found ${ACTUAL}). \
Update the customized version and refresh the expected hash (${B}/apps/openssl.cnf)."
    fi

    ACTUAL12=$(printf '%s' "$ACTUAL" | cut -c1-12)
    install -m 0644 ${WORKDIR}/customized_openssl_${ACTUAL12}.cnf ${D}${sysconfdir}/ssl/openssl.cnf
}
