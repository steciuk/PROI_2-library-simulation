#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

template <typename T>
class Book
{
private:
    int id;
    string title;
    vector<int> authorId;
    int year;
    T age;
public:
    Book(int& id_, string title_ = "null", int year_ = 0, T age_ = 0);
    int getId();
    void showBook();
    void addAuthor(int aId);
    vector<int> getAuthorId();
};

template <typename T>
Book<T>::Book(int& id_, string title_, int year_, T age_)
{
    this->id = id_;
    id_++;
    this->title = title_;
    this->year = year_;
    this->age = age_;
}

template <typename T>
vector<int> Book<T>::getAuthorId()
{
    return this->authorId;
}

template <typename T>
int Book<T>::getId()
{
    return this->id;
}

template <typename T>
void Book<T>::showBook()
{
    cout << this->id << " " << this->title << " " << this->year << " "<< (int)this->age;
}

template <typename T>
void Book<T>::addAuthor(int aId)
{
    this->authorId.push_back(aId);

}

#endif
