#include <stdio.h>

int main (){
int debit, biaya;
printf("Pemakaian air :");
scanf ("%d", &debit);

if (debit >0 && debit<=15){
    biaya = debit * 250;
    printf("%d", biaya);}
else if (debit >16 && debit<=30)
{
    biaya = debit * 450;
    printf("%d", biaya);
   
}
else if (debit >31 && debit<=50)
{
    biaya = debit * 675;
    printf("%d", biaya);
}
else if (debit > 50)
{
    biaya = debit * 1125;
    printf("%d", biaya);
}
   
return 0;
}

    




