#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* root = nullptr;

void insert_end(int data) {
    Node* newNode = new Node{data, nullptr};

    if (root == nullptr) {
        root = newNode;
        return;
    }

    Node* temp = root;
    while (temp->next != nullptr)
        temp = temp->next;
    temp->next = newNode;
}

void display() {
    Node* temp = root;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

void delete_beginning() {
    if (root == nullptr) {
        cout << "List is empty\n";
        return;
    }
    Node* temp = root;
    root = root->next;
    delete temp;
}

void delete_end() {
    if (root == nullptr) {
        cout << "List is empty\n";
        return;
    }
    if (root->next == nullptr) {
        delete root;
        root = nullptr;
        return;
    }
    Node* current = root;
    while (current->next->next != nullptr)
        current = current->next;

    delete current->next;
    current->next = nullptr;
}

void delete_position(int index) {
    if (root == nullptr) {
        cout << "List is empty\n";
        return;
    }
    if (index == 0) {
        delete_beginning();
        return;
    }

    Node* current = root;
    for (int i = 0; i < index - 1 && current != nullptr; i++)
        current = current->next;

    if (current == nullptr || current->next == nullptr) {
        cout << "Index out of limit!!\n";
        return;
    }

    Node* temp = current->next;
    current->next = temp->next;
    delete temp;
}

int main() {
    insert_end(10);
    insert_end(20);
    insert_end(30);
    insert_end(40);
    cout << "initial list:\n";
    display();

    // from beginning
    cout << "\ndeleting from beginning:\n";
    delete_beginning();
    display();

    // from end
    cout << "\ndeleting from end:\n";
    delete_end();
    display();

    // from position
    cout << "\ndeleting from position 1:\n";
    delete_position(1);  // index starts from 0
    display();

    //  from invalid position
    cout << "\nTrying to delete from position 5:\n";
    delete_position(5);

    return 0;
}
/* Outpit:
initial list:
10 -> 20 -> 30 -> 40 -> NULL

deleting from beginning:
20 -> 30 -> 40 -> NULL

deleting from end:
20 -> 30 -> NULL

deleting from position 1:
20 -> NULL

Trying to delete from position 5:
Index out of limit!! */
