	.file	"example5.c"
	.text
	.p2align 4,,15
	.globl	test
	.type	test, @function
test:
.LFB0:
	.cfi_startproc
	movl	B(%rip), %eax
	movl	$0, B(%rip)
	addl	$1, %eax
	movl	%eax, A(%rip)
	ret
	.cfi_endproc
.LFE0:
	.size	test, .-test
	.comm	B,4,4
	.comm	A,4,4
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.3) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
