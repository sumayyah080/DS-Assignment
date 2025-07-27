#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

Node* root = nullptr;

int count_nodes()
{
    int count = 0;
    Node* current = root;
    while (current != nullptr) {
        count++;
        current = current->next;
    }
    return count;
}

int main()
{
    Node* node1 = new Node{5, nullptr};
    Node* node2 = new Node{10, nullptr};
    Node* node3 = new Node{15, nullptr};

    root = node1;
    node1->next = node2;
    node2->next = node3;

    cout << "total nodes in the list: " << count_nodes() << endl;

    return 0;
}
/* Output:
total nodes in the list: 3 */
