	SECTION .data
msg:	db "Hello, Holberton", 0
fmt:	db "%s", 10, 0

	SECTION .text
	extern printf
	global main
main:
	push rdp

	mov rsi, msg
	mov rdi, fmt
	mov rax, 0
	call printf

	pop rbp

	mov rax, 0
	ret
