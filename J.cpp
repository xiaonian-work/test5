#include <iostream> // ���������������
using namespace std; // ʹ�ñ�׼�����ռ�

class HTNode // ������������ڵ���
{
private:
    char data; // �����򣬴洢�ַ�
    int weight; // Ȩֵ�򣬴洢�ַ����ֵ�Ƶ��
    HTNode* lchild, * rchild; // ָ������������ָ��
public:
    // ���캯������ʼ���ڵ��ȨֵΪ0�����Һ���ָ��ΪNULL
    HTNode() :weight(0), lchild(NULL), rchild(NULL) {}
    // ��������
    ~HTNode() {}
    // ������Ԫ��HuffmanTree������HuffmanTree����HTNode��˽�г�Ա
    friend class HuffmanTree;
};

class HuffmanTree // �������������
{
private:
    HTNode* root; // ���ڵ�ָ��
    int LeafNum; // Ҷ�ڵ�����
    string str1; // �洢�ַ������ӦƵ�ʵ��ַ���
    int* str2; // �洢�ַ�Ƶ�ʵ���������
public:
    // Ĭ�Ϲ��캯��
    HuffmanTree();
    // ��������
    ~HuffmanTree();
    // ������������
    void CreateTree();
    // �ݹ鴴����������
    void CreateTree(HTNode*& p, int& i, int& j);
    // ǰ�������������
    void PreOrder();
    // �ݹ�ǰ�������������
    void PreOrder(HTNode* p, int Level, int& TotalRoad);
};

// HuffmanTree��Ĺ��캯��
HuffmanTree::HuffmanTree()
{
    cin >> str1; // �����ַ�����Ҷ�ڵ�����
    cin >> LeafNum;
    str2 = new int[LeafNum]; // ��̬��������洢ÿ���ַ���Ƶ��
    for (int i = 0; i < LeafNum; i++)
        cin >> str2[i]; // ��ȡÿ���ַ���Ƶ��
}

// HuffmanTree�����������
HuffmanTree::~HuffmanTree()
{
    delete root; // ɾ�����ڵ�
    delete[]str2; // �ͷ������ڴ�
}

// �ݹ鴴����������
void HuffmanTree::CreateTree(HTNode*& p, int& i, int& j)
{
    if (str1[i] != '0') // �����ǰ�ַ����ǽ������
    {
        p = new HTNode; // �����½ڵ�
        if (str1[i] >= 65 && str1[i] <= 90) // �����ǰ�ַ�����ĸ
        {
            p->data = str1[i]; // ���ýڵ�����
            p->weight = str2[j]; // ���ýڵ�Ȩ��
            j++; // ����Ƶ������
        }
        i++; // �ƶ��ַ�������
        CreateTree(p->lchild, i, j); // �ݹ鴴��������
        i++; // �ƶ��ַ�������
        CreateTree(p->rchild, i, j); // �ݹ鴴��������
    }
    else
        p = NULL; // �������ýڵ�ΪNULL
}

// ����CreateTree(root, 0, 0)��ʼ������������
void HuffmanTree::CreateTree()
{
    int i = 0; // ��ʼ���ַ�������
    int j = 0; // ��ʼ��Ƶ������
    CreateTree(root, i, j); // ��ʼ������
}

// ǰ�������������
void HuffmanTree::PreOrder()
{
    int Level = 0; // ��ʼ�����
    int TotalRoad = 0; // ��ʼ����·������
    PreOrder(root, Level, TotalRoad); // ��ʼǰ�����
    cout << TotalRoad << endl; // �����·������
}

// �ݹ�ǰ�������������
void HuffmanTree::PreOrder(HTNode* p, int Level, int& TotalRoad)
{
    if (p) // ����ڵ�ǿ�
    {
        if (!p->lchild && !p->rchild) // �����Ҷ�ӽڵ�
        {
            TotalRoad += p->weight * Level; // �ۼӸ�Ҷ�ӽڵ��·������
        }
        Level++; // ���Ӳ��
        PreOrder(p->lchild, Level, TotalRoad); // �ݹ����������
        PreOrder(p->rchild, Level, TotalRoad); // �ݹ����������
        Level--; // ���ٲ��
    }
}

// ������
int main(void)
{
    int t; // ѭ������
    cin >> t; // ��ȡѭ������
    while (t--) // ѭ��ִ��
    {
        HuffmanTree myTree; // ����HuffmanTree����
        myTree.CreateTree(); // ������������
        myTree.PreOrder(); // ǰ�������������
    }
    return 0; // ����0��ʾ���������˳�
}