//Write a program in C to read n number of values in an array and display it in reverse order.
#include<stdio.h>

int main(){
    int n;

    printf("How many numbers:");
    scanf("%d",&n);
    
    int array[n],array2[n];

    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }

    for(int i=0;i<n;i++){
        array2[i]=array[n-i-1];
        printf("%d\t",array2[i]);
    }

    return 0;
}