#include<stdio.h>
int main(){
int num[] = {12,23,42,43};
char *name[] = {"asd","sdf","wqe","vbc"};
int i,count = sizeof(num)/sizeof(int);

printf("Direct indexing\n");
for( i = 0; i<count;i++)
	printf("num=%d , name=%s\n",num[i],name[i]);

printf("Through external pointers\n");
int *num_ptr = num;
char **name_ptr = name;
for(i=0;i<count;i++)
	printf("num=%d ,name=%s\n",*num_ptr++,*name_ptr++);

}
