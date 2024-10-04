#include<iostream>
using namespace std;
int fabonanci_sum(int n){
if(n==1||n==0){
    return 1;
}
else 
 return fabonanci_sum(n-1)+fabonanci_sum(n-2);
}
int  main(){
int n=5;
cout<<fabonanci_sum(n);
}