#include"student.h"

Student* head, * rear;

void addInformation()
{
	Student* p;
	p = new Student;
	cout << "�������ѧ��������:";
	cin.getline(rear->name, 10);
	cout << "�������ѧ����ѧ��:";
	cin >> rear->code;
	cout << "�������ѧ������ѧ�ɼ�:";
	cin >> rear->math;
	cout << "�������ѧ��������ɼ�:";
	cin >> rear->physics;
	cout << "�������ѧ����Ӣ��ɼ�:";
	cin >> rear->English;
	cin.get();
	rear->grade = rear->math + rear->English + rear->physics;
	rear->average = rear->grade * 1.0 / 3;
	rear->next = p;
	rear = p;
}

void reviseInformation()
{
	int number;
	Student* p = head->next;
	cout << "�������ѧ����ѧ��:";
	cin >> number;
	while (p->code != number)
	{
		if (p == rear)
		{
			cout << "�Բ���û�в��ҵ���ѧ�ŵ�ѧ��"<<endl;
			return;
		}
		else
			p = p->next;
	}
	cout << "�������ѧ��������:";
	cin >> p->name;
	cout << "�������ѧ������ѧ�ɼ�:";
	cin >> p->math;
	cout << "�������ѧ����Ӣ��ɼ�:";
	cin >> p->English;
	cout << "�������ѧ��������ɼ�:";
	cin >> p->physics; 
	p->grade = p->math + p->English + p->physics;
	p->average = p->grade * 1.0 / 3;
}

void printInformation()
{
	Student* p = head->next;
	while (p != rear)
	{
		cout << "��ͬѧ��ѧ��Ϊ" << p->code << ",��ѧ�ɼ�Ϊ" << p->math << ",Ӣ��ɼ�Ϊ"
			<< p->English << ",����ɼ�Ϊ" << p->physics << ",�ܳɼ�Ϊ" << p->grade << ",ƽ����Ϊ" << p->average << endl;
		p = p->next;
	}
}

void name_searchInformation()
{
	char str[10];
	cout << "�������λͬѧ������:";
	cin.getline(str, 25);
	Student* p = head->next;
	while (strcmp(p->name, str))
	{
		if (p == rear)
		{
			cout << "�Բ���û�в��ҵ���������ͬѧ"<<endl;
			return;
		}
		p = p->next;
	}
	cout << "����ͬѧ��ѧ��Ϊ" << p->code << ",��ѧ�ɼ�Ϊ" << p->math << ",Ӣ��ɼ�Ϊ" << p->English <<
		",����ɼ�Ϊ" << p->physics << ",�ܳɼ�Ϊ" << p->grade << ",ƽ����Ϊ" << p->average << endl;
}

void code_searchInformation()
{
	int number;
	Student* p = head->next;
	cout << "���������ѧ����ѧ��:";
	cin >> number;
	while (p->code != number)
	{
		if (p == rear)
		{
			cout << "�Բ���û�в��ҵ���ѧ�ŵ�ѧ��"<<endl;
			return;
		}
		p = p->next;
	}
	cout << p->name << "ͬѧ��ѧ��Ϊ" << p->code << ",��ѧ�ɼ�Ϊ" << p->math << ",Ӣ��ɼ�Ϊ"
		<< p->English << ",����ɼ�Ϊ" << p->physics << ",�ܳɼ�Ϊ" << p->grade << ",ƽ����Ϊ" << p->average << endl;
}

void code_sort()
{
	bool flag = false;
	while (flag == false)
	{
		Student* p = head;
		flag = true;
		while (p->next->next != rear)
		{
			if (p->next->code >= p->next->next->code)
			{
				Student* tmp = p->next, * tmq = p->next->next;
				p->next = tmq;
				tmp->next = tmq->next;
				tmq->next = tmp;
				flag = false;
			}
			p = p->next;
		}
		if (flag == true)
			break;
	}
}

void grade_sort()
{
	bool flag = false;
	while (flag == false)
	{
		Student* p = head;
		flag = true;
		while (p->next->next != rear)
		{
			if (p->next->grade <= p->next->next->grade)
			{
				Student* tmp = p->next, * tmq = p->next->next;
				p->next = tmq;
				tmp->next = tmq->next;
				tmq->next = tmp;
				flag = false;
			}
			p = p->next;
		}
		if (flag == true)
			break;
	}
}