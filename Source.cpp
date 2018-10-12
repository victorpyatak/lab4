#include "PcGame.h"
#include <iostream>
using namespace std;

int main() {

	PcGame gameObj("THe Game" , 45 , 8.1);

	cout << gameObj.getName() << endl;
	cout << gameObj.getAvg() << endl;
	cout << gameObj.getCap() << endl;

	system("pause");
	return 0;
}