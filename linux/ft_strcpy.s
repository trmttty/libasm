	global	_ft_strcpy
	section .text

_ft_strcpy:
	mov		rax, 0

.loop:	
	mov		dl, byte [rsi+rax]
	mov		byte [rdi+rax], dl
	cmp		dl, 0
	je		.return
	add		rax, 1
	jmp		.loop

.return:
	mov		rax, rdi
	ret
