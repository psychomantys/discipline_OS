
.GLOBL add_gas

add_gas:
	movl	(%rdi), %eax
	addl	(%rsi), %eax
	ret

