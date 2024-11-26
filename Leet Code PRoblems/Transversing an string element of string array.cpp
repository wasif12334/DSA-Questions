 
 uuu#include<iostream>
using namespace std;
int main(){
	string arr[3] = { "Wasif","Zohiab","Abdullah"};
	string asckii[3];
	for(int i=0;i<3;i++){
		for(int j=0;j<1;j++){
	        if(int(arr[i][j])<int(arr[i+1][j+1]))
		       {
		       	  cout<<arr[i][j];
			   }
		}
	cout<<endl;
	}
	for(int i=0;i<3;i++){
	
		cout<<asckii[i];
	}
}