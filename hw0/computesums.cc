#include <iostream>
using namespace std;
/*
	Author: Justin Mathew John
    Collaborators: I looked at this youtube videos to figure out how to use github:
    https://www.youtube.com/watch?v=O72FWNeO-xY&index=7&list=PL5-da3qGB5IBLMp7LtN8Nc3Efd4hJq0kD
    https://www.youtube.com/watch?v=ruieT3Nkg2M&index=9&list=PL5-da3qGB5IBLMp7LtN8Nc3Efd4hJq0kD&t=0s
    I look at this to figure out how to use the math class in C++:
    http://www.cplusplus.com/forum/beginner/10441/
    I made a google docs with how to use github and I gave it to the following people: Ryan Henley, Hart Tecson, and Christopher Chacon

    I pledge my honor that I have abided by the Stevens Honor System: Justin John
 */
// sum the numbers from 1 to n and return the answer
int sum(int n) {
    int y = 0;
    for(int p =1; p<=n; p++)
    {
        y = y+p;
    }
    return y;
}

// sum the numbers from 1/1 to 1/n and return
float sumReciprocals(int n) {
    float q =0;
    for(float z =1; z<=n; z++)
    {
        q=q+(1/z);
    }
    return q;
}

// sum the numbers from 1/n to 1/1 (same as above but reversed) and return
float sumReciprocalsReverse(int n) {
    float t=0;
    for(float v =n; v>=1; v--)
    {
        t=t+(1/v);
    }
    return t;
}

int main() {
    cout << sum(100) << '\n';
    cout << sumReciprocals(100) << '\n';
    cout << sumReciprocalsReverse(100) << '\n';
    return 0;
}