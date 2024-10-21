#include <stdio.h>

int main()
{
    char t = 'A';
    char *s, *r, *q, *p;
    s = &t;
    r = s;
    q = r;
    p = q;

    printf("%c", *p);
}