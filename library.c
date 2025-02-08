#include "book.h"

Book library[MAX_BOOKS];
int num_books = 0;

// Function implementations (add_book, list_books, search_books, borrow_book, return_book, save_library, load_library)
// ... (Implement these functions - similar logic to previous examples, but adapted for books)

// Example implementation of add_book
void add_book(const char *title, const char *author, const char *isbn) {
  if (num_books < MAX_BOOKS) {
    strncpy(library[num_books].title, title, MAX_TITLE_LENGTH - 1);
    strncpy(library[num_books].author, author, MAX_AUTHOR_LENGTH - 1);
    strncpy(library[num_books].isbn, isbn, MAX_ISBN_LENGTH - 1);
    library[num_books].available = 1;
    num_books++;
    printf("Book added.\n");
  } else {
    printf("Library is full.\n");
  }
}

// ... Implement other functions similarly