//#include<iostream>
//using namespace std;
//
//class BiTree {
//	int length;//���鳤��
//	int* Tree;//���飨����
//	void PreOrder(int i);//������ǰ������㷨
//public:
//	BiTree() {
//		cin >> length;
//		Tree = new int[length];
//		for (int i = 0; i < length; i++) {//��������
//			cin >> Tree[i];
//		}
//	}
//	~BiTree() {
//		delete[]Tree;
//	}
//	void PreOrder();//ǰ��������� ��0��ʼ ���н���
//};
//void BiTree::PreOrder() {
//	PreOrder(0);//�����һ�� ����һֱѭ��һֱѭ���������������˵���������ǰ�����������
//	cout << endl;
//}
//void BiTree::PreOrder(int i) {
//	if (Tree[i] != 0 && i < length) {
//		cout << Tree[i] << " ";//ǰ��������������
//		PreOrder(2 * i + 1);//����ߣ���Ϊ����ߵ���ͷ���ܽ�����һ��
//		PreOrder(2 * i + 2);//����������������������ھͿ����������
//	}
//}
//int main() {
//	int t;
//	cin >> t;
//	while (t--) {
//		BiTree mytree;//����ÿ��t���棬��Ϊÿһ�鶼�ǲ�һ��������
//		mytree.PreOrder();
//	}
//	return 0;
//}