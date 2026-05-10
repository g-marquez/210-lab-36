//*****************************************************************************
// COMSC-210 | Lab 36 | Gabriel Marquez
// Description: this program creates and populates a BST from records contained
// in the codes.txt file.
//*****************************************************************************

#include <iostream>
#include "StrBinaryTree.h"
using namespace std;

int main() {
    //test code for Milestone 2
    StrBinaryTree tree;
    tree.insertNode("aaa");
    tree.insertNode("bbb");
    tree.insertNode("ccc");
    tree.insertNode("ddd");
    tree.insertNode("eee");

    // Display the values.
   cout << "Here are the values in the tree:\n";
   tree.displayInOrder();

    return 0;
}