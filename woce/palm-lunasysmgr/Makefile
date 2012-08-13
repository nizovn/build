NAME = $(shell basename $(shell pwd))
TITLE = Palm LunaSysMgr
DEVICE = touchpad
DESCRIPTION = ${APPINFO_DESCRIPTION}<br>${KERNEL_DISCLAIMER}
CATEGORY = Recovery
FORCE_INSTALL = 1
VERSIONS = 3.0.5-1
APPINFO_DESCRIPTION = Use this package to reinstall the official webOS ${WEBOS_VERSION} LunaSysMgr from Palm.<br>\
This package will refuse to operate on a device with an incompatible webOS version.<br>\
Note that only the LunaSysMgr binary is restored, and it will be forcibly overwritten regardless of current state.  No other files are modified in any way.<br>\
In particular, any other files modified by patches or other modifications will not be restored. You should contact the maintainer of such patches for recovery procedures.<br>\
On removal, this package does not modify any files, not does it restore any previous state of LunaSysMgr.  The sole purpose of this package is to install the official webOS ${WEBOS_VERSION} LunaSysMgr from Palm and to do nothing else.
APPINFO_CHANGELOG = [ \
{ "version" : "${WEBOS_VERSION}-1", "log" : [ "Initial public release" ] } \
]

HOMEPAGE = http://opensource.palm.com
TYPE = OS Application

include ../../support/woce.mk
CATEGORY = Recovery

build/arm.built-${VERSION}: ${WEBOS_DOCTOR}
	rm -rf build/arm
	mkdir -p build/arm/usr/palm/applications/${APP_ID}/additional_files
	unzip -p $< resources/webOS.tar | \
	${TAR} -O -x -f - ./nova-cust-image-${CODENAME}.rootfs.tar.gz | \
	${TAR} -C build/arm/usr/palm/applications/${APP_ID}/additional_files/ -m -z -x -f - ./md5sums.gz ./usr/bin/LunaSysMgr
	gunzip -f build/arm/usr/palm/applications/${APP_ID}/additional_files/md5sums.gz
	mkdir -p build/arm/usr/palm/applications/${APP_ID}/additional_files/etc/event.d
	cp upstart/LunaSysMgr build/arm/usr/palm/applications/${APP_ID}/additional_files/etc/event.d/LunaSysMgr
	touch $@

build/.unpacked-${VERSION}:
	touch $@

build/arm/CONTROL/prerm:
	rm -f $@
