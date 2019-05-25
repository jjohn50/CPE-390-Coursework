#include "BigNum.hh"
#include <climits>
#include <iostream>
using namespace std;


//extern void add128(uint32_t[], uint32_t[], uint32_t[]);
int main() {
	/*
	uint32_t a1[] = {0,0,0,0};
	uint32_t a2[] = {0,0,0,5};
	uint32_t a3[] = {0,0,0,ULONG_MAX};
	
	
	add128(a1, a2, a3);
	
	for (auto k: a1)
		cout << k << endl;
	*/
	
	uint32_t a3[] = {0,0,0,0};
	uint32_t a2[] = {0,0,0,5};
	uint32_t a1[] = {0,0,0,ULONG_MAX};
	BigNum b1(a1); // 0 0 0 3
	BigNum b2(a2); // 0 0 0 5
	BigNum b3(a3);
	add128(b3, b1, b2); // b3 = b1 + b2
	/* should add:
		 b1 0 0 0 3
     b2 0 0 0 5
     b3 0 0 0 8
	 */
	cout << b3 << '\n'; // print out the answer!!
/*
	const uint32_t ULONG_MAX = 4294967295;
	BigNum b5(ULONG_MAX);
	BigNum b6(1);
	BigNum b7;
	add128(b7, b5, b6);
	/* should add:
		 b5 0 0 0 4294967295
     b6 0 0 0 1
     b7 0 0 1 0
	 */
	//cout << b7 << '\n'; // print out the answer!! 0,0,1,0
}
