/*
 * =====================================================================================
 *
 *       Filename:  const-test.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  07/05/2014 18:03:28
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */


#include<iostream>
using namespace std;


/*
 * =====================================================================================
 *        Class:  MyTestClass
 *  Description:  
 * =====================================================================================
 */
namespace TestClass{
class MyTestClass
{
	public:
		/* ====================  LIFECYCLE     ======================================= */
		MyTestClass():number_1_(1),number_2_(2){std::cout<<"this is the constructor"<<std::endl;};  /* constructor */
		~MyTestClass(){std::cout<<"this is the destructor"<<std::endl;}
		/* ====================  ACCESSORS     ======================================= */
		int get_number_1()const{return number_1_;}
		int get_number_2()const{return number_2_;}
		/* ====================  MUTATORS      ======================================= */
		void set_number_1(const int & para1){number_1_=para1;}
		void set_number_2(const int & para2){number_2_=para2;}

	private:
		/* ====================  DATA MEMBERS  ======================================= */
		int number_1_;
		int number_2_;

}; /* -----  end of class MyTestClass  ----- */
void TestFunc(const MyTestClass& para){
	using std::cout;
	std::cout<<para.get_number_1()<<endl;
}

}

using namespace TestClass;


int main ( int argc, char *argv[] )
{
		TestClass::MyTestClass* pointer = new TestClass::MyTestClass();
		std::cout<<"hahahahah"<<std::endl;
		std::cout<<pointer->get_number_2()<<std::endl;
		TestClass::TestFunc(*pointer);
		std::cout<<"hahahahah"<<std::endl;
		return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
