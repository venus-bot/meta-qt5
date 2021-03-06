# Copyright (C) 2012-2016 O.S. Systems Software LTDA.
# Copyright (C) 2013-2016 Martin Jansa <martin.jansa@gmail.com>

QT_MODULE ?= "${BPN}"
QT_MODULE_BRANCH ?= "5.7"

# each module needs to define valid SRCREV
SRC_URI = " \
    ${QT_GIT}/${QT_MODULE}.git;name=${QT_MODULE};branch=${QT_MODULE_BRANCH};protocol=${QT_GIT_PROTOCOL} \
"

S = "${WORKDIR}/git"

PV = "5.6.99+5.7.0-beta+git${SRCPV}"
