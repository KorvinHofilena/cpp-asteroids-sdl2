/* ANSI-C code produced by genperf */
/* Command-line: genperf C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.c */
#line 10 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
struct insnprefix_parse_data;
static const struct insnprefix_parse_data *
insnprefix_gas_find(const char *key, size_t len)
{
  static const struct insnprefix_parse_data pd[2076] = {
#line 2003 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpunpckhqdq",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0x6D,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1051 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"psrad",	pshift_insn,	4,	SUF_Z,	0xE2,	0x72,	0x04,	0,	CPU_MMX,	0,	0},
#line 1153 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"rsldt",	cyrixsmm_insn,	1,	SUF_Z,	0x7B,	0,	0,	0,	CPU_486,	CPU_Cyrix,	CPU_SMM},
#line 720 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"loopel",	loopl_insn,	4,	SUF_Z,	0x01,	0x20,	0,	0,	0,	0,	0},
#line 585 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"idivl",	div_insn,	8,	SUF_L,	0x07,	0,	0,	0,	CPU_386,	0,	0},
#line 1404 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpeqss",	ssecmp_32_insn,	4,	SUF_Z,	0x00,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 60 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"aqword",	NULL,	X86_ADDRSIZE>>8,	0x40,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 1395 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpeq_uqsd",	ssecmp_64_insn,	4,	SUF_Z,	0x08,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1324 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"subl",	arith_insn,	22,	SUF_L,	0x28,	0x05,	0,	0,	CPU_386,	0,	0},
#line 410 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fbstp",	fbldstp_insn,	1,	SUF_Z,	0x06,	0,	0,	0,	CPU_FPU,	0,	0},
#line 1271 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"shrdw",	shlrd_insn,	9,	SUF_W,	0xAC,	0,	0,	0,	CPU_386,	0,	0},
#line 2058 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"xchgb",	xchg_insn,	16,	SUF_B,	0,	0,	0,	0,	0,	0,	0},
#line 379 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"dec",	incdec_insn,	6,	SUF_Z,	0x48,	0x01,	0,	0,	0,	0,	0},
#line 1086 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pushw",	push_insn,	35,	SUF_W,	0,	0,	0,	0,	0,	0,	0},
#line 1766 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpcmov",	vpcmov_insn,	4,	SUF_Z,	0,	0,	0,	0,	CPU_XOP,	0,	0},
#line 847 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"mulq",	f6_insn,	4,	SUF_Q,	0x04,	0,	0,	ONLY_64,	0,	0,	0},
#line 1523 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcvtdq2pd",	avx_cvt_xmm64_insn,	3,	SUF_Z,	0xF3,	0xE6,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 753 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"lzcntl",	cnt_insn,	3,	SUF_L,	0xBD,	0,	0,	0,	CPU_LZCNT,	0,	0},
#line 2032 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vucomiss",	avx_xmm_xmm32_insn,	2,	SUF_Z,	0x00,	0x2E,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1646 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vfnmsub231sd",	vfma_sd_insn,	2,	SUF_Z,	0xBF,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1305 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"sscal",	onebyte_insn,	1,	SUF_Z,	0xAF,	0x20,	0,	0,	CPU_386,	0,	0},
#line 1485 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpnlt_uqpd",	ssecmp_128_insn,	3,	SUF_Z,	0x15,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1237 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"setpob",	setcc_insn,	1,	SUF_B,	0x0B,	0,	0,	0,	CPU_386,	0,	0},
#line 1699 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vmovmskpdq",	movmsk_insn,	4,	SUF_Q,	0x66,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1180 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"scasq",	onebyte_insn,	1,	SUF_Z,	0xAF,	0x40,	0,	ONLY_64,	0,	0,	0},
#line 2076 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"xorw",	arith_insn,	22,	SUF_W,	0x30,	0x06,	0,	0,	0,	0,	0},
#line 1960 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vprotw",	vprot_insn,	3,	SUF_Z,	0x01,	0,	0,	0,	CPU_XOP,	0,	0},
#line 1606 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vfmsub231sd",	vfma_sd_insn,	2,	SUF_Z,	0xBB,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1935 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpmovmskbq",	pmovmskb_insn,	6,	SUF_Q,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 377 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"data32",	NULL,	X86_OPERSIZE>>8,	0x20,	0,	0,	0,	0,	0,	0,	0},
#line 1625 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vfnmadd213ps",	vfma_ps_insn,	2,	SUF_Z,	0xAC,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1380 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vandps",	xmm_xmm128_256_insn,	4,	SUF_Z,	0x00,	0x54,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 456 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fidivrs",	fiarith_insn,	2,	SUF_S,	0x07,	0xDA,	0,	0,	CPU_FPU,	0,	0},
#line 1408 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpfalse_osss",	ssecmp_32_insn,	4,	SUF_Z,	0x1B,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1457 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpneqpd",	ssecmp_128_insn,	3,	SUF_Z,	0x04,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1447 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpneq_oqsd",	ssecmp_64_insn,	4,	SUF_Z,	0x0C,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1835 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpcomnequb",	vpcom_insn,	1,	SUF_Z,	0xEC,	0x05,	0,	0,	CPU_XOP,	0,	0},
#line 1626 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vfnmadd213sd",	vfma_sd_insn,	2,	SUF_Z,	0xAD,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 282 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmplesd",	ssecmp_64_insn,	4,	SUF_Z,	0x02,	0xF2,	0,	0,	CPU_SSE2,	0,	0},
#line 1964 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpshaq",	amd_vpshift_insn,	2,	SUF_Z,	0x9B,	0,	0,	0,	CPU_XOP,	0,	0},
#line 623 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"iretw",	onebyte_insn,	1,	SUF_Z,	0xCF,	0x10,	0,	0,	0,	0,	0},
#line 1824 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpcomltub",	vpcom_insn,	1,	SUF_Z,	0xEC,	0x00,	0,	0,	CPU_XOP,	0,	0},
#line 1712 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vmovupd",	movau_insn,	6,	SUF_Z,	0x66,	0x10,	0x01,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 404 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fabs",	twobyte_insn,	1,	SUF_Z,	0xD9,	0xE1,	0,	0,	CPU_FPU,	0,	0},
#line 693 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"lgdtq",	twobytemem_insn,	1,	SUF_Q,	0x02,	0x0F,	0x01,	0,	CPU_286,	CPU_Priv,	0},
#line 1418 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpgeps",	ssecmp_128_insn,	3,	SUF_Z,	0x0D,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1027 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"popfw",	onebyte_insn,	1,	SUF_Z,	0x9D,	0x10,	0x40,	0,	0,	0,	0},
#line 1710 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vmovsldup",	avx_xmm_xmm128_insn,	2,	SUF_Z,	0xF3,	0x12,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1984 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpsravd",	vpshiftv_vexw0_avx2_insn,	2,	SUF_Z,	0x46,	0,	0,	ONLY_AVX,	CPU_AVX2,	0,	0},
#line 1916 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpmadcswd",	vpma_insn,	1,	SUF_Z,	0xB6,	0,	0,	0,	CPU_XOP,	0,	0},
#line 1937 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpmovsxbq",	sse4m16_insn,	4,	SUF_Z,	0x22,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1817 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpcomleud",	vpcom_insn,	1,	SUF_Z,	0xEE,	0x01,	0,	0,	CPU_XOP,	0,	0},
#line 962 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"phsubw",	ssse3_insn,	5,	SUF_Z,	0x05,	0,	0,	0,	CPU_SSSE3,	0,	0},
#line 134 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"call",	call_insn,	30,	SUF_Z,	0,	0,	0,	0,	0,	0,	0},
#line 254 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovpe",	cmovcc_insn,	3,	SUF_Z,	0x0A,	0,	0,	0,	CPU_686,	0,	0},
#line 1834 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpcomneqq",	vpcom_insn,	1,	SUF_Z,	0xCF,	0x05,	0,	0,	CPU_XOP,	0,	0},
#line 1851 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpcomtrueuq",	vpcom_insn,	1,	SUF_Z,	0xEF,	0x07,	0,	0,	CPU_XOP,	0,	0},
#line 1564 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vdpps",	sse4imm_256_insn,	4,	SUF_Z,	0x40,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 993 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pmovsxdq",	sse4m64_insn,	4,	SUF_Z,	0x25,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 886 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"packusdw",	sse4_insn,	2,	SUF_Z,	0x2B,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 2074 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"xorps",	xmm_xmm128_insn,	2,	SUF_Z,	0x00,	0x57,	0,	0,	CPU_SSE,	0,	0},
#line 159 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovaq",	cmovcc_insn,	3,	SUF_Q,	0x07,	0,	0,	ONLY_64,	CPU_686,	0,	0},
#line 607 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"int3",	onebyte_insn,	1,	SUF_Z,	0xCC,	0,	0,	0,	0,	0,	0},
#line 555 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fsubrp",	farithp_insn,	3,	SUF_Z,	0xE8,	0,	0,	0,	CPU_FPU,	0,	0},
#line 926 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pdepq",	vex_gpr_reg_nds_rm_0F_insn,	2,	SUF_Q,	0xF2,	0x38,	0xF5,	ONLY_AVX|ONLY_64,	CPU_BMI2,	0,	0},
#line 657 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"jpo",	jcc_insn,	9,	SUF_Z,	0x0B,	0,	0,	0,	0,	0,	0},
#line 126 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"bts",	bittest_insn,	6,	SUF_Z,	0xAB,	0x05,	0,	0,	CPU_386,	0,	0},
#line 780 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"movbel",	movbe_insn,	6,	SUF_L,	0,	0,	0,	0,	CPU_386,	CPU_MOVBE,	0},
#line 779 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"movbe",	movbe_insn,	6,	SUF_Z,	0,	0,	0,	0,	CPU_MOVBE,	0,	0},
#line 860 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"negw",	f6_insn,	4,	SUF_W,	0x03,	0,	0,	0,	0,	0,	0},
#line 1063 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"psubusb",	mmxsse2_insn,	2,	SUF_Z,	0xD8,	0,	0,	0,	CPU_MMX,	0,	0},
#line 975 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pmaxsb",	sse4_insn,	2,	SUF_Z,	0x3C,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 441 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"ffree",	ffree_insn,	1,	SUF_Z,	0xDD,	0,	0,	0,	CPU_FPU,	0,	0},
#line 554 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fsubrl",	farith_insn,	7,	SUF_L,	0xE0,	0xE8,	0x05,	0,	CPU_FPU,	0,	0},
#line 981 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pminsb",	sse4_insn,	2,	SUF_Z,	0x38,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 1443 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpltsd",	ssecmp_64_insn,	4,	SUF_Z,	0x01,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1538 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcvtsd2ss",	xmm_xmm64_insn,	4,	SUF_Z,	0xF2,	0x5A,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1565 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"verr",	prot286_insn,	1,	SUF_Z,	0x04,	0x00,	0,	0,	CPU_286,	CPU_Prot,	0},
#line 918 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pcmpgtb",	mmxsse2_insn,	2,	SUF_Z,	0x64,	0,	0,	0,	CPU_MMX,	0,	0},
#line 666 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"lcall",	ljmpcall_insn,	7,	SUF_Z,	0x03,	0x9A,	0,	0,	0,	0,	0},
#line 1472 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpngt_uqss",	ssecmp_32_insn,	4,	SUF_Z,	0x1A,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1007 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pmulhuw",	mmxsse2_insn,	2,	SUF_Z,	0xE4,	0,	0,	0,	CPU_MMX,	CPU_P3,	0},
#line 1391 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpeq_ossd",	ssecmp_64_insn,	4,	SUF_Z,	0x10,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1674 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vmaxsd",	xmm_xmm64_insn,	4,	SUF_Z,	0xF2,	0x5F,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1762 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpclmulhqlqdq",	pclmulqdq_fixed_insn,	2,	SUF_Z,	0x01,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1514 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpunord_sps",	ssecmp_128_insn,	3,	SUF_Z,	0x13,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 378 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"data64",	NULL,	X86_OPERSIZE>>8,	0x40,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 463 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fimul",	fiarith_insn,	2,	SUF_Z,	0x01,	0xDA,	0,	0,	CPU_FPU,	0,	0},
#line 1351 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"tzcntq",	cnt_insn,	3,	SUF_Q,	0xBC,	0,	0,	ONLY_64,	CPU_BMI1,	0,	0},
#line 179 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovgel",	cmovcc_insn,	3,	SUF_L,	0x0D,	0,	0,	0,	CPU_686,	0,	0},
#line 81 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"blcsq",	xop_gpr_reg_rm_09_insn,	2,	SUF_Q,	0x01,	0x03,	0,	ONLY_64,	CPU_TBM,	0,	0},
#line 1500 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpordss",	ssecmp_32_insn,	4,	SUF_Z,	0x07,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 82 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"blendpd",	sse4imm_insn,	2,	SUF_Z,	0x0D,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 1182 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"seta",	setcc_insn,	1,	SUF_Z,	0x07,	0,	0,	0,	CPU_386,	0,	0},
#line 1635 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vfnmaddss",	fma_128_m32_insn,	3,	SUF_Z,	0x7A,	0,	0,	ONLY_AVX,	CPU_FMA4,	0,	0},
#line 149 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cltq",	onebyte_insn,	1,	SUF_Z,	0x98,	0x40,	0,	ONLY_64,	0,	0,	0},
#line 599 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"incw",	incdec_insn,	6,	SUF_W,	0x40,	0x00,	0,	0,	0,	0,	0},
#line 95 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"blsmsk",	vex_gpr_ndd_rm_0F38_regext_insn,	2,	SUF_Z,	0x00,	0xF3,	0x02,	ONLY_AVX,	CPU_BMI1,	0,	0},
#line 1347 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"testq",	test_insn,	20,	SUF_Q,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 1082 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pushfq",	onebyte_insn,	1,	SUF_Z,	0x9C,	0x40,	0x40,	ONLY_64,	0,	0,	0},
#line 627 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"jbe",	jcc_insn,	9,	SUF_Z,	0x06,	0,	0,	0,	0,	0,	0},
#line 1857 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpcomuw",	vpcom_imm_insn,	1,	SUF_Z,	0xED,	0,	0,	0,	CPU_XOP,	0,	0},
#line 1521 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcomisd",	avx_xmm_xmm64_insn,	2,	SUF_Z,	0x66,	0x2F,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1376 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vaeskeygenassist",	aes_imm_insn,	1,	SUF_Z,	0x3A,	0xDF,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1454 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpneq_usps",	ssecmp_128_insn,	3,	SUF_Z,	0x14,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1660 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vhaddpd",	xmm_xmm128_256_insn,	4,	SUF_Z,	0x66,	0x7C,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 75 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"blciq",	xop_gpr_reg_rm_09_insn,	2,	SUF_Q,	0x02,	0x06,	0,	ONLY_64,	CPU_TBM,	0,	0},
#line 1284 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"skinit",	skinit_insn,	2,	SUF_Z,	0,	0,	0,	0,	CPU_SVM,	0,	0},
#line 1302 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"sqrtsd",	xmm_xmm64_insn,	4,	SUF_Z,	0xF2,	0x51,	0,	0,	CPU_SSE2,	0,	0},
#line 524 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"frndint",	twobyte_insn,	1,	SUF_Z,	0xD9,	0xFC,	0,	0,	CPU_FPU,	0,	0},
#line 2009 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpxor",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xEF,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 796 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"movmskpdl",	movmsk_insn,	4,	SUF_L,	0x66,	0,	0,	0,	CPU_SSE2,	0,	0},
#line 1321 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"strw",	str_insn,	4,	SUF_W,	0,	0,	0,	0,	CPU_286,	CPU_Prot,	0},
#line 669 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"lcallw",	ljmpcall_insn,	7,	SUF_W,	0x03,	0x9A,	0,	0,	0,	0,	0},
#line 1898 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vphsubwd",	vphaddsub_insn,	1,	SUF_Z,	0xE2,	0,	0,	0,	CPU_XOP,	0,	0},
#line 1826 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpcomltuq",	vpcom_insn,	1,	SUF_Z,	0xEF,	0x00,	0,	0,	CPU_XOP,	0,	0},
#line 1059 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"psubq",	mmxsse2_insn,	2,	SUF_Z,	0xFB,	0,	0,	0,	CPU_MMX,	0,	0},
#line 171 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovcq",	cmovcc_insn,	3,	SUF_Q,	0x02,	0,	0,	ONLY_64,	CPU_686,	0,	0},
#line 1991 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpsrlw",	vpshift_insn,	8,	SUF_Z,	0xD1,	0x71,	0x02,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1201 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"setleb",	setcc_insn,	1,	SUF_B,	0x0E,	0,	0,	0,	CPU_386,	0,	0},
#line 1490 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpnltps",	ssecmp_128_insn,	3,	SUF_Z,	0x05,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 345 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cvtps2pi",	cvt_mm_xmm64_insn,	2,	SUF_Z,	0x2D,	0,	0,	0,	CPU_SSE,	0,	0},
#line 694 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"lgdtw",	twobytemem_insn,	1,	SUF_W,	0x02,	0x0F,	0x01,	0,	CPU_286,	CPU_Priv,	0},
#line 1845 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpcomq",	vpcom_imm_insn,	1,	SUF_Z,	0xCF,	0,	0,	0,	CPU_XOP,	0,	0},
#line 640 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"jna",	jcc_insn,	9,	SUF_Z,	0x06,	0,	0,	0,	0,	0,	0},
#line 1997 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpsubusb",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xD8,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1424 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpgt_oqss",	ssecmp_32_insn,	4,	SUF_Z,	0x1E,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1605 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vfmsub231ps",	vfma_ps_insn,	2,	SUF_Z,	0xBA,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1336 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"sysenter",	twobyte_insn,	1,	SUF_Z,	0x0F,	0x34,	0,	NOT_64,	CPU_686,	0,	0},
#line 1464 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpnge_uqss",	ssecmp_32_insn,	4,	SUF_Z,	0x19,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 42 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"aesdec",	aes_insn,	2,	SUF_Z,	0x38,	0xDE,	0,	0,	CPU_AVX,	0,	0},
#line 1528 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcvtpd2ps",	avx_cvt_xmm128_insn,	2,	SUF_Z,	0x66,	0x5A,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1891 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vphaddwq",	vphaddsub_insn,	1,	SUF_Z,	0xC7,	0,	0,	0,	CPU_XOP,	0,	0},
#line 259 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovpo",	cmovcc_insn,	3,	SUF_Z,	0x0B,	0,	0,	0,	CPU_686,	0,	0},
#line 1009 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pmulld",	sse4_insn,	2,	SUF_Z,	0x40,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 138 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cbtw",	onebyte_insn,	1,	SUF_Z,	0x98,	0x10,	0,	0,	0,	0,	0},
#line 712 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"loadall286",	twobyte_insn,	1,	SUF_Z,	0x0F,	0x05,	0,	0,	CPU_286,	CPU_Undoc,	0},
#line 1132 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"rexy",	NULL,	X86_REX>>8,	0x42,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 698 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"lgsw",	lfgss_insn,	3,	SUF_W,	0xB5,	0,	0,	0,	CPU_386,	0,	0},
#line 1466 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpngeps",	ssecmp_128_insn,	3,	SUF_Z,	0x09,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 116 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"btc",	bittest_insn,	6,	SUF_Z,	0xBB,	0x07,	0,	0,	CPU_386,	0,	0},
#line 1377 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vandnpd",	xmm_xmm128_256_insn,	4,	SUF_Z,	0x66,	0x55,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 610 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"invept",	eptvpid_insn,	2,	SUF_Z,	0x00,	0,	0,	0,	CPU_386,	CPU_EPTVPID,	0},
#line 1592 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vfmaddsub231pd",	vfma_pd_insn,	2,	SUF_Z,	0xB6,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1319 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"strl",	str_insn,	4,	SUF_L,	0,	0,	0,	0,	CPU_386,	CPU_Prot,	0},
#line 1264 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"shlxl",	vex_gpr_reg_rm_nds_0F_insn,	2,	SUF_L,	0x66,	0x38,	0xF7,	ONLY_AVX,	CPU_BMI2,	0,	0},
#line 732 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"loopq",	loopq_insn,	4,	SUF_Z,	0x02,	0x40,	0,	ONLY_64,	0,	0,	0},
#line 1015 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pmvzb",	cyrixmmx_insn,	1,	SUF_Z,	0x58,	0,	0,	0,	CPU_Cyrix,	CPU_MMX,	0},
#line 2018 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vshufpd",	xmm_xmm128_imm_256_insn,	3,	SUF_Z,	0x66,	0xC6,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1994 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpsubq",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xFB,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 518 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fnstsw",	fnstsw_insn,	2,	SUF_Z,	0,	0,	0,	0,	CPU_FPU,	0,	0},
#line 597 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"incl",	incdec_insn,	6,	SUF_L,	0x40,	0x00,	0,	0,	CPU_386,	0,	0},
#line 509 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fnop",	twobyte_insn,	1,	SUF_Z,	0xD9,	0xD0,	0,	0,	CPU_FPU,	0,	0},
#line 1069 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"punpckhdq",	mmxsse2_insn,	2,	SUF_Z,	0x6A,	0,	0,	0,	CPU_MMX,	0,	0},
#line 337 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cvtdq2ps",	xmm_xmm128_insn,	2,	SUF_Z,	0x00,	0x5B,	0,	0,	CPU_SSE2,	0,	0},
#line 2012 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vroundpd",	avx_sse4imm_insn,	3,	SUF_Z,	0x09,	0,	0,	ONLY_AVX,	CPU_SSE41,	0,	0},
#line 1979 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpsllq",	vpshift_insn,	8,	SUF_Z,	0xF3,	0x73,	0x06,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 946 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pfmul",	now3d_insn,	1,	SUF_Z,	0xB4,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 848 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"mulsd",	xmm_xmm64_insn,	4,	SUF_Z,	0xF2,	0x59,	0,	0,	CPU_SSE2,	0,	0},
#line 1507 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmptrue_ussd",	ssecmp_64_insn,	4,	SUF_Z,	0x1F,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1430 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmple_oqps",	ssecmp_128_insn,	3,	SUF_Z,	0x12,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1904 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpinsrwq",	pinsrw_insn,	9,	SUF_Q,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1930 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpminub",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xDA,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 69 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"blcfillq",	xop_gpr_reg_rm_09_insn,	2,	SUF_Q,	0x01,	0x01,	0,	ONLY_64,	CPU_TBM,	0,	0},
#line 598 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"incq",	incdec_insn,	6,	SUF_Q,	0x40,	0x00,	0,	ONLY_64,	0,	0,	0},
#line 2042 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"wbinvd",	twobyte_insn,	1,	SUF_Z,	0x0F,	0x09,	0,	0,	CPU_486,	CPU_Priv,	0},
#line 209 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovnc",	cmovcc_insn,	3,	SUF_Z,	0x03,	0,	0,	0,	CPU_686,	0,	0},
#line 804 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"movntil",	movnti_insn,	2,	SUF_L,	0,	0,	0,	0,	CPU_P4,	0,	0},
#line 175 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmoveq",	cmovcc_insn,	3,	SUF_Q,	0x04,	0,	0,	ONLY_64,	CPU_686,	0,	0},
#line 951 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pfrcpit2",	now3d_insn,	1,	SUF_Z,	0xB6,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 157 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovaew",	cmovcc_insn,	3,	SUF_W,	0x03,	0,	0,	0,	CPU_686,	0,	0},
#line 1665 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vinserti128",	vinsertif128_insn,	1,	SUF_Z,	0x38,	0,	0,	ONLY_AVX,	CPU_AVX2,	0,	0},
#line 797 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"movmskpdq",	movmsk_insn,	4,	SUF_Q,	0x66,	0,	0,	ONLY_64,	CPU_SSE2,	0,	0},
#line 1925 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpmaxud",	ssse3_insn,	5,	SUF_Z,	0x3F,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 2054 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"xaddw",	cmpxchgxadd_insn,	4,	SUF_W,	0xC0,	0,	0,	0,	CPU_486,	0,	0},
#line 1057 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"psubb",	mmxsse2_insn,	2,	SUF_Z,	0xF8,	0,	0,	0,	CPU_MMX,	0,	0},
#line 880 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"outw",	out_insn,	12,	SUF_W,	0,	0,	0,	0,	0,	0,	0},
#line 845 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"mulpd",	xmm_xmm128_insn,	2,	SUF_Z,	0x66,	0x59,	0,	0,	CPU_SSE2,	0,	0},
#line 1806 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpcomgtd",	vpcom_insn,	1,	SUF_Z,	0xCE,	0x02,	0,	0,	CPU_XOP,	0,	0},
#line 1498 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpordps",	ssecmp_128_insn,	3,	SUF_Z,	0x07,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 695 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"lgs",	lfgss_insn,	3,	SUF_Z,	0xB5,	0,	0,	0,	CPU_386,	0,	0},
#line 754 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"lzcntq",	cnt_insn,	3,	SUF_Q,	0xBD,	0,	0,	ONLY_64,	CPU_LZCNT,	0,	0},
#line 525 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"frstor",	onebytemem_insn,	1,	SUF_Z,	0x04,	0xDD,	0,	0,	CPU_FPU,	0,	0},
#line 1413 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpge_oqpd",	ssecmp_128_insn,	3,	SUF_Z,	0x1D,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1207 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"setnbb",	setcc_insn,	1,	SUF_B,	0x03,	0,	0,	0,	CPU_386,	0,	0},
#line 417 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fcmovnbe",	fcmovcc_insn,	1,	SUF_Z,	0xDB,	0xD0,	0,	0,	CPU_686,	CPU_FPU,	0},
#line 984 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pminub",	mmxsse2_insn,	2,	SUF_Z,	0xDA,	0,	0,	0,	CPU_MMX,	CPU_P3,	0},
#line 1550 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcvttpd2dqx",	avx_cvt_xmm128_x_insn,	1,	SUF_Z,	0x66,	0xE6,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1593 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vfmaddsub231ps",	vfma_ps_insn,	2,	SUF_Z,	0xB6,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 151 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"clzero",	threebyte_insn,	1,	SUF_Z,	0x0F,	0x01,	0xFC,	0,	CPU_AMD,	0,	0},
#line 709 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"lmsw",	prot286_insn,	1,	SUF_Z,	0x06,	0x01,	0,	0,	CPU_286,	CPU_Priv,	0},
#line 243 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovnsq",	cmovcc_insn,	3,	SUF_Q,	0x09,	0,	0,	ONLY_64,	CPU_686,	0,	0},
#line 1692 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vmovhpd",	movhlp_insn,	3,	SUF_Z,	0x66,	0x16,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 928 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pext",	vex_gpr_reg_nds_rm_0F_insn,	2,	SUF_Z,	0xF3,	0x38,	0xF5,	ONLY_AVX,	CPU_BMI2,	0,	0},
#line 1948 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpmuldq",	ssse3_insn,	5,	SUF_Z,	0x28,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 849 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"mulss",	xmm_xmm32_insn,	4,	SUF_Z,	0xF3,	0x59,	0,	0,	CPU_SSE,	0,	0},
#line 763 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"minpd",	xmm_xmm128_insn,	2,	SUF_Z,	0x66,	0x5D,	0,	0,	CPU_SSE2,	0,	0},
#line 649 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"jnle",	jcc_insn,	9,	SUF_Z,	0x0F,	0,	0,	0,	0,	0,	0},
#line 395 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"dword",	NULL,	X86_OPERSIZE>>8,	0x20,	0,	0,	0,	0,	0,	0,	0},
#line 195 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovnael",	cmovcc_insn,	3,	SUF_L,	0x02,	0,	0,	0,	CPU_686,	0,	0},
#line 1134 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"rexz",	NULL,	X86_REX>>8,	0x41,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 1165 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"sar",	shift_insn,	16,	SUF_Z,	0x07,	0,	0,	0,	0,	0,	0},
#line 219 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovngel",	cmovcc_insn,	3,	SUF_L,	0x0C,	0,	0,	0,	CPU_686,	0,	0},
#line 229 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovnlew",	cmovcc_insn,	3,	SUF_W,	0x0F,	0,	0,	0,	CPU_686,	0,	0},
#line 1280 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"sidt",	twobytemem_insn,	1,	SUF_Z,	0x01,	0x0F,	0x01,	0,	CPU_286,	CPU_Priv,	0},
#line 567 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fxrstor",	twobytemem_insn,	1,	SUF_Z,	0x01,	0x0F,	0xAE,	0,	CPU_686,	CPU_FPU,	0},
#line 909 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pclmullqhqdq",	pclmulqdq_fixed_insn,	2,	SUF_Z,	0x10,	0,	0,	0,	CPU_AVX,	0,	0},
#line 844 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"mull",	f6_insn,	4,	SUF_L,	0x04,	0,	0,	0,	CPU_386,	0,	0},
#line 2000 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vptest",	sse4_insn,	2,	SUF_Z,	0x17,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 980 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pmaxuw",	sse4_insn,	2,	SUF_Z,	0x3E,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 1224 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"setnp",	setcc_insn,	1,	SUF_Z,	0x0B,	0,	0,	0,	CPU_386,	0,	0},
#line 380 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"decb",	incdec_insn,	6,	SUF_B,	0x48,	0x01,	0,	0,	0,	0,	0},
#line 512 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fnsaves",	onebytemem_insn,	1,	SUF_S,	0x06,	0xDD,	0,	0,	CPU_FPU,	0,	0},
#line 1412 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpfalsess",	ssecmp_32_insn,	4,	SUF_Z,	0x0B,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 530 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fsaves",	twobytemem_insn,	1,	SUF_S,	0x06,	0x9B,	0xDD,	0,	CPU_FPU,	0,	0},
#line 660 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"jz",	jcc_insn,	9,	SUF_Z,	0x04,	0,	0,	0,	0,	0,	0},
#line 220 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovngeq",	cmovcc_insn,	3,	SUF_Q,	0x0C,	0,	0,	ONLY_64,	CPU_686,	0,	0},
#line 856 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"neg",	f6_insn,	4,	SUF_Z,	0x03,	0,	0,	0,	0,	0,	0},
#line 636 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"jmp",	jmp_insn,	31,	SUF_Z,	0,	0,	0,	0,	0,	0,	0},
#line 437 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fdivrp",	farithp_insn,	3,	SUF_Z,	0xF8,	0,	0,	0,	CPU_FPU,	0,	0},
#line 242 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovnsl",	cmovcc_insn,	3,	SUF_L,	0x09,	0,	0,	0,	CPU_686,	0,	0},
#line 1159 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"sal",	shift_insn,	16,	SUF_Z,	0x04,	0,	0,	0,	0,	0,	0},
#line 477 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fisttpl",	fildstp_insn,	4,	SUF_L,	0x01,	0x00,	0x01,	0,	CPU_SSE3,	0,	0},
#line 1177 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"sbbw",	arith_insn,	22,	SUF_W,	0x18,	0x03,	0,	0,	0,	0,	0},
#line 73 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"blcicq",	xop_gpr_reg_rm_09_insn,	2,	SUF_Q,	0x01,	0x05,	0,	ONLY_64,	CPU_TBM,	0,	0},
#line 1396 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpeq_uqss",	ssecmp_32_insn,	4,	SUF_Z,	0x08,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1864 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpermpd",	vperm_imm_avx2_insn,	1,	SUF_Z,	0x01,	0,	0,	ONLY_AVX,	CPU_AVX2,	0,	0},
#line 1411 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpfalsesd",	ssecmp_64_insn,	4,	SUF_Z,	0x0B,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 913 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pcmpeqd",	mmxsse2_insn,	2,	SUF_Z,	0x76,	0,	0,	0,	CPU_MMX,	0,	0},
#line 213 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovne",	cmovcc_insn,	3,	SUF_Z,	0x05,	0,	0,	0,	CPU_686,	0,	0},
#line 1788 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpcomeqw",	vpcom_insn,	1,	SUF_Z,	0xCD,	0x04,	0,	0,	CPU_XOP,	0,	0},
#line 813 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"movsb",	onebyte_insn,	1,	SUF_Z,	0xA4,	0x00,	0,	0,	0,	0,	0},
#line 729 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"loopnzl",	loopl_insn,	4,	SUF_Z,	0x00,	0x20,	0,	0,	0,	0,	0},
#line 976 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pmaxsd",	sse4_insn,	2,	SUF_Z,	0x3D,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 487 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fld",	fld_insn,	4,	SUF_Z,	0,	0,	0,	0,	CPU_FPU,	0,	0},
#line 546 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fstpt",	fldstpt_insn,	1,	SUF_Z,	0x07,	0,	0,	0,	CPU_FPU,	0,	0},
#line 1433 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmplepd",	ssecmp_128_insn,	3,	SUF_Z,	0x02,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1611 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vfmsubadd213ps",	vfma_ps_insn,	2,	SUF_Z,	0xA7,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 96 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"blsmskl",	vex_gpr_ndd_rm_0F38_regext_insn,	2,	SUF_L,	0x00,	0xF3,	0x02,	ONLY_AVX,	CPU_BMI1,	0,	0},
#line 1415 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpge_oqsd",	ssecmp_64_insn,	4,	SUF_Z,	0x1D,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1362 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"unpckhps",	xmm_xmm128_insn,	2,	SUF_Z,	0x00,	0x15,	0,	0,	CPU_SSE,	0,	0},
#line 158 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmoval",	cmovcc_insn,	3,	SUF_L,	0x07,	0,	0,	0,	CPU_686,	0,	0},
#line 129 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"btsw",	bittest_insn,	6,	SUF_W,	0xAB,	0x05,	0,	0,	CPU_386,	0,	0},
#line 1903 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpinsrwl",	pinsrw_insn,	9,	SUF_L,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1776 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpcmpgtw",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0x65,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 930 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pextq",	vex_gpr_reg_nds_rm_0F_insn,	2,	SUF_Q,	0xF3,	0x38,	0xF5,	ONLY_AVX|ONLY_64,	CPU_BMI2,	0,	0},
#line 1638 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vfnmsub132sd",	vfma_sd_insn,	2,	SUF_Z,	0x9F,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 904 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pavgw",	mmxsse2_insn,	2,	SUF_Z,	0xE3,	0,	0,	0,	CPU_MMX,	CPU_P3,	0},
#line 2001 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpunpckhbw",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0x68,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1682 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vmlaunch",	threebyte_insn,	1,	SUF_Z,	0x0F,	0x01,	0xC2,	0,	CPU_P4,	0,	0},
#line 727 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"loopnew",	loopw_insn,	4,	SUF_Z,	0x00,	0x10,	0,	NOT_64,	0,	0,	0},
#line 1673 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vmaxps",	xmm_xmm128_256_insn,	4,	SUF_Z,	0x00,	0x5F,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1107 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"rdshr",	rdwrshr_insn,	1,	SUF_Z,	0x00,	0,	0,	0,	CPU_686,	CPU_Cyrix,	CPU_SMM},
#line 1196 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"setge",	setcc_insn,	1,	SUF_Z,	0x0D,	0,	0,	0,	CPU_386,	0,	0},
#line 921 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pcmpgtw",	mmxsse2_insn,	2,	SUF_Z,	0x65,	0,	0,	0,	CPU_MMX,	0,	0},
#line 1529 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcvtpd2psx",	avx_cvt_xmm128_x_insn,	1,	SUF_Z,	0x66,	0x5A,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 548 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fstsw",	fstsw_insn,	2,	SUF_Z,	0,	0,	0,	0,	CPU_FPU,	0,	0},
#line 272 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovzw",	cmovcc_insn,	3,	SUF_W,	0x04,	0,	0,	0,	CPU_686,	0,	0},
#line 527 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"frstors",	onebytemem_insn,	1,	SUF_S,	0x04,	0xDD,	0,	0,	CPU_FPU,	0,	0},
#line 1299 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"smsww",	sldtmsw_insn,	6,	SUF_W,	0x04,	0x01,	0,	0,	CPU_286,	0,	0},
#line 589 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"imulb",	imul_insn,	19,	SUF_B,	0,	0,	0,	0,	0,	0,	0},
#line 485 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fisubrs",	fiarith_insn,	2,	SUF_S,	0x05,	0xDA,	0,	0,	CPU_FPU,	0,	0},
#line 1226 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"setns",	setcc_insn,	1,	SUF_Z,	0x09,	0,	0,	0,	CPU_386,	0,	0},
#line 2049 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"xacquire",	NULL,	X86_ACQREL>>8,	0xF2,	0,	0,	0,	0,	0,	0,	0},
#line 1432 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmple_oqss",	ssecmp_32_insn,	4,	SUF_Z,	0x12,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1421 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpgt_oqpd",	ssecmp_128_insn,	3,	SUF_Z,	0x1E,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 954 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pfsub",	now3d_insn,	1,	SUF_Z,	0x9A,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 1873 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpgatherdd",	gather_32x_32y_insn,	2,	SUF_Z,	0x90,	0,	0,	ONLY_AVX,	CPU_AVX2,	0,	0},
#line 1476 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpngtss",	ssecmp_32_insn,	4,	SUF_Z,	0x0A,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 998 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pmovzxbw",	sse4m64_insn,	4,	SUF_Z,	0x30,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 182 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovgl",	cmovcc_insn,	3,	SUF_L,	0x0F,	0,	0,	0,	CPU_686,	0,	0},
#line 777 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"movaps",	movau_insn,	6,	SUF_Z,	0x00,	0x28,	0x01,	0,	CPU_SSE,	0,	0},
#line 1101 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"rdfsbase",	fs_gs_base_insn,	2,	SUF_Z,	0x00,	0,	0,	ONLY_64,	CPU_FSGSBASE,	0,	0},
#line 2046 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"wrmsr",	twobyte_insn,	1,	SUF_Z,	0x0F,	0x30,	0,	0,	CPU_586,	CPU_Priv,	0},
#line 799 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"movmskpsl",	movmsk_insn,	4,	SUF_L,	0,	0,	0,	0,	CPU_386,	CPU_SSE,	0},
#line 1473 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpngtpd",	ssecmp_128_insn,	3,	SUF_Z,	0x0A,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 383 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"decw",	incdec_insn,	6,	SUF_W,	0x48,	0x01,	0,	0,	0,	0,	0},
#line 1677 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vmclear",	vmxthreebytemem_insn,	1,	SUF_Z,	0x66,	0,	0,	0,	CPU_P4,	0,	0},
#line 1600 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vfmsub213pd",	vfma_pd_insn,	2,	SUF_Z,	0xAA,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1149 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"roundps",	sse4imm_insn,	2,	SUF_Z,	0x08,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 2080 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"xsaveopt",	twobytemem_insn,	1,	SUF_Z,	0x06,	0x0F,	0xAE,	0,	CPU_XSAVEOPT,	0,	0},
#line 97 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"blsmskq",	vex_gpr_ndd_rm_0F38_regext_insn,	2,	SUF_Q,	0x00,	0xF3,	0x02,	ONLY_AVX|ONLY_64,	CPU_BMI1,	0,	0},
#line 514 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fnstcww",	fldnstcw_insn,	1,	SUF_W,	0x07,	0,	0,	0,	CPU_FPU,	0,	0},
#line 1363 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"unpcklpd",	xmm_xmm128_insn,	2,	SUF_Z,	0x66,	0x14,	0,	0,	CPU_SSE2,	0,	0},
#line 949 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pfrcp",	now3d_insn,	1,	SUF_Z,	0x96,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 958 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"phaddw",	ssse3_insn,	5,	SUF_Z,	0x01,	0,	0,	0,	CPU_SSSE3,	0,	0},
#line 40 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"adoxq",	vex_gpr_ndd_rm_0F38_insn,	2,	SUF_Q,	0xF3,	0xF6,	0,	ONLY_64,	CPU_ADX,	0,	0},
#line 1491 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpnltsd",	ssecmp_64_insn,	4,	SUF_Z,	0x05,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1816 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpcomleub",	vpcom_insn,	1,	SUF_Z,	0xEC,	0x01,	0,	0,	CPU_XOP,	0,	0},
#line 1988 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpsrlq",	vpshift_insn,	8,	SUF_Z,	0xD3,	0x73,	0x02,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1049 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"psllq",	pshift_insn,	4,	SUF_Z,	0xF3,	0x73,	0x06,	0,	CPU_MMX,	0,	0},
#line 398 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"enterl",	enter_insn,	3,	SUF_L,	0,	0,	0,	NOT_64,	CPU_186,	0,	0},
#line 2047 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"wrshr",	rdwrshr_insn,	1,	SUF_Z,	0x01,	0,	0,	0,	CPU_686,	CPU_Cyrix,	CPU_SMM},
#line 1273 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"shrq",	shift_insn,	16,	SUF_Q,	0x05,	0,	0,	ONLY_64,	0,	0,	0},
#line 1915 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpmadcsswd",	vpma_insn,	1,	SUF_Z,	0xA6,	0,	0,	0,	CPU_XOP,	0,	0},
#line 433 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fdivl",	farith_insn,	7,	SUF_L,	0xF8,	0xF0,	0x06,	0,	CPU_FPU,	0,	0},
#line 1160 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"salb",	shift_insn,	16,	SUF_B,	0x04,	0,	0,	0,	0,	0,	0},
#line 833 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"movzbl",	movszx_insn,	5,	SUF_B,	0xB6,	0,	0,	0,	CPU_386,	0,	0},
#line 264 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovpw",	cmovcc_insn,	3,	SUF_W,	0x0A,	0,	0,	0,	CPU_686,	0,	0},
#line 483 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fisubr",	fiarith_insn,	2,	SUF_Z,	0x05,	0xDA,	0,	0,	CPU_FPU,	0,	0},
#line 1934 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpmovmskbl",	pmovmskb_insn,	6,	SUF_L,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 621 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"iretl",	onebyte_insn,	1,	SUF_Z,	0xCF,	0x20,	0,	0,	CPU_386,	0,	0},
#line 432 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fdiv",	farith_insn,	7,	SUF_Z,	0xF8,	0xF0,	0x06,	0,	CPU_FPU,	0,	0},
#line 335 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"crc32w",	crc32_insn,	5,	SUF_W,	0,	0,	0,	0,	CPU_386,	CPU_SSE42,	0},
#line 1890 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vphaddwd",	vphaddsub_insn,	1,	SUF_Z,	0xC6,	0,	0,	0,	CPU_XOP,	0,	0},
#line 1488 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpnlt_uqss",	ssecmp_32_insn,	4,	SUF_Z,	0x15,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1819 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpcomleuw",	vpcom_insn,	1,	SUF_Z,	0xED,	0x01,	0,	0,	CPU_XOP,	0,	0},
#line 333 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"crc32l",	crc32_insn,	5,	SUF_L,	0,	0,	0,	0,	CPU_386,	CPU_SSE42,	0},
#line 310 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmpsq",	onebyte_insn,	1,	SUF_Z,	0xA7,	0x40,	0,	ONLY_64,	0,	0,	0},
#line 255 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovpel",	cmovcc_insn,	3,	SUF_L,	0x0A,	0,	0,	0,	CPU_686,	0,	0},
#line 227 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovnlel",	cmovcc_insn,	3,	SUF_L,	0x0F,	0,	0,	0,	CPU_686,	0,	0},
#line 1139 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"rolw",	shift_insn,	16,	SUF_W,	0x00,	0,	0,	0,	0,	0,	0},
#line 1236 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"setpo",	setcc_insn,	1,	SUF_Z,	0x0B,	0,	0,	0,	CPU_386,	0,	0},
#line 1807 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpcomgtq",	vpcom_insn,	1,	SUF_Z,	0xCF,	0x02,	0,	0,	CPU_XOP,	0,	0},
#line 1152 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"rsdc",	rsdc_insn,	1,	SUF_Z,	0,	0,	0,	0,	CPU_486,	CPU_Cyrix,	CPU_SMM},
#line 968 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pinsrw",	pinsrw_insn,	9,	SUF_Z,	0,	0,	0,	0,	CPU_MMX,	CPU_P3,	0},
#line 1581 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vfmadd231ps",	vfma_ps_insn,	2,	SUF_Z,	0xB8,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 846 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"mulps",	xmm_xmm128_insn,	2,	SUF_Z,	0x00,	0x59,	0,	0,	CPU_SSE,	0,	0},
#line 1240 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"setz",	setcc_insn,	1,	SUF_Z,	0x04,	0,	0,	0,	CPU_386,	0,	0},
#line 286 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmpltsd",	ssecmp_64_insn,	4,	SUF_Z,	0x01,	0xF2,	0,	0,	CPU_SSE2,	0,	0},
#line 542 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fstl",	fst_insn,	3,	SUF_L,	0,	0,	0,	0,	CPU_FPU,	0,	0},
#line 1510 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmptrueps",	ssecmp_128_insn,	3,	SUF_Z,	0x0F,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 252 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovow",	cmovcc_insn,	3,	SUF_W,	0x00,	0,	0,	0,	CPU_686,	0,	0},
#line 402 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"extrq",	extrq_insn,	2,	SUF_Z,	0,	0,	0,	0,	CPU_SSE4a,	0,	0},
#line 1566 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"verrw",	prot286_insn,	1,	SUF_W,	0x04,	0x00,	0,	0,	CPU_286,	CPU_Prot,	0},
#line 1222 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"setno",	setcc_insn,	1,	SUF_Z,	0x01,	0,	0,	0,	CPU_386,	0,	0},
#line 1812 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpcomgtw",	vpcom_insn,	1,	SUF_Z,	0xCD,	0x02,	0,	0,	CPU_XOP,	0,	0},
#line 314 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmpunordps",	ssecmp_128_insn,	3,	SUF_Z,	0x03,	0,	0,	0,	CPU_SSE,	0,	0},
#line 1265 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"shlxq",	vex_gpr_reg_rm_nds_0F_insn,	2,	SUF_Q,	0x66,	0x38,	0xF7,	ONLY_AVX|ONLY_64,	CPU_BMI2,	0,	0},
#line 1694 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vmovlhps",	movhllhps_insn,	2,	SUF_Z,	0x16,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1168 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"sarq",	shift_insn,	16,	SUF_Q,	0x07,	0,	0,	ONLY_64,	0,	0,	0},
#line 1045 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"psignd",	ssse3_insn,	5,	SUF_Z,	0x0A,	0,	0,	0,	CPU_SSSE3,	0,	0},
#line 462 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"filds",	fildstp_insn,	4,	SUF_S,	0x00,	0x02,	0x05,	0,	CPU_FPU,	0,	0},
#line 1087 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pxor",	mmxsse2_insn,	2,	SUF_Z,	0xEF,	0,	0,	0,	CPU_MMX,	0,	0},
#line 947 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pfnacc",	now3d_insn,	1,	SUF_Z,	0x8A,	0,	0,	0,	CPU_3DNow,	CPU_Athlon,	0},
#line 1209 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"setnbeb",	setcc_insn,	1,	SUF_B,	0x07,	0,	0,	0,	CPU_386,	0,	0},
#line 615 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"invpcid",	invpcid_insn,	2,	SUF_Z,	0,	0,	0,	0,	CPU_386,	CPU_INVPCID,	CPU_Priv},
#line 426 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fcompl",	fcom_insn,	6,	SUF_L,	0xD8,	0x03,	0,	0,	CPU_FPU,	0,	0},
#line 664 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"larq",	larlsl_insn,	6,	SUF_Q,	0x02,	0,	0,	ONLY_64,	CPU_286,	CPU_Prot,	0},
#line 1318 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"str",	str_insn,	4,	SUF_Z,	0,	0,	0,	0,	CPU_286,	CPU_Prot,	0},
#line 800 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"movmskpsq",	movmsk_insn,	4,	SUF_Q,	0,	0,	0,	ONLY_64,	CPU_SSE,	0,	0},
#line 672 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"lds",	ldes_insn,	2,	SUF_Z,	0xC5,	0,	0,	NOT_64,	0,	0,	0},
#line 1899 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpinsrb",	pinsrb_insn,	4,	SUF_Z,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1080 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pushf",	onebyte_insn,	1,	SUF_Z,	0x9C,	0x00,	0x40,	0,	0,	0,	0},
#line 1536 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcvtsd2sil",	cvt_rx_xmm64_insn,	4,	SUF_L,	0xF2,	0x2D,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 633 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"jge",	jcc_insn,	9,	SUF_Z,	0x0D,	0,	0,	0,	0,	0,	0},
#line 1233 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"setpb",	setcc_insn,	1,	SUF_B,	0x0A,	0,	0,	0,	CPU_386,	0,	0},
#line 1372 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vaesdeclast",	aes_insn,	2,	SUF_Z,	0x38,	0xDF,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1371 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vaesdec",	aes_insn,	2,	SUF_Z,	0x38,	0xDE,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 2085 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"xstore",	padlock_insn,	1,	SUF_Z,	0xC0,	0x00,	0xA7,	0,	CPU_PadLock,	0,	0},
#line 1249 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"sha1nexte",	intel_SHA1NEXTE_insn,	1,	SUF_Z,	0,	0,	0,	0,	CPU_SHA,	0,	0},
#line 57 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"andps",	xmm_xmm128_insn,	2,	SUF_Z,	0x00,	0x54,	0,	0,	CPU_SSE,	0,	0},
#line 1877 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vphaddbd",	vphaddsub_insn,	1,	SUF_Z,	0xC2,	0,	0,	0,	CPU_XOP,	0,	0},
#line 1146 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"rorxl",	vex_gpr_reg_rm_0F_imm8_insn,	2,	SUF_L,	0xF2,	0x3A,	0xF0,	ONLY_AVX,	CPU_BMI2,	0,	0},
#line 639 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"jmpw",	jmp_insn,	31,	SUF_W,	0,	0,	0,	0,	0,	0,	0},
#line 460 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fildll",	fbldstp_insn,	1,	SUF_Z,	0x05,	0,	0,	0,	CPU_FPU,	0,	0},
#line 304 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmppd",	xmm_xmm128_imm_insn,	1,	SUF_Z,	0x66,	0xC2,	0,	0,	CPU_SSE2,	0,	0},
#line 114 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"bswapq",	bswap_insn,	2,	SUF_Q,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 1867 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpextrb",	pextrb_insn,	3,	SUF_Z,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1297 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"smswl",	sldtmsw_insn,	6,	SUF_L,	0x04,	0x01,	0,	0,	CPU_386,	0,	0},
#line 14 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"aam",	aadm_insn,	2,	SUF_Z,	0x00,	0,	0,	NOT_64,	0,	0,	0},
#line 1317 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"stosw",	onebyte_insn,	1,	SUF_Z,	0xAB,	0x10,	0,	0,	0,	0,	0},
#line 1067 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"ptest",	sse4_insn,	2,	SUF_Z,	0x17,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 863 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"notb",	f6_insn,	4,	SUF_B,	0x02,	0,	0,	0,	0,	0,	0},
#line 865 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"notq",	f6_insn,	4,	SUF_Q,	0x02,	0,	0,	ONLY_64,	0,	0,	0},
#line 1683 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vmload",	svm_rax_insn,	2,	SUF_Z,	0xDA,	0,	0,	0,	CPU_SVM,	0,	0},
#line 49 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"andb",	arith_insn,	22,	SUF_B,	0x20,	0x04,	0,	0,	0,	0,	0},
#line 1400 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpeq_usss",	ssecmp_32_insn,	4,	SUF_Z,	0x18,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1996 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpsubsw",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xE9,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1697 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vmovmskpd",	movmsk_insn,	4,	SUF_Z,	0x66,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1644 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vfnmsub231pd",	vfma_pd_insn,	2,	SUF_Z,	0xBE,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 177 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovg",	cmovcc_insn,	3,	SUF_Z,	0x0F,	0,	0,	0,	CPU_686,	0,	0},
#line 275 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmpeqpd",	ssecmp_128_insn,	3,	SUF_Z,	0x00,	0x66,	0,	0,	CPU_SSE,	0,	0},
#line 1602 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vfmsub213sd",	vfma_sd_insn,	2,	SUF_Z,	0xAB,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1120 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"rex64",	NULL,	X86_REX>>8,	0x48,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 1777 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpcmpistri",	sse4pcmpstr_insn,	1,	SUF_Z,	0x63,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1927 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpminsb",	ssse3_insn,	5,	SUF_Z,	0x38,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 51 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"andn",	vex_gpr_reg_nds_rm_0F_insn,	2,	SUF_Z,	0x00,	0x38,	0xF2,	ONLY_AVX,	CPU_BMI1,	0,	0},
#line 624 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"ja",	jcc_insn,	9,	SUF_Z,	0x07,	0,	0,	0,	0,	0,	0},
#line 1953 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpmullw",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xD5,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1549 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcvttpd2dq",	avx_cvt_xmm128_insn,	2,	SUF_Z,	0x66,	0xE6,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1657 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vgatherdps",	gather_32x_32y_insn,	2,	SUF_Z,	0x92,	0,	0,	ONLY_AVX,	CPU_AVX2,	0,	0},
#line 1603 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vfmsub213ss",	vfma_ss_insn,	2,	SUF_Z,	0xAB,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 648 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"jnl",	jcc_insn,	9,	SUF_Z,	0x0D,	0,	0,	0,	0,	0,	0},
#line 1246 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"sgdtw",	twobytemem_insn,	1,	SUF_W,	0x00,	0x0F,	0x01,	0,	CPU_286,	CPU_Priv,	0},
#line 274 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmpb",	arith_insn,	22,	SUF_B,	0x38,	0x07,	0,	0,	0,	0,	0},
#line 308 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmpsd",	cmpsd_insn,	5,	SUF_Z,	0,	0,	0,	0,	0,	0,	0},
#line 366 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cvttsd2siq",	cvt_rx_xmm64_insn,	4,	SUF_Q,	0xF2,	0x2C,	0,	ONLY_64,	CPU_SSE2,	0,	0},
#line 837 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"movzwq",	movszx_insn,	5,	SUF_W,	0xB6,	0,	0,	ONLY_64,	CPU_386,	0,	0},
#line 683 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"les",	ldes_insn,	2,	SUF_Z,	0xC4,	0,	0,	NOT_64,	0,	0,	0},
#line 1465 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpngepd",	ssecmp_128_insn,	3,	SUF_Z,	0x09,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 145 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"clflush",	clflush_insn,	1,	SUF_Z,	0,	0,	0,	0,	CPU_P3,	0,	0},
#line 681 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"leavew",	onebyte_insn,	1,	SUF_Z,	0xC9,	0x10,	0x00,	0,	CPU_186,	0,	0},
#line 36 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"addsubps",	xmm_xmm128_insn,	2,	SUF_Z,	0xF2,	0xD0,	0,	0,	CPU_SSE3,	0,	0},
#line 1666 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vinsertps",	insertps_insn,	4,	SUF_Z,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1720 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vmresume",	threebyte_insn,	1,	SUF_Z,	0x0F,	0x01,	0xC3,	0,	CPU_P4,	0,	0},
#line 294 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmpnlesd",	ssecmp_64_insn,	4,	SUF_Z,	0x06,	0xF2,	0,	0,	CPU_SSE2,	0,	0},
#line 1216 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"setnge",	setcc_insn,	1,	SUF_Z,	0x0C,	0,	0,	0,	CPU_386,	0,	0},
#line 23 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"adcxq",	vex_gpr_ndd_rm_0F38_insn,	2,	SUF_Q,	0x66,	0xF6,	0,	ONLY_64,	CPU_ADX,	0,	0},
#line 2082 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"xsetbv",	threebyte_insn,	1,	SUF_Z,	0x0F,	0x01,	0xD1,	0,	CPU_386,	CPU_Priv,	CPU_XSAVE},
#line 1896 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vphsubsw",	ssse3_insn,	5,	SUF_Z,	0x07,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1427 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpgtsd",	ssecmp_64_insn,	4,	SUF_Z,	0x0E,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1897 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vphsubw",	ssse3_insn,	5,	SUF_Z,	0x05,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 203 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovnbel",	cmovcc_insn,	3,	SUF_L,	0x07,	0,	0,	0,	CPU_686,	0,	0},
#line 140 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cdq",	onebyte_insn,	1,	SUF_Z,	0x99,	0x20,	0,	0,	CPU_386,	0,	0},
#line 88 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"blsfillq",	xop_gpr_reg_rm_09_insn,	2,	SUF_Q,	0x01,	0x02,	0,	ONLY_64,	CPU_TBM,	0,	0},
#line 852 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"mulxl",	vex_gpr_reg_nds_rm_0F_insn,	2,	SUF_L,	0xF2,	0x38,	0xF6,	ONLY_AVX,	CPU_BMI2,	0,	0},
#line 423 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fcomip",	fcom2_insn,	2,	SUF_Z,	0xDF,	0xF0,	0,	0,	CPU_686,	CPU_FPU,	0},
#line 1901 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpinsrq",	pinsrq_insn,	2,	SUF_Z,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1858 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpcomw",	vpcom_imm_insn,	1,	SUF_Z,	0xCD,	0,	0,	0,	CPU_XOP,	0,	0},
#line 1157 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"rsts",	cyrixsmm_insn,	1,	SUF_Z,	0x7D,	0,	0,	0,	CPU_486,	CPU_Cyrix,	CPU_SMM},
#line 1813 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpcomleb",	vpcom_insn,	1,	SUF_Z,	0xCC,	0x01,	0,	0,	CPU_XOP,	0,	0},
#line 1559 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vdivpd",	xmm_xmm128_256_insn,	4,	SUF_Z,	0x66,	0x5E,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 24 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"add",	arith_insn,	22,	SUF_Z,	0x00,	0x00,	0,	0,	0,	0,	0},
#line 1288 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"sldtw",	sldtmsw_insn,	6,	SUF_W,	0x00,	0x00,	0,	0,	CPU_286,	0,	0},
#line 1142 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"rorl",	shift_insn,	16,	SUF_L,	0x01,	0,	0,	0,	CPU_386,	0,	0},
#line 1539 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcvtsi2sd",	cvt_xmm_rmx_insn,	6,	SUF_Z,	0xF2,	0x2A,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1462 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpnge_uqps",	ssecmp_128_insn,	3,	SUF_Z,	0x19,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1616 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vfmsubpd",	fma_128_256_insn,	4,	SUF_Z,	0x6D,	0,	0,	ONLY_AVX,	CPU_FMA4,	0,	0},
#line 1928 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpminsd",	ssse3_insn,	5,	SUF_Z,	0x39,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 817 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"movsd",	movsd_insn,	5,	SUF_Z,	0,	0,	0,	0,	CPU_386,	0,	0},
#line 789 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"movhpd",	movhlp_insn,	3,	SUF_Z,	0x66,	0x16,	0,	0,	CPU_SSE2,	0,	0},
#line 1178 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"scasb",	onebyte_insn,	1,	SUF_Z,	0xAE,	0x00,	0,	0,	0,	0,	0},
#line 959 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"phminposuw",	sse4_insn,	2,	SUF_Z,	0x41,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 935 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pextrwl",	pextrw_insn,	7,	SUF_L,	0,	0,	0,	0,	CPU_MMX,	CPU_P3,	0},
#line 1765 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpclmulqdq",	pclmulqdq_insn,	2,	SUF_Z,	0x3A,	0x44,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1879 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vphaddbw",	vphaddsub_insn,	1,	SUF_Z,	0xC1,	0,	0,	0,	CPU_XOP,	0,	0},
#line 1060 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"psubsb",	mmxsse2_insn,	2,	SUF_Z,	0xE8,	0,	0,	0,	CPU_MMX,	0,	0},
#line 1097 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"rcrb",	shift_insn,	16,	SUF_B,	0x03,	0,	0,	0,	0,	0,	0},
#line 1078 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pushal",	onebyte_insn,	1,	SUF_Z,	0x60,	0x20,	0,	NOT_64,	CPU_386,	0,	0},
#line 1186 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"setb",	setcc_insn,	1,	SUF_Z,	0x02,	0,	0,	0,	CPU_386,	0,	0},
#line 297 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmpnltps",	ssecmp_128_insn,	3,	SUF_Z,	0x05,	0,	0,	0,	CPU_SSE,	0,	0},
#line 1095 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"rcpss",	xmm_xmm32_insn,	4,	SUF_Z,	0xF3,	0x53,	0,	0,	CPU_SSE,	0,	0},
#line 1489 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpnltpd",	ssecmp_128_insn,	3,	SUF_Z,	0x05,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 289 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmpneqps",	ssecmp_128_insn,	3,	SUF_Z,	0x04,	0,	0,	0,	CPU_SSE,	0,	0},
#line 1961 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpsadbw",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xF6,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1547 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcvtss2sil",	cvt_rx_xmm32_insn,	4,	SUF_L,	0xF3,	0x2D,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 408 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fadds",	farith_insn,	7,	SUF_S,	0xC0,	0xC0,	0x00,	0,	CPU_FPU,	0,	0},
#line 164 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovbeq",	cmovcc_insn,	3,	SUF_Q,	0x06,	0,	0,	ONLY_64,	CPU_686,	0,	0},
#line 65 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"bextrl",	bextr_insn,	4,	SUF_L,	0,	0,	0,	ONLY_AVX,	CPU_386,	CPU_BMI1,	0},
#line 2021 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vsqrtps",	avx_xmm_xmm128_insn,	2,	SUF_Z,	0x00,	0x51,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1515 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpunord_ssd",	ssecmp_64_insn,	4,	SUF_Z,	0x13,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 977 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pmaxsw",	mmxsse2_insn,	2,	SUF_Z,	0xEE,	0,	0,	0,	CPU_MMX,	CPU_P3,	0},
#line 668 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"lcallq",	ljmpcall_insn,	7,	SUF_Q,	0x03,	0x9A,	0,	ONLY_64,	0,	0,	0},
#line 746 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"lss",	lfgss_insn,	3,	SUF_Z,	0xB2,	0,	0,	0,	CPU_386,	0,	0},
#line 1775 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpcmpgtq",	ssse3_insn,	5,	SUF_Z,	0x37,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 204 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovnbeq",	cmovcc_insn,	3,	SUF_Q,	0x07,	0,	0,	ONLY_64,	CPU_686,	0,	0},
#line 1248 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"sha1msg2",	intel_SHA1MSG2_insn,	1,	SUF_Z,	0,	0,	0,	0,	CPU_SHA,	0,	0},
#line 1746 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpaddusb",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xDC,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 155 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovael",	cmovcc_insn,	3,	SUF_L,	0x03,	0,	0,	0,	CPU_686,	0,	0},
#line 1844 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpcomnew",	vpcom_insn,	1,	SUF_Z,	0xCD,	0x05,	0,	0,	CPU_XOP,	0,	0},
#line 1054 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"psrldq",	pslrldq_insn,	4,	SUF_Z,	0x03,	0,	0,	0,	CPU_SSE2,	0,	0},
#line 825 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"movswl",	movszx_insn,	5,	SUF_W,	0xBE,	0,	0,	0,	CPU_386,	0,	0},
#line 1214 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"setng",	setcc_insn,	1,	SUF_Z,	0x0E,	0,	0,	0,	CPU_386,	0,	0},
#line 1931 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpminud",	ssse3_insn,	5,	SUF_Z,	0x3B,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1685 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vmovapd",	movau_insn,	6,	SUF_Z,	0x66,	0x28,	0x01,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 464 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fimull",	fiarith_insn,	2,	SUF_L,	0x01,	0xDA,	0,	0,	CPU_FPU,	0,	0},
#line 473 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fistpq",	fildstp_insn,	4,	SUF_Q,	0x03,	0x02,	0x07,	0,	CPU_FPU,	0,	0},
#line 805 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"movntiq",	movnti_insn,	2,	SUF_Q,	0,	0,	0,	ONLY_64,	CPU_P4,	0,	0},
#line 205 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovnbew",	cmovcc_insn,	3,	SUF_W,	0x07,	0,	0,	0,	CPU_686,	0,	0},
#line 1239 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"setsb",	setcc_insn,	1,	SUF_B,	0x08,	0,	0,	0,	CPU_386,	0,	0},
#line 750 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"ltr",	prot286_insn,	1,	SUF_Z,	0x03,	0x00,	0,	0,	CPU_286,	CPU_Priv,	CPU_Prot},
#line 1839 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpcomneqw",	vpcom_insn,	1,	SUF_Z,	0xCD,	0x05,	0,	0,	CPU_XOP,	0,	0},
#line 25 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"addb",	arith_insn,	22,	SUF_B,	0x00,	0x00,	0,	0,	0,	0,	0},
#line 386 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"divl",	div_insn,	8,	SUF_L,	0x06,	0,	0,	0,	CPU_386,	0,	0},
#line 277 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmpeqsd",	ssecmp_64_insn,	4,	SUF_Z,	0x00,	0xF2,	0,	0,	CPU_SSE2,	0,	0},
#line 1407 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpfalse_ossd",	ssecmp_64_insn,	4,	SUF_Z,	0x1B,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 715 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"lodsl",	onebyte_insn,	1,	SUF_Z,	0xAD,	0x20,	0,	0,	CPU_386,	0,	0},
#line 661 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"lahf",	onebyte_insn,	1,	SUF_Z,	0x9F,	0,	0,	0,	0,	0,	0},
#line 1232 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"setp",	setcc_insn,	1,	SUF_Z,	0x0A,	0,	0,	0,	CPU_386,	0,	0},
#line 2008 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpunpcklwd",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0x61,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1728 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vmwritel",	vmxmemwr_insn,	2,	SUF_L,	0,	0,	0,	NOT_64,	CPU_P4,	0,	0},
#line 83 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"blendps",	sse4imm_insn,	2,	SUF_Z,	0x0C,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 1676 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vmcall",	threebyte_insn,	1,	SUF_Z,	0x0F,	0x01,	0xC1,	0,	CPU_P4,	0,	0},
#line 1085 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pushq",	push_insn,	35,	SUF_Q,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 1482 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpnleps",	ssecmp_128_insn,	3,	SUF_Z,	0x06,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1852 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpcomtrueuw",	vpcom_insn,	1,	SUF_Z,	0xED,	0x07,	0,	0,	CPU_XOP,	0,	0},
#line 990 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pmovsxbd",	sse4m32_insn,	4,	SUF_Z,	0x21,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 279 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmpl",	arith_insn,	22,	SUF_L,	0x38,	0x07,	0,	0,	CPU_386,	0,	0},
#line 945 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pfmin",	now3d_insn,	1,	SUF_Z,	0x94,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 499 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fldpi",	twobyte_insn,	1,	SUF_Z,	0xD9,	0xEB,	0,	0,	CPU_FPU,	0,	0},
#line 730 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"loopnzq",	loopq_insn,	4,	SUF_Z,	0x00,	0x40,	0,	ONLY_64,	0,	0,	0},
#line 1985 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpsraw",	vpshift_insn,	8,	SUF_Z,	0xE1,	0x71,	0x04,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1534 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcvtps2ph",	avx_cvtps2ph_insn,	4,	SUF_Z,	0x66,	0x1D,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1327 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"subq",	arith_insn,	22,	SUF_Q,	0x28,	0x05,	0,	ONLY_64,	0,	0,	0},
#line 556 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fsubrs",	farith_insn,	7,	SUF_S,	0xE0,	0xE8,	0x05,	0,	CPU_FPU,	0,	0},
#line 2060 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"xchgq",	xchg_insn,	16,	SUF_Q,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 267 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovsq",	cmovcc_insn,	3,	SUF_Q,	0x08,	0,	0,	ONLY_64,	CPU_686,	0,	0},
#line 1258 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"shldq",	shlrd_insn,	9,	SUF_Q,	0xA4,	0,	0,	ONLY_64,	CPU_386,	0,	0},
#line 680 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"leaveq",	onebyte_insn,	1,	SUF_Z,	0xC9,	0x00,	0x40,	ONLY_64,	0,	0,	0},
#line 1309 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"stc",	onebyte_insn,	1,	SUF_Z,	0xF9,	0,	0,	0,	0,	0,	0},
#line 528 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fsave",	twobytemem_insn,	1,	SUF_Z,	0x06,	0x9B,	0xDD,	0,	CPU_FPU,	0,	0},
#line 1090 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"rclb",	shift_insn,	16,	SUF_B,	0x02,	0,	0,	0,	0,	0,	0},
#line 484 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fisubrl",	fiarith_insn,	2,	SUF_L,	0x05,	0xDA,	0,	0,	CPU_FPU,	0,	0},
#line 1989 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpsrlvd",	vpshiftv_vexw0_avx2_insn,	2,	SUF_Z,	0x45,	0,	0,	ONLY_AVX,	CPU_AVX2,	0,	0},
#line 540 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fstenvl",	twobytemem_insn,	1,	SUF_L,	0x06,	0x9B,	0xD9,	0,	CPU_FPU,	0,	0},
#line 891 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"paddsb",	mmxsse2_insn,	2,	SUF_Z,	0xEC,	0,	0,	0,	CPU_MMX,	0,	0},
#line 1729 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vmwriteq",	vmxmemwr_insn,	2,	SUF_Q,	0,	0,	0,	ONLY_64,	CPU_P4,	0,	0},
#line 1359 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"ud2",	twobyte_insn,	1,	SUF_Z,	0x0F,	0x0B,	0,	0,	CPU_286,	0,	0},
#line 1588 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vfmaddsub132pd",	vfma_pd_insn,	2,	SUF_Z,	0x96,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1312 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"sti",	onebyte_insn,	1,	SUF_Z,	0xFB,	0,	0,	0,	0,	0,	0},
#line 1256 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"shld",	shlrd_insn,	9,	SUF_Z,	0xA4,	0,	0,	0,	CPU_386,	0,	0},
#line 1735 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpabsd",	avx2_ssse3_2op_insn,	2,	SUF_Z,	0x1E,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 854 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"mwait",	threebyte_insn,	1,	SUF_Z,	0x0F,	0x01,	0xC9,	0,	CPU_SSE3,	0,	0},
#line 350 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cvtsi2sd",	cvt_xmm_rmx_insn,	6,	SUF_Z,	0xF2,	0x2A,	0,	0,	CPU_SSE2,	0,	0},
#line 237 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovnp",	cmovcc_insn,	3,	SUF_Z,	0x0B,	0,	0,	0,	CPU_686,	0,	0},
#line 1525 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcvtpd2dq",	avx_cvt_xmm128_insn,	2,	SUF_Z,	0xF2,	0xE6,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 992 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pmovsxbw",	sse4m64_insn,	4,	SUF_Z,	0x20,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 482 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fisubl",	fiarith_insn,	2,	SUF_L,	0x04,	0xDA,	0,	0,	CPU_FPU,	0,	0},
#line 374 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"daa",	onebyte_insn,	1,	SUF_Z,	0x27,	0,	0,	NOT_64,	0,	0,	0},
#line 436 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fdivrl",	farith_insn,	7,	SUF_L,	0xF0,	0xF8,	0x07,	0,	CPU_FPU,	0,	0},
#line 1308 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"stac",	threebyte_insn,	1,	SUF_Z,	0x0F,	0x01,	0xCB,	0,	CPU_SMAP,	0,	0},
#line 202 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovnbe",	cmovcc_insn,	3,	SUF_Z,	0x07,	0,	0,	0,	CPU_686,	0,	0},
#line 836 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"movzwl",	movszx_insn,	5,	SUF_W,	0xB6,	0,	0,	0,	CPU_386,	0,	0},
#line 1756 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpblendw",	sse4imm_256avx2_insn,	4,	SUF_Z,	0x0E,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 853 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"mulxq",	vex_gpr_reg_nds_rm_0F_insn,	2,	SUF_Q,	0xF2,	0x38,	0xF6,	ONLY_AVX|ONLY_64,	CPU_BMI2,	0,	0},
#line 1205 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"setnaeb",	setcc_insn,	1,	SUF_B,	0x02,	0,	0,	0,	CPU_386,	0,	0},
#line 1104 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"rdpmc",	twobyte_insn,	1,	SUF_Z,	0x0F,	0x33,	0,	0,	CPU_686,	0,	0},
#line 716 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"lodsq",	onebyte_insn,	1,	SUF_Z,	0xAD,	0x40,	0,	ONLY_64,	0,	0,	0},
#line 1296 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"smsw",	sldtmsw_insn,	6,	SUF_Z,	0x04,	0x01,	0,	0,	CPU_286,	0,	0},
#line 189 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovlew",	cmovcc_insn,	3,	SUF_W,	0x0E,	0,	0,	0,	CPU_686,	0,	0},
#line 603 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"insertq",	insertq_insn,	2,	SUF_Z,	0,	0,	0,	0,	CPU_SSE4a,	0,	0},
#line 1837 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpcomnequq",	vpcom_insn,	1,	SUF_Z,	0xEF,	0x05,	0,	0,	CPU_XOP,	0,	0},
#line 748 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"lssq",	lfgss_insn,	3,	SUF_Q,	0xB2,	0,	0,	ONLY_64,	CPU_386,	0,	0},
#line 1285 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"sldt",	sldtmsw_insn,	6,	SUF_Z,	0x00,	0x00,	0,	0,	CPU_286,	0,	0},
#line 1568 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"verww",	prot286_insn,	1,	SUF_W,	0x05,	0x00,	0,	0,	CPU_286,	CPU_Prot,	0},
#line 1763 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpclmullqhqdq",	pclmulqdq_fixed_insn,	2,	SUF_Z,	0x10,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 803 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"movnti",	movnti_insn,	2,	SUF_Z,	0,	0,	0,	0,	CPU_P4,	0,	0},
#line 1981 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpsllvq",	vpshiftv_vexw1_avx2_insn,	2,	SUF_Z,	0x47,	0,	0,	ONLY_AVX,	CPU_AVX2,	0,	0},
#line 1070 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"punpckhqdq",	xmm_xmm128_insn,	2,	SUF_Z,	0x66,	0x6D,	0,	0,	CPU_SSE2,	0,	0},
#line 755 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"lzcntw",	cnt_insn,	3,	SUF_W,	0xBD,	0,	0,	0,	CPU_LZCNT,	0,	0},
#line 922 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pcmpistri",	sse4pcmpstr_insn,	1,	SUF_Z,	0x63,	0,	0,	0,	CPU_SSE42,	0,	0},
#line 1295 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"smovw",	onebyte_insn,	1,	SUF_Z,	0xA5,	0x10,	0,	0,	0,	0,	0},
#line 515 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fnstenv",	onebytemem_insn,	1,	SUF_Z,	0x06,	0xD9,	0,	0,	CPU_FPU,	0,	0},
#line 923 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pcmpistrm",	sse4pcmpstr_insn,	1,	SUF_Z,	0x62,	0,	0,	0,	CPU_SSE42,	0,	0},
#line 328 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cpuid",	twobyte_insn,	1,	SUF_Z,	0x0F,	0xA2,	0,	0,	CPU_486,	0,	0},
#line 1223 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"setnob",	setcc_insn,	1,	SUF_B,	0x01,	0,	0,	0,	CPU_386,	0,	0},
#line 1040 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pshufd",	xmm_xmm128_imm_insn,	1,	SUF_Z,	0x66,	0x70,	0,	0,	CPU_SSE2,	0,	0},
#line 93 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"blsil",	vex_gpr_ndd_rm_0F38_regext_insn,	2,	SUF_L,	0x00,	0xF3,	0x03,	ONLY_AVX,	CPU_BMI1,	0,	0},
#line 180 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovgeq",	cmovcc_insn,	3,	SUF_Q,	0x0D,	0,	0,	ONLY_64,	CPU_686,	0,	0},
#line 1569 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vextractf128",	vextractif128_insn,	1,	SUF_Z,	0x19,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 166 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovbl",	cmovcc_insn,	3,	SUF_L,	0x02,	0,	0,	0,	CPU_686,	0,	0},
#line 1922 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpmaxsd",	ssse3_insn,	5,	SUF_Z,	0x3D,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1155 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"rsqrtps",	xmm_xmm128_insn,	2,	SUF_Z,	0x00,	0x52,	0,	0,	CPU_SSE,	0,	0},
#line 1469 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpngt_uqpd",	ssecmp_128_insn,	3,	SUF_Z,	0x1A,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1508 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmptrue_usss",	ssecmp_32_insn,	4,	SUF_Z,	0x1F,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1544 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcvtsi2ssq",	cvt_xmm_rmx_insn,	6,	SUF_Q,	0xF3,	0x2A,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 2066 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"xcryptofb",	padlock_insn,	1,	SUF_Z,	0xE8,	0xF3,	0xA7,	0,	CPU_PadLock,	0,	0},
#line 127 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"btsl",	bittest_insn,	6,	SUF_L,	0xAB,	0x05,	0,	0,	CPU_386,	0,	0},
#line 1622 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vfnmadd132sd",	vfma_sd_insn,	2,	SUF_Z,	0x9D,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1266 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"shr",	shift_insn,	16,	SUF_Z,	0x05,	0,	0,	0,	0,	0,	0},
#line 560 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fucomi",	fcom2_insn,	2,	SUF_Z,	0xDB,	0xE8,	0,	0,	CPU_686,	CPU_FPU,	0},
#line 21 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"adcx",	vex_gpr_ndd_rm_0F38_insn,	2,	SUF_Z,	0x66,	0xF6,	0,	0,	CPU_ADX,	0,	0},
#line 1228 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"setnz",	setcc_insn,	1,	SUF_Z,	0x05,	0,	0,	0,	CPU_386,	0,	0},
#line 459 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fildl",	fildstp_insn,	4,	SUF_L,	0x00,	0x02,	0x05,	0,	CPU_FPU,	0,	0},
#line 605 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"insw",	onebyte_insn,	1,	SUF_Z,	0x6D,	0x10,	0,	0,	0,	0,	0},
#line 1511 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmptruesd",	ssecmp_64_insn,	4,	SUF_Z,	0x0F,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 547 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fsts",	fst_insn,	3,	SUF_S,	0,	0,	0,	0,	CPU_FPU,	0,	0},
#line 1066 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pswapd",	now3d_insn,	1,	SUF_Z,	0xBB,	0,	0,	0,	CPU_3DNow,	CPU_Athlon,	0},
#line 506 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fmuls",	farith_insn,	7,	SUF_S,	0xC8,	0xC8,	0x01,	0,	CPU_FPU,	0,	0},
#line 421 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fcom",	fcom_insn,	6,	SUF_Z,	0xD0,	0x02,	0,	0,	CPU_FPU,	0,	0},
#line 58 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"andq",	arith_insn,	22,	SUF_Q,	0x20,	0x04,	0,	ONLY_64,	0,	0,	0},
#line 1585 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vfmaddps",	fma_128_256_insn,	4,	SUF_Z,	0x68,	0,	0,	ONLY_AVX,	CPU_FMA4,	0,	0},
#line 536 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fst",	fst_insn,	3,	SUF_Z,	0,	0,	0,	0,	CPU_FPU,	0,	0},
#line 1670 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vmaskmovpd",	vmaskmov_insn,	4,	SUF_Z,	0x2D,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 144 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cld",	onebyte_insn,	1,	SUF_Z,	0xFC,	0,	0,	0,	0,	0,	0},
#line 1900 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpinsrd",	pinsrd_insn,	2,	SUF_Z,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 738 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"lret",	retnf_insn,	6,	SUF_Z,	0xCA,	0,	0,	0,	0,	0,	0},
#line 1425 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpgtpd",	ssecmp_128_insn,	3,	SUF_Z,	0x0E,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 2038 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vxorps",	xmm_xmm128_256_insn,	4,	SUF_Z,	0x00,	0x57,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1385 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vbroadcastf128",	vbroadcastif128_insn,	1,	SUF_Z,	0x1A,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 910 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pclmullqlqdq",	pclmulqdq_fixed_insn,	2,	SUF_Z,	0x00,	0,	0,	0,	CPU_AVX,	0,	0},
#line 228 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovnleq",	cmovcc_insn,	3,	SUF_Q,	0x0F,	0,	0,	ONLY_64,	CPU_686,	0,	0},
#line 1859 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vperm2f128",	vperm2f128_insn,	1,	SUF_Z,	0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1753 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpavgw",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xE3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 78 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"blcmskq",	xop_gpr_reg_rm_09_insn,	2,	SUF_Q,	0x02,	0x01,	0,	ONLY_64,	CPU_TBM,	0,	0},
#line 1809 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpcomgtud",	vpcom_insn,	1,	SUF_Z,	0xEE,	0x02,	0,	0,	CPU_XOP,	0,	0},
#line 92 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"blsicq",	xop_gpr_reg_rm_09_insn,	2,	SUF_Q,	0x01,	0x06,	0,	ONLY_64,	CPU_TBM,	0,	0},
#line 253 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovp",	cmovcc_insn,	3,	SUF_Z,	0x0A,	0,	0,	0,	CPU_686,	0,	0},
#line 2079 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"xsave",	twobytemem_insn,	1,	SUF_Z,	0x04,	0x0F,	0xAE,	0,	CPU_386,	CPU_XSAVE,	0},
#line 2087 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"xtest",	tsx_0x0F_0x01_insn,	1,	SUF_Z,	0xD6,	0,	0,	0,	CPU_TSX,	0,	0},
#line 1892 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vphminposuw",	avx_ssse3_2op_insn,	1,	SUF_Z,	0x41,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 132 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"bzhil",	vex_gpr_reg_rm_nds_0F_insn,	2,	SUF_L,	0x00,	0x38,	0xF5,	ONLY_AVX,	CPU_BMI2,	0,	0},
#line 1050 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"psllw",	pshift_insn,	4,	SUF_Z,	0xF1,	0x71,	0x06,	0,	CPU_MMX,	0,	0},
#line 409 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fbld",	fbldstp_insn,	1,	SUF_Z,	0x04,	0,	0,	0,	CPU_FPU,	0,	0},
#line 1330 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"subw",	arith_insn,	22,	SUF_W,	0x28,	0x05,	0,	0,	0,	0,	0},
#line 630 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"je",	jcc_insn,	9,	SUF_Z,	0x04,	0,	0,	0,	0,	0,	0},
#line 1742 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpaddd",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xFE,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 592 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"imulw",	imul_insn,	19,	SUF_W,	0,	0,	0,	0,	0,	0,	0},
#line 2070 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"xor",	arith_insn,	22,	SUF_Z,	0x30,	0x06,	0,	0,	0,	0,	0},
#line 1713 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vmovups",	movau_insn,	6,	SUF_Z,	0x00,	0x10,	0x01,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 678 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"leave",	onebyte_insn,	1,	SUF_Z,	0xC9,	0x00,	0x40,	0,	CPU_186,	0,	0},
#line 1115 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"ret",	retnf_insn,	6,	SUF_Z,	0xC2,	0,	0,	0,	0,	0,	0},
#line 339 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cvtpd2pi",	cvt_mm_xmm_insn,	1,	SUF_Z,	0x66,	0x2D,	0,	0,	CPU_SSE2,	0,	0},
#line 1077 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pusha",	onebyte_insn,	1,	SUF_Z,	0x60,	0x00,	0,	NOT_64,	CPU_186,	0,	0},
#line 625 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"jae",	jcc_insn,	9,	SUF_Z,	0x03,	0,	0,	0,	0,	0,	0},
#line 1752 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpavgb",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xE0,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1238 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"sets",	setcc_insn,	1,	SUF_Z,	0x08,	0,	0,	0,	CPU_386,	0,	0},
#line 784 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"movddup",	xmm_xmm64_insn,	4,	SUF_Z,	0xF2,	0x12,	0,	0,	CPU_SSE3,	0,	0},
#line 1642 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vfnmsub213sd",	vfma_sd_insn,	2,	SUF_Z,	0xAF,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1946 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpmovzxwd",	sse4m64_insn,	4,	SUF_Z,	0x33,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1651 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vfnmsubss",	fma_128_m32_insn,	3,	SUF_Z,	0x7E,	0,	0,	ONLY_AVX,	CPU_FMA4,	0,	0},
#line 718 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"loop",	loop_insn,	8,	SUF_Z,	0x02,	0,	0,	0,	0,	0,	0},
#line 131 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"bzhi",	vex_gpr_reg_rm_nds_0F_insn,	2,	SUF_Z,	0x00,	0x38,	0xF5,	ONLY_AVX,	CPU_BMI2,	0,	0},
#line 2053 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"xaddq",	cmpxchgxadd_insn,	4,	SUF_Q,	0xC0,	0,	0,	ONLY_64,	CPU_486,	0,	0},
#line 1156 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"rsqrtss",	xmm_xmm32_insn,	4,	SUF_Z,	0xF3,	0x52,	0,	0,	CPU_SSE,	0,	0},
#line 1590 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vfmaddsub213pd",	vfma_pd_insn,	2,	SUF_Z,	0xA6,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 769 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"montmul",	padlock_insn,	1,	SUF_Z,	0xC0,	0xF3,	0xA6,	0,	CPU_PadLock,	0,	0},
#line 1099 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"rcrq",	shift_insn,	16,	SUF_Q,	0x03,	0,	0,	ONLY_64,	0,	0,	0},
#line 1744 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpaddsb",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xEC,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1388 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vbroadcastss",	vbroadcastss_insn,	4,	SUF_Z,	0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 245 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovnz",	cmovcc_insn,	3,	SUF_Z,	0x05,	0,	0,	0,	CPU_686,	0,	0},
#line 403 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"f2xm1",	twobyte_insn,	1,	SUF_Z,	0xD9,	0xF0,	0,	0,	CPU_FPU,	0,	0},
#line 427 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fcompp",	twobyte_insn,	1,	SUF_Z,	0xDE,	0xD9,	0,	0,	CPU_FPU,	0,	0},
#line 1962 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpshab",	amd_vpshift_insn,	2,	SUF_Z,	0x98,	0,	0,	0,	CPU_XOP,	0,	0},
#line 1365 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vaddpd",	xmm_xmm128_256_insn,	4,	SUF_Z,	0x66,	0x58,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 647 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"jnge",	jcc_insn,	9,	SUF_Z,	0x0C,	0,	0,	0,	0,	0,	0},
#line 143 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"clc",	onebyte_insn,	1,	SUF_Z,	0xF8,	0,	0,	0,	0,	0,	0},
#line 192 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovlw",	cmovcc_insn,	3,	SUF_W,	0x0C,	0,	0,	0,	CPU_686,	0,	0},
#line 1117 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"retq",	retnf_insn,	6,	SUF_Z,	0xC2,	0,	0,	ONLY_64,	0,	0,	0},
#line 399 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"enterq",	enter_insn,	3,	SUF_Q,	0,	0,	0,	ONLY_64,	CPU_186,	0,	0},
#line 767 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"monitor",	threebyte_insn,	1,	SUF_Z,	0x0F,	0x01,	0xC8,	0,	CPU_SSE3,	0,	0},
#line 2023 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vsqrtss",	xmm_xmm32_insn,	4,	SUF_Z,	0xF3,	0x51,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 906 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pblendw",	sse4imm_insn,	2,	SUF_Z,	0x0E,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 1868 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpextrd",	pextrd_insn,	1,	SUF_Z,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1331 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"svdc",	svdc_insn,	1,	SUF_Z,	0,	0,	0,	0,	CPU_486,	CPU_Cyrix,	CPU_SMM},
#line 1695 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vmovlpd",	movhlp_insn,	3,	SUF_Z,	0x66,	0x12,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 773 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"movabsl",	movabs_insn,	9,	SUF_L,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 989 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pmovmskbq",	pmovmskb_insn,	6,	SUF_Q,	0,	0,	0,	ONLY_64,	CPU_MMX,	CPU_P3,	0},
#line 1211 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"setncb",	setcc_insn,	1,	SUF_B,	0x03,	0,	0,	0,	CPU_386,	0,	0},
#line 760 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"maxsd",	xmm_xmm64_insn,	4,	SUF_Z,	0xF2,	0x5F,	0,	0,	CPU_SSE2,	0,	0},
#line 295 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmpnless",	ssecmp_32_insn,	4,	SUF_Z,	0x06,	0xF3,	0,	0,	CPU_SSE,	0,	0},
#line 522 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fprem1",	twobyte_insn,	1,	SUF_Z,	0xD9,	0xF5,	0,	0,	CPU_286,	CPU_FPU,	0},
#line 1596 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vfmsub132pd",	vfma_pd_insn,	2,	SUF_Z,	0x9A,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 619 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"inw",	in_insn,	12,	SUF_W,	0,	0,	0,	0,	0,	0,	0},
#line 133 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"bzhiq",	vex_gpr_reg_rm_nds_0F_insn,	2,	SUF_Q,	0x00,	0x38,	0xF5,	ONLY_AVX|ONLY_64,	CPU_BMI2,	0,	0},
#line 1016 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pop",	pop_insn,	23,	SUF_Z,	0,	0,	0,	0,	0,	0,	0},
#line 723 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"loopl",	loopl_insn,	4,	SUF_Z,	0x02,	0x20,	0,	0,	0,	0,	0},
#line 1724 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vmulps",	xmm_xmm128_256_insn,	4,	SUF_Z,	0x00,	0x59,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 829 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"movsxw",	movszx_insn,	5,	SUF_W,	0xBE,	0,	0,	0,	CPU_386,	0,	0},
#line 775 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"movabsw",	movabs_insn,	9,	SUF_W,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 467 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"finit",	threebyte_insn,	1,	SUF_Z,	0x9B,	0xDB,	0xE3,	0,	CPU_FPU,	0,	0},
#line 508 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fninit",	twobyte_insn,	1,	SUF_Z,	0xDB,	0xE3,	0,	0,	CPU_FPU,	0,	0},
#line 1503 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpsd",	cmpsd_insn,	5,	SUF_Z,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 481 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fisub",	fiarith_insn,	2,	SUF_Z,	0x04,	0xDA,	0,	0,	CPU_FPU,	0,	0},
#line 1187 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"setbb",	setcc_insn,	1,	SUF_B,	0x02,	0,	0,	0,	CPU_386,	0,	0},
#line 1866 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpermq",	vperm_imm_avx2_insn,	1,	SUF_Z,	0x00,	0,	0,	ONLY_AVX,	CPU_AVX2,	0,	0},
#line 56 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"andpd",	xmm_xmm128_insn,	2,	SUF_Z,	0x66,	0x54,	0,	0,	CPU_SSE2,	0,	0},
#line 1671 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vmaskmovps",	vmaskmov_insn,	4,	SUF_Z,	0x2C,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1345 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"testb",	test_insn,	20,	SUF_B,	0,	0,	0,	0,	0,	0,	0},
#line 1607 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vfmsub231ss",	vfma_ss_insn,	2,	SUF_Z,	0xBB,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1661 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vhaddps",	xmm_xmm128_256_insn,	4,	SUF_Z,	0xF2,	0x7C,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 590 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"imull",	imul_insn,	19,	SUF_L,	0,	0,	0,	0,	CPU_386,	0,	0},
#line 699 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"lidt",	twobytemem_insn,	1,	SUF_Z,	0x03,	0x0F,	0x01,	0,	CPU_286,	CPU_Priv,	0},
#line 1617 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vfmsubps",	fma_128_256_insn,	4,	SUF_Z,	0x6C,	0,	0,	ONLY_AVX,	CPU_FMA4,	0,	0},
#line 1332 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"svldt",	cyrixsmm_insn,	1,	SUF_Z,	0x7A,	0,	0,	0,	CPU_486,	CPU_Cyrix,	CPU_SMM},
#line 1093 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"rclw",	shift_insn,	16,	SUF_W,	0x02,	0,	0,	0,	0,	0,	0},
#line 1893 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vphsubbw",	vphaddsub_insn,	1,	SUF_Z,	0xE1,	0,	0,	0,	CPU_XOP,	0,	0},
#line 895 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"paddusw",	mmxsse2_insn,	2,	SUF_Z,	0xDD,	0,	0,	0,	CPU_MMX,	0,	0},
#line 826 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"movswq",	movszx_insn,	5,	SUF_W,	0xBE,	0,	0,	ONLY_64,	CPU_386,	0,	0},
#line 71 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"blcic",	xop_gpr_reg_rm_09_insn,	2,	SUF_Z,	0x01,	0x05,	0,	0,	CPU_386,	CPU_TBM,	0},
#line 1144 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"rorw",	shift_insn,	16,	SUF_W,	0x01,	0,	0,	0,	0,	0,	0},
#line 1446 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpneq_oqps",	ssecmp_128_insn,	3,	SUF_Z,	0x0C,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1141 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"rorb",	shift_insn,	16,	SUF_B,	0x01,	0,	0,	0,	0,	0,	0},
#line 1811 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpcomgtuw",	vpcom_insn,	1,	SUF_Z,	0xED,	0x02,	0,	0,	CPU_XOP,	0,	0},
#line 16 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"adc",	arith_insn,	22,	SUF_Z,	0x10,	0x02,	0,	0,	0,	0,	0},
#line 916 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pcmpestri",	sse4pcmpstr_insn,	1,	SUF_Z,	0x61,	0,	0,	0,	CPU_SSE42,	0,	0},
#line 842 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"mul",	f6_insn,	4,	SUF_Z,	0x04,	0,	0,	0,	0,	0,	0},
#line 186 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovle",	cmovcc_insn,	3,	SUF_Z,	0x0E,	0,	0,	0,	CPU_686,	0,	0},
#line 1230 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"seto",	setcc_insn,	1,	SUF_Z,	0x00,	0,	0,	0,	CPU_386,	0,	0},
#line 2011 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vrcpss",	xmm_xmm32_insn,	4,	SUF_Z,	0xF3,	0x53,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 996 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pmovzxbd",	sse4m32_insn,	4,	SUF_Z,	0x31,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 2065 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"xcryptecb",	padlock_insn,	1,	SUF_Z,	0xC8,	0xF3,	0xA7,	0,	CPU_PadLock,	0,	0},
#line 1028 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"popl",	pop_insn,	23,	SUF_L,	0,	0,	0,	NOT_64,	CPU_386,	0,	0},
#line 478 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fisttpll",	fildstp_insn,	4,	SUF_Q,	0x07,	0,	0,	0,	CPU_SSE3,	0,	0},
#line 1369 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vaddsubpd",	xmm_xmm128_256_insn,	4,	SUF_Z,	0x66,	0xD0,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1573 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vfmadd132ps",	vfma_ps_insn,	2,	SUF_Z,	0x98,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1780 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpcomd",	vpcom_imm_insn,	1,	SUF_Z,	0xCE,	0,	0,	0,	CPU_XOP,	0,	0},
#line 1389 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpeq_ospd",	ssecmp_128_insn,	3,	SUF_Z,	0x10,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1711 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vmovss",	movss_insn,	4,	SUF_Z,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 938 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pf2iw",	now3d_insn,	1,	SUF_Z,	0x1C,	0,	0,	0,	CPU_3DNow,	CPU_Athlon,	0},
#line 1020 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"popcnt",	cnt_insn,	3,	SUF_Z,	0xB8,	0,	0,	0,	CPU_SSE42,	0,	0},
#line 1836 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpcomnequd",	vpcom_insn,	1,	SUF_Z,	0xEE,	0x05,	0,	0,	CPU_XOP,	0,	0},
#line 19 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"adcq",	arith_insn,	22,	SUF_Q,	0x10,	0x02,	0,	ONLY_64,	0,	0,	0},
#line 1787 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpcomequw",	vpcom_insn,	1,	SUF_Z,	0xED,	0x04,	0,	0,	CPU_XOP,	0,	0},
#line 1035 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"prefetcht1",	twobytemem_insn,	1,	SUF_Z,	0x02,	0x0F,	0x18,	0,	CPU_P3,	0,	0},
#line 26 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"addl",	arith_insn,	22,	SUF_L,	0x00,	0x00,	0,	0,	CPU_386,	0,	0},
#line 1707 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vmovq",	vmovq_insn,	5,	SUF_Z,	0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 319 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmpxchg16b",	cmpxchg16b_insn,	1,	SUF_Z,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 1294 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"smovq",	onebyte_insn,	1,	SUF_Z,	0xA5,	0x40,	0,	ONLY_64,	0,	0,	0},
#line 461 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fildq",	fildstp_insn,	4,	SUF_Q,	0x00,	0x02,	0x05,	0,	CPU_FPU,	0,	0},
#line 1386 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vbroadcasti128",	vbroadcastif128_insn,	1,	SUF_Z,	0x5A,	0,	0,	ONLY_AVX,	CPU_AVX2,	0,	0},
#line 154 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovae",	cmovcc_insn,	3,	SUF_Z,	0x03,	0,	0,	0,	CPU_686,	0,	0},
#line 244 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovnsw",	cmovcc_insn,	3,	SUF_W,	0x09,	0,	0,	0,	CPU_686,	0,	0},
#line 778 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"movb",	mov_insn,	69,	SUF_B,	0,	0,	0,	0,	0,	0,	0},
#line 468 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fist",	fiarith_insn,	2,	SUF_Z,	0x02,	0xDB,	0,	0,	CPU_FPU,	0,	0},
#line 1779 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpcomb",	vpcom_imm_insn,	1,	SUF_Z,	0xCC,	0,	0,	0,	CPU_XOP,	0,	0},
#line 1739 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpackusdw",	ssse3_insn,	5,	SUF_Z,	0x2B,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 2073 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"xorpd",	xmm_xmm128_insn,	2,	SUF_Z,	0x66,	0x57,	0,	0,	CPU_SSE2,	0,	0},
#line 100 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"blsrq",	vex_gpr_ndd_rm_0F38_regext_insn,	2,	SUF_Q,	0x00,	0xF3,	0x01,	ONLY_AVX|ONLY_64,	CPU_BMI1,	0,	0},
#line 771 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"movabs",	movabs_insn,	9,	SUF_Z,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 1759 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpbroadcastq",	vpbroadcastq_avx2_insn,	4,	SUF_Z,	0,	0,	0,	ONLY_AVX,	CPU_AVX2,	0,	0},
#line 35 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"addsubpd",	xmm_xmm128_insn,	2,	SUF_Z,	0x66,	0xD0,	0,	0,	CPU_SSE3,	0,	0},
#line 1339 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"sysretl",	twobyte_insn,	1,	SUF_L,	0x0F,	0x07,	0,	0,	CPU_686,	CPU_AMD,	CPU_Priv},
#line 1999 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpsubw",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xF9,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1293 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"smovl",	onebyte_insn,	1,	SUF_Z,	0xA5,	0x20,	0,	0,	CPU_386,	0,	0},
#line 48 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"and",	arith_insn,	22,	SUF_Z,	0x20,	0x04,	0,	0,	0,	0,	0},
#line 59 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"andw",	arith_insn,	22,	SUF_W,	0x20,	0x04,	0,	0,	0,	0,	0},
#line 281 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmpleps",	ssecmp_128_insn,	3,	SUF_Z,	0x02,	0,	0,	0,	CPU_SSE,	0,	0},
#line 583 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"idiv",	div_insn,	8,	SUF_Z,	0x07,	0,	0,	0,	0,	0,	0},
#line 1329 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"subss",	xmm_xmm32_insn,	4,	SUF_Z,	0xF3,	0x5C,	0,	0,	CPU_SSE,	0,	0},
#line 1848 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpcomtrueq",	vpcom_insn,	1,	SUF_Z,	0xCF,	0x07,	0,	0,	CPU_XOP,	0,	0},
#line 574 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"getsec",	twobyte_insn,	1,	SUF_Z,	0x0F,	0x37,	0,	0,	CPU_SMX,	0,	0},
#line 2068 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"xgetbv",	threebyte_insn,	1,	SUF_Z,	0x0F,	0x01,	0xD0,	0,	CPU_386,	CPU_XSAVE,	0},
#line 343 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cvtps2dq",	xmm_xmm128_insn,	2,	SUF_Z,	0x66,	0x5B,	0,	0,	CPU_SSE2,	0,	0},
#line 1210 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"setnc",	setcc_insn,	1,	SUF_Z,	0x03,	0,	0,	0,	CPU_386,	0,	0},
#line 150 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"clts",	twobyte_insn,	1,	SUF_Z,	0x0F,	0x06,	0,	0,	CPU_286,	CPU_Priv,	0},
#line 1426 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpgtps",	ssecmp_128_insn,	3,	SUF_Z,	0x0E,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 573 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fyl2xp1",	twobyte_insn,	1,	SUF_Z,	0xD9,	0xF9,	0,	0,	CPU_FPU,	0,	0},
#line 997 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pmovzxbq",	sse4m16_insn,	4,	SUF_Z,	0x32,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 1840 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpcomneub",	vpcom_insn,	1,	SUF_Z,	0xEC,	0x05,	0,	0,	CPU_XOP,	0,	0},
#line 273 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmp",	arith_insn,	22,	SUF_Z,	0x38,	0x07,	0,	0,	0,	0,	0},
#line 1131 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"rexxz",	NULL,	X86_REX>>8,	0x45,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 300 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmpordpd",	ssecmp_128_insn,	3,	SUF_Z,	0x07,	0x66,	0,	0,	CPU_SSE,	0,	0},
#line 1068 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"punpckhbw",	mmxsse2_insn,	2,	SUF_Z,	0x68,	0,	0,	0,	CPU_MMX,	0,	0},
#line 1333 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"svts",	cyrixsmm_insn,	1,	SUF_Z,	0x7C,	0,	0,	0,	CPU_486,	CPU_Cyrix,	CPU_SMM},
#line 1527 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcvtpd2dqy",	avx_cvt_xmm128_y_insn,	1,	SUF_Z,	0xF2,	0xE6,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 167 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovbq",	cmovcc_insn,	3,	SUF_Q,	0x02,	0,	0,	ONLY_64,	CPU_686,	0,	0},
#line 448 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"ficomp",	fiarith_insn,	2,	SUF_Z,	0x03,	0xDA,	0,	0,	CPU_FPU,	0,	0},
#line 1546 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcvtss2si",	cvt_rx_xmm32_insn,	4,	SUF_Z,	0xF3,	0x2D,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 329 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cqo",	onebyte_insn,	1,	SUF_Z,	0x99,	0x40,	0,	ONLY_64,	0,	0,	0},
#line 1481 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpnlepd",	ssecmp_128_insn,	3,	SUF_Z,	0x06,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1206 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"setnb",	setcc_insn,	1,	SUF_Z,	0x03,	0,	0,	0,	CPU_386,	0,	0},
#line 1980 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpsllvd",	vpshiftv_vexw0_avx2_insn,	2,	SUF_Z,	0x47,	0,	0,	ONLY_AVX,	CPU_AVX2,	0,	0},
#line 1437 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmplt_oqpd",	ssecmp_128_insn,	3,	SUF_Z,	0x11,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 934 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pextrw",	pextrw_insn,	7,	SUF_Z,	0,	0,	0,	0,	CPU_MMX,	CPU_P3,	0},
#line 735 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"loopzl",	loopl_insn,	4,	SUF_Z,	0x01,	0x20,	0,	0,	0,	0,	0},
#line 1847 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpcomtrued",	vpcom_insn,	1,	SUF_Z,	0xCE,	0x07,	0,	0,	CPU_XOP,	0,	0},
#line 1504 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpss",	xmm_xmm32_imm_insn,	4,	SUF_Z,	0xF3,	0xC2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1193 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"seteb",	setcc_insn,	1,	SUF_B,	0x04,	0,	0,	0,	CPU_386,	0,	0},
#line 1730 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vmxoff",	threebyte_insn,	1,	SUF_Z,	0x0F,	0x01,	0xC4,	0,	CPU_P4,	0,	0},
#line 1976 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpsignw",	ssse3_insn,	5,	SUF_Z,	0x09,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 991 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pmovsxbq",	sse4m16_insn,	4,	SUF_Z,	0x22,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 1631 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vfnmadd231ss",	vfma_ss_insn,	2,	SUF_Z,	0xBD,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1737 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpackssdw",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0x6B,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 900 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pause",	onebyte_prefix_insn,	1,	SUF_Z,	0xF3,	0x90,	0,	0,	CPU_P4,	0,	0},
#line 28 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"addps",	xmm_xmm128_insn,	2,	SUF_Z,	0x00,	0x58,	0,	0,	CPU_SSE,	0,	0},
#line 686 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"lfence",	threebyte_insn,	1,	SUF_Z,	0x0F,	0xAE,	0xE8,	0,	CPU_P3,	0,	0},
#line 1096 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"rcr",	shift_insn,	16,	SUF_Z,	0x03,	0,	0,	0,	0,	0,	0},
#line 879 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"outsw",	onebyte_insn,	1,	SUF_Z,	0x6F,	0x10,	0,	0,	0,	0,	0},
#line 2057 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"xchg",	xchg_insn,	16,	SUF_Z,	0,	0,	0,	0,	0,	0,	0},
#line 1357 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"ucomiss",	xmm_xmm32_insn,	4,	SUF_Z,	0x00,	0x2E,	0,	0,	CPU_SSE,	0,	0},
#line 1277 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"shrxq",	vex_gpr_reg_rm_nds_0F_insn,	2,	SUF_Q,	0xF2,	0x38,	0xF7,	ONLY_AVX|ONLY_64,	CPU_BMI2,	0,	0},
#line 689 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"lfsq",	lfgss_insn,	3,	SUF_Q,	0xB4,	0,	0,	ONLY_64,	CPU_386,	0,	0},
#line 1456 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpneq_usss",	ssecmp_32_insn,	4,	SUF_Z,	0x14,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1764 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpclmullqlqdq",	pclmulqdq_fixed_insn,	2,	SUF_Z,	0x00,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 821 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"movslq",	movsxd_insn,	1,	SUF_L,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 1749 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpalignr",	sse4imm_256avx2_insn,	4,	SUF_Z,	0x0F,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 290 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmpneqsd",	ssecmp_64_insn,	4,	SUF_Z,	0x04,	0xF2,	0,	0,	CPU_SSE2,	0,	0},
#line 965 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pinsrb",	pinsrb_insn,	4,	SUF_Z,	0,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 818 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"movshdup",	xmm_xmm128_insn,	2,	SUF_Z,	0xF3,	0x16,	0,	0,	CPU_SSE3,	0,	0},
#line 190 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovll",	cmovcc_insn,	3,	SUF_L,	0x0C,	0,	0,	0,	CPU_686,	0,	0},
#line 1732 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vorpd",	xmm_xmm128_256_insn,	4,	SUF_Z,	0x66,	0x56,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 762 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"mfence",	threebyte_insn,	1,	SUF_Z,	0x0F,	0xAE,	0xF0,	0,	CPU_P3,	0,	0},
#line 936 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pextrwq",	pextrw_insn,	7,	SUF_Q,	0,	0,	0,	ONLY_64,	CPU_MMX,	CPU_P3,	0},
#line 1199 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"setlb",	setcc_insn,	1,	SUF_B,	0x0C,	0,	0,	0,	CPU_386,	0,	0},
#line 183 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovgq",	cmovcc_insn,	3,	SUF_Q,	0x0F,	0,	0,	ONLY_64,	CPU_686,	0,	0},
#line 1361 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"unpckhpd",	xmm_xmm128_insn,	2,	SUF_Z,	0x66,	0x15,	0,	0,	CPU_SSE2,	0,	0},
#line 1793 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpcomfalseud",	vpcom_insn,	1,	SUF_Z,	0xEE,	0x06,	0,	0,	CPU_XOP,	0,	0},
#line 231 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovnlq",	cmovcc_insn,	3,	SUF_Q,	0x0D,	0,	0,	ONLY_64,	CPU_686,	0,	0},
#line 1825 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpcomltud",	vpcom_insn,	1,	SUF_Z,	0xEE,	0x00,	0,	0,	CPU_XOP,	0,	0},
#line 1217 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"setngeb",	setcc_insn,	1,	SUF_B,	0x0C,	0,	0,	0,	CPU_386,	0,	0},
#line 1017 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"popa",	onebyte_insn,	1,	SUF_Z,	0x61,	0x00,	0,	NOT_64,	CPU_186,	0,	0},
#line 616 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"invvpid",	eptvpid_insn,	2,	SUF_Z,	0x01,	0,	0,	0,	CPU_386,	CPU_EPTVPID,	0},
#line 1841 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpcomneud",	vpcom_insn,	1,	SUF_Z,	0xEE,	0x05,	0,	0,	CPU_XOP,	0,	0},
#line 1041 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pshufhw",	xmm_xmm128_imm_insn,	1,	SUF_Z,	0xF3,	0x70,	0,	0,	CPU_SSE2,	0,	0},
#line 704 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"ljmpl",	ljmpcall_insn,	7,	SUF_L,	0x05,	0xEA,	0,	0,	CPU_386,	0,	0},
#line 1174 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"sbbb",	arith_insn,	22,	SUF_B,	0x18,	0x03,	0,	0,	0,	0,	0},
#line 963 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pi2fd",	now3d_insn,	1,	SUF_Z,	0x0D,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 296 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmpnltpd",	ssecmp_128_insn,	3,	SUF_Z,	0x05,	0x66,	0,	0,	CPU_SSE,	0,	0},
#line 541 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fstenvs",	twobytemem_insn,	1,	SUF_S,	0x06,	0x9B,	0xD9,	0,	CPU_FPU,	0,	0},
#line 1734 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpabsb",	avx2_ssse3_2op_insn,	2,	SUF_Z,	0x1C,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1419 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpgesd",	ssecmp_64_insn,	4,	SUF_Z,	0x0D,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1634 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vfnmaddsd",	fma_128_m64_insn,	3,	SUF_Z,	0x7B,	0,	0,	ONLY_AVX,	CPU_FMA4,	0,	0},
#line 1102 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"rdgsbase",	fs_gs_base_insn,	2,	SUF_Z,	0x01,	0,	0,	ONLY_64,	CPU_FSGSBASE,	0,	0},
#line 1894 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vphsubd",	ssse3_insn,	5,	SUF_Z,	0x06,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 2027 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vsubsd",	xmm_xmm64_insn,	4,	SUF_Z,	0xF2,	0x5C,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1974 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpsignb",	ssse3_insn,	5,	SUF_Z,	0x08,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 593 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"in",	in_insn,	12,	SUF_Z,	0,	0,	0,	0,	0,	0,	0},
#line 674 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"ldsw",	ldes_insn,	2,	SUF_W,	0xC5,	0,	0,	NOT_64,	0,	0,	0},
#line 1627 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vfnmadd213ss",	vfma_ss_insn,	2,	SUF_Z,	0xAD,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1185 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"setaeb",	setcc_insn,	1,	SUF_B,	0x03,	0,	0,	0,	CPU_386,	0,	0},
#line 1874 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpgatherdq",	gather_64x_64x_insn,	2,	SUF_Z,	0x90,	0,	0,	ONLY_AVX,	CPU_AVX2,	0,	0},
#line 2037 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vxorpd",	xmm_xmm128_256_insn,	4,	SUF_Z,	0x66,	0x57,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 363 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cvttps2pi",	cvt_mm_xmm64_insn,	2,	SUF_Z,	0x2C,	0,	0,	0,	CPU_SSE,	0,	0},
#line 987 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pmovmskb",	pmovmskb_insn,	6,	SUF_Z,	0,	0,	0,	0,	CPU_MMX,	CPU_P3,	0},
#line 1401 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpeqpd",	ssecmp_128_insn,	3,	SUF_Z,	0x00,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 447 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"ficoml",	fiarith_insn,	2,	SUF_L,	0x02,	0xDA,	0,	0,	CPU_FPU,	0,	0},
#line 346 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cvtsd2si",	cvt_rx_xmm64_insn,	4,	SUF_Z,	0xF2,	0x2D,	0,	0,	CPU_386,	CPU_SSE2,	0},
#line 1799 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpcomgeq",	vpcom_insn,	1,	SUF_Z,	0xCF,	0x03,	0,	0,	CPU_XOP,	0,	0},
#line 1623 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vfnmadd132ss",	vfma_ss_insn,	2,	SUF_Z,	0x9D,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 327 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"comiss",	xmm_xmm32_insn,	4,	SUF_Z,	0x00,	0x2F,	0,	0,	CPU_SSE,	0,	0},
#line 2007 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpunpcklqdq",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0x6C,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 867 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"or",	arith_insn,	22,	SUF_Z,	0x08,	0x01,	0,	0,	0,	0,	0},
#line 1030 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"popw",	pop_insn,	23,	SUF_W,	0,	0,	0,	0,	0,	0,	0},
#line 717 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"lodsw",	onebyte_insn,	1,	SUF_Z,	0xAD,	0x10,	0,	0,	0,	0,	0},
#line 1422 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpgt_oqps",	ssecmp_128_insn,	3,	SUF_Z,	0x1E,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 318 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmpxchg",	cmpxchgxadd_insn,	4,	SUF_Z,	0xB0,	0,	0,	0,	CPU_486,	0,	0},
#line 967 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pinsrq",	pinsrq_insn,	2,	SUF_Z,	0,	0,	0,	ONLY_64,	CPU_SSE41,	0,	0},
#line 819 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"movsl",	onebyte_insn,	1,	SUF_Z,	0xA5,	0x20,	0,	0,	CPU_386,	0,	0},
#line 1506 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmptrue_usps",	ssecmp_128_insn,	3,	SUF_Z,	0x1F,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 373 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cwtl",	onebyte_insn,	1,	SUF_Z,	0x98,	0x20,	0,	0,	CPU_386,	0,	0},
#line 533 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fsin",	twobyte_insn,	1,	SUF_Z,	0xD9,	0xFE,	0,	0,	CPU_286,	CPU_FPU,	0},
#line 39 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"adoxl",	vex_gpr_ndd_rm_0F38_insn,	2,	SUF_L,	0xF3,	0xF6,	0,	0,	CPU_ADX,	0,	0},
#line 1416 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpge_oqss",	ssecmp_32_insn,	4,	SUF_Z,	0x1D,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 944 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pfmax",	now3d_insn,	1,	SUF_Z,	0xA4,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 942 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pfcmpge",	now3d_insn,	1,	SUF_Z,	0x90,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 728 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"loopnz",	loop_insn,	8,	SUF_Z,	0x00,	0,	0,	0,	0,	0,	0},
#line 1480 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpnle_uqss",	ssecmp_32_insn,	4,	SUF_Z,	0x16,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1235 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"setpeb",	setcc_insn,	1,	SUF_B,	0x0A,	0,	0,	0,	CPU_386,	0,	0},
#line 1571 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vextractps",	extractps_insn,	2,	SUF_Z,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 628 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"jc",	jcc_insn,	9,	SUF_Z,	0x02,	0,	0,	0,	0,	0,	0},
#line 1823 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpcomltq",	vpcom_insn,	1,	SUF_Z,	0xCF,	0x00,	0,	0,	CPU_XOP,	0,	0},
#line 217 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovng",	cmovcc_insn,	3,	SUF_Z,	0x0E,	0,	0,	0,	CPU_686,	0,	0},
#line 795 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"movmskpd",	movmsk_insn,	4,	SUF_Z,	0x66,	0,	0,	0,	CPU_SSE2,	0,	0},
#line 1613 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vfmsubadd231ps",	vfma_ps_insn,	2,	SUF_Z,	0xB7,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1398 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpeq_usps",	ssecmp_128_insn,	3,	SUF_Z,	0x18,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 471 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fistpl",	fildstp_insn,	4,	SUF_L,	0x03,	0x02,	0x07,	0,	CPU_FPU,	0,	0},
#line 472 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fistpll",	fbldstp_insn,	1,	SUF_Z,	0x07,	0,	0,	0,	CPU_FPU,	0,	0},
#line 643 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"jnbe",	jcc_insn,	9,	SUF_Z,	0x07,	0,	0,	0,	0,	0,	0},
#line 995 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pmovsxwq",	sse4m32_insn,	4,	SUF_Z,	0x24,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 1808 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpcomgtub",	vpcom_insn,	1,	SUF_Z,	0xEC,	0x02,	0,	0,	CPU_XOP,	0,	0},
#line 1364 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"unpcklps",	xmm_xmm128_insn,	2,	SUF_Z,	0x00,	0x14,	0,	0,	CPU_SSE,	0,	0},
#line 871 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"orps",	xmm_xmm128_insn,	2,	SUF_Z,	0x00,	0x56,	0,	0,	CPU_SSE,	0,	0},
#line 924 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pdep",	vex_gpr_reg_nds_rm_0F_insn,	2,	SUF_Z,	0xF2,	0x38,	0xF5,	ONLY_AVX,	CPU_BMI2,	0,	0},
#line 749 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"lssw",	lfgss_insn,	3,	SUF_W,	0xB2,	0,	0,	0,	CPU_386,	0,	0},
#line 586 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"idivq",	div_insn,	8,	SUF_Q,	0x07,	0,	0,	ONLY_64,	0,	0,	0},
#line 1768 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpcmpeqd",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0x76,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 146 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"clgi",	threebyte_insn,	1,	SUF_Z,	0x0F,	0x01,	0xDD,	0,	CPU_SVM,	0,	0},
#line 1541 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcvtsi2sdq",	cvt_xmm_rmx_insn,	6,	SUF_Q,	0xF2,	0x2A,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1195 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"setgb",	setcc_insn,	1,	SUF_B,	0x0F,	0,	0,	0,	CPU_386,	0,	0},
#line 1870 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpextrw",	pextrw_insn,	7,	SUF_Z,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1555 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcvttsd2siq",	cvt_rx_xmm64_insn,	4,	SUF_Q,	0xF2,	0x2C,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1872 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpextrwq",	pextrw_insn,	7,	SUF_Q,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1286 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"sldtl",	sldtmsw_insn,	6,	SUF_L,	0x00,	0x00,	0,	0,	CPU_386,	0,	0},
#line 1520 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpunordss",	ssecmp_32_insn,	4,	SUF_Z,	0x03,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 44 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"aesenc",	aes_insn,	2,	SUF_Z,	0x38,	0xDC,	0,	0,	CPU_AVX,	0,	0},
#line 210 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovncl",	cmovcc_insn,	3,	SUF_L,	0x03,	0,	0,	0,	CPU_686,	0,	0},
#line 353 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cvtsi2ss",	cvt_xmm_rmx_insn,	6,	SUF_Z,	0xF3,	0x2A,	0,	0,	CPU_386,	CPU_SSE,	0},
#line 1889 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vphaddw",	ssse3_insn,	5,	SUF_Z,	0x01,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1113 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"repnz",	NULL,	X86_LOCKREP>>8,	0xF2,	0,	0,	0,	0,	0,	0,	0},
#line 455 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fidivrl",	fiarith_insn,	2,	SUF_L,	0x07,	0xDA,	0,	0,	CPU_FPU,	0,	0},
#line 535 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fsqrt",	twobyte_insn,	1,	SUF_Z,	0xD9,	0xFA,	0,	0,	CPU_FPU,	0,	0},
#line 770 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"mov",	mov_insn,	69,	SUF_Z,	0,	0,	0,	0,	0,	0,	0},
#line 667 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"lcalll",	ljmpcall_insn,	7,	SUF_L,	0x03,	0x9A,	0,	0,	CPU_386,	0,	0},
#line 1189 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"setbeb",	setcc_insn,	1,	SUF_B,	0x06,	0,	0,	0,	CPU_386,	0,	0},
#line 1274 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"shrw",	shift_insn,	16,	SUF_W,	0x05,	0,	0,	0,	0,	0,	0},
#line 332 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"crc32b",	crc32_insn,	5,	SUF_B,	0,	0,	0,	0,	CPU_386,	CPU_SSE42,	0},
#line 1987 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpsrldq",	pslrldq_insn,	4,	SUF_Z,	0x03,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 2075 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"xorq",	arith_insn,	22,	SUF_Q,	0x30,	0x06,	0,	ONLY_64,	0,	0,	0},
#line 1072 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"punpcklbw",	mmxsse2_insn,	2,	SUF_Z,	0x60,	0,	0,	0,	CPU_MMX,	0,	0},
#line 665 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"larw",	larlsl_insn,	6,	SUF_W,	0x02,	0,	0,	0,	CPU_286,	CPU_Prot,	0},
#line 1029 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"popq",	pop_insn,	23,	SUF_Q,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 950 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pfrcpit1",	now3d_insn,	1,	SUF_Z,	0xA6,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 387 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"divpd",	xmm_xmm128_insn,	2,	SUF_Z,	0x66,	0x5E,	0,	0,	CPU_SSE2,	0,	0},
#line 173 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmove",	cmovcc_insn,	3,	SUF_Z,	0x04,	0,	0,	0,	CPU_686,	0,	0},
#line 457 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fidivs",	fiarith_insn,	2,	SUF_S,	0x06,	0xDA,	0,	0,	CPU_FPU,	0,	0},
#line 914 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pcmpeqq",	sse4_insn,	2,	SUF_Z,	0x29,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 1208 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"setnbe",	setcc_insn,	1,	SUF_Z,	0x07,	0,	0,	0,	CPU_386,	0,	0},
#line 1039 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pshufb",	ssse3_insn,	5,	SUF_Z,	0x00,	0,	0,	0,	CPU_SSSE3,	0,	0},
#line 1461 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpnge_uqpd",	ssecmp_128_insn,	3,	SUF_Z,	0x19,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1743 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpaddq",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xD4,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 614 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"invlpga",	invlpga_insn,	2,	SUF_Z,	0,	0,	0,	0,	CPU_SVM,	0,	0},
#line 1167 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"sarl",	shift_insn,	16,	SUF_L,	0x07,	0,	0,	0,	CPU_386,	0,	0},
#line 233 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovno",	cmovcc_insn,	3,	SUF_Z,	0x01,	0,	0,	0,	CPU_686,	0,	0},
#line 34 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"addss",	xmm_xmm32_insn,	4,	SUF_Z,	0xF3,	0x58,	0,	0,	CPU_SSE,	0,	0},
#line 1460 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpneqss",	ssecmp_32_insn,	4,	SUF_Z,	0x04,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 903 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pavgusb",	now3d_insn,	1,	SUF_Z,	0xBF,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 1577 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vfmadd213ps",	vfma_ps_insn,	2,	SUF_Z,	0xA8,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 687 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"lfs",	lfgss_insn,	3,	SUF_Z,	0xB4,	0,	0,	0,	CPU_386,	0,	0},
#line 1921 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpmaxsb",	ssse3_insn,	5,	SUF_Z,	0x3C,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 983 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pminsw",	mmxsse2_insn,	2,	SUF_Z,	0xEA,	0,	0,	0,	CPU_MMX,	CPU_P3,	0},
#line 1614 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vfmsubaddpd",	fma_128_256_insn,	4,	SUF_Z,	0x5F,	0,	0,	ONLY_AVX,	CPU_FMA4,	0,	0},
#line 1850 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpcomtrueud",	vpcom_insn,	1,	SUF_Z,	0xEE,	0x07,	0,	0,	CPU_XOP,	0,	0},
#line 1234 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"setpe",	setcc_insn,	1,	SUF_Z,	0x0A,	0,	0,	0,	CPU_386,	0,	0},
#line 110 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"bsrq",	bsfr_insn,	3,	SUF_Q,	0xBD,	0,	0,	ONLY_64,	CPU_386,	0,	0},
#line 139 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cbw",	onebyte_insn,	1,	SUF_Z,	0x98,	0x10,	0,	0,	0,	0,	0},
#line 2020 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vsqrtpd",	avx_xmm_xmm128_insn,	2,	SUF_Z,	0x66,	0x51,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1802 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpcomgeuq",	vpcom_insn,	1,	SUF_Z,	0xEF,	0x03,	0,	0,	CPU_XOP,	0,	0},
#line 679 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"leavel",	onebyte_insn,	1,	SUF_Z,	0xC9,	0x00,	0x40,	0,	CPU_186,	0,	0},
#line 841 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"mpsadbw",	sse4imm_insn,	2,	SUF_Z,	0x42,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 1553 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcvttsd2si",	cvt_rx_xmm64_insn,	4,	SUF_Z,	0xF2,	0x2C,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1679 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vminps",	xmm_xmm128_256_insn,	4,	SUF_Z,	0x00,	0x5D,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 293 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmpnleps",	ssecmp_128_insn,	3,	SUF_Z,	0x06,	0,	0,	0,	CPU_SSE,	0,	0},
#line 181 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovgew",	cmovcc_insn,	3,	SUF_W,	0x0D,	0,	0,	0,	CPU_686,	0,	0},
#line 1368 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vaddss",	xmm_xmm32_insn,	4,	SUF_Z,	0xF3,	0x58,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 94 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"blsiq",	vex_gpr_ndd_rm_0F38_regext_insn,	2,	SUF_Q,	0x00,	0xF3,	0x03,	ONLY_AVX|ONLY_64,	CPU_BMI1,	0,	0},
#line 873 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"orw",	arith_insn,	22,	SUF_W,	0x08,	0x01,	0,	0,	0,	0,	0},
#line 41 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"adword",	NULL,	X86_ADDRSIZE>>8,	0x20,	0,	0,	0,	0,	0,	0,	0},
#line 1957 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vprotb",	vprot_insn,	3,	SUF_Z,	0x00,	0,	0,	0,	CPU_XOP,	0,	0},
#line 907 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pclmulhqhqdq",	pclmulqdq_fixed_insn,	2,	SUF_Z,	0x11,	0,	0,	0,	CPU_AVX,	0,	0},
#line 1270 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"shrdq",	shlrd_insn,	9,	SUF_Q,	0xAC,	0,	0,	ONLY_64,	CPU_386,	0,	0},
#line 407 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"faddp",	farithp_insn,	3,	SUF_Z,	0xC0,	0,	0,	0,	CPU_FPU,	0,	0},
#line 1923 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpmaxsw",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xEE,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 341 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cvtpi2pd",	cvt_xmm_mm_ss_insn,	1,	SUF_Z,	0x66,	0x2A,	0,	0,	CPU_SSE2,	0,	0},
#line 1747 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpaddusw",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xDD,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 822 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"movsq",	onebyte_insn,	1,	SUF_Z,	0xA5,	0x40,	0,	ONLY_64,	0,	0,	0},
#line 1328 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"subsd",	xmm_xmm64_insn,	4,	SUF_Z,	0xF2,	0x5C,	0,	0,	CPU_SSE2,	0,	0},
#line 685 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"lesw",	ldes_insn,	2,	SUF_W,	0xC4,	0,	0,	NOT_64,	0,	0,	0},
#line 230 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovnll",	cmovcc_insn,	3,	SUF_L,	0x0D,	0,	0,	0,	CPU_686,	0,	0},
#line 1032 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"prefetch",	twobytemem_insn,	1,	SUF_Z,	0x00,	0x0F,	0x0D,	0,	CPU_3DNow,	0,	0},
#line 811 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"movq",	mov_insn,	69,	SUF_Q,	0,	0,	0,	0,	0,	0,	0},
#line 1254 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"shl",	shift_insn,	16,	SUF_Z,	0x04,	0,	0,	0,	0,	0,	0},
#line 1513 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpunord_spd",	ssecmp_128_insn,	3,	SUF_Z,	0x13,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 107 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"bsfw",	bsfr_insn,	3,	SUF_W,	0xBC,	0,	0,	0,	CPU_386,	0,	0},
#line 112 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"bswap",	bswap_insn,	2,	SUF_Z,	0,	0,	0,	0,	CPU_486,	0,	0},
#line 113 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"bswapl",	bswap_insn,	2,	SUF_L,	0,	0,	0,	0,	CPU_486,	0,	0},
#line 474 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fistps",	fildstp_insn,	4,	SUF_S,	0x03,	0x02,	0x07,	0,	CPU_FPU,	0,	0},
#line 411 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fchs",	twobyte_insn,	1,	SUF_Z,	0xD9,	0xE0,	0,	0,	CPU_FPU,	0,	0},
#line 1708 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vmovsd",	movsd_insn,	5,	SUF_Z,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 18 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"adcl",	arith_insn,	22,	SUF_L,	0x10,	0x02,	0,	0,	CPU_386,	0,	0},
#line 1907 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpmacsdql",	vpma_insn,	1,	SUF_Z,	0x97,	0,	0,	0,	CPU_XOP,	0,	0},
#line 1783 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpcomeqq",	vpcom_insn,	1,	SUF_Z,	0xCF,	0x04,	0,	0,	CPU_XOP,	0,	0},
#line 703 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"ljmp",	ljmpcall_insn,	7,	SUF_Z,	0x05,	0xEA,	0,	0,	0,	0,	0},
#line 2077 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"xrelease",	NULL,	X86_ACQREL>>8,	0xF3,	0,	0,	0,	0,	0,	0,	0},
#line 2022 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vsqrtsd",	xmm_xmm64_insn,	4,	SUF_Z,	0xF2,	0x51,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1158 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"sahf",	onebyte_insn,	1,	SUF_Z,	0x9E,	0,	0,	0,	0,	0,	0},
#line 1079 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pushaw",	onebyte_insn,	1,	SUF_Z,	0x60,	0x10,	0,	NOT_64,	CPU_186,	0,	0},
#line 324 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmpxchgq",	cmpxchgxadd_insn,	4,	SUF_Q,	0xB0,	0,	0,	ONLY_64,	CPU_486,	0,	0},
#line 834 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"movzbq",	movszx_insn,	5,	SUF_B,	0xB6,	0,	0,	ONLY_64,	CPU_386,	0,	0},
#line 1474 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpngtps",	ssecmp_128_insn,	3,	SUF_Z,	0x0A,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1797 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpcomgeb",	vpcom_insn,	1,	SUF_Z,	0xCC,	0x03,	0,	0,	CPU_XOP,	0,	0},
#line 675 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"lea",	lea_insn,	3,	SUF_Z,	0,	0,	0,	0,	0,	0,	0},
#line 609 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"invd",	twobyte_insn,	1,	SUF_Z,	0x0F,	0x08,	0,	0,	CPU_486,	CPU_Priv,	0},
#line 1171 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"sarxl",	vex_gpr_reg_rm_nds_0F_insn,	2,	SUF_L,	0xF3,	0x38,	0xF7,	ONLY_AVX,	CPU_BMI2,	0,	0},
#line 787 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"movdqu",	movau_insn,	6,	SUF_Z,	0xF3,	0x6F,	0x10,	0,	CPU_SSE2,	0,	0},
#line 1561 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vdivsd",	xmm_xmm64_insn,	4,	SUF_Z,	0xF2,	0x5E,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 118 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"btcq",	bittest_insn,	6,	SUF_Q,	0xBB,	0x07,	0,	ONLY_64,	CPU_386,	0,	0},
#line 874 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"out",	out_insn,	12,	SUF_Z,	0,	0,	0,	0,	0,	0,	0},
#line 1260 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"shll",	shift_insn,	16,	SUF_L,	0x04,	0,	0,	0,	CPU_386,	0,	0},
#line 606 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"int",	int_insn,	1,	SUF_Z,	0,	0,	0,	0,	0,	0,	0},
#line 1563 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vdppd",	sse4imm_insn,	2,	SUF_Z,	0x41,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1279 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"shufps",	xmm_xmm128_imm_insn,	1,	SUF_Z,	0x00,	0xC6,	0,	0,	CPU_SSE,	0,	0},
#line 1325 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"subpd",	xmm_xmm128_insn,	2,	SUF_Z,	0x66,	0x5C,	0,	0,	CPU_SSE2,	0,	0},
#line 1530 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcvtpd2psy",	avx_cvt_xmm128_y_insn,	1,	SUF_Z,	0x66,	0x5A,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 216 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovnew",	cmovcc_insn,	3,	SUF_W,	0x05,	0,	0,	0,	CPU_686,	0,	0},
#line 331 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"crc32",	crc32_insn,	5,	SUF_Z,	0,	0,	0,	0,	CPU_386,	CPU_SSE42,	0},
#line 1218 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"setnl",	setcc_insn,	1,	SUF_Z,	0x0D,	0,	0,	0,	CPU_386,	0,	0},
#line 1105 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"rdrand",	rdrand_insn,	3,	SUF_Z,	0x06,	0,	0,	0,	CPU_RDRAND,	0,	0},
#line 1129 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"rexxy",	NULL,	X86_REX>>8,	0x46,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 2086 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"xstorerng",	padlock_insn,	1,	SUF_Z,	0xC0,	0x00,	0xA7,	0,	CPU_PadLock,	0,	0},
#line 1147 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"rorxq",	vex_gpr_reg_rm_0F_imm8_insn,	2,	SUF_Q,	0xF2,	0x3A,	0xF0,	ONLY_AVX|ONLY_64,	CPU_BMI2,	0,	0},
#line 1722 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vmsave",	svm_rax_insn,	2,	SUF_Z,	0xDB,	0,	0,	0,	CPU_SVM,	0,	0},
#line 1025 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"popfl",	onebyte_insn,	1,	SUF_Z,	0x9D,	0x20,	0,	NOT_64,	CPU_386,	0,	0},
#line 2045 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"wrgsbase",	fs_gs_base_insn,	2,	SUF_Z,	0x03,	0,	0,	ONLY_64,	CPU_FSGSBASE,	0,	0},
#line 761 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"maxss",	xmm_xmm32_insn,	4,	SUF_Z,	0xF3,	0x5F,	0,	0,	CPU_SSE,	0,	0},
#line 1420 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpgess",	ssecmp_32_insn,	4,	SUF_Z,	0x0D,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 45 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"aesenclast",	aes_insn,	2,	SUF_Z,	0x38,	0xDD,	0,	0,	CPU_AVX,	0,	0},
#line 174 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovel",	cmovcc_insn,	3,	SUF_L,	0x04,	0,	0,	0,	CPU_686,	0,	0},
#line 1975 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpsignd",	ssse3_insn,	5,	SUF_Z,	0x0A,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 658 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"jrcxz",	jcxz_insn,	2,	SUF_Z,	0x40,	0,	0,	ONLY_64,	0,	0,	0},
#line 1292 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"smovb",	onebyte_insn,	1,	SUF_Z,	0xA4,	0x00,	0,	0,	0,	0,	0},
#line 710 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"lmsww",	prot286_insn,	1,	SUF_W,	0x06,	0x01,	0,	0,	CPU_286,	CPU_Priv,	0},
#line 1751 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpandn",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xDF,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1701 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vmovmskpsl",	movmsk_insn,	4,	SUF_L,	0x00,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1736 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpabsw",	avx2_ssse3_2op_insn,	2,	SUF_Z,	0x1D,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1982 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpsllw",	vpshift_insn,	8,	SUF_Z,	0xF1,	0x71,	0x06,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 801 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"movntdq",	movnt_insn,	2,	SUF_Z,	0x66,	0xE7,	0,	0,	CPU_SSE2,	0,	0},
#line 807 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"movntps",	movnt_insn,	2,	SUF_Z,	0x00,	0x2B,	0,	0,	CPU_SSE,	0,	0},
#line 523 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fptan",	twobyte_insn,	1,	SUF_Z,	0xD9,	0xF2,	0,	0,	CPU_FPU,	0,	0},
#line 1259 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"shldw",	shlrd_insn,	9,	SUF_W,	0xA4,	0,	0,	0,	CPU_386,	0,	0},
#line 878 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"outsl",	onebyte_insn,	1,	SUF_Z,	0x6F,	0x20,	0,	0,	CPU_386,	0,	0},
#line 1702 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vmovmskpsq",	movmsk_insn,	4,	SUF_Q,	0x00,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 489 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fldcw",	fldnstcw_insn,	1,	SUF_Z,	0x05,	0,	0,	0,	CPU_FPU,	0,	0},
#line 1495 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpord_ssd",	ssecmp_64_insn,	4,	SUF_Z,	0x17,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1463 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpnge_uqsd",	ssecmp_64_insn,	4,	SUF_Z,	0x19,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1010 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pmullw",	mmxsse2_insn,	2,	SUF_Z,	0xD5,	0,	0,	0,	CPU_MMX,	0,	0},
#line 650 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"jno",	jcc_insn,	9,	SUF_Z,	0x01,	0,	0,	0,	0,	0,	0},
#line 1959 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vprotq",	vprot_insn,	3,	SUF_Z,	0x03,	0,	0,	0,	CPU_XOP,	0,	0},
#line 1449 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpneq_ospd",	ssecmp_128_insn,	3,	SUF_Z,	0x1C,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1166 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"sarb",	shift_insn,	16,	SUF_B,	0x07,	0,	0,	0,	0,	0,	0},
#line 12 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"aaa",	onebyte_insn,	1,	SUF_Z,	0x37,	0,	0,	NOT_64,	0,	0,	0},
#line 1058 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"psubd",	mmxsse2_insn,	2,	SUF_Z,	0xFA,	0,	0,	0,	CPU_MMX,	0,	0},
#line 812 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"movq2dq",	movq2dq_insn,	1,	SUF_Z,	0,	0,	0,	0,	CPU_SSE2,	0,	0},
#line 70 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"blci",	xop_gpr_reg_rm_09_insn,	2,	SUF_Z,	0x02,	0x06,	0,	0,	CPU_386,	CPU_TBM,	0},
#line 298 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmpnltsd",	ssecmp_64_insn,	4,	SUF_Z,	0x05,	0xF2,	0,	0,	CPU_SSE2,	0,	0},
#line 1121 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"rex64x",	NULL,	X86_REX>>8,	0x4C,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 98 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"blsr",	vex_gpr_ndd_rm_0F38_regext_insn,	2,	SUF_Z,	0x00,	0xF3,	0x01,	ONLY_AVX,	CPU_BMI1,	0,	0},
#line 1106 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"rdseed",	rdrand_insn,	3,	SUF_Z,	0x07,	0,	0,	0,	CPU_RDSEED,	0,	0},
#line 299 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmpnltss",	ssecmp_32_insn,	4,	SUF_Z,	0x05,	0xF3,	0,	0,	CPU_SSE,	0,	0},
#line 798 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"movmskps",	movmsk_insn,	4,	SUF_Z,	0,	0,	0,	0,	CPU_386,	CPU_SSE,	0},
#line 418 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fcmovne",	fcmovcc_insn,	1,	SUF_Z,	0xDB,	0xC8,	0,	0,	CPU_686,	CPU_FPU,	0},
#line 2041 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"wait",	onebyte_insn,	1,	SUF_Z,	0x9B,	0,	0,	0,	0,	0,	0},
#line 1278 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"shufpd",	xmm_xmm128_imm_insn,	1,	SUF_Z,	0x66,	0xC6,	0,	0,	CPU_SSE2,	0,	0},
#line 365 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cvttsd2sil",	cvt_rx_xmm64_insn,	4,	SUF_L,	0xF2,	0x2C,	0,	0,	CPU_SSE2,	0,	0},
#line 1094 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"rcpps",	xmm_xmm128_insn,	2,	SUF_Z,	0x00,	0x53,	0,	0,	CPU_SSE,	0,	0},
#line 939 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pfacc",	now3d_insn,	1,	SUF_Z,	0xAE,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 551 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fsubl",	farith_insn,	7,	SUF_L,	0xE8,	0xE0,	0x04,	0,	CPU_FPU,	0,	0},
#line 613 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"invlpg",	twobytemem_insn,	1,	SUF_Z,	0x07,	0x0F,	0x01,	0,	CPU_486,	CPU_Priv,	0},
#line 929 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pextl",	vex_gpr_reg_nds_rm_0F_insn,	2,	SUF_L,	0xF3,	0x38,	0xF5,	ONLY_AVX,	CPU_BMI2,	0,	0},
#line 492 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fldenvl",	onebytemem_insn,	1,	SUF_L,	0x04,	0xD9,	0,	0,	CPU_FPU,	0,	0},
#line 740 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"lretq",	retnf_insn,	6,	SUF_Q,	0xCA,	0x40,	0,	ONLY_64,	0,	0,	0},
#line 30 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"addr16",	NULL,	X86_ADDRSIZE>>8,	0x10,	0,	0,	0,	0,	0,	0,	0},
#line 382 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"decq",	incdec_insn,	6,	SUF_Q,	0x48,	0x01,	0,	ONLY_64,	0,	0,	0},
#line 835 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"movzbw",	movszx_insn,	5,	SUF_B,	0xB6,	0,	0,	0,	CPU_386,	0,	0},
#line 498 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fldln2",	twobyte_insn,	1,	SUF_Z,	0xD9,	0xED,	0,	0,	CPU_FPU,	0,	0},
#line 103 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"boundw",	bound_insn,	2,	SUF_W,	0,	0,	0,	NOT_64,	CPU_186,	0,	0},
#line 1143 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"rorq",	shift_insn,	16,	SUF_Q,	0x01,	0,	0,	ONLY_64,	0,	0,	0},
#line 734 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"loopz",	loop_insn,	8,	SUF_Z,	0x01,	0,	0,	0,	0,	0,	0},
#line 1148 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"roundpd",	sse4imm_insn,	2,	SUF_Z,	0x09,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 1242 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"sfence",	threebyte_insn,	1,	SUF_Z,	0x0F,	0xAE,	0xF8,	0,	CPU_P3,	0,	0},
#line 1804 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpcomgew",	vpcom_insn,	1,	SUF_Z,	0xCD,	0x03,	0,	0,	CPU_XOP,	0,	0},
#line 1778 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpcmpistrm",	sse4pcmpstr_insn,	1,	SUF_Z,	0x62,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1114 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"repz",	NULL,	X86_LOCKREP>>8,	0xF3,	0,	0,	0,	0,	0,	0,	0},
#line 622 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"iretq",	onebyte_insn,	1,	SUF_Z,	0xCF,	0x40,	0,	ONLY_64,	0,	0,	0},
#line 1151 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"roundss",	sse4m32imm_insn,	4,	SUF_Z,	0x0A,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 1373 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vaesenc",	aes_insn,	2,	SUF_Z,	0x38,	0xDC,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1390 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpeq_osps",	ssecmp_128_insn,	3,	SUF_Z,	0x10,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 317 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmpw",	arith_insn,	22,	SUF_W,	0x38,	0x07,	0,	0,	0,	0,	0},
#line 1431 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmple_oqsd",	ssecmp_64_insn,	4,	SUF_Z,	0x12,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1133 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"rexyz",	NULL,	X86_REX>>8,	0x43,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 500 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"flds",	fld_insn,	4,	SUF_S,	0,	0,	0,	0,	CPU_FPU,	0,	0},
#line 828 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"movsxb",	movszx_insn,	5,	SUF_B,	0xBE,	0,	0,	0,	CPU_386,	0,	0},
#line 893 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"paddsw",	mmxsse2_insn,	2,	SUF_Z,	0xED,	0,	0,	0,	CPU_MMX,	0,	0},
#line 708 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"lldtw",	prot286_insn,	1,	SUF_W,	0x02,	0x00,	0,	0,	CPU_286,	CPU_Priv,	CPU_Prot},
#line 1843 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpcomneuw",	vpcom_insn,	1,	SUF_Z,	0xED,	0x05,	0,	0,	CPU_XOP,	0,	0},
#line 1483 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpnlesd",	ssecmp_64_insn,	4,	SUF_Z,	0x06,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1655 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vfrczss",	vfrczss_insn,	2,	SUF_Z,	0,	0,	0,	0,	CPU_XOP,	0,	0},
#line 832 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"movw",	mov_insn,	69,	SUF_W,	0,	0,	0,	0,	0,	0,	0},
#line 631 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"jecxz",	jcxz_insn,	2,	SUF_Z,	0x20,	0,	0,	0,	CPU_386,	0,	0},
#line 1570 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vextracti128",	vextractif128_insn,	1,	SUF_Z,	0x39,	0,	0,	ONLY_AVX,	CPU_AVX2,	0,	0},
#line 1326 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"subps",	xmm_xmm128_insn,	2,	SUF_Z,	0x00,	0x5C,	0,	0,	CPU_SSE,	0,	0},
#line 594 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"inb",	in_insn,	12,	SUF_B,	0,	0,	0,	0,	0,	0,	0},
#line 1645 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vfnmsub231ps",	vfma_ps_insn,	2,	SUF_Z,	0xBE,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1885 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vphaddubw",	vphaddsub_insn,	1,	SUF_Z,	0xD1,	0,	0,	0,	CPU_XOP,	0,	0},
#line 971 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pmachriw",	pmachriw_insn,	1,	SUF_Z,	0,	0,	0,	0,	CPU_Cyrix,	CPU_MMX,	0},
#line 1714 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vmpsadbw",	sse4imm_256avx2_insn,	4,	SUF_Z,	0x42,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 768 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"monitorx",	threebyte_insn,	1,	SUF_Z,	0x0F,	0x01,	0xFA,	0,	CPU_AMD,	0,	0},
#line 1022 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"popcntq",	cnt_insn,	3,	SUF_Q,	0xB8,	0,	0,	ONLY_64,	CPU_SSE42,	0,	0},
#line 602 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"insertps",	insertps_insn,	4,	SUF_Z,	0,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 323 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmpxchgl",	cmpxchgxadd_insn,	4,	SUF_L,	0xB0,	0,	0,	0,	CPU_486,	0,	0},
#line 1522 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcomiss",	avx_xmm_xmm32_insn,	2,	SUF_Z,	0x00,	0x2F,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1774 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpcmpgtd",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 737 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"loopzw",	loopw_insn,	4,	SUF_Z,	0x01,	0x10,	0,	NOT_64,	0,	0,	0},
#line 1118 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"retw",	retnf_insn,	6,	SUF_Z,	0xC2,	0x10,	0,	0,	0,	0,	0},
#line 902 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pavgb",	mmxsse2_insn,	2,	SUF_Z,	0xE0,	0,	0,	0,	CPU_MMX,	CPU_P3,	0},
#line 725 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"loopnel",	loopl_insn,	4,	SUF_Z,	0x00,	0x20,	0,	0,	0,	0,	0},
#line 1986 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpsrld",	vpshift_insn,	8,	SUF_Z,	0xD2,	0x72,	0x02,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1526 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcvtpd2dqx",	avx_cvt_xmm128_x_insn,	1,	SUF_Z,	0xF2,	0xE6,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 450 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"ficomps",	fiarith_insn,	2,	SUF_S,	0x03,	0xDA,	0,	0,	CPU_FPU,	0,	0},
#line 480 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fisttps",	fildstp_insn,	4,	SUF_S,	0x01,	0x00,	0x01,	0,	CPU_SSE3,	0,	0},
#line 1379 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vandpd",	xmm_xmm128_256_insn,	4,	SUF_Z,	0x66,	0x54,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 575 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"haddpd",	xmm_xmm128_insn,	2,	SUF_Z,	0x66,	0x7C,	0,	0,	CPU_SSE3,	0,	0},
#line 105 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"bsfl",	bsfr_insn,	3,	SUF_L,	0xBC,	0,	0,	0,	CPU_386,	0,	0},
#line 1138 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"rolq",	shift_insn,	16,	SUF_Q,	0x00,	0,	0,	ONLY_64,	0,	0,	0},
#line 1455 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpneq_ussd",	ssecmp_64_insn,	4,	SUF_Z,	0x14,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 794 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"movlps",	movhlp_insn,	3,	SUF_Z,	0x00,	0x12,	0,	0,	CPU_SSE,	0,	0},
#line 1000 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pmovzxwd",	sse4m64_insn,	4,	SUF_Z,	0x33,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 207 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovnbq",	cmovcc_insn,	3,	SUF_Q,	0x03,	0,	0,	ONLY_64,	CPU_686,	0,	0},
#line 1047 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pslld",	pshift_insn,	4,	SUF_Z,	0xF2,	0x72,	0x06,	0,	CPU_MMX,	0,	0},
#line 64 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"bextr",	bextr_insn,	4,	SUF_Z,	0,	0,	0,	ONLY_AVX,	CPU_386,	CPU_BMI1,	0},
#line 814 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"movsbl",	movszx_insn,	5,	SUF_B,	0xBE,	0,	0,	0,	CPU_386,	0,	0},
#line 1856 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpcomuq",	vpcom_imm_insn,	1,	SUF_Z,	0xEF,	0,	0,	0,	CPU_XOP,	0,	0},
#line 917 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pcmpestrm",	sse4pcmpstr_insn,	1,	SUF_Z,	0x60,	0,	0,	0,	CPU_SSE42,	0,	0},
#line 2029 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vtestpd",	sse4_insn,	2,	SUF_Z,	0x0F,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 751 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"ltrw",	prot286_insn,	1,	SUF_W,	0x03,	0x00,	0,	0,	CPU_286,	CPU_Priv,	CPU_Prot},
#line 1268 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"shrd",	shlrd_insn,	9,	SUF_Z,	0xAC,	0,	0,	0,	CPU_386,	0,	0},
#line 1911 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpmacsswd",	vpma_insn,	1,	SUF_Z,	0x86,	0,	0,	0,	CPU_XOP,	0,	0},
#line 1610 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vfmsubadd213pd",	vfma_pd_insn,	2,	SUF_Z,	0xA7,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 722 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"loopew",	loopw_insn,	4,	SUF_Z,	0x01,	0x10,	0,	NOT_64,	0,	0,	0},
#line 1669 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vmaskmovdqu",	maskmovdqu_insn,	1,	SUF_Z,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 425 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fcomp",	fcom_insn,	6,	SUF_Z,	0xD8,	0x03,	0,	0,	CPU_FPU,	0,	0},
#line 486 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fisubs",	fiarith_insn,	2,	SUF_S,	0x04,	0xDA,	0,	0,	CPU_FPU,	0,	0},
#line 278 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmpeqss",	ssecmp_32_insn,	4,	SUF_Z,	0x00,	0xF3,	0,	0,	CPU_SSE,	0,	0},
#line 330 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cqto",	onebyte_insn,	1,	SUF_Z,	0x99,	0x40,	0,	ONLY_64,	0,	0,	0},
#line 1517 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpunordpd",	ssecmp_128_insn,	3,	SUF_Z,	0x03,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1202 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"setna",	setcc_insn,	1,	SUF_Z,	0x06,	0,	0,	0,	CPU_386,	0,	0},
#line 336 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cvtdq2pd",	xmm_xmm64_insn,	4,	SUF_Z,	0xF3,	0xE6,	0,	0,	CPU_SSE2,	0,	0},
#line 53 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"andnpd",	xmm_xmm128_insn,	2,	SUF_Z,	0x66,	0x55,	0,	0,	CPU_SSE2,	0,	0},
#line 1394 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpeq_uqps",	ssecmp_128_insn,	3,	SUF_Z,	0x08,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1542 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcvtsi2ss",	cvt_xmm_rmx_insn,	6,	SUF_Z,	0xF3,	0x2A,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1477 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpnle_uqpd",	ssecmp_128_insn,	3,	SUF_Z,	0x16,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 876 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"outl",	out_insn,	12,	SUF_L,	0,	0,	0,	0,	CPU_386,	0,	0},
#line 1558 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcvttss2siq",	cvt_rx_xmm32_insn,	4,	SUF_Q,	0xF3,	0x2C,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 890 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"paddq",	mmxsse2_insn,	2,	SUF_Z,	0xD4,	0,	0,	0,	CPU_MMX,	0,	0},
#line 291 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmpneqss",	ssecmp_32_insn,	4,	SUF_Z,	0x04,	0xF3,	0,	0,	CPU_SSE,	0,	0},
#line 1654 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vfrczsd",	vfrczsd_insn,	2,	SUF_Z,	0,	0,	0,	0,	CPU_XOP,	0,	0},
#line 2081 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"xsaveopt64",	xsaveopt64_insn,	1,	SUF_Z,	0x06,	0x0F,	0xAE,	ONLY_64,	CPU_XSAVEOPT,	0,	0},
#line 519 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fnstsww",	fnstsw_insn,	2,	SUF_W,	0,	0,	0,	0,	CPU_FPU,	0,	0},
#line 1587 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vfmaddss",	fma_128_m32_insn,	3,	SUF_Z,	0x6A,	0,	0,	ONLY_AVX,	CPU_FMA4,	0,	0},
#line 557 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fsubs",	farith_insn,	7,	SUF_S,	0xE8,	0xE0,	0x04,	0,	CPU_FPU,	0,	0},
#line 1971 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpshufd",	xmm_xmm128_imm_256avx2_insn,	2,	SUF_Z,	0x66,	0x70,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 544 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fstpl",	fstp_insn,	4,	SUF_L,	0,	0,	0,	0,	CPU_FPU,	0,	0},
#line 446 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"ficom",	fiarith_insn,	2,	SUF_Z,	0x02,	0xDA,	0,	0,	CPU_FPU,	0,	0},
#line 635 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"jle",	jcc_insn,	9,	SUF_Z,	0x0E,	0,	0,	0,	0,	0,	0},
#line 1282 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"sidtq",	twobytemem_insn,	1,	SUF_Q,	0x01,	0x0F,	0x01,	0,	CPU_286,	CPU_Priv,	0},
#line 1966 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpshlb",	amd_vpshift_insn,	2,	SUF_Z,	0x94,	0,	0,	0,	CPU_XOP,	0,	0},
#line 970 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pinsrwq",	pinsrw_insn,	9,	SUF_Q,	0,	0,	0,	ONLY_64,	CPU_MMX,	CPU_P3,	0},
#line 659 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"js",	jcc_insn,	9,	SUF_Z,	0x08,	0,	0,	0,	0,	0,	0},
#line 55 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"andnq",	vex_gpr_reg_nds_rm_0F_insn,	2,	SUF_Q,	0x00,	0x38,	0xF2,	ONLY_AVX|ONLY_64,	CPU_BMI1,	0,	0},
#line 309 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmpsl",	onebyte_insn,	1,	SUF_Z,	0xA7,	0x20,	0,	0,	CPU_386,	0,	0},
#line 1696 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vmovlps",	movhlp_insn,	3,	SUF_Z,	0x00,	0x12,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 882 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pabsd",	ssse3_insn,	5,	SUF_Z,	0x1E,	0,	0,	0,	CPU_SSSE3,	0,	0},
#line 1785 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpcomequd",	vpcom_insn,	1,	SUF_Z,	0xEE,	0x04,	0,	0,	CPU_XOP,	0,	0},
#line 1164 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"salw",	shift_insn,	16,	SUF_W,	0x04,	0,	0,	0,	0,	0,	0},
#line 810 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"movntss",	movntss_insn,	1,	SUF_Z,	0,	0,	0,	0,	CPU_SSE4a,	0,	0},
#line 792 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"movlhps",	movhllhps_insn,	2,	SUF_Z,	0x16,	0,	0,	0,	CPU_SSE,	0,	0},
#line 1442 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpltps",	ssecmp_128_insn,	3,	SUF_Z,	0x01,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 251 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovoq",	cmovcc_insn,	3,	SUF_Q,	0x00,	0,	0,	ONLY_64,	CPU_686,	0,	0},
#line 1124 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"rex64xz",	NULL,	X86_REX>>8,	0x4D,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 1609 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vfmsubadd132ps",	vfma_ps_insn,	2,	SUF_Z,	0x97,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1439 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmplt_oqsd",	ssecmp_64_insn,	4,	SUF_Z,	0x11,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 246 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovnzl",	cmovcc_insn,	3,	SUF_L,	0x05,	0,	0,	0,	CPU_686,	0,	0},
#line 646 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"jng",	jcc_insn,	9,	SUF_Z,	0x0E,	0,	0,	0,	0,	0,	0},
#line 898 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pand",	mmxsse2_insn,	2,	SUF_Z,	0xDB,	0,	0,	0,	CPU_MMX,	0,	0},
#line 887 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"packuswb",	mmxsse2_insn,	2,	SUF_Z,	0x67,	0,	0,	0,	CPU_MMX,	0,	0},
#line 1100 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"rcrw",	shift_insn,	16,	SUF_W,	0x03,	0,	0,	0,	0,	0,	0},
#line 711 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"loadall",	twobyte_insn,	1,	SUF_Z,	0x0F,	0x07,	0,	0,	CPU_386,	CPU_Undoc,	0},
#line 1958 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vprotd",	vprot_insn,	3,	SUF_Z,	0x02,	0,	0,	0,	CPU_XOP,	0,	0},
#line 1021 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"popcntl",	cnt_insn,	3,	SUF_L,	0xB8,	0,	0,	0,	CPU_SSE42,	0,	0},
#line 162 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovbe",	cmovcc_insn,	3,	SUF_Z,	0x06,	0,	0,	0,	CPU_686,	0,	0},
#line 29 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"addq",	arith_insn,	22,	SUF_Q,	0x00,	0x00,	0,	ONLY_64,	0,	0,	0},
#line 1306 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"sscaq",	onebyte_insn,	1,	SUF_Z,	0xAF,	0x40,	0,	ONLY_64,	0,	0,	0},
#line 564 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fwait",	onebyte_insn,	1,	SUF_Z,	0x9B,	0,	0,	0,	CPU_FPU,	0,	0},
#line 351 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cvtsi2sdl",	cvt_xmm_rmx_insn,	6,	SUF_L,	0xF2,	0x2A,	0,	0,	CPU_SSE2,	0,	0},
#line 185 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovl",	cmovcc_insn,	3,	SUF_Z,	0x0C,	0,	0,	0,	CPU_686,	0,	0},
#line 1135 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"rol",	shift_insn,	16,	SUF_Z,	0x00,	0,	0,	0,	0,	0,	0},
#line 1353 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"tzmsk",	xop_gpr_reg_rm_09_insn,	2,	SUF_Z,	0x01,	0x04,	0,	0,	CPU_386,	CPU_TBM,	0},
#line 719 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"loope",	loop_insn,	8,	SUF_Z,	0x01,	0,	0,	0,	0,	0,	0},
#line 1402 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpeqps",	ssecmp_128_insn,	3,	SUF_Z,	0x00,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1821 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpcomltb",	vpcom_insn,	1,	SUF_Z,	0xCC,	0x00,	0,	0,	CPU_XOP,	0,	0},
#line 312 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmpsw",	onebyte_insn,	1,	SUF_Z,	0xA7,	0x10,	0,	0,	0,	0,	0},
#line 595 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"inc",	incdec_insn,	6,	SUF_Z,	0x40,	0x00,	0,	0,	0,	0,	0},
#line 1969 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpshlw",	amd_vpshift_insn,	2,	SUF_Z,	0x95,	0,	0,	0,	CPU_XOP,	0,	0},
#line 1833 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpcomneqd",	vpcom_insn,	1,	SUF_Z,	0xCE,	0x05,	0,	0,	CPU_XOP,	0,	0},
#line 2034 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vunpckhps",	xmm_xmm128_256_insn,	4,	SUF_Z,	0x00,	0x15,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 831 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"movups",	movau_insn,	6,	SUF_Z,	0x00,	0x10,	0x01,	0,	CPU_SSE,	0,	0},
#line 1290 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"smint",	twobyte_insn,	1,	SUF_Z,	0x0F,	0x38,	0,	0,	CPU_686,	CPU_Cyrix,	0},
#line 1038 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"psadbw",	mmxsse2_insn,	2,	SUF_Z,	0xF6,	0,	0,	0,	CPU_MMX,	CPU_P3,	0},
#line 1247 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"sha1msg1",	intel_SHA1MSG1_insn,	1,	SUF_Z,	0,	0,	0,	0,	CPU_SHA,	0,	0},
#line 999 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pmovzxdq",	sse4m64_insn,	4,	SUF_Z,	0x35,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 1366 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vaddps",	xmm_xmm128_256_insn,	4,	SUF_Z,	0x00,	0x58,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 74 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"blcil",	xop_gpr_reg_rm_09_insn,	2,	SUF_L,	0x02,	0x06,	0,	0,	CPU_386,	CPU_TBM,	0},
#line 1225 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"setnpb",	setcc_insn,	1,	SUF_B,	0x0B,	0,	0,	0,	CPU_386,	0,	0},
#line 1192 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"sete",	setcc_insn,	1,	SUF_Z,	0x04,	0,	0,	0,	CPU_386,	0,	0},
#line 1487 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpnlt_uqsd",	ssecmp_64_insn,	4,	SUF_Z,	0x15,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1598 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vfmsub132sd",	vfma_sd_insn,	2,	SUF_Z,	0x9B,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 194 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovnae",	cmovcc_insn,	3,	SUF_Z,	0x02,	0,	0,	0,	CPU_686,	0,	0},
#line 2063 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"xcryptcfb",	padlock_insn,	1,	SUF_Z,	0xE0,	0xF3,	0xA7,	0,	CPU_PadLock,	0,	0},
#line 1548 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcvtss2siq",	cvt_rx_xmm32_insn,	4,	SUF_Q,	0xF3,	0x2D,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 416 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fcmovnb",	fcmovcc_insn,	1,	SUF_Z,	0xDB,	0xC0,	0,	0,	CPU_686,	CPU_FPU,	0},
#line 1579 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vfmadd213ss",	vfma_ss_insn,	2,	SUF_Z,	0xA9,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1083 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pushfw",	onebyte_insn,	1,	SUF_Z,	0x9C,	0x10,	0x40,	0,	0,	0,	0},
#line 937 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pf2id",	now3d_insn,	1,	SUF_Z,	0x1D,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 1887 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vphadduwd",	vphaddsub_insn,	1,	SUF_Z,	0xD6,	0,	0,	0,	CPU_XOP,	0,	0},
#line 1796 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpcomfalsew",	vpcom_insn,	1,	SUF_Z,	0xCD,	0x06,	0,	0,	CPU_XOP,	0,	0},
#line 2064 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"xcryptctr",	padlock_insn,	1,	SUF_Z,	0xD8,	0xF3,	0xA7,	0,	CPU_PadLock,	0,	0},
#line 452 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fidiv",	fiarith_insn,	2,	SUF_Z,	0x06,	0xDA,	0,	0,	CPU_FPU,	0,	0},
#line 1560 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vdivps",	xmm_xmm128_256_insn,	4,	SUF_Z,	0x00,	0x5E,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 568 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fxrstorq",	twobytemem_insn,	1,	SUF_Q,	0x01,	0x0F,	0xAE,	0,	CPU_686,	CPU_FPU,	0},
#line 15 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"aas",	onebyte_insn,	1,	SUF_Z,	0x3F,	0,	0,	NOT_64,	0,	0,	0},
#line 953 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pfrsqrt",	now3d_insn,	1,	SUF_Z,	0x97,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 256 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovpeq",	cmovcc_insn,	3,	SUF_Q,	0x0A,	0,	0,	ONLY_64,	CPU_686,	0,	0},
#line 1374 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vaesenclast",	aes_insn,	2,	SUF_Z,	0x38,	0xDD,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1718 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vmreadl",	vmxmemrd_insn,	2,	SUF_L,	0,	0,	0,	NOT_64,	CPU_P4,	0,	0},
#line 1556 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcvttss2si",	cvt_rx_xmm32_insn,	4,	SUF_Z,	0xF3,	0x2C,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 830 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"movupd",	movau_insn,	6,	SUF_Z,	0x66,	0x10,	0x01,	0,	CPU_SSE2,	0,	0},
#line 119 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"btcw",	bittest_insn,	6,	SUF_W,	0xBB,	0x07,	0,	0,	CPU_386,	0,	0},
#line 1026 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"popfq",	onebyte_insn,	1,	SUF_Z,	0x9D,	0x40,	0x40,	ONLY_64,	0,	0,	0},
#line 1005 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pmulhrw",	now3d_insn,	1,	SUF_Z,	0xB7,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 1767 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpcmpeqb",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0x74,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 742 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"lsl",	larlsl_insn,	6,	SUF_Z,	0x03,	0,	0,	0,	CPU_286,	CPU_Prot,	0},
#line 1108 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"rdtsc",	twobyte_insn,	1,	SUF_Z,	0x0F,	0x31,	0,	0,	CPU_586,	0,	0},
#line 1181 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"scasw",	onebyte_insn,	1,	SUF_Z,	0xAF,	0x10,	0,	0,	0,	0,	0},
#line 1014 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pmvnzb",	cyrixmmx_insn,	1,	SUF_Z,	0x5A,	0,	0,	0,	CPU_Cyrix,	CPU_MMX,	0},
#line 1008 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pmulhw",	mmxsse2_insn,	2,	SUF_Z,	0xE5,	0,	0,	0,	CPU_MMX,	0,	0},
#line 1250 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"sha1rnds4",	intel_SHA1RNDS4_insn,	1,	SUF_Z,	0,	0,	0,	0,	CPU_SHA,	0,	0},
#line 626 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"jb",	jcc_insn,	9,	SUF_Z,	0x02,	0,	0,	0,	0,	0,	0},
#line 89 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"blsi",	vex_gpr_ndd_rm_0F38_regext_insn,	2,	SUF_Z,	0x00,	0xF3,	0x03,	ONLY_AVX,	CPU_BMI1,	0,	0},
#line 1591 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vfmaddsub213ps",	vfma_ps_insn,	2,	SUF_Z,	0xA6,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1770 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpcmpeqw",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0x75,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 531 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fscale",	twobyte_insn,	1,	SUF_Z,	0xD9,	0xFD,	0,	0,	CPU_FPU,	0,	0},
#line 200 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovnaw",	cmovcc_insn,	3,	SUF_W,	0x06,	0,	0,	0,	CPU_686,	0,	0},
#line 1761 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpclmulhqhqdq",	pclmulqdq_fixed_insn,	2,	SUF_Z,	0x11,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1212 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"setne",	setcc_insn,	1,	SUF_Z,	0x05,	0,	0,	0,	CPU_386,	0,	0},
#line 973 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pmaddwd",	mmxsse2_insn,	2,	SUF_Z,	0xF5,	0,	0,	0,	CPU_MMX,	0,	0},
#line 691 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"lgdt",	twobytemem_insn,	1,	SUF_Z,	0x02,	0x0F,	0x01,	0,	CPU_286,	CPU_Priv,	0},
#line 908 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pclmulhqlqdq",	pclmulqdq_fixed_insn,	2,	SUF_Z,	0x01,	0,	0,	0,	CPU_AVX,	0,	0},
#line 2051 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"xaddb",	cmpxchgxadd_insn,	4,	SUF_B,	0xC0,	0,	0,	0,	CPU_486,	0,	0},
#line 305 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmpps",	xmm_xmm128_imm_insn,	1,	SUF_Z,	0x00,	0xC2,	0,	0,	CPU_SSE,	0,	0},
#line 808 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"movntq",	movntq_insn,	1,	SUF_Z,	0,	0,	0,	0,	CPU_SSE,	0,	0},
#line 587 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"idivw",	div_insn,	8,	SUF_W,	0x07,	0,	0,	0,	0,	0,	0},
#line 1076 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"push",	push_insn,	35,	SUF_Z,	0,	0,	0,	0,	0,	0,	0},
#line 1604 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vfmsub231pd",	vfma_pd_insn,	2,	SUF_Z,	0xBA,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1344 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"test",	test_insn,	20,	SUF_Z,	0,	0,	0,	0,	0,	0,	0},
#line 1048 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pslldq",	pslrldq_insn,	4,	SUF_Z,	0x07,	0,	0,	0,	CPU_SSE2,	0,	0},
#line 1253 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"sha256rnds2",	intel_SHA256RNDS2_insn,	1,	SUF_Z,	0,	0,	0,	0,	CPU_SHA,	0,	0},
#line 161 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovb",	cmovcc_insn,	3,	SUF_Z,	0x02,	0,	0,	0,	CPU_686,	0,	0},
#line 1123 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"rex64xyz",	NULL,	X86_REX>>8,	0x4F,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 79 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"blcs",	xop_gpr_reg_rm_09_insn,	2,	SUF_Z,	0x01,	0x03,	0,	0,	CPU_386,	CPU_TBM,	0},
#line 1075 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"punpcklwd",	mmxsse2_insn,	2,	SUF_Z,	0x61,	0,	0,	0,	CPU_MMX,	0,	0},
#line 1301 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"sqrtps",	xmm_xmm128_insn,	2,	SUF_Z,	0x00,	0x51,	0,	0,	CPU_SSE,	0,	0},
#line 196 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovnaeq",	cmovcc_insn,	3,	SUF_Q,	0x02,	0,	0,	ONLY_64,	CPU_686,	0,	0},
#line 1717 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vmread",	vmxmemrd_insn,	2,	SUF_Z,	0,	0,	0,	0,	CPU_P4,	0,	0},
#line 502 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fldz",	twobyte_insn,	1,	SUF_Z,	0xD9,	0xEE,	0,	0,	CPU_FPU,	0,	0},
#line 2006 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpunpckldq",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0x62,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1116 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"retl",	retnf_insn,	6,	SUF_Z,	0xC2,	0,	0,	NOT_64,	0,	0,	0},
#line 1667 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vlddqu",	lddqu_insn,	2,	SUF_Z,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1478 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpnle_uqps",	ssecmp_128_insn,	3,	SUF_Z,	0x16,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 191 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovlq",	cmovcc_insn,	3,	SUF_Q,	0x0C,	0,	0,	ONLY_64,	CPU_686,	0,	0},
#line 2015 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vroundss",	sse4m32imm_insn,	4,	SUF_Z,	0x0A,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 123 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"btrl",	bittest_insn,	6,	SUF_L,	0xB3,	0x06,	0,	0,	CPU_386,	0,	0},
#line 503 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fmul",	farith_insn,	7,	SUF_Z,	0xC8,	0xC8,	0x01,	0,	CPU_FPU,	0,	0},
#line 241 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovns",	cmovcc_insn,	3,	SUF_Z,	0x09,	0,	0,	0,	CPU_686,	0,	0},
#line 1383 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vblendvpd",	avx_sse4xmm0_insn,	2,	SUF_Z,	0x4B,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 470 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fistp",	fildstp_insn,	4,	SUF_Z,	0x03,	0x02,	0x07,	0,	CPU_FPU,	0,	0},
#line 1188 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"setbe",	setcc_insn,	1,	SUF_Z,	0x06,	0,	0,	0,	CPU_386,	0,	0},
#line 303 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmpordss",	ssecmp_32_insn,	4,	SUF_Z,	0x07,	0xF3,	0,	0,	CPU_SSE,	0,	0},
#line 1653 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vfrczps",	vfrc_pdps_insn,	2,	SUF_Z,	0x00,	0,	0,	0,	CPU_XOP,	0,	0},
#line 1338 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"sysret",	twobyte_insn,	1,	SUF_Z,	0x0F,	0x07,	0,	0,	CPU_686,	CPU_AMD,	CPU_Priv},
#line 952 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pfrsqit1",	now3d_insn,	1,	SUF_Z,	0xA7,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 927 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pdistib",	cyrixmmx_insn,	1,	SUF_Z,	0x54,	0,	0,	0,	CPU_Cyrix,	CPU_MMX,	0},
#line 1252 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"sha256msg2",	intel_SHA256MSG2_insn,	1,	SUF_Z,	0,	0,	0,	0,	CPU_SHA,	0,	0},
#line 1042 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pshuflw",	xmm_xmm128_imm_insn,	1,	SUF_Z,	0xF2,	0x70,	0,	0,	CPU_SSE2,	0,	0},
#line 1798 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpcomged",	vpcom_insn,	1,	SUF_Z,	0xCE,	0x03,	0,	0,	CPU_XOP,	0,	0},
#line 301 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmpordps",	ssecmp_128_insn,	3,	SUF_Z,	0x07,	0,	0,	0,	CPU_SSE,	0,	0},
#line 539 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fstenv",	twobytemem_insn,	1,	SUF_Z,	0x06,	0x9B,	0xD9,	0,	CPU_FPU,	0,	0},
#line 2067 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"xend",	tsx_0x0F_0x01_insn,	1,	SUF_Z,	0xD5,	0,	0,	0,	CPU_TSX,	0,	0},
#line 538 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fstcww",	fstcw_insn,	1,	SUF_W,	0,	0,	0,	0,	CPU_FPU,	0,	0},
#line 206 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovnbl",	cmovcc_insn,	3,	SUF_L,	0x03,	0,	0,	0,	CPU_686,	0,	0},
#line 1619 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vfmsubss",	fma_128_m32_insn,	3,	SUF_Z,	0x6E,	0,	0,	ONLY_AVX,	CPU_FMA4,	0,	0},
#line 892 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"paddsiw",	cyrixmmx_insn,	1,	SUF_Z,	0x51,	0,	0,	0,	CPU_Cyrix,	CPU_MMX,	0},
#line 393 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"dppd",	sse4imm_insn,	2,	SUF_Z,	0x41,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 596 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"incb",	incdec_insn,	6,	SUF_B,	0x40,	0x00,	0,	0,	0,	0,	0},
#line 1950 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpmulhuw",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xE4,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1698 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vmovmskpdl",	movmsk_insn,	4,	SUF_L,	0x66,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1906 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpmacsdqh",	vpma_insn,	1,	SUF_Z,	0x9F,	0,	0,	0,	CPU_XOP,	0,	0},
#line 412 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fclex",	threebyte_insn,	1,	SUF_Z,	0x9B,	0xDB,	0xE2,	0,	CPU_FPU,	0,	0},
#line 1496 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpord_sss",	ssecmp_32_insn,	4,	SUF_Z,	0x17,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 47 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"aeskeygenassist",	aes_imm_insn,	1,	SUF_Z,	0x3A,	0xDF,	0,	0,	CPU_AES,	0,	0},
#line 355 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cvtsi2ssq",	cvt_xmm_rmx_insn,	6,	SUF_Q,	0xF3,	0x2A,	0,	ONLY_64,	CPU_SSE,	0,	0},
#line 401 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"extractps",	extractps_insn,	2,	SUF_Z,	0,	0,	0,	0,	CPU_386,	CPU_SSE41,	0},
#line 283 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmpless",	ssecmp_32_insn,	4,	SUF_Z,	0x02,	0xF3,	0,	0,	CPU_SSE,	0,	0},
#line 1064 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"psubusw",	mmxsse2_insn,	2,	SUF_Z,	0xD9,	0,	0,	0,	CPU_MMX,	0,	0},
#line 1229 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"setnzb",	setcc_insn,	1,	SUF_B,	0x05,	0,	0,	0,	CPU_386,	0,	0},
#line 1738 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpacksswb",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0x63,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1731 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vmxon",	vmxthreebytemem_insn,	1,	SUF_Z,	0xF3,	0,	0,	0,	CPU_P4,	0,	0},
#line 1993 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpsubd",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xFA,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1829 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpcomneb",	vpcom_insn,	1,	SUF_Z,	0xCC,	0x05,	0,	0,	CPU_XOP,	0,	0},
#line 562 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fucomp",	fcom2_insn,	2,	SUF_Z,	0xDD,	0xE8,	0,	0,	CPU_286,	CPU_FPU,	0},
#line 662 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"lar",	larlsl_insn,	6,	SUF_Z,	0x02,	0,	0,	0,	CPU_286,	CPU_Prot,	0},
#line 90 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"blsic",	xop_gpr_reg_rm_09_insn,	2,	SUF_Z,	0x01,	0x06,	0,	0,	CPU_386,	CPU_TBM,	0},
#line 582 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"ibts",	ibts_insn,	2,	SUF_Z,	0,	0,	0,	0,	CPU_386,	CPU_Obs,	CPU_Undoc},
#line 1803 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpcomgeuw",	vpcom_insn,	1,	SUF_Z,	0xED,	0x03,	0,	0,	CPU_XOP,	0,	0},
#line 1700 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vmovmskps",	movmsk_insn,	4,	SUF_Z,	0x00,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1545 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcvtss2sd",	xmm_xmm32_insn,	4,	SUF_Z,	0xF3,	0x5A,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 2036 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vunpcklps",	xmm_xmm128_256_insn,	4,	SUF_Z,	0x00,	0x14,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 435 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fdivr",	farith_insn,	7,	SUF_Z,	0xF0,	0xF8,	0x07,	0,	CPU_FPU,	0,	0},
#line 1970 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpshufb",	ssse3_insn,	5,	SUF_Z,	0x00,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1509 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmptruepd",	ssecmp_128_insn,	3,	SUF_Z,	0x0F,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1972 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpshufhw",	xmm_xmm128_imm_256avx2_insn,	2,	SUF_Z,	0xF3,	0x70,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1337 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"sysexit",	twobyte_insn,	1,	SUF_Z,	0x0F,	0x35,	0,	NOT_64,	CPU_686,	CPU_Priv,	0},
#line 1633 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vfnmaddps",	fma_128_256_insn,	4,	SUF_Z,	0x78,	0,	0,	ONLY_AVX,	CPU_FMA4,	0,	0},
#line 816 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"movsbw",	movszx_insn,	5,	SUF_B,	0xBE,	0,	0,	0,	CPU_386,	0,	0},
#line 545 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fstps",	fstp_insn,	4,	SUF_S,	0,	0,	0,	0,	CPU_FPU,	0,	0},
#line 405 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fadd",	farith_insn,	7,	SUF_Z,	0xC0,	0xC0,	0x00,	0,	CPU_FPU,	0,	0},
#line 1403 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpeqsd",	ssecmp_64_insn,	4,	SUF_Z,	0x00,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1471 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpngt_uqsd",	ssecmp_64_insn,	4,	SUF_Z,	0x1A,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1307 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"sscaw",	onebyte_insn,	1,	SUF_Z,	0xAF,	0x10,	0,	0,	0,	0,	0},
#line 1219 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"setnlb",	setcc_insn,	1,	SUF_B,	0x0D,	0,	0,	0,	CPU_386,	0,	0},
#line 1952 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpmulld",	ssse3_insn,	5,	SUF_Z,	0x40,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 221 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovngew",	cmovcc_insn,	3,	SUF_W,	0x0C,	0,	0,	0,	CPU_686,	0,	0},
#line 897 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"palignr",	ssse3imm_insn,	2,	SUF_Z,	0x0F,	0,	0,	0,	CPU_SSSE3,	0,	0},
#line 870 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"orpd",	xmm_xmm128_insn,	2,	SUF_Z,	0x66,	0x56,	0,	0,	CPU_SSE2,	0,	0},
#line 1680 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vminsd",	xmm_xmm64_insn,	4,	SUF_Z,	0xF2,	0x5D,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 534 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fsincos",	twobyte_insn,	1,	SUF_Z,	0xD9,	0xFB,	0,	0,	CPU_286,	CPU_FPU,	0},
#line 1429 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmple_oqpd",	ssecmp_128_insn,	3,	SUF_Z,	0x12,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 974 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pmagw",	cyrixmmx_insn,	1,	SUF_Z,	0x52,	0,	0,	0,	CPU_Cyrix,	CPU_MMX,	0},
#line 1221 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"setnleb",	setcc_insn,	1,	SUF_B,	0x0F,	0,	0,	0,	CPU_386,	0,	0},
#line 1502 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpps",	xmm_xmm128_imm_256_insn,	3,	SUF_Z,	0x00,	0xC2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1949 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpmulhrsw",	ssse3_insn,	5,	SUF_Z,	0x0B,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1191 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"setcb",	setcc_insn,	1,	SUF_B,	0x02,	0,	0,	0,	CPU_386,	0,	0},
#line 696 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"lgsl",	lfgss_insn,	3,	SUF_L,	0xB5,	0,	0,	0,	CPU_386,	0,	0},
#line 901 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"paveb",	cyrixmmx_insn,	1,	SUF_Z,	0x50,	0,	0,	0,	CPU_Cyrix,	CPU_MMX,	0},
#line 1176 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"sbbq",	arith_insn,	22,	SUF_Q,	0x18,	0x03,	0,	ONLY_64,	0,	0,	0},
#line 1584 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vfmaddpd",	fma_128_256_insn,	4,	SUF_Z,	0x69,	0,	0,	ONLY_AVX,	CPU_FMA4,	0,	0},
#line 420 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fcmovu",	fcmovcc_insn,	1,	SUF_Z,	0xDA,	0xD8,	0,	0,	CPU_686,	CPU_FPU,	0},
#line 1062 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"psubsw",	mmxsse2_insn,	2,	SUF_Z,	0xE9,	0,	0,	0,	CPU_MMX,	0,	0},
#line 1213 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"setneb",	setcc_insn,	1,	SUF_B,	0x05,	0,	0,	0,	CPU_386,	0,	0},
#line 1637 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vfnmsub132ps",	vfma_ps_insn,	2,	SUF_Z,	0x9E,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 690 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"lfsw",	lfgss_insn,	3,	SUF_W,	0xB4,	0,	0,	0,	CPU_386,	0,	0},
#line 1772 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpcmpestrm",	sse4pcmpstr_insn,	1,	SUF_Z,	0x60,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 61 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"arpl",	arpl_insn,	1,	SUF_Z,	0,	0,	0,	NOT_64,	CPU_286,	CPU_Prot,	0},
#line 176 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovew",	cmovcc_insn,	3,	SUF_W,	0x04,	0,	0,	0,	CPU_686,	0,	0},
#line 986 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pminuw",	sse4_insn,	2,	SUF_Z,	0x3A,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 774 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"movabsq",	movabs_insn,	9,	SUF_Q,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 249 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovo",	cmovcc_insn,	3,	SUF_Z,	0x00,	0,	0,	0,	CPU_686,	0,	0},
#line 91 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"blsicl",	xop_gpr_reg_rm_09_insn,	2,	SUF_L,	0x01,	0x06,	0,	0,	CPU_386,	CPU_TBM,	0},
#line 1128 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"rexx",	NULL,	X86_REX>>8,	0x44,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 406 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"faddl",	farith_insn,	7,	SUF_L,	0xC0,	0xC0,	0x00,	0,	CPU_FPU,	0,	0},
#line 1436 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpless",	ssecmp_32_insn,	4,	SUF_Z,	0x02,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 13 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"aad",	aadm_insn,	2,	SUF_Z,	0x01,	0,	0,	NOT_64,	0,	0,	0},
#line 1920 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpmaskmovq",	vmaskmov_vexw1_avx2_insn,	4,	SUF_Z,	0x8C,	0,	0,	ONLY_AVX,	CPU_AVX2,	0,	0},
#line 1574 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vfmadd132sd",	vfma_sd_insn,	2,	SUF_Z,	0x99,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1110 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"rep",	NULL,	X86_LOCKREP>>8,	0xF3,	0,	0,	0,	0,	0,	0,	0},
#line 391 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"divss",	xmm_xmm32_insn,	4,	SUF_Z,	0xF3,	0x5E,	0,	0,	CPU_SSE,	0,	0},
#line 1322 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"sub",	arith_insn,	22,	SUF_Z,	0x28,	0x05,	0,	0,	0,	0,	0},
#line 781 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"movbeq",	movbe_insn,	6,	SUF_Q,	0,	0,	0,	ONLY_64,	CPU_MOVBE,	0,	0},
#line 1088 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"qword",	NULL,	X86_OPERSIZE>>8,	0x40,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 1518 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpunordps",	ssecmp_128_insn,	3,	SUF_Z,	0x03,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1091 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"rcll",	shift_insn,	16,	SUF_L,	0x02,	0,	0,	0,	CPU_386,	0,	0},
#line 1624 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vfnmadd213pd",	vfma_pd_insn,	2,	SUF_Z,	0xAC,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 765 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"minsd",	xmm_xmm64_insn,	4,	SUF_Z,	0xF2,	0x5D,	0,	0,	CPU_SSE2,	0,	0},
#line 1089 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"rcl",	shift_insn,	16,	SUF_Z,	0x02,	0,	0,	0,	0,	0,	0},
#line 311 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmpss",	xmm_xmm32_imm_insn,	4,	SUF_Z,	0xF3,	0xC2,	0,	0,	CPU_SSE,	0,	0},
#line 1535 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcvtsd2si",	cvt_rx_xmm64_insn,	4,	SUF_Z,	0xF2,	0x2D,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 33 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"addsd",	xmm_xmm64_insn,	4,	SUF_Z,	0xF2,	0x58,	0,	0,	CPU_SSE2,	0,	0},
#line 1726 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vmulss",	xmm_xmm32_insn,	4,	SUF_Z,	0xF3,	0x59,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 128 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"btsq",	bittest_insn,	6,	SUF_Q,	0xAB,	0x05,	0,	ONLY_64,	CPU_386,	0,	0},
#line 588 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"imul",	imul_insn,	19,	SUF_Z,	0,	0,	0,	0,	0,	0,	0},
#line 1846 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpcomtrueb",	vpcom_insn,	1,	SUF_Z,	0xCC,	0x07,	0,	0,	CPU_XOP,	0,	0},
#line 1781 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpcomeqb",	vpcom_insn,	1,	SUF_Z,	0xCC,	0x04,	0,	0,	CPU_XOP,	0,	0},
#line 454 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fidivr",	fiarith_insn,	2,	SUF_Z,	0x07,	0xDA,	0,	0,	CPU_FPU,	0,	0},
#line 1810 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpcomgtuq",	vpcom_insn,	1,	SUF_Z,	0xEF,	0x02,	0,	0,	CPU_XOP,	0,	0},
#line 214 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovnel",	cmovcc_insn,	3,	SUF_L,	0x05,	0,	0,	0,	CPU_686,	0,	0},
#line 1204 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"setnae",	setcc_insn,	1,	SUF_Z,	0x02,	0,	0,	0,	CPU_386,	0,	0},
#line 1392 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpeq_osss",	ssecmp_32_insn,	4,	SUF_Z,	0x10,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1267 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"shrb",	shift_insn,	16,	SUF_B,	0x05,	0,	0,	0,	0,	0,	0},
#line 758 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"maxpd",	xmm_xmm128_insn,	2,	SUF_Z,	0x66,	0x5F,	0,	0,	CPU_SSE2,	0,	0},
#line 580 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"hsubps",	xmm_xmm128_insn,	2,	SUF_Z,	0xF2,	0x7D,	0,	0,	CPU_SSE3,	0,	0},
#line 1170 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"sarx",	vex_gpr_reg_rm_nds_0F_insn,	2,	SUF_Z,	0xF3,	0x38,	0xF7,	ONLY_AVX,	CPU_BMI2,	0,	0},
#line 1805 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpcomgtb",	vpcom_insn,	1,	SUF_Z,	0xCC,	0x02,	0,	0,	CPU_XOP,	0,	0},
#line 1450 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpneq_osps",	ssecmp_128_insn,	3,	SUF_Z,	0x1C,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1543 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcvtsi2ssl",	cvt_xmm_rmx_insn,	6,	SUF_L,	0xF3,	0x2A,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 839 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"movzxb",	movszx_insn,	5,	SUF_B,	0xB6,	0,	0,	0,	CPU_386,	0,	0},
#line 1760 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpbroadcastw",	vpbroadcastw_avx2_insn,	4,	SUF_Z,	0,	0,	0,	ONLY_AVX,	CPU_AVX2,	0,	0},
#line 1262 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"shlw",	shift_insn,	16,	SUF_W,	0x04,	0,	0,	0,	0,	0,	0},
#line 2059 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"xchgl",	xchg_insn,	16,	SUF_L,	0,	0,	0,	0,	0,	0,	0},
#line 2069 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"xlatb",	onebyte_insn,	1,	SUF_Z,	0xD7,	0x00,	0,	0,	0,	0,	0},
#line 2083 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"xsha1",	padlock_insn,	1,	SUF_Z,	0xC8,	0xF3,	0xA6,	0,	CPU_PadLock,	0,	0},
#line 184 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovgw",	cmovcc_insn,	3,	SUF_W,	0x0F,	0,	0,	0,	CPU_686,	0,	0},
#line 2084 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"xsha256",	padlock_insn,	1,	SUF_Z,	0xD0,	0xF3,	0xA6,	0,	CPU_PadLock,	0,	0},
#line 1983 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpsrad",	vpshift_insn,	8,	SUF_Z,	0xE2,	0x72,	0x04,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 238 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovnpl",	cmovcc_insn,	3,	SUF_L,	0x0B,	0,	0,	0,	CPU_686,	0,	0},
#line 37 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"addw",	arith_insn,	22,	SUF_W,	0x00,	0x00,	0,	0,	0,	0,	0},
#line 1194 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"setg",	setcc_insn,	1,	SUF_Z,	0x0F,	0,	0,	0,	CPU_386,	0,	0},
#line 1884 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vphaddubq",	vphaddsub_insn,	1,	SUF_Z,	0xD3,	0,	0,	0,	CPU_XOP,	0,	0},
#line 222 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovngl",	cmovcc_insn,	3,	SUF_L,	0x0E,	0,	0,	0,	CPU_686,	0,	0},
#line 1862 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpermilpd",	vpermil_insn,	4,	SUF_Z,	0x05,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1913 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpmacswd",	vpma_insn,	1,	SUF_Z,	0x96,	0,	0,	0,	CPU_XOP,	0,	0},
#line 142 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"clac",	threebyte_insn,	1,	SUF_Z,	0x0F,	0x01,	0xCA,	0,	CPU_SMAP,	0,	0},
#line 1071 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"punpckhwd",	mmxsse2_insn,	2,	SUF_Z,	0x69,	0,	0,	0,	CPU_MMX,	0,	0},
#line 1773 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpcmpgtb",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0x64,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1470 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpngt_uqps",	ssecmp_128_insn,	3,	SUF_Z,	0x1A,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1693 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vmovhps",	movhlp_insn,	3,	SUF_Z,	0x00,	0x16,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1597 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vfmsub132ps",	vfma_ps_insn,	2,	SUF_Z,	0x9A,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 739 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"lretl",	retnf_insn,	6,	SUF_L,	0xCA,	0,	0,	0,	0,	0,	0},
#line 260 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovpol",	cmovcc_insn,	3,	SUF_L,	0x0B,	0,	0,	0,	CPU_686,	0,	0},
#line 869 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"orl",	arith_insn,	22,	SUF_L,	0x08,	0x01,	0,	0,	CPU_386,	0,	0},
#line 352 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cvtsi2sdq",	cvt_xmm_rmx_insn,	6,	SUF_Q,	0xF2,	0x2A,	0,	ONLY_64,	CPU_SSE2,	0,	0},
#line 1073 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"punpckldq",	mmxsse2_insn,	2,	SUF_Z,	0x62,	0,	0,	0,	CPU_MMX,	0,	0},
#line 1918 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpmaddwd",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xF5,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 843 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"mulb",	f6_insn,	4,	SUF_B,	0x04,	0,	0,	0,	0,	0,	0},
#line 1184 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"setae",	setcc_insn,	1,	SUF_Z,	0x03,	0,	0,	0,	CPU_386,	0,	0},
#line 1119 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"rex",	NULL,	X86_REX>>8,	0x40,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 783 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"movd",	movd_insn,	8,	SUF_Z,	0,	0,	0,	0,	CPU_386,	CPU_MMX,	0},
#line 1965 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpshaw",	amd_vpshift_insn,	2,	SUF_Z,	0x99,	0,	0,	0,	CPU_XOP,	0,	0},
#line 2016 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vrsqrtps",	avx_xmm_xmm128_insn,	2,	SUF_Z,	0x00,	0x52,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1531 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcvtph2ps",	avx_cvtph2ps_insn,	4,	SUF_Z,	0x66,	0x13,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 2028 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vsubss",	xmm_xmm32_insn,	4,	SUF_Z,	0xF3,	0x5C,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1350 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"tzcntl",	cnt_insn,	3,	SUF_L,	0xBC,	0,	0,	0,	CPU_BMI1,	0,	0},
#line 862 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"not",	f6_insn,	4,	SUF_Z,	0x02,	0,	0,	0,	0,	0,	0},
#line 1995 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpsubsb",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xE8,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1475 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpngtsd",	ssecmp_64_insn,	4,	SUF_Z,	0x0A,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1126 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"rex64yz",	NULL,	X86_REX>>8,	0x4B,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 1754 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpblendd",	vex_66_0F3A_imm8_avx2_insn,	2,	SUF_Z,	0x02,	0,	0,	ONLY_AVX,	CPU_AVX2,	0,	0},
#line 1933 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpmovmskb",	pmovmskb_insn,	6,	SUF_Z,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 394 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"dpps",	sse4imm_insn,	2,	SUF_Z,	0x40,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 2005 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpunpcklbw",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0x60,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 440 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"femms",	twobyte_insn,	1,	SUF_Z,	0x0F,	0x0E,	0,	0,	CPU_3DNow,	0,	0},
#line 1990 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpsrlvq",	vpshiftv_vexw1_avx2_insn,	2,	SUF_Z,	0x45,	0,	0,	ONLY_AVX,	CPU_AVX2,	0,	0},
#line 894 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"paddusb",	mmxsse2_insn,	2,	SUF_Z,	0xDC,	0,	0,	0,	CPU_MMX,	0,	0},
#line 785 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"movdq2q",	movdq2q_insn,	1,	SUF_Z,	0,	0,	0,	0,	CPU_SSE2,	0,	0},
#line 1636 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vfnmsub132pd",	vfma_pd_insn,	2,	SUF_Z,	0x9E,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 17 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"adcb",	arith_insn,	22,	SUF_B,	0x10,	0x02,	0,	0,	0,	0,	0},
#line 1458 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpneqps",	ssecmp_128_insn,	3,	SUF_Z,	0x04,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1084 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pushl",	push_insn,	35,	SUF_L,	0,	0,	0,	0,	CPU_386,	0,	0},
#line 516 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fnstenvl",	onebytemem_insn,	1,	SUF_L,	0x06,	0xD9,	0,	0,	CPU_FPU,	0,	0},
#line 1289 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"smi",	onebyte_insn,	1,	SUF_Z,	0xF1,	0,	0,	0,	CPU_386,	CPU_Undoc,	0},
#line 250 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovol",	cmovcc_insn,	3,	SUF_L,	0x00,	0,	0,	0,	CPU_686,	0,	0},
#line 392 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"divw",	div_insn,	8,	SUF_W,	0x06,	0,	0,	0,	0,	0,	0},
#line 1947 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpmovzxwq",	sse4m32_insn,	4,	SUF_Z,	0x34,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 2035 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vunpcklpd",	xmm_xmm128_256_insn,	4,	SUF_Z,	0x66,	0x14,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 634 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"jl",	jcc_insn,	9,	SUF_Z,	0x0C,	0,	0,	0,	0,	0,	0},
#line 507 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fnclex",	twobyte_insn,	1,	SUF_Z,	0xDB,	0xE2,	0,	0,	CPU_FPU,	0,	0},
#line 1261 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"shlq",	shift_insn,	16,	SUF_Q,	0x04,	0,	0,	ONLY_64,	0,	0,	0},
#line 1162 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"sall",	shift_insn,	16,	SUF_L,	0x04,	0,	0,	0,	CPU_386,	0,	0},
#line 682 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"leaw",	lea_insn,	3,	SUF_W,	0,	0,	0,	0,	0,	0,	0},
#line 731 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"loopnzw",	loopw_insn,	4,	SUF_Z,	0x00,	0x10,	0,	NOT_64,	0,	0,	0},
#line 979 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pmaxud",	sse4_insn,	2,	SUF_Z,	0x3F,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 1745 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpaddsw",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xED,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1034 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"prefetcht0",	twobytemem_insn,	1,	SUF_Z,	0x01,	0x0F,	0x18,	0,	CPU_P3,	0,	0},
#line 1112 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"repne",	NULL,	X86_LOCKREP>>8,	0xF2,	0,	0,	0,	0,	0,	0,	0},
#line 1599 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vfmsub132ss",	vfma_ss_insn,	2,	SUF_Z,	0x9B,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 743 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"lsll",	larlsl_insn,	6,	SUF_L,	0x03,	0,	0,	0,	CPU_286,	CPU_Prot,	0},
#line 1659 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vgatherqps",	gather_32x_32y_128_insn,	2,	SUF_Z,	0x93,	0,	0,	ONLY_AVX,	CPU_AVX2,	0,	0},
#line 2017 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vrsqrtss",	xmm_xmm32_insn,	4,	SUF_Z,	0xF3,	0x52,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 168 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovbw",	cmovcc_insn,	3,	SUF_W,	0x02,	0,	0,	0,	CPU_686,	0,	0},
#line 920 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pcmpgtq",	sse4_insn,	2,	SUF_Z,	0x37,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 1004 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pmulhrsw",	ssse3_insn,	5,	SUF_Z,	0x0B,	0,	0,	0,	CPU_SSSE3,	0,	0},
#line 1111 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"repe",	NULL,	X86_LOCKREP>>8,	0xF3,	0,	0,	0,	0,	0,	0,	0},
#line 759 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"maxps",	xmm_xmm128_insn,	2,	SUF_Z,	0x00,	0x5F,	0,	0,	CPU_SSE,	0,	0},
#line 494 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fldl",	fld_insn,	4,	SUF_L,	0,	0,	0,	0,	CPU_FPU,	0,	0},
#line 344 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cvtps2pd",	xmm_xmm64_insn,	4,	SUF_Z,	0x00,	0x5A,	0,	0,	CPU_SSE2,	0,	0},
#line 1484 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpnless",	ssecmp_32_insn,	4,	SUF_Z,	0x06,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 721 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"loopeq",	loopq_insn,	4,	SUF_Z,	0x01,	0x40,	0,	ONLY_64,	0,	0,	0},
#line 43 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"aesdeclast",	aes_insn,	2,	SUF_Z,	0x38,	0xDF,	0,	0,	CPU_AVX,	0,	0},
#line 1820 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpcomlew",	vpcom_insn,	1,	SUF_Z,	0xCD,	0x01,	0,	0,	CPU_XOP,	0,	0},
#line 1311 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"stgi",	threebyte_insn,	1,	SUF_Z,	0x0F,	0x01,	0xDC,	0,	CPU_SVM,	0,	0},
#line 1942 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpmovzxbd",	sse4m32_insn,	4,	SUF_Z,	0x31,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1044 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"psignb",	ssse3_insn,	5,	SUF_Z,	0x08,	0,	0,	0,	CPU_SSSE3,	0,	0},
#line 1968 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpshlq",	amd_vpshift_insn,	2,	SUF_Z,	0x97,	0,	0,	0,	CPU_XOP,	0,	0},
#line 1794 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpcomfalseuq",	vpcom_insn,	1,	SUF_Z,	0xEF,	0x06,	0,	0,	CPU_XOP,	0,	0},
#line 1576 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vfmadd213pd",	vfma_pd_insn,	2,	SUF_Z,	0xA8,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 638 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"jmpq",	jmp_insn,	31,	SUF_Q,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 348 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cvtsd2siq",	cvt_rx_xmm64_insn,	4,	SUF_Q,	0xF2,	0x2D,	0,	ONLY_64,	CPU_SSE2,	0,	0},
#line 1382 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vblendps",	sse4imm_256_insn,	4,	SUF_Z,	0x0C,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1074 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"punpcklqdq",	xmm_xmm128_insn,	2,	SUF_Z,	0x66,	0x6C,	0,	0,	CPU_SSE2,	0,	0},
#line 1567 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"verw",	prot286_insn,	1,	SUF_Z,	0x05,	0x00,	0,	0,	CPU_286,	CPU_Prot,	0},
#line 861 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"nop",	onebyte_insn,	1,	SUF_Z,	0x90,	0,	0,	0,	0,	0,	0},
#line 2039 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vzeroall",	vzero_insn,	1,	SUF_Z,	0xC4,	0,	0,	0,	CPU_AVX,	0,	0},
#line 1860 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vperm2i128",	vperm2i128_avx2_insn,	1,	SUF_Z,	0,	0,	0,	ONLY_AVX,	CPU_AVX2,	0,	0},
#line 654 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"jo",	jcc_insn,	9,	SUF_Z,	0x00,	0,	0,	0,	0,	0,	0},
#line 136 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"callq",	call_insn,	30,	SUF_Q,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 571 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fxtract",	twobyte_insn,	1,	SUF_Z,	0xD9,	0xF4,	0,	0,	CPU_FPU,	0,	0},
#line 1245 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"sgdtq",	twobytemem_insn,	1,	SUF_Q,	0x00,	0x0F,	0x01,	0,	CPU_286,	CPU_Priv,	0},
#line 239 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovnpq",	cmovcc_insn,	3,	SUF_Q,	0x0B,	0,	0,	ONLY_64,	CPU_686,	0,	0},
#line 340 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cvtpd2ps",	xmm_xmm128_insn,	2,	SUF_Z,	0x66,	0x5A,	0,	0,	CPU_SSE2,	0,	0},
#line 766 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"minss",	xmm_xmm32_insn,	4,	SUF_Z,	0xF3,	0x5D,	0,	0,	CPU_SSE,	0,	0},
#line 733 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"loopw",	loopw_insn,	4,	SUF_Z,	0x02,	0x10,	0,	NOT_64,	0,	0,	0},
#line 611 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"inveptl",	eptvpid_insn,	2,	SUF_L,	0x00,	0,	0,	NOT_64,	CPU_386,	CPU_EPTVPID,	0},
#line 108 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"bsr",	bsfr_insn,	3,	SUF_Z,	0xBD,	0,	0,	0,	CPU_386,	0,	0},
#line 1719 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vmreadq",	vmxmemrd_insn,	2,	SUF_Q,	0,	0,	0,	ONLY_64,	CPU_P4,	0,	0},
#line 858 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"negl",	f6_insn,	4,	SUF_L,	0x03,	0,	0,	0,	CPU_386,	0,	0},
#line 1056 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"psrlw",	pshift_insn,	4,	SUF_Z,	0xD1,	0x71,	0x02,	0,	CPU_MMX,	0,	0},
#line 1954 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpmuludq",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xF4,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1771 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpcmpestri",	sse4pcmpstr_insn,	1,	SUF_Z,	0x61,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1154 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"rsm",	twobyte_insn,	1,	SUF_Z,	0x0F,	0xAA,	0,	0,	CPU_586,	CPU_SMM,	0},
#line 1352 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"tzcntw",	cnt_insn,	3,	SUF_W,	0xBC,	0,	0,	0,	CPU_BMI1,	0,	0},
#line 27 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"addpd",	xmm_xmm128_insn,	2,	SUF_Z,	0x66,	0x58,	0,	0,	CPU_SSE2,	0,	0},
#line 569 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fxsave",	twobytemem_insn,	1,	SUF_Z,	0x00,	0x0F,	0xAE,	0,	CPU_686,	CPU_FPU,	0},
#line 429 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fcoms",	fcom_insn,	6,	SUF_S,	0xD0,	0x02,	0,	0,	CPU_FPU,	0,	0},
#line 985 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pminud",	sse4_insn,	2,	SUF_Z,	0x3B,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 1865 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpermps",	vperm_var_avx2_insn,	1,	SUF_Z,	0x16,	0,	0,	ONLY_AVX,	CPU_AVX2,	0,	0},
#line 824 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"movsw",	onebyte_insn,	1,	SUF_Z,	0xA5,	0x10,	0,	0,	0,	0,	0},
#line 978 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pmaxub",	mmxsse2_insn,	2,	SUF_Z,	0xDE,	0,	0,	0,	CPU_MMX,	CPU_P3,	0},
#line 1668 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vldmxcsr",	ldstmxcsr_insn,	1,	SUF_Z,	0x02,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1662 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vhsubpd",	xmm_xmm128_256_insn,	4,	SUF_Z,	0x66,	0x7D,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 2031 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vucomisd",	avx_xmm_xmm64_insn,	2,	SUF_Z,	0x66,	0x2E,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 262 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovpow",	cmovcc_insn,	3,	SUF_W,	0x0B,	0,	0,	0,	CPU_686,	0,	0},
#line 1012 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pmvgezb",	cyrixmmx_insn,	1,	SUF_Z,	0x5C,	0,	0,	0,	CPU_Cyrix,	CPU_MMX,	0},
#line 1231 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"setob",	setcc_insn,	1,	SUF_B,	0x00,	0,	0,	0,	CPU_386,	0,	0},
#line 1740 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpackuswb",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0x67,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1313 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"stmxcsr",	ldstmxcsr_insn,	1,	SUF_Z,	0x03,	0,	0,	0,	CPU_SSE,	0,	0},
#line 1341 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"t1mskc",	xop_gpr_reg_rm_09_insn,	2,	SUF_Z,	0x01,	0x07,	0,	0,	CPU_386,	CPU_TBM,	0},
#line 827 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"movsx",	movszx_insn,	5,	SUF_Z,	0xBE,	0,	0,	0,	CPU_386,	0,	0},
#line 1905 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpmacsdd",	vpma_insn,	1,	SUF_Z,	0x9E,	0,	0,	0,	CPU_XOP,	0,	0},
#line 1435 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmplesd",	ssecmp_64_insn,	4,	SUF_Z,	0x02,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1037 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"prefetchw",	twobytemem_insn,	1,	SUF_Z,	0x01,	0x0F,	0x0D,	0,	CPU_PRFCHW,	0,	0},
#line 932 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pextrd",	pextrd_insn,	1,	SUF_Z,	0,	0,	0,	0,	CPU_386,	CPU_SSE41,	0},
#line 1406 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpfalse_osps",	ssecmp_128_insn,	3,	SUF_Z,	0x1B,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1648 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vfnmsubpd",	fma_128_256_insn,	4,	SUF_Z,	0x7D,	0,	0,	ONLY_AVX,	CPU_FMA4,	0,	0},
#line 838 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"movzx",	movszx_insn,	5,	SUF_Z,	0xB6,	0,	0,	0,	CPU_386,	0,	0},
#line 563 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fucompp",	twobyte_insn,	1,	SUF_Z,	0xDA,	0xE9,	0,	0,	CPU_286,	CPU_FPU,	0},
#line 1869 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpextrq",	pextrq_insn,	1,	SUF_Z,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1360 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"umov",	umov_insn,	6,	SUF_Z,	0,	0,	0,	0,	CPU_386,	CPU_Undoc,	0},
#line 372 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cwtd",	onebyte_insn,	1,	SUF_Z,	0x99,	0x10,	0,	0,	0,	0,	0},
#line 1664 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vinsertf128",	vinsertif128_insn,	1,	SUF_Z,	0x18,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1387 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vbroadcastsd",	vbroadcastsd_insn,	2,	SUF_Z,	0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 338 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cvtpd2dq",	xmm_xmm128_insn,	2,	SUF_Z,	0xF2,	0xE6,	0,	0,	CPU_SSE2,	0,	0},
#line 1830 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpcomned",	vpcom_insn,	1,	SUF_Z,	0xCE,	0x05,	0,	0,	CPU_XOP,	0,	0},
#line 1750 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpand",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xDB,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1501 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmppd",	xmm_xmm128_imm_256_insn,	3,	SUF_Z,	0x66,	0xC2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1909 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpmacssdqh",	vpma_insn,	1,	SUF_Z,	0x8F,	0,	0,	0,	CPU_XOP,	0,	0},
#line 896 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"paddw",	mmxsse2_insn,	2,	SUF_Z,	0xFD,	0,	0,	0,	CPU_MMX,	0,	0},
#line 1320 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"strq",	str_insn,	4,	SUF_Q,	0,	0,	0,	ONLY_64,	CPU_286,	CPU_Prot,	0},
#line 2019 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vshufps",	xmm_xmm128_imm_256_insn,	3,	SUF_Z,	0x00,	0xC6,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1137 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"roll",	shift_insn,	16,	SUF_L,	0x00,	0,	0,	0,	CPU_386,	0,	0},
#line 360 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cvttpd2dq",	xmm_xmm128_insn,	2,	SUF_Z,	0x66,	0xE6,	0,	0,	CPU_SSE2,	0,	0},
#line 1163 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"salq",	shift_insn,	16,	SUF_Q,	0x04,	0,	0,	ONLY_64,	0,	0,	0},
#line 1791 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpcomfalseq",	vpcom_insn,	1,	SUF_Z,	0xCF,	0x06,	0,	0,	CPU_XOP,	0,	0},
#line 677 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"leaq",	lea_insn,	3,	SUF_Q,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 1690 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vmovdqu",	movau_insn,	6,	SUF_Z,	0xF3,	0x6F,	0x10,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1917 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpmaddubsw",	ssse3_insn,	5,	SUF_Z,	0x04,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 284 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmpltpd",	ssecmp_128_insn,	3,	SUF_Z,	0x01,	0x66,	0,	0,	CPU_SSE,	0,	0},
#line 919 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pcmpgtd",	mmxsse2_insn,	2,	SUF_Z,	0x66,	0,	0,	0,	CPU_MMX,	0,	0},
#line 211 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovncq",	cmovcc_insn,	3,	SUF_Q,	0x03,	0,	0,	ONLY_64,	CPU_686,	0,	0},
#line 77 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"blcmskl",	xop_gpr_reg_rm_09_insn,	2,	SUF_L,	0x02,	0x01,	0,	0,	CPU_386,	CPU_TBM,	0},
#line 1583 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vfmadd231ss",	vfma_ss_insn,	2,	SUF_Z,	0xB9,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 302 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmpordsd",	ssecmp_64_insn,	4,	SUF_Z,	0x07,	0xF2,	0,	0,	CPU_SSE2,	0,	0},
#line 1220 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"setnle",	setcc_insn,	1,	SUF_Z,	0x0F,	0,	0,	0,	CPU_386,	0,	0},
#line 1580 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vfmadd231pd",	vfma_pd_insn,	2,	SUF_Z,	0xB8,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1459 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpneqsd",	ssecmp_64_insn,	4,	SUF_Z,	0x04,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1716 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vmptrst",	vmxtwobytemem_insn,	1,	SUF_Z,	0x07,	0,	0,	0,	CPU_P4,	0,	0},
#line 266 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovsl",	cmovcc_insn,	3,	SUF_L,	0x08,	0,	0,	0,	CPU_686,	0,	0},
#line 1938 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpmovsxbw",	sse4m64_insn,	4,	SUF_Z,	0x20,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1451 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpneq_ossd",	ssecmp_64_insn,	4,	SUF_Z,	0x1C,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1861 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpermd",	vperm_var_avx2_insn,	1,	SUF_Z,	0x36,	0,	0,	ONLY_AVX,	CPU_AVX2,	0,	0},
#line 31 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"addr32",	NULL,	X86_ADDRSIZE>>8,	0x20,	0,	0,	0,	0,	0,	0,	0},
#line 240 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovnpw",	cmovcc_insn,	3,	SUF_W,	0x0B,	0,	0,	0,	CPU_686,	0,	0},
#line 1725 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vmulsd",	xmm_xmm64_insn,	4,	SUF_Z,	0xF2,	0x59,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 756 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"maskmovdqu",	maskmovdqu_insn,	1,	SUF_Z,	0,	0,	0,	0,	CPU_SSE2,	0,	0},
#line 1978 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpslldq",	pslrldq_insn,	4,	SUF_Z,	0x07,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 757 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"maskmovq",	maskmovq_insn,	1,	SUF_Z,	0,	0,	0,	0,	CPU_MMX,	CPU_P3,	0},
#line 1397 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpeq_uspd",	ssecmp_128_insn,	3,	SUF_Z,	0x18,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1003 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pmulhriw",	cyrixmmx_insn,	1,	SUF_Z,	0x5D,	0,	0,	0,	CPU_Cyrix,	CPU_MMX,	0},
#line 1532 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcvtps2dq",	avx_xmm_xmm128_insn,	2,	SUF_Z,	0x66,	0x5B,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1647 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vfnmsub231ss",	vfma_ss_insn,	2,	SUF_Z,	0xBF,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1275 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"shrx",	vex_gpr_reg_rm_nds_0F_insn,	2,	SUF_Z,	0xF2,	0x38,	0xF7,	ONLY_AVX,	CPU_BMI2,	0,	0},
#line 1384 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vblendvps",	avx_sse4xmm0_insn,	2,	SUF_Z,	0x4A,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1748 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpaddw",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xFD,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1081 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pushfl",	onebyte_insn,	1,	SUF_Z,	0x9C,	0x20,	0,	NOT_64,	CPU_386,	0,	0},
#line 1621 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vfnmadd132ps",	vfma_ps_insn,	2,	SUF_Z,	0x9C,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1300 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"sqrtpd",	xmm_xmm128_insn,	2,	SUF_Z,	0x66,	0x51,	0,	0,	CPU_SSE2,	0,	0},
#line 376 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"data16",	NULL,	X86_OPERSIZE>>8,	0x10,	0,	0,	0,	0,	0,	0,	0},
#line 572 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fyl2x",	twobyte_insn,	1,	SUF_Z,	0xD9,	0xF1,	0,	0,	CPU_FPU,	0,	0},
#line 121 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"btq",	bittest_insn,	6,	SUF_Q,	0xA3,	0x04,	0,	ONLY_64,	CPU_386,	0,	0},
#line 1977 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpslld",	vpshift_insn,	8,	SUF_Z,	0xF2,	0x72,	0x06,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 532 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fsetpm",	twobyte_insn,	1,	SUF_Z,	0xDB,	0xE4,	0,	0,	CPU_286,	CPU_FPU,	CPU_Obs},
#line 2071 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"xorb",	arith_insn,	22,	SUF_B,	0x30,	0x06,	0,	0,	0,	0,	0},
#line 565 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fxam",	twobyte_insn,	1,	SUF_Z,	0xD9,	0xE5,	0,	0,	CPU_FPU,	0,	0},
#line 1533 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcvtps2pd",	avx_cvt_xmm64_insn,	3,	SUF_Z,	0x00,	0x5A,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 381 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"decl",	incdec_insn,	6,	SUF_L,	0x48,	0x01,	0,	0,	CPU_386,	0,	0},
#line 1554 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcvttsd2sil",	cvt_rx_xmm64_insn,	4,	SUF_L,	0xF2,	0x2C,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 655 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"jp",	jcc_insn,	9,	SUF_Z,	0x0A,	0,	0,	0,	0,	0,	0},
#line 2025 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vsubpd",	xmm_xmm128_256_insn,	4,	SUF_Z,	0x66,	0x5C,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1594 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vfmaddsubpd",	fma_128_256_insn,	4,	SUF_Z,	0x5D,	0,	0,	ONLY_AVX,	CPU_FMA4,	0,	0},
#line 354 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cvtsi2ssl",	cvt_xmm_rmx_insn,	6,	SUF_L,	0xF3,	0x2A,	0,	0,	CPU_386,	CPU_SSE,	0},
#line 1784 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpcomequb",	vpcom_insn,	1,	SUF_Z,	0xEC,	0x04,	0,	0,	CPU_XOP,	0,	0},
#line 1782 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpcomeqd",	vpcom_insn,	1,	SUF_Z,	0xCE,	0x04,	0,	0,	CPU_XOP,	0,	0},
#line 1628 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vfnmadd231pd",	vfma_pd_insn,	2,	SUF_Z,	0xBC,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 20 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"adcw",	arith_insn,	22,	SUF_W,	0x10,	0x02,	0,	0,	0,	0,	0},
#line 120 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"btl",	bittest_insn,	6,	SUF_L,	0xA3,	0x04,	0,	0,	CPU_386,	0,	0},
#line 701 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"lidtq",	twobytemem_insn,	1,	SUF_Q,	0x03,	0x0F,	0x01,	0,	CPU_286,	CPU_Priv,	0},
#line 1733 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vorps",	xmm_xmm128_256_insn,	4,	SUF_Z,	0x00,	0x56,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 234 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovnol",	cmovcc_insn,	3,	SUF_L,	0x01,	0,	0,	0,	CPU_686,	0,	0},
#line 714 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"lodsb",	onebyte_insn,	1,	SUF_Z,	0xAC,	0x00,	0,	0,	0,	0,	0},
#line 726 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"loopneq",	loopq_insn,	4,	SUF_Z,	0x00,	0x40,	0,	ONLY_64,	0,	0,	0},
#line 1098 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"rcrl",	shift_insn,	16,	SUF_L,	0x03,	0,	0,	0,	CPU_386,	0,	0},
#line 578 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"hnt",	NULL,	X86_SEGREG>>8,	0x2E,	0,	0,	0,	0,	0,	0,	0},
#line 1033 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"prefetchnta",	twobytemem_insn,	1,	SUF_Z,	0x00,	0x0F,	0x18,	0,	CPU_P3,	0,	0},
#line 153 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmova",	cmovcc_insn,	3,	SUF_Z,	0x07,	0,	0,	0,	CPU_686,	0,	0},
#line 510 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fnsave",	onebytemem_insn,	1,	SUF_Z,	0x06,	0xDD,	0,	0,	CPU_FPU,	0,	0},
#line 1967 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpshld",	amd_vpshift_insn,	2,	SUF_Z,	0x96,	0,	0,	0,	CPU_XOP,	0,	0},
#line 141 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cdqe",	onebyte_insn,	1,	SUF_Z,	0x98,	0x40,	0,	ONLY_64,	0,	0,	0},
#line 815 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"movsbq",	movszx_insn,	5,	SUF_B,	0xBE,	0,	0,	ONLY_64,	CPU_386,	0,	0},
#line 559 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fucom",	fcom2_insn,	2,	SUF_Z,	0xDD,	0xE0,	0,	0,	CPU_286,	CPU_FPU,	0},
#line 933 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pextrq",	pextrq_insn,	1,	SUF_Z,	0,	0,	0,	ONLY_64,	CPU_SSE41,	0,	0},
#line 579 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"hsubpd",	xmm_xmm128_insn,	2,	SUF_Z,	0x66,	0x7D,	0,	0,	CPU_SSE3,	0,	0},
#line 1031 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"por",	mmxsse2_insn,	2,	SUF_Z,	0xEB,	0,	0,	0,	CPU_MMX,	0,	0},
#line 1557 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcvttss2sil",	cvt_rx_xmm32_insn,	4,	SUF_L,	0xF3,	0x2C,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1832 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpcomneqb",	vpcom_insn,	1,	SUF_Z,	0xCC,	0x05,	0,	0,	CPU_XOP,	0,	0},
#line 537 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fstcw",	fstcw_insn,	1,	SUF_Z,	0,	0,	0,	0,	CPU_FPU,	0,	0},
#line 212 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovncw",	cmovcc_insn,	3,	SUF_W,	0x03,	0,	0,	0,	CPU_686,	0,	0},
#line 581 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"ht",	NULL,	X86_SEGREG>>8,	0x3E,	0,	0,	0,	0,	0,	0,	0},
#line 1298 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"smswq",	sldtmsw_insn,	6,	SUF_Q,	0x04,	0x01,	0,	ONLY_64,	CPU_286,	0,	0},
#line 1358 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"ud1",	twobyte_insn,	1,	SUF_Z,	0x0F,	0xB9,	0,	0,	CPU_286,	CPU_Undoc,	0},
#line 1145 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"rorx",	vex_gpr_reg_rm_0F_imm8_insn,	2,	SUF_Z,	0xF2,	0x3A,	0xF0,	ONLY_AVX,	CPU_BMI2,	0,	0},
#line 1127 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"rex64z",	NULL,	X86_REX>>8,	0x49,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 1125 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"rex64y",	NULL,	X86_REX>>8,	0x4A,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 1955 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpor",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xEB,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 673 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"ldsl",	ldes_insn,	2,	SUF_L,	0xC5,	0,	0,	NOT_64,	CPU_386,	0,	0},
#line 1006 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pmulhrwc",	cyrixmmx_insn,	1,	SUF_Z,	0x59,	0,	0,	0,	CPU_Cyrix,	CPU_MMX,	0},
#line 2014 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vroundsd",	sse4m64imm_insn,	4,	SUF_Z,	0x0B,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1283 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"sidtw",	twobytemem_insn,	1,	SUF_W,	0x01,	0x0F,	0x01,	0,	CPU_286,	CPU_Priv,	0},
#line 72 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"blcicl",	xop_gpr_reg_rm_09_insn,	2,	SUF_L,	0x01,	0x05,	0,	0,	CPU_386,	CPU_TBM,	0},
#line 496 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fldl2t",	twobyte_insn,	1,	SUF_Z,	0xD9,	0xE9,	0,	0,	CPU_FPU,	0,	0},
#line 1641 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vfnmsub213ps",	vfma_ps_insn,	2,	SUF_Z,	0xAE,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 101 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"bound",	bound_insn,	2,	SUF_Z,	0,	0,	0,	NOT_64,	CPU_186,	0,	0},
#line 1727 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vmwrite",	vmxmemwr_insn,	2,	SUF_Z,	0,	0,	0,	0,	CPU_P4,	0,	0},
#line 1150 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"roundsd",	sse4m64imm_insn,	4,	SUF_Z,	0x0B,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 1263 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"shlx",	vex_gpr_reg_rm_nds_0F_insn,	2,	SUF_Z,	0x66,	0x38,	0xF7,	ONLY_AVX,	CPU_BMI2,	0,	0},
#line 325 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmpxchgw",	cmpxchgxadd_insn,	4,	SUF_W,	0xB0,	0,	0,	0,	CPU_486,	0,	0},
#line 1378 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vandnps",	xmm_xmm128_256_insn,	4,	SUF_Z,	0x00,	0x55,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 357 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cvtss2si",	cvt_rx_xmm32_insn,	4,	SUF_Z,	0xF3,	0x2D,	0,	0,	CPU_386,	CPU_SSE,	0},
#line 490 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fldcww",	fldnstcw_insn,	1,	SUF_W,	0x05,	0,	0,	0,	CPU_FPU,	0,	0},
#line 1945 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpmovzxdq",	sse4m64_insn,	4,	SUF_Z,	0x35,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1269 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"shrdl",	shlrd_insn,	9,	SUF_L,	0xAC,	0,	0,	0,	CPU_386,	0,	0},
#line 960 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"phsubd",	ssse3_insn,	5,	SUF_Z,	0x06,	0,	0,	0,	CPU_SSSE3,	0,	0},
#line 591 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"imulq",	imul_insn,	19,	SUF_Q,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 215 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovneq",	cmovcc_insn,	3,	SUF_Q,	0x05,	0,	0,	ONLY_64,	CPU_686,	0,	0},
#line 1691 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vmovhlps",	movhllhps_insn,	2,	SUF_Z,	0x12,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 307 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmpsb",	onebyte_insn,	1,	SUF_Z,	0xA6,	0x00,	0,	0,	0,	0,	0},
#line 1578 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vfmadd213sd",	vfma_sd_insn,	2,	SUF_Z,	0xA9,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 608 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"into",	onebyte_insn,	1,	SUF_Z,	0xCE,	0,	0,	NOT_64,	0,	0,	0},
#line 1790 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpcomfalsed",	vpcom_insn,	1,	SUF_Z,	0xCE,	0x06,	0,	0,	CPU_XOP,	0,	0},
#line 889 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"paddd",	mmxsse2_insn,	2,	SUF_Z,	0xFE,	0,	0,	0,	CPU_MMX,	0,	0},
#line 859 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"negq",	f6_insn,	4,	SUF_Q,	0x03,	0,	0,	ONLY_64,	0,	0,	0},
#line 2055 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"xbegin",	tsx_xbegin_insn,	2,	SUF_Z,	0,	0,	0,	0,	CPU_386,	CPU_TSX,	0},
#line 2048 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"xabort",	tsx_xabort_insn,	1,	SUF_Z,	0,	0,	0,	0,	CPU_TSX,	0,	0},
#line 1589 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vfmaddsub132ps",	vfma_ps_insn,	2,	SUF_Z,	0x96,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1492 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpnltss",	ssecmp_32_insn,	4,	SUF_Z,	0x05,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1888 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vphadduwq",	vphaddsub_insn,	1,	SUF_Z,	0xD7,	0,	0,	0,	CPU_XOP,	0,	0},
#line 1013 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pmvlzb",	cyrixmmx_insn,	1,	SUF_Z,	0x5B,	0,	0,	0,	CPU_Cyrix,	CPU_MMX,	0},
#line 271 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovzq",	cmovcc_insn,	3,	SUF_Q,	0x04,	0,	0,	ONLY_64,	CPU_686,	0,	0},
#line 1882 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vphaddsw",	ssse3_insn,	5,	SUF_Z,	0x03,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1629 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vfnmadd231ps",	vfma_ps_insn,	2,	SUF_Z,	0xBC,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 479 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fisttpq",	fildstp_insn,	4,	SUF_Q,	0x01,	0x00,	0x01,	0,	CPU_SSE3,	0,	0},
#line 1914 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpmacsww",	vpma_insn,	1,	SUF_Z,	0x95,	0,	0,	0,	CPU_XOP,	0,	0},
#line 645 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"jne",	jcc_insn,	9,	SUF_Z,	0x05,	0,	0,	0,	0,	0,	0},
#line 1257 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"shldl",	shlrd_insn,	9,	SUF_L,	0xA4,	0,	0,	0,	CPU_386,	0,	0},
#line 152 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmc",	onebyte_insn,	1,	SUF_Z,	0xF5,	0,	0,	0,	0,	0,	0},
#line 265 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovs",	cmovcc_insn,	3,	SUF_Z,	0x08,	0,	0,	0,	CPU_686,	0,	0},
#line 793 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"movlpd",	movhlp_insn,	3,	SUF_Z,	0x66,	0x12,	0,	0,	CPU_SSE2,	0,	0},
#line 1251 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"sha256msg1",	intel_SHA256MSG1_insn,	1,	SUF_Z,	0,	0,	0,	0,	CPU_SHA,	0,	0},
#line 1323 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"subb",	arith_insn,	22,	SUF_B,	0x28,	0x05,	0,	0,	0,	0,	0},
#line 1399 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpeq_ussd",	ssecmp_64_insn,	4,	SUF_Z,	0x18,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 109 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"bsrl",	bsfr_insn,	3,	SUF_L,	0xBD,	0,	0,	0,	CPU_386,	0,	0},
#line 193 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovna",	cmovcc_insn,	3,	SUF_Z,	0x06,	0,	0,	0,	CPU_686,	0,	0},
#line 955 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pfsubr",	now3d_insn,	1,	SUF_Z,	0xAA,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 1786 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpcomequq",	vpcom_insn,	1,	SUF_Z,	0xEF,	0x04,	0,	0,	CPU_XOP,	0,	0},
#line 1912 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpmacssww",	vpma_insn,	1,	SUF_Z,	0x85,	0,	0,	0,	CPU_XOP,	0,	0},
#line 1018 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"popal",	onebyte_insn,	1,	SUF_Z,	0x61,	0x20,	0,	NOT_64,	CPU_386,	0,	0},
#line 488 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fld1",	twobyte_insn,	1,	SUF_Z,	0xD9,	0xE8,	0,	0,	CPU_FPU,	0,	0},
#line 137 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"callw",	call_insn,	30,	SUF_W,	0,	0,	0,	0,	0,	0,	0},
#line 1601 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vfmsub213ps",	vfma_ps_insn,	2,	SUF_Z,	0xAA,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 521 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fprem",	twobyte_insn,	1,	SUF_Z,	0xD9,	0xF8,	0,	0,	CPU_FPU,	0,	0},
#line 76 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"blcmsk",	xop_gpr_reg_rm_09_insn,	2,	SUF_Z,	0x02,	0x01,	0,	0,	CPU_386,	CPU_TBM,	0},
#line 1441 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpltpd",	ssecmp_128_insn,	3,	SUF_Z,	0x01,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 684 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"lesl",	ldes_insn,	2,	SUF_L,	0xC4,	0,	0,	NOT_64,	CPU_386,	0,	0},
#line 1244 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"sgdtl",	twobytemem_insn,	1,	SUF_L,	0x00,	0x0F,	0x01,	0,	CPU_286,	CPU_Priv,	0},
#line 1572 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vfmadd132pd",	vfma_pd_insn,	2,	SUF_Z,	0x98,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1355 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"tzmskq",	xop_gpr_reg_rm_09_insn,	2,	SUF_Q,	0x01,	0x04,	0,	ONLY_64,	CPU_TBM,	0,	0},
#line 1468 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpngess",	ssecmp_32_insn,	4,	SUF_Z,	0x09,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 857 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"negb",	f6_insn,	4,	SUF_B,	0x03,	0,	0,	0,	0,	0,	0},
#line 1486 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpnlt_uqps",	ssecmp_128_insn,	3,	SUF_Z,	0x15,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 2061 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"xchgw",	xchg_insn,	16,	SUF_W,	0,	0,	0,	0,	0,	0,	0},
#line 1516 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpunord_sss",	ssecmp_32_insn,	4,	SUF_Z,	0x13,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 288 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmpneqpd",	ssecmp_128_insn,	3,	SUF_Z,	0x04,	0x66,	0,	0,	CPU_SSE,	0,	0},
#line 745 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"lslw",	larlsl_insn,	6,	SUF_W,	0x03,	0,	0,	0,	CPU_286,	CPU_Prot,	0},
#line 248 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovnzw",	cmovcc_insn,	3,	SUF_W,	0x05,	0,	0,	0,	CPU_686,	0,	0},
#line 1652 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vfrczpd",	vfrc_pdps_insn,	2,	SUF_Z,	0x01,	0,	0,	0,	CPU_XOP,	0,	0},
#line 1140 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"ror",	shift_insn,	16,	SUF_Z,	0x01,	0,	0,	0,	0,	0,	0},
#line 428 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fcomps",	fcom_insn,	6,	SUF_S,	0xD8,	0x03,	0,	0,	CPU_FPU,	0,	0},
#line 1663 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vhsubps",	xmm_xmm128_256_insn,	4,	SUF_Z,	0xF2,	0x7D,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1936 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpmovsxbd",	sse4m32_insn,	4,	SUF_Z,	0x21,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1815 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpcomleq",	vpcom_insn,	1,	SUF_Z,	0xCF,	0x01,	0,	0,	CPU_XOP,	0,	0},
#line 1519 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpunordsd",	ssecmp_64_insn,	4,	SUF_Z,	0x03,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 884 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"packssdw",	mmxsse2_insn,	2,	SUF_Z,	0x6B,	0,	0,	0,	CPU_MMX,	0,	0},
#line 1375 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vaesimc",	aesimc_insn,	1,	SUF_Z,	0x38,	0xDB,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 790 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"movhps",	movhlp_insn,	3,	SUF_Z,	0x00,	0x16,	0,	0,	CPU_SSE,	0,	0},
#line 1203 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"setnab",	setcc_insn,	1,	SUF_B,	0x06,	0,	0,	0,	CPU_386,	0,	0},
#line 2043 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"word",	NULL,	X86_OPERSIZE>>8,	0x10,	0,	0,	0,	0,	0,	0,	0},
#line 1709 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vmovshdup",	avx_xmm_xmm128_insn,	2,	SUF_Z,	0xF3,	0x16,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1540 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcvtsi2sdl",	cvt_xmm_rmx_insn,	6,	SUF_L,	0xF2,	0x2A,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 948 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pfpnacc",	now3d_insn,	1,	SUF_Z,	0x8E,	0,	0,	0,	CPU_3DNow,	CPU_Athlon,	0},
#line 881 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pabsb",	ssse3_insn,	5,	SUF_Z,	0x1C,	0,	0,	0,	CPU_SSSE3,	0,	0},
#line 1757 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpbroadcastb",	vpbroadcastb_avx2_insn,	4,	SUF_Z,	0,	0,	0,	ONLY_AVX,	CPU_AVX2,	0,	0},
#line 358 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cvtss2sil",	cvt_rx_xmm32_insn,	4,	SUF_L,	0xF3,	0x2D,	0,	0,	CPU_386,	CPU_SSE,	0},
#line 788 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"movhlps",	movhllhps_insn,	2,	SUF_Z,	0x12,	0,	0,	0,	CPU_SSE,	0,	0},
#line 520 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fpatan",	twobyte_insn,	1,	SUF_Z,	0xD9,	0xF3,	0,	0,	CPU_FPU,	0,	0},
#line 1065 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"psubw",	mmxsse2_insn,	2,	SUF_Z,	0xF9,	0,	0,	0,	CPU_MMX,	0,	0},
#line 315 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmpunordsd",	ssecmp_64_insn,	4,	SUF_Z,	0x03,	0xF2,	0,	0,	CPU_SSE2,	0,	0},
#line 1932 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpminuw",	ssse3_insn,	5,	SUF_Z,	0x3A,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 982 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pminsd",	sse4_insn,	2,	SUF_Z,	0x39,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 135 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"calll",	call_insn,	30,	SUF_L,	0,	0,	0,	0,	CPU_386,	0,	0},
#line 223 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovngq",	cmovcc_insn,	3,	SUF_Q,	0x0E,	0,	0,	ONLY_64,	CPU_686,	0,	0},
#line 321 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmpxchg8bq",	cmpxchg8b_insn,	1,	SUF_Q,	0,	0,	0,	0,	CPU_586,	0,	0},
#line 943 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pfcmpgt",	now3d_insn,	1,	SUF_Z,	0xA0,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 1686 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vmovaps",	movau_insn,	6,	SUF_Z,	0x00,	0x28,	0x01,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 724 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"loopne",	loop_insn,	8,	SUF_Z,	0x00,	0,	0,	0,	0,	0,	0},
#line 566 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fxch",	fxch_insn,	4,	SUF_Z,	0,	0,	0,	0,	CPU_FPU,	0,	0},
#line 802 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"movntdqa",	movntdqa_insn,	2,	SUF_Z,	0,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 2002 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpunpckhdq",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0x6A,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 702 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"lidtw",	twobytemem_insn,	1,	SUF_W,	0x03,	0x0F,	0x01,	0,	CPU_286,	CPU_Priv,	0},
#line 1838 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpcomnequw",	vpcom_insn,	1,	SUF_Z,	0xED,	0x05,	0,	0,	CPU_XOP,	0,	0},
#line 313 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmpunordpd",	ssecmp_128_insn,	3,	SUF_Z,	0x03,	0x66,	0,	0,	CPU_SSE,	0,	0},
#line 517 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fnstenvs",	onebytemem_insn,	1,	SUF_S,	0x06,	0xD9,	0,	0,	CPU_FPU,	0,	0},
#line 1423 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpgt_oqsd",	ssecmp_64_insn,	4,	SUF_Z,	0x1E,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1855 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpcomud",	vpcom_imm_insn,	1,	SUF_Z,	0xEE,	0,	0,	0,	CPU_XOP,	0,	0},
#line 1315 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"stosl",	onebyte_insn,	1,	SUF_Z,	0xAB,	0x20,	0,	0,	CPU_386,	0,	0},
#line 1479 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpnle_uqsd",	ssecmp_64_insn,	4,	SUF_Z,	0x16,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 465 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fimuls",	fiarith_insn,	2,	SUF_S,	0x01,	0xDA,	0,	0,	CPU_FPU,	0,	0},
#line 1562 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vdivss",	xmm_xmm32_insn,	4,	SUF_Z,	0xF3,	0x5E,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 424 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fcoml",	fcom_insn,	6,	SUF_L,	0xD0,	0x02,	0,	0,	CPU_FPU,	0,	0},
#line 1053 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"psrld",	pshift_insn,	4,	SUF_Z,	0xD2,	0x72,	0x02,	0,	CPU_MMX,	0,	0},
#line 1595 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vfmaddsubps",	fma_128_256_insn,	4,	SUF_Z,	0x5C,	0,	0,	ONLY_AVX,	CPU_FMA4,	0,	0},
#line 1197 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"setgeb",	setcc_insn,	1,	SUF_B,	0x0D,	0,	0,	0,	CPU_386,	0,	0},
#line 671 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"ldmxcsr",	ldstmxcsr_insn,	1,	SUF_Z,	0x02,	0,	0,	0,	CPU_SSE,	0,	0},
#line 1551 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcvttpd2dqy",	avx_cvt_xmm128_y_insn,	1,	SUF_Z,	0x66,	0xE6,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1639 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vfnmsub132ss",	vfma_ss_insn,	2,	SUF_Z,	0x9F,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 504 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fmull",	farith_insn,	7,	SUF_L,	0xC8,	0xC8,	0x01,	0,	CPU_FPU,	0,	0},
#line 1792 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpcomfalseub",	vpcom_insn,	1,	SUF_Z,	0xEC,	0x06,	0,	0,	CPU_XOP,	0,	0},
#line 1183 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"setab",	setcc_insn,	1,	SUF_B,	0x07,	0,	0,	0,	CPU_386,	0,	0},
#line 2024 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vstmxcsr",	ldstmxcsr_insn,	1,	SUF_Z,	0x03,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1342 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"t1mskcl",	xop_gpr_reg_rm_09_insn,	2,	SUF_L,	0x01,	0x07,	0,	0,	CPU_386,	CPU_TBM,	0},
#line 1721 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vmrun",	svm_rax_insn,	2,	SUF_Z,	0xD8,	0,	0,	0,	CPU_SVM,	0,	0},
#line 52 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"andnl",	vex_gpr_reg_nds_rm_0F_insn,	2,	SUF_L,	0x00,	0x38,	0xF2,	ONLY_AVX,	CPU_BMI1,	0,	0},
#line 1537 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcvtsd2siq",	cvt_rx_xmm64_insn,	4,	SUF_Q,	0xF2,	0x2D,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1349 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"tzcnt",	cnt_insn,	3,	SUF_Z,	0xBC,	0,	0,	0,	CPU_BMI1,	0,	0},
#line 577 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"hlt",	onebyte_insn,	1,	SUF_Z,	0xF4,	0,	0,	0,	CPU_Priv,	0,	0},
#line 1393 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpeq_uqpd",	ssecmp_128_insn,	3,	SUF_Z,	0x08,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1630 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vfnmadd231sd",	vfma_sd_insn,	2,	SUF_Z,	0xBD,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1881 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vphadddq",	vphaddsub_insn,	1,	SUF_Z,	0xCB,	0,	0,	0,	CPU_XOP,	0,	0},
#line 434 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fdivp",	farithp_insn,	3,	SUF_Z,	0xF0,	0,	0,	0,	CPU_FPU,	0,	0},
#line 776 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"movapd",	movau_insn,	6,	SUF_Z,	0x66,	0x28,	0x01,	0,	CPU_SSE2,	0,	0},
#line 1941 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpmovsxwq",	sse4m32_insn,	4,	SUF_Z,	0x24,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 972 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pmaddubsw",	ssse3_insn,	5,	SUF_Z,	0x04,	0,	0,	0,	CPU_SSSE3,	0,	0},
#line 511 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fnsavel",	onebytemem_insn,	1,	SUF_L,	0x06,	0xDD,	0,	0,	CPU_FPU,	0,	0},
#line 316 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmpunordss",	ssecmp_32_insn,	4,	SUF_Z,	0x03,	0xF3,	0,	0,	CPU_SSE,	0,	0},
#line 1831 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpcomneq",	vpcom_insn,	1,	SUF_Z,	0xCF,	0x05,	0,	0,	CPU_XOP,	0,	0},
#line 442 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"ffreep",	ffree_insn,	1,	SUF_Z,	0xDF,	0,	0,	0,	CPU_686,	CPU_FPU,	CPU_Undoc},
#line 445 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fiadds",	fiarith_insn,	2,	SUF_S,	0x00,	0xDA,	0,	0,	CPU_FPU,	0,	0},
#line 877 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"outsb",	onebyte_insn,	1,	SUF_Z,	0x6E,	0x00,	0,	0,	0,	0,	0},
#line 1061 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"psubsiw",	cyrixmmx_insn,	1,	SUF_Z,	0x55,	0,	0,	0,	CPU_Cyrix,	CPU_MMX,	0},
#line 349 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cvtsd2ss",	xmm_xmm64_insn,	4,	SUF_Z,	0xF2,	0x5A,	0,	0,	CPU_SSE2,	0,	0},
#line 1822 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpcomltd",	vpcom_insn,	1,	SUF_Z,	0xCE,	0x00,	0,	0,	CPU_XOP,	0,	0},
#line 1343 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"t1mskcq",	xop_gpr_reg_rm_09_insn,	2,	SUF_Q,	0x01,	0x07,	0,	ONLY_64,	CPU_TBM,	0,	0},
#line 1103 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"rdmsr",	twobyte_insn,	1,	SUF_Z,	0x0F,	0x32,	0,	0,	CPU_586,	CPU_Priv,	0},
#line 549 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fstsww",	fstsw_insn,	2,	SUF_W,	0,	0,	0,	0,	CPU_FPU,	0,	0},
#line 1367 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vaddsd",	xmm_xmm64_insn,	4,	SUF_Z,	0xF2,	0x58,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1973 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpshuflw",	xmm_xmm128_imm_256avx2_insn,	2,	SUF_Z,	0xF2,	0x70,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 707 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"lldt",	prot286_insn,	1,	SUF_Z,	0x02,	0x00,	0,	0,	CPU_286,	CPU_Priv,	CPU_Prot},
#line 320 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmpxchg8b",	cmpxchg8b_insn,	1,	SUF_Z,	0,	0,	0,	0,	CPU_586,	0,	0},
#line 692 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"lgdtl",	twobytemem_insn,	1,	SUF_L,	0x02,	0x0F,	0x01,	0,	CPU_286,	CPU_Priv,	0},
#line 1316 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"stosq",	onebyte_insn,	1,	SUF_Z,	0xAB,	0x40,	0,	ONLY_64,	0,	0,	0},
#line 1672 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vmaxpd",	xmm_xmm128_256_insn,	4,	SUF_Z,	0x66,	0x5F,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1863 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpermilps",	vpermil_insn,	4,	SUF_Z,	0x04,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 396 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"emms",	twobyte_insn,	1,	SUF_Z,	0x0F,	0x77,	0,	0,	CPU_MMX,	0,	0},
#line 84 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"blendvpd",	sse4xmm0_insn,	2,	SUF_Z,	0x15,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 413 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fcmovb",	fcmovcc_insn,	1,	SUF_Z,	0xDA,	0xC0,	0,	0,	CPU_686,	CPU_FPU,	0},
#line 22 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"adcxl",	vex_gpr_ndd_rm_0F38_insn,	2,	SUF_L,	0x66,	0xF6,	0,	0,	CPU_ADX,	0,	0},
#line 1448 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpneq_oqss",	ssecmp_32_insn,	4,	SUF_Z,	0x0C,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 362 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cvttps2dq",	xmm_xmm128_insn,	2,	SUF_Z,	0xF3,	0x5B,	0,	0,	CPU_SSE2,	0,	0},
#line 497 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fldlg2",	twobyte_insn,	1,	SUF_Z,	0xD9,	0xEC,	0,	0,	CPU_FPU,	0,	0},
#line 1886 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vphaddudq",	vphaddsub_insn,	1,	SUF_Z,	0xDB,	0,	0,	0,	CPU_XOP,	0,	0},
#line 178 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovge",	cmovcc_insn,	3,	SUF_Z,	0x0D,	0,	0,	0,	CPU_686,	0,	0},
#line 641 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"jnae",	jcc_insn,	9,	SUF_Z,	0x02,	0,	0,	0,	0,	0,	0},
#line 1175 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"sbbl",	arith_insn,	22,	SUF_L,	0x18,	0x03,	0,	0,	CPU_386,	0,	0},
#line 1875 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpgatherqd",	gather_32x_32y_128_insn,	2,	SUF_Z,	0x91,	0,	0,	ONLY_AVX,	CPU_AVX2,	0,	0},
#line 1190 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"setc",	setcc_insn,	1,	SUF_Z,	0x02,	0,	0,	0,	CPU_386,	0,	0},
#line 1467 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpngesd",	ssecmp_64_insn,	4,	SUF_Z,	0x09,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1801 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpcomgeud",	vpcom_insn,	1,	SUF_Z,	0xEE,	0x03,	0,	0,	CPU_XOP,	0,	0},
#line 1998 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpsubusw",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xD9,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 772 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"movabsb",	movabs_insn,	9,	SUF_B,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 1172 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"sarxq",	vex_gpr_reg_rm_nds_0F_insn,	2,	SUF_Q,	0xF3,	0x38,	0xF7,	ONLY_AVX|ONLY_64,	CPU_BMI2,	0,	0},
#line 670 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"lddqu",	lddqu_insn,	2,	SUF_Z,	0,	0,	0,	0,	CPU_SSE3,	0,	0},
#line 513 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fnstcw",	fldnstcw_insn,	1,	SUF_Z,	0x07,	0,	0,	0,	CPU_FPU,	0,	0},
#line 786 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"movdqa",	movau_insn,	6,	SUF_Z,	0x66,	0x6F,	0x10,	0,	CPU_SSE2,	0,	0},
#line 285 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmpltps",	ssecmp_128_insn,	3,	SUF_Z,	0x01,	0,	0,	0,	CPU_SSE,	0,	0},
#line 1902 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpinsrw",	pinsrw_insn,	9,	SUF_Z,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 529 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fsavel",	twobytemem_insn,	1,	SUF_L,	0x06,	0x9B,	0xDD,	0,	CPU_FPU,	0,	0},
#line 1615 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vfmsubaddps",	fma_128_256_insn,	4,	SUF_Z,	0x5E,	0,	0,	ONLY_AVX,	CPU_FMA4,	0,	0},
#line 1575 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vfmadd132ss",	vfma_ss_insn,	2,	SUF_Z,	0x99,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 964 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pi2fw",	now3d_insn,	1,	SUF_Z,	0x0C,	0,	0,	0,	CPU_3DNow,	CPU_Athlon,	0},
#line 1303 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"sqrtss",	xmm_xmm32_insn,	4,	SUF_Z,	0xF3,	0x51,	0,	0,	CPU_SSE,	0,	0},
#line 390 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"divsd",	xmm_xmm64_insn,	4,	SUF_Z,	0xF2,	0x5E,	0,	0,	CPU_SSE2,	0,	0},
#line 1414 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpge_oqps",	ssecmp_128_insn,	3,	SUF_Z,	0x1D,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 618 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"invvpidq",	eptvpid_insn,	2,	SUF_Q,	0x01,	0,	0,	ONLY_64,	CPU_EPTVPID,	0,	0},
#line 1524 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcvtdq2ps",	avx_xmm_xmm128_insn,	2,	SUF_Z,	0x00,	0x5B,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 994 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pmovsxwd",	sse4m64_insn,	4,	SUF_Z,	0x23,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 570 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fxsaveq",	twobytemem_insn,	1,	SUF_Q,	0x00,	0x0F,	0xAE,	0,	CPU_686,	CPU_FPU,	0},
#line 147 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cli",	onebyte_insn,	1,	SUF_Z,	0xFA,	0,	0,	0,	0,	0,	0},
#line 80 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"blcsl",	xop_gpr_reg_rm_09_insn,	2,	SUF_L,	0x01,	0x03,	0,	0,	CPU_386,	CPU_TBM,	0},
#line 620 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"iret",	onebyte_insn,	1,	SUF_Z,	0xCF,	0,	0,	0,	0,	0,	0},
#line 326 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"comisd",	xmm_xmm64_insn,	4,	SUF_Z,	0x66,	0x2F,	0,	0,	CPU_SSE2,	0,	0},
#line 941 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pfcmpeq",	now3d_insn,	1,	SUF_Z,	0xB0,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 247 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovnzq",	cmovcc_insn,	3,	SUF_Q,	0x05,	0,	0,	ONLY_64,	CPU_686,	0,	0},
#line 706 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"ljmpw",	ljmpcall_insn,	7,	SUF_W,	0x05,	0xEA,	0,	0,	0,	0,	0},
#line 276 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmpeqps",	ssecmp_128_insn,	3,	SUF_Z,	0x00,	0,	0,	0,	CPU_SSE,	0,	0},
#line 868 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"orb",	arith_insn,	22,	SUF_B,	0x08,	0x01,	0,	0,	0,	0,	0},
#line 475 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fists",	fiarith_insn,	2,	SUF_S,	0x02,	0xDB,	0,	0,	CPU_FPU,	0,	0},
#line 270 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovzl",	cmovcc_insn,	3,	SUF_L,	0x04,	0,	0,	0,	CPU_686,	0,	0},
#line 292 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmpnlepd",	ssecmp_128_insn,	3,	SUF_Z,	0x06,	0x66,	0,	0,	CPU_SSE,	0,	0},
#line 1910 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpmacssdql",	vpma_insn,	1,	SUF_Z,	0x87,	0,	0,	0,	CPU_XOP,	0,	0},
#line 369 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cvttss2siq",	cvt_rx_xmm32_insn,	4,	SUF_Q,	0xF3,	0x2C,	0,	ONLY_64,	CPU_SSE,	0,	0},
#line 1795 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpcomfalseuw",	vpcom_insn,	1,	SUF_Z,	0xED,	0x06,	0,	0,	CPU_XOP,	0,	0},
#line 1939 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpmovsxdq",	sse4m64_insn,	4,	SUF_Z,	0x25,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 156 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovaeq",	cmovcc_insn,	3,	SUF_Q,	0x03,	0,	0,	ONLY_64,	CPU_686,	0,	0},
#line 385 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"divb",	div_insn,	8,	SUF_B,	0x06,	0,	0,	0,	0,	0,	0},
#line 449 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"ficompl",	fiarith_insn,	2,	SUF_L,	0x03,	0xDA,	0,	0,	CPU_FPU,	0,	0},
#line 419 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fcmovnu",	fcmovcc_insn,	1,	SUF_Z,	0xDB,	0xD8,	0,	0,	CPU_686,	CPU_FPU,	0},
#line 1687 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vmovd",	vmovd_insn,	2,	SUF_Z,	0,	0,	0,	ONLY_AVX,	CPU_386,	CPU_AVX,	0},
#line 414 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fcmovbe",	fcmovcc_insn,	1,	SUF_Z,	0xDA,	0xD0,	0,	0,	CPU_686,	CPU_FPU,	0},
#line 872 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"orq",	arith_insn,	22,	SUF_Q,	0x08,	0x01,	0,	ONLY_64,	0,	0,	0},
#line 1023 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"popcntw",	cnt_insn,	3,	SUF_W,	0xB8,	0,	0,	0,	CPU_SSE42,	0,	0},
#line 444 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fiaddl",	fiarith_insn,	2,	SUF_L,	0x00,	0xDA,	0,	0,	CPU_FPU,	0,	0},
#line 957 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"phaddsw",	ssse3_insn,	5,	SUF_Z,	0x03,	0,	0,	0,	CPU_SSSE3,	0,	0},
#line 1828 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpcomltw",	vpcom_insn,	1,	SUF_Z,	0xCD,	0x00,	0,	0,	CPU_XOP,	0,	0},
#line 397 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"enter",	enter_insn,	3,	SUF_Z,	0,	0,	0,	0,	CPU_186,	0,	0},
#line 2044 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"wrfsbase",	fs_gs_base_insn,	2,	SUF_Z,	0x02,	0,	0,	ONLY_64,	CPU_FSGSBASE,	0,	0},
#line 1612 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vfmsubadd231pd",	vfma_pd_insn,	2,	SUF_Z,	0xB7,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 883 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pabsw",	ssse3_insn,	5,	SUF_Z,	0x1D,	0,	0,	0,	CPU_SSSE3,	0,	0},
#line 713 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"lock",	NULL,	X86_LOCKREP>>8,	0xF0,	0,	0,	0,	0,	0,	0,	0},
#line 600 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"inl",	in_insn,	12,	SUF_L,	0,	0,	0,	0,	CPU_386,	0,	0},
#line 334 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"crc32q",	crc32_insn,	5,	SUF_Q,	0,	0,	0,	ONLY_64,	CPU_SSE42,	0,	0},
#line 558 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"ftst",	twobyte_insn,	1,	SUF_Z,	0xD9,	0xE4,	0,	0,	CPU_FPU,	0,	0},
#line 208 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovnbw",	cmovcc_insn,	3,	SUF_W,	0x03,	0,	0,	0,	CPU_686,	0,	0},
#line 840 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"movzxw",	movszx_insn,	5,	SUF_W,	0xB6,	0,	0,	0,	CPU_386,	0,	0},
#line 1940 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpmovsxwd",	sse4m64_insn,	4,	SUF_Z,	0x23,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 54 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"andnps",	xmm_xmm128_insn,	2,	SUF_Z,	0x00,	0x55,	0,	0,	CPU_SSE,	0,	0},
#line 1198 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"setl",	setcc_insn,	1,	SUF_Z,	0x0C,	0,	0,	0,	CPU_386,	0,	0},
#line 1036 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"prefetcht2",	twobytemem_insn,	1,	SUF_Z,	0x03,	0x0F,	0x18,	0,	CPU_P3,	0,	0},
#line 1943 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpmovzxbq",	sse4m16_insn,	4,	SUF_Z,	0x32,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1924 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpmaxub",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xDE,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1241 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"setzb",	setcc_insn,	1,	SUF_B,	0x04,	0,	0,	0,	CPU_386,	0,	0},
#line 2072 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"xorl",	arith_insn,	22,	SUF_L,	0x30,	0x06,	0,	0,	CPU_386,	0,	0},
#line 370 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cwd",	onebyte_insn,	1,	SUF_Z,	0x99,	0x10,	0,	0,	0,	0,	0},
#line 1052 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"psraw",	pshift_insn,	4,	SUF_Z,	0xE1,	0x71,	0x04,	0,	CPU_MMX,	0,	0},
#line 1608 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vfmsubadd132pd",	vfma_pd_insn,	2,	SUF_Z,	0x97,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 130 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"btw",	bittest_insn,	6,	SUF_W,	0xA3,	0x04,	0,	0,	CPU_386,	0,	0},
#line 1001 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pmovzxwq",	sse4m32_insn,	4,	SUF_Z,	0x34,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 1769 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpcmpeqq",	ssse3_insn,	5,	SUF_Z,	0x29,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 601 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"insb",	onebyte_insn,	1,	SUF_Z,	0x6C,	0x00,	0,	0,	0,	0,	0},
#line 1956 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpperm",	vpperm_insn,	2,	SUF_Z,	0,	0,	0,	0,	CPU_XOP,	0,	0},
#line 415 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fcmove",	fcmovcc_insn,	1,	SUF_Z,	0xDA,	0xC8,	0,	0,	CPU_686,	CPU_FPU,	0},
#line 1853 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpcomtruew",	vpcom_insn,	1,	SUF_Z,	0xCD,	0x07,	0,	0,	CPU_XOP,	0,	0},
#line 2026 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vsubps",	xmm_xmm128_256_insn,	4,	SUF_Z,	0x00,	0x5C,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 224 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovngw",	cmovcc_insn,	3,	SUF_W,	0x0E,	0,	0,	0,	CPU_686,	0,	0},
#line 1512 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmptruess",	ssecmp_32_insn,	4,	SUF_Z,	0x0F,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1880 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vphaddd",	ssse3_insn,	5,	SUF_Z,	0x02,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 263 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovpq",	cmovcc_insn,	3,	SUF_Q,	0x0A,	0,	0,	ONLY_64,	CPU_686,	0,	0},
#line 2010 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vrcpps",	avx_xmm_xmm128_insn,	2,	SUF_Z,	0x00,	0x53,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1499 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpordsd",	ssecmp_64_insn,	4,	SUF_Z,	0x07,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1919 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpmaskmovd",	vmaskmov_insn,	4,	SUF_Z,	0x8C,	0,	0,	ONLY_AVX,	CPU_AVX2,	0,	0},
#line 1632 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vfnmaddpd",	fma_128_256_insn,	4,	SUF_Z,	0x79,	0,	0,	ONLY_AVX,	CPU_FMA4,	0,	0},
#line 201 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovnb",	cmovcc_insn,	3,	SUF_Z,	0x03,	0,	0,	0,	CPU_686,	0,	0},
#line 1046 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"psignw",	ssse3_insn,	5,	SUF_Z,	0x09,	0,	0,	0,	CPU_SSSE3,	0,	0},
#line 218 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovnge",	cmovcc_insn,	3,	SUF_Z,	0x0C,	0,	0,	0,	CPU_686,	0,	0},
#line 342 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cvtpi2ps",	cvt_xmm_mm_ps_insn,	1,	SUF_Z,	0x2A,	0,	0,	0,	CPU_SSE,	0,	0},
#line 232 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovnlw",	cmovcc_insn,	3,	SUF_W,	0x0D,	0,	0,	0,	CPU_686,	0,	0},
#line 1678 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vminpd",	xmm_xmm128_256_insn,	4,	SUF_Z,	0x66,	0x5D,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1944 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpmovzxbw",	sse4m64_insn,	4,	SUF_Z,	0x30,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 2050 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"xadd",	cmpxchgxadd_insn,	4,	SUF_Z,	0xC0,	0,	0,	0,	CPU_486,	0,	0},
#line 1650 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vfnmsubsd",	fma_128_m64_insn,	3,	SUF_Z,	0x7F,	0,	0,	ONLY_AVX,	CPU_FMA4,	0,	0},
#line 1024 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"popf",	onebyte_insn,	1,	SUF_Z,	0x9D,	0x00,	0x40,	0,	0,	0,	0},
#line 741 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"lretw",	retnf_insn,	6,	SUF_W,	0xCA,	0x10,	0,	0,	0,	0,	0},
#line 104 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"bsf",	bsfr_insn,	3,	SUF_Z,	0xBC,	0,	0,	0,	CPU_386,	0,	0},
#line 160 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovaw",	cmovcc_insn,	3,	SUF_W,	0x07,	0,	0,	0,	CPU_686,	0,	0},
#line 1055 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"psrlq",	pshift_insn,	4,	SUF_Z,	0xD3,	0x73,	0x02,	0,	CPU_MMX,	0,	0},
#line 124 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"btrq",	bittest_insn,	6,	SUF_Q,	0xB3,	0x06,	0,	ONLY_64,	CPU_386,	0,	0},
#line 198 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovnal",	cmovcc_insn,	3,	SUF_L,	0x06,	0,	0,	0,	CPU_686,	0,	0},
#line 125 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"btrw",	bittest_insn,	6,	SUF_W,	0xB3,	0x06,	0,	0,	CPU_386,	0,	0},
#line 199 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovnaq",	cmovcc_insn,	3,	SUF_Q,	0x06,	0,	0,	ONLY_64,	CPU_686,	0,	0},
#line 361 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cvttpd2pi",	cvt_mm_xmm_insn,	1,	SUF_Z,	0x66,	0x2C,	0,	0,	CPU_SSE2,	0,	0},
#line 1640 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vfnmsub213pd",	vfma_pd_insn,	2,	SUF_Z,	0xAE,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 148 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cltd",	onebyte_insn,	1,	SUF_Z,	0x99,	0x20,	0,	0,	CPU_386,	0,	0},
#line 961 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"phsubsw",	ssse3_insn,	5,	SUF_Z,	0x07,	0,	0,	0,	CPU_SSSE3,	0,	0},
#line 1109 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"rdtscp",	threebyte_insn,	1,	SUF_Z,	0x0F,	0x01,	0xF9,	0,	CPU_686,	CPU_AMD,	CPU_Priv},
#line 1335 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"syscall",	twobyte_insn,	1,	SUF_Z,	0x0F,	0x05,	0,	0,	CPU_686,	CPU_AMD,	0},
#line 1169 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"sarw",	shift_insn,	16,	SUF_W,	0x07,	0,	0,	0,	0,	0,	0},
#line 1618 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vfmsubsd",	fma_128_m64_insn,	3,	SUF_Z,	0x6F,	0,	0,	ONLY_AVX,	CPU_FMA4,	0,	0},
#line 117 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"btcl",	bittest_insn,	6,	SUF_L,	0xBB,	0x07,	0,	0,	CPU_386,	0,	0},
#line 1136 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"rolb",	shift_insn,	16,	SUF_B,	0x00,	0,	0,	0,	0,	0,	0},
#line 940 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pfadd",	now3d_insn,	1,	SUF_Z,	0x9E,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 2040 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vzeroupper",	vzero_insn,	1,	SUF_Z,	0xC0,	0,	0,	0,	CPU_AVX,	0,	0},
#line 1929 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpminsw",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xEA,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 653 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"jnz",	jcc_insn,	9,	SUF_Z,	0x05,	0,	0,	0,	0,	0,	0},
#line 1346 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"testl",	test_insn,	20,	SUF_L,	0,	0,	0,	0,	CPU_386,	0,	0},
#line 1675 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vmaxss",	xmm_xmm32_insn,	4,	SUF_Z,	0xF3,	0x5F,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 495 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fldl2e",	twobyte_insn,	1,	SUF_Z,	0xD9,	0xEA,	0,	0,	CPU_FPU,	0,	0},
#line 736 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"loopzq",	loopq_insn,	4,	SUF_Z,	0x01,	0x40,	0,	ONLY_64,	0,	0,	0},
#line 389 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"divq",	div_insn,	8,	SUF_Q,	0x06,	0,	0,	ONLY_64,	0,	0,	0},
#line 875 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"outb",	out_insn,	12,	SUF_B,	0,	0,	0,	0,	0,	0,	0},
#line 1227 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"setnsb",	setcc_insn,	1,	SUF_B,	0x09,	0,	0,	0,	CPU_386,	0,	0},
#line 1452 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpneq_osss",	ssecmp_32_insn,	4,	SUF_Z,	0x1C,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 885 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"packsswb",	mmxsse2_insn,	2,	SUF_Z,	0x63,	0,	0,	0,	CPU_MMX,	0,	0},
#line 1243 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"sgdt",	twobytemem_insn,	1,	SUF_Z,	0x00,	0x0F,	0x01,	0,	CPU_286,	CPU_Priv,	0},
#line 1405 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpfalse_ospd",	ssecmp_128_insn,	3,	SUF_Z,	0x1B,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 163 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovbel",	cmovcc_insn,	3,	SUF_L,	0x06,	0,	0,	0,	CPU_686,	0,	0},
#line 2056 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"xbts",	xbts_insn,	2,	SUF_Z,	0,	0,	0,	0,	CPU_386,	CPU_Obs,	CPU_Undoc},
#line 1992 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpsubb",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xF8,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 364 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cvttsd2si",	cvt_rx_xmm64_insn,	4,	SUF_Z,	0xF2,	0x2C,	0,	0,	CPU_SSE2,	0,	0},
#line 1789 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpcomfalseb",	vpcom_insn,	1,	SUF_Z,	0xCC,	0x06,	0,	0,	CPU_XOP,	0,	0},
#line 637 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"jmpl",	jmp_insn,	31,	SUF_L,	0,	0,	0,	0,	CPU_386,	0,	0},
#line 476 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fisttp",	fildstp_insn,	4,	SUF_Z,	0x01,	0x00,	0x01,	0,	CPU_SSE3,	0,	0},
#line 1494 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpord_sps",	ssecmp_128_insn,	3,	SUF_Z,	0x17,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 576 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"haddps",	xmm_xmm128_insn,	2,	SUF_Z,	0xF2,	0x7C,	0,	0,	CPU_SSE3,	0,	0},
#line 62 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"arplw",	arpl_insn,	1,	SUF_W,	0,	0,	0,	NOT_64,	CPU_286,	CPU_Prot,	0},
#line 1814 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpcomled",	vpcom_insn,	1,	SUF_Z,	0xCE,	0x01,	0,	0,	CPU_XOP,	0,	0},
#line 67 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"blcfill",	xop_gpr_reg_rm_09_insn,	2,	SUF_Z,	0x01,	0x01,	0,	0,	CPU_386,	CPU_TBM,	0},
#line 1409 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpfalsepd",	ssecmp_128_insn,	3,	SUF_Z,	0x0B,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1434 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpleps",	ssecmp_128_insn,	3,	SUF_Z,	0x02,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1883 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vphaddubd",	vphaddsub_insn,	1,	SUF_Z,	0xD2,	0,	0,	0,	CPU_XOP,	0,	0},
#line 855 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"mwaitx",	threebyte_insn,	1,	SUF_Z,	0x0F,	0x01,	0xFB,	0,	CPU_AMD,	0,	0},
#line 236 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovnow",	cmovcc_insn,	3,	SUF_W,	0x01,	0,	0,	0,	CPU_686,	0,	0},
#line 1354 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"tzmskl",	xop_gpr_reg_rm_09_insn,	2,	SUF_L,	0x01,	0x04,	0,	0,	CPU_386,	CPU_TBM,	0},
#line 905 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pblendvb",	sse4xmm0_insn,	2,	SUF_Z,	0x10,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 1493 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpord_spd",	ssecmp_128_insn,	3,	SUF_Z,	0x17,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1649 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vfnmsubps",	fma_128_256_insn,	4,	SUF_Z,	0x7C,	0,	0,	ONLY_AVX,	CPU_FMA4,	0,	0},
#line 306 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmpq",	arith_insn,	22,	SUF_Q,	0x38,	0x07,	0,	ONLY_64,	0,	0,	0},
#line 700 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"lidtl",	twobytemem_insn,	1,	SUF_L,	0x03,	0x0F,	0x01,	0,	CPU_286,	CPU_Priv,	0},
#line 629 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"jcxz",	jcxz_insn,	2,	SUF_Z,	0x10,	0,	0,	0,	0,	0,	0},
#line 823 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"movss",	movss_insn,	4,	SUF_Z,	0,	0,	0,	0,	CPU_SSE,	0,	0},
#line 956 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"phaddd",	ssse3_insn,	5,	SUF_Z,	0x02,	0,	0,	0,	CPU_SSSE3,	0,	0},
#line 912 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pcmpeqb",	mmxsse2_insn,	2,	SUF_Z,	0x74,	0,	0,	0,	CPU_MMX,	0,	0},
#line 165 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovbew",	cmovcc_insn,	3,	SUF_W,	0x06,	0,	0,	0,	CPU_686,	0,	0},
#line 850 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"mulw",	f6_insn,	4,	SUF_W,	0x04,	0,	0,	0,	0,	0,	0},
#line 1310 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"std",	onebyte_insn,	1,	SUF_Z,	0xFD,	0,	0,	0,	0,	0,	0},
#line 187 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovlel",	cmovcc_insn,	3,	SUF_L,	0x0E,	0,	0,	0,	CPU_686,	0,	0},
#line 1255 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"shlb",	shift_insn,	16,	SUF_B,	0x04,	0,	0,	0,	0,	0,	0},
#line 526 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"frstorl",	onebytemem_insn,	1,	SUF_L,	0x04,	0xDD,	0,	0,	CPU_FPU,	0,	0},
#line 367 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cvttss2si",	cvt_rx_xmm32_insn,	4,	SUF_Z,	0xF3,	0x2C,	0,	0,	CPU_386,	CPU_SSE,	0},
#line 1505 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmptrue_uspd",	ssecmp_128_insn,	3,	SUF_Z,	0x1F,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 38 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"adox",	vex_gpr_ndd_rm_0F38_insn,	2,	SUF_Z,	0xF3,	0xF6,	0,	0,	CPU_ADX,	0,	0},
#line 102 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"boundl",	bound_insn,	2,	SUF_L,	0,	0,	0,	NOT_64,	CPU_386,	0,	0},
#line 1951 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpmulhw",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xE5,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 697 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"lgsq",	lfgss_insn,	3,	SUF_Q,	0xB5,	0,	0,	ONLY_64,	CPU_386,	0,	0},
#line 501 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fldt",	fldstpt_insn,	1,	SUF_Z,	0x05,	0,	0,	0,	CPU_FPU,	0,	0},
#line 1340 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"sysretq",	twobyte_insn,	1,	SUF_Q,	0x0F,	0x07,	0,	0,	CPU_686,	CPU_AMD,	CPU_Priv},
#line 584 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"idivb",	div_insn,	8,	SUF_B,	0x07,	0,	0,	0,	0,	0,	0},
#line 443 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fiadd",	fiarith_insn,	2,	SUF_Z,	0x00,	0xDA,	0,	0,	CPU_FPU,	0,	0},
#line 806 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"movntpd",	movnt_insn,	2,	SUF_Z,	0x66,	0x2B,	0,	0,	CPU_SSE2,	0,	0},
#line 280 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmplepd",	ssecmp_128_insn,	3,	SUF_Z,	0x02,	0x66,	0,	0,	CPU_SSE,	0,	0},
#line 2004 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpunpckhwd",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0x69,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1643 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vfnmsub213ss",	vfma_ss_insn,	2,	SUF_Z,	0xAF,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 106 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"bsfq",	bsfr_insn,	3,	SUF_Q,	0xBC,	0,	0,	ONLY_64,	CPU_386,	0,	0},
#line 1842 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpcomneuq",	vpcom_insn,	1,	SUF_Z,	0xEF,	0x05,	0,	0,	CPU_XOP,	0,	0},
#line 422 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fcomi",	fcom2_insn,	2,	SUF_Z,	0xDB,	0xF0,	0,	0,	CPU_686,	CPU_FPU,	0},
#line 864 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"notl",	f6_insn,	4,	SUF_L,	0x02,	0,	0,	0,	CPU_386,	0,	0},
#line 2052 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"xaddl",	cmpxchgxadd_insn,	4,	SUF_L,	0xC0,	0,	0,	0,	CPU_486,	0,	0},
#line 1723 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vmulpd",	xmm_xmm128_256_insn,	4,	SUF_Z,	0x66,	0x59,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 111 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"bsrw",	bsfr_insn,	3,	SUF_W,	0xBD,	0,	0,	0,	CPU_386,	0,	0},
#line 1043 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pshufw",	pshufw_insn,	1,	SUF_Z,	0,	0,	0,	0,	CPU_MMX,	CPU_P3,	0},
#line 1281 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"sidtl",	twobytemem_insn,	1,	SUF_L,	0x01,	0x0F,	0x01,	0,	CPU_286,	CPU_Priv,	0},
#line 1200 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"setle",	setcc_insn,	1,	SUF_Z,	0x0E,	0,	0,	0,	CPU_386,	0,	0},
#line 1703 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vmovntdq",	movnt_insn,	2,	SUF_Z,	0x66,	0xE7,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 375 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"das",	onebyte_insn,	1,	SUF_Z,	0x2F,	0,	0,	NOT_64,	0,	0,	0},
#line 866 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"notw",	f6_insn,	4,	SUF_W,	0x02,	0,	0,	0,	0,	0,	0},
#line 32 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"addr64",	NULL,	X86_ADDRSIZE>>8,	0x40,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 1011 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pmuludq",	mmxsse2_insn,	2,	SUF_Z,	0xF4,	0,	0,	0,	CPU_SSE2,	0,	0},
#line 347 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cvtsd2sil",	cvt_rx_xmm64_insn,	4,	SUF_L,	0xF2,	0x2D,	0,	0,	CPU_386,	CPU_SSE2,	0},
#line 1926 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpmaxuw",	ssse3_insn,	5,	SUF_Z,	0x3E,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1871 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpextrwl",	pextrw_insn,	7,	SUF_L,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 809 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"movntsd",	movntsd_insn,	1,	SUF_Z,	0,	0,	0,	0,	CPU_SSE4a,	0,	0},
#line 1706 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vmovntps",	movnt_insn,	2,	SUF_Z,	0x00,	0x2B,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1019 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"popaw",	onebyte_insn,	1,	SUF_Z,	0x61,	0x10,	0,	NOT_64,	CPU_186,	0,	0},
#line 451 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"ficoms",	fiarith_insn,	2,	SUF_S,	0x02,	0xDA,	0,	0,	CPU_FPU,	0,	0},
#line 782 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"movbew",	movbe_insn,	6,	SUF_W,	0,	0,	0,	0,	CPU_MOVBE,	0,	0},
#line 2062 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"xcryptcbc",	padlock_insn,	1,	SUF_Z,	0xD0,	0xF3,	0xA7,	0,	CPU_PadLock,	0,	0},
#line 371 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cwde",	onebyte_insn,	1,	SUF_Z,	0x98,	0x20,	0,	0,	CPU_386,	0,	0},
#line 1800 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpcomgeub",	vpcom_insn,	1,	SUF_Z,	0xEC,	0x03,	0,	0,	CPU_XOP,	0,	0},
#line 269 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovz",	cmovcc_insn,	3,	SUF_Z,	0x04,	0,	0,	0,	CPU_686,	0,	0},
#line 644 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"jnc",	jcc_insn,	9,	SUF_Z,	0x03,	0,	0,	0,	0,	0,	0},
#line 1122 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"rex64xy",	NULL,	X86_REX>>8,	0x4E,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 966 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pinsrd",	pinsrd_insn,	2,	SUF_Z,	0,	0,	0,	0,	CPU_386,	CPU_SSE41,	0},
#line 1381 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vblendpd",	sse4imm_256_insn,	4,	SUF_Z,	0x0D,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1586 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vfmaddsd",	fma_128_m64_insn,	3,	SUF_Z,	0x6B,	0,	0,	ONLY_AVX,	CPU_FMA4,	0,	0},
#line 188 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovleq",	cmovcc_insn,	3,	SUF_Q,	0x0E,	0,	0,	ONLY_64,	CPU_686,	0,	0},
#line 68 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"blcfilll",	xop_gpr_reg_rm_09_insn,	2,	SUF_L,	0x01,	0x01,	0,	0,	CPU_386,	CPU_TBM,	0},
#line 115 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"bt",	bittest_insn,	6,	SUF_Z,	0xA3,	0x04,	0,	0,	CPU_386,	0,	0},
#line 50 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"andl",	arith_insn,	22,	SUF_L,	0x20,	0x04,	0,	0,	CPU_386,	0,	0},
#line 261 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovpoq",	cmovcc_insn,	3,	SUF_Q,	0x0B,	0,	0,	ONLY_64,	CPU_686,	0,	0},
#line 86 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"blsfill",	xop_gpr_reg_rm_09_insn,	2,	SUF_Z,	0x01,	0x02,	0,	0,	CPU_386,	CPU_TBM,	0},
#line 384 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"div",	div_insn,	8,	SUF_Z,	0x06,	0,	0,	0,	0,	0,	0},
#line 1854 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpcomub",	vpcom_imm_insn,	1,	SUF_Z,	0xEC,	0,	0,	0,	CPU_XOP,	0,	0},
#line 258 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovpl",	cmovcc_insn,	3,	SUF_L,	0x0A,	0,	0,	0,	CPU_686,	0,	0},
#line 604 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"insl",	onebyte_insn,	1,	SUF_Z,	0x6D,	0x20,	0,	0,	CPU_386,	0,	0},
#line 359 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cvtss2siq",	cvt_rx_xmm32_insn,	4,	SUF_Q,	0xF3,	0x2D,	0,	ONLY_64,	CPU_SSE,	0,	0},
#line 1304 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"sscab",	onebyte_insn,	1,	SUF_Z,	0xAE,	0x00,	0,	0,	0,	0,	0},
#line 1445 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpneq_oqpd",	ssecmp_128_insn,	3,	SUF_Z,	0x0C,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 469 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fistl",	fiarith_insn,	2,	SUF_L,	0x02,	0xDB,	0,	0,	CPU_FPU,	0,	0},
#line 656 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"jpe",	jcc_insn,	9,	SUF_Z,	0x0A,	0,	0,	0,	0,	0,	0},
#line 969 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pinsrwl",	pinsrw_insn,	9,	SUF_L,	0,	0,	0,	0,	CPU_MMX,	CPU_P3,	0},
#line 1684 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vmmcall",	threebyte_insn,	1,	SUF_Z,	0x0F,	0x01,	0xD9,	0,	CPU_SVM,	0,	0},
#line 1741 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpaddb",	xmm_xmm128_256avx2_insn,	4,	SUF_Z,	0x66,	0xFC,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 747 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"lssl",	lfgss_insn,	3,	SUF_L,	0xB2,	0,	0,	0,	CPU_386,	0,	0},
#line 400 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"enterw",	enter_insn,	3,	SUF_W,	0,	0,	0,	0,	CPU_186,	0,	0},
#line 663 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"larl",	larlsl_insn,	6,	SUF_L,	0x02,	0,	0,	0,	CPU_286,	CPU_Prot,	0},
#line 85 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"blendvps",	sse4xmm0_insn,	2,	SUF_Z,	0x14,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 925 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pdepl",	vex_gpr_reg_nds_rm_0F_insn,	2,	SUF_L,	0xF2,	0x38,	0xF5,	ONLY_AVX,	CPU_BMI2,	0,	0},
#line 550 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fsub",	farith_insn,	7,	SUF_Z,	0xE8,	0xE0,	0x04,	0,	CPU_FPU,	0,	0},
#line 2030 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vtestps",	sse4_insn,	2,	SUF_Z,	0x0E,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1963 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpshad",	amd_vpshift_insn,	2,	SUF_Z,	0x9A,	0,	0,	0,	CPU_XOP,	0,	0},
#line 561 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fucomip",	fcom2_insn,	2,	SUF_Z,	0xDF,	0xE8,	0,	0,	CPU_686,	CPU_FPU,	0},
#line 1552 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcvttps2dq",	avx_xmm_xmm128_insn,	2,	SUF_Z,	0xF3,	0x5B,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 688 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"lfsl",	lfgss_insn,	3,	SUF_L,	0xB4,	0,	0,	0,	CPU_386,	0,	0},
#line 172 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovcw",	cmovcc_insn,	3,	SUF_W,	0x02,	0,	0,	0,	CPU_686,	0,	0},
#line 287 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmpltss",	ssecmp_32_insn,	4,	SUF_Z,	0x01,	0xF3,	0,	0,	CPU_SSE,	0,	0},
#line 1410 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpfalseps",	ssecmp_128_insn,	3,	SUF_Z,	0x0B,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 66 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"bextrq",	bextr_insn,	4,	SUF_Q,	0,	0,	0,	ONLY_AVX|ONLY_64,	CPU_BMI1,	0,	0},
#line 2033 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vunpckhpd",	xmm_xmm128_256_insn,	4,	SUF_Z,	0x66,	0x15,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 431 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fdecstp",	twobyte_insn,	1,	SUF_Z,	0xD9,	0xF6,	0,	0,	CPU_FPU,	0,	0},
#line 1348 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"testw",	test_insn,	20,	SUF_W,	0,	0,	0,	0,	0,	0,	0},
#line 744 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"lslq",	larlsl_insn,	6,	SUF_Q,	0x03,	0,	0,	ONLY_64,	CPU_286,	CPU_Prot,	0},
#line 820 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"movsldup",	xmm_xmm128_insn,	2,	SUF_Z,	0xF3,	0x12,	0,	0,	CPU_SSE3,	0,	0},
#line 1658 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vgatherqpd",	gather_64x_64y_insn,	2,	SUF_Z,	0x93,	0,	0,	ONLY_AVX,	CPU_AVX2,	0,	0},
#line 1179 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"scasl",	onebyte_insn,	1,	SUF_Z,	0xAF,	0x20,	0,	0,	CPU_386,	0,	0},
#line 931 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pextrb",	pextrb_insn,	3,	SUF_Z,	0,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 2078 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"xrstor",	twobytemem_insn,	1,	SUF_Z,	0x05,	0x0F,	0xAE,	0,	CPU_386,	CPU_XSAVE,	0},
#line 1620 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vfnmadd132pd",	vfma_pd_insn,	2,	SUF_Z,	0x9C,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 268 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovsw",	cmovcc_insn,	3,	SUF_W,	0x08,	0,	0,	0,	CPU_686,	0,	0},
#line 1818 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpcomleuq",	vpcom_insn,	1,	SUF_Z,	0xEF,	0x01,	0,	0,	CPU_XOP,	0,	0},
#line 169 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovc",	cmovcc_insn,	3,	SUF_Z,	0x02,	0,	0,	0,	CPU_686,	0,	0},
#line 764 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"minps",	xmm_xmm128_insn,	2,	SUF_Z,	0x00,	0x5D,	0,	0,	CPU_SSE,	0,	0},
#line 1705 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vmovntpd",	movnt_insn,	2,	SUF_Z,	0x66,	0x2B,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 197 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovnaew",	cmovcc_insn,	3,	SUF_W,	0x02,	0,	0,	0,	CPU_686,	0,	0},
#line 1314 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"stosb",	onebyte_insn,	1,	SUF_Z,	0xAA,	0x00,	0,	0,	0,	0,	0},
#line 1715 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vmptrld",	vmxtwobytemem_insn,	1,	SUF_Z,	0x06,	0,	0,	0,	CPU_P4,	0,	0},
#line 99 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"blsrl",	vex_gpr_ndd_rm_0F38_regext_insn,	2,	SUF_L,	0x00,	0xF3,	0x01,	ONLY_AVX,	CPU_BMI1,	0,	0},
#line 1444 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpltss",	ssecmp_32_insn,	4,	SUF_Z,	0x01,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1334 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"swapgs",	threebyte_insn,	1,	SUF_Z,	0x0F,	0x01,	0xF8,	ONLY_64,	0,	0,	0},
#line 1276 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"shrxl",	vex_gpr_reg_rm_nds_0F_insn,	2,	SUF_L,	0xF2,	0x38,	0xF7,	ONLY_AVX,	CPU_BMI2,	0,	0},
#line 1356 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"ucomisd",	xmm_xmm64_insn,	4,	SUF_Z,	0x66,	0x2E,	0,	0,	CPU_SSE2,	0,	0},
#line 466 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fincstp",	twobyte_insn,	1,	SUF_Z,	0xD9,	0xF7,	0,	0,	CPU_FPU,	0,	0},
#line 1681 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vminss",	xmm_xmm32_insn,	4,	SUF_Z,	0xF3,	0x5D,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1849 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpcomtrueub",	vpcom_insn,	1,	SUF_Z,	0xEC,	0x07,	0,	0,	CPU_XOP,	0,	0},
#line 888 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"paddb",	mmxsse2_insn,	2,	SUF_Z,	0xFC,	0,	0,	0,	CPU_MMX,	0,	0},
#line 438 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fdivrs",	farith_insn,	7,	SUF_S,	0xF0,	0xF8,	0x07,	0,	CPU_FPU,	0,	0},
#line 543 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fstp",	fstp_insn,	4,	SUF_Z,	0,	0,	0,	0,	CPU_FPU,	0,	0},
#line 791 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"movl",	mov_insn,	69,	SUF_L,	0,	0,	0,	0,	CPU_386,	0,	0},
#line 430 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fcos",	twobyte_insn,	1,	SUF_Z,	0xD9,	0xFF,	0,	0,	CPU_286,	CPU_FPU,	0},
#line 439 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fdivs",	farith_insn,	7,	SUF_S,	0xF8,	0xF0,	0x06,	0,	CPU_FPU,	0,	0},
#line 1215 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"setngb",	setcc_insn,	1,	SUF_B,	0x0E,	0,	0,	0,	CPU_386,	0,	0},
#line 1497 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpordpd",	ssecmp_128_insn,	3,	SUF_Z,	0x07,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 915 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pcmpeqw",	mmxsse2_insn,	2,	SUF_Z,	0x75,	0,	0,	0,	CPU_MMX,	0,	0},
#line 652 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"jns",	jcc_insn,	9,	SUF_Z,	0x09,	0,	0,	0,	0,	0,	0},
#line 226 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovnle",	cmovcc_insn,	3,	SUF_Z,	0x0F,	0,	0,	0,	CPU_686,	0,	0},
#line 1130 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"rexxyz",	NULL,	X86_REX>>8,	0x47,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 1438 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmplt_oqps",	ssecmp_128_insn,	3,	SUF_Z,	0x11,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 322 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmpxchgb",	cmpxchgxadd_insn,	4,	SUF_B,	0xB0,	0,	0,	0,	CPU_486,	0,	0},
#line 1827 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpcomltuw",	vpcom_insn,	1,	SUF_Z,	0xED,	0x00,	0,	0,	CPU_XOP,	0,	0},
#line 170 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovcl",	cmovcc_insn,	3,	SUF_L,	0x02,	0,	0,	0,	CPU_686,	0,	0},
#line 1417 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpgepd",	ssecmp_128_insn,	3,	SUF_Z,	0x0D,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 388 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"divps",	xmm_xmm128_insn,	2,	SUF_Z,	0x00,	0x5E,	0,	0,	CPU_SSE,	0,	0},
#line 1908 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpmacssdd",	vpma_insn,	1,	SUF_Z,	0x8E,	0,	0,	0,	CPU_XOP,	0,	0},
#line 676 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"leal",	lea_insn,	3,	SUF_L,	0,	0,	0,	0,	CPU_386,	0,	0},
#line 257 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovpew",	cmovcc_insn,	3,	SUF_W,	0x0A,	0,	0,	0,	CPU_686,	0,	0},
#line 705 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"ljmpq",	ljmpcall_insn,	7,	SUF_Q,	0x05,	0xEA,	0,	ONLY_64,	0,	0,	0},
#line 1758 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpbroadcastd",	vpbroadcastd_avx2_insn,	4,	SUF_Z,	0,	0,	0,	ONLY_AVX,	CPU_AVX2,	0,	0},
#line 651 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"jnp",	jcc_insn,	9,	SUF_Z,	0x0B,	0,	0,	0,	0,	0,	0},
#line 1755 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpblendvb",	avx2_sse4xmm0_insn,	2,	SUF_Z,	0x4C,	0,	0,	ONLY_AVX,	CPU_AVX2,	0,	0},
#line 1161 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"salc",	onebyte_insn,	1,	SUF_Z,	0xD6,	0,	0,	NOT_64,	CPU_Undoc,	0,	0},
#line 1582 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vfmadd231sd",	vfma_sd_insn,	2,	SUF_Z,	0xB9,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 642 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"jnb",	jcc_insn,	9,	SUF_Z,	0x03,	0,	0,	0,	0,	0,	0},
#line 752 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"lzcnt",	cnt_insn,	3,	SUF_Z,	0xBD,	0,	0,	0,	CPU_LZCNT,	0,	0},
#line 1440 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmplt_oqss",	ssecmp_32_insn,	4,	SUF_Z,	0x11,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 2013 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vroundps",	avx_sse4imm_insn,	3,	SUF_Z,	0x08,	0,	0,	ONLY_AVX,	CPU_SSE41,	0,	0},
#line 1878 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vphaddbq",	vphaddsub_insn,	1,	SUF_Z,	0xC3,	0,	0,	0,	CPU_XOP,	0,	0},
#line 851 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"mulx",	vex_gpr_reg_nds_rm_0F_insn,	2,	SUF_Z,	0xF2,	0x38,	0xF6,	ONLY_AVX,	CPU_BMI2,	0,	0},
#line 225 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovnl",	cmovcc_insn,	3,	SUF_Z,	0x0D,	0,	0,	0,	CPU_686,	0,	0},
#line 553 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fsubr",	farith_insn,	7,	SUF_Z,	0xE0,	0xE8,	0x05,	0,	CPU_FPU,	0,	0},
#line 356 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cvtss2sd",	xmm_xmm32_insn,	4,	SUF_Z,	0xF3,	0x5A,	0,	0,	CPU_SSE2,	0,	0},
#line 1370 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vaddsubps",	xmm_xmm128_256_insn,	4,	SUF_Z,	0xF2,	0xD0,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 617 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"invvpidl",	eptvpid_insn,	2,	SUF_L,	0x01,	0,	0,	NOT_64,	CPU_386,	CPU_EPTVPID,	0},
#line 453 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fidivl",	fiarith_insn,	2,	SUF_L,	0x06,	0xDA,	0,	0,	CPU_FPU,	0,	0},
#line 612 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"inveptq",	eptvpid_insn,	2,	SUF_Q,	0x00,	0,	0,	ONLY_64,	CPU_EPTVPID,	0,	0},
#line 1173 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"sbb",	arith_insn,	22,	SUF_Z,	0x18,	0x03,	0,	0,	0,	0,	0},
#line 46 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"aesimc",	aesimc_insn,	1,	SUF_Z,	0x38,	0xDB,	0,	0,	CPU_AES,	0,	0},
#line 1287 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"sldtq",	sldtmsw_insn,	6,	SUF_Q,	0x00,	0x00,	0,	ONLY_64,	CPU_286,	0,	0},
#line 122 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"btr",	bittest_insn,	6,	SUF_Z,	0xB3,	0x06,	0,	0,	CPU_386,	0,	0},
#line 505 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fmulp",	farithp_insn,	3,	SUF_Z,	0xC8,	0,	0,	0,	CPU_FPU,	0,	0},
#line 899 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pandn",	mmxsse2_insn,	2,	SUF_Z,	0xDF,	0,	0,	0,	CPU_MMX,	0,	0},
#line 1704 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vmovntdqa",	movntdqa_insn,	2,	SUF_Z,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1688 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vmovddup",	vmovddup_insn,	3,	SUF_Z,	0xF2,	0x12,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1291 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"smintold",	twobyte_insn,	1,	SUF_Z,	0x0F,	0x7E,	0,	0,	CPU_486,	CPU_Cyrix,	CPU_Obs},
#line 1876 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vpgatherqq",	gather_64x_64y_insn,	2,	SUF_Z,	0x91,	0,	0,	ONLY_AVX,	CPU_AVX2,	0,	0},
#line 1453 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpneq_uspd",	ssecmp_128_insn,	3,	SUF_Z,	0x14,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 235 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cmovnoq",	cmovcc_insn,	3,	SUF_Q,	0x01,	0,	0,	ONLY_64,	CPU_686,	0,	0},
#line 1428 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vcmpgtss",	ssecmp_32_insn,	4,	SUF_Z,	0x0E,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 458 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fild",	fildstp_insn,	4,	SUF_Z,	0x00,	0x02,	0x05,	0,	CPU_FPU,	0,	0},
#line 493 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fldenvs",	onebytemem_insn,	1,	SUF_S,	0x04,	0xD9,	0,	0,	CPU_FPU,	0,	0},
#line 1689 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vmovdqa",	movau_insn,	6,	SUF_Z,	0x66,	0x6F,	0x10,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1895 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vphsubdq",	vphaddsub_insn,	1,	SUF_Z,	0xE3,	0,	0,	0,	CPU_XOP,	0,	0},
#line 988 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pmovmskbl",	pmovmskb_insn,	6,	SUF_L,	0,	0,	0,	0,	CPU_MMX,	CPU_P3,	0},
#line 1272 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"shrl",	shift_insn,	16,	SUF_L,	0x05,	0,	0,	0,	CPU_386,	0,	0},
#line 1092 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"rclq",	shift_insn,	16,	SUF_Q,	0x02,	0,	0,	ONLY_64,	0,	0,	0},
#line 63 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"aword",	NULL,	X86_ADDRSIZE>>8,	0x10,	0,	0,	0,	0,	0,	0,	0},
#line 1656 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"vgatherdpd",	gather_64x_64x_insn,	2,	SUF_Z,	0x92,	0,	0,	ONLY_AVX,	CPU_AVX2,	0,	0},
#line 491 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fldenv",	onebytemem_insn,	1,	SUF_Z,	0x04,	0xD9,	0,	0,	CPU_FPU,	0,	0},
#line 911 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pclmulqdq",	pclmulqdq_insn,	2,	SUF_Z,	0x3A,	0x44,	0,	0,	CPU_AVX,	0,	0},
#line 368 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"cvttss2sil",	cvt_rx_xmm32_insn,	4,	SUF_L,	0xF3,	0x2C,	0,	0,	CPU_386,	CPU_SSE,	0},
#line 632 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"jg",	jcc_insn,	9,	SUF_Z,	0x0F,	0,	0,	0,	0,	0,	0},
#line 552 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"fsubp",	farithp_insn,	3,	SUF_Z,	0xE0,	0,	0,	0,	CPU_FPU,	0,	0},
#line 1002 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"pmuldq",	sse4_insn,	2,	SUF_Z,	0x28,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 87 "C:/Users/Redux/cpp-asteroids-sdl2/vcpkg_installed/vcpkg/blds/yasm/x64-windows-rel/modules/x86insn_gas.gperf"
    {"blsfilll",	xop_gpr_reg_rm_09_insn,	2,	SUF_L,	0x01,	0x02,	0,	0,	CPU_386,	CPU_TBM,	0}
  };
  static const unsigned short tab[] = {
    555,555,555,108,926,1495,0,258,0,0,2332,555,1208,0,108,1208,
    1383,1514,0,0,1495,555,1495,1208,440,1317,673,0,1383,0,555,555,
    988,108,2551,0,274,555,1633,1633,555,1912,1325,0,939,274,1325,0,
    555,1383,1929,555,1317,1495,1732,555,274,201,555,1995,2180,1633,0,0,
    555,1929,2332,1732,0,1317,0,0,1383,0,0,1636,1317,274,1325,2040,
    1325,517,1633,0,0,1633,108,274,1325,555,108,0,939,0,1636,274,
    0,555,274,1912,1383,0,0,1317,555,555,0,0,0,555,0,0,
    0,0,0,1514,1633,1495,1325,0,1929,0,1383,274,0,274,1317,0,
    1732,1317,0,555,555,1633,517,0,988,1325,0,1732,1325,673,1495,0,
    1383,1495,182,274,1633,274,1011,555,1208,1732,939,1325,1636,0,1325,1636,
    108,1633,1317,108,0,0,517,0,1732,0,0,0,1636,1325,1325,0,
    555,1317,1317,2332,1325,0,1636,555,2332,555,517,1636,0,0,258,0,
    1732,939,0,2260,1633,0,1633,555,0,1732,555,1929,2040,1633,1633,0,
    1192,0,1317,1929,1383,0,1633,555,0,673,1633,2286,440,1495,1602,517,
    517,0,1732,108,1325,555,555,1633,274,0,1495,1633,555,555,517,0,
    274,902,0,1317,1929,555,555,0,108,108,1325,1602,108,1325,1317,0,
    1325,0,1208,0,0,0,0,274,1514,0,1383,1325,555,1325,2040,0,
    1383,2040,1383,517,0,2040,274,0,1602,0,673,555,555,1317,1325,555,
    555,1317,0,108,555,0,0,555,1633,555,1495,0,1732,555,0,182,
    0,591,901,1633,517,555,555,0,274,1317,0,1929,1325,1208,1325,555,
    1383,274,108,1317,0,1325,182,988,1633,673,517,463,1317,0,0,1192,
    0,1317,1602,0,591,1633,0,0,2040,1633,1995,1929,2332,1317,2040,1101,
    1732,988,1633,1732,939,0,274,0,555,1317,1633,555,0,2278,1325,463,
    1929,988,1732,0,0,0,1929,1325,1359,555,1317,1317,1809,1547,555,0,
    555,1602,0,1325,1495,1317,1636,555,274,1208,0,274,555,108,1317,440,
    1929,1633,1317,1325,108,517,555,0,555,988,1325,901,1325,2040,1602,1101,
    1208,1633,1732,108,1317,1929,108,555,1602,555,108,1317,1929,1383,673,0,
    0,2286,1602,2464,1495,274,2040,0,555,517,1317,0,0,555,1317,517,
    1732,0,182,555,1602,1602,1732,1636,1325,1208,555,555,1383,1929,1633,0,
    1317,1633,0,0,1495,988,555,0,555,1495,1325,1636,939,1495,555,1317,
    108,1929,555,1325,1995,555,1325,1633,1929,274,0,0,555,1732,901,134,
    108,1732,517,2040,555,1325,0,0,469,0,1929,1317,0,591,901,0,
    108,1317,1383,1633,0,555,0,0,1034,1317,0,1853,1317,1633,2332,108,
    1633,1495,555,0,0,1732,274,258,988,1325,1250,1929,1732,517,2040,517,
    0,0,1514,926,1602,108,274,1317,108,108,0,0,555,1732,591,902,
    1929,1325,1929,673,1633,1633,517,555,1602,1325,0,1929,517,1325,1325,555,
    0,0,2055,1633,0,988,517,555,2040,1359,1912,1602,939,1732,555,0,
    2040,0,1633,1325,517,1325,274,926,673,517,0,516,108,0,2040,1383,
    1633,988,1359,238,1732,2040,2040,463,400,0,0,1101,555,555,555,555,
    1317,0,1929,673,274,274,2261,152,1208,274,901,1633,1325,555,0,555,
    0,1383,1325,1317,1929,108,1679,1633,108,1559,939,555,2464,1602,673,1995,
    0,0,400,555,1687,1325,1011,555,0,1929,1579,1633,2332,0,1325,517,
    1732,1602,1929,1327,1633,1633,0,555,901,1929,0,0,1325,1633,0,673,
    1602,1732,0,2040,238,1732,0,0,1636,1325,555,108,517,1995,440,517,
    1835,0,0,0,999,926,1929,988,939,555,1633,1995,1317,108,1325,1343,
    555,1547,0,0,0,1633,1633,1633,517,2040,0,886,555,1559,1633,0,
    1359,0,1317,108,555,1633,1514,1633,2040,0,1995,939,1208,1732,1771,1205,
    0,1636,0,1732,2100,902,1732,517,0,0,455,0,1514,108,0,0,
    1633,1633,469,1636,60,555,0,0,1121,2536,1929,0,1636,1633,1317,555,
    939,0,1317,108,0,517,517,0,1602,2040,555,0,1929,1633,1495,555,
    0,0,0,555,77,1607,517,1495,400,1011,517,1383,901,1602,447,740,
    1602,902,200,1835,1325,455,0,1929,988,1343,1732,1995,1929,1547,1912,486,
    1995,2551,1929,1325,0,1636,1317,0,504,0,555,0,1192,0,1011,1508,
    785,1542,1929,77,999,1732,359,1011,926,785,1208,345,1359,555,1115,1011,
    1924,591,0,517,555,939,0,0,902,1853,0,1732,1929,926,0,108,
    1929,1495,1111,0,988,0,108,0,1011,988,238,1809,0,1342,1317,0,
    400,517,359,673,463,1192,999,1325,555,5,516,555,1732,1636,1011,1602,
    0,939,108,517,916,555,0,816,555,2040,1728,0,1101,0,1929,1995,
    2040,801,555,1636,555,1205,1559,0,1514,1633,1912,666,2525,274,1846,1633,
    1929,555,1208,926,1633,1383,1650,0,1692,1924,1542,1980,182,1455,1383,5,
    1835,1679,2040,1089,274,0,2040,0,517,517,1317,1636,969,2222,999,0,
    902,1542,732,1101,2040,901,1743,345,1912,1383,274,0,600,1317,108,1602,
    1732,1579,1732,607,1208,0,0,1325,274,1995,108,0,0,0,0,440,
    968,1715,1997,1011,1575,647,1317,2040,447,274,0,0,2502,274,1633,2345,
  };

  const struct insnprefix_parse_data *ret;
  unsigned long rsl, val = phash_lookup(key, len, 0xbc1b868fUL);
  rsl = ((val>>23)^tab[val&0x3ff]);
  if (rsl >= 2076) return NULL;
  ret = &pd[rsl];
  if (strcmp(key, ret->name) != 0) return NULL;
  return ret;
}

