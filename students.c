#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//制作菜单主页面
void MakeMenu()
{
	printf("---------学生管理系统--------\n");
	printf("\t0.退出功能\n");
	printf("\t1.查找功能\n");
	printf("\t2.增加功能\n");
	printf("\t3.删除功能\n");
	printf("\t4.修改功能\n");
	printf("\t5.浏览功能\n");	

}

//制作交互功能
void KeyDown()
{
	//让用户输入数字，选择功能
	int userkey = 0;
	printf("请输入数字：");
	scanf_s("%d", &userkey);

	//根据不同的选择进入功能
	switch (userkey)
	{
	case 0:
		printf("---------退出功能----------");
		system("pause");
		exit(0);
		break;
	case 1:
		printf("---------查找功能----------");
		break;
	case 2:
		printf("---------增加功能----------");
		break;
	case 3:
		printf("---------删除功能----------");
		break;
	case 4:
		printf("---------修改功能----------");
		break;
	case 5:
		printf("---------浏览功能----------");
		break;
	default:
		printf("输入错误，请重新输入");
		break;

	}

}


int main() 
{
	while (1)
	{
		MakeMenu();
		KeyDown();
		system("pause");//系统暂停，按任意键继续
		system("cls");//清屏

	}


	return 0;
}