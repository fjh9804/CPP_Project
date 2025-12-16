#include <iostream>

enum class INIT_TYPE{
    CLIENT = 1,
    SERVER = 2
};

int main(void){
    INIT_TYPE init_selection;
    std::cin >> init_selection;
    
    if(init_selection == SERVER){
        start_server(10086);
    }
    else if(init_selection == CLIENT){
        start_client(void);  
    }

	return 0;
}
