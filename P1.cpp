//include headers and libraries
#include "Library.h"
#include <iostream>
#include <string>

using namespace std;

int main(){
    Library library;
    //ask for commands and execute
    string command;
    string bookName;
    while(cin >> command){
        if(command == "add"){
            cin >> bookName;
            if(library.addBook(bookName)){
                cout << "Book " << bookName << " added." << endl;
            } else {
                cout << "Book " << bookName << " could not be added." << endl;
            }
        } else if(command == "remove"){
            cin >> bookName;
            if(library.removeBook(bookName)){
                cout << "Book " << bookName << " removed." << endl;
            } else {
                cout << "Book " << bookName << " could not be removed." << endl;
            }
        } else if(command == "print"){
            library.print();
        } else if(command == "quit") {
            break;
        } else {
            cout << "Invalid command." << endl;
        }
    }
    return 0;
}
