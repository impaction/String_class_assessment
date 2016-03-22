#pragma once
#include<cstring>

class My_String
{
private:
	int m_size;
	int m_capacity;
	char *m_string;


public:
	My_String();														// returning an integer of stringlength
	My_String(char * string1);

	int getSize();	
	const char * getString();											// access character for stringlength
	char getCharIndex(int i);

	bool compare(My_String comparing);									// comparing strings
	void increaseCapacity();
	void increaseCapacity(int amount);
	void decreaseCapacity();
	void append(My_String appendingString);								// appending a string
	


/*
	~My_String();	*/													// destructor
};

