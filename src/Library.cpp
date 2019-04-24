#include "Library.hpp"
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <sstream>
using namespace std;

void Library::addBook(int& bookId, int now)
{
    string title;
    int year;

    cout << "give title: ";
    getline(cin, title);
    cout << "give year: ";
    cin >> year;

    int age = now - year;
    if(age < 100)
    {
        Book<char> bookTempCH(bookId, title, year, (char)age);
        //bookTempCH.showBook();
        Library::addBookAuthor(bookTempCH);
        booksCH.push_back(bookTempCH);
    }
    else
    {
        Book<int> bookTempINT(bookId, title, year, age);
        //bookTempINT.showBook();
        Library::addBookAuthor(bookTempINT);
        booksINT.push_back(bookTempINT);
    }
}

void Library::addBookAuthor(Book<char>& book)  //przecazenie funkcji
{
    stringstream ss;
    string ids;
    int tempId;
    Library::showAuthors();
    cout << "give autors ids: ";
    cin.ignore();
    getline(cin, ids);
    ss << ids;
    while (!ss.eof())
    {
        ss >> ids;
        if (stringstream(ids) >> tempId)
        {
            book.addAuthor(tempId);
        }
    }
}

void Library::addBookAuthor(Book<int>& book)
{
    stringstream ss;
    string ids;
    int tempId;
    Library::showAuthors();
    cout << "give autors ids: ";
    cin.ignore();
    getline(cin, ids);
    ss << ids;
    while (!ss.eof())
    {
        ss >> ids;
        if (stringstream(ids) >> tempId)
        {
            book.addAuthor(tempId);
        }
    }
}

void Library::showBooks()
{
    for( this->iBooksCH = booksCH.begin(); iBooksCH != booksCH.end(); iBooksCH++ )
    {
        iBooksCH->showBook();
        cout << endl;
        vector<int> authorIdsCH = iBooksCH->getAuthorId();
        for( vector<int>::iterator i = authorIdsCH.begin(); i != authorIdsCH.end(); i++ )
        {
            for( this->iAuthors = authors.begin(); iAuthors != authors.end(); iAuthors++ )
            {
                if(*i == iAuthors->getId())
                {
                    iAuthors->showAuthor(1);
                }
            }
        }
    }

    for( this->iBooksINT = booksINT.begin(); iBooksINT != booksINT.end(); iBooksINT++ )
    {
        iBooksINT->showBook();
        cout << endl;
        vector<int> authorIdsINT = iBooksINT->getAuthorId();
        for( vector<int>::iterator i = authorIdsINT.begin(); i != authorIdsINT.end(); i++ )
        {
            for( this->iAuthors = authors.begin(); iAuthors != authors.end(); iAuthors++ )
            {
                if(*i == iAuthors->getId())
                {
                    iAuthors->showAuthor(1);
                }
            }
        }
    }
}

void Library::addAuthor(int& authorId)
{
    string name;
    string surname;

    cout << "give name: ";
    cin >> name;
    cout << "give surname: ";
    cin >> surname;
    while ((getchar()) != '\n');

    Author authorTemp(authorId, name, surname);
    authors.push_back(authorTemp);
    sort(authors.begin(), authors.end(), greater<Author>());
}

void Library::showAuthors()
{
    for( this->iAuthors = authors.begin(); iAuthors != authors.end(); iAuthors++ )
    {
        iAuthors->showAuthor();
    }



}
