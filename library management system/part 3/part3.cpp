//write a cpp programe where we can input book ids and then arrange the book ids in arranging order

#include <iostream>
#include <string>
using namespace std;

#include <iostream>
#include <string>
using namespace std;
int main(){
    int book [5];
    int searchID;


cout<< "enter 5 book ids: \n";


for (int i = 0; i < 5; i++){
    cin>>book[i];
}
//sorting
for (int i = 0; i<4; i++){
    for(int j = 0; j<4-i; j++){
        if (book[j]>book[j+1]){
            int temp = book[j];
            book[j] = book[j+1];
            book [j+1] = temp;


        }
    
    }
    for (int i = 0; i<5; i++){
    cout<< book[i]<<endl;
}
}
