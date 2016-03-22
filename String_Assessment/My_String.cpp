#include "My_String.h"
#include <iostream>
#include <ctype.h>
using namespace std;

My_String::My_String()
{
}

My_String::My_String(char * string1)
{
	m_size = strlen(string1);
	m_capacity = strlen(string1) * 2;
	m_string = new char [m_capacity];
	strcpy(m_string, string1);
	
}

int My_String::getSize()
{
	return m_size;
}

const char * My_String::getString()
{
	return m_string;
}

char My_String::getCharIndex(int i)
{
	return m_string[i];

}

bool My_String::compare(My_String comparing)
{
	return strcmp(m_string, comparing.m_string);
}

void My_String::increaseCapacity()
{
	m_capacity += 10;
}

void My_String::increaseCapacity(int amount)
{
	m_capacity += amount;
}

void My_String::decreaseCapacity()
{
	m_capacity -= 10;
}


void My_String::append(My_String appendingString)
{
	if (m_capacity < (m_size + appendingString.m_size))
	{
		this ->increaseCapacity(appendingString.m_capacity);
	}

	strcat(m_string, appendingString.m_string);
	m_size += appendingString.m_size;

}



//
//My_String::~My_String()														// destructor
//{
//	delete[]m_string;
//}