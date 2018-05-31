#include <iostream>
#include <cstdlib>
#include <fstream>
#include <Windows.h>
using namespace std;

struct movie {
public:
	char title[100];
	char director[100];
	int run;
	char genre[15];
	int seat1[3][10];
	int seat2[3][10];
	int seat3[3][10];
	int seat4[3][10];
};
void ChooseTimeAndSeat(struct movie *p);
void Reserv1(struct movie *p);
void Reserv2(struct movie *p);
void Reserv3(struct movie *p);
void Reserv4(struct movie *p);

int main(void) {
	int X;
	typedef struct movie movie;
	movie Avengers = {
		"�����: ���Ǵ�Ƽ ��",
		"�ȼҴ� ���, �� ��� ",
		149,
		"Fantasy",
		{ 0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0 },
		{ 0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0 },
		{ 0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0 }
	};
	movie Gonjiam = {
		"������",
		"������",
		94,
		"Thriller",
		{ 0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0 },
		{ 0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0 },
		{ 0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0 }
	};
	movie DetectiveConan = {
		"��Ž�� �ڳ� ������ ������ ��",
		"�߸����� �߽���ġ��",
		107,
		"Animation",
		{ 0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0 },
		{ 0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0 },
		{ 0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0 }
	};
	movie EdgeOfTomorrow = {
		"Edge of tomorrow",
		"���� ���̸� ",
		113,
		"Sciencefiction",
		{ 0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0 },
		{ 0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0 },
		{ 0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0 }
	};
	while (1) {
		system("cls");
		cout << "��ȭ�� ������ �ּ���." << endl;
		cout << "1. �����: ���Ǵ�Ʈ ��, 2. ������, 3. ��Ž�� �ڳ� ������ ������ ��, 4. �������� ���ӷο�, 5. ���α׷� ����" << endl;
		cin >> X;
		cout << endl;
		system("cls");
		if (X == 1) {
			cout << "��ȭ����" << endl;;
			cout << "���� : " << Avengers.title << endl;
			cout << "���� : " << Avengers.director << endl;
			cout << "�󿵽ð� : " << Avengers.run << "��" << endl;
			cout << "�帣 : " << Avengers.genre << endl;
			ChooseTimeAndSeat(&Avengers);
		}
		else if (X == 2) {
			cout << "��ȭ����" << endl;;
			cout << "���� : " << Gonjiam.title << endl;
			cout << "���� : " << Gonjiam.director << endl;
			cout << "�󿵽ð� : " << Gonjiam.run << "��" << endl;
			cout << "�帣 : " << Gonjiam.genre << endl;
			ChooseTimeAndSeat(&Gonjiam);

		}
		else if (X == 3) {
			cout << "��ȭ����" << endl;;
			cout << "���� : " << DetectiveConan.title << endl;
			cout << "���� : " << DetectiveConan.director << endl;
			cout << "�󿵽ð� : " << DetectiveConan.run << "��" << endl;
			cout << "�帣 : " << DetectiveConan.genre << endl;
			ChooseTimeAndSeat(&DetectiveConan);
		}
		else if (X == 4) {
			cout << "��ȭ����" << endl;;
			cout << "���� : " << EdgeOfTomorrow.title << endl;
			cout << "���� : " << EdgeOfTomorrow.director << endl;
			cout << "�󿵽ð� : " << EdgeOfTomorrow.run << "��" << endl;
			cout << "�帣 : " << EdgeOfTomorrow.genre << endl;
			ChooseTimeAndSeat(&EdgeOfTomorrow);
		}
		else if (X == 5) {
			exit(0);
		}
	}
};
void ChooseTimeAndSeat(struct movie *p)
{
	while (1)
	{
		int s, i, j;
		cout << endl << "�ð��� ������ �ּ���." << endl;
		cout << "1.  9:30 ~ 11:30" << endl;
		cout << "2. 12:00 ~ 14:00" << endl;
		cout << "3. 15:15 ~ 17:15" << endl;
		cout << "4. 20:45 ~ 22:45" << endl;
		cin >> s;
		cout << endl;
		system("cls");
		if (s == 1) {
			cout << "            1       2       3       4       5       6       7       8       9       10" << endl;
			cout << "     ---------------------------------------------------------------------------------" << endl;
			for (j = 0; j < 4; j++)
			{
				if (j == 0)
					cout << "  A  " << endl;
				if (j == 1)
					cout << "  B  " << endl;
				if (j == 2)
					cout << "  C  " << endl;
				if (j == 3)
					cout << "  D  " << endl;
				for (i = 0; i < 10; i++) {
					if (p->seat1[j][i] == 0)
						cout << "       O";
					else if (p->seat1[j][i] == 1)
						cout << "       X";
				}
				cout << "\n" << endl;
			}
			Reserv1(p);
			break;
		}
		if (s == 2) {
			cout << "           1       2       3       4       5       6       7       8       9       10" << endl;
			cout << "     ---------------------------------------------------------------------------------" << endl;
			for (j = 0; j < 4; j++)
			{
				if (j == 0)
					cout << "  A  " << endl;
				if (j == 1)
					cout << "  B  " << endl;
				if (j == 2)
					cout << "  C  " << endl;
				if (j == 3)
					cout << "  D  " << endl;
				for (i = 0; i < 10; i++) {
					if (p->seat1[j][i] == 0)
						cout << "       O";
					else if (p->seat1[j][i] == 1)
						cout << "       X";
				}
				cout << "\n" << endl;
			}
			Reserv2(p);
			break;
		}
		if (s == 3) {
			cout << "           1       2       3       4       5       6       7       8       9       10" << endl;
			cout << "     ---------------------------------------------------------------------------------" << endl;
			for (j = 0; j < 4; j++)
			{
				if (j == 0)
					cout << "  A  " << endl;
				if (j == 1)
					cout << "  B  " << endl;
				if (j == 2)
					cout << "  C  " << endl;
				if (j == 3)
					cout << "  D  " << endl;
				for (i = 0; i < 10; i++) {
					if (p->seat1[j][i] == 0)
						cout << "       O";
					else if (p->seat1[j][i] == 1)
						cout << "       X";
				}
				cout << "\n" << endl;
			}
			Reserv3(p);
			break;
		}
		if (s == 4) {
			cout << "           1       2       3       4       5       6       7       8       9       10" << endl;
			cout << "     ---------------------------------------------------------------------------------" << endl;
			for (j = 0; j < 4; j++)
			{
				if (j == 0)
					cout << "  A  " << endl;
				if (j == 1)
					cout << "  B  " << endl;
				if (j == 2)
					cout << "  C  " << endl;
				if (j == 3)
					cout << "  D  " << endl;
				for (i = 0; i < 10; i++) {
					if (p->seat1[j][i] == 0)
						cout << "       O";
					else if (p->seat1[j][i] == 1)
						cout << "       X";
				}
				cout << "\n" << endl;
			}
			Reserv4(p);
			break;
		}
		else
			cout << "�ٽ� �����ϼ���." << endl;
	}
}

