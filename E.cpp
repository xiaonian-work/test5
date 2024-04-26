//#include<iostream>
//using namespace std;
//
//class BiTree {
//	int length;//数组长度
//	int* Tree;//数组（树）
//	void PreOrder(int i);//真正的前序遍历算法
//public:
//	BiTree() {
//		cin >> length;
//		Tree = new int[length];
//		for (int i = 0; i < length; i++) {//存入数据
//			cin >> Tree[i];
//		}
//	}
//	~BiTree() {
//		delete[]Tree;
//	}
//	void PreOrder();//前序遍历引入 从0初始 换行结束
//};
//void BiTree::PreOrder() {
//	PreOrder(0);//引入第一个 根，一直循环一直循环，到这个结束，说明这个树的前序遍历走完了
//	cout << endl;
//}
//void BiTree::PreOrder(int i) {
//	if (Tree[i] != 0 && i < length) {
//		cout << Tree[i] << " ";//前序遍历，先输出，
//		PreOrder(2 * i + 1);//先左边，因为左边走到尽头才能进行下一步
//		PreOrder(2 * i + 2);//遍历所有右子树，如果存在就可以输出啦！
//	}
//}
//int main() {
//	int t;
//	cin >> t;
//	while (t--) {
//		BiTree mytree;//放在每个t里面，因为每一组都是不一样的数据
//		mytree.PreOrder();
//	}
//	return 0;
//}