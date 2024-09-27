#include<iostream>
using namespace std ;
int main(){
    int mark[10]={80,72,93,87,55,66,86,56,69,45};
    string grade[10];
    for(int i=0;i<10;i++){
        if(mark[i]>90){
            grade[i]="A";
        }
        else if(mark[i]>80 &mark[i]<90){
            grade[i]="A";
        }
        else  if(mark[i]>70 &mark[i]<80){
            grade[i]="A";
        }
        else  if(mark[i]>60 &mark[i]<70){
            grade[i]="A";
        }
        else if(mark[i]>60 &mark[i]<50){
            grade[i]="A";
        }
        else 
           grade[i]="F";

    }
cout<<"Grade of Mathemathatics Studens are :"<<endl;
for(int i=0;i<10;i++){
    cout<<"\nstudent no "<<i<<" has grade : "<<grade[i]<<endl;
}
}
