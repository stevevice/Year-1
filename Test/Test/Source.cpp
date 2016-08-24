#include <iostream>

using namespace std;

int main()
{
	int nums[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int number = 0;

	for (int i = 10; i >= 0; i--)
	{
		nums[number] = i;
		number++;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << nums[i];
	}

	return 0;
}