#include "show_products.c" // Include the function to show products
#include "add_products.c" // Include the function to add products
#include "show_cart.c" // Include the function to show the cart

void menu() {
    int option;
    while(1) {
        printf("Welcome to the Market!\n");
        printf("1. Show Products\n");
        printf("2. Add Product\n");
        printf("3. Show Cart\n");
        printf("4. Remove product\n");
        printf("5. Exit\n");
        printf("Please select an option: ");
        scanf("%d", &option);
        
        switch(option) {
            case 1:
                show_products();
                break;
            case 2:
                add_products();
                break;
            case 3:
                show_cart();
                break;
            case 4:
                // Funcion to remove product
                break;
            case 5:
                //Function to exit
                return;
            default:
                printf("Invalid option. Please try again.\n");
        }
    }
}