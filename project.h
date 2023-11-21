#ifndef PLAYOUT_PROJECT_H
#define PLAYOUT_PROJECT_H


#include "istream"
#include "ostream"

using namespace std;

class Length {
public:
    explicit Length(int value);
   int getValue() const;
    void setValue(int enter);
    Length operator+(const Length& other)const;

private:
    int value;
    friend istream& operator>>(istream& stream,Length& value);
    friend ostream& operator<<(ostream& stream,const Length& value);

};


#endif
