#include<stdio.h>
int main(){
    int arry[3][3];
    int i,j;
for(i=0 ;i<3;i++){
        for(j=0 ; j<3;j++){
            printf("enter a element : ");
            scanf("%d",&arry[i][j]);
        }printf("\n");
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("[%d]",arry[i][j]);
        }printf("\n");
    }

return 0;
}