#include <stdio.h>
/*
�Լ� ��� ��Ģ
1. ȣ���ϱ� ���� ������ �Լ��� ���ǵǾ� �־���Ѵ�
2. �Լ��� ȣ���� ���� ���ǵ� ���İ� �����ϰ� �����ϰ� ȣ���ؾ��Ѵ�
3. �� �� ������ �ۼ� ��Ģ�� �����ϰ� �����Ѵ�
4. �Լ��� �ٸ� �Լ� ���ο� ���Ե� �� ����. �ݵ�� ���������� �����ؾ� �Ѵ�

*/

//�Լ��� ����ϴ� ���� ū ������ �ڵ��� ����(���꼺�� ���δ�, Productivity)

/*
�Լ��� �����ϴ� ���
�Լ���(�ڷ���) �Լ���( [�Ű�����1, �Ű�����2, ...] ){ }


�Ű������� �ٸ� ��: Parameters, Arguments, �μ�, ����

*/

//Define a function (�Լ��� ����)
int add_number(int n1, int n2)

{
	return n1 + n2; //return �Լ��� ó���ϰ� ����� ȣ��η� ��ȯ�ϴ� ���
}


//void: ��ȯ���� ���� , ȣ���� �ʿ� ����� ��ȯ���� �ʴ´�

void display_number(int n)
{
	printf("�Ű�����: %d\n", n);
}

float get_pi()
{
	return 3.141592F;
}

int multiply(int n1, int n2)
{
	int result = 0;
	for (int i = 0; i < n2; i++)
	{
		result = add_number(result, n1);
	}
	return result;
}

//1��
// 1���� n������ ���� ���Ͽ� ��ȯ�ϴ� �Լ��� �����ϰ� main()�Լ����� 100�� �Է��Ͽ� ȣ���� �� �� ����� ����Ͻÿ�

//1+2+3+4+...n=???
int a(int n)

{
	int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		sum += i;
	}
	return sum;

}
//2��
//������ float �� �Է��ϸ� ���� ���� ���� ���ϴ� �Լ��� �����ϼ��� 
//scanf()�� ��������ʰ� �Ű������� �������� �Է¹޵��� �Լ��� ����

float ci(float r)
{
	return get_pi() * r * r;

}



int main()
{
	//������ ������ [ = �ʱ�ȭ�� �� ];
	//Call a function(�Լ��� ȣ��)
	int n = add_number(10, 20); //add_number()�Լ��� ȣ���ϰ� �� ����� n�� �����Ѵ�
	printf("n=%d\n", n);

	n = add_number(30, 5); //add_number()�Լ��� ȣ���ϰ� �� ����� n�� �����Ѵ�
	printf("n=%d\n", n);


	//int n1;
	//int n2;
	//scanf("%d", &n1);

	//n = add_number(n1, n2);

	display_number(50);

	printf("����: %.4f\n", get_pi());

	printf("%d\n", multiply(10, 5));

	//1��
	printf("1���� 100������ ��: %s\n", a(100));
	//2��




	return 0;
}
