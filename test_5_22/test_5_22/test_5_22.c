#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//�ṹ��-һЩֵ�ļ��ϣ���ֵ�����Ϳ��Բ�ͬ

////�ṹ�崫��
//
//struct B
//{
//	short c;
//	char a;
//};
//
//struct stu
//{
//	struct B sb;
//	char name[20];
//	int age;
//	char ID[20];
//};
//
//void print1(struct stu t)
//{
//	printf("%d %c %s %d %s\n", t.sb.c, t.sb.a, t.name, t.age, t.ID);
//}
//
//void print2(struct stu* p)
//{
//	printf("%d %c %s %d %s\n", p->sb.c, p->sb.a, p->name, p->age, p->ID);
//}
//
//int main()
//{
//	struct stu s = { { 20, 'w'}, "����", 20, "2020" };
//
//	print1(s);//��ֵ����
//	print2(&s);//��ַ����
//
//	return 0;
//}

////�ṹ�������,����
//
//struct B
//{
//	char c;
//	short s;
//};
//
//struct stu
//{
//	//�ṹ�ĳ�Ա����
//	struct B sb;//�ڽṹ���еĳ�Ա�����������ṹ��
//	char name[20];
//	int age;
//	char ID[20];
//};//si,s2;si,s2Ҳ�ǽṹ���������ȫ�ֵ�
// //����
//
//int main()
//{
//	struct stu s = { {'w', 2 }, "����", 20, "2020" };//���󣬾ֲ�����
//
//	printf("%c\n", s.sb.c);
//	printf("%s\n", s.name);
//
//	struct stu* ps = &s;
//
//	printf("%c\n", (*ps).sb.c);
//	printf("%c\n", ps->sb.c);
//	//ָ���ü�ͷ
//
//	return 0;
//}