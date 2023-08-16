#include "3-calc.h"

/**
 * op_add - This function adds two numbers
 * @a: number 1
 * @b: number 2
 *
 * Return: sum of a and b
 **/
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - This function substracts two numbers
 * @a: number 1
 * @b: number 2
 *
 * Return: the difference of a and b
 **/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - This function multiblies two numbers
 * @a: number 1
 * @b: number 2
 *
 * Return: the product of a and b
 **/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - This function divide two numbers
 * @a: number 1
 * @b: number 2
 *
 * Return: the result of the division of a and b
 **/
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - This function gets the reminder of the division of a and b
 * @a: number 1
 * @b: number 2
 *
 * Return: the remainder of the division of a by b
 **/
int op_mod(int a, int b)
{
	return (a % b);
}
