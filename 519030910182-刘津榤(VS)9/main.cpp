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
	cout<<"��ӭʹ�óɼ�����ϵͳ!\n";
	while (true)
	{
		cout << "1--���ѧ����Ϣ\n2--�޸�ѧ����Ϣ\n3--��ʾȫ��ѧ����Ϣ\n4--��ѧ�Ų�ѯѧ����Ϣ\n5--��������ѯѧ����Ϣ\n6--��ѧ����������\n7--���ֽܷ�������\n0--�˳�"<<endl;
		cin >> choice;
		cin.get();
		if (choice == 0)
			break;
		else if (choice > 7 || choice < 0)
		{
			cout << "�����ʽ����" << endl;
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
	cout << "��л����ʹ��!" << endl;
	return 0;
}