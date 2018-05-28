#include<cstring>
#include<iostream>
#include<cmath>
#include<stdio.h>
#include<fstream>
#include <string>
using namespace std;
void explain(void);
void level(void);
void levelcheck(int num, char h[]);
int choice(void);
void Level1(void);
void Level2(void);
void Level3(void);
void Level4(void);
void Level5(void);
void Level6(void);
void Level7(void);
void Level8(void);
void Level9(void);
void Level10(void);
void Boss(void);
int main(void)
{

	FILE *fp = NULL;
	int c;
	int num;
	char full[10];
	for (int i = 0;i < 10;i++)
		full[i] = 'o';
	char h[10] = { ' ',' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' };

	cout<<"�߸������� �����մϴ�.\n\n";
	explain();
	level();
	while (1) {
		num = choice();
		switch (num) {
		case 1:Level1();break;
		case 2:Level2();break;
		case 3:Level3();break;
		case 4:Level4();break;
		case 5:Level5();break;
		case 6:Level6();break;
		case 7:Level7();break;
		case 8:Level8();break;
		case 9:Level9();break;
		case 10:Level10();break;
		}
		levelcheck(num, h);

		if (strcmp(h, full) == 0)
			break;
	}

	fp = fopen("boss.txt", "r");
	if (fp == NULL) {
		fprintf(stderr, "���� ���� boss.txt�� �� �� �����ϴ�.");
		exit(1);
	}
	while ((c = fgetc(fp)) != EOF)
		putchar(c);
	fclose(fp);

	Boss();

	return 0;
}

inline void explain(void)
{
	cout<<"\n���� ���: \n";
	cout << "�츮���� ���α׷��� level���� �������� �ֽ��ϴ�.\n";
	cout << "Level�� �� 10������ �����Ǿ��ֽ��ϴ�.\n";
	cout << "10������ ��� �� Ǯ�� �� ��� Boss������ ���ɴϴ�.\n";
	cout << "Boss�������� ���߾��� �� � ���� �Ͼ �� ���� Ȯ���غ�����.(�� 10���� ������ �������� Ǯ����մϴ�.)\n";
}

inline void level(void)
{
	cout << "\nLevel 1( )     Level 2( )\n\n";
	cout << "Level 3( )     Level 4( )\n\n";
	cout << "Level 5( )     Level 6( )\n\n";
	cout << "Level 7( )     Level 8( )\n\n";
	cout << "Level 9( )     Level 10( )\n\n";
}

inline void levelcheck(int num, char h[])
{
	h[num - 1] = 'o';
	cout<<"\nLevel 1"<<"("<<h[0]<<")"<<" Level 2"<<"("<<h[1]<<")\n\n";
	cout << "\nLevel 3" << "(" << h[2] <<")"<< " Level 4" << "(" << h[3] << ")\n\n";
	cout << "\nLevel 5" << "(" << h[4] << ")"<<" Level 6" << "(" << h[5] << ")\n\n";
	cout << "\nLevel 7" << "(" << h[6] << ")"<<" Level 8" << "(" << h[7] << ")\n\n";
	cout << "\nLevel 9" << "(" << h[8] << ")"<<" Level 10" << "(" << h[9] << ")\n\n";
}

inline int choice(void)
{
	int num;

	while (1)
	{
		cout << "������ Level�� �Է��ϼ���: ";
		cin >> num;
		getchar();
		if (num < 1 || num>10)
		{
			cout << "1~10 ������ ���ڸ� �Է��ϼ���\n";
			continue;
		}
		else
			break;
	}

	return num;
}

inline void Level1(void)
{
	int num, count = 0;
	

	cout << "\n\n����ǥ�� �� ���ڴ�?\n";
	cout<<"3+4=7\n";
	cout << "7+5=12\n";
	cout << "6+9=3\n";
	cout << "11+12=11\n";
	cout << "8+9=?\n";

	while (1) {
		cout << "��: ";
		cin>>num;
		getchar();
		count++;
		if (count >= 3) {
			cout << "��Ʈ:  ";
			ifstream r("1����Ʈ.txt", ios_base::out);

			if (r.is_open() == true)
			{
				char str[10];
				r.getline(str, 10,'\n');
				cout << str << endl;
			}
			cout<<endl;
		}

		if (num == 5) {
			cout << "�����Դϴ�.!!\n\n";
			break;
		}
		else {
			cout << "�ٽ� �Է��ϼ���!!\n\n";
		}
	}

}

