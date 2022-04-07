node *insertNode(node *head, node *newNode, int position)
{
    // TO DO
    node *cur = head;
    int pos = 1;
    while (pos != position || cur->next == NULL)
    {
        cur = cur->next;
        pos++;
    }
    cur->next = newNode;

    newNode->next = cur->next;

    return head;
}