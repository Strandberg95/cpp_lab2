//
// Created by stran on 2017-10-03.
//

#ifndef LABB2_STRINGREP_H
#define LABB2_STRINGREP_H

#include <string>;
#include <iostream>;
using namespace std;

class StringRep {
private:
    string s;
    char* cPtr;
public:
    StringRep(string s);
    void Substitute2(string & iostring, const string& before, const string& after);
    void print();
};


#endif //LABB2_STRINGREP_H
