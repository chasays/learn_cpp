# C++ 基础
## 1. 定义一个常量
#define DAY 7
const month_1 = 24
变量命名规则和python一样，数字字母、下划线，但是不能以数字开头

## 2. 数据类型 short、int、long、long long
数据类型长度：2 4 4|8， 8|16
用sizeof 查看占用的字节空间

## 3. float、double
默认是double， float num = 3.14f;记得加一个f ，科学计数3e2 

## 4. 字符(串) 
char 用单引号，只能有一个字母，最终是ASCII码存储
水平制表符\t  \n \\

C风格：char str[] = "string"
C++: string str = "hello world" ,记得#include <string>

## 5. 布尔
非0就是 true， 只有0才是false

## 6. 2个整数相处任然是一个整数

## 7. 取模运算，就是求余数
小数不支持，，除数不能为0

## 8. 三目运算可以直接赋值

a<b?a:b = 10”

## 9. switch用法
只能跟一个数字和字符
每一个去死，语句后面会加一个break如果没加后面的都会执行。
和if的区别是 结构清晰，执行速度快。

## 10. do…while 先执行一遍do的语句

## 11. 指针

定义和访问,：
int a = 10;
int * p = &a; //定义
*p = 11；//访问

const (const后面的就不能修改，这么来记忆)
const int * p = &a; // 属于常量指针，只能修改指向，不能修改值
*p = 10; //error
p = &b; //pass

int * const p = &a; //属于指针常量，可以修改值，但是不能修改指向
* p = 10; //pass
p = &b; //error

const int * const p = &a; // 不能修改指向和值
* p = 10; //error
p = &b; //error

如果不想修改实参，就用值传递。如果想修改实参，就用地址传递

## 12. 结构体
定义结构体的时候struct不能省略
创建结构体的时候，struct可以省略、结构体的变量用‘.’来访问
创建有三种方式：
struct Student s1；
Student s2 = { xx,xx,xx}
struct Student {
xxx,x,x
}s3;

## 13. 结构体指针
// 结构体指针 ，
// 对象用的点访问， 指针用->访问熟悉
Student * p = &stuA[0];
cout << p->age << <<p->name << endl;

## 14. 3个老师、每个老师有5个学生；老师有姓名+5个学生的数组；学生有姓名和分数
打印出每个老师和学生的信息

srand((unsigned int)time(NULL)); rand() % 60 + 40;  随机
