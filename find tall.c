#include<stdio.h>
int father() {
	int a;//��Ʈ 
	int j;//��ġ 
	printf("�ƺ�Ű�� ��Ʈ�� ��ġ�� �� �Է�\n "); 
	scanf_s("%d %d",&a,&j);
	printf("�ƺ�Ű�� %d��Ʈ %d��ġ�Դϴ�\n", a, j);//�ƺ��� �� ��Ʈ �� ��ġ ������ ���� 
	return a * 12 + j;//��ġ������ �� ȯ 
}//�ƺ� Ű�� �޴� �Լ� 

int mother() {
	int b;//��Ʈ 
	int k;//��ġ 
	printf("����Ű�� ��Ʈ�� ��ġ�� �� �Է�\n");
	scanf_s("%d %d", &b, &k);
		printf("����Ű�� %d��Ʈ %d��ġ�Դϴ�\n", b, k);
	return b * 12 + k;//��ġ������ ��ȯ 
}//����Ű�� �޴� �Լ� 

char kidgen() {
	int d; 
	printf("���̼����� 1.���� or 2.����?\n");
		scanf_s("%d",&d);
	return d;
}//������ ������ �޴� �Լ� 

int boy(int f, int g)//�ƺ�Ű ����Ű�� ���޹��� 
{
	int a1;//����� �޾��� 
	a1 = ((f * 13 / 12) + g) / 2;
	return a1;
}//���̰� ������ ��� Ű ���  

int girl(int h, int i)//�ƺ�Ű�� ����Ű�� ���޹��� 
{
	int a2;
	a2 = ((h * 12 / 13) + i) / 2;
	return a2;//����� �޾��� 
}//���̰� ������ ���  Ű ��� 

void ans(int ak) {
	int pp;
	int al;
	pp = ak % 12;//��ġ�� ��ü ��ġ�� 12�� ���� ������ �� 
	al = ak / 12;//��Ʈ�� ��ü ��ġ�� 12�� ���� �� 
	printf("%d feet %d meter\n", al, pp);
}//��ġ�� �s ��Ʈ �� ��ġ�� ������ ǥ�����ִ� �Լ� 

int main() {
	int fa;//�ƺ� Ű 
	int eag;//���� �Ұ����� ���������� �޴� ���� 
	int ch;//���� Ű ����� ��� ���� �޴� ���� 
	int mo;//���� Ű 
	int sekid;//���� ���� 
	do {

		do {
			sekid = kidgen();
		} while (sekid != 1&&sekid != 2);//���� ������ �ùٸ��� �Է��� �� ���� �ݺ� 
											 //������ ���� �Է� 
		mo = mother();//���� Ű 
		fa = father();//�ƺ� Ű 
		if (sekid == 1)
		{
			ch = boy(fa, mo);
		}//���̰� ������ ����� Ű 
		else if (sekid == 2)
		{
			ch = girl(mo, fa);
		}//���̰� ������ ����� Ű 
		printf("����Ű��?\n");
		ans(ch);//�� ��Ʈ ����ġ���� ���� ��� 
		printf("�Դϴ�\n");
		printf("�����Ͻðڽ��ϱ�?1. y or2. n\n");
		scanf_s("%d", &eag);
		
		} while (eag == 2);
	return 0;
}