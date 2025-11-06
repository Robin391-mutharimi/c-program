/*
Name:Robin Mutharimi
Reg NO:CT101/G/26555/25
Description:A program of maintainig daily records of book borrowing in a library
            and store each title in text file named borrowed_books.txt
Date:06/11/2025
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char title[100];

    // Open the file in append mode so existing records are preserved
    file = fopen("C:\\Users\\L3BOH's\\OneDrive\\Desktop\\C programs\\borrowed_books.txt", "a");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Prompt the librarian to enter a book title
    printf("Enter the title of the borrowed book: ");
    fgets(title, sizeof(title), stdin);

    // Write the title to the file
    fprintf(file, "%s", title);
    fprintf(file,"Book tittle successfully stored\n");
    // Close the file
    fclose(file);

    // Display confirmation
    printf("Book title successfully stored in borrowed_books.txt\n");

    return 0;
}
