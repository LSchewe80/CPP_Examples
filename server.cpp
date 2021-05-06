/*
    Client-Server-Prinzip

    // Server

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

using namespace std;

int	main(int argc, char **argv)
{
    int sock, server;
    int portNum = 15000;
    bool disconnect = false;
    int bufsize = 1024;
    char buffer[bufsize];

    struct sockaddr_in server_addr;
    socklen_t size;

    // init socket
    sock = socket(AF_INET, SOCK_STREAM, 0);
    if(sock < 0){
        cout << "Error connection!" << endl;
        exit(1);
    }

    cout << "Server Socket connection i.O.!" << endl;

    server_addr.sin_family = AF_INET;
    server_addr.sin_addr.s_addr = htons(INADDR_ANY);
    server_addr.sin_port = htons(portNum);

    // binding socket
    if(bind(sock, (struct sockaddr*)&server_addr, sizeof(server_addr)) < 0){
        cout << "Error binding socket..." << endl;
        exit(1);
    }

    size = sizeof(server_addr);
    cout << "Looking for clients..." << endl;

    // listing socket
    listen(sock, 1);
    
    // accept the Connection
    server = accept(sock, (struct sockaddr*)&server_addr, &size);
    if(server < 0){
        cout << "Error on accepting..." << endl;
        exit(1);
    }

    // recv and send
    while (server > 0)
    {
        strcpy(buffer, "Server connecting");
        send(server, buffer, bufsize, 0);

        cout << "Connected with client..." << endl;
        cout << "Enter # to end the connection" << endl;

        cout << "Client: ";
        do
        {
            recv(server, buffer, bufsize, 0);
            cout << buffer << " ";
            if(*buffer == '#'){
                *buffer = '*';
                disconnect = true;
            }
        } while (*buffer != '*');

        cout << endl;

        do
        {   
            cout << "Server: ";
            do
            {
                cin >> buffer;
                send(server, buffer, bufsize, 0);
                if(*buffer == '#'){
                    send(server, buffer, bufsize, 0);
                    *buffer = '*';
                    disconnect = true;
                }
            } while (*buffer != '*');

            cout << "Client: ";
            do
            {
                recv(server, buffer, bufsize, 0);
                cout << buffer << " ";
                if(*buffer == '#'){
                    *buffer = '*';
                    disconnect = true;
                }
            } while (*buffer != '*');

            cout << endl;
            
        } while (!disconnect);

        cout << "Connection terminated..." << endl;
        cout << "Goodbye..." << endl;
        disconnect = false;
        exit(1);
    }
    close(sock);

    //system("pause");
    return 0;
}