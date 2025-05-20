do_install:append() {
    echo "admin ALL = (ALL) ALL " > ${D}${sysconfdir}/sudoers.d/admin
}

FILES_${PN} += " ${sysconfdir}/sudoers.d/admin"
