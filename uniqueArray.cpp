#include <iostream>
#include <string>

using namespace std;
// true as 1 false as 0

bool uniqueArray(string & str) {
	// we presume the string is in ASCII
	if (str.empty()) return false;
	bool table [256] = { false };
	
	for (auto each : str) {
		int index = each;
		if ( index < 0 || index > 255 ) return false;
		// we check the table if it appears
		if (table[index]) return false;
		else table[index] = true; 
	}
	return true;
	
	
	
}

int main(int argc, char *argv[]) {
	string testStr = "abcde";
	cout << uniqueArray(testStr) << endl; 
	
}