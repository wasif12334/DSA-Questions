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
void dequeue(){
	if(rear == -1 && front == -1){
		cout<<"\nQueue is Underflow !\n";
	}
	else if(front == rear){
		cout<<"\nThe value "<<queue[front]<<" is deleted \n";
		front =rear=-1;
	}
	else
	 {
	 	cout<<"\nThe value "<<queue[front]<<" is deleted \n";
	 	front++; 
	 }
}
void display(){
 if(rear==-1 &&	front ==-1){
 	cout<<"\nThe Queue is Empty!";
 }
 else
  {
  	cout<<"\n[ ";
  	for(int i=front;i<rear+1;i++){
  		cout<<queue[i]<<" ";
	  }
	  	cout<<" ]\n";
  }
}
void peek(){
	if(rear == -1 && front == -1){
		cout<<"\nQueue is Underflow !\n";
	}
	else {
		cout<<"\nThe front value is "<<queue[front]<<endl;
	}	
}
int main(){
enqueue(1);
enqueue(2);
enqueue(3);
enqueue(4);
enqueue(5);
display();
peek();
dequeue();
display();
peek();
}