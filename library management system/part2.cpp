//write a c++ programe to store the ids of 5 library book in an array and search for a given book id.
//display "book found" if the id is present otherwise display book not found

#include <iostream>
#include <string>
using namespace std;
int main(){
    int book [5];
    int searchID;


cout<< "enter 5 book ids: \n";


for (int i = 0; i < 5; i++){
    cin>>book[i];
};
cout<<"enter searchID:";
cin>>searchID;

for (int i = 0; i<5; i++){
    if (book [i] == searchID) {
        cout<<"book found!\n";
        return 0;

    }

}
cout<<"book not found\n";
}





