#include <stdio.h>
#include <string.h>
int count = 0;
 void question1();
 void main()
{
	char *name;
	FILE *f1;
	f1 = fopen("score.txt","a");
	printf("Please Enter your name: ");
	scanf("%s", name);
	fprintf(f1,"%s",name);
	fclose(f1);
	printf("*** HELLO AND WELCOME TO KAUN BANEGA CROREPATI ***\n");
	getche();
	question1();
	getch();
}
char a, b, c, d, A, B, C, D, ans;
 void question2();
 void question1()
{
	fflush(stdin);
	printf("\nQ1.What is the highest mountain from Sea Bed?");
	printf("\n A. Mount Everest\t B. Mauna Kea ");
	printf("\n C. Kunchenjenga\t D. K2\n\t:");
	scanf("%c", &ans);
	switch (ans)
	{
	case 'A':
	case 'a':
	case 'C':
	case 'c':
	case 'D':
	case 'd':
		printf("\n\nWRONG ANSWER!!");
		count = 0;
		score(count);
		break;
	case 'B':
	case 'b':
		printf("\n\nCORRECT ANSWER!!");
		printf("\n\nYOU WON Rs.1,000!!");
		break;
	default:
		printf("\n\nIMPROPER CHOICE!!");
	}
	if (ans == 'B' || ans == 'b')
	{
		getche();
		question2();
	}
}
 void question3();
 void question2()
{

	fflush(stdin);

	printf("\nQ2. Who is the first human to go to space?");
	printf("\nA. Neil Armstrong \t B. Kalpana Chawla");
	printf("\nC. Edwin Buzz aldrin\t D.Yuri Gagarin\n\t: ");
	scanf("%c", &ans);
	switch (ans)
	{
	case 'A':
	case 'a':
	case 'B':
	case 'b':
	case 'C':
	case 'c':
		printf("\n\nWRONG ANSWER!!");
		count = 1000;
		score(count);
		break;
	case 'D':
	case 'd':
	{
		printf("\n\nCORRECT ANSWER!!");
		printf("\n\nYOU WON Rs.2,000!!");
	}
	break;
	default:
		printf("\n\nIMPROPER CHOICE!!");
	}

	if (ans == 'D' || ans == 'd')
	{
		getche();
		question3();
	}
}
 void question4();
 void question3()
{

	fflush(stdin);

	printf("Q3.Who is the author of Hamlet?");
	printf("\nA. Christopher Marlowe\t B. William Shakespeare");
	printf("\nC. Geoffrey Chaucer\t D. Edith Wharton\n\t: ");
	scanf("%c", &ans);
	switch (ans)
	{
	case 'A':
	case 'a':
	case 'C':
	case 'c':
	case 'D':
	case 'd':
		printf("\n\nWRONG ANSWER!!");
		count = 2000;
		score(count);
		break;
	case 'B':
	case 'b':
	{
		printf("\n\nCORRECT ANSWER!!");
		printf("\n\nYOU WON Rs.3,000!!");
	}
	break;
	default:
		printf("\n\nIMPROPER CHOICE!!");
	}
	if (ans == 'B' || ans == 'b')
	{
		getche();
		question4();
	}
}
 void question5();
 void question4()
{

	fflush(stdin);

	printf("Q4.Who was the first batsman to score 10000 runs in Test Cricket?");
	printf("\nA. Sachin Tendulkar\tB. Sunil Gavaskar");
	printf("\nC. Don Bradman\t D. Brian Lara\n\t: ");
	scanf("%c", &ans);
	switch (ans)
	{
	case 'A':
	case 'a':
	case 'D':
	case 'd':
	case 'C':
	case 'c':
		printf("\n\nWRONG ANSWER!!");
		count = 3000;
		score(count);
		break;
	case 'B':
	case 'b':
	{
		printf("\n\nCORRECT ANSWER!!");
		printf("\n\nYOU WON Rs.5,000!!");
	}
	break;
	default:
		printf("\n\nIMPROPER CHOICE!!");
	}
	if (ans == 'B' || ans == 'b')
	{
		getche();
		question5();
	}
}
 void question6();
 void question5()
{

	fflush(stdin);
	printf("Q5.Who was the highest goal scorer of Fifa world cup 2014?");
	printf("\nA. Lionel Messi\tB. James Rodriguez");
	printf("\nC. Cristiano Ronaldo\tD. Neymar JR.\n\t: ");
	scanf("%c", &ans);
	switch (ans)
	{
	case 'A':
	case 'a':
	case 'C':
	case 'c':
	case 'D':
	case 'd':
		printf("\n\nWRONG ANSWER!!");
		count = 5000;
		score(count);
		break;
	case 'B':
	case 'b':
	{
		printf("\n\nCORRECT ANSWER!!");
		printf("\n\nYOU WON Rs.10,000!!");
	}
	break;
	default:
		printf("\n\nIMPROPER CHOICE!!");
	}
	if (ans == 'B' || ans == 'b')
	{
		getche();
		question6();
	}
}
 void question7();
 void question6()
{

	fflush(stdin);
	printf("Q6.Which Movie is Highest grossing movie of all time?");
	printf("\nA. Star Wars \t B. Avengers: Endgame");
	printf("\nC. Avatar \t D. RRR\n\t: ");
	scanf("%c", &ans);
	switch (ans)
	{
	case 'A':
	case 'a':
	case 'B':
	case 'b':
	case 'D':
	case 'd':
		printf("\n\nWRONG ANSWER!!");
		count = 10000;
		score(count);
		break;
	case 'C':
	case 'c':
	{
		printf("\n\nCORRECT ANSWER!!");
		printf("\n\nYOU WON Rs.25,000!!");
	}
	break;
	default:
		printf("\n\nIMPROPER CHOICE!!");
	}
	if (ans == 'C' || ans == 'c')
	{
		getche();
		question7();
	}
}
 void question8();
 void question7()
{

	fflush(stdin);
	printf("Q7.Who was the first Indian President of UN general assembly");
	printf("\nA. Vijya Lakshmi Pandit\t B. Narendra Modi");
	printf("\nC. Manmohan Singh\t D. Indira Gandhi\n\t: ");
	scanf("%c", &ans);

	switch (ans)
	{
	case 'B':
	case 'b':
	case 'C':
	case 'c':
	case 'D':
	case 'd':
		printf("\n\nWRONG ANSWER!!");
		count = 25000;
		score(count);
		break;
	case 'A':
	case 'a':
	{
		printf("\n\nCORRECT ANSWER!!");
		printf("\n\nYOU WON Rs.50,000!!");
	}
	break;
	default:
		printf("\n\nIMPROPER CHOICE!!");
	}
	if (ans == 'A' || ans == 'a')
	{
		getche();
		question8();
	}
}
 void question9();
 void question8()
{

	fflush(stdin);
	printf("Q8.Where was Ustad Bismillah khan born?");
	printf("\nA.Nalanda\t B.Unnao");
	printf("\nC. Prayagraj\t D. Dumraon\n\t: ");
	scanf("%c", &ans);
	switch (ans)
	{
	case 'A':
	case 'a':
	case 'B':
	case 'b':
	case 'C':
	case 'c':
		printf("\n\nWRONG ANSWER!!");
		count = 50000;
		score(count);
		break;
	case 'D':
	case 'd':
	{
		printf("\n\nCORRECT ANSWER!!");
		printf("\n\nYOU WON Rs.1,00,000!!");
	}
	break;
	default:
		printf("\n\nIMPROPER CHOICE!!");
	}
	if (ans == 'D' || ans == 'd')
	{
		getche();
		question9();
	}
}
 void question10();
 void question9()
{

	fflush(stdin);
	printf("Q9.Which company have the highest turnover till date?");
	printf("\nA. Amazon\t B. Tesla");
	printf("\nC. Walmart\t D. C.Google\n\t: ");
	scanf("%c", &ans);
	switch (ans)
	{
	case 'A':
	case 'a':
	case 'B':
	case 'b':
	case 'D':
	case 'd':
		printf("\n\nWRONG ANSWER!!");
		count = 100000;
		score(count);
		break;
	case 'C':
	case 'c':
	{
		printf("\n\nCORRECT ANSWER!!");
		printf("\n\nYOU WON Rs.10,00,000!!");
	}
	break;
	default:
		printf("\n\nIMPROPER CHOICE!!");
	}
	if (ans == 'c' || ans == 'C')
	{
		getche();
		question10();
	}
}
 void question11();
 void question10()
{

	fflush(stdin);
	printf("\n\nQ10.Which country has the most powerful Passport?");
	printf("\nA. Singapore\tB. South Korea");
	printf("\nC. Japan\tD. Germany \n");
	scanf("%c", &ans);

	switch (ans)
	{
	case 'A':
	case 'a':
	case 'B':
	case 'b':
	case 'D':
	case 'd':
		printf("\n\nWRONG ANSWER!!");
		count = 1000000;
		score(count);
		break;
	case 'C':
	case 'c':
	{
		printf("\n\nCORRECT ANSWER!!");
		printf("\n\nYOU WON Rs.50,00,000!!");
	}
	break;
	default:
		printf("\n\nIMPROPER CHOICE!!");
	}

	if (ans == 'C' || ans == 'c')
	{
		getche();
		question11();
	}
}
 void question11()
{

	fflush(stdin);
	printf("\n\nQ11.Which is the cleanest River of Asia");
	printf("\nA. Ganga River\tB. Umngot River");
	printf("\nC. Mekong River\tD. Nilam River\n\t: ");
	scanf("%c", &ans);

	switch (ans)
	{
	case 'A':
	case 'a':
	case 'C':
	case 'c':
	case 'D':
	case 'd':
		printf("\n\nWRONG ANSWER!!");
		count = 5000000;
		score(count);
		break;
	case 'B':
	case 'b':
	{
		printf("\n\nCORRECT ANSWER!!");
		printf("\n\nYOU WON Rs.1,00,00,000!!");
		count = 10000000;
		score(count);
	}
	break;
	default:
		printf("\n\nIMPROPER CHOICE!!");
	}

	if (ans == 'B' || ans == 'b')
	{
		getche();
		printf("CONGRATULATIONS!!\n\t Thank you from the team!!\n");
	}
}
void score(int amount)
{
	printf("\n********************************************\nThe total Money Won is \" ₹ %d \"", amount);
	FILE *f2;
	f2 = fopen("score.txt", "a");
	fprintf(f2, " --> ₹ %d\n",amount);
	fclose(f2);
}