#include <stdio.h>
#include "main.h"

int main(void)
{
    char *s = "hello, world";
    char *f = "world";
    char *f2 = "notfound";
    char *f3 = "";
    char *t;

    t = _strstr(s, f);
    printf("%s\n", t); 

    t = _strstr(s, f2);
    printf("%s\n", t);  

    t = _strstr(s, f3);
    printf("%s\n", t);  

    return 0;
}
