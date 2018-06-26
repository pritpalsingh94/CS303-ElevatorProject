#include "stdafx.h"
#include "Elevator.h"
#include <ctime>
#include "windows.h"
#include <random>

using namespace std;
int main() {
	Elevator elevator(9);
	random_device number;
	//Keep track of the current elevator floor level.
	int curr = 0;
	for (int i = 1; i < 11; i++)
	{
		//Generate a number
		int floor = number() % 10;
		int waiting = number() % 10;

		cout << "Elevator on floor: " << curr << endl;

		elevator.pick_up_at(waiting);
		elevator.add_level(floor);
		elevator.remove_level(false);
		curr = floor;
		
		//Wait 1 second before doing next in the loop
		Sleep(1000);

		cout << "Wave: " << i << " Complete" << endl;
		cout << endl; // New Line
	}
	system("pause");
}