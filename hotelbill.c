#include <stdio.h>

int main() {
    int choice, quantity;
    float total_bill = 0.0;
    char order_again;

    printf("--- Welcome to the Hotel Restaurant ---\n");

    do {
        // Display Menu Card
        printf("\nMENU CARD:\n");
        printf("1. Burger     - $5.00\n");
        printf("2. Pizza      - $12.00\n");
        printf("3. Pasta      - $8.50\n");
        printf("4. Cold Drink - $2.50\n");
        printf("5. Exit & Generate Bill\n");
        
        printf("\nEnter your choice (1-5): ");
        scanf("%d", &choice);

        // Terminate early if user chooses option 5
        if (choice == 5) {
            break;
        }

        // Process food items based on selection
        switch (choice) {
            case 1:
                printf("Enter quantity for Burger: ");
                scanf("%d", &quantity);
                total_bill += quantity * 5.00;
                printf("Added %d Burger(s) to your order.\n", quantity);
                break;
                
            case 2:
                printf("Enter quantity for Pizza: ");
                scanf("%d", &quantity);
                total_bill += quantity * 12.00;
                printf("Added %d Pizza(s) to your order.\n", quantity);
                break;
                
            case 3:
                printf("Enter quantity for Pasta: ");
                scanf("%d", &quantity);
                total_bill += quantity * 8.50;
                printf("Added %d Pasta(s) to your order.\n", quantity);
                break;
                
            case 4:
                printf("Enter quantity for Cold Drink: ");
                scanf("%d", &quantity);
                total_bill += quantity * 2.50;
                printf("Added %d Cold Drink(s) to your order.\n", quantity);
                break;
                
            default:
                printf("Invalid selection! Please choose a valid item.\n");
                continue; // Skip the "order more" prompt for wrong input
        }

        printf("Do you want to order anything else? (y/n): ");
        scanf(" %c", &order_again); // Notice the space before %c to clear buffer

    } while (order_again == 'y' || order_again == 'Y');

    // Final Bill Output
    printf("\n-----------------------------------\n");
    printf("         FINAL HOTEL BILL          \n");
    printf("-----------------------------------\n");
    printf("Subtotal:               $%7.2f\n", total_bill);
    printf("CGST (2.5%%):            $%7.2f\n", total_bill * 0.025);
    printf("SGST (2.5%%):            $%7.2f\n", total_bill * 0.025);
    printf("-----------------------------------\n");
    printf("Grand Total Due:        $%7.2f\n", total_bill * 1.05);
    printf("-----------------------------------\n");
    printf("Thank you for dining with us!\n");

    return 0;
}
