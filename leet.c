#include <stdio.h>

int main(void)
{
    char a[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
    int i,j;
    
    
    for(i=0;a[i] != '\0';i++)
    {
        if(a[i] == 'a' || a[i] == 'A')
        {
            a[i] = '4';
        }
        else if(a[i] == 'e' || a[i] == 'E')
        {
            a[i] = '3';
        }
        else if(a[i] == 'o' || a[i] == 'O')
        {
            a[i] = '0';
        }
        else if(a[i] == 't' || a[i] == 'T')
        {
            a[i] = '7';
        }
        else if(a[i] == 'l' || a[i] == 'L')
        {
            a[i] = '1';
        }
    }
    
    printf("%s",a);
}
