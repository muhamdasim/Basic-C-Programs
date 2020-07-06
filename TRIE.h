#include <cstdlib>
#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>
using namespace std;

// ---------------------    Vector Class
template <typename T>
class Vector {
	T* ptr;
	int size;
	int c_index;
public:
	Vector(int S = 5){
			ptr = new T[S];
			size = S;
			c_index = -1;
	}

	Vector(const Vector<T>& copy) {
			size = copy.size;
			c_index = copy.c_index;
			ptr = new T[size];
			for (int i = 0; i <= c_index; i++) {
				ptr[i] = copy.ptr[i];
			}
	}

	Vector& operator = (const Vector<T>& copy){
			size = copy.size;
			c_index = copy.c_index;
			ptr = new T[size];
			for (int i = 0; i <= c_index; i++) {
				ptr[i] = copy.ptr[i];
			}
		return *this;
	}

	int Size() {
		return c_index + 1;
	}

	int find(const T& obj) {
		return 0;
	}

	void insert(T x){
		if (c_index == (size - 1)) {
			T* temp = new T[size * 2];
			for (int i = 0; i <= c_index; i++) {
				temp[i] = ptr[i];
			}
			delete[] ptr;
			ptr = temp;
			size *= 2;
		}
		c_index++;
		ptr[c_index] = x;
	}

	T& operator[] (int i){
		return ptr[i];
	}

	T* begin() {
		return ptr;
	}
	T* end() {
		return ptr + c_index;
	}

	bool empty() {
		for (int i = 0; i <= c_index; i++) {
			if (ptr[i] != NULL) {
				return false;
			}
		}
		return true;
	}
	void shrink_to_fit(int x) {
		c_index = x;
	}

	void print(){
		for (int i = 0; i <= c_index; i++){
			cout << ptr[i]<<endl;
		}
	}

	~Vector(){
		delete[] ptr;
		size = 0;
		c_index = -1;
	}

};

//------------------ NODE 
struct Node {
public:
	char word;
	bool completed;
	string meaning;
	Vector<string> synonyms;
	Node* alphabets[26];

	Node() {
		for (int i = 0; i < 26; i++) {
			alphabets[i] = NULL;
		}
		completed = false;
	}
	
	~Node() {
		for (int i = 0; i < 26; i++){	
			delete alphabets[i];
		}
		delete[] alphabets;
		completed = false;
	}
	
};

//------------------------- TRIE
class TRIE {
	
public:

	Node* root;
	Node* curent;
	Vector<string> w_list;

	TRIE() {
		root = NULL;
		curent = NULL;
	}
	
	//---- Creating Dictionary from file
	void CreateDictionary(string filename ) {
		root = new Node();
		ifstream file(filename, ios::in);
		string w, m;
		Vector<string> syno;
		string s;

		getline(file, s);

read:
			w = "";
			m = "";

			//--- Adding Word
			for (int i = 1; s[i] != '\0'; ++i) {
				w += s[i];	
			}
			w_list.insert(w);

			//--- Adding Meaning
			getline(file, s);
			for (int i = 2; s[i] != '\0'; ++i) {
				m += s[i];
			}

			//--- Adding Synonyms
			getline(file, s);
			while (s[0] != '-' && !file.eof()) {
				syno.insert(s);
				getline(file, s);
			}
			if (s[0] == '-') {
				goto add;
			}
			syno.insert(s);

//---- Setting Nodes Pointers
add:
		if (!(root->alphabets[w[0] - 97])) {
			root->alphabets[w[0] - 97] = new Node;
		}
		curent = root->alphabets[w[0] - 97];

		for (int i = 1; w[i-1] != '\0'; ++i) {

			curent->word = w[i-1];
			if (w[i] != '\0') {
				if (!(curent->alphabets[w[i] - 97])) {
					curent->alphabets[w[i] - 97] = new Node;
				}
				curent = curent->alphabets[w[i] - 97];
			}
			else {
				curent->meaning = m;
				curent->synonyms = syno;
				curent->completed = true;
			}
		}

		if (s[0] == '-') {
			goto read;
		}
	
	file.close();
	}

//---- FUNCTIONS
	Vector<string> OutputAscending() {	
		Vector<string> output;
		output = w_list;

		for (int i = 0; i < output.Size(); i++) {
			for (int j = i+1; j < output.Size(); j++) {
				if (output[i] > output[j]) {
					string curent = output[j];
					output[j] = output[i];
					output[i] = curent;
				}
			}
		}
		return output;
	}

	Vector<string> OutputDescending() {
		Vector<string> output;
		output = w_list;

		for (int i = 0; i < output.Size(); i++) {
			for (int j = i + 1; j < output.Size(); j++) {
				if (output[i] < output[j]) {
					string curent = output[j];
					output[j] = output[i];
					output[i] = curent;
				}
			}
		}
		return output;
	}

	bool FindWord(string key) {
		for (int i = 0; i < w_list.Size(); i++) {
			if (w_list[i] == key) {
				return true;
			}
		}
		return false;

	}


