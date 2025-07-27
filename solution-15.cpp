#include <iostream>
using namespace std;

struct Node 
{
    int data;
    Node* next;
};

Node* root = nullptr;


void insert_beginning(int data) 
{
    Node* new_node = new Node();
    new_node->data = data;
    new_node->next = root;
    root = new_node;
}


void insert_end(int data) 
{
    Node* new_node = new Node();
    new_node->data = data;
    new_node->next = nullptr;

    if (root == nullptr) {
        root = new_node;
        return;
    }
    Node* current = root;
    while (current->next != nullptr)
        current = current->next;
    current->next = new_node;
}


void insert_position(int index, int data) 
{
    if (index == 0) 
{
        insert_beginning(data);
        return;
    }
    Node* new_node = new Node();
    new_node->data = data;
    new_node->next = nullptr;

    Node* current = root;
    for (int i = 0; i < index - 1 && current != nullptr; i++)
        current = current->next;

    if (current == nullptr) {
        cout << "Index out of bound\n";
        delete new_node;
        return;
    }
    new_node->next = current->next;
    current->next = new_node;
}

void display() {
    Node* current = root;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

int main() 
{
    insert_end(10);
    insert_end(20);
    insert_beginning(5);
    insert_position(2, 15);
    display();
    return 0;
}
/*Output:
5 10 15 20 */

