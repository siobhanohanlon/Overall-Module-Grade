#include<stdio.h>

void main()
{
	//Declare Variables
	float ass, lab, examW;
	float assignment, labExam, writtenExam, overAll;
	char grade;

	//Ask User to input Grades and assign to variables
	printf("Please enter Grade of Assignment\n");
	scanf("%f", &ass);

	printf("Please enter Grade of Lab Exam\n");
	scanf("%f", &lab);

	printf("Please enter Grade of Written Exam\n");
	scanf("%f", &examW);

	//Change marks to suit percentages of overall
	//Written 60%
	writtenExam = ((examW/100) * 60);

	//Lab 10%
	labExam = ((lab / 100) * 10);

	//Assignment 30%
	assignment = ((ass / 100) * 30);

	//Find overall Mark
	overAll = (writtenExam + labExam + assignment);

	//Calculate Grade and Display
	if(overAll >= 70)
	{
		grade = 'A';
	}

	else if(70 > overAll >= 60)
	{
		grade = 'B';
	}

	else if(60 > overAll >= 50)
	{
		grade = 'C';
	}

	else if(50 > overAll >= 40)
	{
		grade = 'D';
	}

	else 
	{
		grade = 'E';
	}

	printf("\n\n Your grade for this module is %c", grade);
}