#include <stdio.h>
int main() {               // programe to dfind the greatest
    int arr[]={6,7,3,4,5,8,1,2,9,10};
    int greatest=arr[0];
    int n=10;
    for(int i=0;i<=n-1;i++){
        if(arr[i]>greatest){
            greatest=arr[i];
        }

    }
    printf("%d",greatest);
    return 0;
}