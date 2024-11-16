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

    void swapNodes(int x, int y) {
        if (x == y) return;

        Node* prevX = nullptr, *currX = head;
        while (currX && currX->data != x) {
            prevX = currX;
            currX = currX->next;
        }

        Node* prevY = nullptr, *currY = head;
        while (currY && currY->data != y) {
            prevY = currY;
            currY = currY->next;
        }

        if (!currX || !currY) return;

        if (prevX) {
            prevX->next = currY;
        } else {
            head = currY;
        }

        if (prevY) {
            prevY->next = currX;
        } else {
            head = currX;
        }

        Node* temp = currY->next;
        currY->next = currX->next;
        currX->next = temp;
    }

    void printList() {
        Node* current = head;
        while (current) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList ll;
    ll.append(1);
    ll.append(2);
    ll.append(3);
    ll.append(4);
    ll.append(5);

    cout << "Before swapping:" << endl;
    ll.printList();

    ll.swapNodes(2, 4);

    cout << "After swapping 2 and 4:" << endl;
    ll.printList();

    return 0;
}