//Write a program in C to store elements in an array and print it.
#include<stdio.h>

int main(){
    int array[5]={2,6,4,8,5};

    for(int i=0;i<5;i++){
        printf("%d\t",array[i]);
    }

    return 0;
}