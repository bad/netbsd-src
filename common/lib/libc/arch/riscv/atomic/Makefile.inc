#	$NetBSD: Makefile.inc,v 1.4 2019/06/01 12:42:27 maxv Exp $

.for op in add and cas nand or sub swap xor
sizes=32
.if "${MLIBDIR}" != ""
.if ${COMMON_MACHINE_ARCH} == "riscv64"
sizes+=64
.endif
.elif ${MACHINE_ARCH} == "riscv64"
sizes+=64
.endif
.for sz in ${sizes}
SRCS.atomic+=	atomic_${op}_${sz}.S
.endfor
.for sz in 8 16
SRCS.atomic+=	atomic_${op}_${sz}_cas.c
.endfor
.endfor
SRCS.atomic+=	membar_ops.S
SRCS.atomic+=	atomic_cas_by_cas32.c

.if defined(LIB) && (${LIB} != "kern" && ${LIB} != "rump")

SRCS.atomic+=	atomic_init_cas.c			\
		atomic_c11_compare_exchange_cas_16.c    \
		atomic_c11_compare_exchange_cas_8.c

.endif #LIB

.if defined(LIB) && ${LIB} == "c"
SRCS.atomic+=	atomic_and_16_nv_cas.c atomic_and_8_nv_cas.c
.endif

SRCS+=	${SRCS.atomic}
