// Chandler Wilson
#include <iostream>
#include <stack>
#include <string>

int	EvaluatePostfix(const std::string& postfixExpression)
{
	std::stack <int> postfixStack;

	for(auto character : postfixExpression)
	{
		if (isdigit(character))
		{
			// convert from char to int
			auto convertedCharacter = character - '0';

			postfixStack.push(convertedCharacter);
		}
		else
		{
			const auto operand2 = postfixStack.top();
			postfixStack.pop();
			const auto operand1 = postfixStack.top();
			postfixStack.pop();

			switch (character)
			{
			case '+':
				postfixStack.push(operand1 + operand2);
				break;
			case '-':
				postfixStack.push(operand1 - operand2);
				break;
			case '*':
				postfixStack.push(operand1 * operand2);
				break;
			case '/':
				postfixStack.push(operand1 / operand2);
				break;
			}
		}
	}

	return postfixStack.top();
}

int main()
{
	std::string postfixExpression;

	std::cout << "Please, enter a postfix expression: ";
	std::getline(std::cin, postfixExpression);
	std::cout << "The expression you entered: " << postfixExpression;
	if (postfixExpression.empty())
		std::cout << "Was empty.\n";
	else
		std::cout << " evaluated to: " << EvaluatePostfix(postfixExpression) << "\n";

	return 0;
}
