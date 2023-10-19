section .data
    hello db 'Hello, Holberton', 0  ; Define the string to be printed
    fmt db '%s', 10, 0  	    ; Define the format string for printf

section .text
    extern printf  	; Declare the printf function

    global main  	; Define the entry point of the program
main:
    sub rsp, 8  	; Adjust the stack pointer
    mov rdi, fmt  	; Set the format string argument for printf
    mov rsi, hello  	; Set the string argument for printf
    call printf  	; Call the printf function
    add rsp, 8  	; Restore the stack pointer
    ret  		; Return from the main function
