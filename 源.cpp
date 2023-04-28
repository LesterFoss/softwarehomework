#include<cstdio>
#include<iostream>
#include<ctime>
int id4();
int id3();
int id1();
void main() {

	int n = 0, count = 0;  printf("\n小学生四则运算练习软件\n");
	int DDX = 0;
	printf("请输入您的年级：");
	std::cin >> DDX;
	int ch = 0;
	while (1)
	{
		if (count == 20)
		{
			printf("恭喜你在20道练习里做对了%d题! \n", n);
			printf("\t1.继续练习\n\t2.退出");
			std::cin >> ch;
			if (ch == 2)
			{
				break;
			}
		}
		if (DDX >= 4)
		{
			n += id4();
			
		}
		else if (DDX == 1)
		{
			n += id1();
		}
		else if (DDX == 3)
		{
			n += id3();
			
		}
		count++;
	}

}

int id4()

{

	int ranswer = 0;   //正确答案  
	int uanswer = 0;   //用户输入的答案  
	int t = 0, n = 0;    //临时变量  
	char op = 0;       //运算类别  
	int num1 = 0;    //操作数1  
	int num2 = 0;    //操作数2
	srand(time(NULL));  //初始化随机数  
	num1 = rand() % 1000;   
	num2 = rand() % 1000;
	n = rand() % 4 + 1;
	switch (n)
	{
		case 1:    op = '+';    break;

		case 2:    op = '-';    break;

		case 3:    op = '*';    break;

		case 4:    op = '/';    break;

	}


	if ((op == '-') && (num1 < num2))
	{
		t = num1;
		num1 = num2;
		num2 = t;
	}

	if (op == '/')

	{

		if (num2 == 0)

		{
			num2 = 1;
		}

		num1 = num1 * num2;

	}

		printf("   %d%c%d= ", num1, op, num2);

		std::cin >> uanswer;


		switch (op)
		{
			case '+':   ranswer = num1 + num2;   break;
			case '-':   ranswer = num1 - num2;   break;
			case '*':   ranswer = num1 * num2;   break;
			case '/':   ranswer = num1 / num2;   break;
		}
		if (uanswer == ranswer)
		{
			printf("\t答案正确\n");
			return 1;
		}
		else
		{
			printf("\t答案错误\n");
			printf("结果为%d\n", ranswer);
			return 0;
		}
}
int id3()
{
	int ranswer = 0;   //正确答案  
	int uanswer = 0;   //用户输入的答案  
	int t = 0, n1 = 0, n2 = 0;   //临时变量  
	char op = 0;       //运算类别  
	char op2 = 0;
	int num1 = 0;    //操作数1  
	int num2 = 0;    //操作数2
	int num3 = 0;    //操作数3
	srand(time(NULL));  //初始化随机数  
	num1 = rand() % 50;
	num2 = rand() % 50;
	num3 = rand() % 50;
	n1 = rand() % 2 + 1;
	n2 = rand() % 2 + 1;
	switch (n1)
	{
	case 1:    op = '+';    break;
	case 2:    op = '-';    break;
	}
	switch (n2)
	{
	case 1:    op2 = '+';    break;
	case 2:    op2 = '-';    break;
	}
	printf("   %d%c%d%c%d= ", num1, op, num2,op2,num3);

	std::cin >> uanswer;


	if (n1 == 1 && n2 == 1)
	{
		ranswer = num1 + num2 + num3;
	}
	else if (n1 == 1 && n2 == 2)
	{
		ranswer = num1 + num2 - num3;
	}
	else if (n1 == 2 && n2 == 1)
	{
		ranswer = num1 - num2 + num3;
	}
	else if (n1 == 2 && n2 == 2)
	{
		ranswer = num1 - num2 - num3;
	}
	if (uanswer == ranswer)
	{
		printf("\t答案正确\n");
		return 1;
	}
	else
	{
		printf("\t答案错误\n");
		printf("结果为%d\n", ranswer);
		return 0;
	}
}
int id1()
{
	int ranswer = 0;   //正确答案  
	int uanswer = 0;   //用户输入的答案  
	int t = 0, n = 0;    //临时变量  
	char op = 0;       //运算类别  
	int num1 = 0;    //操作数1  
	int num2 = 0;    //操作数2
	srand(time(NULL));  //初始化随机数  
	num1 = rand() % 20;
	num2 = rand() % 20;
	n = rand() % 2 + 1;
	switch (n)
	{
		case 1:    op = '+';    break;
		case 2:    op = '-';    break;
	}

	printf("   %d%c%d= ", num1, op, num2);

	std::cin >> uanswer;


	switch (op)
	{
	case '+':   ranswer = num1 + num2;   break;
	case '-':   ranswer = num1 - num2;   break;
	}
	if (uanswer == ranswer)
	{
		printf("\t答案正确\n");
		return 1;
	}
	else
	{
		printf("\t答案错误\n");
		printf("结果为%d\n", ranswer);
		return 0;
	}
}