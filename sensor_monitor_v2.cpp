#include <iostream>
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
	vector <SensorReading> readings;
	
	while (true) {
		SensorReading reading;cout << "Enter sensor name (or 'done' to finish): ";
		cin >> reading.name;

		if (reading.name == "done") {
			break;
		}
		cout << "Enter sensor value: ";
		cin >> reading.value;
		cout << "Enter minimum safe value: ";
		cin >> reading.minSafe;
		cout << "Enter maximum safe value: ";
		cin >> reading.maxSafe;
		readings.push_back(reading);
	}
	int warningCount = 0;
	for (int i = 0; i < readings.size(); i++) {
		if (!isSafe(readings[i])) {
			cout << "Warning: Sensor " << readings[i].name << " is out of safe range!" << endl;
			warningCount++;
		}
	}
	cout << "Total warnings: " << warningCount << endl;

	return 0;
}