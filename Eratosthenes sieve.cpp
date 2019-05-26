#include <iostream>
#include <cmath>

//C++ Code for this program
int eratosthenes(bool isPrime[], int n){
	int numWords = (n+31)/32;
	//Step 1: 
	for(int i =2; i < numWords; i++)
		isPrime[i] = 0xFFFFFFFF; //new way or doing it instead of 1
	int count = 0; 
	for(int i =2*2; i <numWords; i+=2)
	isPrime[i] = false; //do this bitwise faster
// 1 3 5 7 9 11 13 15 17 19 21 23 25  
//0 1 2 3 							//Right shift by 1 
	int count = 1; // special case: 2 is prime
	for(int i =3; i<=sqrt(n); i+=2){
		if(isPrime[i]){ 		// i = 97*97 
			//to turn i into the right bit 
			// i/32 is word in the array 
			// i MOD 32 is the bit within the word 
			// i MOD 2**n == i AND 2**n-1 
			// i MOD 32 == i and 31 
			//2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 
				1   1   1   0    1 		1 	 0     1    1	    0     1     0
			for(int j = i*i; j<n; j+=2*i){
				isPrime[j]= false; 
			}
		}
		return count; 
	}
}










int main(){
	const int n =1024*1024*1024; 
	int* isPrime = new bool[(n+31)/32]; //used for 32 byte OS 
	cout << eratosthenes(isPrime.n)
	delete [] isPrime; 
}