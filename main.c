/*
    This is a program that allows a user to:

    1.  Input a name of an item.

    2.  The price of the item.

    3.  The quantity of the item.

    The program should be able to calculate a total for the user.
*/

#include <stdio.h>
#include <string.h>

//  Function to calculate the price of item based on quantity
float calculatePrice(float price, int quantity) {
    return (price * quantity);
}

int main() {
    //  This are the items available in the store
    char itemNames[][20] = {
        "Bread for Kshs.50",
        "Milk for Kshs.60",
        "Eggs @ Kshs.15",
        "Tea for Kshs.200"
    };
    float itemPrices[] = {50.0, 60.0, 15.0, 200.0};
    int numItems = 4;

    int itemNoNames;
    char itemName[100];
    float itemPrice;
    int itemQuantity;
    float totalAmount = 0.0;
    int continueShopping = 1;

    //  Prints names of items in the store
    printf("Available items:\n");
    for (itemNoNames = 0; itemNoNames < numItems; itemNoNames++) {
        printf("%d. %s\n", itemNoNames + 1, itemNames[itemNoNames]);
    }
    printf("\n");

    while (continueShopping) {
        //  Prompts the cashier to input the number of the items the customer wishes to buy.
        int itemChoice;
        printf("Enter the number of the item you wish to purchase (or 0 to finish): ");
        scanf("%d", &itemChoice);

        //  Validates cashier input.
        if (itemChoice < 0 || itemChoice > numItems) {
            printf("Invalid item number. Please try again.\n");
            continue;
        }

        if (itemChoice == 0) {
            continueShopping = 0;
            break;
        }

        //  Get the selected item name and price.
        strcpy(itemName, itemNames[itemChoice - 1]);
        itemPrice = itemPrices[itemChoice - 1];

        //  Prompts the cashier to input quantity of items bought.
        printf("Number of items bought: ");
        scanf("%d", &itemQuantity);

        //  Validate the quantity input.
        if (itemQuantity <= 0) {
            printf("Invalid quantity. Please try again.\n");
            continue;
        }

        //  Calculate the price based on number of items bought.
        totalAmount += calculatePrice(itemPrice, itemQuantity);

        //  Print the details of the item purchased.
        printf("\nName of item: %s\n", itemName);
        printf("Price of item: Kshs. %.2f\n", itemPrice);
        printf("Number bought: %d\n", itemQuantity);
        printf("Total amount so far: Kshs. %.2f\n", totalAmount);
        printf("\n");
    }

    //  Prints the final total amount to be paid by the customer.
    printf("Final total amount: Kshs. %.2f\n", totalAmount);

    return 0;
}