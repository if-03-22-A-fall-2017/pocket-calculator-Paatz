//Patrick Spisak
//2AHIF 2017/2018
#include <stdio.h>



int board()
{
	printf("Choose an Operation \n");
	printf("Add (1) \n");
	printf("Subtract (2) \n");
	printf("Multiply (3) \n");
	printf("Devide (4) \n");
	printf("Stop program (-1) \n");

	int operator;
	scanf("%d\n",&operator);

	return operator;

}

void Input(double* numberOne, double* numberTwo)
{

printf("First Number : \n");
	scanf("%lf", numberOne);

	printf("\n" );

	printf("Second Number : \n");
	scanf("%lf", numberTwo);
}

double Add(double numberOne, double numberTwo)
{
	return numberOne + numberTwo ;
}

double Subtract(double numberOne , double numberTwo)
{
	return numberOne - numberTwo ;
}

double Multiply(double numberOne , double numberTwo)
{
	return numberOne * numberTwo ;
}

double Devide(double numberOne , double numberTwo)
{
	if(numberTwo == 0 )
	{
	printf("Division by zero \n");
	return 0;
	}

	else
	{
	return numberOne / numberTwo ;
	}
}

int operation(int operator)
{
	double output ;
	switch(operator)
	{
		double numberOne;
		double numberTwo;


		case 1:
		Input(&numberOne,&numberTwo);
			output = Add(numberOne, numberTwo);
		break;

		case 2:
		Input(&numberOne,&numberTwo);
			output = Subtract(numberOne, numberTwo);
		break;

		case 3:
		Input(&numberOne,&numberTwo);
			output = Multiply(numberOne, numberTwo);
		break;

		case 4:
			Input(&numberOne,&numberTwo);
			output = Devide(numberOne ,numberTwo);
		break;

		default:
		output = 0;
		break;
	}
	return output;
}

int main(int argc, char* argv[])
{
	int choose_operation = board();
	double output = operation(choose_operation);
if(choose_operation == 0)
{
	printf("Your result is : %f \n",output);
}
	return 0;
}
