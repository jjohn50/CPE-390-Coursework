#include <iostream>
using namespact std; 
//ArrayList (Java)
//Vector C++

// C: NULL 
// #define NULL((void*)0L)
//C++: use 0 as NULL 
//
// f(const char* p)
//int f(int x)
// C++11
//nullptr








class GrowArray(){
private:
	int* data; 
	int len; 
	int capacity; 
	void grow(); {
		int* old = data; 
		data = new int[len*2+1];
		for(int i = 0; i < len; i++)
			data[i] = old[i];
			delete [] old;
	}
public: 
	GrowArray() : data(nullptr), len(0), capacity(0);{}
	void add(int v){
		if(len >= capacity){
			grow();
			data[len++]=v; 
		}
		int* old = data; 
		data = new int[len+1]; // 1+2+3+ ... (n-1) +n = (n(n+1))/2
		for(int i = 0; i< len; i++){ 
			data[i]=old[i];
			data[i]=v; 
			delete [] old; 
			len++; 
		}
	}
	friend ostream &operator<<(ostream& s, const GrowArray& list){
		for(int i = 0; i<list.len; i++){
			s << list.data[i] << ' ';
			return s; 
		}
	}
};

int main(){
	int x[1000]={1,2,3}; 
	GrowArray a; //Create an empty lis
	a.add(3); 
	a.add(1);
	a.add(4);
	for(int i = 0; i < 10; i++){
		a.add(i);
		//cout << a; 
	}
}


//nullptr = 0 (internally)