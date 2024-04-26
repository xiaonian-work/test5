//#include <iostream>
//#include <queue>
//using namespace std;
//
//// 二叉树节点类
//class tree_node
//{
//public:
//    char data;                                // 数据域，存储字符型数据
//    int weight;                               // 结点权重，用于记录从根到该节点路径上的权重和
//    tree_node* LeftChild, * RightChild; // 左右孩子指针
//
//    // 构造函数，默认初始化左右孩子为nullptr
//    tree_node() : LeftChild(NULL), RightChild(NULL) {}
//
//    // 析构函数，用于删除左孩子和右孩子所占用的内存
//    ~tree_node()
//    {
//        delete LeftChild;
//        delete RightChild;
//    }
//};
//
//// 二叉树类
//class Binary_tree
//{
//public:
//    tree_node* root; // 根节点指针
//    queue<int> weights;     // 用于存放每个节点权重的队列
//    int maxRoad;            // 用于记录找到的最大权重路径
//
//    // 构造函数和析构函数，这里没有特别的初始化和清理工作，所以为空
//    Binary_tree() {}
//    ~Binary_tree() {}
//
//    // 先序创建二叉树的成员函数
//    void CreateTree()
//    {
//        CreateTree(root);
//    }
//
//    // 递归创建二叉树的成员函数
//    void CreateTree(tree_node*& p)
//    {
//        char ch;
//        cin >> ch;
//        if (ch == '0') // 如果输入为'0'，表示当前节点为空
//        {
//            p = NULL;
//        }
//        else // 如果输入不为'0'，表示当前节点不为空
//        {
//            p = new tree_node; // 分配新节点
//            p->data = ch;              // 设置节点数据
//            CreateTree(p->LeftChild); // 递归创建左孩子
//            CreateTree(p->RightChild); // 递归创建右孩子
//        }
//    }
//
//    // 获取最大路径权值的成员函数
//    void getRoad()
//    {
//        int nodes_num;
//        cin >> nodes_num; // 读取节点数量
//        while (nodes_num--) // 循环读取每个节点的权重
//        {
//            int num;
//            cin >> num;
//            weights.push(num); // 将读取的权重入队
//        }
//        getRoad(root, 0); // 从根节点开始，初始路径权重为0，调用getRoad函数
//        cout << maxRoad << endl; // 输出找到的最大权重路径
//    }
//
//    // 递归获取最大路径权值的成员函数
//    void getRoad(tree_node* p, int road)
//    {
//        if (p != NULL) // 如果当前节点不为空
//        {
//            p->weight = weights.front() + road; // 更新当前节点的权重为队列前端的权重加上当前路径权重
//            weights.pop(); // 弹出已使用的权重
//            getRoad(p->LeftChild, p->weight); // 递归更新左孩子的权重
//            getRoad(p->RightChild, p->weight); // 递归更新右孩子的权重
//
//            if (!p->LeftChild && !p->RightChild) // 如果当前节点是叶子节点
//            {
//                if (p->weight > maxRoad) // 如果当前节点的权重大于当前找到的最大权重
//                {
//                    maxRoad = p->weight; // 更新最大权重
//                }
//            }
//        }
//    }
//};
//
//int main()
//{
//    int t;
//    cin >> t; // 读取测试用例数量
//    while (t--) // 循环处理每个测试用例
//    {
//        Binary_tree Bt; // 创建一个新的Binary_tree对象
//        Bt.CreateTree(); // 调用CreateTree函数创建二叉树
//        Bt.getRoad();    // 调用getRoad函数获取最大路径权值
//    }
//    return 0;
//}