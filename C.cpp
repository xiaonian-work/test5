//// ������Ҫ��ͷ�ļ��������ռ�
//#include<iostream>
//#include<string>
//using namespace std;
//
//// ����������ڵ���
//class BTreeNode {
//public:
//	// �ڵ�洢����
//	char data;                          
//	// ָ������������ָ��
//	BTreeNode* leftchild, * rightchild;  
//	// ���캯������ʼ����������ָ��ΪNULL
//	BTreeNode()
//	{
//		leftchild = NULL;
//		rightchild = NULL;
//	}
//	// ����������ɾ����������
//	~BTreeNode()
//	{
//		delete leftchild;
//		delete rightchild;
//	}
//};
//
//// �����������
//class BTree {
//private:
//	// ���ڵ�ָ��
//	BTreeNode* root;         
//	// �����������ַ���
//	string stree;            
//	// ��ʶ�����ַ����ĵ�ǰλ��
//	int pos;                 
//	// ˽�еĽ�������
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
//	// ͳ��Ҷ�ӽڵ�����
//	int leaf = 0;
//public:
//	// ���캯������ʼ�����ڵ�ΪNULL
//	BTree()
//	{
//		root = NULL;
//	}
//	// �����Ľ����ӿڣ�����һ������������ַ�����������
//	void Create(string treeArray) 
//	{
//		pos = 0;
//		stree.assign(treeArray); //�Ѳ������浽�ڲ��ַ���
//		root = CreateTree();     //�����ɹ���rootָ������
//	}
//	// ��ӡ���е�Ҷ�ӽڵ�
//	void Leaves(BTreeNode* t)
//	{
//		int count = 0;
//		if (t == NULL)
//			return;
//		Leaves(t->leftchild);
//		Leaves(t->rightchild);
//		if (t->rightchild == NULL && t->leftchild == NULL)//����ý��û��������������ô������Ҷ�ӽ��
//			leaf++;
//	}
//	// ��ʾ���Ľṹ
//	void show()
//	{
//		Leaves(root);
//		cout << leaf << endl;
//	}
//};
//
//// ����������ȡ���벢��������Ȼ����ʾ����Ҷ�ӽڵ�͸��ڵ�
//int main()
//{
//	int t;
//	string treeArray;
//	// ��ȡ��������
//	cin >> t;
//	for (int i = 0; i < t; i++)
//	{
//		// ��ȡÿ��������������ַ���
//		cin >> treeArray;
//		// ����BTree���󲢵���Create����������
//		BTree tree;
//		tree.Create(treeArray);
//		// ��ʾ���Ľṹ
//		tree.show();
//	}
//	return 0;
//}