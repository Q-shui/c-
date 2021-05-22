#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//结构体-一些值的集合，但值的类型可以不同

////结构体传参
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
//	struct stu s = { { 20, 'w'}, "张三", 20, "2020" };
//
//	print1(s);//传值调用
//	print2(&s);//传址调用
//
//	return 0;
//}

////结构体的声明,访问
//
//struct B
//{
//	char c;
//	short s;
//};
//
//struct stu
//{
//	//结构的成员变量
//	struct B sb;//在结构体中的成员可以是其他结构体
//	char name[20];
//	int age;
//	char ID[20];
//};//si,s2;si,s2也是结构体变量，是全局的
// //类型
//
//int main()
//{
//	struct stu s = { {'w', 2 }, "张三", 20, "2020" };//对象，局部变量
//
//	printf("%c\n", s.sb.c);
//	printf("%s\n", s.name);
//
//	struct stu* ps = &s;
//
//	printf("%c\n", (*ps).sb.c);
//	printf("%c\n", ps->sb.c);
//	//指针用箭头
//
//	return 0;
//}