	Vector<string> OutputSmaller(int length)
	{
		Vector<string> convert;
		//Smaller Value
		for (int i = 0; i < w_list.Size(); i++) {
			if (length > w_list[i].length()) {
				convert.insert(w_list[i]);
			}
		}
		return convert;
	}

	Vector<string> OutputSE(int length)
	{
		Vector<string> convert;

		for (int i = 0; i < w_list.Size(); i++) {
			if (length >= w_list[i].length()) {
				convert.insert(w_list[i]);
			}
		}
		return convert;
	}

	Vector<string> OutputGreater(int length) {
		Vector<string> convert;
		//Greater Value		
		for (int i = 0; i < w_list.Size(); i++) {
			if (length < w_list[i].length()) {
				convert.insert(w_list[i]);
			}
		}
		return convert;
	}

	Vector<string> OutputPrefix(string prefix) {
	 
		Vector<string> pref;
		bool chk;
//Prefix Check
		for (int i = 0; i < w_list.Size(); i++) {
			chk = true;
			for (int j = 0; prefix[j]!='\0'; j++) {
				if (w_list[i][j] == prefix[j]) {
					continue;
				}
				else {
					chk = false;
					break;
				}
			}
			if (chk) {
				pref.insert(w_list[i]);
			}
		}
		return pref;
	}


	Vector<string> OutputSuffix(string suffix)
	{
		Vector<string> convert;
		bool chk;
		int k;
		for (int i = 0; i < w_list.Size(); i++) {
			//Suffix Check
			chk = true;
			k = w_list[i].length() - suffix.length();
			for (int j = k; j < w_list[i].length(); j++) {
				if (w_list[i][j] == suffix[j - k]) {
					continue;
				}
				else {
					chk = false;
					break;
				}
			}
			if (chk) {
				convert.insert(w_list[i]);
			}
		}
		//--- BONUS (DISPLAYING SUFFIX WORDS)
		cout << "Displaying all output with the given suffix: " << endl;
		convert.print();

		return convert;
	}

	Vector<string> OutputAnagrams(string key)
	{

		Vector<string> convert;

		int count = 0;
		for (int i = 0; i < w_list.Size(); i++) {

			for (int j = 0; j < w_list[i].length(); j++) {
				for (int k = 0; k < key.length(); k++) {
					if(key[k] == w_list[i][j]){
						count++;
					}
				}
			}
			if (count == w_list[i].length() && key != w_list[i]) {
				convert.insert(w_list[i]);
			}
			count = 0;
		}
		return convert;
	}

	string FindMeaning(string key) {
		Node* curent = root;
		string m;
		bool chk = FindWord(key);
		int j;
		if (chk) {
//Searching for Meaning
			for ( int i = 1; key[i-1]!='\0'; i++) {
				j = key[i-1] - 97;
				curent = curent->alphabets[j];
				if (key[i] == '\0') {
					m = curent->meaning;
				}
			}
			return m;
		}
		return "";
		
	}

	Vector<string> FindSynonyms(string key) {

		Node* curent = root;
		Vector<string> syn;
		bool chk = FindWord(key);
		int j;
		if (chk) {
//Searching for Synonyms
			for ( int i = 1; key[i-1]!='\0'; i++) {
				j = key[i-1] - 97;
				curent = curent->alphabets[j];
				if (key[i] == '\0') {
					syn = curent->synonyms;
				}
			}
			return syn;
		}
		return NULL;
	}

	Vector<string> CompleteString(string Eword) {
		Vector<string> convert;
		bool chk;
		for (int i = 0; i < w_list.Size(); i++) {
			chk = true;

			for (int j = 0; j < w_list[i].length(); j++) {
				if (w_list[i][j] == Eword[0]) {
			
					for (int k = 1; k < Eword.length(); k++) {
						if (w_list[i][k + j] != Eword[k]) {
							chk = false;
							break;
						}
					}
					break;
				}
				if(j==w_list[i].length()-1)
					chk = false;
			}
			if (chk)
				convert.insert(w_list[i]);
		}
		return convert;
	}

	Vector<string>SpellChecker(string Eword) {

		Vector<string> convert;
		int count = 0;

//Removing Duplicates
		Vector<string> temp = w_list;
		for (int i = 0; i < w_list.Size(); i++) {
			for (int j = 0; j < w_list[i].length(); j++) {
				for (int k = j+1; k < w_list[i].length(); k++) {
					if (temp[i][j] == temp[i][k]) {
						temp[i][j] = ' ';
					}
				}
			}
		}

//Spelling Check
		for (int i = 0; i < w_list.Size(); i++) {

			for (int j = 0; j < w_list[i].length(); j++) {
				for (int k = 0; k < Eword.length(); k++) {
					if (Eword[k] == temp[i][j]) {
						count++;
					}
				}
			}
		
			if (count == w_list[i].length()-1 || count == w_list[i].length()-2) {
				if (w_list[i][0] == Eword[0]) {
					convert.insert(w_list[i]);
				}
			}
			count = 0;
		}
		return convert;
	}
};
