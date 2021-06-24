	.file	"demo.c"
	.text
	.globl	_Add
	.def	_Add;	.scl	2;	.type	32;	.endef
_Add:
LFB13:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	movl	8(%ebp), %edx
	movl	12(%ebp), %eax
	addl	%edx, %eax
	popl	%ebp
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE13:
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC0:
	.ascii "Inside main %d\12\0"
LC1:
	.ascii "Addition is %d\12\0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB14:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$32, %esp
	call	___main
	movl	$0, 28(%esp)
	movl	$0, 24(%esp)
	movl	$10, 20(%esp)
	movl	$20, 16(%esp)
	movl	20(%esp), %edx
	leal	1(%edx), %eax
	movl	%eax, 20(%esp)
	movl	20(%esp), %eax
	leal	1(%eax), %ecx
	movl	%ecx, 20(%esp)
	addl	%edx, %eax
	movl	%eax, 28(%esp)
	movl	16(%esp), %edx
	leal	1(%edx), %eax
	movl	%eax, 16(%esp)
	movl	16(%esp), %eax
	leal	1(%eax), %ecx
	movl	%ecx, 16(%esp)
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	_Add
	movl	%eax, 24(%esp)
	movl	$11, 4(%esp)
	movl	$LC0, (%esp)
	call	_printf
	movl	28(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC1, (%esp)
	call	_printf
	movl	24(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC1, (%esp)
	call	_printf
	movl	$0, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE14:
	.ident	"GCC: (MinGW.org GCC Build-2) 9.2.0"
	.def	_printf;	.scl	2;	.type	32;	.endef
