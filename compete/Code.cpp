/*Write a program that prints the numbers from 1 to 100. But for multiples of three, print "Fizz" instead of the number, and for the multiples of five, print "Buzz." For numbers that are multiples of both three and five, print "FizzBuzz.*/

#include<bits/stdc++.h>

using namespace std;

int main(){
	int c = 0;
 
    // Empty stack
    stack<int> mystack;
    mystack.push(5);
    mystack.push(13);
    mystack.push(0);
    mystack.push(9);
    mystack.push(4);
    // stack becomes 5, 13, 0, 9, 4
 
    // Counting number of elements in queue
    while (!mystack.empty()) {
        mystack.pop();
        c++;
    }
    cout << c;
}
