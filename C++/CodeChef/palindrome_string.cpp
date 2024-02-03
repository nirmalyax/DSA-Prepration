//Write a program to check the string is palindrome or notx

#include <bits/stdc++.h>

using namespace std;

int main(){

	string str , revstr;

	
	cin >> str;

	revstr = str;

	//function to reverse the string
	reverse(revstr.begin() , revstr.end());

	//cout << revstr;

	if(str == revstr){
		cout<<"Palindrome";
	}else{
		cout<<"Not Palindrome";
	}

}