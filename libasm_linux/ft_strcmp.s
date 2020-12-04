	global	ft_strcmp
	section	.text

ft_strcmp:
	mov		rax, 0

.loop:
	mov		bl, byte [rdi+rax]
	mov		dl, byte [rsi+rax]
	add		rax, 1
	cmp		bl, 0
	je		.return
	cmp		dl, 0
	je		.return
	cmp		bl, dl
	je		.loop

.return:
	movzx	rax, bl
	movzx	rbx, dl
	sub		rax, rbx
	ret
