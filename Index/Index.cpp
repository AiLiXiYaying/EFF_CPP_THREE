<<<<<<< Updated upstream
﻿#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
}
=======
﻿//////////////////////////////////////////////////////////////
//                                                         //
//                                                        //
//                                                       //
//   作者:AILIXIYAYING       修改时间于:2025.1.9日        //                                     
//            #define不能提供任何封装性                   //
//                                                     //
//    要尽量避免使用#define，而使用const，enum替代define  //
//                                                    //
//                                                   //

//1 
#include <iostream>


class A
{
public:
	A();
	~A();
	#define mm 44 //使用#define     //define缺乏封装性                 
	static const int a = 10; //使用const  //可被取址
	enum
	{
		mmmm = 44,
	}; //使用enum        无法取址与define同效
	int xxx[a];    
	int mmm[mmmm];
private:
	
};
const int A::a;

A::A()
{
}

A::~A()
{
}

int main()
{
	A x;
	//x.mm;       //报错
	x.a;          //不报错
	
	//形似函数的宏，可用inline替代。inline函数也具有封装性。
	//直观感受，应注重其封装性，而define由于不具备封装性，仅可在部分场景下使用，追求严谨性，应当使用const，enum来替换define的大部分工作。
}                                                                          

>>>>>>> Stashed changes
