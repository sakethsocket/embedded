	.file	"function.c"
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
.LFB6:
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
	call	countz
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
	call	binary
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
	call	swapbits
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
	call	replace101
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
	call	palindrome
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
	call	sumofdigits
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
	call	decimal
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
	call	swapu3
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
	call	swapn3
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
	call	swapb
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
	call	uptolow
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
	call	lowtoup
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
	call	charactertint
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
	call	fibanocci
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
.LFE6:
	.size	main, .-main
	.globl	countz
	.type	countz, @function
countz:
.LFB7:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -20(%rbp)
	movl	$0, -8(%rbp)
	movl	$31, -4(%rbp)
	jmp	.L34
.L36:
	movl	-4(%rbp), %eax
	movl	-20(%rbp), %edx
	movl	%eax, %ecx
	sarl	%cl, %edx
	movl	%edx, %eax
	andl	$1, %eax
	testl	%eax, %eax
	jne	.L35
	addl	$1, -8(%rbp)
.L35:
	subl	$1, -4(%rbp)
.L34:
	cmpl	$0, -4(%rbp)
	jns	.L36
	movl	-8(%rbp), %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7:
	.size	countz, .-countz
	.section	.rodata
.LC17:
	.string	"0"
.LC18:
	.string	"1"
	.text
	.globl	binary
	.type	binary, @function
binary:
.LFB8:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movl	%edi, -20(%rbp)
	movl	$31, -4(%rbp)
	jmp	.L39
