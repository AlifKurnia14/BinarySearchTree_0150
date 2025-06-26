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
        currentNode= ROOT;
        parent = nullptr;
        while ((currentNode != nullptr )&&(currentNode->info !=element)){
            parent = currentNode ;
            if (element < currentNode ->info)
            currentNode = currentNode->leftchild;
            else
            currentNode = currentNode ->rightchild;
        }
    }
    void insert(){
        int x;
        cout << "Masukan nilai: ";
        cin>>x;

        // step 1: allocate memory for the new node
        Node *newNode = new Node();

        