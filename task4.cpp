#include <iostream>
#include <string>

struct province;
struct country
{
	std::string name;
	province *capital;
	
};

struct province
{
    std::string name;
	country *domain;
    
};



int main()
{
	
	province istanbul;
	province ankara;
	country turkiye = {"turkiye",&ankara};
	istanbul={"istanbul",&turkiye};
	ankara={"ankara",&turkiye};
	
	std::cout<<(*((*(istanbul.domain)).capital)).name<<std::endl;
	
	
	
	
	return 0;
}
