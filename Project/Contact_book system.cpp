#include <iostream>
#include <string>
#include<windows.h>
#include "contact_book.h"

using namespace std;
void Color(int color){
 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
// Main function
int main() {
    Color(2);  // Set text color to green
    ContactBook book;  // Create an instance of the ContactBook class

    int choice;

    string name, key, phone_num;

    do {
        cout << "\n\t\t\t\t\t _____________________________________________\n";
        cout << "\t\t\t\t\t|\t     ------CONTACT BOOK------\t      |\n";
        cout << "\t\t\t\t\t|  1- Add Contact \t                      |\n";
        cout << "\t\t\t\t\t|  2- Display All Contacts \t              |\n";
        cout << "\t\t\t\t\t|  3- Search Contact\t                      |\n";
        cout << "\t\t\t\t\t|  4- Delete Contact\t                      |\n";
        cout << "\t\t\t\t\t|  5- Reset All Contacts\t              |\n";
        cout << "\t\t\t\t\t|  6- Exit\t                              |\n";
        cout << "\t\t\t\t\t|________________________________________     |\n";

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
     book.merge_sort();
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
