#include<bits/stdc++.h>
using namespace std;

class node {
public:
    int data;
    node *next;
    node(int data) {
        this->data = data;
        next = NULL;
    }
};

node *takeinput() {         // take input using function
    int data;
    cin >> data;
    node *head = NULL;
    while (data != -1) {
        node *newnode = new node(data);
        if (head == NULL) {
            head = newnode;
        } else {
            node *temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newnode;
        }
        cin >> data;
    }
    return head;
}
node *insertelement(node *head, int i, int data) { //extra elemnt insertion
    node *newnode = new node(data);
    int count = 0;
    node *temp = head;
    if (i == 0) {
        newnode->next = head;
        head = newnode;
        return head;
    }
    while (temp != NULL && count < i - 1) {
        temp = temp->next;
        count++;
    }
    if (temp != NULL) {
        node *a = temp->next;
        temp->next = newnode;
        newnode->next = a;
    }
    return head;
}
void print(node *head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}

int main() {
    node *head = takeinput();
    print(head);
    int i, data;
    cin >> i >> data;
    cout << endl;
    head = insertelement(head, i, data);
    print(head);
}
