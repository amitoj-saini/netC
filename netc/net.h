#ifndef NET_C
#define NET_C

struct NetServer {
    int port;
    char *ip;
};

struct NetServer initNetServer(int port, char*ip);

void listenWeb(struct NetServer server);

#endif