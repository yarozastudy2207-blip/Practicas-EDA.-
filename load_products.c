enum bool load_products(float mat[3][MAX_PRODUCTS], char n[MAX_PRODUCTS][20]) {

    FILE *file = fopen("products.txt", "r"); // Open the products file for reading
    if (file == NULL) return false; // Return false if the file cannot be opened

    for (int i = 0; i < MAX_PRODUCTS; i++) { // Loop to read products from the file
        if (fscanf(file, "%20[^,],%f,%f\n", n[i], &mat[0][i], &mat[1][i]) != 3) { // Read product name, price, and stock from the file
            break; // Stop reading if there are no more products to read
        } return true; // Return true if products were loaded successfully
        mat[2][i] = 0; // Initialize cart quantity to 0
    }

    fclose(file); // Close the file after reading
    return true; // Return true if products were loaded successfully
}