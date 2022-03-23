// Online C compiler to run C program online
#include <stdio.h>

char *_strcat(char *dest, char *src);
int main() {
    // Write C code here
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strcat(s1, s2);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
    
    return 0;
}
char *_strcat(char *dest, char *src)
{
    int i = 0, j=0;
    
    while(dest[i] != '\0')
    {
        i++;
    }
    dest[i + j] = '\0';
    for(;src[j] != '\0'; j++)
    {
        dest[i + j] = src[j];
    }
    // dest[i + j] = '\0';
    
    return dest;
}
