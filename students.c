#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//�����˵���ҳ��
void MakeMenu()
{
	printf("---------ѧ������ϵͳ--------\n");
	printf("\t0.�˳�����\n");
	printf("\t1.���ҹ���\n");
	printf("\t2.���ӹ���\n");
	printf("\t3.ɾ������\n");
	printf("\t4.�޸Ĺ���\n");
	printf("\t5.�������\n");	

}

//������������
void KeyDown()
{
	//���û��������֣�ѡ����
	int userkey = 0;
	printf("���������֣�");
	scanf_s("%d", &userkey);

	//���ݲ�ͬ��ѡ����빦��
	switch (userkey)
	{
	case 0:
		printf("---------�˳�����----------");
		system("pause");
		exit(0);
		break;
	case 1:
		printf("---------���ҹ���----------");
		break;
	case 2:
		printf("---------���ӹ���----------");
		break;
	case 3:
		printf("---------ɾ������----------");
		break;
	case 4:
		printf("---------�޸Ĺ���----------");
		break;
	case 5:
		printf("---------�������----------");
		break;
	default:
		printf("�����������������");
		break;

	}

}


int main() 
{
	while (1)
	{
		MakeMenu();
		KeyDown();
		system("pause");//ϵͳ��ͣ�������������
		system("cls");//����

	}


	return 0;
}