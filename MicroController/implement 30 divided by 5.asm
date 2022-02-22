.include"m32def.inc"
 .org 00
 ldi r16,30
 ldi r17,05
 ldi r18,00
 loop:inc r18
	sub r16,r17
	 brne loop;
end:jmp end
