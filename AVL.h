#include <iostream>
using namespace std;

template<class DT>
class Node {
public:
	int data;
	Node<DT>* left;
	Node<DT>* right;

};

template<class DT>
class AVLTree {		public:

	bool isEmpty(Node<DT>* root) {
		if (!root)
			return true;
		else
			return false;
	}

	Node<DT>* Add(int data) {
		Node<DT>*  temp = new Node<DT>();
		temp->data = data;
		temp->left = temp->right = NULL;
		return temp;
	}

	Node<DT>* Insert(Node<DT>* root, int value) {
		if (root == NULL)
			return Add(value);
		if (value < root->data)
			root->left = Insert(root->left, value);
		else if (value > root->data)
			root->right = Insert(root->right, value);
		root = this->balance(root);
		return root;
	}

	Node<DT>* deleteNode(Node<DT>* root, int value)
	{
		if (root == NULL)
			return root;


		if (root->data > value) {
			root->left = deleteNode(root->left, value);
			return root;
		}

		else if (root->data < value) {
			root->right = deleteNode(root->right, value);
			return root;
		}

		if (root->left == NULL) {
			Node<DT>* temp = root->right;
			delete root;
			return temp;
		}

		else if (root->right == NULL) {
			Node<DT>* temp = root->left;
			delete root;
			return temp;
		}

		else {

			Node<DT>* tempParent = root->right;
			Node<DT> * temp1 = root->right;
			while (temp1->left != NULL) {
				tempParent = temp1;
				temp1 = temp1->left;

			}
			tempParent->left = temp1->right;
			root->data = temp1->data;
			delete temp1;
			root = this->balance(root);
			return root;

		}

	}

	Node<DT>* balance(Node<DT>* temp) {
		int bf = HeightDiff(temp);
		if (bf > 1)
		{
			if (HeightDiff(temp->left) > 0) {
				temp = ll_rotation(temp);
			}
			else {
				temp = lr_rotation(temp);
			}
		}
		else if (bf < -1)
		{
			if (HeightDiff(temp->right) > 0) {
				temp = rl_rotation(temp);
			}
			else {
				temp = rr_rotation(temp);
			}
		}
		if (HeightDiff(temp) == -1 || HeightDiff(temp) == 0 || HeightDiff(temp) == 1)
			return temp;
		else
			balance(temp);
	}

	Node<DT>* rr_rotation(Node<DT>* parent) {
		Node<DT>* temp;
		temp = parent->right;
		parent->right = temp->left;
		temp->left = parent;
		return temp;
	}

	Node<DT>* ll_rotation(Node<DT>* parent) {
		Node<DT>* temp;
		temp = parent->left;
		parent->left = temp->right;
		temp->right = parent;
		return temp;
	}

	Node<DT>* lr_rotation(Node<DT>* parent) {
		Node<DT>* temp;
		temp = parent->left;
		parent->left = rr_rotation(temp);
		return ll_rotation(parent);
	}

	Node<DT>* rl_rotation(Node<DT>* parent) {
		Node<DT>* temp;
		temp = parent->right;
		parent->right = ll_rotation(temp);
		return rr_rotation(parent);
	}

	int HeightDiff(Node<DT>* temp) {
		int lh = GetHeight(temp->left);
		int rh = GetHeight(temp->right);
		int diff = 0;
		diff = lh - rh;
		return (diff);
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
			cout << temp->data << " ";
			Inorder(temp->right);

		}
	}

	void PreOrder(Node<DT>* temp) {

		if (temp != NULL) {
			cout << temp->data << " ";
			PreOrder(temp->left);
			PreOrder(temp->right);

		}
	}

	void PostOrder(Node<DT>* temp) {

		if (temp != NULL) {

			PostOrder(temp->left);
			PostOrder(temp->right);
			cout << temp->data << " ";
		}
	}

};