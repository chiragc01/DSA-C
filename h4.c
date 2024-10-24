#include <stdio.h>

void random(int min,int max, int count){
    
    for(int i=0;i<=count-1;i++){
        int ran_no= rand() % (max-min+1) +min;
        printf("%d",ran_no);
    }
}

int main(){
    int min,max,count=10;
    printf("enter the least value");
    scanf("%d",&min);
    printf("enter the highest value");
    scanf("%d",&max);

    random(min ,max,count);

    return 0;
}