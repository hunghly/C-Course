#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct item {
    char *itemName;
    int quantity;
    float price;
    float amount;
};

void readItem(struct item *item) {
    // read in a produce name, price, and quantity from user and store into item
    printf("Please enter the item name: ");
    scanf(" %s", item->itemName);
    printf("Please enter the quantity: ");
    scanf(" %d", &item->quantity);
    printf("Please enter the price: ");
    scanf(" %f", &item->price);
    item->amount = item->quantity * item->price; // calculate price
}

void printItem(struct item *item) {
    // prints the contents of the item
    printf("Product name: %s\nProduct quantity: %d\nProduct price: %.2f\nTotal amount: %.2f \n", \
    item->itemName, item->quantity, item->price, item->amount);
}

int main(void) {
    // declare and item and a ptr to an item
    // allocate memory for the itemName ptr
    // pass to both functions
    struct item myItem; // declare item
    struct item *myItemPtr = &myItem; //declare item ptr

    myItemPtr->itemName = (char*)calloc(100, sizeof(char)); // allocate memory for itemName ptr
    if (myItemPtr == NULL) {
        exit(-1);
    }
    readItem(myItemPtr);
    printItem(myItemPtr);
    return 0;
}