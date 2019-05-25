#include "BigNum.hh"
/*/*
Justin John
Louheng Feng, Kayleen Chen, Christopher Chacon, Ryan Henley, Peter Ho, Matthieu Dupuy
I pledge my honor that I have abided by the Stevens Honor System   
*/

BigNum operator + (const BigNum& left, const BigNum& right) {
  BigNum ans;
	ans.d = left.d + right.d; // look up how to do carry ARM   ADD WITH CARRY ADC
	ans.c = left.c + right.c;// + carry;
	ans.b = left.b + right.b;// + carry;
	ans.a = left.a + right.a;// + carry;
	return ans;
}
