#include<iostream>
using namespace std;

int main (){
    int n;
    cout<<"enter a number";
    cin>> n;
   int orginal =n;
   int reverse=0;
   while(n>0){
    int digit=n%10;
    reverse=reverse*10+digit;
    n=n/10;
   }
   if(orginal==reverse){
    cout<<"is palindrome"<< " ";
   } else{
    cout<<"not palindrime"<< " ";
    return 0;
   }
}
