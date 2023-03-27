#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void write_buffered(int fd, const void *buf, size_t count) {
    size_t written = 0;
    char *buffer = (char *)buf;

    while (written < count) {
        size_t remaining = count - written;
        size_t to_write = remaining < 1024 ? remaining : 1024;
        size_t n = write(fd, buffer + written, to_write);

        if (n < 0) {
            perror("write");
            exit(EXIT_FAILURE);
        }

        written += n;
    }
}
