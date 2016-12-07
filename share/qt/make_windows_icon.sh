#!/bin/bash
# create multiresolution windows icon
ICON_SRC=../../src/qt/res/icons/zapcard.png
ICON_DST=../../src/qt/res/icons/zapcard.ico
convert ${ICON_SRC} -resize 16x16 zapcard-16.png
convert ${ICON_SRC} -resize 32x32 zapcard-32.png
convert ${ICON_SRC} -resize 48x48 zapcard-48.png
convert zapcard-16.png zapcard-32.png zapcard-48.png ${ICON_DST}

