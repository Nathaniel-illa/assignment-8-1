#ifndef MAIN_HPP
#define MAIN_HPP

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <chrono>

using namespace std;
using namespace std::chrono;

// Function prototypes
void fillvector(vector<int> &, int size);
int shellsort(vector<int> &);
void print(const vector<int> &);

// Function to fill the vector with random values
void fillvector(vector<int> &numbers, int N) {
    srand(static_cast<unsigned>(time(0)));
    for (int i = 0; i < N; i++)
        numbers.push_back(rand() % 1000);
}

// Implementation of Shell Sort
int shellsort(vector<int> &numbers) {
    int n = numbers.size();
    int swapCount = 0;

    for (int gap = n / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < n; i++) {
            int key = numbers[i];
            int j = i;
            while (j >= gap && numbers[j - gap] > key) {
                numbers[j] = numbers[j - gap];
                j -= gap;
                swapCount++; // Increment swap count
            }
            numbers[j] = key;
        }
    }
    return swapCount;
}

// Function to print the contents of the vector
void print(const vector<int> &numbers) {
    for (auto v : numbers)
        cout << v << "\t";
    cout << endl;
}

#endif // MAIN_HPP
