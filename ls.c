#include<stdio.h>
int search(int arr[],int value, int index, int size){
    if(index>size){
        return 0;
    }
    else if(arr[index] == value){
        printf("Value found at position %d",index+1);
        index = index+1;
    }
    else{
       search(arr,value,index+1,size);
    }
    return 1;
}
int main(){
    int size,value;
    
    printf("Enter the array size: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements: ");
    for(int i = 0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the value to search for: ");
    scanf("%d",&value);
    int result = search(arr,value,0,size);
    if(result==0)
    printf("Element not found");
}