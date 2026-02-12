void show_cart(){ // Function to display the products in the cart
   
    printf("Name\tPrice\tQuantity\n"); // Header for the cart list
    for(int i = 0; i < NUM_PRODUCTS; i++) { // Loop through all products
        if (Mat[2][i] > 0) { // Only show products that are in the cart  
            printf("%s\t%.2f\t%.0f\n", productNames[i], Mat[0][i], Mat[2][i]); // Print product name, price, and quantity in cart
        }
    }
}