#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	printf("�ȳ��ϼ���\n");
	printf("�ȳ�\n�ϼ���\t");
	printf("tab��ŭ\t�̵���\n");
	printf("Hello C\n");
	printf("\rWelcome C\n");
	printf("\b\bC++\n");
	printf("��⵵ \"������\"\n");
	printf("c:\\test.txt\n");

	// ���� ����
	int age = 10;
	char ch = 'k';
	short kor = 96;
	float pi = 3.14F;
	double math = 42.195;

	// ���� ���
	printf("���̴� %d�� �Դϴ�\n", age);
	printf("%corea\n", ch);
	printf("�������� : %hd\n", kor);
	printf("PI : %f\n", pi);
	printf("PI : %4.2f\n", pi);
	printf("marathon : %6.1g\n", math);
	printf("marathon : %.3f\n", math);
	printf("%5d\n", age);
	printf("%-5d\n", age);

	// 16���� ���
	printf("10 = %X\n", age);

	// %��ȣ�� ���
	printf("���� %ld%%\n", kor);

	// %s : ���ڿ� ���
	printf("�� �̸��� %s �Դϴ�\n", "ȫ�浿");

	// %p : Ư�� ������ �޸� �ּҸ� ����Ѵ�.
	printf("ch�� �ּ� : %p\n", &ch); // & : �ּ� ������, �����տ� �ܵ����� ���� ���

	printf("�� �̸��� %s�̰�, ���̴� %d�� �Դϴ�.","ȫ�浿",age);

	printf("\n\n=====================================\n");

	// ǥ�� �Է� �Լ� : scanf
	printf("���̸� �Է��ϼ��� >>> ");
	scanf("%d", &age); // ������ ������ �Ѱ��� �Է¹޴´�.
	printf("�� �̸��� %s�̰�, ���̴� %d�� �Դϴ�.\n", "ȫ�浿", age);

	float height;
	printf("����� Ű�� �Է��ϼ��� >>> ");
	scanf("%f", &height);
	printf("�Է¹��� Ű�� %.2fcm�Դϴ�.\n",height);

	printf("���ĺ� ���ڸ� �Է��ϼ��� >>> ");
	scanf("%c", &ch);
	printf("�Էµ� ���ĺ��� %c�Դϴ�.\n", ch);

	printf("���������� �Է��ϼ��� >>> ");
	scanf("%hd", &kor);
	printf("�Էµ� ���������� %d���Դϴ�\n", kor);

	short eng;
	short history;
	printf("����,����,���� ������ �Է��ϼ��� >>>");
	scanf("%hd %hd %hd", &kor, &eng, &history);
	printf("����:%d��, ����:%d��, ����:%d��\n", kor, eng, history);

	return 0;
}
