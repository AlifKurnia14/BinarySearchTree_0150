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

        // step 2: assign value to the data field of the new node
        newNode -> info =x;

        // step 3: make the left and right child of the new node point to Null
        newNode ->leftchild = nullptr;
        newNode ->rightchild = nullptr;

        // step 4: locate the new node which will be the praent of the new node to be inserted
        Node *parent = nullptr;
        Node *currentNode = nullptr;
        search(x, parent, currentNode);

        // step 5: if parent is Null (tree is empty)
        if (parent == nullptr){
            // 5a: Mark the new node as ROOT
            ROOT = newNode ;

            // 5b: Exit
            return;
        }

        // step 6: if the value in the data field of new node is less than that of parent
        if (x< parent -> info){
            // 6a: make the left child of parent point to the new node 
            parent -> leftchild = newNode;

            // 6b : Exit
            return;

        }

        // step 7: if the value in the data field of the new node is greatre than that of the parent
        else if (x >parent ->info){
            //7a :make the right child of the parent point to the new node
            parent ->rightchild=newNode;

            //7b : exit
            return;
        }
    }

    bool isEmpty(){
        //check if the tree is empty
        return ROOT == nullptr;

    }

    