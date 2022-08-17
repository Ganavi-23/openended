#include<stdio.h>
#define MAX_SIZE 100
int main()
{
    char str[MAX_SIZE];
    char*s=str;
    printf("enter the text:");
    gets(str);
    while(*s)
    {
        *s=(*s>='a' && *s<='z')?*s-32:*s;
        s++;
    }
    printf("uppercase string:%s",str);
    return 0;
}
