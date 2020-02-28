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

exit:	
			movzx	rax, al
			movzx	r8, bl
			sub		rax, r8
			ret
