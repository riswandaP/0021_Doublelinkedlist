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

        // Step 3: Insert new node at the end of the list is empty or nim is smallest
        if (START == NULL || nim <= START->noMhs)
        {
            if (START != NULL && nim == START->noMhs)
            {
                cout << "\nDuplicate number not allowed" << endl;
                return;
            }
            // Step 4: newNode.next = START
            newNode->next = START;

            // Step 5: START.prev = newNode (if start exists)
            if (START != NULL)
                START->prev = newNode;

            // Step 6: newNode.prev = NULL
            newNode->prev = NULL;

            // Step 7: START = newNode
            START = newNode;
            return;
        }

        // Insert in between node
        // Step 8: Locate position for insertion
        Node *current = START;
        while (current->next != NULL && current->next->noMhs < nim)
        {
            current = current->next;
        }

        if (current->next != NULL && nim == current->next->noMhs)
        {
            cout << "\nDuplicate roll number not allowed" << endl;
            return;
        }


};