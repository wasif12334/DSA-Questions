#ifndef CONTACT_BOOK_H
#define CONTACT_BOOK_H

#include <iostream>
#include <string>
#include<iomanip>

using namespace std;

class ContactBook {
public:
    // Struct for Contact
    struct Contact {
        string name,phone_number;
        Contact* next;
    };

    Contact* head;  // Head pointer of the linked list

    ContactBook() {
        head = nullptr;  // Initialize the head as nullptr
    }

    // Function to add a contact
    void add_contact(string name, string  phone_number) {
        Contact* new_contact = new Contact{name, phone_number, nullptr};

        if (!head) {
            head = new_contact;  // If the list is empty, new contact becomes the head
        } else {
            Contact* temp = head;
            while (temp->next) {
                temp = temp->next;
            }
            temp->next = new_contact;  // Add to the end of the list
        }
    }

    // Function to display all contacts
   // Function to display all contacts in a table format
    void display_contacts() {
        if (head == nullptr) {
            cout << "\nNo contacts available.\n";
            return;
        }

        // Displaying table headers
        cout << left << setw(20) << "Name" << setw(15) << "Phone Number" << endl;
        cout << "----------------------------------------" << endl;

        // Display contacts in table rows
        Contact* temp = head;
        while (temp) {
            cout << left << setw(20) << temp->name << setw(15) << temp->phone_number << endl;
            temp = temp->next;
        }
    }

    // Function to search for a contact
    void search_contact(string key) {
        Contact* temp = head;
        bool found = false;

        while (temp) {
            if (temp->name == key) {
                cout << "Found contact - Name: " << temp->name << ", Phone: " << temp->phone_number << endl;
                found = true;
                break;
            }
            temp = temp->next;
        }

        if (!found) {
            cout << "\nContact not found.\n";
        }
    }

    // Function to delete a contact
    void delete_contact(string name) {
        if (head == nullptr) {
            cout << "\nNo contacts to delete.\n";
            return;
        }

        Contact* temp = head;
        Contact* prev = nullptr;

        // If the contact to be deleted is the head
        if (head->name == name) {
            head = head->next;
            delete temp;
            cout << "\nContact deleted.\n";
            return;
        }

        // Search for the contact to delete
        while (temp && temp->name != name) {
            prev = temp;
            temp = temp->next;
        }

        if (!temp) {
            cout << "\nContact not found.\n";
            return;
        }

        prev->next = temp->next;  // Unlink the contact from the list
        delete temp;
        cout << "\nContact deleted.\n";
    }

    // Function to reset all contacts (delete the entire list)
    void reset_contacts() {
        Contact* temp = head;
        while (temp) {
            Contact* next = temp->next;
            delete temp;
            temp = next;
        }
        head = nullptr;
        cout << "\nAll contacts have been reset.\n";
    }

    // Sorting function to sort the contacts by name using Merge Sort
    void merge_sort() {
        if (head == nullptr || head->next == nullptr) {
            return;  // No need to sort if the list is empty or has only one contact
        }

        head = merge_sort_recursive(head);  // Start merge sort on the linked list
    }

private:
    // Merge Sort recursive function
    Contact* merge_sort_recursive(Contact* head) {
        if (head == nullptr || head->next == nullptr) {
            return head;  // Base case: single element or empty list
        }

        Contact* left = nullptr;
        Contact* right = nullptr;

        // Split the list into two halves
        split(head, left, right);

        // Recursively sort the two halves
        left = merge_sort_recursive(left);
        right = merge_sort_recursive(right);

        // Merge the sorted halves and return the sorted list
        return merge(left, right);
    }

    // Merge two sorted linked lists
    Contact* merge(Contact* left, Contact* right) {
        if (!left) return right;
        if (!right) return left;

        // Compare the names of the contacts
        if (left->name < right->name) {
            left->next = merge(left->next, right);
            return left;
        } else {
            right->next = merge(left, right->next);
            return right;
        }
    }

    // Split the list into two halves
    void split(Contact* head, Contact*& left, Contact*& right) {
        Contact* slow = head;
        Contact* fast = head->next;

        // Move fast pointer two steps and slow pointer one step
        while (fast) {
            fast = fast->next;
            if (fast) {
                slow = slow->next;
                fast = fast->next;
            }
        }

        // Split the list into two halves
        left = head;
        right = slow->next;
        slow->next = nullptr;  // Disconnect the two halves
    }
};

#endif
