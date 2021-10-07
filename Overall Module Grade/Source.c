#include<stdio.h>

void main()
{
	//Declare Variables
	float ass, lab, examW;
	float assignment, labExam, writtenExam;
	float overAll;
	char grade;

	//Ask User to input Grades and assign to variables
	printf("Please enter Grade of Assignment\t");
	scanf("%f", &ass);

	printf("Please enter Grade of Lab Exam\t\t");
	scanf("%f", &lab);

	printf("Please enter Grade of Written Exam\t");
	scanf("%f", &examW);

	//Change marks to suit percentages of overall
	//Assignment 30%
	assignment = ((ass / 100) * 30);
	
	//Lab 10%
	labExam = ((lab / 100) * 10);

	//Written 60%
	writtenExam = ((examW/100)*60);

	//Find overall Mark
	overAll = (writtenExam + labExam + assignment);

	//Calculate Grade and Display
	if(overAll >= 70.0)
	{
		grade = 'A';
	}

	else if(overAll >= 60.0 && overAll < 70)
	{
		grade = 'B';
	}

	else if(overAll >= 50.0 && overAll < 60)
	{
		grade = 'C';
	}

	else if(overAll >= 40.0 && overAll < 50)
	{
		grade = 'D';
	}

	else 
	{
		grade = 'E';
	}

	printf("\n\n Your grade for this module is %c and score was %.2f.\n\n", grade, overAll);
}