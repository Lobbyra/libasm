			global		_ft_strcmp
			section		.text

_ft_strcmp:
			mov		al, BYTE [rdi]
			mov		bl, BYTE [rsi]
			cmp		al, bl			; Test si *rdi == *rsi
			jne		exit
			cmp		al, 0			; Test si *rdi == *rsi
			je		exit
			cmp		bl, 0			; Test si *rdi == *rsi
			je		exit
			inc		rdi
			inc		rsi
			jmp		_ft_strcmp		; recursion

eq:
			mov		rax, 0
			ret

less:
			mov		rax, -1
			ret

greater:
			mov		rax, 1
			ret

exit:	
			cmp		al, bl			; Test si *rdi == *rsi
			jl		less			; If al < bl
			jg		greater			; If al > bl
			je		eq				; If al == bl
