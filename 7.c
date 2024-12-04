#include <stdio.h>
#include <string.h>
int main(){
    char a[50];
    printf("Enter the string 1 \n");
    gets(a);
    char b[20];
    printf("Enter the string 2 \n");
    gets(b);
    printf("The catenated string is :\n");
    puts(strcat(a, b));
    strcpy(a, "Amit");
    int n;
    printf("Enter n to which 2nd string is catenated .\n");
    scanf("%d", &n);
    puts(strncat(a, b, n));
    return 0;
}