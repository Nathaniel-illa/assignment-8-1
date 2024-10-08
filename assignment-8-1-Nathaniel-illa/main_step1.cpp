#include "main.hpp"

int main()
{
	int N = 1000;
	int swapcnt;
	vector<int> numbers, copied;
	fillvector(numbers, N);
	copied = numbers;
	print(numbers);

	// Shell Sort
	swapcnt = shellsort(numbers);
	print(numbers);
	cout << "The swapped count " << swapcnt << endl;
}
