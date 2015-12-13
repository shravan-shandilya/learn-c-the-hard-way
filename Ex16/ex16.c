#include<stdio.h>
#include<stdlib.h>
struct Person{
	char *name;
	int age;
};
struct Person *  create_person(){
	struct Person *person = malloc(sizeof(struct Person));
	person->name = "New guy";
	person->age = 0;
	return person;
}
void print_person(struct Person *who){
	printf("Who's name : %s\n",who->name);
	printf("Who's age : %d\n",who->age);
}
void kill_person(struct Person *dead_person){
	//free(dead_person->name);  // I got slapped by Seg.Fault for this :P
	free(dead_person);
}
int main(){
struct Person *new_person = create_person();
print_person(new_person);
kill_person(new_person);
}
