#include<stdlib.h>
#include<stdio.h>
#include<string>
using std::string;
int main() {
	char inpstr[1000];
	system("cd D:/video");
	printf("%s", "������Ƶ��ȡ����վ��");
	scanf_s("%s", &inpstr);
	inpstr = "you-get " + inpstr;
	system(inpstr);

	return 0;
}