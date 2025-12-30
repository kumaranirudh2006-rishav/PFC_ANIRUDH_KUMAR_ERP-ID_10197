#include <stdio.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int rev=0;
    while(n!=0){
        int a=n%10;
        rev=rev*10+a;
        n=n/10;
    }
    printf("Reverse of number: %d",rev);
    return 0;
}
/////////output///////////
/*
Enter a number:1234
Reverse of number: 4321
*/