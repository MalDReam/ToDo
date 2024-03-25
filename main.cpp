#include <iostream>
#include <string>
#include <vector>
#include <conio.h>

using namespace std;

// class Note
// {
// private:
//     static short countOfNotes;
//     string title;
//     string desc;

// public:

//     //Ctors and Dtors
//     Note(string title, string desc){
//         countOfNotes++;
//         this->title = title;
//         this->desc = desc;
//     }

//     ~Note(){
//         countOfNotes--;
//     }

//     short get_count(){
//         return countOfNotes;
//     }

//     //Getters
//     string getTitle() {
//         return title;
//     }

//     string getDesc() {
//         return desc;
//     }

//     //Setters
//     void setTitle(string title) {
//         this->title = title;
//     }

//     void getDesc(string desc) {
//         this->desc = desc;
//     }

// };

void printMainMenu()
{
    cout << "       WELCOME to TODO       " << endl;
    cout << "Your actions (choose the number of action):" << endl;
    cout << "1) Add new note" << endl;
    cout << "2) Edit note" << endl;
    cout << "3) Show notes" << endl;
    cout << "4) Delete note" << endl;
    cout << "5) Delete all notes" << endl;
}

void addNote()
{
    // string title, desc;
    // cout << "Enter a title for the new note: ";
    // getline(cin, title);
    // cout << "Enter a description for the new note: ";
    // getline(cin, desc);
    // cout << "Note has been added!" << endl; 
    cout << "You call addNote function" << endl; 
}

void editNote()
{
    cout << "You call editNote function" << endl; 
}

void showNotes()
{
    cout << "You call showNotes function" << endl; 
}

void deleteNote()
{
    cout << "You call deleteNote function" << endl; 
}

void deleteAllNotes()
{
    cout << "You call deleteAllNotes function" << endl; 
}

int main()
{
    char action;

    printMainMenu();
    cin >> action;
    cout << action;
    switch (action)
    {
    case '1':
        addNote();
        break;
    case '2':
        editNote();
        break;
    case '3':
        showNotes();
        break;
    case '4':
        deleteNote();
        break;
    case '5':
        deleteAllNotes();
        break;
    
    default:
        cout << "Enter action: " << endl;
        break;
    }
    
    return 0;
}