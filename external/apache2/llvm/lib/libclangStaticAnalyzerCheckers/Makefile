#	$NetBSD: Makefile,v 1.1 2019/11/11 22:45:16 joerg Exp $

LIB=	clangStaticAnalyzerCheckers

.include <bsd.init.mk>

.PATH: ${CLANG_SRCDIR}/lib/StaticAnalyzer/Checkers
.PATH: ${CLANG_SRCDIR}/lib/StaticAnalyzer/Checkers/MPI-Checker
.PATH: ${CLANG_SRCDIR}/lib/StaticAnalyzer/Checkers/RetainCountChecker
.PATH: ${CLANG_SRCDIR}/lib/StaticAnalyzer/Checkers/UninitializedObject

SRCS+=	AnalysisOrderChecker.cpp \
	AnalyzerStatsChecker.cpp \
	ArrayBoundChecker.cpp \
	ArrayBoundCheckerV2.cpp \
	BasicObjCFoundationChecks.cpp \
	BlockInCriticalSectionChecker.cpp \
	BoolAssignmentChecker.cpp \
	BuiltinFunctionChecker.cpp \
	CallAndMessageChecker.cpp \
	CastSizeChecker.cpp \
	CastToStructChecker.cpp \
	CastValueChecker.cpp \
	CheckerDocumentation.cpp \
	CheckObjCDealloc.cpp \
	CheckObjCInstMethSignature.cpp \
	CheckSecuritySyntaxOnly.cpp \
	CheckSizeofPointer.cpp \
	ChrootChecker.cpp \
	CloneChecker.cpp \
	ConversionChecker.cpp \
	CStringChecker.cpp \
	CStringSyntaxChecker.cpp \
	CXXSelfAssignmentChecker.cpp \
	DeadStoresChecker.cpp \
	DebugCheckers.cpp \
	DeleteWithNonVirtualDtorChecker.cpp \
	DereferenceChecker.cpp \
	DirectIvarAssignment.cpp \
	DivZeroChecker.cpp \
	DynamicTypeChecker.cpp \
	DynamicTypePropagation.cpp \
	EnumCastOutOfRangeChecker.cpp \
	ExprInspectionChecker.cpp \
	FixedAddressChecker.cpp \
	GCDAntipatternChecker.cpp \
	GenericTaintChecker.cpp \
	GTestChecker.cpp \
	IdenticalExprChecker.cpp \
	InnerPointerChecker.cpp \
	IteratorChecker.cpp \
	IvarInvalidationChecker.cpp \
	LLVMConventionsChecker.cpp \
	LocalizationChecker.cpp \
	MacOSKeychainAPIChecker.cpp \
	MacOSXAPIChecker.cpp \
	MallocChecker.cpp \
	MallocOverflowSecurityChecker.cpp \
	MallocSizeofChecker.cpp \
	MIGChecker.cpp \
	MmapWriteExecChecker.cpp \
	MoveChecker.cpp \
	MPIBugReporter.cpp \
	MPIChecker.cpp \
	MPIFunctionClassifier.cpp \
	NonnullGlobalConstantsChecker.cpp \
	NonNullParamChecker.cpp \
	NoReturnFunctionChecker.cpp \
	NSAutoreleasePoolChecker.cpp \
	NSErrorChecker.cpp \
	NullabilityChecker.cpp \
	NumberObjectConversionChecker.cpp \
	ObjCAtSyncChecker.cpp \
	ObjCAutoreleaseWriteChecker.cpp \
	ObjCContainersASTChecker.cpp \
	ObjCContainersChecker.cpp \
	ObjCMissingSuperCallChecker.cpp \
	ObjCPropertyChecker.cpp \
	ObjCSelfInitChecker.cpp \
	ObjCSuperDeallocChecker.cpp \
	ObjCUnusedIVarsChecker.cpp \
	OSObjectCStyleCast.cpp \
	PaddingChecker.cpp \
	PointerArithChecker.cpp \
	PointerIterationChecker.cpp \
	PointerSortingChecker.cpp \
	PointerSubChecker.cpp \
	PthreadLockChecker.cpp \
	RetainCountChecker.cpp \
	RetainCountDiagnostics.cpp \
	ReturnPointerRangeChecker.cpp \
	ReturnValueChecker.cpp \
	ReturnUndefChecker.cpp \
	RunLoopAutoreleaseLeakChecker.cpp \
	SmartPtrModeling.cpp \
	SimpleStreamChecker.cpp \
	StackAddrEscapeChecker.cpp \
	StdLibraryFunctionsChecker.cpp \
	StreamChecker.cpp \
	Taint.cpp \
	TaintTesterChecker.cpp \
	TestAfterDivZeroChecker.cpp \
	TraversalChecker.cpp \
	TrustNonnullChecker.cpp \
	UndefBranchChecker.cpp \
	UndefCapturedBlockVarChecker.cpp \
	UndefinedArraySubscriptChecker.cpp \
	UndefinedAssignmentChecker.cpp \
	UndefResultChecker.cpp \
	UninitializedObjectChecker.cpp \
	UninitializedPointee.cpp \
	UnixAPIChecker.cpp \
	UnreachableCodeChecker.cpp \
	ValistChecker.cpp \
	VforkChecker.cpp \
	VirtualCallChecker.cpp \
	VLASizeChecker.cpp

.if defined(HOSTLIB)
.include <bsd.hostlib.mk>
.else
.include <bsd.lib.mk>
.endif
