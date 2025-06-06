require go-common.inc

FILESEXTRAPATHS:prepend := "${FILE_DIRNAME}/go:"

LIC_FILES_CHKSUM = "file://LICENSE;md5=7998cb338f82d15c0eff93b7004d272a"

SRC_URI = "https://golang.org/dl/go${PV}.src.tar.gz;name=main \
           file://0001-cmd-go-make-content-based-hash-generation-less-pedan.patch \
           file://0002-cmd-go-Allow-GOTOOLDIR-to-be-overridden-in-the-envir.patch \
           file://0003-ld-add-soname-to-shareable-objects.patch \
           file://0004-make.bash-override-CC-when-building-dist-and-go_boot.patch \
           file://0005-cmd-dist-separate-host-and-target-builds.patch \
           file://0006-cmd-go-make-GOROOT-precious-by-default.patch \
           file://0007-exec.go-filter-out-build-specific-paths-from-linker-.patch \
           file://0008-src-cmd-dist-buildgo.go-do-not-hardcode-host-compile.patch \
           file://0009-go-Filter-build-paths-on-staticly-linked-arches.patch \
           file://CVE-2025-22870.patch \
           "
SRC_URI[main.sha256sum] = "229c08b600b1446798109fae1f569228102c8473caba8104b6418cb5bc032878"
