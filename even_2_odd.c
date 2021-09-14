#include <stdio.h>
#include <stdlib.h>

void even_to_odd(int *, int);

int main(){
   int n;
    int* ptr;
    int i;
 
    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("Entered number of elements: %d\n", n);
 
    // Dynamically allocate memory using malloc()
    ptr = (int*)malloc(n * sizeof(int));
 
    // Check if the memory has been successfully
    // allocated by malloc or not
    if (ptr == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    }
    else {
 
        // Memory has been successfully allocated
        printf("Memory successfully allocated using malloc.\n");
 
        // Get the elements of the array
        for (i = 0; i < n; ++i) {
            scanf("%d", &ptr[i] );
        }
    
        printf("\n");
    
        // Print the elements of the array
        printf("The elements of the array are: ");
        for (i = 0; i < n; ++i) {
            printf("%d, ", ptr[i]);
        }
    }


    even_to_odd(ptr,n);

    printf("\n");

     printf("The elements of the array are: ");
        for (i = 0; i < n; ++i) {
            printf("%d, ", ptr[i]);
        }
 
    return 0;
}


void even_to_odd(int *ar, int n)
{
int i;
int* ptr1;

for(i=0;i<n;i++){

    if( ar[i] % 2 == 0 ){
        ar[i] = ar[i] ++1;
    }


}
 
}

