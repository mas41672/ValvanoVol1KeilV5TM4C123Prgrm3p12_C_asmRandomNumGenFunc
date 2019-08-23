		THUMB
		AREA DATA, ALIGN=2
M		SPACE 
		AREA |.text|,CODE,READONLY, ALIGN=2
		EXPORT Random
		EXPORT M
; Return R0= random number generator
; Linear congruential generator
Random 	LDR R2,=M     ; R2 = &M
		LDR R0, [R2]  ; R0 = M
		LDR R1,=1664525
		MUL R0, R0,R1 ; R0 = 1664525*M
		LDR R1,=1013904223
		ADD R0, R0, R1 ; 1664525*M+1013904223
		STR R0, [R2]   ; store M
		BX  LR
		ALIGN
		END
		