#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<string.h>
#include<unistd.h>
int main()
{
  int fd = open("bite",O_WRONLY |O_TRUNC| O_CREAT,0644);
  if(fd < 0)
  {
    perror("open error\n");
    return 1;
  }
  dup2(fd,1);
  close(fd);
  const char *msg1 = "i like Linux! : write\n";
  const char *msg2 = "i like Linux! : printf\n";
  const char *msg3 = "i like Linux! : fprintf\n";
  write(1,msg1,strlen(msg1));
  printf("%s",msg2);
  fprintf(stdout,"%s",msg3);

  fflush(stdout);

  return 0;
}
