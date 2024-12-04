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
    int  n;
    printf("Enter n to which string should be compared .\n");
    scanf("%d", &n);
    int d=strncmp(a, b ,n);
    printf("%d \n", d);
    return 0;
}