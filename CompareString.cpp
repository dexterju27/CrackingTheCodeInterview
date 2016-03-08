#include <iostream>
#include <string>
using namespace std;
bool compareString (const string &  str1,const string &  str2) {
	// asume the coding is ASCII
	int table[256] = {0};
	if (str1.empty() || str2.empty()) return false;
	// small optimisation if length is not equal, they are not the same
	if (str1.length() != str2.length()) return false;
	
	// for string 1 
	for (auto each : str1) {
		int index = each;
		if (index < 0 || index > 255 ) return false;
		table[index]++; // count the characters
	}
	
	// for string2
	for (auto each : str2) {
		int index = each;
		if (index < 0 || index > 255) return false;
		if (--table[index] < 0) return false; // count to less 0
	}
	return true;
}
int main(int argc, char *argv[]) {
	string str1 = "god";
	string str2 = "dog ";
	
	cout << compareString(str1, str2);
	
}