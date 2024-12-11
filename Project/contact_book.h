#ifndef CONTACT_BOOK_H
#define CONTACT_BOOK_H

#include <iostream>
#include <string>

using namespace std;

class ContactBook {
public:
    // Struct for Contact
    struct Contact {
        string name;
        int phone_number;
        Contact* next;
    };

    Contact* head;  // Head pointer of the linked list

    ContactBook() {
        head = nullptr;  // Initialize the head as nullptr
    }

    // Function to add a contact
    void add_contact(string name, int phone_number) {
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
    void display_contacts() {
        if (head == nullptr) {
            cout << "\nNo contacts available.\n";
            return;
        }

        Contact* temp = head;
        while (temp) {
            cout << "Name: " << temp->name << ", Phone: " << temp->phone_number << endl;
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

    // Sorting function to sort the contacts by name using bubble sort
    void sort_contacts() {
        if (head == nullptr || head->next == nullptr) {
            return;  // No need to sort if the list is empty or has only one contact
        }

        bool swapped;
        do {
            swapped = false;
            Contact* temp = head;

            while (temp && temp->next) {
                if (temp->name > temp->next->name) {
                    // Swap the contacts
                    string tempName = temp->name;
                    int tempPhone = temp->phone_number;
                    temp->name = temp->next->name;
                    temp->phone_number = temp->next->phone_number;
                    temp->next->name = tempName;
                    temp->next->phone_number = tempPhone;
                    swapped = true;
                }
                temp = temp->next;
            }
        } while (swapped);
    }
};



#endif
