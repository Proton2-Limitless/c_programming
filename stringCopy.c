// Online C compiler to run C program online
#include <stdio.h>
char *_strcpy(char *dest, char *src);

int main(void) {
    
    char s1[98];
    char *ptr;

    ptr = _strcpy(s1, "First, solve the problem. Then, write the code\n");
    printf("%s", s1);
    printf("%s", ptr);

    
    
}

char *_strcpy(char *dest, char *src)
{
    int i = 0;
    int k,j;
    
    while(src[i] != '\0')
    {
        i++;
    }
    for(k = 0,j=0;k<i;k++,j++)
    {
        dest[k] = src[j];
    }
    
    return (dest);
}
