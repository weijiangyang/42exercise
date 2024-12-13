// &nbr is the pointer of int nbr;
// $*&nbr is the value of this variable of which the pointer is $nbr
// 
// C语言的指针
// & : 获取变量的地址， 称为"取地址运算符"
// * : 获取某地址所对应的值，称为"简介运算符" 或 "取消引用运算符"
// 指针声明格式:"变量类型  *变量名" 或  "变量类型* 变量名" eg: int *ptr;
// 声明一个指针后，一定要对其初始化， 为NULL 或 某个变量的地址
// 用 *指针变量 可以访问和修改这个指针变量所指向的变量值
// 
// 可以通过修改指针变量所指向的变量值， 来改变变量的值。 
// 
// 指针的最大作用是构造数据结构
// 使用指针把不连续的内存空间连接到一起
// 例如最简单的数据结构链表 : 非连续，非顺序的存储结构, 由一些节点组成， 每个节点有两个组成部分， 分别是数据域和指针域。数据域用来存储相应的数据，指针域用来存储下一个节点的地址。 这些节点通过指针连接之后就形成了链表。 

// :'<,'>s/^/\/\/ / 将数行标为解释行

// 例如
#include <stdio.h>

struct ListNode{
int val;
struct ListNode *next;
};

int main(){
	struct ListNode a, b, c, d, e;
	
	a.val = 1;
	b.val = 2;
	c.val = 3;
	d.val = 4;
	e.val = 5;
 

	a.next = &b;
	b.next = &c;
	c.next = &d;
	d.next = &e;
	e.next = NULL;
	
	struct ListNode *head = &a;
	while (head)
		{
			printf("val = %d address = %p next = %p\n", head->val, head,head->next);
			head = head->next;
		}
			
}

// 存储指针地址的指针是指针的指针。 使用 *ptr 指向普通变量， 使用**ptr 指向指针变量，使用***ptr指向**ptr
