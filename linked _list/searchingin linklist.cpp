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
        if (head==nullptr) {
            head = newNode;
            return;
        }
        Node* last = head;
        while (last->next) {
            last = last->next;
        }
        last->next = newNode;
    }

    bool search(int n) {
        Node* current = head;
        while (current) {
            if (current->data == n) {
                return true;
            }
            current = current->next;
        }
        return false;
    }
};

int main() {
    LinkedList ll;
    ll.append(1);
    ll.append(2);
    ll.append(3);
    cout << "Is 2 in the linked list? " << (ll.search(2) ? "Yes" : "No") << endl;
    cout << "Is 4 in the linked list? " << (ll.search(4) ? "Yes" : "No") << endl;
    return 0;
}