#include <iostream>

#include <sys/types.h>  //socket, bind
#include <sys/socket.h> //socket, bind, listen, inet_ntoa
#include <netinet/in.h> //htonl, htons, inet_ntoa
#include <arpa/inet.h>  //inet_ntoa
#include <netdb.h>      //gethostbyName
#include <unistd.h>     //read, write, close
#include <string.h>     //bzero
#include <netinet/tcp.h>//SO_RUSEADDR
#include <sys/uio.h>    //writev

#include <cstdlib>      //convert from char to int lib


using namespace std;
///////////////////////////////////////////////////////////////////
// Program: client.cpp
// Description: make a socket between client and server
// sending data back and fourth and comparing multi-write
// Single write, and writeV, comparing their performance.
//
// Assumptions: 6 arguments to pass are of integer type,
// and follow the input sequence, error chcking will be done later.
//
//
////////////////////////////////////////////////////////////////////

int main(int argc, char *argv[]){
    //argc is the argument count that was passed
    //argv[0] is always the name of the program itself if there is 
    //if not an empty string.

    //After the 0th element and before argc list all arguments
    //argv[argc] is a NULL pointer.
    cout << "there are " << argc << " arguemnts" << argv[0] << argv[1] <<
    argv[2] << endl;
    std::cout<<"[+]Starting.... "<<std::endl;

    //list of expected arguments and their respective index's
    //argv[1] port
    //argv[2] repetition: repetition of sending a set of data buffers
    //argv[3] nbufs: number of data buffers
    //argv[4] bufsize: size of each data buffer(in bytes)
    //argv[5] serverIp: server IP name
    //argv[6] type: type of transfer scenario to test(1,2,or 3)

    //TODO: Error checking

    int port_num = atoi(argv[1]);   //port
    int repetition = atoi(argv[2]); //repetition
    int num_bufs = atoi(argv[3]);   //nbufs
    int buff_size = atoi(argv[4]);  //bufsize
    int server_ip = atoi(argv[5]);  //server ip
    int type = atoi(argv[6]);       //type of process
    

    //retrieve a hostent structure








}