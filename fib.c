#include<stdio.h>
int main(){
    int n;
    printf("Enter value of n: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("%d",fib(n));
    }
    int res=fib(n);
}
int fib(int n){
    int res = fib(n-1)+fib(n-2);
    return res;
}