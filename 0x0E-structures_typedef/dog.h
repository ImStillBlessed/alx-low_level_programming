/**
 * struct dog - houses dog
 * @name: hus name
 * @age: his age in years
 * @owner: the person with leagal ornership
 * Description: houses a dog and its details.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
