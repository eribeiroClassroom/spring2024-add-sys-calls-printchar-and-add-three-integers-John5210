#include<types.h>
#include<lib.h>
#include<syscall.h>

int sys_add_three_integers(int a, int b, int c, int *ret){
    *ret = a + b + c;
    kprintf("%d ", *ret);
    return 0;
}