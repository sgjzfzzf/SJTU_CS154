#include"student.h"
using namespace std;

int main()
{
	extern Student* head, * rear;
	head = new Student;
	rear = new Student;
	head->next = rear;
	void(*func[7])() = { addInformation,reviseInformation,printInformation,code_searchInformation,name_searchInformation,code_sort,grade_sort };
	int choice = -1;
	cout<<"欢迎使用成绩管理系统!\n";
	while (true)
	{
		cout << "1--添加学生信息\n2--修改学生信息\n3--显示全部学生信息\n4--按学号查询学生信息\n5--按姓名查询学生信息\n6--按学号升序排序\n7--按总分降序排序\n0--退出"<<endl;
		cin >> choice;
		cin.get();
		if (choice == 0)
			break;
		else if (choice > 7 || choice < 0)
		{
			cout << "输入格式有误" << endl;
			break;
		}
		func[choice - 1]();
	}
	Student* p = head;
	while (p != rear)
	{
		Student* q = p->next;
		delete p;
		p = q;
	}
	delete p;
	cout << "感谢您的使用!" << endl;
	return 0;
}