	.global _Z5counti
/*
Justin John
Louheng Feng, Kaylee Chen, Christopher Chacon, Ryan Henley
I pledge my honor that I have abided by the Stevens Honor System   
*/



_Z5counti:	
	
	MOV R1,#1
.loop:
	CMP R1,R0
	BEQ .end

	ADD R1,R1,#1
	B .loop
.end:

	bx lr

	.global _Z9countDowni
_Z9countDowni:
	mov R2,#0
.loop2: 
	cmp R0,R2
	beq .end1
	
	SUB R0,R0,#1
	B .loop2
.end1:
	bx lr

	.global _Z3sumii
_Z3sumii:
	mov R3, r0
.loop3:
	cmp R0,R1
	beq .end2

	add R0,R0,#1
	add R3,R0,R3

	b .loop3
.end2:
	mov r0, r3
	bx lr 

	.global _Z4facti
_Z4facti:

	cmp r0,#0
	beq .iszero
	mov r1,#1
	mov r2,#1
	b .compare

.loop4:
	mul r1,r1,r2
	add r2,r2,#1

.compare: 
	cmp r2,r0
	ble .loop4
	mov r0,r1
	b .end3

.iszero:
	mov r0,#1
.end3:  
	bx lr 

	

