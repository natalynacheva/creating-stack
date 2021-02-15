/*#include <iostream>
using namespace std;

typedef struct Element* po;
struct Element
{
	char data;
	po next;
};



int main() {
	po na;
	na = NULL;
	po p;
	char x;
	cout << " vuvedi bukva: (za stop vuvedi 0!) ";
	
	cin >> x;

	while(x != '0')
	{
		p = new Element;
		p->data = x;
		p->next = na;
		na = p;

		cout << " vuvedi bukva: (za stop vuvedi 0!) ";
		cin >> x;

	}

	po help = na;
	while (help != NULL) {
		cout << help->data<<" ";
		help = help->next;

	}
	return 0;
}*/

#include<iostream>
#include<clocale>
using namespace std;
struct Element {
	int Data; po Next;
};
int main()
{
	po  na; po p;

	na = NULL;
	char x;
	cout << " vuvedi bukva: (za stop vuvedi 0!) ";

	cin >> x;

	while (x != '0')
	{
		p = new Element;
		p->Data = x;
		p->Next = na;
		na = p;

		cout << " vuvedi bukva: (za stop vuvedi 0!) ";
		cin >> x;

	}

	while (p != NULL) {
		p = na;
	}
	{

	}
}
