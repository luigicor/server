#ifndef SERVERCLIENT_TCPSERVER_H
#define SERVERCLIENT_TCPSERVER_H
#include <stdio.h>
#include <string.h>   //strlen
#include <stdlib.h>
#include <errno.h>
#include <unistd.h>   //close
#include <arpa/inet.h>    //close
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <sys/time.h> //FD_SET, FD_ISSET, FD_ZERO macros

#define TRUE   1
#define FALSE  0
#define PORT 8080

class server {

    int num;
    int stat=0;

public:
    bool run=TRUE;
    server (int pnum){
        num=pnum;
    }
    void init();
    int getstatus(){
        return stat;
    }
    long Send(const char * msg);

};


#endif //SERVERCLIENT_TCPSERVER_H
