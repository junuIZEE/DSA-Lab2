#include <iostream>

void reverse_string(char* str, int len) {
	int left = 0;
	int right = len - 1;

	while (left < right) {
		char temp = str[left];
		str[left] = str[right];
		str[right] = temp;

		++left;
		--right;
	}
}

int main() {
	// Size 45
	const int capacity = 46;
	char* str = new char[capacity];

	std::cout << "Enter text (max 45 characters)" << std::endl;
	std::cin.getline(str, capacity);

	int length = 0;
	while (str[length] != '\0') {
		++length;
	}

	// Now we reverse the string:
	reverse_string(str, length);
	std::cout << "Reversed text: " << str << '\n';

	delete[] str;
}
