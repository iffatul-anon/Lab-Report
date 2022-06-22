//Write a program in C for a 2D array of size 3x3 and print the matrix.
#include<stdio.h>

int main(){
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
   
    printf("Matrix :\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}