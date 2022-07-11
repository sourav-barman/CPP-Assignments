/*
Program which takes the cost price and selling price of a product from the user. 
Now calculate and print profit or loss percentage.
*/

#include <stdio.h>

int main() {
    double costPrice, sellingPrice, difference, profitPercentage, lossPercentage;

    printf("\nEnter CostPrice of the product: ");
    scanf("%lf", &costPrice);
    printf("\nEnter SellingPrice of the product: ");
    scanf("%lf", &sellingPrice);

    difference = sellingPrice - costPrice;
    if (difference >= 0) {
        profitPercentage = (difference / costPrice) * 100;
        printf("\nProfit percentage: %lf %%", profitPercentage);
    } else {
        lossPercentage = (-difference / costPrice) * 100;
        printf("\nLoss percentage: %lf %%", lossPercentage);
    }

    return 0;
}