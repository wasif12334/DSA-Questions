 #include<iostream>
using namespace std;
int main(){
    int array_1[2],array_2[2];
    cout<<"ENter the first array elements :";
    for(int i=0;i<2;i++){
        cin>>array_1[i];
    }
        cout<<"ENter the Secound array elements :";
for(int i=0;i<2;i++){
        cin>>array_2[i];
    }

 int size0farrays=((sizeof(array_1)/sizeof(array_1[1]))+(sizeof(array_2)/sizeof(array_2[1])));
 int merged_array[size0farrays];


for(int i=0;i<2;i++){
 merged_array[i]= array_1[i]+array_2[2];
}
for(int i=0;i<2;i++){
cout<<"merged : "<<merged_array[i];
}
int sum=0;
int minevalue=0;
for(int i=0;i<2;i++){
    
}
}