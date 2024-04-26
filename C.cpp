//// 包含必要的头文件和命名空间
//#include<iostream>
//#include<string>
//using namespace std;
//
//// 定义二叉树节点类
//class BTreeNode {
//public:
//	// 节点存储数据
//	char data;                          
//	// 指向左右子树的指针
//	BTreeNode* leftchild, * rightchild;  
//	// 构造函数，初始化左右子树指针为NULL
//	BTreeNode()
//	{
//		leftchild = NULL;
//		rightchild = NULL;
//	}
//	// 析构函数，删除左右子树
//	~BTreeNode()
//	{
//		delete leftchild;
//		delete rightchild;
//	}
//};
//
//// 定义二叉树类
//class BTree {
//private:
//	// 根节点指针
//	BTreeNode* root;         
//	// 用来建树的字符串
//	string stree;            
//	// 标识建树字符串的当前位置
//	int pos;                 
//	// 私有的建树函数
//	BTreeNode* CreateTree() 
//	{
//		BTreeNode* t;
//		char ch;
//		ch = stree[pos++];
//		if (ch=='0')
//		{
//			t = NULL;
//		}
//		else
//		{
//			t = new BTreeNode();
//			t->data = ch;
//			t->leftchild = CreateTree();
//			t->rightchild = CreateTree();
//		}
//		return t;
//	}
//	// 统计叶子节点数量
//	int leaf = 0;
//public:
//	// 构造函数，初始化根节点为NULL
//	BTree()
//	{
//		root = NULL;
//	}
//	// 公开的建树接口，接收一个先序遍历的字符串来构建树
//	void Create(string treeArray) 
//	{
//		pos = 0;
//		stree.assign(treeArray); //把参数保存到内部字符串
//		root = CreateTree();     //建树成功后root指向根结点
//	}
//	// 打印所有的叶子节点
//	void Leaves(BTreeNode* t)
//	{
//		int count = 0;
//		if (t == NULL)
//			return;
//		Leaves(t->leftchild);
//		Leaves(t->rightchild);
//		if (t->rightchild == NULL && t->leftchild == NULL)//如果该结点没有左右子树，那么他就是叶子结点
//			leaf++;
//	}
//	// 显示树的结构
//	void show()
//	{
//		Leaves(root);
//		cout << leaf << endl;
//	}
//};
//
//// 主函数，读取输入并构建树，然后显示树的叶子节点和父节点
//int main()
//{
//	int t;
//	string treeArray;
//	// 读取树的数量
//	cin >> t;
//	for (int i = 0; i < t; i++)
//	{
//		// 读取每棵树的先序遍历字符串
//		cin >> treeArray;
//		// 创建BTree对象并调用Create方法建立树
//		BTree tree;
//		tree.Create(treeArray);
//		// 显示树的结构
//		tree.show();
//	}
//	return 0;
//}