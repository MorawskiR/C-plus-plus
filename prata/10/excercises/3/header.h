#pragma once
#include <cstring>
#include <stdio.h>
#include <string.h>
#include <cassert>
class setGolf
{
private:
	static const int Len = 40;
	char fullname[Len];
	int handicap;
public:
	setGolf()
	{
		handicap = 3;
		static char const nameData[] = "stonoga";
		assert(strlen(nameData) < sizeof(fullname));
		strcpy_s(fullname, nameData);
	}
	setGolf(const char* name, int hc)
	{
		handicap = hc;
		char* p = new char[Len];
		 int i; 
		 for ( i = 0; i < Len && name[i] ; i++)
		 {
			 p[i] = name[i];
		 }
		 while (i <= Len)
			 p[i++] = '\0';
		 for (i = 0; i < Len; i++)
		 {
			 fullname[i] = p[i];
		 }

	}

	void display() const;
	const setGolf& setting(const setGolf& s)const;
};

