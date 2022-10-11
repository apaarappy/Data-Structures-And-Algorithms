#include <iostream>
#include <list>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

void display(struct node *r)
{
    printf("elements of list are : ");
    while (r)
    {
        printf("%d ---> ", r->data);
        r = r->next;
    }
    printf("NULL\n");
}

struct node *create(struct node *head)
{
    struct node *t, *p;
    int n;
    if (head == NULL)
    {
        t = (struct node *)malloc(sizeof(struct node));
        printf("enter the node: \n");
        scanf("%d", &t->data);
        t->next = NULL;
        head = t;
    }
    if (head != NULL)
    {
        do
        {
            t = (struct node *)malloc(sizeof(struct node));
            printf("enter the node: \n");
            scanf("%d", &t->data);
            t->next = NULL;
            p = head;
            while (p->next != NULL)
            {
                p = p->next;
            }
            p->next = t;
            printf("do you want to add more node press 1 for yes, 0 for no. ");
            scanf("%d", &n);
        } while (n);
    }
    return head;
}

int middle_element(struct node *head)
{
    struct node *t, *u;
    t = u = head;

    while (u->next != NULL)
    {
        t = t->next;
        u = u->next->next;
    }
    return t->data;
}

int main()
{

    struct node *head = NULL;
    head = create(head);
    display(head);
    cout << "middle element " << middle_element(head);
cout << "apaar vashishtha 20051942 " << endl;

      return 0;
}