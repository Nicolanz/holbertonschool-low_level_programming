#ifndef _SAMPLE_HEADER_H_
#define _SAMPLE_HEADER_H_
typedef __SIZE_TYPE__ size_t;
int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));

#endif /* _SAMPLE_HEADER_H_ */
