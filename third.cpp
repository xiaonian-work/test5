#include<iostream>
using namespace std;

class List {
public:
	int number;
	List* next;
	List()
	{
		next = NULL;
	}
};

class NodeList{
private:
	List* head;
	int len;
public:
	NodeList();
	~NodeList();
	int insert(int i, int num);
	List* index(int i);// 返回第i个结点的指针
	int del(int i);
	void display();
	int delnums();
};

NodeList::NodeList()
{
	len = 0;
	head = new List();
}

NodeList::~NodeList()
{
	List* p, * q;
	p = head;
	while (p->next)
	{
		q = p;
		p = p->next;
		delete q;
	}
	len = 0;
	head = NULL;
}

int NodeList::insert(int i, int num)
{
	List* node = new List();
	node->number = num;
	if (i > len + 1 || i < 1)
	{
		return 0;
	}
	List* node1 = head;
	int j = 0;
	while (node1 && j < i - 1)
	{
		node1 = node1->next; 
		j++;
	}
	node->next = node1->next;
	node1->next = node;
	len++;
	return 1;
};

void NodeList::display()
{
	List* lp;
	lp = head->next;
	cout << len << ":";
	while (lp)
	{
		cout << " " << lp->number;
		lp = lp->next;
	}
	cout << endl;
}

List* NodeList::index(int i)
{
	if (i == 0) return head;
	if (i<1 || i>len) return 0;
	List* node;
	node = head->next;
	for (int j = 1; j < i; j++)
	{
		if (node != NULL)
		{
			node = node->next;
		}
	}
	return node;
}

int NodeList::del(int i)
{
	if (i > len + 1 || i < 1)
	{
		return 0;
	}
	else
	{
		List* node = head;
		int j = 0;
		for (int j = 1; j < i; j++)
		{
			if (node != NULL)
			{
				node = node->next;
			}
		}
		node->next = node->next->next;
		len--;
		return 1;
	}
}

int NodeList::delnums()
{
	List* lp = head;
	for (int i = 1; i <= len; i++)
	{
		List* p1 = this->index(i);
		for (int j = i + 1; j <= len; j++)
		{
			List* p2 = this->index(j);
			if (p1->number == p2->number)
			{
				int check = this->del(j);
				j--;
				if (check == 0)
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

int main()
{
	int t, n, num;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		NodeList lp;
		cin >> n;
		for (int i = 1; i <= n; i++)
		{
			cin >> num;
			lp.insert(i, num);
		}
		if (lp.delnums() == 1)
		{
			lp.display();
		}
		return 0;
	}
	return 0;
}