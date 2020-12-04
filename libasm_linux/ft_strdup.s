    global  ft_strdup
    extern  ft_strlen
    extern  ft_strcpy
    extern  malloc
	extern	__errno_location
    section .text

ft_strdup:
    push    rdi
    call    ft_strlen
    add     rax, 1
    mov     rdi, rax
    call    malloc
    cmp     rax, 0
    je      .error
    pop     rsi
    mov     rdi, rax
    call    ft_strcpy
    ret

.error:
	call    __errno_location
	mov		qword[rax], 12  ; 12 ENOMEM Cannot allocate memory
	mov		rax, 0
    ret
