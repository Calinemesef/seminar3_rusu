#include "PKW.h"

PKW::PKW(int id, string marke, string modell, string sonder) :Auto(id, marke, modell){
    Sonderausstatung = sonder;
}

PKW::~PKW() {}