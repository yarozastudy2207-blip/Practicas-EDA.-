#
void menu() {
    float mat[3][MAX_PRODUCTS]; // Matrix to store product information (price, stock, cart quantity)
    char productNames[MAX_PRODUCTS][20]; // Array to store product names

    enum bool res = load_products(mat, productNames); // Load products from file

    if(!res) { // Check if products were loaded successfully
        printf("Error loading products. Please check the products.txt file.\n");
        return; // Exit the menu function if loading failed
    }
    else {
        while (1) { // Infinite loop to keep the menu running until the user chooses to exit
            printf("\n\n");
            printf("=====================================\n");
            printf("         SUPERMARKET UNAM           \n");
            printf("=====================================\n");  
            printf("Welcome to the Supermarket UNAM!\n");
            printf("\n");
            printf("1. Show Products\n");
            printf("2. Add Product\n");
            printf("3. Show Cart\n");
            printf("4. Remove product\n");
            printf("5. Exit\n");
            printf("Please select an option: ");
            
            int option; // Variable to store the user's menu option
            scanf("%d", &option);
            
            // Read user input for menu option
            if (scanf("%d", &option) != 1) { // Validate input
                printf("Invalid input. Please enter a number between 1 and 5.\n");
                while (getchar() != '\n'); // Clear the input buffer
                continue; // Prompt the user again
            }
            else {
            switch(option) {
                case 1:
                    show_products(); // Call the function to show products
                    break;
                case 2:
                    add_products(); // Call the function to add products to the cart
                    break;
                case 3:
                    show_cart(); // Call the function to show the products in the cart
                    break;
                case 4:
                    remove_products(); // Call the function to remove products from the cart
                    break;
                case 5:
                    exit_market(); // Call the function to exit the market
                    printf("Closing system...\n");
                    return; // Exit the menu function
                default:
                    printf("Invalid option. Please try again.\n"); // Handle invalid input
                    break;
            }
        }
    }
}