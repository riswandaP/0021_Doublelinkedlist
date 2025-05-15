#include <iostream>
#include <string>
using namespace std;

class Node
{
    public:
        int noMhs;
        Node *next;
        Node *prev;
};

class DoubleLinkedList
{
    private:
        Node *START;

    public:
    DoubleLinkedList()
    {
        START = NULL;
    }

    void addNode()
    {
        int nim;
        string nm;
        cout << "\nEnter the roll number of student";
        cin >> nim;

        // Step 1: Alocate memory for new node
        Node *newNode = new Node();

        // Step 2: Assign values to new node
        newNode->noMhs = nim;

        
    }

}