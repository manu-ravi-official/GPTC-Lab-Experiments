/*
 * zeros.asm 
 */ 
.include"m32def.inc"
.org 00
ldi r16,0x34
ldi r17,0
ldi r18,0
ldi r19,8
D1:ROR R16
BRCC L1
INC R17
JMP L2
L1:INC R18
L2:DEC R18
BRNE D1
END:JMP END


