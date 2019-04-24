#ifndef AUTHOR_H
#define AUTHOR_H

#include <string>
#include <vector>

class Author
{
private:
    int id;
    std::string name;
    std::string surname;
    std::vector<int> bookId;
public:
    Author(int& id_, std::string name_ = "null", std::string surname_ = "null"); //sprawdz czy dzaila bez =...
    int getId();
    void showAuthor();
    void showAuthor(int i);
    bool operator>(const Author& aut) const;
};

#endif

