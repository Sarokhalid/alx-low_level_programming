#ifndef DOOGS_H
#define DOOGS_H
/**
 * struct dog - jgfdsz
 * @name: nvcx
 * @age: vcxx
 * @owner: jgcxz
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
#endif
