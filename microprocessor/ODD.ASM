.model small
.stack 100h
.data
     msg1 db"number is odd$"
     msg2 db"number is even$"
     msg3 db"enter number :$"
.code
     mov ax,@data
     mov ds,ax
     lea dx,msg3
     mov ah,9h
     int 21h
     mov ah,01h
     int 21h
     mov bl,2
     div bl
     cmp ah,1
     je s1
     jmp s2
     s1:lea dx,msg1  
        mov ah,9
        int 21h
        jmp last
     s2:lea dx,msg2
        mov ah,9
        int 21h
        jmp last
     last:mov ah,4ch
          int 21h
          end
        
             
