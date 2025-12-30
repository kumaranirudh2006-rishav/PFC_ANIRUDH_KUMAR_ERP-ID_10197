#include <stdio.h>
int main(){
   
    int arr[]={1,2,3,4,5,6};
   
    int sum=0;
    for(int i=0;i<=5;i++){
        if(arr[i]%2==0){
        sum=sum+arr[i];

    }
}
printf("Sum of all even number is : %d",sum);
return 0;
}
/////////Output///////////
/*
Sum of all even number is : 12
*/