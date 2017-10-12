#include <iostream>
#include "part1/header/Prime.h"
#include "part2/header/StringRep.h"

using namespace std;

int main(){
	//Prime prime(30);
	StringRep rep;
    string s = "en fanns en gång en liten apa. Den lilla apan gillade en liten banan. den lilla bananen gillade en liten mygen";

    rep.Substitute2(s,"en","ett");
    rep.print();
}