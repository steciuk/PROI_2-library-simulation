#include "Author.hpp"
#include <iostream>

using namespace std;

int Author::getId()
{
    return this->id;
}

Author::Author(int& id_, string name_, string surname_)
{
    this->id = id_;
    id_++;
    this->name = name_;
    this->surname = surname_;
}

void Author::showAuthor()
{
    cout << this->id << " " << this->surname << " " << this->name << endl;
}

void Author::showAuthor(int i)
{
    cout <<"    " << this->surname << " " << this->name << endl;
}

bool Author::operator>(const Author& aut) const
{
    return (surname < aut.surname);
}
