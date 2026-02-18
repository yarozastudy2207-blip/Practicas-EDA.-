#include <stdio.h> // Standard input/output library for C

#define NUM_PRODUCTS 5  // Number of products available

// Matrix to hold product data: prices, stock, and cart quantities
float Mat[3][NUM_PRODUCTS] = {

    {1, 2, 3, 4, 5}, //Price of products
    {6, 0, 8, 9, 10}, //Stock of products
    {0, 0, 0, 0, 0}, //Cart of products
}; 

char* productNames[NUM_PRODUCTS] = {"Product 1", "Product 2", "Product 3", "Product 4", "Product 5"}; // Names of products

#include "menu.c" // Include the menu function from menu.c

int main() { // Main function
    menu(); // Call the menu function to start the program
    return 0;
}