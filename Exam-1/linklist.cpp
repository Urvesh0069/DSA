
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        data = data;
        next = nullptr;
    }
};

class LinkedList
{
public:
    Node *head;
    LinkedList()
    {
        head = nullptr;
    }

    void addAthead(int value)
    {
        Node *newNode = new Node(value);
        if (head == nullptr)
        {
            head = newNode;
            return;
        }
        newNode->next = head;
        head = newNode;
    }
    void addAtTail(int data)
    {
        Node *newNode = new Node(data);
        if (head == nullptr)
        {
            head = newNode;
            return;
        }
        Node *temp = head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    void removeAtHead()
    {
        if (head == nullptr)
        {
            cout << "List is empty." << endl;
            return;
        }
        Node *temp = head;
        head = head->next;
    }

    void removeAtTail()
    {
        Node *temp = head;
        while (temp->next->next)
        {
            temp = temp->next;
        }
        temp->next = nullptr;
    }

    int length()
    {
        int count = 0;
        Node *temp = head;
        while (temp)
        {
            count++;
            temp = temp->next;
        }
        return count;
    }

    void addAtAnyPosition(int value, int position)
    {
        Node *newNode = new Node(value);
        if (position <= 1)
        {
            addAthead(value);
            return;
        }
        if (position >= length())
        {
            addAtTail(value);
            return;
        }

        int i = 1;
        Node *temp = head;
        while (i < position - 1)
        {
            temp = temp->next;
            i++;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
    void removeAtPosition(int position)
    {
        if (position <= 1)
        {
            removeAtHead();
            return;
        }
        if (position >= length())
        {
            removeAtTail();
            return;
        }
        int i = 1;
        Node *temp = head;
        while (i < position - 1)
        {
            temp = temp->next;
            i++;
        }
        Node *del = temp->next;
        temp->next = del->next;
        delete del;
    }
};
int main()
{
    LinkedList list;
    list.addAthead(10);

    return 0;
}