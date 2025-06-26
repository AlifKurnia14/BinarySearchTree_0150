#include <iostream>
using namespace std;

class Node{
    public:
    int info;
    Node *leftchild;
    Node *rightchild;

    // Constructor for the Node class
    Node()
    {
        leftchild = nullptr; // intilize left child to null
        rightchild = nullptr; // intilize right child to null

    }
};

class BinaryTree{
    public:
    Node *ROOT;

    BinaryTree(){
        ROOT = nullptr; // intilizing ROOT to null
    }

    void search(int element, Node *&parent, Node *&currentNode){
        // This fuction searches the currentNode of thr specified Node as well as the current Node of its parent
        