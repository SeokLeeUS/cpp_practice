#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int size;
	char *buffer;
	FILE *fp = fopen("hello.txt", "r");
	fseek(fp, 0, SEEK_END);
	size = ftell(fp);
	buffer = malloc(size + 1);
	memset(buffer,0,size+1);
	fseek(fp, 0, SEEK_END); // file pointer to the end
	int count;
	//fseek(fp, 0, SEEK_SET);// file pointer to the front 
	rewind(fp);
	count = fread(buffer,size,1,fp);
	printf("%s size:%d,count:%d\n", buffer, size, count);
	fclose(fp);
	free(buffer);

	return 0;
}