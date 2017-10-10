//
// Created by stran on 2017-10-03.
//
#include <iostream>
#include "../header/StringRep.h"
#include <string>
using namespace std;
StringRep::StringRep(string s) {
    this->s = s;
    print();
}

void StringRep::Substitute2(string &iostring, const string &before, const string &after) {

}

void StringRep::print(){
    cout << s;
}
/*
basic_string<char> StringRep::getString() {
    return std::basic_string<char>();
}
 */
