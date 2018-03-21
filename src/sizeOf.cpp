#include<iostream>

void func(int *b)
{
    int array = sizeof(p);
    int elemento = sizeof(*p);
    int tamanho = sizeof(p)/sizeof(*p);
    std::cout << "Length of array = " << tamanho << std::endl;
}

int main()
{
  int a[7];
  func(a);
  std::cout << "tamanho do array" << sizeof(a) << std::endl;
  std::cout << "tamanho do array" << sizeof(*a) << std::endl;
  return 0;
}
