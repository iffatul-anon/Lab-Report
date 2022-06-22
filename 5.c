//Write a program in C to count a total number of duplicate elements in an array.
#include<stdio.h>

int main(){
    int n,count=0;

    printf("Enter size:");
    scanf("%d",&n);

    int a[n];

    printf("Enter elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("Array = ");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                count++;
                break;
            }
        }
    }

    printf("Number of duplicate elements = %d\n",count);
    
    return 0;
}