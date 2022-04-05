#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};

node *pushback(node *&head, int x)
{
    node *p = new node;
    p->data = x;
    p->next = head->next;
    head->next = p;
    return p;
}
node *createLinkedList(int n)
{
    // TO DO
    node *head = new node;
    node *cur = new node;
    node *pre = new node;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (i == 0)
        {
            head->data = x;
            head->next = nullptr;
            cur = head;
        }
        else
        {
            cur = pushback(cur, x);
        }
    }
    return head;
}
int searchLinkedList(node *head, int key)
{
    node *p = head->next;
    bool flag = false;
    int cnt = 0;
    while ((p != NULL) && !flag)
    {
        if (p->data == key)
        {
            flag = true;
            cnt++;
        }
        else
        {
            p = p->next;
            cnt++;
        }
    }
    if (!flag)
    {
        return -1;
    }
    return cnt;
}
void print(node *head)
{
    while (head != nullptr)
    {
        cout << head->data << endl;
        head = head->next;
    }
}
int main()
{
    int n = 0;
    cin >> n;
    node *head = createLinkedList(n);
    print(head);
    int m;
    cin >> m;
    cout << searchLinkedList(head, m);
    return 0;
}
