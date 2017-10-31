#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(void)
{
	int fd;
	off_t pos;
	int bufSize = 10;
	char buf[512];

	fd = open("test.txt", O_RDONLY);
	if (fd < 0) {
		return 1;
	}

	while(1){
		int ret;
		int count = 0;
		pos = lseek(fd, -bufSize, SEEK_END);
		ret = read(fd, buf, sizeof(buf));
		
		for(int i = 0; i < sizeof(buf); i++){
			if (buf[i] == 10) {
				count++;
			}
		}

		if(count == 11){
			printf("%s", buf+1);
			return 0;
		}
		bufSize++;
	}


	return 1;
}
