/*
 * main.cpp
 *
 *  Created on: 11 ����. 2021 �.
 *      Author: semyo
 */
#include<iostream>
#include<limits>
int main()
{
	int choise;
	do{
	menu_retry:
	std::cout<<"         �������\n"
			   "        ------------\n"
			   "        1.������\n"
			   "        2.�����\n"
			   "        3.���������\n"
			   "        0.�����\n";


	if (not(std::cin>>choise)){std::cout<<"������������ ����\n��������� ������ �����"<<std::endl;
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
	goto menu_retry;
	}
	switch(choise){
	case 0:
		std::cout<<"�� ��������!"<<std::endl;
		break;
	case 1:
		std::cout<<"�������� ���� ������"<<std::endl;
		break;
	case 2:
		std::cout<<"�������� ���� �����"<<std::endl;
		break;
	case 3:
		std::cout<<"�������� ���� ���������"<<std::endl;
		break;
	default:
		std::cout<<"������ ������ ���"<<std::endl;

	}
	}while (choise!=0);
	return 0;
}




