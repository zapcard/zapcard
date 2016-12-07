
Debian
====================
This directory contains files used to package zapcardd/zapcard-qt
for Debian-based Linux systems. If you compile zapcardd/zapcard-qt yourself, there are some useful files here.

## zapcard: URI support ##


zapcard-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install zapcard-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your zapcard-qt binary to `/usr/bin`
and the `../../share/pixmaps/zapcard128.png` to `/usr/share/pixmaps`

zapcard-qt.protocol (KDE)

