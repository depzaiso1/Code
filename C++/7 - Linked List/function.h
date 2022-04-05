#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
};
// tạo node với dữ liệu là x, con trỏ liên kết next nối với NULL
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
    Node *tail; // con tro o dau va duoi
};

// khai báo ban đầu cho head và tail ở dạng rỗng,. chưa có dữ liệu
void init(LinkedList &lst)
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

Node *min(LinkedList lst)
{
    if (lst.head == NULL)
    {
        return NULL;
    }
    Node *ans = lst.head;
    Node *cur = lst.head;
    while (cur != NULL)
    {
        if (cur->data < ans->data)
            ans = cur;
        cur = cur->next;
    }
    return ans;
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

void solve()
{
    LinkedList List;
    init(List);
    while (true)
    {
        int x;
        cin >> x;
        if (x == 0)
            break;
        else
            insertTail(List, x);
    }
    Node *p = min(List);
    cout << p->data;

    removeAll(List);
}
