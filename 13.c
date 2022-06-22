//Write a program in C to delete an element at desired position from an array.
#include<stdio.h>

int main(){

    int n,p;

    printf("Enter size:");
    scanf("%d",&n);

    int a[n];

    printf("Enter element for array:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Array = ");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");

    printf("Enter the position to be deleted:");
    scanf("%d",&p);

    for(int i=p-1;i<n-1;i++){
        a[i]=a[i+1];
    }

    printf("New array after delete a element = ");
    for(int i=0;i<n-1;i++){
        printf("%d ",a[i]);
    }
    printf("\n");

    return 0;
}