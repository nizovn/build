NAME = $(shell basename $(shell pwd))
PATCH = top-bar/${NAME}.patch
TITLE = System Menu Mods v1
DESCRIPTION = Removes date and airplane mode that exist in mode and today system menus from the device menu and adds Device, Security, Network, Phone, Data and GPS control. Also slightly modifies the battery information shown in the device menu. Menu can be edited to remove items that are not wanted to be shown.<br/><br/>Depends: org.webosinternals.patches.top-bar-system-menu-initial-framework, ca.canucksoftware.systoolsmgr
CATEGORY = Top Bar
VERSIONS = 1.4.5-33
ICON = http://www.webos-internals.org/images/f/f9/Icon_WebOSInternals_Patch.png
SCREENSHOTS = [ ]
META_SUB_VERSION = 1

include ../common.mk
DEPENDS := ${DEPENDS}, org.webosinternals.patches.top-bar-system-menu-initial-framework, ca.canucksoftware.systoolsmgr
include ../modifications.mk

MAINTAINER = sconix
HOMEPAGE = http://forums.precentral.net/webos-patches/245440-patch-top-bar-system-menus-status-today-device-menus.html
