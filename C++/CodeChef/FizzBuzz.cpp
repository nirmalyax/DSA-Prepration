/*Write a program that prints the numbers from 1 to 100. But for multiples of three, print "Fizz" instead of the number, and for the multiples of five, print "Buzz." For numbers that are multiples of both three and five, print "FizzBuzz.*/

#include  <bits/stdc++.h>

using namespace std;

int main(){

   int num;
   cin >> num;

   if(num == 0){
      cout << "Give a proper value !!!";
   }

   for(int i=1 ; i<=num ; i++){

      if(i % 3 == 0 && i % 5 == 0){

         cout << "FizzBuzz ,";

      }else if (i % 3 == 0 ){

         cout << "Fizz ,";

      }else if (i % 5 == 0 ){

         cout << "Buzz ,";

      }else{
         cout << i << " , ";
      }

   }
}