#include<stdio.h>
#include<string.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>


int main()
{
  close(1);
  int fd = open("log.txt",O_WRONLY| O_CREAT,0644);
  if(fd < 0)
  {
    perror("open error\n");
    return 1;
  }

  printf("hello world ...\n");
  fflush(stdout);
  close(fd);
  return 0;
}
