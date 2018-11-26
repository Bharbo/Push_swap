#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "ft_list.h"

int	main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];
	
	if (argc < 2)
		write(1, "File name missing.\n", 19);
	else if (argc > 2)
		write(1, "Too many arguments.\n", 20);
	else
		{
		fd = open(argv[1], O_RDONLY);
		while ((ret = read(fd, buf, BUF_SIZE)) > 0)
			{
				buf[ret] = '\0';
				ft_putstr(buf);
			}
		close(fd);
		}
	return (0);
}
