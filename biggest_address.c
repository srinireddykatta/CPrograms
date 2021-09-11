#include <stdio.h>
#include <stdbool.h>

int *biggest_address(int *, int *, int *);

int main(){
    int a, b, c;
    int *ptr1,*ptr2,*ptr3;
    int *biggest;
    bool flag = false;

    scanf("%d %d %d",&a,&b,&c);
    ptr1 = &a;
    ptr2 = &b;
    ptr3 = &c;

    if ((*ptr1 == *ptr2) && (*ptr1 == *ptr3)){
        flag = true;
    } 
    else {
        flag = false;
        biggest = biggest_address(ptr1, ptr2, ptr3);

    }

    if (flag == false){
        printf("%d", *biggest);
    }
    else {
        printf("0x0");
    }
    return 0;
}


int *biggest_address(int *p, int *q, int *r) {
    int *big;
   big = p;

    if (*big < *q) {
        *big = *q;
    }
    if (*big < *r) {
        *big = *r;
    }

return big;

}