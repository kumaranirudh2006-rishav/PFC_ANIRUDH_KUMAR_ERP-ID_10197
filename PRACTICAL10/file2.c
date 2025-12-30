#include <stdio.h>
int main(){
    int n;
    printf("Enter a size of matrix:");
    scanf("%d",&n);
    int sum=0;
    int arr[n][n];
    printf("Enter Element\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);

        }
    }
    for(int i=0;i<n;i++){
         sum=sum+arr[i][i];
         sum=sum+arr[i][n-1-i];
    }
    if(n%2==1){
        sum=sum-arr[n/2][n/2];
    }
    printf("Sum of both diagonal is %d",sum);
    return 0;
}
///////////Output//////////
/*
Enter a size of matrix:3
Enter Element
2
2
2
3
3
3
4
4
4
Sum of both diagonal is 15
*/