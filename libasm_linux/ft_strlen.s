	global	_ft_strlen
	section	.text

_ft_strlen:
	mov		rax, 0
	jmp		.compare

.increment:
	add		rax, 1

.compare:
	cmp		byte [rdi+rax], 0
   	jne		.increment
	ret
