#include<iostream>
using namespace std;
int n = 5 ;
int rear = -1;
int front = -1 ;
int queue[5];
void enqueue(int x){
	
	if(rear == n-1){
		cout<<"\nQueue is Full \n";
	}
	else if(rear == -1 && front == -1){
		rear = front = 0 ;
		queue[rear]= x;
	}
	else 
	{
		rear++;
		queue[rear]=x;
	}
} 
void display(){
	cout<<"[ ";
	for(int i=0;i<n;i++){
		cout<<enqueue[i];
	}
		cout<<" ]\n";
}
int main(){
enqueue(1);
enqueue(2);
enqueue(3);
enqueue(4);
enqueue(5);
display();
}