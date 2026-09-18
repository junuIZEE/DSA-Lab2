#include <iostream>
#include <cassert>

bool isSorted(const int* arr, const int size) noexcept {
	if (size < 0) return false;

	for (int i = 0; i < size - 1; i++) 
		if (*(arr + i + 1) - *(arr + i) < 0) return false;
	return true;	
}

int main() {
	
	const int* sorted = new int[3]{1, 2, 3};
	const int* unsorted = new int[3]{1, 3, 2};
	const int* duplicate = new int[3]{1, 2, 2};
	const int* singular = new int[1]{1};
	const int* descending = new int[3]{3, 2, 1};
	const int* negatives = new int[3]{-3, -2, -1};
	const int* none = new int[0]{};


	assert(isSorted(sorted, 3) == true);
	assert(isSorted(unsorted , 3) == false);
	assert(isSorted(duplicate, 3) == true);
	assert(isSorted(singular, 1) == true);
	assert(isSorted(descending, 3) == false);
	assert(isSorted(negatives, 3) == true);
	assert(isSorted(none, 0) == true);

	// Negative size
	assert(isSorted(sorted, -1) == false);
	
	std::cout << "All tests passed (8/8)\n";
} 
