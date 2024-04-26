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
//		if (pos == stree.size() || stree[pos] == '0')
//		{
//			pos++;
//			return NULL;
//		}
//		BTreeNode* t = new BTreeNode();
//		t->data = stree[pos++];
//		t->leftchild = CreateTree();
//		t->rightchild = CreateTree();
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
//		if (t == NULL)
//			return;
//		Leaves(t->leftchild);
//		Leaves(t->rightchild);
//		if (t->rightchild == NULL && t->leftchild == NULL)
//			cout << t->data << " ";
//	}
//	// ��ӡ���еĸ��ڵ�
//	void Father(BTreeNode* t)
//	{
//		if (t == NULL)
//			return;
//		Father(t->leftchild);
//		if (t->leftchild)
//		{
//			if (t->leftchild->leftchild == NULL && t->leftchild->rightchild == NULL)
//			{
//				cout << t->data << " ";
//			}
//		}
//		Father(t->rightchild);
//		if (t->rightchild)
//		{
//			if (t->rightchild->leftchild == NULL && t->rightchild->rightchild == NULL)
//			{
//				cout << t->data << " ";
//			}
//		}
//	}
//	// ��ʾ���Ľṹ
//	void show()
//	{
//		Leaves(root);
//		cout << endl;
//		Father(root);
//		cout << endl;
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