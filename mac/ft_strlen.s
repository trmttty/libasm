        global      _ft_strlen
        section     .text

_ft_strlen:
        xor     rax, rax                ; initialize return value
        jmp     compare
increment:
        inc     rax                     ; increment rax(= len)
compare:
        cmp     BYTE [rdi + rax], 0     ; end of string
        jne     increment
end:
        ret                             ; return
