#ifndef _DOG_H_
#define _DOG_H_

/**
* struct dog - dog informations
* @name: of the dog
* @age: of the dog
* @owner: of the dog
*
* Description: My dog informations
*/
struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
