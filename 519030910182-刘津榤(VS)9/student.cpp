#include"student.h"

Student* head, * rear;

void addInformation()
{
	Student* p;
	p = new Student;
	cout << "请输入该学生的名字:";
	cin.getline(rear->name, 10);
	cout << "请输入该学生的学号:";
	cin >> rear->code;
	cout << "请输入该学生的数学成绩:";
	cin >> rear->math;
	cout << "请输入该学生的物理成绩:";
	cin >> rear->physics;
	cout << "请输入该学生的英语成绩:";
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
	cout << "请输入该学生的学号:";
	cin >> number;
	while (p->code != number)
	{
		if (p == rear)
		{
			cout << "对不起，没有查找到该学号的学生"<<endl;
			return;
		}
		else
			p = p->next;
	}
	cout << "请输入该学生的姓名:";
	cin >> p->name;
	cout << "请输入该学生的数学成绩:";
	cin >> p->math;
	cout << "请输入该学生的英语成绩:";
	cin >> p->English;
	cout << "请输入该学生的物理成绩:";
	cin >> p->physics; 
	p->grade = p->math + p->English + p->physics;
	p->average = p->grade * 1.0 / 3;
}

void printInformation()
{
	Student* p = head->next;
	while (p != rear)
	{
		cout << "该同学的学号为" << p->code << ",数学成绩为" << p->math << ",英语成绩为"
			<< p->English << ",物理成绩为" << p->physics << ",总成绩为" << p->grade << ",平均分为" << p->average << endl;
		p = p->next;
	}
}

void name_searchInformation()
{
	char str[10];
	cout << "请输入该位同学的姓名:";
	cin.getline(str, 25);
	Student* p = head->next;
	while (strcmp(p->name, str))
	{
		if (p == rear)
		{
			cout << "对不起，没有查找到该姓名的同学"<<endl;
			return;
		}
		p = p->next;
	}
	cout << "该名同学的学号为" << p->code << ",数学成绩为" << p->math << ",英语成绩为" << p->English <<
		",物理成绩为" << p->physics << ",总成绩为" << p->grade << ",平均分为" << p->average << endl;
}

void code_searchInformation()
{
	int number;
	Student* p = head->next;
	cout << "请输入该名学生的学号:";
	cin >> number;
	while (p->code != number)
	{
		if (p == rear)
		{
			cout << "对不起，没有查找到该学号的学生"<<endl;
			return;
		}
		p = p->next;
	}
	cout << p->name << "同学的学号为" << p->code << ",数学成绩为" << p->math << ",英语成绩为"
		<< p->English << ",物理成绩为" << p->physics << ",总成绩为" << p->grade << ",平均分为" << p->average << endl;
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