// C++ Program to find largest prime
// factor of number
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
// A function to find largest prime factor
int conversion(int input1)
{
    int maxPrime = -1;

    while (input1 % 2 == 0) {
        maxPrime = 2;
        input1 >>= 1; // equivalent to n /= 2
    }
     while (input1 % 3 == 0) {
        maxPrime = 3;
        input1=input1/3;
    }
 
    for (int i = 5; i <= sqrt(input1); i += 6) {
        while (input1 % i == 0) {
            maxPrime = i;
            input1 = input1 / i;
        }
      while (input1 % (i+2) == 0) {
            maxPrime = i+2;
            input1 = input1 / (i+2);
        }
    }
 
    
    if (input1 > 4)
        maxPrime = input1;
 
    return maxPrime;
}
 
// Driver program to test above function
int main()
{
    long long n;
    //cout << maxPrimeFactors(n) << endl;
 
    cin>>n;
    cout <<  conversion(n);
 
}