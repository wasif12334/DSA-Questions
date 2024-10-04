#include<iostream>
using namespace std;
int factorial(int n){
    int x;
   
     if(n==1 || n==0 ){
        return 1;
    }
    
  else if(n>1){
        x = n*factorial(n-1);
    }
    return x;
}
int main(){
int n;
cout<<"\nEnter any number :";
cin>>n;
int fac =factorial(n);
cout<<"Factorial of  "<<n<<" is :"<<fac;
}