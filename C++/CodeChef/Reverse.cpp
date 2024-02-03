/* Write a function to reverse a string in-place. */
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void reverseStr(string& str) {

    int n = str.length();    // corners
    for (int i = 0; i < n / 2; i++)
    swap(str[i], str[n - i - 1]);
}

int main() {
    string str;
    cin >> str;
    reverseStr(str);
    cout << str;
    return 0;
}
