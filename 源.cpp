#include<cstdio>
#include<iostream>
#include<ctime>
int id4();
int id3();
int id1();
void main() {

	int n = 0, count = 0;  printf("\nСѧ������������ϰ���\n");
	int DDX = 0;
	printf("�����������꼶��");
	std::cin >> DDX;
	int ch = 0;
	while (1)
	{
		if (count == 20)
		{
			printf("��ϲ����20����ϰ��������%d��! \n", n);
			printf("\t1.������ϰ\n\t2.�˳�");
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

	int ranswer = 0;   //��ȷ��  
	int uanswer = 0;   //�û�����Ĵ�  
	int t = 0, n = 0;    //��ʱ����  
	char op = 0;       //�������  
	int num1 = 0;    //������1  
	int num2 = 0;    //������2
	srand(time(NULL));  //��ʼ�������  
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
			printf("\t����ȷ\n");
			return 1;
		}
		else
		{
			printf("\t�𰸴���\n");
			printf("���Ϊ%d\n", ranswer);
			return 0;
		}
}
int id3()
{
	int ranswer = 0;   //��ȷ��  
	int uanswer = 0;   //�û�����Ĵ�  
	int t = 0, n1 = 0, n2 = 0;   //��ʱ����  
	char op = 0;       //�������  
	char op2 = 0;
	int num1 = 0;    //������1  
	int num2 = 0;    //������2
	int num3 = 0;    //������3
	srand(time(NULL));  //��ʼ�������  
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
		printf("\t����ȷ\n");
		return 1;
	}
	else
	{
		printf("\t�𰸴���\n");
		printf("���Ϊ%d\n", ranswer);
		return 0;
	}
}
int id1()
{
	int ranswer = 0;   //��ȷ��  
	int uanswer = 0;   //�û�����Ĵ�  
	int t = 0, n = 0;    //��ʱ����  
	char op = 0;       //�������  
	int num1 = 0;    //������1  
	int num2 = 0;    //������2
	srand(time(NULL));  //��ʼ�������  
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
		printf("\t����ȷ\n");
		return 1;
	}
	else
	{
		printf("\t�𰸴���\n");
		printf("���Ϊ%d\n", ranswer);
		return 0;
	}
}