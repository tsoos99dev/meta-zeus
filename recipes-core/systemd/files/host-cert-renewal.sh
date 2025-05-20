#!/bin/bash
cd /etc/ssh && sudo step ssh renew ssh_host_ed25519_key-cert.pub ssh_host_ed25519_key --ca-url $CA_URL --root $STEPPATH/certs/root_ca.crt --force 

