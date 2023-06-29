section .data
    hello db 'Hello, Holberton', 0

section .text
    global main

    extern printf

main:
    sub rsp, 8       ; Align stack to 16 bytes
    mov edi, hello   ; Pass the address of the hello string as the argument
    xor eax, eax     ; Clear the EAX register
    call printf      ; Call printf function
    add rsp, 8       ; Restore stack alignment
    xor eax, eax     ; Return 0
    ret

