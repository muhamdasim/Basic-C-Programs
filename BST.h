#include "Accounts.h"

#include<iostream>
using namespace std;

template<class DT>

struct Node {
	
	DT data;
	Node<DT>* left;
	Node<DT>* right;
};

template<class DT>

class BST {

public:
	Node<DT>* root;
	
	BST() {
		root = NULL;
	}

	~BST() {

	}

	Node<DT>* getRoot() {
		return root;
	}

	void Insert(const DT& newDataItem) {

		Node<DT>* temp = new Node<DT>();
		Node<DT>* newNode = new Node<DT>();

		newNode->data = newDataItem;

		newNode->left = NULL;
		newNode->right = NULL;
		
		if (root == NULL) {
			root = newNode;
		}
		else {
			
			temp = root;
			while (temp != NULL) {

				if (temp->data == newDataItem) {
					
					temp->data = newDataItem;

				}

				else if (temp->data < newDataItem) {
					if (temp->right != NULL) {
						temp = temp->right;
					}
					else {
						temp->right = newNode;
						temp = NULL;
					}
				}
				else if (temp->data > newDataItem) {
					if (temp->left != NULL) {
						temp = temp->left;
					}
					else {
						temp->left = newNode;
						temp = NULL;
					}
				}
			}
		}
	}

	bool retrieve(DT searchKey, DT& searchDataItem) {
		Node<DT>* temp = new Node<DT>();
		temp = root;
		
		while (temp != NULL) {

			if (temp->data == searchKey) {

				searchDataItem = searchDataItem;
				return true;
			}

			else if (temp->data < searchKey) {
				temp = temp->right;
			}
			else {
				temp = temp->left;
				
			}
		}

		if (!temp) {
			return false;
		}
	}

bool remove(DT deleteKey) {

		Node<DT>* temp = new Node<DT>();
		Node<DT>* prev = new Node<DT>();
		Node<DT>* small = new Node<DT>();

		temp = root;
		prev = NULL;

		while (temp != NULL) {
			//DELETING
			if (temp->data == deleteKey) {
				
			//ZERO OR ONE CHILD

			if (temp->right == NULL) {
				if (prev->right == temp && temp->left!=NULL) {
					prev->right = temp->left;
				}
				else if (prev->right == temp) {
					prev->right = NULL;
				}
				else {
					prev->left = temp->left;
				}
				delete temp;
			}
			
			else if (temp->left == NULL) {
				if (prev->left == temp && temp->right!=NULL) {
					prev->left = temp->right;
				}
				else if (prev->left == temp) {
					prev->left = NULL;
				}
				else {
					prev->right = temp->right;
				}
				delete temp;
			}
				//2 CHILDREN
				else {

					//ROOT DELETE
					if (!prev) {
						root = temp->right;
						prev = temp->right;
					}
					//IF LESS
					else if (prev->data > temp->data) {
						prev->left = temp->right;
					}
					//IF GREATER
					else if (prev->data < temp->data) {
						prev->right = temp->right;
					}

					small = temp->right;
					while (small->left != NULL) {
						small = small->left;
					}
					small->left = temp->left;

					delete temp;
				}
			
			return true;
		}
		
		//SEARCHING VALUE TO DELETE
		else if (temp->data < deleteKey) {
			prev = temp;
			temp = temp->right;
	
		}
		else {
			prev = temp;
			temp = temp->left;

		}
	}

	if (!temp) {
		return false;
	}

}

	bool isEmpty() {
		if (!root) {
			return true;
		}
		return false;
	}

	int GetHeight(Node<DT>* temp) {
		
		if (temp == NULL) {
			return -1;
		}

		int left = GetHeight(temp->left);
		int right = GetHeight(temp->right);

		if (left < right) {
			return (++right);
		}
		else {
			return (++left);
		}
	}

	void Inorder(Node<DT>* temp) {

		if (temp != NULL) {
		
			Inorder(temp->left);
			temp->data.Display();
			Inorder(temp->right);

		}
	}

	void PreOrder(Node<DT>* temp) {

		if (temp != NULL) {
			temp->data.Display();
			PreOrder(temp->left);
			PreOrder(temp->right);

		}
	}

	void PostOrder(Node<DT>* temp) {

		if (temp != NULL) {

			PostOrder(temp->left);
			PostOrder(temp->right);
			temp->data.Display();
		}
	}

};