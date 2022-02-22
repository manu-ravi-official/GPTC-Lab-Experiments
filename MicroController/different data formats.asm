/*
 * AVRAssembler2.asm
 *
 *  Created: 2/17/2022 10:50:18 AM
 *   Author: HOD
 */ 


 .include "m32def.inc"
 .org 00
 ldi r16,0x25
 ldi r17,0x34
 ldi r18,0B00110001
 ldi r19,11
 add r16,r17
 add r16,r18
 add r16,r19
