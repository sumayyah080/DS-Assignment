#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};
Node* root = nullptr;
void search_element(int data)
{
    Node* current = root;
    int index = 0;

    while (current != nullptr)
        {
        if (current->data == data)
        {
            cout << "found at index " << index << "\n";
            return;
        }
        current = current->next;
        index++;
    }
    cout << "not found\n";
}

int main()
{

    Node* node1 = new Node{5, nullptr};
    Node* node2 = new Node{10, nullptr};
    Node* node3 = new Node{15, nullptr};

    root = node1;
    node1->next = node2;
    node2->next = node3;

    search_element(10);
    search_element(99);

    return 0;
}
/* Output:
found at index 1
not found*/
