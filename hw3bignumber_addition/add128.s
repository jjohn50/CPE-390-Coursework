
	.global _Z6add128R6BigNumRKS_S2_
_Z6add128R6BigNumRKS_S2_:

	push {r4,r5}


	
	ldr r3, [r1, #12]
	ldr r4, [r2, #12]
	adds r5, r3, r4
	str r5, [r0, #12]
	
	ldr r3, [r1, #8]
	ldr r4, [r2, #8]
	adcs r5, r3, r4
	str r5, [r0, #8]
	
	ldr r3, [r1, #4]
	ldr r4, [r2, #4]
	adcs r5, r3, r4
	str r5, [r0, #4]

	ldr r3, [r1]
	ldr r4, [r2]
	adcs r5, r3, r4
	str r5, [r0]
	
	pop{r4,r5}
	bx lr
	
	
