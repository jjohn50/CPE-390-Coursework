	.global _Z1fi

_Z1fi:
		push{lr}
		b .test
.loop:
																Notes: if(r0%2==0)

		mov r1, r0; 
		ldr r0,=fmt
		bl printf
		mov r0, r1 //Give you back your r0 back 
    

		tst r0,#1
		bnz .odd
		lsr r0,#1 
		cmp R0,#1
		bgt .loop
		pop {lr}
		bx lr 

															Notes: for even case 
.odd:
		mov r1,r0 
		lsl r0,r0,#1
		add r1,r1,r0 
		add r0,r1,#1 

.test: 
		cmp R0,#1
		bgt .loop
		
exit: 
		pop {lr}
		bx lr 


		ldr r0, =message
		bl _puts

message:		.asciz "testing"
fmt: 			.asciz "%d"
