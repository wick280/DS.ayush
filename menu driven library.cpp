//write a menu driven cpp programee, for a simple lbrary systewm that allows the user to ask book iddisplay, search for the book ids, and exit the programme


#include <iostream>
using namespace std;


int main() {
    int book [10];
    int n = 0;
    int bookID;
    int choice;
    int search;

    do {
        cout << "-----------SMART LIBRARY-----------" << endl;
        cout << "1. Add Books " << endl;;
        cout << "2. Display Books" << endl;
        cout << "3. Search Books" << endl;
        cout << "4. Exit" << endl;

        cin >> choice;

        if (choice == 1){

            cout << "Enter the BookID you want to Add: ";
            cin >> book[n];
            n++;
            cout << "Books Added!" << endl;
        }

        else if (choice == 2){
            for (int j = 0; j < n; j++){
                cout << "BookIDs: " << book[j] << endl;
            }
        }

        else if (choice == 3) {
            cout << "Enter the BookID you want to Search: ";
            cin >> search;

            for (int k = 0; k <5; k++) {

                if (book [k] == search){
                    cout << "Book Found" << endl;
                    break;
                }
                else {
                    cout << "Book Not Found" << endl;
                    break;
                }
            }
           
        }

    } while (choice !=4);
        return 0;

    }