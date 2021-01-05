#include "mystring.h"

int mystrlen(std::string str)
{
  char cstr[str.length()];
  strcpy(cstr, str.c_str());
	return strlen(cstr);
}
std::string mystrcpy(std::string str1, std::string str2)
{
  char cstr1[str1.length()];
  char cstr2[str2.length()];
  strcpy(cstr1, str1.c_str());
  strcpy(cstr2, str2.c_str());

	strcpy(cstr1, cstr2);
	return cstr1;
}

std::string mystrcat(std::string str1, std::string str2)
{
  char cstr1[str1.length()];
  char cstr2[str2.length()];
  strcpy(cstr1, str1.c_str());
  strcpy(cstr2, str2.c_str());

	strcat(cstr1, cstr2);
	return cstr1;
}
bool mystrcmp(std::string str1, std::string str2)
{
  char cstr1[str1.length()];
  char cstr2[str2.length()];
  strcpy(cstr1, str1.c_str());
  strcpy(cstr2, str2.c_str());
  int res = strcmp(cstr1, cstr2);
  if(res == 0)
	{
		return true;
	}
	else
	{
		return false;	
	}
}