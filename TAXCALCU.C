#include <stdio.h>
float calculateTax(float income){
float tax = 0;
if (income <= 250000){
tax = 0;
}
else if(income > 250000 && income <= 500000){
tax = (income - 250000) * 0.05;
}
else if(income > 500000 && income <= 1000000){
tax = 12500 + (income - 500000) * 0.01;
}
else{
tax = 62500 + (income - 1000000) * 0.15;
}
return tax ;
}

int main() {
float income, taxAmount;

printf("enter your income:");
scanf("%f", &income);

taxAmount = calculateTax(income);

printf("Tax to be paid: %.2f\n", taxAmount);
getch();
return 0;
}