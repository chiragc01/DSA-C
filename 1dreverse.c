#include <stdio.h>
int main() {
    int n;
    printf("enter the value of n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("entrt the vaue of array",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
    int reverse[n];
    for(int i=0;i<n;i++){
        reverse[i]=arr[n-1-i];
    
    }
    for(int i=0;i<n;i++){
         printf("%d",reverse[i]);
    }
    return 0;
}