void Reserv1(struct movie *p) {
	int a, b = 0;
	int i = 0, j = 0;
	char C, X;
	char check = 'Y';
	struct movie reserver;

	cout << "������ �̸��� �Է��� �ּ���." << endl;
	cin >> reserver.title;
	cout << endl;
	while (check == 'Y') {
		cout << endl << "�����Ͻ� �¼��� ���� ������ �ּ���.(A,B,C,D)" << endl;
		cin >> C;
		cout << endl;

		if (C == 'A'&& C == 'a')
			b = 1;
		if (C == 'B'&& C == 'b')
			b = 2;
		if (C == 'C'&& C == 'c')
			b = 3;
		if (C == 'D'&& C == 'd')
			b = 3;

		cout << endl << "�����Ͻ� �¼��� ��ȣ�� ������ �ּ���.(1~10)" << endl;
		cin >> a;
		if (p->seat1[b - 1][a - 1] == 0) {
			p->seat1[b - 1][a - 1] = 1;
			reserver.seat1[b - 1][a - 1] = 1;

		}
		else {
			cout << "�̹� ����� �¼��Դϴ�" << endl;
			continue;
		}
		cout << "��� ���� �Ͻðڽ��ϱ�? (Y/N) : " << endl;
		cin >> check;
		cout << endl;
	}
	ifstream f("reserver.title");
	if (!f) {
		cout << "������ ������ �ʽ��ϴ�." << endl;
	}

	cout << " -------------------------------------------------------" << endl;
	cout << "                     ��ȭ ����ǥ" << endl;
	cout << " ������ �̸� : " << endl << reserver.title;
	cout << " ��ȭ���� : " << endl << p->title;
	cout << " ��ȭ�ð� : 9:30 ~ 11:30" << endl;
	cout << " �󿵽ð� : " << p->run << endl;
	cout << " ��ȭ�帣 : " << p->genre << endl;
	cout << " �¼� : ";
	for (j = 0; j < 4; j++)
	{
		if (j == 0) {
			for (i = 0; i < 10; i++) {
				if (reserver.seat1[j][i] == 1)
					cout << "A" << i + 1;
			}
		}
		if (j == 1) {
			for (i = 0; i < 10; i++) {
				if (reserver.seat1[j][i] == 1)
					cout << "B" << i + 1;
			}
		}
		if (j == 2) {
			for (i = 0; i < 10; i++) {
				if (reserver.seat1[j][i] == 1)
					cout << "C" << i + 1;
			}
			if (j == 3) {
				for (i = 0; i < 10; i++) {
					if (reserver.seat1[j][i] == 1)
						cout << "D" << i + 1;
				}
			}
		}
		cout << endl;
		f.close();
	}
}
void Reserv2(struct movie *p) {
	int a, b = 0;
	int i = 0, j = 0;
	char C, X;
	char check = 'Y';
	struct movie reserver;
	ifstream f("reserver.title");

	cout << "������ �̸��� �Է��� �ּ���." << endl;
	cin >> reserver.title;

	while (check == 'Y') {
		cout << endl << "�����Ͻ� �¼��� ���� ������ �ּ���.(A,B,C,D)" << endl;
		cin >> C;

		if (C == 'A'&& C == 'a')
			b = 1;
		if (C == 'B'&& C == 'b')
			b = 2;
		if (C == 'C'&& C == 'c')
			b = 3;
		if (C == 'D'&& C == 'd')
			b = 3;

		cout << endl << "�����Ͻ� �¼��� ��ȣ�� ������ �ּ���.(1~10)" << endl;
		cin >> a;
		if (p->seat1[b - 1][a - 1] == 0) {
			p->seat1[b - 1][a - 1] = 1;
			reserver.seat1[b - 1][a - 1] = 1;

		}
		else {
			cout << "�̹� ����� �¼��Դϴ�" << endl;
			continue;
		}
		cout << "��� ���� �Ͻðڽ��ϱ�? (Y/N) : " << endl;
		cin >> check;
	}
	if (!f) {
		cout << "������ ������ �ʽ��ϴ�." << endl;
	}
	cout << " -------------------------------------------------------" << endl;
	cout << "                     ��ȭ ����ǥ" << endl;
	cout << " ������ �̸� : " << endl << reserver.title;
	cout << " ��ȭ���� : " << endl << p->title;
	cout << " ��ȭ�ð� : 9:30 ~ 11:30" << endl;
	cout << " �󿵽ð� : " << p->run << endl;
	cout << " ��ȭ�帣 : " << p->genre << endl;
	cout << " �¼� : ";
	for (j = 0; j < 4; j++)
	{
		if (j == 0) {
			for (i = 0; i < 10; i++) {
				if (reserver.seat1[j][i] == 1)
					cout << "A" << i + 1;
			}
		}
		if (j == 1) {
			for (i = 0; i < 10; i++) {
				if (reserver.seat1[j][i] == 1)
					cout << "B" << i + 1;
			}
		}
		if (j == 2) {
			for (i = 0; i < 10; i++) {
				if (reserver.seat1[j][i] == 1)
					cout << "C" << i + 1;
			}
			if (j == 3) {
				for (i = 0; i < 10; i++) {
					if (reserver.seat1[j][i] == 1)
						cout << "D" << i + 1;
				}
			}
		}
		cout << endl;
		f.close();
	}
}

