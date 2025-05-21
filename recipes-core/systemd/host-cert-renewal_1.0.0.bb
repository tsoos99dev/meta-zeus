LICENSE = "CLOSED"

SYSTEMD_AUTO_ENABLE = "enable"
SYSTEMD_SERVICE:${PN} = "host-cert-renewa.service host-cert-renewal.timer"

SRC_URI:append = " \
    file://root_ca.crt \
    file://host-cert-renewal.sh \
    file://host-cert-renewal.service \
    file://host-cert-renewal.timer \
"

FILES:${PN} += " \
    ${sysconfdir}/step/certs/root_ca.crt \
    /usr/local/bin/host-cert-renewal.sh \
    ${systemd_unitdir}/system/host-cert-renewal.service \
    ${systemd_unitdir}/system/host-cert-renewal.timer \
"

do_install:append() {
  install -d ${D}${sysconfdir}/step/certs
  install -m 0644 ${WORKDIR}/root_ca.crt ${D}${sysconfdir}/step/certs/root_ca.crt

  install -d ${D}${systemd_unitdir}/system
  install -m 0644 ${WORKDIR}/host-cert-renewal.service ${D}${systemd_unitdir}/system
  install -m 0644 ${WORKDIR}/host-cert-renewal.timer ${D}${systemd_unitdir}/system

  install -d ${D}/usr/local/bin
  install -m 0644 ${WORKDIR}/host-cert-renewal.sh ${D}/usr/local/bin
}
