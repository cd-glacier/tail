#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(int argc, char *argv[])
{
	int fd;
	off_t pos;
	int bufSize = 10;
	char buf[512];

	fd = open(argv[1], O_RDONLY);
	if (fd < 0) {
		return 1;
	}

	while(1){
		int count = 0;
		pos = lseek(fd, -bufSize, SEEK_END);
		read(fd, buf, sizeof(buf));
	
		// 10行いないのfileだった場合
		if (bufSize > lseek(fd, 0, SEEK_END)){
			printf("%s",buf);
			return 0;
		}

		// 改行文字を数える
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
