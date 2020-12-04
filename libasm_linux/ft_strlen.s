	global	ft_strlen
	section	.text

ft_strlen:
	mov		rax, 0
	jmp		.compare

.increment:
	add		rax, 1

.compare:
	cmp		byte [rdi+rax], 0
   	jne		.increment
	ret
