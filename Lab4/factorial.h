/*
2.	Реализуйте следующие классы
•	Контейнер, который содержит значения факториала от 1! до 10!. 
Интерфейс класса должен включать в себя как минимум:
o	Конструктор по умолчанию
o	Функцию получения итератора указывающего на первый элемент контейнера - begin()
o	Функцию получения итератора указывающего на элемент, следующий за последним - end()
Доступ к элементам этого контейнера возможен только с помощью итераторов возвращаемых функциями begin() и end().
Контейнер не должен содержать в памяти свои элементы, они должны вычисляться при обращении к ним через итератор
•	Класс итератора для перечисления элементов этого контейнера, объекты этого класса возвращаются функциями begin() и end(). Итератор должен быть двунаправленным. 
Итератор должен быть совместимым с STL (проверить это можно используя алгоритм copy для копирования содержимого разработанного контейнера в vector<int>)
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