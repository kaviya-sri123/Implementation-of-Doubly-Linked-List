#include <iostream>
using namespace std;
class Node
{
    public:
        int data;
        Node *prev;
        Node *next;
};
class DoublyLL
{
    public:
        Node *head;
        void insertAtFirst(int e);
        void insertAtLast(int e);
        void insertInBetween(int e,int p);
        void deleteAtFirst();
        void deleteAtLast();
        void deleteInBetween(int e);
        void search(int e);
        void forward_display();
        void backward_display();
};