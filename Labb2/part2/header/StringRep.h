//
// Created by stran on 2017-10-03.
//

#ifndef LABB2_STRINGREP_H
#define LABB2_STRINGREP_H

#include <string>
#include <iostream>
using namespace std;

class StringRep {
private:
    char* cPtr;
    int size;
    char* createCharArr(int const size, string const stringToArr);
    char* swap(const string& iostring, const string& before, const string& after, const int& sequenceAmount);
    int countSequences(const string& iostream, const string& before);
public:
    StringRep();
    void Substitute2(string & iostring, const string& before, const string& after);
    void print();
};


#endif //LABB2_STRINGREP_H
