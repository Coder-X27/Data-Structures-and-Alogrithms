#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insert(Node *&head, int val)
{
    Node *n = new Node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void display(Node *head)
{
    Node *temp = head;
    cout << endl;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL";
}
void deleteAtFirst(Node *&head)
{
    Node *todel = head;
    head = head->next;
    delete todel;
}
void deleteNode(Node *&head, int n)
{
    if(head==NULL){
        return;
    }
    if (head->data == n)
    {
        deleteAtFirst(head);
    }
    else
    {
        Node *temp = head;
        while (temp->next->data != n)
        {
            temp = temp->next;
        }
        Node *todel = temp->next;
        temp->next = temp->next->next;
        delete todel;
    }
}
int main()
{
    Node *head = NULL;
    insert(head, 1);
    insert(head, 2);
    insert(head, 3);
    insert(head, 4);
    display(head);
    deleteNode(head, 4);
    display(head);
    deleteNode(head, 1);
    display(head);
    deleteNode(head, 3);
    display(head);
    deleteNode(head, 2);
    display(head);
    return 0;
}