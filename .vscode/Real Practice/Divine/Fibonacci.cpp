#include <iostream>
using namespace std;

void fibonacci(int n){
    int t1=0,t2=1,nextTerm;
    for(int i = 1; i <= n; i ++){
        cout << "\n" << t1;
        nextTerm = t1 + t2;
    t1 = t2;
    t2 = nextTerm;
    }
    return;
}


int main(){
    int n;
    cout << "Enter a num: ";
    cin >> n;

    fibonacci(n);
    return 0;
}