//#include<iostream>
//#include<cmath>
//using namespace std;
//
//class Node {
//public:
//	char data;
//	Node* lchild, * rchild;
//	Node(char d) {
//		data = d;
//		lchild = NULL;
//		rchild = NULL;
//	}
//	Node() {
//		lchild = nullptr; // ʹ��nullptr����NULL
//		rchild = nullptr;
//	}
//	~Node() {
//		delete lchild; // ��ɾ��������
//		delete rchild; // Ȼ��ɾ��������
//	}
//};
//
//class BTree {
//public:
//	Node* root;
//	void build(Node*& tree) {
//		char c;
//		cin >> c;
//		if (c != '0') {
//			tree = new Node(c); // ֻ�е�c������'0'ʱ���½��ڵ�
//			build(tree->lchild);
//			build(tree->rchild);
//		}
//	}
//	void build() {
//		build(root);
//	}
//	BTree() {
//		root = nullptr; // ʹ��nullptr����NULL
//	}
//	~BTree() {
//		// ����Ҫ������������ɾ��root����Ϊÿ��build�������·����ڴ�
//	}
//};
//
//int height(Node* node) {
//	if (!node)
//		return 0;
//	return max(height(node->lchild), height(node->rchild)) + 1;
//}
//
//int main() {
//	int t;
//	cin >> t;
//	while (t--) {
//		BTree tree;
//		tree.build();
//		cout << height(tree.root) << endl;
//	}
//	return 0;
//}