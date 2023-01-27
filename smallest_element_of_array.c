#include<stdio.h>
 int main(){
    int size,i,smallest;
    printf("enter size of array:- ");
    scanf("%d",&size);
    int a[size];
    printf("\n enter %d element of the array:\n",size);
   for(i=0;i<size;i++){
    scanf("%d",&a[i]);
   }
    printf("element of array are:-");
    for(i=0;i<size;i++){
        printf("%d ",a[i]);
    }
    smallest=a[0]; 
    for(i=1;i<size;i++){
       if(smallest>a[i]){
        smallest=a[i];
       }

    }
    printf("\nsmallest element of array is:-%d",smallest);
    return 0;
 }