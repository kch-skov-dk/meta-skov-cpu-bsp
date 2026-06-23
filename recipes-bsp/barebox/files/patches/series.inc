# umpf-base: v2025.06.1
# umpf-name: 2025.06.1/customers/skov/imx6
# umpf-version: 2025.06.1/customers/skov/imx6/20260619-1
# umpf-topic: v2025.02.0/customers/skov/imx6
# umpf-hashinfo: 455885ffe06014703bfa4394caf5d7e9a3cef32e
# umpf-topic-range: 7e5ea8eb09a1ca3b13e89586411f5a60ae8fd5b3..c4442005dcfc329a7a95857896a39e62ab3a47af
UMPF_SRC_URI += "\
  file://patches/0001-video-edid-increase-number-of-retries-to-request-EDI.patch \
  file://patches/0002-ARM-boards-skov-imx6-fix-device-tree-path-of-state-n.patch \
  "
# umpf-topic: v2025.06.0/customers/skov/imx8mp
# umpf-hashinfo: 263ef246e22d635e4d4045f5de5cf3a6fbeb7dec
# umpf-topic-range: c4442005dcfc329a7a95857896a39e62ab3a47af..7e222e120f539b892eefea4e2cbc121359ad8567
UMPF_SRC_URI += "\
  file://patches/0101-ARM-i.MX8MP-skov-halt-startup-until-power-is-good.patch \
  file://patches/0102-ARM-i.MX8MP-skov-halt-startup-until-power-is-good.patch \
  file://patches/0103-ARM-i.MX8MP-skov-add-new-10-jt101tm023-variant-suppo.patch \
  file://patches/0104-ARM-i.MX8MP-skov-add-new-7-jt070tm041-variant-suppor.patch \
  "
# umpf-topic: v2025.02.0/customers/skov/arm9cpu
# umpf-hashinfo: e534542da7f998677e29802bb8b067ca99ccbbe0
# umpf-topic-range: 7e222e120f539b892eefea4e2cbc121359ad8567..7b0b53a829eb7bb3d194f4481839f9956bc81b12
UMPF_SRC_URI += "\
  file://patches/0201-usb-ohci-at91-fix-possible-hang-chainloading-barebox.patch \
  file://patches/0202-HACK-ARM-at91-import-AT91Bootstrap-patch-pmc-fix-PLL.patch \
  "
# umpf-topic: v2025.06.0/customers/skov/backports
# umpf-hashinfo: 3efb2d5d911c9d5d458796d00c0a2466c75b0ca7
# umpf-topic-range: 7b0b53a829eb7bb3d194f4481839f9956bc81b12..96424a108523a95c825b8f9628c4cc65badbbc91
UMPF_SRC_URI += "\
  file://patches/0301-mci-imx-esdhc-restore-longer-timeouts-for-idle.patch \
  file://patches/0302-mci-sdhci-fix-too-short-timeout-in-sdhci_wait_idle_d.patch \
  "
# umpf-topic: v2025.04.0/topic/imx6-clk
# umpf-hashinfo: 77c953e6806c34e7b15560e521809f3dd3a024ae
# umpf-topic-range: 96424a108523a95c825b8f9628c4cc65badbbc91..0ac49a377b6a09ab85d4d03ab9cf4efd156f7b1d
UMPF_SRC_URI += "\
  file://patches/0401-video-IPUv3-LDB-fix-LVDS-serial-clock-configuration.patch \
  "
# umpf-topic: v2025.06.0/topic/arm-optee-early-helper
# umpf-hashinfo: c0b787bc8499c1aff302f5c9a76c56b60e7bb7c2
# umpf-topic-range: 0ac49a377b6a09ab85d4d03ab9cf4efd156f7b1d..4eb4123047da842da2a8297a9d5cf253a12c5399
UMPF_SRC_URI += "\
  file://patches/0501-pbl-add-panic_no_stacktrace.patch \
  file://patches/0502-arch-Allow-data_abort_mask-in-PBL.patch \
  file://patches/0503-ARM-add-exception-handling-support-for-PBL.patch \
  file://patches/0504-ARM-i.MX6QDL-add-imxcfg-helper-to-configure-the-TZAS.patch \
  file://patches/0505-ARM-i.MX6Q-add-imx6_get_mmdc_sdram_size.patch \
  file://patches/0506-ARM-i.MX-add-config-symbol-for-TZASC.patch \
  file://patches/0507-ARM-mach-imx-tzasc-add-region-configure-helpers.patch \
  file://patches/0508-ARM-mach-imx-tzasc-add-imx6-q-ul-_tzc380_early_ns_re.patch \
  file://patches/0509-ARM-mach-imx-tzasc-add-imx6-q-ul-_tzc380_is_bypassed.patch \
  file://patches/0510-ARM-i.MX-add-imx6_can_access_tzasc.patch \
  file://patches/0511-ARM-optee-early-add-mx6_start_optee_early-helper.patch \
  file://patches/0512-ARM-i.MX-tqma6ulx-fix-barebox-chainloading-with-OP-T.patch \
  file://patches/0513-ARM-i.MX-Webasto-ccbv2-fix-barebox-chainloading-with.patch \
  file://patches/0514-ARM-i.MX-tqma6ulx-use-ENTRY_FUNCTION_WITHSTACK.patch \
  file://patches/0515-ARM-mach-imx-tzasc-keep-default-region-0-secure-sett.patch \
  "
# umpf-release: 2025.06.1/customers/skov/imx6/20260619-1
# umpf-topic-range: 4eb4123047da842da2a8297a9d5cf253a12c5399..f96fcbdaea9a8f253d69b1187c4b28f54e237cd8
UMPF_SRC_URI += "\
  file://patches/0601-Release-2025.06.1-customers-skov-imx6-20260619-1.patch \
  "
SRC_URI += "${UMPF_SRC_URI}"

UMPF_BASE = "2025.06.1"
UMPF_VERSION = "20260619-1"
UMPF_PV = "${UMPF_BASE}-${UMPF_VERSION}"
# umpf-end
