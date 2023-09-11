#ifndef DOG_H
#define DOG_H
/**
 * struct dog - declare dog
 * @name: name of did
 * @age: age of dog
 * @owner: owner of dog
 * Description: the struct dog represent the nameand age and owner of dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - typdef
 */
typedef struct dog dog_t;
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif

