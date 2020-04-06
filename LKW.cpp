#include "LKW.h"


LKW::LKW(int id, string marke, string modell, double gesamtgewicht, double bezeichnung) :Auto(id, marke, modell) {

	Gesamtgewicht = gesamtgewicht;
	Bezeichnung = bezeichnung;
}

void LKW::load(double x) {
	Gesamtgewicht += x;
}

void LKW::unload(double x) {
	Gesamtgewicht -= x;
}

LKW::~LKW(){}