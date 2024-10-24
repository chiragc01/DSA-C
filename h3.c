#include <stdio.h>
int main() {               // programe to dfind the smalest
    int arr[]={6,7,3,4,5,8,1,2,9,10};
    int smalest=arr[0];
    int n=10;
    for(int i=0;i<=n-1;i++){
        if(arr[i]<smalest){
            smalest=arr[i];
        }

    }
    printf("%d",smalest);
    return 0;
}