#include <stdio.h>

char *string_toupper(char *);
int main()
{
    char str[] = "Look up!\n";
    char *ptr;

    ptr = string_toupper(str);
    printf("%s", ptr);
    printf("%s", str);
    return (0);
    // printf("%d",len);
    
}
char *string_toupper(char *a)
{
    int i,j,k;
    int len = sizeof(a)/sizeof(char);
    
    for(i = 0; i<len; i++)
    {
        if(a[i] > 76 && a[i] <=122)
        {
            j = a[i] - 97;
            k = j + 65;
            a[i] = k;
        }
    }
    return a;
}
