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

    //output BST for Milestone 3
    cout << "Here are the values in the tree:\n";
    tree.displayInOrder();

    return 0;
}