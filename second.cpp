//#include<iostream>
//#include<cmath>
//using namespace std;
//
//class ListNode {
//public:
//	int data;
//	ListNode* next;
//	ListNode()
//	{
//		next = NULL;
//	}
//};
//
//class LinkList {
//private:
//	ListNode* head;
//	int len;
//public:
//	LinkList();
//	~LinkList();
//	ListNode* LL_index(int i);// 返回第i个结点的指针
//	int LL_insert(int i, int item);
//	void display();
//};
//
//LinkList::LinkList()
//{
//	head = new ListNode();
//	len = 0;
//}
//
//LinkList::~LinkList()
//{
//	ListNode* p, * q;
//	p = head;
//	while (p != NULL)
//	{
//		q = p;
//		p = p->next;
//		delete q;
//	}
//	len = 0;
//	head = NULL;
//}
//
//void LinkList::display()
//{
//	ListNode* p;
//	p = head->next;
//	while (p)
//	{
//		cout << p->data << " ";
//		p = p->next;
//	}
//	cout << endl;
//}
//
//int LinkList::LL_insert(int i, int item)
//{
//	if (i > len + 1 || i < 1)
//	{
//		return 0;
//	}
//	else
//	{
//		ListNode* cur, * pre = head, * now;
//		cur = head->next;
//		for (int j = 1; j < i; j++)
//		{
//			if (cur != NULL)
//			{
//				pre = cur;
//				cur = cur->next;
//			}
//		}
//		now = new ListNode;
//		now->data = item;
//		pre->next = now;
//		now->next = cur;
//		len++;
//		return 1;
//	}
//}
//
//ListNode* LinkList::LL_index(int i)
//{
//	if (i == 0) return head;
//	if (i<1 || i>len) return 0;
//	ListNode* cur, * pre = head, * now;
//	cur = head->next;
//	for (int j = 1; j < i; j++)
//	{
//		if (cur != NULL)
//		{
//			pre = cur;
//			cur = cur->next;
//		}
//	}
//	return cur;
//}
//
//int main()
//{
//	LinkList ll;
//	int num, length;
//	cin >> length;
//	for (int i = 1; i <= length; i++)
//	{
//		cin >> num;
//		ll.LL_insert(i, num);
//	}
//	ll.display();
//	int a, b; //要交换的两个数的位置
//	for (int i = 0; i < 2; i++)
//	{
//		cin >> a >> b;
//		if (ll.LL_index(a) != 0 && ll.LL_index(b) != 0 && ll.LL_index(a - 1) != 0 && ll.LL_index(b - 1) != 0)
//		{
//			ListNode* left, * right, * temp, * left1, * right1;
//			left = ll.LL_index(a);
//			right = ll.LL_index(b);
//			left1 = ll.LL_index(a - 1);
//			right1 = ll.LL_index(b - 1);
//			if (fabs(a - b) == 1)
//			{
//				temp = right->next;
//				left1->next = right;
//				right->next = left;
//				left->next = temp;
//			}
//			else
//			{
//				temp = right->next;
//				left1->next = right;
//				right->next = left->next;
//				right1->next = left;
//				left->next = temp;
//			}
//			ll.display();
//		}
//		else
//		{
//			cout << "error" << endl;
//		}
//	}
//	return 0;
//}
