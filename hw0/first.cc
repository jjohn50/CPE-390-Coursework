#include <iostream>
using namespace std;
/*
	Author: Justin Mathew John
    Collaborators: I looked at these youtube videos to figure out how to use github:
    https://www.youtube.com/watch?v=O72FWNeO-xY&index=7&list=PL5-da3qGB5IBLMp7LtN8Nc3Efd4hJq0kD
    https://www.youtube.com/watch?v=ruieT3Nkg2M&index=9&list=PL5-da3qGB5IBLMp7LtN8Nc3Efd4hJq0kD&t=0s
    I look at this to figure out how to use the math class in C++:
    http://www.cplusplus.com/forum/beginner/10441/
    I made a google docs with how to use github and I gave it to the following people: Ryan Henley, Hart Tecson, and Christopher Chacon

    I pledge my honor that I have abided by the Stevens Honor System: Justin John
 */
int main() {
for(int t =1; t<=10; t++)
{
	cout << t << ' ';
}
cout << endl;
for(int i = 10; i>=0; i--)
{
	cout << i << ' ';
}
cout << endl;
for(int q =0; q<=10; q+=2)
{
	cout << q << ' ';
}
cout << endl;
int y = 1;
while(y<=1024)
{
	cout << y << ' ';
	y*=2;
}
	return 0;
}
