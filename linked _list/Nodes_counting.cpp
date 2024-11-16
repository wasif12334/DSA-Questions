#include <iostream>
using namespace std;

class Node {
public:
int data;
Node* next;

Node(int val) 
{
data = val ;
next = nullptr;
}   
};

class LinkedList {
public:
Node* head;

LinkedList() {
head = nullptr;
} 

void append(int data) {
Node* newNode = new Node(data);
if (!head) {
head = newNode;
return;
}
Node* last = head;
while (last->next) {
last = last->next;
}
last->next = newNode;
}

int size() {
int count = 0;
Node* current = head;
while (current) {
count++;
current = current->next;
}
return count;
}
};

int main() {
LinkedList ll;
ll.append(1);
ll.append(2);
ll.append(3);
cout << "Number of nodes in linked list: " << ll.size() << endl;
return 0;
}