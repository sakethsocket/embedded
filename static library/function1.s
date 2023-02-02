	.file	"function1.c"
	.text
	.section	.rodata
	.align 8
.LC0:
	.string	"menu\n 0.exit\n 1.binaryoperation\n 2.mathop\n 3.swap\n  4.ascii\n 5.fibanocci"
.LC1:
	.string	"select the option"
.LC2:
	.string	"%d"
	.align 8
.LC3:
	.string	"select the option\n a.countz\n b.binary\n c.swapbits\n d.replace101"
.LC4:
	.string	"%c"
.LC5:
	.string	"enter n value"
.LC6:
	.string	"countz=%d\n"
.LC7:
	.string	"afterswap=%d\n"
.LC8:
	.string	"afterreplace=%d\n"
.LC9:
	.string	"invalid input"
	.align 8
.LC10:
	.string	"select the option\n a.palindrome\n b.sumofdigits\n c.decimal"
	.align 8
.LC11:
	.string	"select the option\n a.swapu3\n b.swapn3\n c.swapb"
.LC12:
	.string	"enter n,m value"
.LC13:
	.string	"%d %d"
	.align 8
.LC14:
	.string	"select the option\n a.uptolow\n b.lowtoup\n c.charactertoint"
.LC15:
	.string	"enter k value"
