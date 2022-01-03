#include "list_header.h"
void DoublyLL::insertAtFirst(int e)
{
    Node *n = new Node();
    n->data = e;
    n->prev = NULL;
    n->next = NULL;
    if(head == NULL)
    {
        head = n;
    }
    else
    {
        n->next = head;
        head->prev = n;
        head = n;
    }
    cout<<"\nNumber inserted at first.\n\n";
}
void DoublyLL::insertAtLast(int e)
{
    Node *n = new Node();
    n->data = e;
    n->prev = NULL;
    n->next = NULL;
    if(head == NULL)
    {
        head = n;
    }
    else
    {
        Node *temp = head;
        while(temp->next != NULL) 
        {
            temp = temp->next;
        }
        temp->next = n;
        n->prev = temp;
    }
    cout<<"\nNumber inserted at last.\n\n";
}
void DoublyLL::insertInBetween(int e,int p)
{
    Node *n = new Node();
    n->data = e;
    n->prev = NULL;
    n->next = NULL;
    if(head == NULL)
    {
        cout<<"\nPosition not found.\n\n";
        return;
    }
    else
    {
        Node *temp = head;
        int flag = 0;
        while(temp->data != p)
        {
            temp = temp->next;
            if(temp==NULL)
            {
                cout<<"\nPosition not found.\n\n";
                return;
            }
        }
        n->next = temp->next;
        n->prev = temp;
        temp->next = n;
        temp->next->prev = n;
    }
    cout<<"\nNumber inserted after "<<p<<".\n\n";
}
void DoublyLL::deleteAtFirst()
{
    if(head == NULL)
    {
       cout<<"\nList is empty.\n\n";
    }
    else if(head->next == NULL)
    {
        cout<<head->data<<" deleted.\n\n";
        head=NULL;
        free(head);
    }
    else
    {
        Node *temp = head;
        cout<<temp->data<<" deleted.\n\n";
        head = head->next;
        head->prev = NULL;
        free(temp);
    }
}
void DoublyLL::deleteAtLast()
{
    if(head == NULL)
    {
        cout<<"\nList is empty.\n\n";
    }
    else if(head->next == NULL)
        deleteAtFirst();
    else
    {
        Node *temp = head;
        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        Node *p = temp->next;
        cout<<p->data<<" deleted.\n\n";
        free(p);
        temp->next = NULL;
    }
}
void DoublyLL::deleteInBetween(int e)
{
	if(head == NULL)
    {
        cout<<"\nList is empty.\n\n";
    }
    else if(head->data==e)
        deleteAtFirst();
    else
    {
        Node *curr = head;
        Node *p,*n;
        while(curr->data != e)
        {
            p=curr;
            curr=curr->next;
        }
        if(curr->data == e && curr->next==NULL)
        {
            deleteAtLast();
            return;
        }
        cout<<curr->data<<" deleted.\n\n";
        n=curr->next;
        p->next=n;
        n->prev=p;
        delete curr;
    }
}
void DoublyLL::search(int e)
{
    if(head == NULL)
        cout<<"\nList is empty.\n\n";
    else
    {
        Node *temp = head;
        int flag;
        while(temp != NULL)
        {
            if(temp->data == e)
            {
                cout<<"\nNumber found.\n\n";
                flag = 0;
                break;
            }
            else
            {
                flag = 1;
            }
            temp = temp->next;
        }
        if(flag == 1)
            cout<<"\nNumber not found.\n\n";
    }
}
void DoublyLL::forward_display()
{
    if(head==NULL)
    {
        cout<<"\nList is empty.\n\n";
    }
    else
    {
        Node *temp = head;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<"\n\n";
    }
}
void DoublyLL::backward_display()
{
    if(head==NULL)
    {
        cout<<"\nList is empty.\n\n";
    }
    else
    {
        Node *temp = head;
        Node *tail = NULL;
        while(temp->next!=NULL)
            temp=temp->next;
        tail=temp;
        while(tail!=head)
        {
            cout<<tail->data<<" ";
            tail=tail->prev;
        }
        cout<<head->data;
        cout<<"\n\n";
    }
}