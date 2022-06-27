//Enter a six digit number and print the number in reverse order and find the sum of those number.
#include<stdio.h>

int main(){
    int n,m,sum=0,reverse=0;
    printf("Enter a number:");
    scanf("%d",&n);

    while(n>0){
        m=n%10;
        n=n/10;
        sum=sum+m;
        reverse=(reverse*10)+m;
    }

    printf("Sum of digits = %d\n",sum);
    printf("Reverse of the number = %d\n",reverse);

    return 0;
}
