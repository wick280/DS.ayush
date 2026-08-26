#include <iostream>
using namespace std;

int main() {

    const int BOOKS = 3;

    int id[BOOKS];
    string title[BOOKS];

    for (int i = 0; i < BOOKS; i++) {

        cout << "Enter Book " << i + 1 << " ID: ";
        cin >> id[i];

        cin.ignore();

        cout << "Enter Book " << i + 1 << " Title: ";
        getline(cin, title[i]);

        cout << endl;
    }

    cout << "\n===== Library Books =====\n\n";

    for (int i = 0; i < BOOKS; i++) {
        cout << "Book " << i + 1 << endl;
        cout << "ID: " << id[i] << endl;
        cout << "Title: " << title[i] << endl;
        cout << "------------------------\n";
    }

    return 0;
}