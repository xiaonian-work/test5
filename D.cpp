//#include<iostream>
//#include<stack>
//using namespace std;
//
//class BTreeNode
//{
//public:
//	char data;
//	BTreeNode* leftchild, * rightchild;
//	BTreeNode()
//	{
//		leftchild = NULL;
//		rightchild = NULL;
//		data = 0;
//	}
//	~BTreeNode()
//	{
//		delete leftchild;
//		delete rightchild;
//	}
//};
//
//class Tree
//{
//public:
//	BTreeNode* root;
//	Tree()
//	{
//		root = NULL;
//	}
//	void initTree()
//	{
//		root = new BTreeNode();
//		char ch;
//		cin >> ch;
//		if (ch != '#')
//			this->createTree(root, ch);
//		else
//			return;
//	}
//	void createTree(BTreeNode* t, char ch)
//	{
//		t->data = ch;
//		char chleft, chright;
//		cin >> chleft;
//		if (chleft != '#')
//		{
//			BTreeNode* left = new BTreeNode();
//			t->leftchild = left;
//			createTree(t->leftchild, chleft);
//		}
//		cin >> chright;
//		if (chright != '#')
//		{
//			BTreeNode* right = new BTreeNode();
//			t->rightchild = right;
//			createTree(t->rightchild, chright);
//		}
//		return;
//	}
//
//	void DLR(BTreeNode* t)//先序遍历
//	{
//		if (t != NULL)
//		{
//			cout << t->data;
//			DLR(t->leftchild);
//			DLR(t->rightchild);
//		}
//	}
//	void LDR(BTreeNode* t)//中序遍历
//	{
//		if (t != NULL)
//		{
//			LDR(t->leftchild);
//			cout << t->data;
//			LDR(t->rightchild);
//		}
//	}
//	void LRD(BTreeNode* t)//后序遍历
//	{
//		if (t != NULL)
//		{
//			LRD(t->leftchild);
//			LRD(t->rightchild);
//			cout << t->data;
//		}
//	}
//
//};
//
//
//
//int main()
//{
//	int t;
//	cin >> t;
//	for (int i = 0; i < t; i++)
//	{
//		Tree tt;
//		tt.initTree();
//		tt.DLR(tt.root);
//		cout << endl;
//		tt.LDR(tt.root);
//		cout << endl;
//		tt.LRD(tt.root);
//		cout << endl;
//	}
//	return 0;
//}