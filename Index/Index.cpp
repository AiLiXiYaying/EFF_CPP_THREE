//////////////////////////////////////////////////////////////
//                                                         //
//                                                        //
//                                                       //
//   作者:AILIXIYAYING       修改时间于:2025.1.8日        //                                     
//                deflult构造函数 特点                   //
//                                                     //
//      所谓default构造函数，就是可被调用而不带任何实参者  //
//                                                    //
//                                                   //

//1
#include <iostream>

typedef class A
{
public:
	explicit A(int x,int y);
	~A();

private:
	int x, y;
}xx;

explicit A::A(int x = 5,int y = 6)
{
	this->x = x;
	this->y = y;
}

A::~A()
{
}


int main()
{
    std::cout << "Hello World!\n";
	xx a();//                                             是default构造函数（被调用而不带任何实参）
}

//2

//#include <iostream>
//
//typedef class A
//{
//public:
//	explicit A(int x, int y);
//	~A();
//
//private:
//	int x, y;
//}xx;
//
//explicit A::A(int x, int y)
//{
//	this->x = x;
//	this->y = y;
//}
//
//A::~A()
//{
//}
//
//
//int main()
//{
//	std::cout << "Hello World!\n";
//	xx a(5,6);     //                                             非default构造函数（被调用却必须带实参）
//}

//3
//#include <iostream>
//
//typedef class A
//{
//public:
//	explicit A();
//	~A();
//
//private:
//	int x, y;
//}xx;
//
//explicit A::A()
//{
//}
//
//A::~A()
//{
//}
//
//
//int main()
//{
//	std::cout << "Hello World!\n";
//	xx a();//                                             是default构造函数（被调用而不带任何实参）
//}