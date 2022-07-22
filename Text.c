#include "Text.h"
#include<stdio.h>
#include<stdlib.h>

void SettingEditor() {
	system("cls");
	system("color 71");

}

char* WriteName() {
	int capacity = 16;
	int len = 0;
	char* str = (char*)malloc(sizeof(char) * capacity + 1);
	//str[len] = '"';
	//len++;
	char c;
	while ( (c = getchar()) != '\n') {
		if (len == capacity - 1) {
			capacity *= 2;
			str = (char*)realloc(str, sizeof(char) * capacity + 1);
		}
		str[len] = c;
		len++;
	}

	str[len] = '\0';
	
	return str;
}

void NewRecord(struct Text* t) {

	t->len = 0;
	t->str = NULL;
	char c = getchar();
	int capacity = 16;
	t->str = (char*)malloc(sizeof(char) * capacity + 1);
	while (1) {
		c = getchar();
		t->str[t->len] = c;
		t->len++;
		if (t->len == capacity - 4) {
			capacity *= capacity;
			t->str = (char*)realloc(t->str, sizeof(char) * capacity + 1);
		}
		if (c == '^') {
			c = getchar();
			if (c == 'S') {
				break;
			}
		}
	}
}
