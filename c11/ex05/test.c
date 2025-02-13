#include <stdio.h>
#include <stdlib.h>

// 定义运算函数
int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
int divide(int a, int b) { return (b == 0) ? printf("Stop : division by zero\n"), 0 : a / b; }
int mod(int a, int b) { return (b == 0) ? printf("Stop : modulo by zero\n"), 0 : a % b; }

// 结构体存储运算符和对应函数
typedef struct {
    char op;
    int (*func)(int, int);
} t_op;

// 计算函数
int do_op(char *arg1, char *op, char *arg2) {
    int num1 = atoi(arg1);
    int num2 = atoi(arg2);

    // 运算符和函数的映射
    t_op ops[] = {
        {'+', add}, {'-', sub}, {'*', mul},
        {'/', divide}, {'%', mod}, {'\0', NULL} // 结束标志
    };

    // 查找匹配的运算符
    for (int i = 0; ops[i].op; i++) {
        if (ops[i].op == op[0] && op[1] == '\0') { // 确保是单字符
            return ops[i].func(num1, num2);
        }
    }

    return 0; // 无效运算符返回 0
}

int main(int argc, char **argv) {
    if (argc != 4) return 0; // 参数数量错误，不输出任何内容
    printf("%d\n", do_op(argv[1], argv[2], argv[3]));
    return 0;
}

