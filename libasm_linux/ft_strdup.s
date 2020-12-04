    global  _ft_strdup
    extern  _ft_strlen
    extern  _ft_strcpy
    extern  _malloc
	extern  ___error
    section .text

_ft_strdup:
    push    rdi
    call    _ft_strlen
    add     rax, 1
    mov     rdi, rax
    call    _malloc
    cmp     rax, 0
    je      .error
    pop     rsi
    mov     rdi, rax
    call    _ft_strcpy
    ret

.error:
	call	___error
	mov		qword[rax], 12  ; 12 ENOMEM Cannot allocate memory
	mov		rax, 0
    ret
