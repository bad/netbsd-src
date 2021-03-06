#	$NetBSD: Makefile.inc,v 1.31 2020/01/29 16:24:21 christos Exp $

IMAGESIZE=	10m
DBG=		${${ACTIVE_CC} == "clang":? -Oz -fomit-frame-pointer : -Os } -fno-unwind-tables

MAKEFS_FLAGS+=   -o density=4k
IMAGEENDIAN=	be
MAKEDEVTARGETS=	all ipty
LISTS+=		${DISTRIBDIR}/common/list.sysinst
IMAGEDEPENDS+=	${ARCHDIR}/../install.md ${ARCHDIR}/dot.profile \
		${DESTDIR}/usr/mdec/boot \
		${KERNOBJDIR}/GENERIC/netbsd

IMAGEPOSTBUILD=	${TOOL_INSTALLBOOT} -v -m ${MACHINE} ${IMAGE} \
		    ${DESTDIR}/usr/mdec/bootxx /boot
