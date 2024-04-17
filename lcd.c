#include <stdio.h>
#include <string.h>


void main () {
    // Create Variable and Get Input
    char Display[10] = "----------", noDisplay[10] = "          ", Number[10];
    int Size;
    scanf("%d %s", &Size, Number);
    int Len = strlen(Number);

    // Display A digit
    for (int i = 0; i < Len; i++)
        strchr("14", Number[i])?
            printf(" %.*s  ", Size, noDisplay):
            printf(" %.*s  ", Size, Display);
    printf("\n");


    // Display F anf B digit
    for (int j = 0; j < Size; j++){
        for(int i = 0; i < Len; i++)
            printf("%s%.*s%s ", (strchr("045689", Number[i])? "|" : " "), Size, noDisplay, (strchr("56", Number[i])? " " : "|"));
            
        printf("\n");
    }


    // Display G digit
    for (int i = 0; i < Len; i++)
        strchr("017", Number[i])?
            printf(" %.*s  ", Size, noDisplay):
            printf(" %.*s  ", Size, Display);
    printf("\n");


    // Display E and C digit
    for (int j = 0; j < Size; j++) {
        for(int i = 0; i < Len; i++)
            printf("%s%.*s%s ", (strchr("0268", Number[i])? "|" : " "), Size, noDisplay, (Number[i] == '2')? " " : "|");
        printf("\n");
    }

    // Display D digit
    for (int i = 0; i < Len; i++)
        strchr("147", Number[i])?
            printf(" %.*s  ", Size, noDisplay):
            printf(" %.*s  ", Size, Display);
    printf("\n");    
}