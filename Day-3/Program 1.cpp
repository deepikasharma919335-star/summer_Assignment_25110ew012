#include<iostream>
#include<vector>
using namespace std;
 int prime(int n){
   bool primef=true;
   for(int i=2;i*i<=n;i++){
      if(n%i==0){
         primef=false;
      }

   } 
   return primef;
}
int main(){
  
   cout<<prime( 5)<<endl;
   return 0;
}
