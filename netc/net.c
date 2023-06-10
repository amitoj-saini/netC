#include <sys/socket.h>
#include <netinet/in.h>
#include <pthread.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "net.h"

struct NetServer initNetServer(int port, char*ip) {
    struct NetServer server;
    server.port = port;
    server.ip = ip;
    return server;
}

void listenWeb(struct NetServer server) {
    
}