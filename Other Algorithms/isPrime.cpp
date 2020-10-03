#include <bits/stdc++.h> 
using namespace std; 
  
bool isPrime(int n) 
{ 
    if (n <= 1) 
        return false; 
  
    for (int i = 2; i < n; i++) 
        if (n % i == 0) 
            return false; 
  
    return true; 
} 
  
int main() 
{ 
    int x;
    cout<<"Enter a number to check isPrime or not: ";
    cin>>x;
    isPrime(x) ? cout << " true\n" : cout << " false\n"; 
    return 0; 
} 
