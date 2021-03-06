#pragma once
#include "Citizen.h"
#include "Employee.h"
#include <stdio.h>
#include <stdlib.h>


//Add new entry to data base
int DBaddPerson(char *fileName, Person newPerson);
Person *DBreadPeople(char* fileName, char* field, char* value, int* resultArrSize);
Employee DBreadEmployee(char* fileName, char* field, char* value);
int findFieldIndex(FILE *myFile, char *field);
char* getNextWord(FILE* myFile);
char* getfieldValue(char* buffer, int column);
Cars *GetCarsByField(char* field, char* value, int* resultArrSize);
Person *GetPersonList(int *sizeOfList);
