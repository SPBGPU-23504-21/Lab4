#include "factorial.h"
/*
2.	���������� ��������� ������
�	���������, ������� �������� �������� ���������� �� 1! �� 10!. 
��������� ������ ������ �������� � ���� ��� �������:
o	����������� �� ���������
o	������� ��������� ��������� ������������ �� ������ ������� ���������� - begin()
o	������� ��������� ��������� ������������ �� �������, ��������� �� ��������� - end()
������ � ��������� ����� ���������� �������� ������ � ������� ���������� ������������ ��������� begin() � end().
��������� �� ������ ��������� � ������ ���� ��������, ��� ������ ����������� ��� ��������� � ��� ����� ��������
�	����� ��������� ��� ������������ ��������� ����� ����������, ������� ����� ������ ������������ ��������� begin() � end(). �������� ������ ���� ���������������. �������� ������ ���� ����������� � STL (��������� ��� ����� ��������� �������� copy ��� ����������� ����������� �������������� ���������� � vector<int>)
*/

int main(void)
{
    Factorial f(10);
    f(f.begin());
	f(f.begin()+1);
	f(f.begin()+2);
	f(f.begin()+3);
	f(f.begin()+4);
	f(f.begin()+5);
	f(f.begin()+6);
	f(f.begin()+7);
	f(f.begin()+8);
	f(f.begin()+9);
    return EXIT_SUCCESS;
}