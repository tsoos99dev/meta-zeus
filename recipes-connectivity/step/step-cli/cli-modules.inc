SRC_URI += "${GO_DEPENDENCIES_SRC_URI}"
GO_DEPENDENCIES_SRC_URI = "\
    ${@go_src_uri('github.com/microsoft/go-winio','v0.6.2',path='github.com/Microsoft/go-winio')} \
    ${@go_src_uri('github.com/ThomasRooney/gexpect','v0.0.0-20161231170123-5482f0350944')} \
    ${@go_src_uri('github.com/ccoveille/go-safecast','v1.6.0')} \
    ${@go_src_uri('github.com/fxamacker/cbor','v2.7.0',path='github.com/fxamacker/cbor/v2',pathmajor='/v2')} \
    ${@go_src_uri('github.com/go-jose/go-jose','v3.0.4',path='github.com/go-jose/go-jose/v3',pathmajor='/v3')} \
    ${@go_src_uri('github.com/google/go-cmp','v0.7.0')} \
    ${@go_src_uri('github.com/google/go-tpm','v0.9.3')} \
    ${@go_src_uri('github.com/google/uuid','v1.6.0')} \
    ${@go_src_uri('github.com/icrowley/fake','v0.0.0-20221112152111-d7b7e2276db2')} \
    ${@go_src_uri('github.com/manifoldco/promptui','v0.9.0')} \
    ${@go_src_uri('github.com/pkg/errors','v0.9.1')} \
    ${@go_src_uri('github.com/pquerna/otp','v1.4.0')} \
    ${@go_src_uri('github.com/slackhq/nebula','v1.9.5')} \
    ${@go_src_uri('github.com/smallstep/assert','v0.0.0-20200723003110-82e2b9b3b262')} \
    ${@go_src_uri('github.com/smallstep/certificates','v0.28.3')} \
    ${@go_src_uri('github.com/smallstep/certinfo','v1.13.0')} \
    ${@go_src_uri('github.com/smallstep/cli-utils','v0.12.1')} \
    ${@go_src_uri('github.com/smallstep/go-attestation','v0.4.4-0.20240109183208-413678f90935')} \
    ${@go_src_uri('github.com/smallstep/linkedca','v0.23.0')} \
    ${@go_src_uri('github.com/smallstep/truststore','v0.13.0')} \
    ${@go_src_uri('github.com/smallstep/zcrypto','v0.0.0-20221001003018-1ab2364d2a91')} \
    ${@go_src_uri('github.com/smallstep/zlint','v0.0.0-20220930192201-67fb4aa21910')} \
    ${@go_src_uri('github.com/stretchr/testify','v1.10.0')} \
    ${@go_src_uri('github.com/urfave/cli','v1.22.16')} \
    ${@go_src_uri('github.com/mozilla-services/pkcs7','v0.9.0',path='go.mozilla.org/pkcs7')} \
    ${@go_src_uri('github.com/smallstep/crypto','v0.59.1',path='go.step.sm/crypto')} \
    ${@go_src_uri('go.googlesource.com/crypto','v0.36.0',path='golang.org/x/crypto')} \
    ${@go_src_uri('go.googlesource.com/sys','v0.31.0',path='golang.org/x/sys')} \
    ${@go_src_uri('go.googlesource.com/term','v0.30.0',path='golang.org/x/term')} \
    ${@go_src_uri('go.googlesource.com/protobuf','v1.36.5',path='google.golang.org/protobuf')} \
    ${@go_src_uri('software.sslmate.com/src/go-pkcs12.git','v0.5.0',path='software.sslmate.com/src/go-pkcs12')} \
    ${@go_src_uri('github.com/googleapis/google-cloud-go','v0.118.3',path='cloud.google.com/go')} \
    ${@go_src_uri('github.com/googleapis/google-cloud-go','v0.15.0',path='cloud.google.com/go/auth',subdir='auth')} \
    ${@go_src_uri('github.com/googleapis/google-cloud-go','v0.2.7',path='cloud.google.com/go/auth/oauth2adapt',subdir='auth/oauth2adapt')} \
    ${@go_src_uri('github.com/googleapis/google-cloud-go','v0.6.0',path='cloud.google.com/go/compute/metadata',subdir='compute/metadata')} \
    ${@go_src_uri('github.com/googleapis/google-cloud-go','v1.4.1',path='cloud.google.com/go/iam',subdir='iam')} \
    ${@go_src_uri('github.com/googleapis/google-cloud-go','v0.6.6',path='cloud.google.com/go/longrunning',subdir='longrunning')} \
    ${@go_src_uri('github.com/googleapis/google-cloud-go','v1.18.4',path='cloud.google.com/go/security',subdir='security')} \
    ${@go_src_uri('github.com/imdario/mergo','v1.0.1',path='dario.cat/mergo')} \
    ${@go_src_uri('github.com/FiloSottile/edwards25519','v1.1.0',path='filippo.io/edwards25519')} \
    ${@go_src_uri('github.com/AndreasBriese/bbloom','v0.0.0-20190825152654-46b345b51c96')} \
    ${@go_src_uri('github.com/azure/azure-sdk-for-go','v1.17.0',path='github.com/Azure/azure-sdk-for-go/sdk/azcore',subdir='sdk/azcore')} \
    ${@go_src_uri('github.com/azure/azure-sdk-for-go','v1.8.2',path='github.com/Azure/azure-sdk-for-go/sdk/azidentity',subdir='sdk/azidentity')} \
    ${@go_src_uri('github.com/azure/azure-sdk-for-go','v1.10.0',path='github.com/Azure/azure-sdk-for-go/sdk/internal',subdir='sdk/internal')} \
    ${@go_src_uri('github.com/azure/azure-sdk-for-go','v0.10.0',path='github.com/Azure/azure-sdk-for-go/sdk/keyvault/azkeys',subdir='sdk/keyvault/azkeys')} \
    ${@go_src_uri('github.com/azure/azure-sdk-for-go','v0.7.1',path='github.com/Azure/azure-sdk-for-go/sdk/keyvault/internal',subdir='sdk/keyvault/internal')} \
    ${@go_src_uri('github.com/azuread/microsoft-authentication-library-for-go','v1.3.3',path='github.com/AzureAD/microsoft-authentication-library-for-go')} \
    ${@go_src_uri('github.com/Masterminds/goutils','v1.1.1')} \
    ${@go_src_uri('github.com/masterminds/semver','v3.3.0',path='github.com/Masterminds/semver/v3',pathmajor='/v3')} \
    ${@go_src_uri('github.com/masterminds/sprig','v3.3.0',path='github.com/Masterminds/sprig/v3',pathmajor='/v3')} \
    ${@go_src_uri('github.com/asaskevich/govalidator','v0.0.0-20210307081110-f21760c49a8d')} \
    ${@go_src_uri('github.com/beorn7/perks','v1.0.1')} \
    ${@go_src_uri('github.com/boombuler/barcode','v1.0.1')} \
    ${@go_src_uri('github.com/cespare/xxhash','v1.1.0')} \
    ${@go_src_uri('github.com/cespare/xxhash','v2.3.0',path='github.com/cespare/xxhash/v2',pathmajor='/v2')} \
    ${@go_src_uri('github.com/chzyer/readline','v1.5.1')} \
    ${@go_src_uri('github.com/coreos/go-oidc','v3.13.0',path='github.com/coreos/go-oidc/v3',pathmajor='/v3')} \
    ${@go_src_uri('github.com/corpix/uarand','v0.2.0')} \
    ${@go_src_uri('github.com/cpuguy83/go-md2man','v2.0.5',path='github.com/cpuguy83/go-md2man/v2',pathmajor='/v2')} \
    ${@go_src_uri('github.com/creack/pty','v1.1.18')} \
    ${@go_src_uri('github.com/davecgh/go-spew','v1.1.1')} \
    ${@go_src_uri('github.com/hypermodeinc/badger','v1.6.2',path='github.com/dgraph-io/badger')} \
    ${@go_src_uri('github.com/dgraph-io/badger','v2.2007.4',path='github.com/dgraph-io/badger/v2',pathmajor='/v2')} \
    ${@go_src_uri('github.com/dgraph-io/ristretto','v0.1.1')} \
    ${@go_src_uri('github.com/dgryski/go-farm','v0.0.0-20200201041132-a6ae2369ad13')} \
    ${@go_src_uri('github.com/dustin/go-humanize','v1.0.1')} \
    ${@go_src_uri('github.com/felixge/httpsnoop','v1.0.4')} \
    ${@go_src_uri('github.com/go-chi/chi','v5.2.1',path='github.com/go-chi/chi/v5',pathmajor='/v5')} \
    ${@go_src_uri('github.com/go-jose/go-jose','v4.0.5',path='github.com/go-jose/go-jose/v4',pathmajor='/v4')} \
    ${@go_src_uri('github.com/go-logr/logr','v1.4.2')} \
    ${@go_src_uri('github.com/go-logr/stdr','v1.2.2')} \
    ${@go_src_uri('github.com/go-sql-driver/mysql','v1.8.1')} \
    ${@go_src_uri('github.com/golang-jwt/jwt','v5.2.1',path='github.com/golang-jwt/jwt/v5',pathmajor='/v5')} \
    ${@go_src_uri('github.com/golang/glog','v1.2.4')} \
    ${@go_src_uri('github.com/golang/protobuf','v1.5.4')} \
    ${@go_src_uri('github.com/golang/snappy','v0.0.4')} \
    ${@go_src_uri('github.com/google/btree','v1.1.3')} \
    ${@go_src_uri('github.com/google/certificate-transparency-go','v1.2.2')} \
    ${@go_src_uri('github.com/google/go-tpm-tools','v0.4.5')} \
    ${@go_src_uri('github.com/google/go-tspi','v0.3.0')} \
    ${@go_src_uri('github.com/google/s2a-go','v0.1.9')} \
    ${@go_src_uri('github.com/googleapis/enterprise-certificate-proxy','v0.3.5')} \
    ${@go_src_uri('github.com/googleapis/gax-go','v2.14.1',path='github.com/googleapis/gax-go/v2',pathmajor='/v2')} \
    ${@go_src_uri('github.com/huandu/xstrings','v1.5.0')} \
    ${@go_src_uri('github.com/jackc/pgpassfile','v1.0.0')} \
    ${@go_src_uri('github.com/jackc/pgservicefile','v0.0.0-20221227161230-091c0ba34f0a')} \
    ${@go_src_uri('github.com/jackc/pgx','v5.6.0',path='github.com/jackc/pgx/v5',pathmajor='/v5')} \
    ${@go_src_uri('github.com/jackc/puddle','v2.2.1',path='github.com/jackc/puddle/v2',pathmajor='/v2')} \
    ${@go_src_uri('github.com/kballard/go-shellquote','v0.0.0-20180428030007-95032a82bc51')} \
    ${@go_src_uri('github.com/klauspost/compress','v1.17.11')} \
    ${@go_src_uri('github.com/kr/pty','v1.1.8')} \
    ${@go_src_uri('github.com/kylelemons/godebug','v1.1.0')} \
    ${@go_src_uri('github.com/mattn/go-colorable','v0.1.13')} \
    ${@go_src_uri('github.com/mattn/go-isatty','v0.0.20')} \
    ${@go_src_uri('github.com/mgutz/ansi','v0.0.0-20200706080929-d51e80ef957d')} \
    ${@go_src_uri('github.com/mitchellh/copystructure','v1.2.0')} \
    ${@go_src_uri('github.com/mitchellh/reflectwalk','v1.0.2')} \
    ${@go_src_uri('github.com/munnerz/goautoneg','v0.0.0-20191010083416-a7dc8b61c822')} \
    ${@go_src_uri('github.com/newrelic/go-agent','v3.37.0',path='github.com/newrelic/go-agent/v3',pathmajor='/v3')} \
    ${@go_src_uri('github.com/peterbourgon/diskv','v3.0.1',path='github.com/peterbourgon/diskv/v3',pathmajor='/v3')} \
    ${@go_src_uri('github.com/pkg/browser','v0.0.0-20240102092130-5ac0b6a4141c')} \
    ${@go_src_uri('github.com/pmezard/go-difflib','v1.0.0')} \
    ${@go_src_uri('github.com/prometheus/client_golang','v1.21.1')} \
    ${@go_src_uri('github.com/prometheus/client_model','v0.6.1')} \
    ${@go_src_uri('github.com/prometheus/common','v0.62.0')} \
    ${@go_src_uri('github.com/prometheus/procfs','v0.15.1')} \
    ${@go_src_uri('github.com/rs/xid','v1.6.0')} \
    ${@go_src_uri('github.com/russross/blackfriday','v2.1.0',path='github.com/russross/blackfriday/v2',pathmajor='/v2')} \
    ${@go_src_uri('github.com/schollz/jsonstore','v1.1.0')} \
    ${@go_src_uri('github.com/shopspring/decimal','v1.4.0')} \
    ${@go_src_uri('github.com/shurcooL/sanitized_anchor_name','v1.0.0')} \
    ${@go_src_uri('github.com/sirupsen/logrus','v1.9.3')} \
    ${@go_src_uri('github.com/smallstep/nosql','v0.7.0')} \
    ${@go_src_uri('github.com/smallstep/pkcs7','v0.2.1')} \
    ${@go_src_uri('github.com/smallstep/scep','v0.0.0-20240926084937-8cf1ca453101')} \
    ${@go_src_uri('github.com/spf13/cast','v1.7.0')} \
    ${@go_src_uri('github.com/weppos/publicsuffix-go','v0.20.0')} \
    ${@go_src_uri('github.com/x448/float16','v0.8.4')} \
    ${@go_src_uri('github.com/etcd-io/bbolt','v1.3.11',path='go.etcd.io/bbolt')} \
    ${@go_src_uri('github.com/open-telemetry/opentelemetry-go-instrumentation','v1.1.0',path='go.opentelemetry.io/auto/sdk',subdir='sdk')} \
    ${@go_src_uri('github.com/open-telemetry/opentelemetry-go-contrib','v0.59.0',path='go.opentelemetry.io/contrib/instrumentation/google.golang.org/grpc/otelgrpc',subdir='instrumentation/google.golang.org/grpc/otelgrpc')} \
    ${@go_src_uri('github.com/open-telemetry/opentelemetry-go-contrib','v0.59.0',path='go.opentelemetry.io/contrib/instrumentation/net/http/otelhttp',subdir='instrumentation/net/http/otelhttp')} \
    ${@go_src_uri('github.com/open-telemetry/opentelemetry-go','v1.34.0',path='go.opentelemetry.io/otel')} \
    ${@go_src_uri('github.com/open-telemetry/opentelemetry-go','v1.34.0',path='go.opentelemetry.io/otel/metric',subdir='metric')} \
    ${@go_src_uri('github.com/open-telemetry/opentelemetry-go','v1.34.0',path='go.opentelemetry.io/otel/trace',subdir='trace')} \
    ${@go_src_uri('go.googlesource.com/exp','v0.0.0-20240531132922-fd00a4e0eefc',path='golang.org/x/exp')} \
    ${@go_src_uri('go.googlesource.com/net','v0.37.0',path='golang.org/x/net')} \
    ${@go_src_uri('go.googlesource.com/oauth2','v0.28.0',path='golang.org/x/oauth2')} \
    ${@go_src_uri('go.googlesource.com/sync','v0.12.0',path='golang.org/x/sync')} \
    ${@go_src_uri('go.googlesource.com/text','v0.23.0',path='golang.org/x/text')} \
    ${@go_src_uri('go.googlesource.com/time','v0.10.0',path='golang.org/x/time')} \
    ${@go_src_uri('github.com/googleapis/google-api-go-client','v0.224.0',path='google.golang.org/api')} \
    ${@go_src_uri('github.com/googleapis/go-genproto','v0.0.0-20250303144028-a0af3efb3deb',path='google.golang.org/genproto')} \
    ${@go_src_uri('github.com/googleapis/go-genproto','v0.0.0-20250303144028-a0af3efb3deb',path='google.golang.org/genproto/googleapis/api',subdir='googleapis/api')} \
    ${@go_src_uri('github.com/googleapis/go-genproto','v0.0.0-20250303144028-a0af3efb3deb',path='google.golang.org/genproto/googleapis/rpc',subdir='googleapis/rpc')} \
    ${@go_src_uri('github.com/grpc/grpc-go','v1.71.0',path='google.golang.org/grpc')} \
    ${@go_src_uri('github.com/grpc/grpc-go','v1.5.1',path='google.golang.org/grpc/cmd/protoc-gen-go-grpc',subdir='cmd/protoc-gen-go-grpc')} \
    ${@go_src_uri('gopkg.in/yaml.v3','v3.0.1')} \
    ${@go_src_uri('github.com/DHowett/go-plist.git','v1.0.0',path='howett.net/plist')} \
    ${@go_src_uri('github.com/kubernetes/klog','v2.130.1',path='k8s.io/klog/v2',pathmajor='/v2')} \
"

