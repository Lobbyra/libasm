			global		_ft_strdup
			extern		_malloc
			extern		_ft_strcpy
			extern		_ft_strlen
			section		.text

_ft_strdup:
			push	rdi					; Sauvegarde de str
			call	_ft_strlen			; Longueur de str dans rax
			mov		rdi, rax			; Longueur de str dans ecx pour malloc
			inc		rdi
			call	_malloc
			mov		rdi, rax			; Copie de rax dans le premier paramètre
			pop		rsi					; Restauration de str
			call	_ft_strcpy			; strcpy(rdi, rsi) | (new, str)
			ret
