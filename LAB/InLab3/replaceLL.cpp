
#include <iostream>
#include "struct.cpp"
using namespace std;

node *createLinkedList(int n); // The implementation is provided implicitly

void replace(node *head, int position, int value)
{
    // TODO
    node *p = head;
    bool found = false;
    int index = 0;
    while ((p != NULL) && !found)
    {
        if (index == position)
        {
            p->data = value;
            found = true;
        }
        else
        {
            p = p->next;
            index++;
        }
    }
}
void print(node *head)
{
    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
int main()
{
    int n = 0;
    cin >> n;
    node *head = createLinkedList(n);
    print(head);
    int pos, val;
    cin >> pos >> val;
    replace(head, pos, val);
    print(head);
    return 0;
}
