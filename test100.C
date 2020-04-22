//题目：有五个学生，每个学生有3门课的成绩，从键盘输入以上数据（包括学生号，姓名，三门课成绩），计算出平均成绩，况原有的数据和计算出的平均分数存放在磁盘文件"stud"中
//
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int Id;
	char Name[50];
	int Math;
	int English;
	int Chinese;
	int Averageg;
}Student;

int main()
{
	FILE * fp;
	Student stu[5];//创建结构数组
	printf("输入5个学生的学生号,姓名,三门课成绩信息(空格隔开):\n");
	for (int i = 0;i < 5;i++)
	{
		scanf("%d %s %d %d %d",&(stu[i].Id),stu[i].Name,&(stu[i].Math),&(stu[i].English),&(stu[i].Chinese));//注意用括号括起来,字符串的不用括,本来就是地址
		stu[i].Averageg = (stu[i].Math + stu[i].English + stu[i].Chinese) / 3;
	}

	if ((fp = fopen("stud","w")) == NULL)
	{
		printf("error:cannot open file\n");
		exit(0);//这里必须要加标准输出头文件,不然会报未定义,system("pause");的命令同理
	}
	for(int j = 0;j < 5;j++)
		fprintf(fp,"%d %s %d %d %d %d\n",stu[j].Id,stu[j].Name,stu[j].Math,stu[j].English,stu[j].Chinese,stu[j].Averageg);//这里fprintf函数有两个参数
	fclose(fp);
	return 0;
}
