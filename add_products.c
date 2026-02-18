
void add_products() { // Function to add products to the cart

    show_products(); // Show available products before adding to cart
    int item, quantity; // Variables to hold the product number and quantity to add
    printf("Enter the product number to add to cart (1-%i): ", NUM_PRODUCTS); // Prompt the user to enter the product number
    scanf("%i", &item);
    if (item < 1 || item > NUM_PRODUCTS) { // Check if the entered product number is valid
        return;
    }
    else { // If the product number is valid, prompt the user to enter the quantity
        printf("Enter the quantity to add to cart: "); // Prompt the user to enter the quantity
        scanf("%i", &quantity);
        if (quantity < 1 || quantity > Mat[1][item - 1]) { // Check if the entered quantity is valid
            return;
        }
        else { // If the quantity is valid, add the product to the cart and update the stock
            Mat[2][item - 1] += quantity; // Add the quantity to the cart
            Mat[1][item - 1] -= quantity; // Decrease the stock by the quantity added to the cart
        }
    }
}