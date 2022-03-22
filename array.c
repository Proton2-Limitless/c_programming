// Online C compiler to run C program online
#include <stdio.h>

// void print_array(int *a, int n);
void print_array(int *a, int n);

int main(void) {
    
    int *array[5];
    array[0] = 98;
    array[1] = 402;
    array[2] = -198;
    array[3] = 298;
    array[4] = -1024;

    // array[1] = 3;
    // printf("%d",array[1]);
    print_array(array, 5);
    return (0);
}
void print_array(int *a, int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
        if(i < (n-1))
        {
            printf(", ");
        }
    }
    
}
// void puts_half(char *str)
// {
    
// }
