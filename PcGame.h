#pragma once
#include <iostream>
#include <string>

using namespace std;

class PcGame {
public:
	PcGame(string sn , int hc , float imav);

	string getName();
	void setName(string n);

	int getCap();
	void setCap(int c);

	float getAvg();
	void setAvg(float imavg);

	
	~PcGame();

private:
	string name;
	int heroCap;
	float imdbAvg;
};