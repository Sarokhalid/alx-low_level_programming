#ifndef DOOGS_H
#define DOOGS_H
/**
 * struct dog - Represent dog with its name,age  and owner
 * @name: name of dog
 * @age : age of dog
 * @owner: owner of dog
 * Description: this struct represent name and age and owner of dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} Doogs;
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
