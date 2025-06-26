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
