#include <stdio.h>
#include <string.h>

struct XuanMin
{
	char name[20];
	int tickets;
};

int main()
{
	struct XuanMin xm[3];
	struct XuanMin max;
	int i;
	int j;
	int len;
	int total = 5;
	char tmpname[20];
	int mark;
	len = sizeof(xm)/sizeof(xm[0]);
	
	//����ɨ������ѡ��
	for(i=0; i<len; i++){
		xm[i].tickets = 0;
		printf("������%d��ѡ�������\n",i+1);
		scanf("%s",xm[i].name);
	}
	//��Ʊ����
	for(i=0; i<total; i++){
		mark = 0;
		printf("���������ƱͶ��˭\n");
		memset(tmpname, '\0', sizeof(tmpname));
		scanf("%s",tmpname);
		for(j=0; j<len; j++){
			if(strcmp(tmpname,xm[j].name) == 0){
				xm[j].tickets++;
				mark = 1;
			}
			
		}
		if(mark == 0){
			printf("�޴˺�ѡ�ˣ���ƱΪ��Ʊ\n");
		}
	}
	//�������
	for(i=0; i<len; i++){
		printf("����:%s  Ʊ��:%d\n",xm[i].name, xm[i].tickets);
	}
	max = xm[0];
	for(i=1; i<len; i++){
		if(max.tickets < xm[i].tickets){
			max = xm[i];
		}
	}
	printf("%s��%dƱ��ѡ!",max.name, max.tickets);
	return 0;
}