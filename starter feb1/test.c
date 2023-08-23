#include <stdio.h>
#include <stdlib.h>

struct poly
{
    int cf;
    int px;
    int py;
    int pz;
    struct poly *link;
};
typedef struct poly *P;
P getnode()
{
    P x;
    x = (P)malloc(sizeof(struct poly));
    if (x == NULL)
    {
        printf("memory unavailable\n");
        exit(0);
    }
    return x;
}

void read_poly(P p1, int n)
{
    int i;
    P temp;
    for (i = 0; i < n; i++)
    {
        temp = getnode();
        printf("Enter Cf,px,py and pz\n");
        scanf("%d%d%d%d", &(temp->cf), &(temp->px), &(temp->py), &(temp->pz));
        temp->link = p1->link;
        p1->link = temp;
    }
}

void display(P p1)
{
    P cur;
    if (p1->link == p1)
        return;
    cur = p1->link;
    while (cur != p1)
    {
        if (cur->cf > 0)
            printf("+%dx^%dy^%dz^%d", (cur->cf), (cur->px), (cur->py), (cur->pz));
        else
            printf("%dx^%dy^%dz^%d", (cur->cf), (cur->px), (cur->py), (cur->pz));
        cur = cur->link;
    }
    printf("\n");
}

P compare(P term, P p2)
{
    P cur;
    cur = p2->link;
    while (cur != p2)
    {
        if ((cur->px == term->px) && (cur->py == term->py) && (cur->pz == term->pz))
            return cur;
        else
            cur = cur->link;
    }
    return NULL;
}

void insert(P p3, int cf, int px, int py, int pz)
{
    P temp;
    temp = getnode();
    (temp->cf) = cf;
    (temp->px) = px;
    (temp->py) = py;
    (temp->pz) = pz;
    temp->link = p3->link;
    p3->link = temp;
}
void add_poly(P p1, P p2, P p3)
{
    P cur, res_pos;
    cur = p1->link;
    while (cur != p1)
    {
        res_pos = compare(cur, p2);
        if (res_pos == NULL)
            insert(p3, cur->cf, cur->px, cur->py, cur->pz);
        else
        {
            insert(p3, res_pos->cf + cur->cf, cur->px, cur->py, cur->pz);
            res_pos->cf = -999;
        }
        cur = cur->link;
    }
    cur = p2->link;
    while (cur != p2)
    {
        if (cur->cf != -999)
            insert(p3, cur->cf, cur->px, cur->py, cur->pz);
        cur = cur->link;
    }
}

int main()
{
    int m, n;
    P p1 = getnode();
    P p2 = getnode();
    P p3 = getnode();
    p1->link = p1;
    p2->link = p2;
    p3->link = p3;
    printf("\nEnter the number of terms for both polynomials\n");
    scanf("%d%d", &m, &n);
    printf("\nEnter 1st Polynomial\n");
    read_poly(p1, m);
    printf("\n1st Polynomial is\n");
    display(p1);
    printf("\nEnter 2nd Polynomial\n");
    read_poly(p2, n);
    printf("\n2nd Polynomial is\n");
    display(p2);
    add_poly(p1, p2, p3);
    printf("\nThe Resultant polynomial is\n");
    display(p3);
}
