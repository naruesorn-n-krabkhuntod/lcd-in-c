#include <stdio.h>
#include <string.h>
void main () {
    char on[10] = "----------", off[10] = "          ", n[10], s;
    scanf("%s %s", &s, n);
    for(int i = 0; i < strlen(n); i++) strchr("14", n[i])? printf(" %.*s %s", s - '0', off, ((i == strlen(n) - 1)? "\n" : " ")) : printf(" %.*s %s", s - '0', on, ((i == strlen(n) - 1)? "\n" : " "));
    for(int j = 0; j < s - '0'; j++) for(int i = 0; i < strlen(n); i++) printf("%s%.*s%s%s", (strchr("045689", n[i])? "|" : " "), s - '0', off, (strchr("56", n[i])? " " : "|"), ((i == strlen(n) - 1)? "\n":" "));
    for(int i = 0; i < strlen(n); i++) strchr("017", n[i])? printf(" %.*s %s", s - '0', off, ((i == strlen(n) - 1)? "\n" : " ")) : printf(" %.*s %s", s - '0', on, ((i == strlen(n) - 1)? "\n" : " "));
    for(int j = 0; j < s - '0'; j++) for(int i = 0; i < strlen(n); i++) printf("%s%.*s%s%s", (strchr("0268", n[i])? "|" : " "), s - '0', off, (strchr("2", n[i])? " " : "|"), ((i == strlen(n) - 1)? "\n" : " "));
    for(int i = 0; i < strlen(n); i++) strchr("147", n[i])? printf(" %.*s %s", s - '0', off, ((i == strlen(n) - 1)? "\n" : " ")) : printf(" %.*s %s", s - '0', on, ((i == strlen(n) - 1)? "\n" : " "));
}
