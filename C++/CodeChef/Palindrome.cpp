//Write a function to determine if a given Number is a palindrome.

#include <bits/stdc++.h>

using namespace std;

int main(){

	int num, revnum = 0, temp;
	//taking the input and keeping it in  temp
	cin >> num;
	temp = num;

	if (num == 0){
		return 0;
	}
	//Reversing the number 
	while(temp > 0){
		int i = temp % 10;
		revnum = (revnum*10) + i;
		temp = temp / 10;
	}
	//Checking the reverse no. is equal to the original 
	if(revnum == num){
		cout << "Number is palindrome";
	}else{
		cout << "Number is not palindrome";
	}
	
}