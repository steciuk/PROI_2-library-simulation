#ifndef LIBRARY_H
#define LIBRARY_H

#include "Book.hpp"
#include "Author.hpp"
#include <vector>


class Library
{
private:
    std::vector<Book<char>> booksCH;
    std::vector<Book<int>> booksINT;
    std::vector<Book<char>>::iterator iBooksCH;
    std::vector<Book<int>>::iterator iBooksINT;
    std::vector<Author> authors;
    std::vector<Author>::iterator iAuthors;
public:
    void addBook(int& bookId, int now);
    void showBooks();
    void addAuthor(int& authorId);
    void showAuthors();
    void addBookAuthor(Book<char>& book);
    void addBookAuthor(Book<int>& book);


};


#endif

