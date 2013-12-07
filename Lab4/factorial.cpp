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

Factorial::Factorial(){
    Factorial(10);
}
Factorial::Factorial(int n){
    container_iterator_type v;
	srand((int)time(0));
    for(int i=0;i<n;i++){
        __container.push_back(rand()%10);
    }
    cout << "Your array:" << endl;
    for(v=__container.begin(); v != __container.end(); v++){
        cout << *v << ", ";
    }
}
container_iterator_type Factorial::begin(){
    return __container.begin();
}
container_iterator_type Factorial::end(){
    return __container.end();
}
int Factorial::get_f(int num){
	switch(num){
		case 1:
			return 1;
		case 0:
			return 0;
		default:
			return get_f(num-1)*num;
	}

}

void Factorial::operator()(container_iterator_type v){
    cout << *v <<" : " << get_f(*v) << endl;
}
