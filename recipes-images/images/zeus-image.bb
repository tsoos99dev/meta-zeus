SUMMARY = "Zeus image"
DESCRIPTION = "no graphics support in this image"
LICENSE = "MIT"

inherit core-image
inherit extrausers


PASSWD = '\$6\$UBnYUrJUF3wCDbyQ\$LLxZklm7/5oWhQ2dMJODNa7tUp0fQb8IfwyHvCXwZ9We1ZFWSLgu.rkQWFAKK6C4YS9qVQ0vJjnGfOUI1H4yZ/'
EXTRA_USERS_PARAMS = "\
    useradd -u 1200 -d /home/admin -s /bin/bash -p '${PASSWD}' admin; \
    usermod -a -G sudo admin; \
    usermod -L -e 1 root; \
"

IMAGE_ROOTFS_SIZE ?= "8192"

IMAGE_INSTALL = " \
    packagegroup-machine-base \
    packagegroup-core-boot \
    packagegroup-essentials \
"

IMAGE_INSTALL:append:update = " packagegroup-update"

RUST = "rust-cross-canadian-${TRANSLATED_TARGET_ARCH}"
SDK_TOOLCHAIN_LANGS += 'rust'
TOOLCHAIN_HOST_TASK:append = " \
	${@all_multilib_tune_values(d, 'RUST')} \
	nativesdk-binutils \
	nativesdk-gcc \
	nativesdk-glibc-dev \
	nativesdk-libgcc-dev \
	nativesdk-rust \
	nativesdk-cargo \
	nativesdk-rust-tools-clippy \
	nativesdk-rust-tools-rustfmt \
"

TOOLCHAIN_TARGET_TASK:append = " \
	libstd-rs \
"
