#include <iostream>
#include <cassert>

bool isSorted(const int* arr, const int size);

int main() {



	assert(isSorted({1, 2, 3}, 3) == true);
	assert(isSorted({1, 3, 2}, 3) == false);
	assert(isSorted({1, 2, 2}, 3) == true);
	assert(isSorted({1}, 1) == true);
	assert(isSorted({3, 2 ,1}, 3) == false);
	assert(isSorted({-3, -2, -1}, 3) == true);

	// Containing no elements
	assert(isSorted({}, 0) == true);

	// Negative size
	assert(isSorted({1, 3}, -1) == false);
} 
