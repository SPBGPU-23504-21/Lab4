#include "factorial.h"
/*
2.	Реализуйте следующие классы
•	Контейнер, который содержит значения факториала от 1! до 10!. 
Интерфейс класса должен включать в себя как минимум:
o	Конструктор по умолчанию
o	Функцию получения итератора указывающего на первый элемент контейнера - begin()
o	Функцию получения итератора указывающего на элемент, следующий за последним - end()
Доступ к элементам этого контейнера возможен только с помощью итераторов возвращаемых функциями begin() и end().
Контейнер не должен содержать в памяти свои элементы, они должны вычисляться при обращении к ним через итератор
•	Класс итератора для перечисления элементов этого контейнера, объекты этого класса возвращаются функциями begin() и end(). Итератор должен быть двунаправленным. Итератор должен быть совместимым с STL (проверить это можно используя алгоритм copy для копирования содержимого разработанного контейнера в vector<int>)
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
