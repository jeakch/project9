#include <stdio.h>
int main()
{
	int score;
	printf("请输入成绩:");			         /*屏幕提示语*/
	scanf("%d",&score);			           /*输入百分制的分数*/
	if(score>100||score<0)			       /*分值不合理时显示出错信息*/
		printf("输入数据无意义\n");
	else if(score>=90)		              /*这里的else表示0=<score&&score<=100*/
		printf("优\n");
	else if(score>=80)		              /*这里的else表示0=<score&&score<90*/
    printf("良\n");
	else if(score>=70)		              /*这里的else表示0=<score&&score<80*/
		printf("中\n");
	else if(score>=60)	                /*这里的else表示0=<score&&score<70*/
		printf("及格\n");
	else				                        /*这里的else表示0=<score&&score<60*/
		printf("不及格\n");
	return 0;
}
