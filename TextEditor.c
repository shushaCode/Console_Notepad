#include<stdio.h>
#include<stdlib.h>
#include"Text.h"


int main(int argc, char* argv[]) {
	
	SettingEditor();
	switch (argc) {

	case 1: {
		goto NewTxt;
	}	
		  break;

	case 2: {
		goto OpenTxt;
	}
		  break;


	default: {
		return 0;
	}
	}
	
	exit(-1);


NewTxt:
	
	printf("Enter the name filetxt:\t");
	char* NameFile  = WriteName();
	
	system("cls");
	FILE* newtxt;
	int err =  fopen_s(&newtxt, NameFile, "w");
	if (err == 0) {

	}
	else {
		printf("The file 'w' was not opened%s",NameFile);
		return -1;
	}

	Text newtext;

	NewRecord(&newtext);
	fwrite(newtext.str, sizeof(char), newtext.len - 1, newtxt);
	fclose(newtxt);
	free(newtext.str);
	free(NameFile);
	return(0);


OpenTxt:
	printf("%s", *argv[1]);
	while (1)
	{

	}



	return 0;
}
