#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct node
{
    int cf, ex, ey, ez;
    struct node *link;
};
typedef struct node tm;
void i_f(tm *);
;
void evaluate(tm *);
void display(tm *);
void add(tm *, tm *, tm *);
int main()
{
    int n, i;
    tm p1 = {.link = &p1};
    tm p2 = {.link = &p2};
    tm p3 = {.link = &p3};
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        i_f(&p1);
    display(&p1);
    evaluate(&p1);
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        i_f(&p2);
    display(&p2);
    evaluate(&p2);
    add(&p1, &p2, &p3);
    display(&p3);
    return 0;
}
void i_f(tm *h)
{
    tm *t = malloc(sizeof(tm));
    scanf("%d%d%d%d", &(t->cf), &(t->ex), &(t->ey), &(t->ez));
    t->link = h->link;
    h->link = t;
}
void evaluate(tm *h)
{
    int x, y, z;
    double sum = 0;
    printf("enter x,y,z : \n");
    scanf("%d%d%d", &x, &y, &z);
    tm *t;
    for (t = h->link; t != h; t = t->link)
        sum = sum + ((t->cf) * pow(x, t->ex) * pow(y, t->ey) * pow(z, t->ez));
    printf("result = %.2lf\n", sum);
}
void display(tm *h)
{
    if (h->link == h)
    {
        printf("list is empty \n");
        return;
    }
    tm *t;
    for (t = h->link; t != h; t = t->link)
        printf("%dx^%dy^%dz^%d\n", t->cf, t->ex, t->ey, t->ez);
}
void add(tm *h1, tm *h2, tm *h3)
{
    tm *t, *t1, *n;
    for (t = h1->link; t != h1; t = t->link)
    {
        for (t1 = h2->link; t1 != h2; t1 = t1->link)
        {
            if (t1->cf != -999 && (t->ex == t1->ex && t->ey == t1->ey && t->ez == t1->ez))
            {
                n = (tm *)malloc(sizeof(tm));
                (*n) = (*t1);
                n->cf += t->cf;
                t1->cf = -999;
                n->link = h3->link;
                h3->link = n;
                break;
            }
        }
        if (t1 == h2)
        {
            n = (tm *)malloc(sizeof(tm));
            (*n) = (*t);
            n->link = h3->link;
            h3->link = n;
            break;
        }
    }
    for (t1 = h2->link; t1 != h2; t1 = t1->link)
        if (t1->cf != -999)
        {
            n = (tm *)malloc(sizeof(tm));
            (*n) = (*t1);
            n->link = h3->link;
            h3->link = n;
        }
}