#include <sys/syscall.h>
#include <fcntl.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <sys/ioctl.h>
#include <sys/stat.h>
#include <sys/time.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <sys/ioctl.h>
#include <sys/stat.h>
#include <sys/time.h>
#include <sys/types.h>
#include <unistd.h>

#include <arpa/inet.h>
#include <netinet/in.h>
#include <pthread.h>
#include <sys/socket.h>
#include <sys/uio.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <pthread.h>
#include <sys/socket.h>
#include <sys/uio.h>
int __ctype_b;

#ifndef _x86
int __fgetc_unlocked(FILE *stream) {
  return fgetc(stream);
}

size_t _stdlib_mb_cur_max(void) {
  return 0;
}

void* mmap(void *start, size_t len, int prot, int flags, int fd, uint32_t off) {
   return (void *)syscall(SYS_mmap2, start, len, prot, flags, fd, off >> 12);
}
#endif
