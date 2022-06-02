FILE I/O

This project deals with file descriptors in C. A file descriptor is a non-negative integer number that uniquely represents an opened file for the process. Negative values are reserved for error conditions or to indicate "no value".

Every process has its own set of file descriptors. Most processes(except for some daemons)have theses three file descriptors:
0 - stdin - STDIN_FILENO
1 - stdout - STDOUT_FILENO
2 - stderr - STDERR_FILENO

In this particular project, we come across system calls that operate on file descriptors. A system call is a call into kernel code, typically performed by executing an interrupt. The interrupt causes the kernel to take over and perform the requested action, then hands control back to the application. This mode switching is the reason that system calls are slower to execute than an equivalent application-level function.

These system calls include:

1. open(): opens the file specified by the pathname. See man open for more details. Returns the new file descriptor or -1 if an error occured.

2. write(): writes to a file descriptor. See man 2 write for more info.

3. read(): reads from a file descriptor.

4. close(): closes a file descriptor.
