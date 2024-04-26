#include <iostream> // 引入输入输出流库
using namespace std; // 使用标准命名空间

class HTNode // 定义哈夫曼树节点类
{
private:
    char data; // 数据域，存储字符
    int weight; // 权值域，存储字符出现的频率
    HTNode* lchild, * rchild; // 指向左右子树的指针
public:
    // 构造函数，初始化节点的权值为0，左右孩子指针为NULL
    HTNode() :weight(0), lchild(NULL), rchild(NULL) {}
    // 析构函数
    ~HTNode() {}
    // 声明友元类HuffmanTree，允许HuffmanTree访问HTNode的私有成员
    friend class HuffmanTree;
};

class HuffmanTree // 定义哈夫曼树类
{
private:
    HTNode* root; // 根节点指针
    int LeafNum; // 叶节点数量
    string str1; // 存储字符及其对应频率的字符串
    int* str2; // 存储字符频率的整数数组
public:
    // 默认构造函数
    HuffmanTree();
    // 析构函数
    ~HuffmanTree();
    // 创建哈夫曼树
    void CreateTree();
    // 递归创建哈夫曼树
    void CreateTree(HTNode*& p, int& i, int& j);
    // 前序遍历哈夫曼树
    void PreOrder();
    // 递归前序遍历哈夫曼树
    void PreOrder(HTNode* p, int Level, int& TotalRoad);
};

// HuffmanTree类的构造函数
HuffmanTree::HuffmanTree()
{
    cin >> str1; // 输入字符串和叶节点数量
    cin >> LeafNum;
    str2 = new int[LeafNum]; // 动态分配数组存储每个字符的频率
    for (int i = 0; i < LeafNum; i++)
        cin >> str2[i]; // 读取每个字符的频率
}

// HuffmanTree类的析构函数
HuffmanTree::~HuffmanTree()
{
    delete root; // 删除根节点
    delete[]str2; // 释放数组内存
}

// 递归创建哈夫曼树
void HuffmanTree::CreateTree(HTNode*& p, int& i, int& j)
{
    if (str1[i] != '0') // 如果当前字符不是结束标记
    {
        p = new HTNode; // 创建新节点
        if (str1[i] >= 65 && str1[i] <= 90) // 如果当前字符是字母
        {
            p->data = str1[i]; // 设置节点数据
            p->weight = str2[j]; // 设置节点权重
            j++; // 增加频率索引
        }
        i++; // 移动字符串索引
        CreateTree(p->lchild, i, j); // 递归创建左子树
        i++; // 移动字符串索引
        CreateTree(p->rchild, i, j); // 递归创建右子树
    }
    else
        p = NULL; // 否则设置节点为NULL
}

// 调用CreateTree(root, 0, 0)开始创建哈夫曼树
void HuffmanTree::CreateTree()
{
    int i = 0; // 初始化字符串索引
    int j = 0; // 初始化频率索引
    CreateTree(root, i, j); // 开始创建树
}

// 前序遍历哈夫曼树
void HuffmanTree::PreOrder()
{
    int Level = 0; // 初始化层次
    int TotalRoad = 0; // 初始化总路径长度
    PreOrder(root, Level, TotalRoad); // 开始前序遍历
    cout << TotalRoad << endl; // 输出总路径长度
}

// 递归前序遍历哈夫曼树
void HuffmanTree::PreOrder(HTNode* p, int Level, int& TotalRoad)
{
    if (p) // 如果节点非空
    {
        if (!p->lchild && !p->rchild) // 如果是叶子节点
        {
            TotalRoad += p->weight * Level; // 累加该叶子节点的路径长度
        }
        Level++; // 增加层次
        PreOrder(p->lchild, Level, TotalRoad); // 递归遍历左子树
        PreOrder(p->rchild, Level, TotalRoad); // 递归遍历右子树
        Level--; // 减少层次
    }
}

// 主函数
int main(void)
{
    int t; // 循环次数
    cin >> t; // 读取循环次数
    while (t--) // 循环执行
    {
        HuffmanTree myTree; // 创建HuffmanTree对象
        myTree.CreateTree(); // 创建哈夫曼树
        myTree.PreOrder(); // 前序遍历哈夫曼树
    }
    return 0; // 返回0表示程序正常退出
}