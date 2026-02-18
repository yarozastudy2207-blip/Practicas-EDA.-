void show_products() { // Function to display available products
        printf("Name\tPrice\tStock\n"); // Header for the product list
        for(int i = 0; i < NUM_PRODUCTS; i++) { // Loop through all products
            if (Mat[1][i] > 0) { // Only show products that are in stock  
            printf("%s\t%.2f\t%.0f\n", productNames[i], Mat[0][i], Mat[1][i]); // Print product name, price, and stock
        }
    }
}