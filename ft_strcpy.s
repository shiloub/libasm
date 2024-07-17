bits 64

global ft_strcpy

ft_strcpy:
    nop
    mov rax, rdi
    jmp _loop


    _loop:
    cmp byte [rsi], 0
    je _exit
    mov r10b, byte [rsi]
    mov byte [rdi], r10b
    inc rsi
    inc rdi
    jmp _loop


    _exit:
    mov byte [rdi], 0
    ret
