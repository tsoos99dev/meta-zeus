# Recipe created by recipetool
# This is the basis of a recipe and may need further editing in order to be fully functional.
# (Feel free to remove these comments when editing.)

# WARNING: the following LICENSE and LIC_FILES_CHKSUM values are best guesses - it is
# your responsibility to verify that the values are complete and correct.
#
# The following license files were not able to be identified and are
# represented as "Unknown" below, you will need to check them yourself:
#   debian/copyright
#   pkg/bcrypt_pbkdf/LICENSE
#
# NOTE: multiple licenses have been detected; they have been separated with &
# in the LICENSE value for now since it is a reasonable assumption that all
# of the licenses apply. If instead there is a choice between the multiple
# licenses then you should change the value to separate the licenses with |
# instead of &. If there is any doubt, check the accompanying documentation
# to determine which situation is applicable.

LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://src/${GO_IMPORT}/LICENSE;md5=fb063f5a63b0a7dc7ef04f8bf6949c9f \
                    file://src/${GO_IMPORT}/debian/copyright;md5=33a7a7723ac76bca54bdaaa6f8cd04d1 \
                    file://src/${GO_IMPORT}/pkg/bcrypt_pbkdf/LICENSE;md5=8a4d31d85177e024ae8df92c9bc2c9d3 \
                    file://src/${GO_IMPORT}/utils/internal/utfbom/LICENSE;md5=d5b81a403268b5ea485b4a2579630c17 \
                    "

SRC_URI = "git://${GO_IMPORT};destsuffix=git/src/${GO_IMPORT};nobranch=1;name=${BPN};protocol=https \
           file://modules.txt \
           "

# Modify these as desired
PV = "1.0+git"
SRCREV = "ea5f95efa74d45f07431199ef693e0e78969c610"
PROVIDES = "step-cli"

S = "${WORKDIR}/git"

LICENSE += " & ${GO_MOD_LICENSES}"
require step-cli/cli-licenses.inc
require step-cli/cli-modules.inc
GO_LINKSHARED = ""
GOBUILDFLAGS:remove = "-buildmode=pie"
GO_IMPORT = "github.com/smallstep/cli"
GO_INSTALL = "${GO_IMPORT}/cmd/step"
SRCREV_FORMAT = "${BPN}"

RDEPENDS:${PN}-dev += "bash"

inherit go-zvendor
