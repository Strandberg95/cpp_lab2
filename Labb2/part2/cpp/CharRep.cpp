//
// Created by stran on 2017-10-16.
//

#include "../header/CharRep.h"
#include <iostream>
using namespace std;

CharRep::CharRep()
{

}

int CharRep::countSequences(const char* iostream, const char* before)
{
    int index = 0, amount = 0;
    while(iostream[index] != '\0')
    {
        if(iostream[index++] == *before)
        {
            amount++;
        }
    }
    return amount;
}

char* CharRep::swap(const char* input, const char* before, const char* after)
{
    int inputSize = countSize(input);
    int beforeSize = countSize(before);
    int afterSize = countSize(after);

    cout << "InputSize: " << inputSize << endl;
    cout << "BeforeSize: " << beforeSize << endl;
    cout << "AfterSize: " << afterSize << endl;

    this->size = ((afterSize-beforeSize) * countSequences(input,before)) + inputSize;
    char* rArr = new char[this->size];
    int swapIndex = 0;
    int difference = 0;

    cout << "Starting swap" << endl;

    for(int i = 0; i != this->size;)
    {
        bool match = true;
        for(int j = 0; j < beforeSize; j++)
        {

            if(input[i+j-difference] != before[j])
            {
                match = false;
                break;
            }
        }
        if(match == true)
        {
            for(int k = i; k != i+afterSize; k++)
            {
                rArr[k] = after[swapIndex];
                swapIndex++;
            }
            i += swapIndex;
            swapIndex = 0;
            difference+=(afterSize-beforeSize);
        }
        else
        {
            rArr[i] = input[i-difference];
            i++;
        }
    }
    return rArr;
}

int CharRep::countSize(const char* input)
{
    int index = 0, amount = 0;
    while(input[index++] != '\0')
    {
        amount++;
    }
    return amount;
}
void CharRep::Substitute2(char* iostring, const char* before, const char* after)
{
    cPtr = swap(iostring,before,after);
}

void CharRep::print()
{
    for(int i = 0; i != this->size; i++)
    {
        cout << cPtr[i];
    }
}