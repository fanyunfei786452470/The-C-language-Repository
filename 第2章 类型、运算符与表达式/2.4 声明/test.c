/* 声明 */



/*-----------------------声明------------------------*/
/* 所有的变量都必须先声明后使用，一个声明置顶一种变量类型，后面所带的变量表可以包含一个或者多个该类型的变量*/
int lower,upper,step；
char c, line[100];
/* 
   等价于下面的写法
   int lower;
   int upper;
   int step;
   char c;
   char line[100];
*/


/*-----------------------初始化----------------------*/
char esc = '\\';
int i = 0;
#define MAXLINE 1000
int limit = MAXLINE + 1;
float eps = 1.0e-5;

/*---------------------const修饰---------------------*/
const double e = 2.71828182845905;
const char msg[] = "warning";
/* const限定符也可以配合数组参数使用，它表明函数不能修改数组元素的值*/
int strlen(const char []);

