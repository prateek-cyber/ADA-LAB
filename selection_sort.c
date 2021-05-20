#include<stdio.h>
int main(){
    int size;
    

    printf("Enter size of array: ");
    scanf("%d",&size);
    int arr[size];
    // Accepting elements into array
    printf("Enter elements of array: ");
    for(int i=0;i<size;i++)
        scanf("%d",&arr[i]);
    
    int ind;
    int k=0;

    while( k<size){
        int min = arr[k];

    for(int j=k;j<size;j++){
        if(arr[j]<=min){
        ind=j;
        min = arr[j];
        }
       
    }
    int c;
    printf("%d\n",min);
    c = arr[k];
    arr[k]=min;
    arr[ind]=c;
    k=k+1;
    }
for(int i=0;i<size;i++)
printf("%d\t",arr[i]);

}