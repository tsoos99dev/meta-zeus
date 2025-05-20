DESCRIPTION = "Zeus essentials"
LICENSE = "MIT"

PACKAGE_ARCH = "${MACHINE_ARCH}"

inherit packagegroup

RDEPENDS:${PN} += " \
	sudo \
	bash \
	openssh \
	openssh-sshd \
	rsync \
	htop \
	wget \
	iproute2 \
	step-cli \
	host-cert-renewal \
"
