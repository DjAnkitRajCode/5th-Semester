/*
** A datagram sockets "server" demo
*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include<dirent.h>
#define MYPORT 4952 
#define MAXBUFLEN 200
int main(){
int sockfd;
struct sockaddr_in my_addr; 
struct sockaddr_in their_addr; 
socklen_t addr_len;
DIR *d;
 struct dirent *dir;
int numbytes;
char buf[MAXBUFLEN],buf1[MAXBUFLEN];
if ((sockfd = socket(AF_INET, SOCK_DGRAM, 0)) == -1) {
perror("socket");
exit(1);
}
my_addr.sin_family = AF_INET; 
my_addr.sin_port = htons(MYPORT); 
my_addr.sin_addr.s_addr = INADDR_ANY; 
if (bind(sockfd, (struct sockaddr *)&my_addr, sizeof my_addr) == -1) {
perror("bind");
exit(1);
}
addr_len = sizeof their_addr;
if ((numbytes = recvfrom(sockfd, buf, MAXBUFLEN-1 , 0,
(struct sockaddr *)&their_addr, &addr_len)) == -1) {
perror("recvfrom");
exit(1);
}
char abc[10000];
strcpy(abc,"/home/user/CN_LAB/");
strcat(abc,buf);
char mn[10];
strcpy(mn,"exit");
d= opendir(abc);
 if(d){
  while((dir=readdir(d))!=NULL)
   printf("%s\n",dir->d_name);
  closedir(d); 
 }
recvfrom(sockfd, buf1, MAXBUFLEN-1 , 0,
(struct sockaddr *)&their_addr, &addr_len);
FILE *fp;
char ch;
fp=fopen(buf1,"r");
while(1){
 ch=fgetc(fp);
 if(ch==EOF)
  break;
 printf("%c",ch);
}
fclose(fp);
close(sockfd);
return 0;
}