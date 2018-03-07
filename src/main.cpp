
#include <iostream>
#include <value.h>
#include <object.h>
#include <array.h> 
#include <typeinfo>

using namespace gc_performance;


int main(int argc, char const *argv[]) {
  
  array* v = new array();
  int a ;
  
  value v1 = 10_as;
  value v2 = 10;
  value v3 = 10.0_as;
  value v4 = 10.0;
  value v5 = "10"_as;
  value v6 = "10";
  
  int p1 = v1;
  double p2 = v3;
  std::string p3 = v5;
  
  int pp1 = 0;
  double pp2 = 0;
  std::string pp3 = ""; 
  
  pp1 = v1;
  pp2 = v3;
  // pp3 = v5;
  
  std::string ternary = false ? v5 : "HAHAHA"_as;
  
  std::cout << p1 << '\n';
  std::cout << p2 << '\n';
  std::cout << p3 << '\n';
  
  // std::cout << pp1 << '\n';
  // std::cout << pp2 << '\n';
  // std::cout << pp3 << '\n';
  
  std::cout << ternary << '\n';
  
  
  std::cout << typeid(a).name() << std::endl;
  // for(int i=0;i<100000;++i)
  // {
  //   //  v = new object();
  //   (*v)[i] = 10;
  //   //  v = 10;
  // }
  // std::cout << "HelloWorld" << '\n';
  
  /* code */
  return 0;
}

void primitive_test()
{
  
}