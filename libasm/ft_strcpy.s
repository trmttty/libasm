	section .text
	global	ft_strcpy

ft_strcpy:
	mov		rcx, -1
.loop:	
	add		rcx, 1
	mov		dl, byte [rsi+rcx]
	mov		byte [rdi+rcx], dl
	cmp		dl, 0
	je		.return
	jmp		.loop
.return:
	mov		rax, rdi
	ret
