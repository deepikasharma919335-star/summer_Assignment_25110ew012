#include<iostream>
using namespace std;

int main (){
    int n;
    cout<<"enter a number";
    cin>> n;
    int product=1;;
    while(n>0){
        int digit=n%10;
        product*=digit;
        n=n/10;

    }
    cout<<product is:<<product<<" ";
    
    return 0;
}
