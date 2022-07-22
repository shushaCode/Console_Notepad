#pragma once

char* WriteName();

typedef struct Text {
	char* str;
	int len;
} Text;


void NewRecord(struct Text* t);

//void ReadText(FILE* f,struct Text* t);

void SettingEditor();
	
	



