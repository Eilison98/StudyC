// ���� �н� main.c
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a;
	int b, c;
	float fa;
	double da;
	char ch;
	
	a = 10;
	b = a; c = a + 20;
	fa = 3.5f; // float�� �Ǽ��� �Ҵ�
	da = 3.5;
	ch = 'A';

	printf("���� a �� : %d\n", a);
	printf("���� b �� : %d\n", b);
	printf("���� c �� : %d\n", c);
	printf("���� fa �� : %f\n", fa);
	printf("���� da �� : %lf\n", da);
	printf("���� ch �� : %c\n", ch);

	char kch;
	kch = '��';
	printf("���� kch �� : %c\n", kch);

	short sh = -32768;  // 32767 + 1; // overflow  -32768 ~ 32767 
	int in = 2147483647 + 1;
	long ln = 2147483647 + 1;
	long long lln = (2 ^ 63) - 1; // 9223372036854775807 + 1; // 922��...

	printf("���� sh �� : %d\n", sh);
	printf("���� in �� : %d\n", in);
	printf("���� ln �� : %ld\n", ln);
	printf("���� lln �� : %lld\n", lln);

	// ����� ǥ��
	unsigned short ush = 65535 + 1; // ����� 

	printf("���� ush �� : %u\n", ush);

	float fv = 1.234567890123456789f;
	double dv = 1.234567890123456789;

	printf("���� fv �� : %.20lf\n", fv);
	printf("���� dv �� : %.20lf\n", dv);


	return 0;
}