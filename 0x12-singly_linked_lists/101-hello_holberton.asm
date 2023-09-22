; ----------------------------------------------------------------------------------------
; This is an macOS console program that writes "Hello, Holberton on one line followed by a new line and then exits.
; It uses printf from the C library.  To assemble and run:
;
;     nasm -fmacho64 hola.asm && gcc hola.o && ./a.out
; ----------------------------------------------------------------------------------------

          global    _main
          extern    _printf

          section   .text
_main:    push      rbp                     ; Call stack must be aligned
          lea       rdi, [rel message]      ; First argument is address of message
          call      _printf                 ; printf(message)
          pop       rbp                     ; Fix up stack before returning
          ret

          section   .data
message:  db        "Hello, Holberton", 10, 0        ; 10 is the ASCII code for newline ('\n')