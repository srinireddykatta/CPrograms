#include <stdio.h>

#define MIN(a,b) ((a<b) ? (a): (b) )
#define MAX(a,b) ((a>b) ? (a): (b) )


int main(){
    
//int main(){
    int a;
    int b;
    int c;
    printf("give three values:\n");
    
    scanf("%d %d %d", &a, &b, &c);
    
    printf("Minimum value is :%d \n", MIN(MIN(a,b),c));
    printf("Maxium value is : %d\n", MAX(MAX(a,b),c));
    
    return 0;
}