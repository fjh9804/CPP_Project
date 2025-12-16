#include "srv_main.h"
#include "../tcp/init_socket.h"

void start_server(int port){
    std::cout << "Server start.\n";

    int server_fd = setup_socket(port);

}