void Reserv3(struct movie *p) {
	int a, b = 0;
	int i = 0, j = 0;
	char C, X;
	char check = 'Y';
	struct movie reserver;
	ifstream f("reserver.title");

	cout << "������ �̸��� �Է��� �ּ���." << endl;
	cin >> reserver.title;
	while (check == 'Y') {
		cout << endl << "�����Ͻ� �¼��� ���� ������ �ּ���.(A,B,C,D)" << endl;
		cin >> C;

		if (C == 'A'&& C == 'a')
			b = 1;
		if (C == 'B'&& C == 'b')
			b = 2;
		if (C == 'C'&& C == 'c')
			b = 3;
		if (C == 'D'&& C == 'd')
			b = 3;

		cout << endl << "�����Ͻ� �¼��� ��ȣ�� ������ �ּ���.(1~10)" << endl;
		cin >> a;
		if (p->seat1[b - 1][a - 1] == 0) {
			p->seat1[b - 1][a - 1] = 1;
			reserver.seat1[b - 1][a - 1] = 1;
		}
		else {
			cout << "�̹� ����� �¼��Դϴ�" << endl;
			continue;
		}
		cout << "��� ���� �Ͻðڽ��ϱ�? (Y/N) : " << endl;
		cin >> check;
	}
	if (!f) {
		cout << "������ ������ �ʽ��ϴ�." << endl;
	}
	cout << " -------------------------------------------------------" << endl;
	cout << "                     ��ȭ ����ǥ" << endl;
	cout << " ������ �̸� : " << endl << reserver.title;
	cout << " ��ȭ���� : " << endl << p->title;
	cout << " ��ȭ�ð� : 9:30 ~ 11:30" << endl;
	cout << " �󿵽ð� : " << p->run << endl;
	cout << " ��ȭ�帣 : " << p->genre << endl;
	cout << " �¼� : ";
	for (j = 0; j < 4; j++)
	{
		if (j == 0) {
			for (i = 0; i < 10; i++) {
				if (reserver.seat1[j][i] == 1)
					cout << "A" << i + 1;
			}
		}
		if (j == 1) {
			for (i = 0; i < 10; i++) {
				if (reserver.seat1[j][i] == 1)
					cout << "B" << i + 1;
			}
		}
		if (j == 2) {
			for (i = 0; i < 10; i++) {
				if (reserver.seat1[j][i] == 1)
					cout << "C" << i + 1;
			}
			if (j == 3) {
				for (i = 0; i < 10; i++) {
					if (reserver.seat1[j][i] == 1)
						cout << "D" << i + 1;
				}
			}
		}
		cout << endl;
		f.close();
	}
}
void Reserv4(struct movie *p) {
	int a, b = 0;
	int i = 0, j = 0;
	char C, X;
	char check = 'Y';
	struct movie reserver;
	ifstream f("reserver.title");

	cout << "������ �̸��� �Է��� �ּ���." << endl;
	cin >> reserver.title;
	while (check == 'Y') {
		cout << endl << "�����Ͻ� �¼��� ���� ������ �ּ���.(A,B,C,D)" << endl;
		cin >> C;

		if (C == 'A'&& C == 'a')
			b = 1;
		if (C == 'B'&& C == 'b')
			b = 2;
		if (C == 'C'&& C == 'c')
			b = 3;
		if (C == 'D'&& C == 'd')
			b = 3;

		cout << endl << "�����Ͻ� �¼��� ��ȣ�� ������ �ּ���.(1~10)" << endl;
		cin >> a;
		if (p->seat1[b - 1][a - 1] == 0) {
			p->seat1[b - 1][a - 1] = 1;
			reserver.seat1[b - 1][a - 1] = 1;

		}
		else {
			cout << "�̹� ����� �¼��Դϴ�" << endl;
			continue;
		}
		cout << "��� ���� �Ͻðڽ��ϱ�? (Y/N) : " << endl;
		cin >> check;
	}
	if (!f) {
		cout << "������ ������ �ʽ��ϴ�." << endl;
	}
	cout << " -------------------------------------------------------" << endl;
	cout << "                     ��ȭ ����ǥ" << endl;
	cout << " ������ �̸� : " << endl << reserver.title;
	cout << " ��ȭ���� : " << endl << p->title;
	cout << " ��ȭ�ð� : 9:30 ~ 11:30" << endl;
	cout << " �󿵽ð� : " << p->run << endl;
	cout << " ��ȭ�帣 : " << p->genre << endl;
	cout << " �¼� : ";
	for (j = 0; j < 4; j++)
	{
		if (j == 0) {
			for (i = 0; i < 10; i++) {
				if (reserver.seat1[j][i] == 1)
					cout << "A" << i + 1;
			}
		}
		if (j == 1) {
			for (i = 0; i < 10; i++) {
				if (reserver.seat1[j][i] == 1)
					cout << "B" << i + 1;
			}
		}
		if (j == 2) {
			for (i = 0; i < 10; i++) {
				if (reserver.seat1[j][i] == 1)
					cout << "C" << i + 1;
			}
			if (j == 3) {
				for (i = 0; i < 10; i++) {
					if (reserver.seat1[j][i] == 1)
						cout << "D" << i + 1;
				}
			}
		}
		cout << endl;
		f.close();
	}
}
