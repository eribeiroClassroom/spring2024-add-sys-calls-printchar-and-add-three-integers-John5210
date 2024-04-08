#include <types.h>
#include <lib.h>
#include <syscall.h>
int sys_printchar(char c) {
   kprintf("%c",c);
   return 0;
}