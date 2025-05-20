//��ó����
#include <stdio.h> // �������ϱ��� ��� ���� ���Խ�Ŵ
// stdio.h : standard input & output (ǥ�� �����)

// ��ũ�� ���

#define MAX_VALUE 100

int main() {
	// �ֿܼ� ������ ����ϴ� �Լ�
	printf("�ȳ��ϼ���. C���ð��Դϴ�.\n");

	//
	// ������ �ڷ���
	//

	// ������ ����
	char ch; //char�� ���� ch�� ����(����), 1 ����Ʈ, 2^8������ ���δٸ� �����͸� ǥ��(����)�� �� �ִ�. (-128 ~ 127)
	short n; //2����Ʈ 2^16
	int num; //4����Ʈ 2^32
	long money; //4����Ʈ(8����Ʈ) 2^32
	long long big_number; //8����Ʈ 2^64

	// ���� ������ ����
	unsigned char uch; // 0~255
	unsigned short ush;
	unsigned int un;

	// �Ǽ��� ����
	float pi; //4����Ʈ 
	double ma; //8����Ʈ
	long double real; //8����Ʈ(win64bit ����)

	printf("ch�� ũ�� : %u\n", sizeof(ch));
	printf("n�� ũ�� : %u\n", sizeof(n));
	printf("num�� ũ�� : %u\n", sizeof(num));
	printf("money�� ũ�� : %u\n", sizeof(money));
	printf("big_number�� ũ�� : %u\n", sizeof(big_number));

	printf("float�� ũ�� : %u\n", sizeof(float));
	printf("double�� ũ�� : %u\n", sizeof(double));
	printf("long double�� ũ�� : %u\n", sizeof(long double));

	//
	ch = 127; // ���ͷ�(����, ����, ���ڿ�)
	printf("ch�� �� : %d\n", ch);

	ch = 128;
	printf("ch�� �� : %d\n", ch);

	// ������ �ۼ� ��Ģ
	// 1. ��ҹ��ڸ� �����Ѵ�. Num num�� ���� �ٸ� �����̴�.
	// 2. ���ĺ� �빮��, �ҹ���, ����, _(�����)�� ����� �� �ִ�.
	// 3. Ű���带 ����� �� ����.
	// 4. ���ڰ� ���� ó���� ���ü� ����.

	// ������ �ۼ��� ���� ���� ����
	// 1. �������� ��� �ҹ��ڷθ� �����Ѵ�.
	// 2. ������ ���� � �ڷᰡ ����Ǵ��� ���߰� �����ϵ��� �ۼ�.
	// 3. �ΰ� �̻��� �ܾ ����Ͽ� �ۼ��Ҷ� ����ٷ� �̾����. my_data, myData

	// ASCII code
	ch = 'a'; //���� ���ͷ��� ����
	ch = 97; //���� ���ͷ��� ����
	printf("ch�� �� : %d\n", ch);
	printf("ch�� �� : %c\n", ch);

	// �ɺ��� ���(Symbolic Constant)
	const float PI = 3.14F; // ���� ����� �ٲܼ� ����, ���� ��ȣ�ϱ� ���� ���
	ch = MAX_VALUE;

	return 0;
}