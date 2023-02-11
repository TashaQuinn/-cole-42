#include "get_next_line.h"

char *get_next_line(int fd)
{
    int i = 0;
    int rd = 0;
    char c;
    char *buf = malloc(10000);

    while(rd = read(fd, &c, 1) > 0)
    {
        buf[i++] = c;
        if (buf[i] == '\n')
            break ;
    }
    if((!buf[i - 1] && !rd) || rd == -1)
    {
        free(buf);
        return(NULL);
    }
    write(1, '\0', 1);
    return(buf);
}

/*
int  main(void)
{
  int    fd;
  char  *line;

  fd = open("text.txt", O_RDONLY);
  line = get_next_line(fd);
  printf("%s\n", line);
  line = get_next_line(fd);
  printf("%s\n", line);
  return (0);
}
*/