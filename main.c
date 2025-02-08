#include "library.h"
#include "ui.h"

#define SAVE_FILENAME "library.txt"

int main() {
    load_library(SAVE_FILENAME); // Load at startup

    int choice;
    // ... (Variables for book details)

    do {
        display_menu();
        scanf("%d", &choice);
        getchar(); // Clear input buffer

        switch (choice) {
            case 1:
                // ... (Get book details from user and call add_book)
                break;
            case 2:
                list_books();
                break;
            // ... other cases for search, borrow, return, save, load, exit ...
            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 8);

    return 0;
}