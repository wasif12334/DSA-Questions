#include<iostream>
using namespace std;
float max(float n1,float n2){
    float maxnum = (n1>n2)? n1:n2;
    return maxnum;
}
float min(float n1,float n2){
   float minnum = (n1<n2)? n2:n1;
   return minnum;
}
int main(){
    float n1,n2;
    n1=4.1;
    n2=6.5;
    cout<<"\nMax Number : "<<max(n1,n2);
    cout<<"\nMin Number : "<<min(n1,n2);
    

}