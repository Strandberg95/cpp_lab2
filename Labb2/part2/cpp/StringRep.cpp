//
// Created by stran on 2017-10-03.
//
#include <iostream>
#include "../header/StringRep.h"
#include <cstring>
using namespace std;

StringRep::StringRep() = default;
/*
char* StringRep::createCharArr(const int size, const string stringToArr)
{
    char* rArr = new char[size];
    for(int i = 0; i != size; i++)
    {
        rArr[i] = stringToArr.at(i);
    }
    return rArr;
}
*/
void StringRep::Substitute2(string& iostring, const string& before, const string& after)
{
    int sequences = countSequences(iostring,before);
    this->cPtr = swap(iostring,before,after,sequences);
}

char* StringRep::swap(const string& iostring, const string& before, const string& after, const int& sequenceAmount )
{
    this->size = ((after.size()-before.size()) * sequenceAmount) + iostring.size();
    char* rArr = new char[this->size];
    int swapIndex = 0;
    int difference = 0;

    cout << "Starting swap" << endl;

    for(int i = 0; i != this->size;)
    {
        bool match = true;
        for(int j = 0; j < before.size(); j++)
        {
            if(iostring.at(i+j-difference) != before.at(j))
            {
                match = false;
                break;
            }
        }
        if(match == true)
        {
            for(int k = i; k != i+after.size(); k++)
            {
                rArr[k] = after.at(swapIndex);
                swapIndex++;
            }
            i += swapIndex;
            swapIndex = 0;
            difference++;
        }
        else
        {
            rArr[i] = iostring.at(i-difference);
            i++;
        }
    }
    return rArr;

}
int StringRep::countSequences(const string& iostream, const string& before)
{
    int rAmount = 0;
    for(int i = 0; i != iostream.size(); i++)
    {
        bool match = true;
        for(int j = i,k = 0 ; j < i+before.size(); j++,k++){
            if(iostream.at(j) != before.at(k))
            {
                match = false;
                break;
            }
        }
        if(match)
        {
            rAmount++;
        }
    }
    return rAmount;
}
void StringRep::print()
{
    for(int i = 0; i != this->size; i++)
    {
        cout << cPtr[i];
    }
}