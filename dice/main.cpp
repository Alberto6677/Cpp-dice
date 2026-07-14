#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	char temp {};
	const short min_value = 1;
	const short max_value = 6;
	bool run = true;

	while (run) {
		cout << "Lets roll a dice !" << endl;
		srand(time(nullptr));
		short result = (rand() % (max_value - min_value + 1)) + min_value;

		cout << "You got : " << result << endl;
		cout << "Continue : ";
		cin >> temp;
		if (temp == 'Y') {
			run = true;
		}
		else if (temp == 'N') {
			cout << "Okay see you next time !" << endl;
			run = false;
		}
		else if (temp == 'y') {
			run = true;
		} 
		else if (temp == 'n') {
			cout << "Okay see you next time !" << endl;
			run = false;
		} 
		else {
			cerr << "An error occured" << endl;
			return -1;
		};
	};

	return 0;
}
