#include <stdio.h>
int main(){
    int max=0;
    int min=6;
    int arr[]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        if(arr[i]>max)max=arr[i];
        if(arr[i]<min)min=arr[i];
    }
    printf("Maximum is %d\nMinimum is %d",max,min);
    return 0;
}
/////////////Output/////////////
/*
Maximum is 5
Minimum is 1
*/