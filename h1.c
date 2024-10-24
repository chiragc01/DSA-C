#include <stdio.h>
int main() {
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int evensum=0,oddsum=0;
    int n=10;
    for(int i=0;i<=n-1;i++){
        if(arr[i]%2==0){
            evensum+=arr[i];
        }else{
            oddsum+=arr[i];
        }

    }
    printf("%d",evensum);
    printf("%d",oddsum);
    return 0;
}