#include <stdio.h>

#define MAX_PRODUCTS 100 // Maximum number of products

#include "menu.c" // Include the menu header for product names and matrix

enum bool { false, true }; // Define a boolean type

int main(){
    menu(); // Call the menu function to start the program
    return 0; // Exit the program   
}