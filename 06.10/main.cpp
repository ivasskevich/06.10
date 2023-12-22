#include"Mylibrary.h"

class Ship :public iSwim {
public:
	virtual void Swim() {
		cout << "Корабль - водный транспорт\n";
	}
};

class Airplane : public iFly {
public:
	virtual void Fly() {
		cout << "Самолеты летают в небе\n";
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
	Pinguin obj("Пингвин", 100, "Арктика");
	Parrot obj1("Попугай", 1, "Тропические леса");



	Airplane pl;
	Func(&pl);
	Func(&obj1);
}