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
	auto start = high_resolution_clock::now();
	swapcnt = shellsort(numbers);
	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<nanoseconds>(stop - start);

	print(numbers);
	cout << "The swapped count " << swapcnt << endl;
	cout << "The elappsed time  " << duration.count() << endl;
}
