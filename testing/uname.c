#include<stdlib.h>
#include<stdio.h>
#include <sys/utsname.h>

int main() {

  struct utsname *ubuff = malloc(sizeof(struct utsname));
  char version[sizeof(ubuff->version)];
  uname(ubuff);
  //printk(KERN_WARNING "GOING TO PRINT UBUFF VERSION!!!!!!!")
  // printk(KERN_WARNING ubuff->version);
  //version = ubuff->version;
  memcpy(version, ubuff->version, sizeof(ubuff->version));
  free(ubuff);
  
  printf("%s", version);
}