void Level2(void)
{
	int count = 0;
	char c1[50];
	cout << "\n\n������ �� ���ĺ��� �����ΰ�?\n";
	cout << "N W H O I ( )\n";

	while (1) {
		cout << "��: ";
		cin >> c1;
		getchar();
		count++;
		if (count >= 3) {
			cout << "��Ʈ:  ";
			ifstream r("2����Ʈ.txt", ios_base::out);

			if (r.is_open()==true) 
			{
				char str[100];
				r.getline(str, 100, '\n');
				cout << str << endl;
			}
			cout << endl;
		}

		if (c1[0] == 'i' || c1[0] == 'I') {
			cout << "�����Դϴ�.!!\n\n";
			break;
		}
		else
			cout << "�ٽ� �Է��ϼ���!!\n\n";

	}
}

void Level3(void)
{
	int count = 0;
	int num1;
	cout<<"c8�� ������ ���� �ο��̴� ������ Ż���ϱ� ����\n";
	cout<<"��ȣ�� �˾Ƴ��� �Ѵ�. ��ȣ�� �����ϱ�?\n";
	cout << "2 1 1 1 1 2 1 3 2 2 2 1 1\n";
	cout << "1 1 1 1 1 2 1 1 2 ? 2 2 1\n";
	while (1) {
		cout << "��: ";
		cin>>num1;
		getchar();
		count++;
		if (count >= 3) {
			cout << "��Ʈ:  ";
			ifstream r("3����Ʈ.txt", ios_base::out);

			if (r.is_open() == true)
			{
				char str[10000];
				r.getline(str, 10000, '\n');
				cout << str << endl;
			}
			cout << endl;
		}

		if (num1 == 3) {
			cout<<"�����Դϴ�.!!\n\n";
			break;
		}
		else {
			cout << "�ٽ� �Է��ϼ���!!\n\n";
			continue;
		}
	}
}

void Level4(void)
{
	int count = 0;
	int num;
	cout<<"����ǥ�� ���ڴ�?\n";
	cout<<"������=0\n";
	cout<<"Ű����=1\n";
	cout<<"�߸����=2\n";
	cout<<"�����ʹ�=3\n";
	cout << "������б�=?\n";
	while (1) {
		cout<<"��: ";
		cin >> num;
		getchar();
		count++;
		if (count >= 3) {
			cout << "��Ʈ:  ";
			ifstream r("4����Ʈ.txt", ios_base::out);

			if (r.is_open() == true)
			{
				char str[100];
				r.getline(str, 100, '\n');
				cout << str << endl;
			}
			cout << endl;
		}

		if (num == 0) {
			cout<<"�����Դϴ�.!!\n\n";
			break;
		}
		else
			cout<<"�ٽ� �Է��ϼ���!!\n\n";

	}
}

inline void Level5(void)
{
	int count = 0;
	char c[50];
	cout<<"���� �����ϱ�?\n";
	cout<< "���� �꿡 ������ �ٴٿ��� ���� ���ؿ�.\n";
	cout<<"���� ��� ��� �Ϳ� �����ؿ�.\n";
	cout<<"���� ���� ���� ���ƿ�.\n";
	cout<<"���� ��� ���� ũ�� �����.\n";
	cout<<"���� �����ϱ��?\n";
	while (1) {
		cout<<"��: ";
		cin >> c;
		count++;
		if (count >= 3) {
			cout << "��Ʈ:  ";
			ifstream r("5����Ʈ.txt", ios_base::out);

			if (r.is_open() == true)
			{
				char str[1000];
				r.getline(str, 1000, '\n');
				cout << str << endl;
			}
			cout << endl;
		}

		if (c[0] == 't' || c[0] == 'T') {
			cout<<"�����Դϴ�.!!\n\n";
			break;
		}
		else
			cout<<"�ٽ� �Է��ϼ���!!\n\n";
	}
}

void Level6(void)
{
	FILE *fp = NULL;
	int count = 0;
	int num;
	cout<<"����ǥ�� �� ���ڴ�?\n";
	cout<<"Freedom=11\n";
	cout<<"Lion=7\n";
	cout<<"Photo=11\n";
	cout<<"ARt=19\n";
	cout << "Gentleman=?\n";
	while (1) {
		cout<<"��: ";
		cin >> num;
		getchar();
		count++;
		if (count >= 3) {
			cout << "��Ʈ:  ";
			ifstream r("6����Ʈ.txt", ios_base::out);

			if (r.is_open() == true)
			{
				char str[1000];
				r.getline(str, 1000, '\n');
				cout << str << endl;
			}
			cout << endl;
		}

		if (num == 15) {
			cout << "�����Դϴ�.!!\n\n";
			break;
		}
		else {
			cout<<"�ٽ� �Է��ϼ���!!\n\n";
			continue;
		}
	}
}

