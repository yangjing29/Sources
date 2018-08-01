#include<STC8.H>    //包含 STC8 系列单片机头文件,在软件安装路径 Keil\C51\INC\STC\ 目录下

sbit LED = P2^0;    //定义一个LED位
void main()         //程序入口主函数
{
    LED = 0;        //LED赋值0，点亮LED
}