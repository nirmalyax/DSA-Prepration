/*Problem statement
You are given an array of integers 'ARR' containing N elements. Each integer is in the range [1, N-1], with exactly one element repeated in the array.

Your task is to find the duplicate element. The duplicate element may be repeated more than twice in the error, but there will be exactly one element that is repeated in the array.

Note :

All the integers in the array appear only once except for precisely one integer which appears two or more times.*/


#include <bits/stdc++.h>

using namespace std; 


int findDuplicate(std::vector<int> arr, int n){

	sort(arr.begin(), arr.end());

	for(int i=0; i < n-1; i++ ){
		if(arr[i] == arr[i+1]){
			return arr[i];
		}
	}
	//return 0;
}


int main(){

	int n;
	cin >> n;

	vector<int> arr(n);
	for(int i=0; i<n; ++i){
		cin >> arr[i];
	}
	

    int duplicate = findDuplicate(arr, n);

    cout << "Duplicate element: " << duplicate << endl;

    //return 0;

} 