#pragma once

#include <iostream>

class BigNum {
private:
	// 1234
	uint32_t *a; // a is the high order part
public:
	BigNum() {}
	BigNum(uint32_t *input) : a(input){}
	
	friend BigNum add128(BigNum& dest, const BigNum& left, const BigNum& right); // dest = left + right
	friend BigNum operator +(const BigNum& left, const BigNum& right);

	friend std::ostream& operator <<(std::ostream& s, const BigNum& big) {
		return s << big.a[0] << "," << big.a[1] << "," << big.a[2] << "," << big.a[3];
	}
};
