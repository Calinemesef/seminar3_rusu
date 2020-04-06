#include "Auto.h"


Auto::Auto(){
	Id = -1;
	Marke = "keine Marke";
	Modell = "kein Modell";
}

Auto::Auto(int id, string marke, string modell) {
	Id = id;
	Marke = marke;
	Modell = modell;
}

Auto::~Auto(){}