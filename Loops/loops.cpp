#include <iostream>
using namespace std;

int main()
{
	// For Loop
	for (int i = 0; i <= 5; i++)
	{
		cout << "In for Loop " << i << endl;
	}

	// while loop
	int num;
	cin >> num;

	while (num > 0)
	{
		cout << "In while Loop " << num << endl;
		cin >> num;
	}

	// do while loop5
	int count;
	cin >> count;

	do {
		cout << "In do while Loop " << count << endl;
		cin >> count;
	} while (count > 0);
	return 0;
}