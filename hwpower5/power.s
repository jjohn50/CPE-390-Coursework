@Justin John 
@Ryan Henley
@I pledge my honor that I have abided by the Stevens Honor System 




.global _Z5powerjj





@C++ code: power(x,n), prod = 1; if n!%=0 then prod = prod*x, x=x*x;, n=n/2 (Same as a LSL by 1) end

_Z5powerjj:
	MOV R2, #1; 		@prod = R2, R0 = x,R1 = n
	
.loop:
	AND R3,R1,#1		@use AND to see if n%2!=0
	CMP R3, #1
	MULEQ R2,R2,R0		@prod =prod*x
	MUL R0,R0,R0		@x=x*x	
	LSR R1,R1,#1		@n=n/2
	CMP R1,#0
	BNE .loop
.exit:
	MOV R0,R2
	bx lr
		