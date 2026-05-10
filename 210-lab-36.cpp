//*****************************************************************************
// COMSC-210 | Lab 36 | Gabriel Marquez
// Description: this program creates and populates a BST from records contained
// in the codes.txt file.
//*****************************************************************************

#include <iostream>
#include <string>
#include <fstream>
#include "StrBinaryTree.h"
using namespace std;

int main_menu();

string FILE_NAME = "codes.txt";

int main() {
    //decare empty BST
    StrBinaryTree tree;
    
    //populate with strings from codes.txt
    string input;
    ifstream fin(FILE_NAME);
    if (fin.good( )) {
        while (fin >> input)
            tree.insertNode(input);
        fin.close( );
    }
    else {
        cout << "ERROR! Please verify file name/directory and restart program.";
        return 1;
    }

    //display main menu for program
    int choice = main_menu();

    return 0;
}

//description: main_menu() displays the menu options that give the user options
// of what do do in the program
//arguments: N/A
//returns: an integer used as the user's choice for what operation to perform
int main_menu() {
    //read choice as a string, then convert to help with input validation
    string choice;
    cout << "1. Add Record" << endl
         << "2. Delete Record" << endl
         << "3. Search for Record" << endl
         << "4. Modify Record" << endl
         << "5. Exit" << endl;
    cout << "Choice --> ";
    cin >> choice;
    //check if input string is anything except for numbers 1-5
    while (choice != "1" && choice != "2" && choice != "3" && 
           choice != "4" && choice != "5") {
        cout << "Invalid choice, try again --> ";
        cin >> choice;
    }
    //convert to int and return if input is valid
    return stoi(choice);
}