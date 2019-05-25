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
    float y =0;
    while(y<=10.1)
    {
        cout << y << ' ';
        y+=0.1;
    }
    cout << endl;
    cout << endl;
    double x=0;
    while(x<=10)
    {
            cout << x << ' ';
            x += 0.1;
    }
    return 0;
}
