	section	.text
	global	ft_strlen
ft_strlen:
	mov		rax, -1
loop:
	add		rax, 1
	mov		dl, byte [rdi+rax]
	cmp		dl, 0
   	jne		loop
	ret
