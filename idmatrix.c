
#include <stdio.h>
#include<math.h>
#include <stdbool.h>

bool is_identity_matrix(int ar[3][3]);

int main() {
 int i;
 int j;
 int arr1[3][3];
 bool flag = false;
 
 for(i=0;i<3;i++){
     for(j=0;j<3;j++){
         scanf("%d",&arr1[i][j]);
     }
 }

    
    flag = is_identity_matrix (arr1);
    
    if (!flag){
        printf("true\n");
    }
    else { 
        printf("false\n");
    }
     return 0;
}

bool is_identity_matrix(int ar[3][3]) {

int i;
int j;
int idmatrix[3][3]={{1,0,0},{0,1,0},{0,0,1}};
bool flag=false;

for(i=0;i<3;i++){
    for(j=0;j<3;j++){
    if (ar[i][j] !=idmatrix[i][j]){
        flag=true;
        break;
    } 
    }
    if(flag ==true)
    break;
}

return flag;

// extra line added 

}