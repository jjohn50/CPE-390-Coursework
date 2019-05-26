/* suppose we have a function:
next(Node* p)
R0 = p
how to wriite in assembler? 
LDR R0, [R0]
LDR R0, [R0]


//for a sample tree node: 
class TreeNode{
	Node* left; 
	Node* right; 
	int val; 
}
if R0 is pointing to a node, give the value of the righthand child 

LDR R0,[R0,#4] //Goes to the next value 
LDR R0,[R0,#8] // Goes to the next value
