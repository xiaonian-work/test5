//#include <iostream>
//#include <queue>
//using namespace std;
//
//// �������ڵ���
//class tree_node
//{
//public:
//    char data;                                // �����򣬴洢�ַ�������
//    int weight;                               // ���Ȩ�أ����ڼ�¼�Ӹ����ýڵ�·���ϵ�Ȩ�غ�
//    tree_node* LeftChild, * RightChild; // ���Һ���ָ��
//
//    // ���캯����Ĭ�ϳ�ʼ�����Һ���Ϊnullptr
//    tree_node() : LeftChild(NULL), RightChild(NULL) {}
//
//    // ��������������ɾ�����Ӻ��Һ�����ռ�õ��ڴ�
//    ~tree_node()
//    {
//        delete LeftChild;
//        delete RightChild;
//    }
//};
//
//// ��������
//class Binary_tree
//{
//public:
//    tree_node* root; // ���ڵ�ָ��
//    queue<int> weights;     // ���ڴ��ÿ���ڵ�Ȩ�صĶ���
//    int maxRoad;            // ���ڼ�¼�ҵ������Ȩ��·��
//
//    // ���캯������������������û���ر�ĳ�ʼ����������������Ϊ��
//    Binary_tree() {}
//    ~Binary_tree() {}
//
//    // ���򴴽��������ĳ�Ա����
//    void CreateTree()
//    {
//        CreateTree(root);
//    }
//
//    // �ݹ鴴���������ĳ�Ա����
//    void CreateTree(tree_node*& p)
//    {
//        char ch;
//        cin >> ch;
//        if (ch == '0') // �������Ϊ'0'����ʾ��ǰ�ڵ�Ϊ��
//        {
//            p = NULL;
//        }
//        else // ������벻Ϊ'0'����ʾ��ǰ�ڵ㲻Ϊ��
//        {
//            p = new tree_node; // �����½ڵ�
//            p->data = ch;              // ���ýڵ�����
//            CreateTree(p->LeftChild); // �ݹ鴴������
//            CreateTree(p->RightChild); // �ݹ鴴���Һ���
//        }
//    }
//
//    // ��ȡ���·��Ȩֵ�ĳ�Ա����
//    void getRoad()
//    {
//        int nodes_num;
//        cin >> nodes_num; // ��ȡ�ڵ�����
//        while (nodes_num--) // ѭ����ȡÿ���ڵ��Ȩ��
//        {
//            int num;
//            cin >> num;
//            weights.push(num); // ����ȡ��Ȩ�����
//        }
//        getRoad(root, 0); // �Ӹ��ڵ㿪ʼ����ʼ·��Ȩ��Ϊ0������getRoad����
//        cout << maxRoad << endl; // ����ҵ������Ȩ��·��
//    }
//
//    // �ݹ��ȡ���·��Ȩֵ�ĳ�Ա����
//    void getRoad(tree_node* p, int road)
//    {
//        if (p != NULL) // �����ǰ�ڵ㲻Ϊ��
//        {
//            p->weight = weights.front() + road; // ���µ�ǰ�ڵ��Ȩ��Ϊ����ǰ�˵�Ȩ�ؼ��ϵ�ǰ·��Ȩ��
//            weights.pop(); // ������ʹ�õ�Ȩ��
//            getRoad(p->LeftChild, p->weight); // �ݹ�������ӵ�Ȩ��
//            getRoad(p->RightChild, p->weight); // �ݹ�����Һ��ӵ�Ȩ��
//
//            if (!p->LeftChild && !p->RightChild) // �����ǰ�ڵ���Ҷ�ӽڵ�
//            {
//                if (p->weight > maxRoad) // �����ǰ�ڵ��Ȩ�ش��ڵ�ǰ�ҵ������Ȩ��
//                {
//                    maxRoad = p->weight; // �������Ȩ��
//                }
//            }
//        }
//    }
//};
//
//int main()
//{
//    int t;
//    cin >> t; // ��ȡ������������
//    while (t--) // ѭ������ÿ����������
//    {
//        Binary_tree Bt; // ����һ���µ�Binary_tree����
//        Bt.CreateTree(); // ����CreateTree��������������
//        Bt.getRoad();    // ����getRoad������ȡ���·��Ȩֵ
//    }
//    return 0;
//}