#include  <iostream>
#include <vector>
using namespace std;

struct SensorReading {
	string name;
	double value;
	double minSafe;
	double maxSafe;
};

bool isSafe(SensorReading reading) {
	return reading.value >= reading.minSafe && reading.value <= reading.maxSafe;
}

int main() {
	vector <SensorReading> readings = {
	{"Altitude", 120, 0, 150},
	{"Battery", 40, 20, 100},
	{"Temperature", 90, -10, 60}
	};

	

	for (int i = 0; i < readings.size(); i++) {
		if (!isSafe(readings[i])) {
			cout << "Warning: " << readings[i].name << " is out of safe range!" << endl;
		}
		else {
			cout << readings[i].name << " is within safe range." << endl;
		}

	}
}
