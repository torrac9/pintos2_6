#ifndef USERPROG_SYSCALL_H
#define USERPROG_SYSCALL_H

#include <stdbool.h>
#include <debug.h>
#include <stddef.h>

/* Process identifier. */
typedef int pid_t;
#define PID_ERROR ((pid_t) -1)

/* Map region identifier. */
typedef int off_t;
#define MAP_FAILED ((void *) NULL)

/* Maximum characters in a filename written by readdir(). */
#define READDIR_MAX_LEN 14

/* Typical return values from main() and arguments to exit(). */
#define EXIT_SUCCESS 0          /* Successful execution. */
#define EXIT_FAILURE 1          /* Unsuccessful execution. */

void syscall_init (void);
void check_address (void *);
void halt (void);
void exit (int);
pid_t fork (const char *thread_name);
bool create (const char *, unsigned);
bool remove (const char *);
int open (const char *);
bool create (const char *, unsigned);
bool remove (const char *);

#endif /* userprog/syscall.h */
