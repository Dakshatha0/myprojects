#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long n){
    
     if(n == 1)
        return false;

     for(long long i = 2; i*i <= n; i++){
         if(n % i == 0){
         return false;
         }

     }
     return true;
}
int main(){

    long long x;

    cout << "The number is: ";
    cin >> x;

    cout.setf(ios::boolalpha);
    cout << "\nThe output is: " << isPrime(x);

    return 0;
}
