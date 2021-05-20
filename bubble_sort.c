#include<stdio.h>
int main(){
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements: ");
    for(int i = 0; i < size;i++)
    scanf("%d",&arr[i]);

    int swap=1;
    int c;

    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(arr[j+1]<arr[j]){
            c = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = c;
            printf("%d\n",arr[j]);

            }
            


        }

    }
    for(int i = 0;i<size;i++)
    printf("%d",arr[i]);
}