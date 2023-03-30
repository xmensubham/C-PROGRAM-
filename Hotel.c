#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define YELLOW "\033[0;33m"
#define BLUE "\033[0;34m"
#define MAGENTA "\033[0;35m"
#define CYAN "\033[0;36m"
#define RESET "\033[0m"

int main()
{
    int choice, quantity, total = 0;
    char name[100];
    bool is_valid = false;

    printf(CYAN "       -------------------------------\n");
    printf("       |  WELCOME TO THE DIYA HOTEL  |\n");
    printf("       -------------------------------\n" RESET);

    printf(YELLOW "\nWhat is your name? " RESET);
    fgets(name, sizeof(name), stdin);
    printf("\n" CYAN "Hi %s" RESET "\nPlease choose from the menu below:\n\n", name);

    do {
        printf(BLUE "--------------------------------------\n");
        printf("|   MENU                             |\n");
        printf("|------------------------------------|\n");
        printf("| 1 | Thupka           Rs. 80/-      |\n");
        printf("| 2 | Fried rice       Rs. 100/-     |\n");
        printf("| 3 | Thai Roll        Rs. 50/-      |\n");
        printf("| 4 | Chick Burger     Rs. 110/-     |\n");
        printf("| 5 | Chick Puri       Rs. 40/-      |\n");
        printf("| 6 | Veg Momo         Rs. 0/-       |\n");
        printf("| 7 | Coffee           Rs. 40/-      |\n");
        printf("| 8 | Ice Cream        Rs. 0/-       |\n");
        printf("-------------------------------------\n\n" RESET);

        do {
            printf(YELLOW "Enter your choice (1-8): " RESET);
            if (scanf("%d", &choice) != 1 || choice < 1 || choice > 8) {
                printf(RED "Invalid input. Please enter a number between 1 and 8.\n" RESET);
                while (getchar() != '\n');
            } else {
                is_valid = true;
            }
        } while (!is_valid);

        if (choice == 6 || choice == 8) {
            printf(MAGENTA "Free item! Enjoy your %s\n" RESET, choice == 6 ? "Veg Momo" : "Ice Cream");
            printf(YELLOW "Press Enter to continue...\n" RESET);
            getchar();
        } else {
            do {
                printf(YELLOW "Enter quantity (1-10): " RESET);
                if (scanf("%d", &quantity) != 1 || quantity < 1 || quantity > 10) {
                    printf(RED "Invalid input. Please enter a number between 1 and 10.\n" RESET);
                    while (getchar() != '\n');
                } else {
                    is_valid = true;
                }
            } while (!is_valid);

            switch (choice) {
               case 1:
total += 80 * quantity;
printf(GREEN "%d plates of Thupka added to your order.\n" RESET, quantity);
break;
case 2:
total += 100 * quantity;
printf(GREEN "%d plates of Fried rice added to your order.\n" RESET, quantity);
break;
case 3:
total += 50 * quantity;
printf(GREEN "%d Thai Rolls added to your order.\n" RESET, quantity);
break;
case 4:
total += 110 * quantity;
printf(GREEN "%d Chick Burgers added to your order.\n" RESET, quantity);
break;
case 5:
total += 40 * quantity;
printf(GREEN "%d plates of Chick Puri added to your order.\n" RESET, quantity);
break;
case 7:
total += 40 * quantity;
printf(GREEN "%d cups of Coffee added to your order.\n" RESET, quantity);
break;
}
        printf(YELLOW "\nYour total is Rs. %d\n" RESET, total);
        printf(YELLOW "Press Enter to continue...\n" RESET);
        getchar();
    }
    is_valid = false;
} while (true);

return 0;
}
    