/*
 * main.cpp
 *
 *  Created on: 11 сент. 2021 г.
 *      Author: semyo
 */
#include<iostream>
#include<limits>
int main()
{
	int choise;
	do{
	menu_retry:
	std::cout<<"         МАГАЗИН\n"
			   "        ------------\n"
			   "        1.Яблоки\n"
			   "        2.Груши\n"
			   "        3.Апельсины\n"
			   "        0.Выход\n";


	if (not(std::cin>>choise)){std::cout<<"Неккоректный ввод\nТребуется ввести число"<<std::endl;
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
	goto menu_retry;
	}
	switch(choise){
	case 0:
		std::cout<<"До свидания!"<<std::endl;
		break;
	case 1:
		std::cout<<"Заберите ваши яблоки"<<std::endl;
		break;
	case 2:
		std::cout<<"Заберите ваши груши"<<std::endl;
		break;
	case 3:
		std::cout<<"Заберите ваши апельсины"<<std::endl;
		break;
	default:
		std::cout<<"Такого пункта нет"<<std::endl;

	}
	}while (choise!=0);
	return 0;
}




