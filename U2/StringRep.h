#ifndef STRINGREP_H
#define STRINGREP_H

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
	string getString();
};



#endif // String.h!