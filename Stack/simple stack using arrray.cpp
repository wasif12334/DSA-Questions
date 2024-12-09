#include<iostream>
using namespace std;
class Stack{
	int stack[5];
	int top=-1;
	public:
		void push(int x){
			 if(top==5){
			 	cout<<"\nThe stack is full";
			 	
			 }
			 else 
			  top++;
			  stack[top]=x;
		}
		void pop(){
			if(top==-1){
				cout<<"\nThe stack is already empty";
			}
			else
			  top--;
		}
		void show(){
			cout<<"\n[ ";
			for(int i=top;i>=0;i--){
				cout<<stack[i]<<" ";
			}
			cout<<"]";
			
		}
		void peek(){
			cout<<"\nThe peek element is: "<<stack[top]<<endl;
		}
};
int main(){
	Stack s1;
	s1.push(1);
	s1.push(2);
	s1.push(3);
	s1.push(4);
	s1.push(5);
	s1.show();
	s1.peek();
	s1.pop();
	s1.pop();
	s1.show();
	s1.peek();
	
	
	
	
}