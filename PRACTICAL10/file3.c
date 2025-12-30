#include <stdio.h>
int main(){
    int r,c;
    printf("Enter a number of rows and column:");
    scanf("%d %d",&r,&c);
    int arr[r][c];
    printf("Enter Element\n");
    for(int i=0;i<=r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<r;i++){
      int sum=0;
      for(int j=0;j<r;j++){
        sum=sum+arr[i][j];
      }
      printf("Sum of rows %d =%d\n",i+1,sum);
    }
      return 0;
}
//////////Output///////////
/*
Enter a number of rows and column:3
3
Enter Element
1
2
33
4
5
6
7
8
9
1
2
3
Sum of rows 1 =36
Sum of rows 2 =15
Sum of rows 3 =24
*/