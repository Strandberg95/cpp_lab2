#include "StringRep.h";


StringRep::StringRep(string s) {
	this->s = s;
	strcpy(cPtr,s.c_str);
}

void StringRep :: Substitute2(string & iostring, const string& before, const string& after) {

}

string StringRep::getString() {
	return s; 
}