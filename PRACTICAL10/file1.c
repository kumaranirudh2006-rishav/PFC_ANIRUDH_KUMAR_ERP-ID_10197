#include <stdio.h>
int main(){
    int r,c;
    printf("Enter a number of rows and columns");
    scanf("%d %d",&r,&c);
    int arr[r][c];
    printf("Enter Element\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
     int max=arr[0][0];
     int min=arr[0][0];
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
           if(arr[i][j]>max)
           max=arr[i][j];

           if(arr[i][j]<min)
           min=arr[i][j];

        }
     }
     printf("Maaximum is %d\n",max);
     printf("Minimum is %d\n",min);
     return 0;
}
//////////////Output///////////
/*
Enter Element
1
2
3
4
5
6
7
8
9
10
11
12
Maaximum is 12
Minimum is 1
*/