/*------------------------基本类型-------------------------------------*/
/*
  C语言只提供了下面几种基本数据类型：
  char        字符型，占用一个字节，可以存放本地字符集中的一个字符
  int         整形，通常反映了所有机器中整数的最自然长度
  float       单精度浮点型
  double      双精度浮点型
*/


/*-------------------------short和long修饰------------------------------*/
/*
   除了上面的基本类型，还可以在这些基本类型的前面加上一些限定符，例如用short与long来限定整形
 */
   short int sh;
   long  int counter;
 /* 其中的关键字int可以省略，通常很多人也习惯这么做*/



/*-------------------------short，int，long类型--------------------------*/
/*
    short 与long的引入可以为我们提供满足实际需要的不同长度的整形数
    short：通常为16位
    int：通常代表特定机器中整数的自然长度，可以为16位或者32位
    long：至少为32位

    注意：short类型不得长度int类型，int类型不得长于long类型
*/


/*-------------------------signed和unsigned修饰的类型---------------------*/
/*
    signed 与unsigned可用于限定char类型或者任何整形，例如unsigned类型的数总是正值并遵守算珠模2的n次幂定律（n为该类型占用的位数，例如unsigned char 的取值范围为0~255），signed修饰的类型
    signed char 类型变量的取值范围则为-128~127，对于不带限定符的char类型对象是否带符号则取决于具体的机器，但可打印字符总是郑智
*/


/*--------------------------long double类型------------------------------*/
/*
    long double 类型表示高精度的浮点数，取决于具体的机器
    float、double、long double类型可以表示相同的长度，也可以表示两种或者三种不同的长度
*/   
