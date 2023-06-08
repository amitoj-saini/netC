#ifndef NET_C
#define NET_C

struct NetServer {
    int port;
    char *ip;
};

struct NetServer initNetServer(int port, char*ip);

void listenHTTP(struct NetServer server);

#endif