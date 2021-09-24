#include <iostream>
#include <fstream>
#include <cerrno>
#include <cstring>
#include <sstream>
#include <string>

void funct(std::string str1)
{
	int a=str1.length();
	std::cout<<"┌";
	for(int i=0; i<=a;++i){
		std::cout<<"─";
	}
	std::cout<<"┐";

	std::cout<<std::endl;
	std::cout<<"| "<<str1<<" |"<<std::endl;
	std::cout<<"└";
		for(int i=0; i<=a;++i){
			std::cout<<"─";
		}
		std::cout<<"┘";


}
int main()
{

	std::cout<<"Input line: "<<std::endl;
	std::string s0;
	std::cin>>s0;
	funct(s0);
	return 0;
}
