//Write a program in C to insert New value in the array (unsorted list ).
#include<stdio.h>

int main(){

    int n,p,new;

    printf("Enter size:");
    scanf("%d",&n);

    int a[n+1];

    printf("Enter element for array:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("Array = ");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");

    printf("Enter the position for new element:");
    scanf("%d",&p);

    printf("Enter the new element:");
    scanf("%d",&new);


    for(int i=n;i>=p;i--){
        a[i]=a[i-1];
    }

    a[p-1]=new;

    printf("New array after add a new element = ");
    for(int i=0;i<n+1;i++){
        printf("%d ",a[i]);
    }
    printf("\n");

    return 0;
}