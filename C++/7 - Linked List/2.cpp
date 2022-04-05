#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *createNode(int x)
{
    Node *p = new Node;
    p->data = x;
    p->next = NULL;
    return p;
}

struct LinkedList
{
    Node *head;
    Node *tail;
};

void initial(LinkedList &lst)
{
    lst.head = NULL;
    lst.tail = NULL;
}

void insertTail(LinkedList &lst, int x)
{
    Node *p = createNode(x);
    if (lst.head == NULL)
    {
        lst.head = lst.tail = p;
    }
    else
    {
        lst.tail->next = p;
        lst.tail = p;
    }
}

void removeAll(LinkedList &lst)
{
    while (lst.head != NULL)
    {
        Node *cur = lst.head;
        lst.head = lst.head->next;
        delete cur;
    }
    lst.tail = NULL;
}

// Node *printAvg(LinkedList lst)
// {
//     if (lst.head == NULL)
//     {
//         return NULL;
//     }
//     Node *ans = lst.head;
//     Node *cur = lst.head;

//     while (cur != NULL)
//     {
//         if (cur->data < 5)
//         {
//             cout << cur->data << " ";
//         }
//         cur = cur->next;
//     }
// }
void display(LinkedList &lst)
{
    Node *cur = lst.head;
    while (cur != NULL)
    {
        cout << cur->data << " ";
        cur = cur->next;
    };
    cout << '\n';
}
void solve()
{
    LinkedList List;
    initial(List);
    while (true)
    {
        int x;
        cin >> x;
        if (x == -1)
            break;
        else if (x < 5)
        {
            insertTail(List, x);
        }
        else
            continue;
    }
    display(List);
}

int main()
{
    solve();
    return 0;
}