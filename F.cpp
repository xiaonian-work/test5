//#include <iostream>
//#include <queue>
//using namespace std;
//
//struct BiTreeNode {
//    char data;
//    BiTreeNode* left;
//    BiTreeNode* right;
//};
//
//class BTree {
//public:
//    BiTreeNode* root;
//    queue<BiTreeNode*> q;
//    void create(BiTreeNode*& t) {
//        char c;
//        cin >> c;
//        if (c == '0') {
//            t = NULL;
//        }
//        else {
//            t = new BiTreeNode;
//            t->data = c;
//            create(t->left);
//            create(t->right);
//        }
//    }
//
//    void LevelOrder() {  //��α���
//        q.push(root);
//        while (!q.empty()) {
//            BiTreeNode* t = q.front();  //��ȡ����Ԫ��
//            if (t->left) {  //������Ԫ�������Һ��ӣ��������
//                q.push(t->left);
//            }
//            if (t->right) {
//                q.push(t->right);
//            }
//            cout << t->data;
//            q.pop();       //Ȼ�󽫵�ǰԪ�س���
//        }
//    }
//};
//
//int main()
//{
//    int t;
//    cin >> t;
//    while (t--) {
//        BTree tree;
//        tree.create(tree.root);
//        tree.LevelOrder();
//        cout << endl;
//    }
//    return 0;
//}