# github.com/Microsoft/go-winio@v0.6.2 => 3c9576c9346a1892dee136329e7e15309e82fb4f
SRCREV_github.com.Microsoft.go-winio = "3c9576c9346a1892dee136329e7e15309e82fb4f"
# github.com/ThomasRooney/gexpect@v0.0.0-20161231170123-5482f0350944 => 5482f03509440585d13d8f648989e05903001842
SRCREV_github.com.ThomasRooney.gexpect = "5482f03509440585d13d8f648989e05903001842"
# github.com/ccoveille/go-safecast@v1.6.0 => b2329de595e3af90fd9bab525234a595911fbce8
SRCREV_github.com.ccoveille.go-safecast = "b2329de595e3af90fd9bab525234a595911fbce8"
# github.com/fxamacker/cbor/v2@v2.7.0 => 02b69dbb52f4ecf450b3aa5e9a04b7a0b4bf409a
SRCREV_github.com.fxamacker.cbor.v2 = "02b69dbb52f4ecf450b3aa5e9a04b7a0b4bf409a"
# github.com/go-jose/go-jose/v3@v3.0.4 => 5253038e3b5f64a2200b5b6c72107bf9823f4358
SRCREV_github.com.go-jose.go-jose.v3 = "5253038e3b5f64a2200b5b6c72107bf9823f4358"
# github.com/google/go-cmp@v0.7.0 => 9b12f366a942ebc7254abc7f32ca05068b455fb7
SRCREV_github.com.google.go-cmp = "9b12f366a942ebc7254abc7f32ca05068b455fb7"
# github.com/google/go-tpm@v0.9.3 => a21381d5aaa61c04bcb8d2a853f20e6960cd9d3c
SRCREV_github.com.google.go-tpm = "a21381d5aaa61c04bcb8d2a853f20e6960cd9d3c"
# github.com/google/uuid@v1.6.0 => 0f11ee6918f41a04c201eceeadf612a377bc7fbc
SRCREV_github.com.google.uuid = "0f11ee6918f41a04c201eceeadf612a377bc7fbc"
# github.com/icrowley/fake@v0.0.0-20221112152111-d7b7e2276db2 => d7b7e2276db2cdde9a0fca659e469cd791501819
SRCREV_github.com.icrowley.fake = "d7b7e2276db2cdde9a0fca659e469cd791501819"
# github.com/manifoldco/promptui@v0.9.0 => c2e487d3597f59bcf76b24c9e80679740a72212b
SRCREV_github.com.manifoldco.promptui = "c2e487d3597f59bcf76b24c9e80679740a72212b"
# github.com/pkg/errors@v0.9.1 => 614d223910a179a466c1767a985424175c39b465
SRCREV_github.com.pkg.errors = "614d223910a179a466c1767a985424175c39b465"
# github.com/pquerna/otp@v1.4.0 => 87d222c6866be9f43282a4ec79330a76c10f2e18
SRCREV_github.com.pquerna.otp = "87d222c6866be9f43282a4ec79330a76c10f2e18"
# github.com/slackhq/nebula@v1.9.5 => b55b9019a72c7320b5c6dd54d2c31ad89f1e8990
SRCREV_github.com.slackhq.nebula = "b55b9019a72c7320b5c6dd54d2c31ad89f1e8990"
# github.com/smallstep/assert@v0.0.0-20200723003110-82e2b9b3b262 => 82e2b9b3b262f82582f3c8795e6804c1cd131475
SRCREV_github.com.smallstep.assert = "82e2b9b3b262f82582f3c8795e6804c1cd131475"
# github.com/smallstep/certificates@v0.28.3 => 0cf1c5688708ec4a910c007d7f151c617b722268
SRCREV_github.com.smallstep.certificates = "0cf1c5688708ec4a910c007d7f151c617b722268"
# github.com/smallstep/certinfo@v1.13.0 => 292fdacc116019d308aee217ec543b002777eb02
SRCREV_github.com.smallstep.certinfo = "292fdacc116019d308aee217ec543b002777eb02"
# github.com/smallstep/cli-utils@v0.12.1 => 7446716c6ced3cbde0c932e085c9ff0d44243ff1
SRCREV_github.com.smallstep.cli-utils = "7446716c6ced3cbde0c932e085c9ff0d44243ff1"
# github.com/smallstep/go-attestation@v0.4.4-0.20240109183208-413678f90935 => 413678f90935e58ed61f58ed7a4c4f3c72ce1266
SRCREV_github.com.smallstep.go-attestation = "413678f90935e58ed61f58ed7a4c4f3c72ce1266"
# github.com/smallstep/linkedca@v0.23.0 => 2905a10a982888fad8c7a04d64ac2da1bcdb8734
SRCREV_github.com.smallstep.linkedca = "2905a10a982888fad8c7a04d64ac2da1bcdb8734"
# github.com/smallstep/truststore@v0.13.0 => 3b59976a0379cedc9319fa4979037b3ad4293f9b
SRCREV_github.com.smallstep.truststore = "3b59976a0379cedc9319fa4979037b3ad4293f9b"
# github.com/smallstep/zcrypto@v0.0.0-20221001003018-1ab2364d2a91 => 1ab2364d2a91fbbe73ffdadfc5ba0a7a4740a0e1
SRCREV_github.com.smallstep.zcrypto = "1ab2364d2a91fbbe73ffdadfc5ba0a7a4740a0e1"
# github.com/smallstep/zlint@v0.0.0-20220930192201-67fb4aa21910 => 67fb4aa2191063e183c4df404775b6a5e1977e88
SRCREV_github.com.smallstep.zlint = "67fb4aa2191063e183c4df404775b6a5e1977e88"
# github.com/stretchr/testify@v1.10.0 => 89cbdd9e7b39eb58896d316a7495597d3aba4371
SRCREV_github.com.stretchr.testify = "89cbdd9e7b39eb58896d316a7495597d3aba4371"
# github.com/urfave/cli@v1.22.16 => 77bdfaba349380095e742cb8aedbaf4e68d9f3b2
SRCREV_github.com.urfave.cli = "77bdfaba349380095e742cb8aedbaf4e68d9f3b2"
# go.mozilla.org/pkcs7@v0.9.0 => 690b05eb2deea0456847d4790fae75c023a87b01
SRCREV_go.mozilla.org.pkcs7 = "690b05eb2deea0456847d4790fae75c023a87b01"
# go.step.sm/crypto@v0.59.1 => 5e0f3ecf9547bb6335a56b8a3033b96994345a61
SRCREV_go.step.sm.crypto = "5e0f3ecf9547bb6335a56b8a3033b96994345a61"
# golang.org/x/crypto@v0.36.0 => 49bf5b80c8108983f588ecabd7bf996e6e63a515
SRCREV_golang.org.x.crypto = "49bf5b80c8108983f588ecabd7bf996e6e63a515"
# golang.org/x/sys@v0.31.0 => 74cfc93a99be6ca6f193856132e6799065b071af
SRCREV_golang.org.x.sys = "74cfc93a99be6ca6f193856132e6799065b071af"
# golang.org/x/term@v0.30.0 => 04218fdaf78fa213d4e82c988184a250f6c354c2
SRCREV_golang.org.x.term = "04218fdaf78fa213d4e82c988184a250f6c354c2"
# google.golang.org/protobuf@v1.36.5 => f09e239720f1bcd654d565107b1d4feea184d552
SRCREV_google.golang.org.protobuf = "f09e239720f1bcd654d565107b1d4feea184d552"
# software.sslmate.com/src/go-pkcs12@v0.5.0 => fa70679f0f1622a2705336a97225ee8d6c555f96
SRCREV_software.sslmate.com.src.go-pkcs12 = "fa70679f0f1622a2705336a97225ee8d6c555f96"
# cloud.google.com/go@v0.118.3 => 77c700f6dbe6618f042779d01f561c95a8b94ce2
SRCREV_cloud.google.com.go = "77c700f6dbe6618f042779d01f561c95a8b94ce2"
# cloud.google.com/go/auth@v0.15.0 => f2d581c90e64dd7589b94178750e53f9edce661f
SRCREV_cloud.google.com.go.auth = "f2d581c90e64dd7589b94178750e53f9edce661f"
# cloud.google.com/go/auth/oauth2adapt@v0.2.7 => 8c89cf79e88ced24319d74555f8170dab3071c67
SRCREV_cloud.google.com.go.auth.oauth2adapt = "8c89cf79e88ced24319d74555f8170dab3071c67"
# cloud.google.com/go/compute/metadata@v0.6.0 => c33cc6112a45ef9cbb0a8940bc49e3126a92f22f
SRCREV_cloud.google.com.go.compute.metadata = "c33cc6112a45ef9cbb0a8940bc49e3126a92f22f"
# cloud.google.com/go/iam@v1.4.1 => ad0414e2769269ea15aaa4635b7bed5ebabefc62
SRCREV_cloud.google.com.go.iam = "ad0414e2769269ea15aaa4635b7bed5ebabefc62"
# cloud.google.com/go/longrunning@v0.6.6 => ae796a07b934b5ee24e8fa77e1816cc11a6325d5
SRCREV_cloud.google.com.go.longrunning = "ae796a07b934b5ee24e8fa77e1816cc11a6325d5"
# cloud.google.com/go/security@v1.18.4 => ae796a07b934b5ee24e8fa77e1816cc11a6325d5
SRCREV_cloud.google.com.go.security = "ae796a07b934b5ee24e8fa77e1816cc11a6325d5"
# dario.cat/mergo@v1.0.1 => 59ea6a9cd9f9c60cb6b1c58476f76cd3172ccebf
SRCREV_dario.cat.mergo = "59ea6a9cd9f9c60cb6b1c58476f76cd3172ccebf"
# filippo.io/edwards25519@v1.1.0 => 325f520de716c1d2d2b4e8dc2f82c7ccc5fac764
SRCREV_filippo.io.edwards25519 = "325f520de716c1d2d2b4e8dc2f82c7ccc5fac764"
# github.com/AndreasBriese/bbloom@v0.0.0-20190825152654-46b345b51c96 => 46b345b51c9667fcbaad862a370d73bd7aa802b6
SRCREV_github.com.AndreasBriese.bbloom = "46b345b51c9667fcbaad862a370d73bd7aa802b6"
# github.com/Azure/azure-sdk-for-go/sdk/azcore@v1.17.0 => 525870f1df4aec2eb4c68482f9c45d70acd2f948
SRCREV_github.com.Azure.azure-sdk-for-go.sdk.azcore = "525870f1df4aec2eb4c68482f9c45d70acd2f948"
# github.com/Azure/azure-sdk-for-go/sdk/azidentity@v1.8.2 => 54746265023eaf4025bb53f3b869cae2489d1f27
SRCREV_github.com.Azure.azure-sdk-for-go.sdk.azidentity = "54746265023eaf4025bb53f3b869cae2489d1f27"
# github.com/Azure/azure-sdk-for-go/sdk/internal@v1.10.0 => 62f7a3d0e97610a8303e313f25ab4502766b8886
SRCREV_github.com.Azure.azure-sdk-for-go.sdk.internal = "62f7a3d0e97610a8303e313f25ab4502766b8886"
# github.com/Azure/azure-sdk-for-go/sdk/keyvault/azkeys@v0.10.0 => e9e6b6281766a4e71ea0ee0b7268692009e2794b
SRCREV_github.com.Azure.azure-sdk-for-go.sdk.keyvault.azkeys = "e9e6b6281766a4e71ea0ee0b7268692009e2794b"
# github.com/Azure/azure-sdk-for-go/sdk/keyvault/internal@v0.7.1 => f30af3273f0b5d4989f0532265cc70cb8245467a
SRCREV_github.com.Azure.azure-sdk-for-go.sdk.keyvault.internal = "f30af3273f0b5d4989f0532265cc70cb8245467a"
# github.com/AzureAD/microsoft-authentication-library-for-go@v1.3.3 => c4a79484510551692033f11669eb85075fe1abef
SRCREV_github.com.AzureAD.microsoft-authentication-library-for-go = "c4a79484510551692033f11669eb85075fe1abef"
# github.com/Masterminds/goutils@v1.1.1 => f1923532a168b8203bfe956d8cd3b17ebece5982
SRCREV_github.com.Masterminds.goutils = "f1923532a168b8203bfe956d8cd3b17ebece5982"
# github.com/Masterminds/semver/v3@v3.3.0 => e6e3d4d3cb1073f0ab8fb3d4be0869d1687b75f9
SRCREV_github.com.Masterminds.semver.v3 = "e6e3d4d3cb1073f0ab8fb3d4be0869d1687b75f9"
# github.com/Masterminds/sprig/v3@v3.3.0 => e708470d529a10ac1a3f02ab6fdd339b65958372
SRCREV_github.com.Masterminds.sprig.v3 = "e708470d529a10ac1a3f02ab6fdd339b65958372"
# github.com/asaskevich/govalidator@v0.0.0-20210307081110-f21760c49a8d => f21760c49a8d602d863493de796926d2a5c1138d
SRCREV_github.com.asaskevich.govalidator = "f21760c49a8d602d863493de796926d2a5c1138d"
# github.com/beorn7/perks@v1.0.1 => 37c8de3658fcb183f997c4e13e8337516ab753e6
SRCREV_github.com.beorn7.perks = "37c8de3658fcb183f997c4e13e8337516ab753e6"
# github.com/boombuler/barcode@v1.0.1 => 6c824513baccd76c674ce72112c29ef550187b08
SRCREV_github.com.boombuler.barcode = "6c824513baccd76c674ce72112c29ef550187b08"
# github.com/cespare/xxhash@v1.1.0 => 569f7c8abf1f58d9043ab804d364483cb1c853b6
SRCREV_github.com.cespare.xxhash = "569f7c8abf1f58d9043ab804d364483cb1c853b6"
# github.com/cespare/xxhash/v2@v2.3.0 => 998dce232f17418a7a5721ecf87ca714025a3243
SRCREV_github.com.cespare.xxhash.v2 = "998dce232f17418a7a5721ecf87ca714025a3243"
# github.com/chzyer/readline@v1.5.1 => 7f93d88cd5ffa0e805d58d2f9fc3191be15ec668
SRCREV_github.com.chzyer.readline = "7f93d88cd5ffa0e805d58d2f9fc3191be15ec668"
# github.com/coreos/go-oidc/v3@v3.13.0 => 60d436e8ea63774802ad6a0955f0c386edfefa8b
SRCREV_github.com.coreos.go-oidc.v3 = "60d436e8ea63774802ad6a0955f0c386edfefa8b"
# github.com/corpix/uarand@v0.2.0 => 742da754045fa14f013d1e2144fa50b0987f5c59
SRCREV_github.com.corpix.uarand = "742da754045fa14f013d1e2144fa50b0987f5c59"
# github.com/cpuguy83/go-md2man/v2@v2.0.5 => b14773d4db11046c50d0d1c05955839604aae991
SRCREV_github.com.cpuguy83.go-md2man.v2 = "b14773d4db11046c50d0d1c05955839604aae991"
# github.com/creack/pty@v1.1.18 => d301b27172d49dd53f82d18d37105669ba84fbe1
SRCREV_github.com.creack.pty = "d301b27172d49dd53f82d18d37105669ba84fbe1"
# github.com/davecgh/go-spew@v1.1.1 => 8991bc29aa16c548c550c7ff78260e27b9ab7c73
SRCREV_github.com.davecgh.go-spew = "8991bc29aa16c548c550c7ff78260e27b9ab7c73"
# github.com/dgraph-io/badger@v1.6.2 => c5d36c806aa80954a24606a982a475a717d44de2
SRCREV_github.com.dgraph-io.badger = "c5d36c806aa80954a24606a982a475a717d44de2"
# github.com/dgraph-io/badger/v2@v2.2007.4 => 156819ccb106bbeb207e985f561780e2929344bc
SRCREV_github.com.dgraph-io.badger.v2 = "156819ccb106bbeb207e985f561780e2929344bc"
# github.com/dgraph-io/ristretto@v0.1.1 => aab738ff805bb58edc81f5ab1218f7c81ef8a5eb
SRCREV_github.com.dgraph-io.ristretto = "aab738ff805bb58edc81f5ab1218f7c81ef8a5eb"
# github.com/dgryski/go-farm@v0.0.0-20200201041132-a6ae2369ad13 => a6ae2369ad13dc757768086f0cb902728c7e03e5
SRCREV_github.com.dgryski.go-farm = "a6ae2369ad13dc757768086f0cb902728c7e03e5"
# github.com/dustin/go-humanize@v1.0.1 => 9ec74ab2f7a7161664182fd4e5e292fccffbc75f
SRCREV_github.com.dustin.go-humanize = "9ec74ab2f7a7161664182fd4e5e292fccffbc75f"
# github.com/felixge/httpsnoop@v1.0.4 => c5817c27ec125409c069052fdd171023c353501c
SRCREV_github.com.felixge.httpsnoop = "c5817c27ec125409c069052fdd171023c353501c"
# github.com/go-chi/chi/v5@v5.2.1 => 71307f9b7e4e9527638bc951c42b782cd1560331
SRCREV_github.com.go-chi.chi.v5 = "71307f9b7e4e9527638bc951c42b782cd1560331"
# github.com/go-jose/go-jose/v4@v4.0.5 => 99b346cec4e86d102284642c5dcbe9bb0cacfc22
SRCREV_github.com.go-jose.go-jose.v4 = "99b346cec4e86d102284642c5dcbe9bb0cacfc22"
# github.com/go-logr/logr@v1.4.2 => 1205f429d540b8b81c2b75a38943afb738dac223
SRCREV_github.com.go-logr.logr = "1205f429d540b8b81c2b75a38943afb738dac223"
# github.com/go-logr/stdr@v1.2.2 => 521af2addfa7c81c8a65d0e85ed34bb6bb6dc262
SRCREV_github.com.go-logr.stdr = "521af2addfa7c81c8a65d0e85ed34bb6bb6dc262"
# github.com/go-sql-driver/mysql@v1.8.1 => 4395c45fd098a81c5251667cda111f94c693ab14
SRCREV_github.com.go-sql-driver.mysql = "4395c45fd098a81c5251667cda111f94c693ab14"
# github.com/golang-jwt/jwt/v5@v5.2.1 => 80dccb9209ebe7b503c067dc830fcbd4aa2e74eb
SRCREV_github.com.golang-jwt.jwt.v5 = "80dccb9209ebe7b503c067dc830fcbd4aa2e74eb"
# github.com/golang/glog@v1.2.4 => a0e3c40a0ed0cecc58c84e7684d9ce55a54044ee
SRCREV_github.com.golang.glog = "a0e3c40a0ed0cecc58c84e7684d9ce55a54044ee"
# github.com/golang/protobuf@v1.5.4 => 75de7c059e36b64f01d0dd234ff2fff404ec3374
SRCREV_github.com.golang.protobuf = "75de7c059e36b64f01d0dd234ff2fff404ec3374"
# github.com/golang/snappy@v0.0.4 => 544b4180ac705b7605231d4a4550a1acb22a19fe
SRCREV_github.com.golang.snappy = "544b4180ac705b7605231d4a4550a1acb22a19fe"
# github.com/google/btree@v1.1.3 => aeba20f7a1e1315badec4eca4fdc9f754f5f880a
SRCREV_github.com.google.btree = "aeba20f7a1e1315badec4eca4fdc9f754f5f880a"
# github.com/google/certificate-transparency-go@v1.2.2 => 6b2be7508011bf6c81c13a9ec532754e77c9bc79
SRCREV_github.com.google.certificate-transparency-go = "6b2be7508011bf6c81c13a9ec532754e77c9bc79"
# github.com/google/go-tpm-tools@v0.4.5 => 09bf13f024cf2983de8582df9e9fa342fcf249f4
SRCREV_github.com.google.go-tpm-tools = "09bf13f024cf2983de8582df9e9fa342fcf249f4"
# github.com/google/go-tspi@v0.3.0 => 05baef61e123181de84de4de0de5100427f2fc80
SRCREV_github.com.google.go-tspi = "05baef61e123181de84de4de0de5100427f2fc80"
# github.com/google/s2a-go@v0.1.9 => b293be1aa7a6e6e4565f9967c093dd412253b267
SRCREV_github.com.google.s2a-go = "b293be1aa7a6e6e4565f9967c093dd412253b267"
# github.com/googleapis/enterprise-certificate-proxy@v0.3.5 => ee2e68b4da8887a149c6891a1dddf304dc9fc370
SRCREV_github.com.googleapis.enterprise-certificate-proxy = "ee2e68b4da8887a149c6891a1dddf304dc9fc370"
# github.com/googleapis/gax-go/v2@v2.14.1 => 643488bae32330e5197dedf8fad95d2159cef676
SRCREV_github.com.googleapis.gax-go.v2 = "643488bae32330e5197dedf8fad95d2159cef676"
# github.com/huandu/xstrings@v1.5.0 => 1040c040a86302c5a4de066f5653bccdff2ecd2f
SRCREV_github.com.huandu.xstrings = "1040c040a86302c5a4de066f5653bccdff2ecd2f"
# github.com/jackc/pgpassfile@v1.0.0 => 99d8e8e28945ffceaf75b0299fcb2bb656b8a683
SRCREV_github.com.jackc.pgpassfile = "99d8e8e28945ffceaf75b0299fcb2bb656b8a683"
# github.com/jackc/pgservicefile@v0.0.0-20221227161230-091c0ba34f0a => 091c0ba34f0a65a78ab8d0e313fde0695c0f7186
SRCREV_github.com.jackc.pgservicefile = "091c0ba34f0a65a78ab8d0e313fde0695c0f7186"
# github.com/jackc/pgx/v5@v5.6.0 => 572d7fff326f1befdbf9f36a0c0a2b6661432079
SRCREV_github.com.jackc.pgx.v5 = "572d7fff326f1befdbf9f36a0c0a2b6661432079"
# github.com/jackc/puddle/v2@v2.2.1 => 825ae07315635013021d71e1c2cac71c367f2902
SRCREV_github.com.jackc.puddle.v2 = "825ae07315635013021d71e1c2cac71c367f2902"
# github.com/kballard/go-shellquote@v0.0.0-20180428030007-95032a82bc51 => 95032a82bc518f77982ea72343cc1ade730072f0
SRCREV_github.com.kballard.go-shellquote = "95032a82bc518f77982ea72343cc1ade730072f0"
# github.com/klauspost/compress@v1.17.11 => 72cd4a92a8b13e722763e6b6a3467163c2028d3d
SRCREV_github.com.klauspost.compress = "72cd4a92a8b13e722763e6b6a3467163c2028d3d"
# github.com/kr/pty@v1.1.8 => 24b51915630e1d9d3c6adf15a3a96796bbc3cd43
SRCREV_github.com.kr.pty = "24b51915630e1d9d3c6adf15a3a96796bbc3cd43"
# github.com/kylelemons/godebug@v1.1.0 => 9ff306d4fbead574800b66369df5b6144732d58e
SRCREV_github.com.kylelemons.godebug = "9ff306d4fbead574800b66369df5b6144732d58e"
# github.com/mattn/go-colorable@v0.1.13 => 11a925cff3d38c293ddc8c05a16b504e3e2c63be
SRCREV_github.com.mattn.go-colorable = "11a925cff3d38c293ddc8c05a16b504e3e2c63be"
# github.com/mattn/go-isatty@v0.0.20 => a7c02353c47bc4ec6b30dc9628154ae4fe760c11
SRCREV_github.com.mattn.go-isatty = "a7c02353c47bc4ec6b30dc9628154ae4fe760c11"
# github.com/mgutz/ansi@v0.0.0-20200706080929-d51e80ef957d => d51e80ef957dba7f19388ca64afefbd5a096af30
SRCREV_github.com.mgutz.ansi = "d51e80ef957dba7f19388ca64afefbd5a096af30"
# github.com/mitchellh/copystructure@v1.2.0 => d4ce1f938f7a7ea2a40bff4544b56be9c00b5e84
SRCREV_github.com.mitchellh.copystructure = "d4ce1f938f7a7ea2a40bff4544b56be9c00b5e84"
# github.com/mitchellh/reflectwalk@v1.0.2 => e0c24fdb021963cd2c4013097a0b993a7c4e344f
SRCREV_github.com.mitchellh.reflectwalk = "e0c24fdb021963cd2c4013097a0b993a7c4e344f"
# github.com/munnerz/goautoneg@v0.0.0-20191010083416-a7dc8b61c822 => a7dc8b61c822528f973a5e4e7b272055c6fdb43e
SRCREV_github.com.munnerz.goautoneg = "a7dc8b61c822528f973a5e4e7b272055c6fdb43e"
# github.com/newrelic/go-agent/v3@v3.37.0 => c081f78595911a91fe1f86dc9a84a95d417a8b19
SRCREV_github.com.newrelic.go-agent.v3 = "c081f78595911a91fe1f86dc9a84a95d417a8b19"
# github.com/peterbourgon/diskv/v3@v3.0.1 => 2566386005f64f58f34e1ff32907800a64537e6a
SRCREV_github.com.peterbourgon.diskv.v3 = "2566386005f64f58f34e1ff32907800a64537e6a"
# github.com/pkg/browser@v0.0.0-20240102092130-5ac0b6a4141c => 5ac0b6a4141c771a0d3a081c36b87c977cf9c7db
SRCREV_github.com.pkg.browser = "5ac0b6a4141c771a0d3a081c36b87c977cf9c7db"
# github.com/pmezard/go-difflib@v1.0.0 => 792786c7400a136282c1664665ae0a8db921c6c2
SRCREV_github.com.pmezard.go-difflib = "792786c7400a136282c1664665ae0a8db921c6c2"
# github.com/prometheus/client_golang@v1.21.1 => 8a42da3e4bfdc7ea408fcd886064dffc4daffb22
SRCREV_github.com.prometheus.client_golang = "8a42da3e4bfdc7ea408fcd886064dffc4daffb22"
# github.com/prometheus/client_model@v0.6.1 => 571429e996ba2d9499e3dcb12926767ba953c0ef
SRCREV_github.com.prometheus.client_model = "571429e996ba2d9499e3dcb12926767ba953c0ef"
# github.com/prometheus/common@v0.62.0 => 280b0e7d5bdf09ddfd2d93c226671cb2ebdb7d5f
SRCREV_github.com.prometheus.common = "280b0e7d5bdf09ddfd2d93c226671cb2ebdb7d5f"
# github.com/prometheus/procfs@v0.15.1 => 51919fd4b9d0aaca69854ac81bdeda5f96dab366
SRCREV_github.com.prometheus.procfs = "51919fd4b9d0aaca69854ac81bdeda5f96dab366"
# github.com/rs/xid@v1.6.0 => 7aed5a87c88ebb644e4e6d077f58147ac42f03b9
SRCREV_github.com.rs.xid = "7aed5a87c88ebb644e4e6d077f58147ac42f03b9"
# github.com/russross/blackfriday/v2@v2.1.0 => 4c9bf9512682b995722660a4196c0013228e2049
SRCREV_github.com.russross.blackfriday.v2 = "4c9bf9512682b995722660a4196c0013228e2049"
# github.com/schollz/jsonstore@v1.1.0 => eff67f485d51e2937336d7d2d2e20178161b98ce
SRCREV_github.com.schollz.jsonstore = "eff67f485d51e2937336d7d2d2e20178161b98ce"
# github.com/shopspring/decimal@v1.4.0 => a2e78c6cff3451d68a784428ce443e5a9021a89f
SRCREV_github.com.shopspring.decimal = "a2e78c6cff3451d68a784428ce443e5a9021a89f"
# github.com/shurcooL/sanitized_anchor_name@v1.0.0 => 7bfe4c7ecddb3666a94b053b422cdd8f5aaa3615
SRCREV_github.com.shurcooL.sanitized_anchor_name = "7bfe4c7ecddb3666a94b053b422cdd8f5aaa3615"
# github.com/sirupsen/logrus@v1.9.3 => d40e25cd45ed9c6b2b66e6b97573a0413e4c23bd
SRCREV_github.com.sirupsen.logrus = "d40e25cd45ed9c6b2b66e6b97573a0413e4c23bd"
# github.com/smallstep/nosql@v0.7.0 => cea08a0ebaac8a2b09a35f2dbb3a01037630e9ca
SRCREV_github.com.smallstep.nosql = "cea08a0ebaac8a2b09a35f2dbb3a01037630e9ca"
# github.com/smallstep/pkcs7@v0.2.1 => 84613357c7f2c2e116a62f93034417fd40ef9265
SRCREV_github.com.smallstep.pkcs7 = "84613357c7f2c2e116a62f93034417fd40ef9265"
# github.com/smallstep/scep@v0.0.0-20240926084937-8cf1ca453101 => 8cf1ca453101f3fd622bf5a8c386bf950590dbcf
SRCREV_github.com.smallstep.scep = "8cf1ca453101f3fd622bf5a8c386bf950590dbcf"
# github.com/spf13/cast@v1.7.0 => 6e0c3abdfe6a2d4df3c91ebf847f984c78eeba25
SRCREV_github.com.spf13.cast = "6e0c3abdfe6a2d4df3c91ebf847f984c78eeba25"
# github.com/weppos/publicsuffix-go@v0.20.0 => 57ca109884ff03fde331fe0fdf7f99e1b7deae30
SRCREV_github.com.weppos.publicsuffix-go = "57ca109884ff03fde331fe0fdf7f99e1b7deae30"
# github.com/x448/float16@v0.8.4 => cb9afec31f2649663ebb64da5c6c32c3d365c3ca
SRCREV_github.com.x448.float16 = "cb9afec31f2649663ebb64da5c6c32c3d365c3ca"
# go.etcd.io/bbolt@v1.3.11 => d128a10000a9d394686cf45be262a4fe966b03c4
SRCREV_go.etcd.io.bbolt = "d128a10000a9d394686cf45be262a4fe966b03c4"
# go.opentelemetry.io/auto/sdk@v1.1.0 => b93ae2eed39af4db57ef0da19b3942b17d961ba1
SRCREV_go.opentelemetry.io.auto.sdk = "b93ae2eed39af4db57ef0da19b3942b17d961ba1"
# go.opentelemetry.io/contrib/instrumentation/google.golang.org/grpc/otelgrpc@v0.59.0 => e6e7902d104cb633154df760add009a5a0c2d5a3
SRCREV_go.opentelemetry.io.contrib.instrumentation.google.golang.org.grpc.otelgrpc = "e6e7902d104cb633154df760add009a5a0c2d5a3"
# go.opentelemetry.io/contrib/instrumentation/net/http/otelhttp@v0.59.0 => e6e7902d104cb633154df760add009a5a0c2d5a3
SRCREV_go.opentelemetry.io.contrib.instrumentation.net.http.otelhttp = "e6e7902d104cb633154df760add009a5a0c2d5a3"
# go.opentelemetry.io/otel@v1.34.0 => edc378fa8d0ce3f00fa8f3939b423436b3f230cf
SRCREV_go.opentelemetry.io.otel = "edc378fa8d0ce3f00fa8f3939b423436b3f230cf"
# go.opentelemetry.io/otel/metric@v1.34.0 => edc378fa8d0ce3f00fa8f3939b423436b3f230cf
SRCREV_go.opentelemetry.io.otel.metric = "edc378fa8d0ce3f00fa8f3939b423436b3f230cf"
# go.opentelemetry.io/otel/trace@v1.34.0 => edc378fa8d0ce3f00fa8f3939b423436b3f230cf
SRCREV_go.opentelemetry.io.otel.trace = "edc378fa8d0ce3f00fa8f3939b423436b3f230cf"
# golang.org/x/exp@v0.0.0-20240531132922-fd00a4e0eefc => fd00a4e0eefc351cc6a7c52f64a3e5da5342054f
SRCREV_golang.org.x.exp = "fd00a4e0eefc351cc6a7c52f64a3e5da5342054f"
# golang.org/x/net@v0.37.0 => 99b3ae0643f9a2f9d820fcbba5f9e4c83b23bd48
SRCREV_golang.org.x.net = "99b3ae0643f9a2f9d820fcbba5f9e4c83b23bd48"
# golang.org/x/oauth2@v0.28.0 => 0042180b24f3cfe500f4cad3cabbc33c0a341f78
SRCREV_golang.org.x.oauth2 = "0042180b24f3cfe500f4cad3cabbc33c0a341f78"
# golang.org/x/sync@v0.12.0 => b637f27e40ad6e222f3d301cc113e635f0fa08be
SRCREV_golang.org.x.sync = "b637f27e40ad6e222f3d301cc113e635f0fa08be"
# golang.org/x/text@v0.23.0 => 566b44fc931e2542778a18423c655ce99b4f1402
SRCREV_golang.org.x.text = "566b44fc931e2542778a18423c655ce99b4f1402"
# golang.org/x/time@v0.10.0 => 2c6c5a229852db5dff1662b3a80d9a396939412f
SRCREV_golang.org.x.time = "2c6c5a229852db5dff1662b3a80d9a396939412f"
# google.golang.org/api@v0.224.0 => 92f572339952bd3b58882493c34b15e87907683a
SRCREV_google.golang.org.api = "92f572339952bd3b58882493c34b15e87907683a"
# google.golang.org/genproto@v0.0.0-20250303144028-a0af3efb3deb => a0af3efb3deb0aa5253d43c55b96e303c64cc06b
SRCREV_google.golang.org.genproto = "a0af3efb3deb0aa5253d43c55b96e303c64cc06b"
# google.golang.org/genproto/googleapis/api@v0.0.0-20250303144028-a0af3efb3deb => a0af3efb3deb0aa5253d43c55b96e303c64cc06b
SRCREV_google.golang.org.genproto.googleapis.api = "a0af3efb3deb0aa5253d43c55b96e303c64cc06b"
# google.golang.org/genproto/googleapis/rpc@v0.0.0-20250303144028-a0af3efb3deb => a0af3efb3deb0aa5253d43c55b96e303c64cc06b
SRCREV_google.golang.org.genproto.googleapis.rpc = "a0af3efb3deb0aa5253d43c55b96e303c64cc06b"
# google.golang.org/grpc@v1.71.0 => d01db5ccc8d3dfc89d4481c1d2a613e9fa44520b
SRCREV_google.golang.org.grpc = "d01db5ccc8d3dfc89d4481c1d2a613e9fa44520b"
# google.golang.org/grpc/cmd/protoc-gen-go-grpc@v1.5.1 => ec9dff77b186d5308955fe0fc50e3e4cbe187e2c
SRCREV_google.golang.org.grpc.cmd.protoc-gen-go-grpc = "ec9dff77b186d5308955fe0fc50e3e4cbe187e2c"
# gopkg.in/yaml.v3@v3.0.1 => f6f7691b1fdeb513f56608cd2c32c51f8194bf51
SRCREV_gopkg.in.yaml.v3 = "f6f7691b1fdeb513f56608cd2c32c51f8194bf51"
# howett.net/plist@v1.0.0 => 607711222ff2484a487cdec33866b965f4a89653
SRCREV_howett.net.plist = "607711222ff2484a487cdec33866b965f4a89653"
# k8s.io/klog/v2@v2.130.1 => 75663bb798999a49e3e4c0f2375ed5cca8164194
SRCREV_k8s.io.klog.v2 = "75663bb798999a49e3e4c0f2375ed5cca8164194"
