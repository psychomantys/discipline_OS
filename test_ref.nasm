
[GLOBAL add_nasm]

add_nasm:
	mov	eax, [rdi]
	add	eax, [rsi]
	ret

