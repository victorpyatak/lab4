#include "PcGame.h"
#include <iostream>
#include <string>
using namespace std;

PcGame::PcGame(string sn , int hc , float imav) {
	setName(sn);
	setCap(hc);
	setAvg(imav);
}

string PcGame:: getName() {
	return name;
}

void PcGame::setName(string n) {
	name = n;
}

int PcGame::getCap() {
	return heroCap;
}

void PcGame::setCap(int c) {
	heroCap = c;
}

float PcGame::getAvg() {
	return imdbAvg;
}

void PcGame::setAvg(float imavg) {
	imdbAvg = imavg;
}



PcGame::~PcGame() {

}