#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
using namespace std;

// Utility function to change text color
void Color(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

// Class for managing contacts
class ContactBook {
private:
    // Node structure for storing contact details
    class Contact {
    public:
        string name;
        int phone_number;
        Contact* next;

        Contact(string n, int ph) {
            name = n;
            phone_number = ph;
            next = NULL;
        }
    };

    Contact* head; // Head pointer for the linked list

    // Save contacts to a file
    void save_to_file() {
        ofstream file("contacts.txt", ios::trunc); // Open file in truncate mode
        if (file.is_open()) {
            Contact* temp = head;
            while (temp != NULL) {
                file << temp->name << " " << temp->phone_number << endl;
                temp = temp->next;
            }
            file.close();
        } else {
            cout << "Error opening file to save contacts." << endl;
        }
    }

public:
    // Constructor to initialize the contact list
    ContactBook() : head(NULL) {
        load_from_file(); // Load contacts from file at startup
    }

    // Destructor to free memory
    ~ContactBook() {
        Contact* current = head;
        while (current != NULL) {
            Contact* next = current->next;
            delete current;
            current = next;
        }
    }

    // Load contacts from a file
    void load_from_file() {
        ifstream file("contacts.txt");
        if (file.is_open()) {
            string name;
            int phone_number;
            while (file >> name >> phone_number) {
                add_contact(name, phone_number, false); // Add contact without saving to avoid recursive calls
            }
            file.close();
        } else {
            cout << "No existing contact file found. Starting fresh." << endl;
        }
    }

    // Add a new contact
    void add_contact(string name, int phone_num, bool save = true) {
        Contact* newContact = new Contact(name, phone_num);
        if (head == NULL) {
            head = newContact;
        } else {
            Contact* temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newContact;
        }
        cout << "\nContact successfully added." << endl;
        if (save) save_to_file();
    }


// Display all contacts in a table format
void display_contacts() const {
    Contact* temp = head;
    if (!temp) {
        cout << "No contacts available." << endl;
        return;
    }

    // Print the table header
    cout << "\n-------------------------------------------------" << endl;
    cout << "|   Name 	  |   Phone Number   |" << endl;
    cout << "-------------------------------------------------" << endl;

    // Print each contact in a row
    while (temp != NULL) {
        cout << "| " << temp->name << "  	  | ";
        cout << " "<<temp->phone_number << "\t      |" << endl;
        cout << "-------------------------------------------------" << endl;
        temp = temp->next;
    }
    cout << endl;
}

    // Search for a contact by name
    void search_contact(string key) const {
        Contact* temp = head;
        bool found = false;
        while (temp != NULL) {
            if (temp->name == key) {
                cout << "Name: " << temp->name << endl;
                cout << "Phone Number: " << temp->phone_number << endl;
                found = true;
                break;
            }
            temp = temp->next;
        }
        if (!found) {
            cout << "\nContact Not Found." << endl;
        }
    }

    // Delete a contact by name
    void delete_contact(string val) {
        if (head == NULL) {
            cout << "\nNo contacts to delete." << endl;
            return;
        }

        if (head->name == val) {
            Contact* toDelete = head;
            head = head->next;
            delete toDelete;
            cout << "\nThe contact has been successfully deleted!" << endl;
            save_to_file();
            return;
        }

        Contact* temp = head;
        while (temp->next != NULL && temp->next->name != val) {
            temp = temp->next;
        }

        if (temp->next == NULL) {
            cout << "\nThere is no contact with the name: " << val << endl;
        } else {
            Contact* toDelete = temp->next;
            temp->next = temp->next->next;
            delete toDelete;
            cout << "\nThe contact has been successfully deleted!" << endl;
            save_to_file();
        }
    }

    // Reset all contacts (delete from memory and file)
    void reset_contacts() {
        // Delete all nodes in the linked list
        Contact* current = head;
        while (current != NULL) {
            Contact* next = current->next;
            delete current;
            current = next;
        }
        head = NULL;

        // Clear the file
        ofstream file("contacts.txt", ios::trunc);
        if (file.is_open()) {
            file.close();
            cout << "\nAll contacts have been reset!" << endl;
        } else {
            cout << "\nError clearing contacts file." << endl;
        }
    }
};

// Main function
int main() {
    Color(2);
    ContactBook book;

    int choice, phone_num;
    string name, key;

    do {
        cout << "\n\t\t\t\t\t _____________________________________________\n";
        cout << "\t\t\t\t\t|\t     ------CONTACT BOOK------      |\n";
        cout << "\t\t\t\t\t|  1- Add Contact                      |\n";
        cout << "\t\t\t\t\t|  2- Display All Contacts             |\n";
        cout << "\t\t\t\t\t|  3- Search Contact                   |\n";
        cout << "\t\t\t\t\t|  4- Delete Contact                   |\n";
        cout << "\t\t\t\t\t|  5- Reset All Contacts               |\n";
        cout << "\t\t\t\t\t|  6- Exit                             |\n";
        cout << "\t\t\t\t\t|________________________________________|\n";

        cout << "\nEnter your choice: ";
        cin >> choice;

        // Clear buffer after choice input
      cin.ignore();

        system("cls"); // Optional: Clears the screen for better UX

        switch (choice) {
        case 1:
            cout << "Enter the Name: ";
            getline(cin, name); // Use getline for names with spaces
            cout << "Enter the Phone Number: ";
            cin >> phone_num;
            cin.ignore(); // Clear buffer
            book.add_contact(name, phone_num);
            break;
        case 2:
            book.display_contacts();
            break;
        case 3:
            cout << "Enter the name of the contact you want to search: ";
            getline(cin, key);
            book.search_contact(key);
            break;
        case 4:
            cout << "Enter the name: ";
            getline(cin, name);
            book.delete_contact(name);
            break;
        case 5:
            book.reset_contacts();
            break;
        case 6:
            cout << "\nExiting...";
            break;
        default:
            cout << "\nInvalid choice. Try again!\n";
        }
    } while (choice != 6);

    return 0;
}
