#!/bin/sh

export CROSSTOOLS=$PWD/cross44
echo CROSSTOOLS=$CROSSTOOLS
export PATH=.:$CROSSTOOLS/bin:$PATH
export INSTALL_MOD_PATH=images
echo INSTALL_MOD_PATH=$INSTALL_MOD_PATH