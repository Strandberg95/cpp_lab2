#include <iostream>
#include "part1/header/Prime.h"
#include "part2/header/StringRep.h"
#include "part2/header/CharRep.h"

using namespace std;

int main(){
	//Prime prime(30);
/*
    StringRep rep;
    string s = "en gång fanns den en liten apa";

    rep.Substitute2(s,"en","e");
    rep.print();
*/

    CharRep rep;
    rep.Substitute2("Det fanns en gång en liten Christoffer. Din mamma gillade honom","en","Ö");
    rep.print();
}