.L42:
	movl	-4(%rbp), %eax
	movl	-20(%rbp), %edx
	movl	%eax, %ecx
	sarl	%cl, %edx
	movl	%edx, %eax
	andl	$1, %eax
	testl	%eax, %eax
	jne	.L40
	leaq	.LC17(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	jmp	.L41
.L40:
	leaq	.LC18(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
.L41:
	subl	$1, -4(%rbp)
.L39:
	cmpl	$0, -4(%rbp)
	jns	.L42
	movl	$10, %edi
	call	putchar@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE8:
	.size	binary, .-binary
	.globl	swapbits
	.type	swapbits, @function
swapbits:
.LFB9:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -20(%rbp)
	movl	$0, -8(%rbp)
	movl	$31, -4(%rbp)
	jmp	.L44
.L45:
	movl	-8(%rbp), %eax
	movl	$1, %edx
	movl	%eax, %ecx
	sall	%cl, %edx
	movl	%edx, %eax
	notl	%eax
	movl	%eax, %edx
	movl	-4(%rbp), %eax
	movl	$1, %esi
	movl	%eax, %ecx
	sall	%cl, %esi
	movl	%esi, %eax
	orl	%edx, %eax
	andl	-20(%rbp), %eax
	movl	%eax, %edx
	movl	-8(%rbp), %eax
	movl	$1, %esi
	movl	%eax, %ecx
	sall	%cl, %esi
	movl	%esi, %eax
	andl	-20(%rbp), %eax
	movl	%eax, %esi
	movl	-4(%rbp), %eax
	subl	-8(%rbp), %eax
	movl	%eax, %ecx
	sall	%cl, %esi
	movl	%esi, %eax
	orl	%eax, %edx
	movl	%edx, %esi
	movl	-4(%rbp), %eax
	movl	$1, %edx
	movl	%eax, %ecx
	sall	%cl, %edx
	movl	%edx, %eax
	andl	-20(%rbp), %eax
	movl	%eax, %edx
	movl	-4(%rbp), %eax
	subl	-8(%rbp), %eax
	movl	%eax, %ecx
	sarl	%cl, %edx
	movl	%edx, %eax
	orl	%esi, %eax
	movl	%eax, -20(%rbp)
	addl	$1, -8(%rbp)
	subl	$1, -4(%rbp)
.L44:
	movl	-8(%rbp), %eax
	cmpl	-4(%rbp), %eax
	jl	.L45
	movl	-20(%rbp), %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE9:
	.size	swapbits, .-swapbits
	.globl	replace101
	.type	replace101, @function
replace101:
.LFB10:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -20(%rbp)
	movl	$29, -4(%rbp)
	jmp	.L48
.L51:
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
	jne	.L50
	movl	-4(%rbp), %eax
	movl	$7, %edx
	movl	%eax, %ecx
	sall	%cl, %edx
	movl	%edx, %eax
	orl	%eax, -20(%rbp)
.L50:
	subl	$1, -4(%rbp)
.L48:
	cmpl	$0, -4(%rbp)
	jns	.L51
	movl	-20(%rbp), %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10:
	.size	replace101, .-replace101
	.section	.rodata
.LC19:
	.string	"palindrome"
.LC20:
	.string	"not a palindrome"
	.text
	.globl	palindrome
	.type	palindrome, @function
palindrome:
.LFB11:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movl	%edi, -20(%rbp)
	movl	$0, -8(%rbp)
	movl	-20(%rbp), %eax
	movl	%eax, -12(%rbp)
	movl	$0, -8(%rbp)
	jmp	.L54
.L55:
	movl	-12(%rbp), %edx
	movslq	%edx, %rax
	imulq	$1717986919, %rax, %rax
	shrq	$32, %rax
	movl	%eax, %ecx
	sarl	$2, %ecx
	movl	%edx, %eax
	sarl	$31, %eax
	subl	%eax, %ecx
	movl	%ecx, %eax
	sall	$2, %eax
	addl	%ecx, %eax
	addl	%eax, %eax
	subl	%eax, %edx
	movl	%edx, %eax
	movl	%eax, -4(%rbp)
	movl	-12(%rbp), %eax
	movslq	%eax, %rdx
	imulq	$1717986919, %rdx, %rdx
	shrq	$32, %rdx
	sarl	$2, %edx
	sarl	$31, %eax
	subl	%eax, %edx
	movl	%edx, %eax
	movl	%eax, -12(%rbp)
	movl	-8(%rbp), %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	addl	%eax, %eax
	movl	%eax, %edx
	movl	-4(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, -8(%rbp)
.L54:
	cmpl	$0, -12(%rbp)
	jne	.L55
	movl	-20(%rbp), %eax
	cmpl	-8(%rbp), %eax
	jne	.L56
	leaq	.LC19(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	jmp	.L57
.L56:
	leaq	.LC20(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
.L57:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE11:
	.size	palindrome, .-palindrome
	.globl	sumofdigits
	.type	sumofdigits, @function
sumofdigits:
.LFB12:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movl	%edi, -20(%rbp)
	movl	$0, -8(%rbp)
	movl	-20(%rbp), %eax
	movl	%eax, -12(%rbp)
	movl	$0, -8(%rbp)
	jmp	.L59
.L60:
	movl	-12(%rbp), %edx
	movslq	%edx, %rax
	imulq	$1717986919, %rax, %rax
	shrq	$32, %rax
	movl	%eax, %ecx
	sarl	$2, %ecx
	movl	%edx, %eax
	sarl	$31, %eax
	subl	%eax, %ecx
	movl	%ecx, %eax
	sall	$2, %eax
	addl	%ecx, %eax
	addl	%eax, %eax
	subl	%eax, %edx
	movl	%edx, %eax
	movl	%eax, -4(%rbp)
	movl	-12(%rbp), %eax
	movslq	%eax, %rdx
	imulq	$1717986919, %rdx, %rdx
	shrq	$32, %rdx
	sarl	$2, %edx
	sarl	$31, %eax
	subl	%eax, %edx
	movl	%edx, %eax
	movl	%eax, -12(%rbp)
	movl	-4(%rbp), %eax
	addl	%eax, -8(%rbp)
.L59:
	cmpl	$0, -12(%rbp)
	jne	.L60
	movl	-8(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC2(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE12:
	.size	sumofdigits, .-sumofdigits
	.globl	decimal
	.type	decimal, @function
decimal:
.LFB13:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movl	%edi, -20(%rbp)
	movl	$0, -12(%rbp)
	movl	$1, -8(%rbp)
	movl	-20(%rbp), %eax
	movl	%eax, -16(%rbp)
	jmp	.L62
.L63:
	movl	-16(%rbp), %eax
	cltd
	shrl	$31, %edx
	addl	%edx, %eax
	andl	$1, %eax
	subl	%edx, %eax
	movl	%eax, -4(%rbp)
	movl	-16(%rbp), %eax
	movl	%eax, %edx
	shrl	$31, %edx
	addl	%edx, %eax
	sarl	%eax
	movl	%eax, -16(%rbp)
	movl	-8(%rbp), %eax
	imull	-4(%rbp), %eax
	addl	%eax, -12(%rbp)
	movl	-8(%rbp), %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	addl	%eax, %eax
	movl	%eax, -8(%rbp)
.L62:
	cmpl	$0, -16(%rbp)
	jne	.L63
	movl	-12(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC2(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE13:
	.size	decimal, .-decimal
	.globl	swapu3
	.type	swapu3, @function
swapu3:
.LFB14:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movl	%edi, -20(%rbp)
	movl	%esi, -24(%rbp)
	movl	-20(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	-24(%rbp), %eax
	movl	%eax, -20(%rbp)
	movl	-4(%rbp), %eax
	movl	%eax, -24(%rbp)
	movl	-24(%rbp), %edx
	movl	-20(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC13(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE14:
	.size	swapu3, .-swapu3
	.globl	swapn3
	.type	swapn3, @function
swapn3:
.LFB15:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	movl	-8(%rbp), %eax
	addl	%eax, -4(%rbp)
	movl	-4(%rbp), %eax
	subl	-8(%rbp), %eax
	movl	%eax, -8(%rbp)
	movl	-8(%rbp), %eax
	subl	%eax, -4(%rbp)
	movl	-8(%rbp), %edx
	movl	-4(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC13(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE15:
	.size	swapn3, .-swapn3
	.globl	swapb
	.type	swapb, @function
swapb:
.LFB16:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	movl	-8(%rbp), %eax
	xorl	%eax, -4(%rbp)
	movl	-4(%rbp), %eax
	xorl	%eax, -8(%rbp)
	movl	-8(%rbp), %eax
	xorl	%eax, -4(%rbp)
	movl	-8(%rbp), %edx
	movl	-4(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC13(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE16:
	.size	swapb, .-swapb
	.globl	uptolow
	.type	uptolow, @function
uptolow:
.LFB17:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, %eax
	movb	%al, -4(%rbp)
	cmpb	$64, -4(%rbp)
	jle	.L68
	cmpb	$90, -4(%rbp)
	jg	.L68
	movzbl	-4(%rbp), %eax
	addl	$32, %eax
	movb	%al, -4(%rbp)
.L68:
	movsbl	-4(%rbp), %eax
	movl	%eax, %edi
	call	putchar@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE17:
	.size	uptolow, .-uptolow
	.globl	lowtoup
	.type	lowtoup, @function
lowtoup:
.LFB18:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, %eax
	movb	%al, -4(%rbp)
	cmpb	$96, -4(%rbp)
	jle	.L70
	cmpb	$122, -4(%rbp)
	jg	.L70
	movzbl	-4(%rbp), %eax
	subl	$32, %eax
	movb	%al, -4(%rbp)
.L70:
	movsbl	-4(%rbp), %eax
	movl	%eax, %edi
	call	putchar@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE18:
	.size	lowtoup, .-lowtoup
	.globl	charactertint
	.type	charactertint, @function
charactertint:
.LFB19:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, %eax
	movb	%al, -4(%rbp)
	cmpb	$47, -4(%rbp)
	jle	.L72
	cmpb	$57, -4(%rbp)
	jg	.L72
	movzbl	-4(%rbp), %eax
	subl	$48, %eax
	movb	%al, -4(%rbp)
.L72:
	movsbl	-4(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC2(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE19:
	.size	charactertint, .-charactertint
	.section	.rodata
.LC21:
	.string	"z=%d\n"
	.text
	.globl	fibanocci
	.type	fibanocci, @function
fibanocci:
.LFB20:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movl	%edi, -20(%rbp)
	movl	$0, -12(%rbp)
	movl	$1, -8(%rbp)
	movl	$0, -16(%rbp)
	jmp	.L74
.L75:
	movl	-12(%rbp), %edx
	movl	-8(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, -4(%rbp)
	movl	-8(%rbp), %eax
	movl	%eax, -12(%rbp)
	movl	-4(%rbp), %eax
	movl	%eax, -8(%rbp)
	movl	-4(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC21(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	addl	$1, -16(%rbp)
.L74:
	movl	-16(%rbp), %eax
	cmpl	-20(%rbp), %eax
	jl	.L75
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE20:
	.size	fibanocci, .-fibanocci
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
