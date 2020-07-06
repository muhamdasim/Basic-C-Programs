#include "..\\\trie\TRIE.h"

int main() {

	TRIE T;

	T.CreateDictionary("dictionary.txt");

	Vector<string> s;
	
	
	s = T.SpellChecker("packed");
	s.print();
	cout << endl;

	return 0;
}