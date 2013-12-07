/*
2.	���������� ��������� ������
�	���������, ������� �������� �������� ���������� �� 1! �� 10!. 
��������� ������ ������ �������� � ���� ��� �������:
o	����������� �� ���������
o	������� ��������� ��������� ������������ �� ������ ������� ���������� - begin()
o	������� ��������� ��������� ������������ �� �������, ��������� �� ��������� - end()
������ � ��������� ����� ���������� �������� ������ � ������� ���������� ������������ ��������� begin() � end().
��������� �� ������ ��������� � ������ ���� ��������, ��� ������ ����������� ��� ��������� � ��� ����� ��������
�	����� ��������� ��� ������������ ��������� ����� ����������, ������� ����� ������ ������������ ��������� begin() � end(). �������� ������ ���� ���������������. 
�������� ������ ���� ����������� � STL (��������� ��� ����� ��������� �������� copy ��� ����������� ����������� �������������� ���������� � vector<int>)
*/
#include <vector>
#include <list>
#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

typedef std::vector<int> container_type;
typedef container_type::iterator container_iterator_type;

class Factorial
{
public:
    Factorial();
    Factorial(int n);
	~Factorial(){};
    container_iterator_type begin(void);
    container_iterator_type end(void);
    int get_f(int num);
    void operator()(container_iterator_type v);
private:
    container_type __container;
};

void win32cmd();