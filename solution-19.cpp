#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
    Node* prev;
};

Node* root = nullptr;

void add_node(int data)
{
    Node* new_node = new Node{data, nullptr, nullptr};
    if (root == nullptr)
        {
        root = new_node;
    }
    else
        {
        Node* current = root;
        while (current->next != nullptr)
            current = current->next;
        current->next = new_node;
        new_node->prev = current;
    }
}

void insert_node(int index, int data)
{
    Node* new_node = new Node{data, nullptr, nullptr};

    if (index == 0)
        {
        new_node->next = root;
        if (root != nullptr)
            root->prev = new_node;
        root = new_node;
        return;
    }

    Node* current = root;
    for (int i = 0; i < index - 1 && current != nullptr; i++)
        current = current->next;

    if (current == nullptr)
        {
        cout << "index out of limit\n";
        delete new_node;
        return;
    }

    new_node->next = current->next;
    new_node->prev = current;
    if (current->next != nullptr)
        current->next->prev = new_node;
    current->next = new_node;
}

void print_forward()
{
    Node* current = root;
    while (current != nullptr)
        {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

int main()
{
    add_node(1);
    add_node(2);
    add_node(3);
    add_node(4);
    add_node(5);

    insert_node(2, 10);

    print_forward();

    return 0;
}
/* Output :
1 2 10 3 4 5 */
