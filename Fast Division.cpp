Fast divide by 10 for small numbers /1024 
(x*102) >> 10 

uint32_t powerof2m1(uint32_t n){
	n--;
	n|=n >> 1; // or the bit so that everything has 1's 
	n|=n >> 2;
	n|=n >> 4;
	n|=n >> 8;
	n|=n >> 16;
n++;
return n; 
}


13 

1101
1100
0110 Shift by left by one: 
OR:
1110
0011 Shift by left by two 
OR: 
  1111
+ 0001
  ----- 
 10000

 int n = 5; 
 n = n ^ 5;
 n = 5- n;  
 101 
 101
 ---
 000
 101
 101

Check the signs for two different numbers: 
 R0 = some int 	1xxxxxxxxxxxxxxxxxxxx (negative)
 R1 = some int 	0xxxxxxxxxxxxxxxxxxxx (positive)
 test whether they are different signs 

EORS R2,R0,R1 //XOR  //S sets the status bit as what it should be 
BLT 

Counting bits set: 

R0 = 10101101010100101010111111111111111100000

count 1 bits


mov r3, #0 @	r3 will count how many 1 bits
mov r1, #1 @ r0 = 1111100x
ands r2,r1,#1 @r1 =00000001
			 @r2 =00000000
addnz r3,#1
lsl   r1,#1
