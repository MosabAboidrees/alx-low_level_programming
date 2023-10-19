section .data
    hello db 'Hello, Holberton', 0
    fmt db '%s', 10, 0

section .text
    extern printf

    global main
main:
    sub rsp, 8
    mov rdi, fmt
    mov rsi, hello
    call printf
    add rsp, 8
    ret
