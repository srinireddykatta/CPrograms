#include <stdio.h>
#include <string.h>

void swap_strings(char **, char **);

int main(){
    
    char a1[100];
    char b1[100];

    scanf("%[^\n]s",a1);
    scanf("%[^\n]s",b1);
    swap_strings(&a1,&b1);
    return 0;
}

 void swap_strings(char **p,char **q) {
    char *s = *p;
    p = q;
    q = *s;
    printf("%s %s",p,q);
    }


