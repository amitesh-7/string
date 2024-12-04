#include <stdio.h>
#include <string.h>
int main(){
    char a[5][9]={
                    "Amitesh",
                    "Priyanshu",
                    "Karan",
                    "Anurag",
                    "Ujjwal"
                    };
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            printf("%c", a[i][j]);
        }
        printf("\n");
    } 
    return 0;
}