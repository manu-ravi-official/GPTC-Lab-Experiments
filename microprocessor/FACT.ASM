.model small
.stack 100h
.code
mov cl,04d
mov ax,01d
l1:mul cl
mov bl,cl
dec cl
jnz l1
mov bx,ax
aam
mov ah,4ch
int 21h
end
