//
// Created by stran on 2017-10-16.
//

#ifndef LABB2_CHARREP_H
#define LABB2_CHARREP_H

#include <string>
#include <iostream>
using namespace std;

class CharRep {
private:
    char* cPtr;
    int size;
    int countSequences(const char* iostream, const char* before);
    int countSize(const char* input);
    char* swap(const char* input, const char* before, const char* after);
public:
    CharRep();
    void Substitute2(char* iostring, const char* before, const char* after);
    void print();
};

#endif //LABB2_CHARREP_H
