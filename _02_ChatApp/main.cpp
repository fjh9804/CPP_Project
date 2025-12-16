#include <iostream>
#include "./client/client_main.h"
#include "./server/srv_main.h"

enum class INIT_TYPE{
    CLIENT = 1,
    SERVER = 2
};

int main(void){
	INIT_TYPE init_selection;
    int i;

    std::cin >> i;
	init_selection = static_cast<INIT_TYPE>(i);
    
    switch(init_selection){
		case INIT_TYPE::SERVER:
		start_server(10086);break;

		case INIT_TYPE::CLIENT:
		start_client();break;
		
		default:
		std::cout << "Input error!" << std::endl;
	}
        


          


	return 0;
}
