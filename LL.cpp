#include <iostream>
using namespace std;
struct Node 
{
    int data;
    Node* next;
};

Node* head = nullptr;
Node* ptr = nullptr;

Node* createSLL();
void displaySLL(Node* head);
void search();

int main() 
{
    head = createSLL();
    displaySLL(head);
    search();
    return 0;
}

Node* createSLL() 
{
    int n;
    head = nullptr;
    
    cout << "Enter the number of nodes to create: ";
    cin >> n;
    
    for (int i = 1; i <= n; i++) 
    {
        if (i == 1) 
        {
            head = new Node;
            ptr = head;
        } else 
        {
            ptr->next = new Node;
            ptr = ptr->next;
        }
        
        cout << "Enter data for Node " << i << ": ";
        cin >> (ptr->data);
    }
    
    ptr->next = nullptr;
    return head;
}

void displaySLL(Node* head) 
{
    cout << "Linked List Data: ";
    for (ptr = head; ptr != nullptr; ptr = ptr->next) 
    {
        cout << ptr->data << " ";
    }
    cout << "\n";
}

void search() 
{
    int key;
    int flag = 0;
    
    cout << "Enter an element to search: ";
    cin >> key;
    
    for (ptr = head; ptr != nullptr; ptr = ptr->next) 
    {
        if (ptr->data == key) 
        {
            flag = 1;
            break;
        }
    }
    
    if (flag == 1) 
    {
        cout << "Found\n";
    } else 
    {
        cout << "Not found\n";
    }
}
