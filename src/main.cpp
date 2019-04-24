#include <iostream>
#include <string>
#include "Library.hpp"


using namespace std;

int main()
{

    int now = 2019;
    int bookId = 0;
    int authorId = 0;

    Library lib;

    int choice = 1;
    while(choice != 5)
    {
        cout << "1) Add author" << endl
             << "2) Add book" << endl
             << "3) Show authors" << endl
             << "4) Show books" << endl
             << "5) Quit" << endl
             << "give number: ";
        cin >> choice;
        while ((getchar()) != '\n');

        switch (choice)
        {
            case 1:
                lib.addAuthor(authorId);
                break;
            case 2:
                lib.addBook(bookId, now);
                break;
            case 3:
                lib.showAuthors();
                break;
            case 4:
                lib.showBooks();
                break;
        }
    }

    return 0;
}
