do_install:append() {
    sed -ri 's:^(export CARGO_TARGET_'"${RUST_TARGET_TRIPLE}"'_RUSTFLAGS)="(.*)":\1="\2 -C link-arg=-Wl,--dynamic-linker=/lib/ld-linux-armhf.so.3":' ${RUST_ENV_SETUP_SH}
}
