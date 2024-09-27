#include<iostream>
using namespace std;
struct Smartphone{
    int RAM = 3,cpu=23;
    float screen_size=15.4;

};
int main(){
 Smartphone s1;
 cout<<"Ram : "<<s1.RAM<<" GB "<<endl;
 cout<<"Screen Size : "<<s1.screen_size<<" inches "<<endl;
 cout<<"CPU : "<<s1.cpu<<" GHz"<<endl;
}