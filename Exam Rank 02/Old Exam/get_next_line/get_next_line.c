#include <stdlib.h>

int get_next_line(char **line)
{
    int i = 0;
    int bytes_read = 0;
    char *buffer = malloc(100000);
    *line = buffer;

    while ((bytes_read = read(0, &buffer[i], 1) && buffer[i] != '\n'))
        i++;

    buffer[i] = '\0';
    return (bytes_read);
}

/*
int main(void)
{
	int		r;
	char	*line;

	line = NULL;
	while ((r = get_next_line(&line)) > 0)
	{
		printf("%s\n", line);
		free(line);
		line = NULL;
	}
	printf("%s", line);
	free(line);
	line = NULL;
}
*/