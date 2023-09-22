; ----------------------------------------------------------------------------------------
; Writes "Hello, Holberton" to the console using a C library. Runs on Linux.
;
;     nasm -felf64 hola.asm && gcc hola.o && ./a.out
; ----------------------------------------------------------------------------------------
section .data
format db "Hello, Holberton", 10, 0  ; The format string for printf

section .text
global main
extern printf

main:
    push rbp                ; Save the base pointer
    mov rdi, format         ; Load the format string into rdi
    call printf            ; Call printf with the format string
    pop rbp                 ; Restore the base pointer
    mov rax, 0              ; Set rax to 0 to indeicate success
    ret                     ; Return from main	
