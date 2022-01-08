	.file	"test.cpp"
	.text
	.def	__Z41__static_initialization_and_destruction_0ii;	.scl	3;	.type	32;	.endef
__Z41__static_initialization_and_destruction_0ii:
LFB2072:
	.cfi_startproc
	cmpl	$1, %eax
	je	L7
L4:
	ret
L7:
	cmpl	$65535, %edx
	jne	L4
	subl	$28, %esp
	.cfi_def_cfa_offset 32
	movl	$__ZStL8__ioinit, %ecx
	call	__ZNSt8ios_base4InitC1Ev
	movl	$___tcf_0, (%esp)
	call	_atexit
	addl	$28, %esp
	.cfi_def_cfa_offset 4
	ret
	.cfi_endproc
LFE2072:
	.def	___tcf_0;	.scl	3;	.type	32;	.endef
___tcf_0:
LFB2073:
	.cfi_startproc
	subl	$12, %esp
	.cfi_def_cfa_offset 16
	movl	$__ZStL8__ioinit, %ecx
	call	__ZNSt8ios_base4InitD1Ev
	addl	$12, %esp
	.cfi_def_cfa_offset 4
	ret
	.cfi_endproc
LFE2073:
	.globl	__Z1cRi
	.def	__Z1cRi;	.scl	2;	.type	32;	.endef
__Z1cRi:
LFB1591:
	.cfi_startproc
	movl	4(%esp), %eax
	cmpl	$10, (%eax)
	jg	L13
	movl	$0, (%eax)
	movl	$0, %eax
	ret
L13:
	movl	$20, (%eax)
	movl	$20, %eax
	ret
	.cfi_endproc
LFE1591:
	.def	___main;	.scl	2;	.type	32;	.endef
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB1592:
	.cfi_startproc
	leal	4(%esp), %ecx
	.cfi_def_cfa 1, 0
	andl	$-16, %esp
	pushl	-4(%ecx)
	pushl	%ebp
	.cfi_escape 0x10,0x5,0x2,0x75,0
	movl	%esp, %ebp
	pushl	%ecx
	.cfi_escape 0xf,0x3,0x75,0x7c,0x6
	subl	$36, %esp
	call	___main
	movl	$1, -12(%ebp)
	leal	-12(%ebp), %eax
	movl	%eax, (%esp)
	call	__Z1cRi
	movl	-12(%ebp), %eax
	movl	%eax, (%esp)
	movl	$__ZSt4cout, %ecx
	call	__ZNSolsEi
	subl	$4, %esp
	movl	$0, %eax
	movl	-4(%ebp), %ecx
	.cfi_def_cfa 1, 0
	leave
	.cfi_restore 5
	leal	-4(%ecx), %esp
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE1592:
	.def	__GLOBAL__sub_I__Z1cRi;	.scl	3;	.type	32;	.endef
__GLOBAL__sub_I__Z1cRi:
LFB2074:
	.cfi_startproc
	subl	$12, %esp
	.cfi_def_cfa_offset 16
	movl	$65535, %edx
	movl	$1, %eax
	call	__Z41__static_initialization_and_destruction_0ii
	addl	$12, %esp
	.cfi_def_cfa_offset 4
	ret
	.cfi_endproc
LFE2074:
	.section	.ctors,"w"
	.align 4
	.long	__GLOBAL__sub_I__Z1cRi
.lcomm __ZStL8__ioinit,1,1
	.ident	"GCC: (i686-posix-dwarf-rev0, Built by MinGW-W64 project) 8.1.0"
	.def	__ZNSt8ios_base4InitC1Ev;	.scl	2;	.type	32;	.endef
	.def	_atexit;	.scl	2;	.type	32;	.endef
	.def	__ZNSt8ios_base4InitD1Ev;	.scl	2;	.type	32;	.endef
	.def	__ZNSolsEi;	.scl	2;	.type	32;	.endef