.LC16:
	.string	"invalid"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	leaq	.LC0(%rip), %rdi
	call	puts@PLT
	leaq	.LC1(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-24(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC2(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	movq	stdin(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	__fpurge@PLT
	movl	-24(%rbp), %eax
	cmpl	$5, %eax
	ja	.L2
	movl	%eax, %eax
	leaq	0(,%rax,4), %rdx
	leaq	.L4(%rip), %rax
	movl	(%rdx,%rax), %eax
	cltq
	leaq	.L4(%rip), %rdx
	addq	%rdx, %rax
	notrack jmp	*%rax
	.section	.rodata
	.align 4
	.align 4
.L4:
	.long	.L9-.L4
	.long	.L8-.L4
	.long	.L7-.L4
	.long	.L6-.L4
	.long	.L5-.L4
	.long	.L3-.L4
	.text
.L9:
	movl	$0, %edi
	call	exit@PLT
.L8:
	leaq	.LC3(%rip), %rdi
	call	puts@PLT
	leaq	-25(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC4(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	movq	stdin(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	__fpurge@PLT
	movzbl	-25(%rbp), %eax
	movsbl	%al, %eax
	cmpl	$100, %eax
	je	.L10
	cmpl	$100, %eax
	jg	.L11
	cmpl	$99, %eax
	je	.L12
	cmpl	$99, %eax
	jg	.L11
	cmpl	$97, %eax
	je	.L13
	cmpl	$98, %eax
	je	.L14
	jmp	.L11
.L13:
	leaq	.LC5(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-20(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC2(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	movl	-20(%rbp), %eax
	movl	%eax, %edi
	call	countz@PLT
	movl	%eax, -12(%rbp)
	movl	-12(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC6(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	jmp	.L15
.L14:
	leaq	.LC5(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-20(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC2(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	movl	-20(%rbp), %eax
	movl	%eax, %edi
	call	binary@PLT
	jmp	.L15
.L12:
	leaq	.LC5(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-20(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC2(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	movl	-20(%rbp), %eax
	movl	%eax, %edi
	call	swapbits@PLT
	movl	%eax, -12(%rbp)
	movl	-12(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC7(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	jmp	.L15
.L10:
	leaq	.LC5(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-20(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC2(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	movl	-20(%rbp), %eax
	movl	%eax, %edi
	call	replace101@PLT
	movl	%eax, -12(%rbp)
	movl	-12(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC8(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	jmp	.L15
.L11:
	leaq	.LC9(%rip), %rdi
	call	puts@PLT
	jmp	.L16
.L15:
	jmp	.L16
.L7:
	leaq	.LC10(%rip), %rdi
	call	puts@PLT
	leaq	-25(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC4(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	movq	stdin(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	__fpurge@PLT
	movzbl	-25(%rbp), %eax
	movsbl	%al, %eax
	cmpl	$99, %eax
	je	.L17
	cmpl	$99, %eax
	jg	.L18
	cmpl	$97, %eax
	je	.L19
	cmpl	$98, %eax
	je	.L20
	jmp	.L18
.L19:
	leaq	.LC5(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-20(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC2(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	movl	-20(%rbp), %eax
	movl	%eax, %edi
	call	palindrome@PLT
	jmp	.L21
.L20:
	leaq	.LC5(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-20(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC2(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	movl	-20(%rbp), %eax
	movl	%eax, %edi
	call	sumofdigits@PLT
	jmp	.L21
.L17:
	leaq	.LC5(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-20(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC2(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	movl	-20(%rbp), %eax
	movl	%eax, %edi
	call	decimal@PLT
	jmp	.L21
.L18:
	leaq	.LC9(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	jmp	.L16
.L21:
	jmp	.L16
.L6:
	leaq	.LC11(%rip), %rdi
	call	puts@PLT
	leaq	-25(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC4(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	movq	stdin(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	__fpurge@PLT
	movzbl	-25(%rbp), %eax
	movsbl	%al, %eax
	cmpl	$99, %eax
	je	.L22
	cmpl	$99, %eax
	jg	.L23
	cmpl	$97, %eax
	je	.L24
	cmpl	$98, %eax
	je	.L25
	jmp	.L23
.L24:
	leaq	.LC12(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-16(%rbp), %rdx
	leaq	-20(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC13(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	movl	-16(%rbp), %edx
	movl	-20(%rbp), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	swapu3@PLT
	jmp	.L26
.L25:
	leaq	.LC12(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-16(%rbp), %rdx
	leaq	-20(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC13(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	movl	-16(%rbp), %edx
	movl	-20(%rbp), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	swapn3@PLT
	jmp	.L26
.L22:
	leaq	.LC12(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-16(%rbp), %rdx
	leaq	-20(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC13(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	movl	-16(%rbp), %edx
	movl	-20(%rbp), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	swapb@PLT
	jmp	.L26
.L23:
	leaq	.LC9(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	jmp	.L16
.L26:
	jmp	.L16
.L5:
	leaq	.LC14(%rip), %rdi
	call	puts@PLT
	leaq	-25(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC4(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	movq	stdin(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	__fpurge@PLT
	movzbl	-25(%rbp), %eax
	movsbl	%al, %eax
	cmpl	$99, %eax
	je	.L27
	cmpl	$99, %eax
	jg	.L28
	cmpl	$97, %eax
	je	.L29
	cmpl	$98, %eax
	je	.L30
	jmp	.L28
.L29:
	leaq	.LC15(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-16(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC4(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	movzbl	-16(%rbp), %eax
	movsbl	%al, %eax
	movl	%eax, %edi
	call	uptolow@PLT
	jmp	.L31
.L30:
	leaq	.LC15(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-16(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC4(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	movzbl	-16(%rbp), %eax
	movsbl	%al, %eax
	movl	%eax, %edi
	call	lowtoup@PLT
	jmp	.L31
.L27:
	leaq	.LC15(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-16(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC4(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	movzbl	-16(%rbp), %eax
	movsbl	%al, %eax
	movl	%eax, %edi
	call	charactertint@PLT
	jmp	.L31
.L28:
	leaq	.LC9(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	jmp	.L16
.L31:
	jmp	.L16
.L3:
	leaq	.LC5(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-20(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC2(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	movl	-20(%rbp), %eax
	movl	%eax, %edi
	call	fibanocci@PLT
	jmp	.L16
.L2:
	leaq	.LC16(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
.L16:
	nop
	movq	-8(%rbp), %rax
	xorq	%fs:40, %rax
	je	.L32
	call	__stack_chk_fail@PLT
.L32:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
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
