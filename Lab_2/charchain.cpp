// Lab_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <string>

class LinkedChar
{
public:
	char Item;
	LinkedChar *Next;

	LinkedChar()
	{
		// TODO: Not sure what I should do here
	}

	LinkedChar(const std::string stringToParse)
	{
		// TODO: Loop through and split string into linked list
	}

	int length() const
	{
		// TODO: return the linked list's length as an integer
	}

	int index(char characterToSearchFor) const
	{
		// TODO: loop through linked list and return index or -1 if no match
	}

	void append(const LinkedChar& linkedCharToAppend)
	{
		// TODO: loop through list and find the last item then replace with pointer to linkedCharToAppend
	}

	bool submatch(const LinkedChar& linkedCharToMatch) const
	{
		// TODO: Figure out what the fuck this means
	}
private:
	char* HeadPtr;
};

// Generic looping input method
int GetInput(const std::string &prompt = "enter value: ",
	const std::string &error_message = "invalid value, try again.")
{
	while (true)
	{
		std::cout << prompt;

		auto value{ 0 };

		if (std::cin >> value and value >= 1 and value <= 6)
		{
			return value;
		}
		else
		{
			std::cout << "  " << error_message << std::endl;
			std::cin.clear();
			std::cin.ignore(INT_MAX, '\n');
		}
	}
}

int main()
{
	const std::string userPrompt = "Select an option: \n"
		"  1. Create a Linked Character list from input \n"
		"  2. Get the number of characters \n"
		"  3. Find the index of a character in the Linked Character list\n"
		"  4. Append a Linked Character to the list\n"
		"  5. Test if submatch\n"
		"  6. Quit.\n";
	const std::string errorMessage = "Please enter a whole number between 1 and 6";
	bool shouldExit = false;

	while (!shouldExit)
	{
		auto userOption = GetInput(userPrompt, errorMessage);

		switch (userOption)
		{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			shouldExit = true;
			break;
		default:
			// TODO: probably should give an error message
			break;
		}
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
