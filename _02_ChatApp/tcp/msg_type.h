#include <iostream>

//message type defination
enum class MessageType : int {
    LOGIN = 1,      //Client Login Request
    LOGOUT = 2,     //Client Logout Request
    PRIVATE_MSG = 3,//Private msg from Client
    SERVER_INFO = 4,//Server status or Information
};

//message struct defination
struct ChatMesage {
    MessageType type;
    char senderId[32];
    char receiverId[32];
    int contentSize;
    char msg[128];
};
