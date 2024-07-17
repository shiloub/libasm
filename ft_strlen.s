bits 64

global ft_strlen

ft_strlen:
    nop
    xor rax, rax
    xor rcx, rcx
    mov rax, rdi
    jmp _loop


    _loop:
    cmp byte [rax], 0
    je _exit
    inc rax
    inc rcx
    jmp _loop


    _exit:
    mov rax, rcx
    ret
