#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = nullptr;
    }

    void append(Node *newNode)
    {
        Node *last = this;
        while (last->next != nullptr)
            last = last->next;
        last->next = newNode;
    }

    void reversePrint()
    {
        if (this == nullptr)
        {
            return;
        }
        if (this->next != nullptr)
        {
            this->next->reversePrint();
        }
        cout << this->data << " ";
    }
};

int main()
{
    Node *head = new Node(1);
    head->append(new Node(2));
    head->append(new Node(3));
    head->append(new Node(4));
    head->append(new Node(5));

    cout << "Original list in reverse: ";
    head->reversePrint();
    cout << endl;

    return 0;
}
