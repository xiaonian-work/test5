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
//		lchild = nullptr; // 使用nullptr代替NULL
//		rchild = nullptr;
//	}
//	~Node() {
//		delete lchild; // 先删除左子树
//		delete rchild; // 然后删除右子树
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
//			tree = new Node(c); // 只有当c不等于'0'时才新建节点
//			build(tree->lchild);
//			build(tree->rchild);
//		}
//	}
//	void build() {
//		build(root);
//	}
//	BTree() {
//		root = nullptr; // 使用nullptr代替NULL
//	}
//	~BTree() {
//		// 不需要在析构函数中删除root，因为每次build都会重新分配内存
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