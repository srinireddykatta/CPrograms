#include<stdio.h>
#include<math.h>

int get_frequency(int[], int,int);

int main() {
    int array1[50]; //we are limiting the array size to 50
    int frequency;
    int i;
    int number;
    int value;
    
    scanf("%d",&number);
    
    if (number < 1) {
        printf("Frequency count: -1");
        }
    else {
        for(i=0;i<number;i++){
        scanf("%d",&array1[i]);
        }

        scanf("%d",&value);
        frequency= get_frequency(array1,number,value);

        printf("%d\n",frequency);
    }
    
   return 0;
}

int get_frequency(int arr[], int arr_len, int value) {
    
    int frequency=0;
    int flag;
    int i;
    
    for (i=0;i<arr_len;i++) {
        flag = 0;
        if (arr[i] == value) {
            flag=1;
        }
        if(flag==1) {
            frequency++;
    }
  }

    return frequency;
    
}