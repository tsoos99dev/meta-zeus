DESCRIPTION = "Zeus essentials"
LICENSE = "MIT"

PACKAGE_ARCH = "${MACHINE_ARCH}"

inherit packagegroup

RDEPENDS:${PN} += " \
	libgcc \ 
	sudo \
	bash \
	openssh \
	openssh-sshd \
	rsync \
	htop \
	wget \
	step-cli \
	host-cert-renewal \
"
