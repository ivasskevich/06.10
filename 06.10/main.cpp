#include"Mylibrary.h"

class Ship :public iSwim {
public:
	virtual void Swim() {
		cout << "������� - ������ ���������\n";
	}
};

class Airplane : public iFly {
public:
	virtual void Fly() {
		cout << "�������� ������ � ����\n";
	}
};

void Func(iFly* ptr) {
	ptr->Fly();
}

void Func(iSwim* ptr) {
	ptr->Swim();
}

int main()
{
	setlocale(0, "ru");
	Pinguin obj("�������", 100, "�������");
	Parrot obj1("�������", 1, "����������� ����");



	Airplane pl;
	Func(&pl);
	Func(&obj1);
}