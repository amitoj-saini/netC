#include "net.h"

struct NetServer initNetServer(int port, char*ip) {
    struct NetServer server;
    server.port = port;
    server.ip = ip;
    return server;
}