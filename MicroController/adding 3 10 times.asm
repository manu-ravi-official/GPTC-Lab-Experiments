 .include "m32def.inc"
 .org 00
 ldi r16,0x10
 ldi r17,0x00
 ldi r18,0x03
 loop:add r17,r18
	  dec r16
	  brne loop;
 end:jmp end