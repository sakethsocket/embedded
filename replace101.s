	.file	"replace101.c"
	.text
	.globl	replace101
	.type	replace101, @function
replace101:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -20(%rbp)
	movl	$29, -4(%rbp)
	jmp	.L2
.L5:
	movl	-4(%rbp), %eax
	movl	$7, %edx
	movl	%eax, %ecx
	sall	%cl, %edx
	movl	%edx, %eax
	andl	-20(%rbp), %eax
	movl	%eax, %edx
	movl	-4(%rbp), %eax
	movl	$5, %esi
	movl	%eax, %ecx
	sall	%cl, %esi
	movl	%esi, %eax
	cmpl	%eax, %edx
	jne	.L4
	movl	-4(%rbp), %eax
	movl	$7, %edx
	movl	%eax, %ecx
	sall	%cl, %edx
	movl	%edx, %eax
	orl	%eax, -20(%rbp)
.L4:
	subl	$1, -4(%rbp)
.L2:
	cmpl	$0, -4(%rbp)
	jns	.L5
	movl	-20(%rbp), %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	replace101, .-replace101
	.ident	"GCC: (Ubuntu 9.4.0-1ubuntu1~20.04.1) 9.4.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	 1f - 0f
	.long	 4f - 1f
	.long	 5
0:
	.string	 "GNU"
1:
	.align 8
	.long	 0xc0000002
	.long	 3f - 2f
2:
	.long	 0x3
3:
	.align 8
4:
