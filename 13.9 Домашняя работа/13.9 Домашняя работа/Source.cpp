#include <iostream>
#include "Header.h"
using namespace std;

int main() {
    Gr* oo = new Gr;
    system("chcp 1251");
    const char* imya1;
    const char* imya2;
    const char* imya3;
    const char* imya4;
    const char* imya5;
    const char* znat;
    const char* neznat;      
    imya1 = "Олег";
    imya2 = "Никита";
    imya3 = "Ваня";
    imya4 = "Надя";
    imya5 = "Женя";
    znat = "знакомы";
    neznat = "не знают друг друга";  
    oo->add(imya1, imya2, znat);
    oo->add(imya1, imya3, znat);
    oo->add(imya1, imya4, znat);
    oo->add(imya1, imya5, neznat);
    oo->add(imya2, imya4, znat);
    oo->add(imya2, imya3, znat);
    oo->add(imya2, imya5, znat);
    oo->add(imya3, imya4, znat);
    oo->add(imya3, imya5, znat);
    oo->add(imya4, imya5, znat);
	return 0;
}