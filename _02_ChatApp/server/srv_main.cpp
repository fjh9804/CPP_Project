#include "srv_main.h"
#include "../tcp/init_socket.h"
#include "thread.h"

void start_server(int port){
    std::cout << "Server start.\n";
    
    thread_launch();

    int server_fd = setup_socket(port);
    
    thread_join();
}
