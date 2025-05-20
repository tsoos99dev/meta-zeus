SRC_URI += "file://ssh_user_key.pub"
FILESEXTRAPATHS:prepend := "${THISDIR}/files:"

FILES:${PN} += "${sysconfdir}/ssh/ssh_user_key.pub"

do_install:append () {
    install -m 0600 ${WORKDIR}/ssh_user_key.pub ${D}${sysconfdir}/ssh/
    sed -i -e 's:^#\?PermitEmptyPasswords.*$:PermitEmptyPasswords no:g' ${D}${sysconfdir}/ssh/sshd_config
    sed -i -e 's:^#\?PasswordAuthentication.*$:PasswordAuthentication no:g' ${D}${sysconfdir}/ssh/sshd_config
    sed -i -e 's:^#\?PermitRootLogin.*$:PermitRootLogin yes:g' ${D}${sysconfdir}/ssh/sshd_config
    
    echo "TrustedUserCAKeys ${sysconfdir}/ssh/ssh_user_key.pub" >> ${D}${sysconfdir}/ssh/sshd_config
    echo "HostKey ${sysconfdir}/ssh/ssh_host_ed25519_key" >> ${D}${sysconfdir}/ssh/sshd_config
    echo "HostCertificate ${sysconfdir}/ssh/ssh_host_ed25519_key-cert.pub" >> ${D}${sysconfdir}/ssh/sshd_config
}
