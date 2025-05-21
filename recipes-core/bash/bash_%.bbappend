FILESEXTRAPATHS:prepend := "${THISDIR}/files:"  
SRC_URI += "file://init_bin.sh"
FILES:${PN} += "${sysconfdir}/profile.d/init_bin.sh"

do_install:append() {
	install -d ${D}${sysconfdir}/profile.d/
	install -m 744 ${WORKDIR}/init_bin.sh ${D}${sysconfdir}/profile.d/
}

