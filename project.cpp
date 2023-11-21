
#include "project.h"
#include <ostream>
#include <iostream>
using namespace std;

int Length::getValue() const {
    return value;
}


void Length::setValue(int enter) {
    this->value = enter;
}


ostream& operator<<(ostream& stream,const Length& value){
    stream << value.value;
    return stream;
}
istream& operator>>(istream& stream,Length& value){
    stream>>value.value;
    return stream;
}

Length Length::operator+(const Length &other) const {
    return Length (value + other.value);
}

Length::Length(int value): value{value} {}