void Level7(void)
{
	int count = 0;
	int num;
	cout<<"��� ������ ���� ���� ������ �ο��̴� ��� ��ҿ�\n";
	cout<<"�ڽ��� �����鸸 �˾ƺ� �� �ְ� 8�ڸ� �н����带 �����س��Ҵ�.\n";
	cout<<"�н������ �����ϱ�?\n";
	cout << "THIS WILL BE OUR SECRET\n";
	cout << "TIHS WLIL BE OUR SCERTE\n";
	while (1) {
		cout<<"��: ";
		cin >> num;
		getchar();
		count++;
		if (count >= 3) {
			cout << "��Ʈ:  ";
			ifstream r("7����Ʈ.txt", ios_base::out);

			if (r.is_open() == true)
			{
				char str[1000];
				r.getline(str, 1000, '\n');
				cout << str << endl;
			}
			cout << endl;
		}

		if (num == 91912399) {
			cout<<"�����Դϴ�.!!\n\n";
			break;
		}
		else {
			cout<<"�ٽ� �Է��ϼ���!!\n\n";
			continue;
		}
	}
}

void Level8(void)
{
	int count = 0;char c1[50] = "house";
	char c2[50];
	cout << "����ǥ�� �� ����? (��, �ҹ��ڷ� �ۼ��Ͻÿ�)\n";
	cout<<"33 92 75 83 �� ring\n";
	cout<<"84 13 33 23 �� hero\n";
	cout<<"32 23 43 71 81 �� ?\n";
	while (1) {
		cout<<"��: ";
		cin >> c2;

		count++;
		if (count >= 3) {
			cout << "��Ʈ:  ";
			ifstream r("8����Ʈ.txt", ios_base::out);

			if (r.is_open() == true)
			{
				char str[1000];
				r.getline(str, 1000, '\n');
				cout << str << endl;
			}
			cout << endl;
		}

		if (strcmp(c1, c2) == 0) {
			cout<<"�����Դϴ�.!!\n\n";
			break;
		}
		else {
			cout<<"�ٽ� �Է��ϼ���!!\n\n";
			continue;
		}
	}

}

void Level9(void)
{
	int count = 0;
	int num;
	cout<<"����ǥ�� �� ����?\n";
	cout<<"TV=1   KO=3\n";
	cout<<"DJ=5   ET=?\n";
	while (1) {
		cout<<"��: ";
		cin >> num;
		getchar();
		count++;
		if (count >= 3) {
			cout << "��Ʈ:  ";
			ifstream r("9����Ʈ.txt", ios_base::out);

			if (r.is_open() == true)
			{
				char str[1000];
				r.getline(str, 1000, '\n');
				cout << str << endl;
			}
			cout << endl;
		}

		if (num == 14) {
			cout<<"�����Դϴ�.!!\n\n";
			break;
		}
		else {
			cout<<"�ٽ� �Է��ϼ���!!\n\n";
			continue;
		}
	}
}

void Level10(void)
{
	int count = 0;
	int num;
	cout<<"����ǥ�� �� ���ڴ�?\n";
	cout<<"2  4  6  30 32 34 36 40 42 44\n";
	cout<<"46 50 52 54 56 60 62 64 66 ?\n";

	while (1) {
		cout << "��: ";
		cin >> num;
		getchar();
		count++;
		if (count >= 3) {
			cout << "��Ʈ:  ";
			ifstream r("10����Ʈ.txt", ios_base::out);

			if (r.is_open() == true)
			{
				char str[1000];
				r.getline(str, 1000, '\n');
				cout << str << endl;
			}
			cout << endl;
		}

		if (num == 1000) {
			cout<<"�����Դϴ�.!!\n\n";
			break;
		}
		else
			cout<<"�ٽ� �Է��ϼ���!!\n\n";
	}
}

void Boss(void)
{
	char c[20];

	while (1) {
		cout<<"�츮������ ������? \n";
		cin >> c;
		if (strcmp(c, "����") == 0) {
			cout<<"�����Դϴ�. ��� Ŭ�����ϼ̽��ϴ�!!\n\n����� ������ ������!!!\n\n";
			break;
		}
		else {
			cout<<"�ٽ� �Է��ϼ���!!\n\n";
			continue;
		}
	}
}