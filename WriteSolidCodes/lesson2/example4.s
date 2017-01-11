	.file	"example4.c"
	.local	counter
	.comm	counter,4,4
	.text
	.globl	add_counter
	.type	add_counter, @function
add_counter:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	counter(%rip), %eax
	addl	$1, %eax
	movl	%eax, counter(%rip)
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	add_counter, .-add_counter
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.3) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
