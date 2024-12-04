#include <stdio.h>
#include <string.h>
int main(){
    char a[20];
    char b[20];
    printf("Enter the string 1 .\n");
    gets(a);
    printf("Enter the string 2 .\n");
    gets(b);
    int c=strcmp(a, b);
    printf("%d \n", c);
    return 0;
}