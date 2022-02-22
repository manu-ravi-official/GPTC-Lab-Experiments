/*
 * ASCII to BCD
 *
 *  Created: 3/3/2021 10:25:49 AM
 *   Author: HOD
 */ 
.include"m32def.inc"
.org 00
ldi r16,'4'
ldi r17,'7'
andi r16,0x0f
swap r16
andi r17,0x0f
or r16,r17


