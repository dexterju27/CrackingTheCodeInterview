#include <iostream>

using namespace std;
void swap (char & a, char & b ) {
	char c = a;
	a = b;
	b = c;
}

void reverseString (string & str) { // should be a reference 
	// mark end as null
	if (str.empty()) return;
	int i = 0;
	while (str[i] != '0') i++;
	i--; // get rid of the last one
	// i is the length
	int j = 0; // mark the start
	while (j < i - j) {
		swap(str[i - j], str[j]);
		j++;
	}
	return;
	
	
}
int main(int argc, char *argv[]) {
	string a = "abcdefg0";
	reverseString(a);
	cout << a;
}