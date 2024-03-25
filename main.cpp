#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Note
{
private:
    static short countOfNotes;
    string title;
    string desc;

public:
    Note(string title, string desc){
        countOfNotes++;
        this->title = title;
        this->desc = desc;
    }

    short get_count(){
        return countOfNotes;
    }

    //Getters
    string getTitle() {
        return title;
    }

    string getDesc() {
        return desc;
    }

    //Setters
    void setTitle(string title) {
        this->title = title;
    }

    void getDesc(string desc) {
        this->desc = desc;
    }

};

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
    string title, body;
    cout << "Enter a title for the new note: ";
    getline(cin, title);
    cout << "Enter a body for the new note: ";
    getline(cin, body);
    cout << "Note has been added!" << endl; 
}

int main()
{
    return 0;
}