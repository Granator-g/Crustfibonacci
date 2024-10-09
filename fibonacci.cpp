#include <iostream>
using namespace std;

int main(){
    int  a1=0, a2=1, next_term=0,n;

    cout<< "enter a positive number:";
    cin>>n;
    //display the first two terms which is always 0 and 1
    cout<<"Fibonacci series:"<<a1<<","<<a2<<",";

    next_term=a1+a2;
    while(next_term <= n){
        cout<< next_term<<",";
        a1=a2;
        a2=next_term;
        next_term=a1+a2;

    }
    return 0;
}