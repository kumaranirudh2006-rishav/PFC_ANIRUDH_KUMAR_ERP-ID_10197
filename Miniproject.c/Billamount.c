#include <stdio.h>
int main(){
    int unit;
    float bill;
    printf("Enter total units consumed:");
    scanf("%d",&unit);
    if(unit<=50){
        bill=unit*0.50;
    }
    else if(unit<=150){
        bill=50*0.50+(unit-50)*0.75;
    }
    else if (unit<=250){
        bill=50*0.50+100*0.75+(unit-150)*1.20;
    }
    else {
         bill=50*0.50+100*0.75+100*1.2+(unit-250)*1.50;
    }
    bill = bill + (bill*0.20);
      printf("Total Electricity Bill %.2f",bill);
      return 0;
}
///////////Output////////////
/*
Enter total units consumed:321
Total Electricity Bill 391.80
*/