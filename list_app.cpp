#include "list_header.h"
int main()
{
    DoublyLL *l = new DoublyLL();
    int ch;
    int d,p;
    do
    {
        cout<<"\t==========MENU==========\n";
        cout<<"\t1.Insert at first\n";
        cout<<"\t2.Insert at last\n";
        cout<<"\t3.Insert by position\n";
        cout<<"\t4.Delete at first\n";
        cout<<"\t5.Delete at last\n";
        cout<<"\t6.Delete by position\n";
        cout<<"\t7.Search\n";
        cout<<"\t8.Forward Display\n";
        cout<<"\t9.Backward Display\n";
        cout<<"\t10.Exit\n";
        cout<<"\t========================\n";
        cout<<"\nEnter your choice : ";
        cin>>ch;
        switch(ch)
        {
            case 1:
                cout<<"\nEnter the Number : ";
                cin>>d;
                l->insertAtFirst(d);
                break;
            case 2:
                cout<<"\nEnter the Number : ";
                cin>>d;
                l->insertAtLast(d);
                break;
            case 3:
                cout<<"\nEnter the Number : ";
                cin>>d;
                cout<<"Enter the ticket number after which it must be inserted : ";
                cin>>p;
                l->insertInBetween(d,p);
                break;
            case 4: 
                l->deleteAtFirst();
                break;
            case 5:
                l->deleteAtLast();
                break;
            case 6:
                cout<<"Enter the Number to be deleted : ";
                cin>>d;
                l->deleteInBetween(d);
                break;
            case 7:
                int s;
                cout<<"Enter the Number to search : ";
                cin>>s;
                l->search(s);
                break;
            case 8:
                cout<<"List : ";
                l->forward_display();
                break;
            case 9:
                cout<<"List : ";
                l->backward_display();
                break;
            case 10:
                break;
            default:
                cout<<"Enter a valid choice.\n";
                break;
        }
    }while(ch != 10);
    return 0;
}