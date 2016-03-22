
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////																																////////////////
////////////////	Part 1 – Create a String class																								////////////////
////////////////	You are to create a basic string utility class that will make working with character arrays easier to manage.Your String	////////////////
////////////////	class should contain the functions listed below.You need to include functions that implement the following features in		////////////////
////////////////		your String class :																										////////////////
////////////////		 The ability to query the string’s length, returning an integer								`						////////////////
////////////////		 The ability to access a character at a certain index within the string class					`						////////////////
////////////////		 The ability to compare if the string is the same as another string class						`						////////////////
////////////////		 The ability to append one string to another																			////////////////
////////////////		 The ability to prepend one string to another																			////////////////
////////////////		 The ability to return the string as a basic constant C - style string(const char*)									////////////////
////////////////		 The ability to convert the string to a duplicate containing all lowercase letters										////////////////
////////////////		 The ability to convert the string to a duplicate containing all uppercase letters										////////////////
////////////////		 The ability to find a sub - string within the string class															////////////////
////////////////		 The ability to find a sub - string within the string class, starting from a certain index within the string			////////////////
////////////////		 The ability to replace a sub - string found within the string with a different sub - string							////////////////
////////////////		 The ability to set the string to an input C - style string															////////////////
////////////////																																////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<fstream>
#include <iostream>
#include "My_String.h"
#include "stdafx.h"
using namespace std;

int main()
{
	My_String stringLength1;
	My_String stringLength2;


	stringLength1 = "my string class and";
	stringLength2 = "the other string.";
	
	cout << "String length size is: " << stringLength1.getSize() << endl;											// returning an integer of stringlength1
	cout << "String length size is: " << stringLength2.getSize() << endl;											// returning an integer of stringlength2
	cout << "The fifth character of first string is: " << stringLength1.getCharIndex(5) << endl;					// access character for stringlength1
	cout << "The fifth character of second string is: " << stringLength2.getCharIndex(5) << endl;					// access character for stringlength2
	
	
	if (stringLength2.compare(stringLength1))																		// comparing strings
	{
		cout << "string compare failed. " << endl;
	}
	else
	{
		cout << "string compare passed. " << endl;
	}

	My_String appendString = stringLength1;																			// appending a string
	appendString.append(" ");
	appendString.append(stringLength2);

	cout << "append string with " << appendString.getString() << endl;

	system("pause");
    return 0;
}

