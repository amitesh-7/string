#include <stdio.h>
#include <string.h>
#include <conio.h>
int main(){
    char str[20];
    printf("Enter the string .\n");
    gets(str);
    printf("You entered the string :\n");
    puts(str);
    int count=strlen(str);
    printf("The length of the string is %d.", count);
    return 0;
}