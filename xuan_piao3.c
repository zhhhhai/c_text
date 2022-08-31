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
	
	//遍历扫描输入选民
	for(i=0; i<len; i++){
		xm[i].tickets = 0;
		printf("请输入%d个选民的名字\n",i+1);
		scanf("%s",xm[i].name);
	}
	//唱票环节
	for(i=0; i<total; i++){
		mark = 0;
		printf("请输入你的票投给谁\n");
		memset(tmpname, '\0', sizeof(tmpname));
		scanf("%s",tmpname);
		for(j=0; j<len; j++){
			if(strcmp(tmpname,xm[j].name) == 0){
				xm[j].tickets++;
				mark = 1;
			}
			
		}
		if(mark == 0){
			printf("无此候选人，此票为期票\n");
		}
	}
	//公布结果
	for(i=0; i<len; i++){
		printf("姓名:%s  票数:%d\n",xm[i].name, xm[i].tickets);
	}
	max = xm[0];
	for(i=1; i<len; i++){
		if(max.tickets < xm[i].tickets){
			max = xm[i];
		}
	}
	printf("%s以%d票当选!",max.name, max.tickets);
	return 0;
}