#include <stdio.h>

int main(){
    char a[3][10];
    printf("Enter three names :\n");
    for (int i = 0; i < 3; i++)
    {
        gets(a[i]);
    }
    printf("You entered the name :\n");
    for (int i = 0; i < 3; i++)
    {
        puts(a[i]);
    }
    
    return 0;
}