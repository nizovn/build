NAME = $(shell basename $(shell pwd))
PATCH = clock/${NAME}.patch
TWEAKS =
TITLE = Unhide Time Details
DESCRIPTION = There is a hidden webOS 2.x app called Time Details. The app itself compares your network time with your device time. It only displays the information, nothing else.
CATEGORY = Clock
VERSIONS = 2.1.0-63 2.1.1-22 2.1.2-31 2.2.4-45
ICON = http://www.webos-internals.org/images/8/8d/Icon_WebOSInternals_Patches_Clock.png
SCREENSHOTS = [\
\"http://www.webos-internals.org/images/3/36/Clock-unhide-time-details-1.png\",\
\"http://www.webos-internals.org/images/7/71/Clock-unhide-time-details-2.png\" ]
META_SUB_VERSION = 1

include ../common.mk

include ../modifications.mk

MAINTAINER = thfcme <webos-internals.org@herrie.org>, Herrie
HOMEPAGE =