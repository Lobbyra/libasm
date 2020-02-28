			global		_ft_strcpy
			section		.text

_ft_strcpy:
			push	rdi

process:
			mov		al, BYTE [rsi]
			cmp		al, 0
			je		exit
			mov		BYTE [rdi], al
			inc		rdi
			inc		rsi
			jmp		process

exit:
			mov		BYTE [rdi], 0
			pop		rax
			ret
