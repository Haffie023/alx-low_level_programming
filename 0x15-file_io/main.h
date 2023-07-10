#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#define BUF_SIZE 1024

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int _strlen(char *str);
void close_file(int FD);
void handle_exit(char *message);
void is_elf_file(Elf32_Ehdr *h);
void display_elf_magic(Elf32_Ehdr *h);
void display_elf_class(unsigned char class);
void display_elf_data(unsigned char data);
void display_elf_version(unsigned char version);
void display_elf_osabi(unsigned char osabi);
void display_elf_type(uint16_t type, int be);
void display_elf_entry(Elf64_Addr addr, int be);
void display_elf(Elf32_Ehdr *h);
int main(int ac, char **av);
#endif
