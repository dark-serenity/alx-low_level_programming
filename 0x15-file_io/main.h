#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>

/* Task 0: Tread lightly, she is near */
ssize_t read_textfile(const char *filename, size_t letters);

/* Task 1: Under the snow */
int create_file(const char *filename, char *text_content);

/* Task 2: Speak gently, she can hear */
int append_text_to_file(const char *filename, char *text_content);

/* Task 3: cp */
void error_message(const char *msg, int code);

/* Task 4: elf (Advanced) */
void error_exit(const char *msg, int code);
void print_elf_header(Elf64_Ehdr *ehdr);

#endif /* MAIN_H */
