//2015.11.10 ����4.2 ��˳����Ϊ���Ĵ洢�ṹ���һ���㷨��s�г��ֵĵ�һ�����������ͬ�ַ����ɵ�ƽ̨
#include<stdio.h>
#include<string.h>
#include<malloc.h>
#define MaxSize 100
typedef struct
{
	char data[MaxSize];
	int length;
}SqString;
void StrAssign(SqString &s,char cstr[])
{
	int i;
	for(i=0;cstr[i]!='\0';i++)
		s.data[i]=cstr[i];
	s.length=i;
}
void LongestString(SqString s,int index,int &max)
{
	int length=1,i=0,start=0;
	index=0,max=0;
	while(i<s.length-1)
		if(s.data[i]==s.data[i+1])
		{
			i++;
			length++;
		}
		else
		{
			if(max<length)
			{
				max=length;
				index=start;
			}
			i++;
			start=i;
			length=1;
		}
	printf("��s�г��ֵĵ�һ�����������ͬ�ַ����ɵ�ƽ̨�ĳ���Ϊ%d\n",max);
	printf("��s�г��ֵĵ�һ�����������ͬ�ַ����ɵ�ƽ̨���±�Ϊ%d\n",index);
}
int main()
{
	int index;
	int max;
	SqString s;
	char cstr[MaxSize]="asdghccccccuiwetyiaaaaaaaaa";
	StrAssign(s,cstr);
	LongestString(s,index,max);
}
