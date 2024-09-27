#include<iostream>
using namespace std;
struct Person{
 char name[50];
 int age;
 float salary;
};
int main(){
    Person p1;
    cout<<"\nEnter Full name :";
    cin.get(p1.name,50);
    cin.ignore();
    cout<<"\nEnter the Age : ";
    cin>>p1.age;
     cout<<"\nEnter the Salary : ";
    cin>>p1.salary;
    cout<<"\nDisplay Information : ";
    cout<<"\nName : "<<p1.name<<endl;
    cout<<"\nAge : "<<p1.age<<endl;
    cout<<"\nSalary : "<<p1.salary<<endl;
}