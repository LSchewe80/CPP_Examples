/*
    Client-Server-Prinzip

    // Client

    erstellt: 27.04.2021
    @LSchewe80

*/

# include <iostream>
# include <string.h>
# include <sys/types.h>
# include <sys/socket.h>
# include <netinet/in.h>
# include <arpa/inet.h>
# include <stdlib.h>
# include <unistd.h>
# include <netdb.h>

using namespace std;

int	main(int argc, char **argv)
{
    int sock;
    int portNum = 15000;
    bool disconnect = false;
    int bufsize = 1024;
    char buffer[bufsize];
    unsigned long addr;
    //char *ip = "127.0.0.1";

    struct sockaddr_in server_addr;

    // init socket
    sock = socket(AF_INET, SOCK_STREAM, 0);
    if(sock < 0){
        cout << "Error creating connection!" << endl;
        exit(1);
    }

    cout << "Client Socket created..." << endl;

    addr = inet_addr(argv[1]);
    memcpy((char *)&server_addr.sin_addr, &addr, sizeof(addr));
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(portNum);


    // connecting socket server
    if(connect(sock, (struct sockaddr*)&server_addr, sizeof(server_addr)) > 0){
        cout << "Connecting to server..." << endl;
    }

    recv(sock, buffer, bufsize, 0);
    cout << "Connection confirmed" << endl;
    for(int i = 0; i <= 17; i++){
        cout << buffer[i];
    }
    cout << endl;

    cout << "Enter # to end the connection" << endl;

    // recv and send
    do
    {
        cout << "Client: ";
        do
        {
            cin >> buffer;
            send(sock, buffer, bufsize, 0);
            if (*buffer == '#'){
                send(sock, buffer, bufsize, 0);
                *buffer = '*';
                disconnect = true;
            }
        } while (*buffer != 42);

        cout << "Server: ";
        do
        {
            recv(sock, buffer, bufsize, 0);
            cout << buffer << " ";
            if (*buffer == '#'){
                *buffer = '*';
                disconnect = true;
            }
        } while (*buffer != 42);

        cout << endl;

    } while (!disconnect);

    cout << "Connection terminated..." << endl;
    cout << "Goodbye" << endl;

    close(sock);
    
    //system("pause");
    return 0;
}