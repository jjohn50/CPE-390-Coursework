#include <iostream>
using namespace std; 

//C++: list 
// Java: LinkedList
//Better when there is need to put things in the middle
class LinkedList {
private: 
	class Node {
		int val; 
		Node* next; 
		Node(int v, Node* n): val(n), next(n) {} // new Node(5,p)
	};
	Node* head; // pointer to the beginning of the list
	//Every pointer takes 64 bits for OS 64 
	 
};