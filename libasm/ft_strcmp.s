	section	.text
	global	ft_strcmp

ft_strcmp:
	mov		rcx, -1

.loop:
	add		rcx, 1
	mov		bl, byte [rdi+rcx]
	mov		dl, byte [rsi+rcx]
	cmp		bl, 0
	je		.return
	cmp		dl, 0
	je		.return
	cmp		bl, dl
	je		.loop

.return
	sub		bl, dl
	movsx	rax, bl
	ret
