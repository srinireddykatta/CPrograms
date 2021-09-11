#include <stdio.h>
#include <string.h>

int mystrlen(char *);

int main(){
    
    char s[100];
    int size;

    scanf("%[^\n]s",s);
    size = mystrlen(s);
    printf("%d",size);
    return 0;
}

 int mystrlen(char *s) {
    int size;
    int count;
    size=0;
    for(count=0;s[count]!='\0';count++)
    size++;
    return size;

    }

