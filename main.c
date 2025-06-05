/*
    This is a program that allows a user to:

    1.  Input a name of an item.

    2.  The price of the item.

    3.  The quantity of the item.

    The program should be able to calculate a total for the user.
*/

#include <stdio.h>

//  Function to calculate the price of item based on quantity
float calculatePrice(float price, int quantity) {
    return (price * quantity);
}

int main() {
    //  This are the items available in the store
    char itemNames[] [20] = {
        "Bread for Kshs.50",
        "Milk for Kshs.60",
        "Eggs @ Kshs.15",
        "Tea for Kshs.200"
    };
    int itemNoNames;

    char itemName[100];

    float itemPrice;

    int itemQuantity;

    //  Prints names of items in the store
    for (itemNoNames = 0; itemNoNames < 4; itemNoNames++) {
        printf("%s\n\n", itemNames[itemNoNames]);
    }

    //  Prompts a user to input name of item they wish to purchase.
    printf("Item: ");
    scanf("%99s", itemName);

    //  Prompts the user to input the price of the item.
    printf("Price: ");
    scanf("%f", &itemPrice);

    //  Prompts the user to input quantity of items bought.
    printf("Number of items bought: ");
    scanf("%d", &itemQuantity);

    //  Prints name of bought.
    printf("Name of item: %s\n", itemName);

    //  Prints item price.
    printf("Price of item: Kshs. %.2f\n", itemPrice);

    //  Prints the quantity of items to be bought:
    printf("Number bought: %d\n", itemQuantity);

    //  Calculates the price based on number of items bought.
    float totalAmount = calculatePrice(itemPrice, itemQuantity);

    //  Prints the final price:
    printf("Total amount: Kshs. %.2f\n", totalAmount);

    return 0;
}