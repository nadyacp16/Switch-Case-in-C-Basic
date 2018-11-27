#include <stdio.h>
#include <conio.h>
#include <windows.h>

void gotoxy(int x, int y)
{
	HANDLE hConsoleOutput;
	COORD dwCursorPosition;
	dwCursorPosition.X=x;
	dwCursorPosition.Y=y;
	hConsoleOutput=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hConsoleOutput,dwCursorPosition);
}

void main()
{
	int pil1,pil2,pil3;
	
	do
	{
		system("cls");
		system("color D");
		gotoxy(30,1);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
		gotoxy(30,2);printf("%c    SISTEM PAKAR    %c",186,186);
		gotoxy(30,3);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
		printf("\n\t\t\t   FILM DENGAN GENRE TERPOPULER DI\n");
		printf("\t\t\tINDONESIA, KOREA, THAILAND DAN BARAT\n");
		printf("\t\t\t	    2008 %c 2016\n\n",196);
		gotoxy(22,7);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196);
		printf("\n\n\t\t	1. Indonesia");
		printf("\n\t\t	2. Korea");
		printf("\n\t\t	3. Thailand");
		printf("\n\t\t	4. Western");
		printf("\n\t\t	0. Keluar");
		printf("\n\n\t\t	Masukkan Pilihan	: ");
		scanf("%d", &pil1);
		
		switch(pil1)
		{
			case 1 : //Indonesia//
				do
				{
					system("cls");
					gotoxy(31,1);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
					gotoxy(31,2);printf("%c     Genre Film     %c",186,186);
					gotoxy(31,3);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
					printf("\n\n\t\t	1. Horror");
					printf("\n\t\t	2. Comedy");
					printf("\n\t\t	3. Drama");
					printf("\n\t\t	4. Action");
					printf("\n\t\t	0. Menu Utama");
					printf("\n\n\t\t	Masukkan genre	: ");
					scanf("%d", &pil2);
					
					switch(pil2)
					{
						case 1 : //Horror
							do
							{
								system("cls");
								gotoxy(31,2);printf("%c     TAHUN     %c",175,174);
								printf("\n\n\t\t	1. 2014");
								printf("\n\t\t	2. 2015");
								printf("\n\t\t	3. 2016");
								printf("\n\n\t\t	Masukkan tahun	: ");
								scanf("%d", &pil3);
								
								switch(pil3)
								{
									case 1 :
										system("cls");
										gotoxy(26,2);printf("%c     Film     %c\n\n",175,174);
										printf("\t\t Rumah Gurita (2014)\n");
										getch(); break;
										
									case 2 :
										system("cls");
										gotoxy(26,2);printf("%c      Film     %c\n\n",175,174);
										printf("\t\t Sumiati (2015)\n");
										getch(); break;
										
									case 3 :
										system("cls");
										gotoxy(26,2);printf("%c      Film     %c\n\n",175,174);
										printf("\t\t Dia Pasti Datang (2016)\n");
										getch(); break;
										
									case 0 :
										break;
										
									default :
										printf("\n\t\t\t    %c Hanya ada menu 1-3 %c",158,158);
										getch(); break;
								}
							}while(pil3!=0);
							break;
							
						case 2 : //Comedy
							do
							{
								system("cls");
								gotoxy(31,2);printf("%c     TAHUN     %c",175,174);
								printf("\n\n\t\t	1. 2014");
								printf("\n\t\t	2. 2015");
								printf("\n\t\t	3. 2016");
								printf("\n\n\t\t	Masukkan tahun	: ");
								scanf("%d", &pil3);
								
								switch(pil3)
								{
									case 1 :
										system("cls");
										gotoxy(26,2);printf("%c     Film     %c\n\n",175,174);
										printf("\t\t Tak Kemal Maka Tak Sayang (2014)\n");
										getch(); break;
										
									case 2 :
										system("cls");
										gotoxy(26,2);printf("%c     Film     %c\n\n",175,174);
										printf("\t\t Ngenest (2015)\n");
										getch(); break;
										
									case 3 :
										system("cls");
										gotoxy(26,2);printf("%c     Film     %c\n\n",175,174);
										printf("\t\t My Stupid Boss (2016)\n");
										getch(); break;
										
									case 0 :
										break;
										
									default :
										printf("\n\t\t\t    %c Hanya ada menu 1-3 %c",158,158);
										getch(); break;
								}
							}while(pil3!=0);
							break;
							
						case 3 : //Drama
							do
							{
								system("cls");
								gotoxy(31,2);printf("%c     TAHUN     %c",175,174);
								printf("\n\n\t\t	1. 2014");
								printf("\n\t\t	2. 2015");
								printf("\n\t\t	3. 2016");
								printf("\n\n\t\t	Masukkan tahun	: ");
								scanf("%d", &pil3);
								
								switch(pil3)
								{
									case 1 :
										system("cls");
										gotoxy(26,2);printf("%c     Film     %c\n\n",175,174);
										printf("\t\t Tenggelamnya Kapal Van Der Wijck Extended (2014)\n");
										getch(); break;
										
									case 2 :
										system("cls");
										gotoxy(26,2);printf("%c     Film     %c\n\n",175,174);
										printf("\t\t 3 Dara (2015)\n");
										getch(); break;
										
									case 3 :
										system("cls");
										gotoxy(26,2);printf("%c     Film     %c\n\n",175,174);
										printf("\t\t Surat Dari Praha (2016)\n");
										getch(); break;
										
									case 0 :
										break;
										
									default :
										printf("\n\t\t\t    %c Hanya ada menu 1-3 %c",158,158);
										getch(); break;
								}
							}while(pil3!=0);
							break;
							
						case 4 : //Action
							do
							{
								system("cls");
								gotoxy(31,2);printf("%c     TAHUN     %c",175,174);
								printf("\n\n\t\t	1. 2014");
								printf("\n\t\t	2. 2015");
								printf("\n\t\t	3. 2016");
								printf("\n\n\t\t	Masukkan tahun	: ");
								scanf("%d", &pil3);
								
								switch(pil3)
								{
									case 1 :
										system("cls");
										gotoxy(26,2);printf("%c     Film     %c",175,174);
										printf("\n\n\t\t Comic 8 (2014)\n");
										getch(); break;
										
									case 2 :
										system("cls");
										gotoxy(26,2);printf("%c     Film     %c",175,174);
										printf("\n\n\t\t Comic 8 : Kasino Kings Part 1 (2015)\n");
										getch(); break;
										
									case 3 :
										system("cls");
										gotoxy(26,2);printf("%c     Film     %c",175,174);
										printf("\n\n\t\t Comic 8 : Kasino Kings Part 2 (2016)\n");
										getch(); break;
										
									case 0 :
										break;
										
									default :
										printf("\n\t\t\t    %c Hanya ada menu 1-3 %c",158,158);
										getch(); break;
								}
							}while(pil3!=0);
							break;
							
						case 0 :
							break;
							
						default :
							printf("\n\t\t\t    %c Hanya ada menu 1-4 %c",158,158);
							getch(); break;
					}
				}while(pil2!=0);
				break;
				
			case 2 : //Korea
				do
				{
					system("cls");
					gotoxy(31,1);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
					gotoxy(31,2);printf("%c     Genre Film     %c",186,186);
					gotoxy(31,3);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
					printf("\n\n\t\t	1. Drama");
					printf("\n\t\t	2. Action");
					printf("\n\t\t	3. Comedy");
					printf("\n\t\t	4. Horror");
					printf("\n\t\t	0. Menu Utama");
					printf("\n\n\t\t	Masukkan genre	: ");
					scanf("%d", &pil2);
					
					switch(pil2)
					{
						case 1 : //Drama
							do
							{
								system("cls");
								gotoxy(31,2);printf("%c     TAHUN     %c",175,174);
								printf("\n\n\t\t	1. 2014");
								printf("\n\t\t	2. 2015");
								printf("\n\t\t	3. 2016");
								printf("\n\n\t\t	Masukkan tahun	: ");
								scanf("%d", &pil3);
								
								switch(pil3)
								{
									case 1 :
										system("cls");
										gotoxy(26,2);printf("%c     Film     %c\n\n",175,174);
										printf("\t\t The Full Sun (2014)\n");
										getch(); break;
										
									case 2 :
										system("cls");
										gotoxy(26,2);printf("%c     Film     %c\n\n",175,174);
										printf("\t\t Orange Marmalade (2015)\n");
										getch(); break;
										
									case 3 :
										system("cls");
										gotoxy(26,2);printf("%c     Film     %c\n\n",175,174);
										printf("\t\t Descendants of The Sun (2016)\n");
										getch(); break;
										
									case 0 :
										break;
										
									default :
										printf("\n\t\t\t    %c Hanya ada menu 1-3 %c",158,158);
										getch(); break;
								}
							}while(pil3!=0);
							break;
							
						case 2 : //Comedy
							do
							{
								system("cls");
								gotoxy(31,2);printf("%c     TAHUN     %c",175,174);
								printf("\n\n\t\t	1. 2014");
								printf("\n\t\t	2. 2015");
								printf("\n\t\t	3. 2016");
								printf("\n\n\t\t	Masukkan tahun	: ");
								scanf("%d", &pil3);
								
								switch(pil3)
								{
									case 1 :
										system("cls");
										gotoxy(26,2);printf("%c     Film     %c\n\n",175,174);
										printf("\t\t Miss Granny (2014)\n");
										getch(); break;
										
									case 2 :
										system("cls");
										gotoxy(26,2);printf("%c     Film     %c\n\n",175,174);
										printf("\t\t Twenty (2015)\n");
										getch(); break;
										
									case 3 :
										system("cls");
										gotoxy(26,2);printf("%c     Film     %c\n\n",175,174);
										printf("\t\t Madame Antoine(2016)\n");
										getch(); break;
										
									case 0 :
										break;
										
									default :
										printf("\n\t\t\t    %c Hanya ada menu 1-3 %c",158,158);
										getch(); break;
								}
							}while(pil3!=0);
							break;
							
						case 3 : //Action
							do
							{
								system("cls");
								gotoxy(31,2);printf("%c     TAHUN     %c",175,174);
								printf("\n\n\t\t	1. 2014");
								printf("\n\t\t	2. 2015");
								printf("\n\t\t	3. 2016");
								printf("\n\n\t\t	Masukkan tahun	: ");
								scanf("%d", &pil3);
								
								switch(pil3)
								{
									case 1 :
										system("cls");
										gotoxy(26,2);printf("%c     Film     %c\n\n",175,174);
										printf("\t\t The Target (2014)\n");
										getch(); break;
										
									case 2 :
										system("cls");
										gotoxy(26,2);printf("%c     Film     %c\n\n",175,174);
										printf("\t\t Assassination (2015)\n");
										getch(); break;
										
									case 3 :
										system("cls");
										gotoxy(26,2);printf("%c     Film     %c\n\n",175,174);
										printf("\t\t Veteran (2015)\n");
										getch(); break;
										
									case 0 :
										break;
										
									default :
										printf("\n\t\t\t    %c Hanya ada menu 1-3 %c",158,158);
										getch(); break;
								}
							}while(pil3!=0);
							break;
							
						case 4 : //Horror
							do
							{
								system("cls");
								gotoxy(31,2);printf("%c     TAHUN     %c",175,174);
								printf("\n\n\t\t	1. 2014");
								printf("\n\t\t	2. 2015");
								printf("\n\t\t	3. 2016");
								printf("\n\n\t\t	Masukkan tahun	: ");
								scanf("%d", &pil3);
								
								switch(pil3)
								{
									case 1 :
										system("cls");
										gotoxy(26,2);printf("%c     Film     %c\n\n",175,174);
										printf("\t\t Mourning Grave (2014)\n");
										getch(); break;
										
									case 2 :
										system("cls");
										gotoxy(26,2);printf("%c     Film     %c\n\n",175,174);
										printf("\t\t The Phone (2015)\n");
										getch(); break;
										
									case 3 :
										system("cls");
										gotoxy(26,2);printf("%c     Film     %c\n\n",175,174);
										printf("\t\t Horror Stories 3 (2016)\n");
										getch(); break;
										
									case 0 :
										break;
										
									default :
										printf("\n\t\t\t    %c Hanya ada menu 1-3 %c",158,158);
										getch(); break;
								}
							}while(pil3!=0);
							break;
							
						case 0 :
							break;
							
						default :
							printf("\n\t\t\t    %c Hanya ada menu 1-4 %c",158,158);
							getch(); break;
					}
				}while(pil2!=0);
				break;
				
			case 3 : //Thailand
				do
				{
					system("cls");
					gotoxy(31,1);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
					gotoxy(31,2);printf("%c     Genre Film     %c",186,186);
					gotoxy(31,3);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
					printf("\n\n\t\t	1. Romance");
					printf("\n\t\t	2. Comedy");
					printf("\n\t\t	3. Horror");
					printf("\n\t\t	4. Action");
					printf("\n\t\t	0. Menu Utama");
					printf("\n\n\t\t	Masukkan genre	: ");
					scanf("%d", &pil2);
					
					switch(pil2)
					{
						case 1 : //Romance
							do
							{
								system("cls");
								gotoxy(31,2);printf("%c     TAHUN     %c",175,174);
								printf("\n\n\t\t	1. 2014");
								printf("\n\t\t	2. 2015");
								printf("\n\t\t	3. 2016");
								printf("\n\n\t\t	Masukkan tahun	: ");
								scanf("%d", &pil3);
								
								switch(pil3)
								{
									case 1 :
										system("cls");
										gotoxy(26,2);printf("%c     Film     %c\n\n",175,174);
										printf("\t\t Teacher's Diary(2014)'\n");
										getch(); break;
										
									case 2 :
										system("cls");
										gotoxy(26,2);printf("%c     Film     %c\n\n",175,174);
										printf("\t\t Heart Attack (2015)\n");
										getch(); break;
										
									case 3 :
										system("cls");
										gotoxy(26,2);printf("%c     Film     %c\n\n",175,174);
										printf("\t\t Love H2O (2016)\n");
										getch(); break;
										
									case 0 :
										break;
										
									default :
										printf("\n\t\t\t    %c Hanya ada menu 1-3 %c",158,158);
										getch(); break;
								}
							}while(pil3!=0);
							break;
							
						case 2 : //Comedy
							do
							{
								system("cls");
								gotoxy(31,2);printf("%c     TAHUN     %c",175,174);
								printf("\n\n\t\t	1. 2014");
								printf("\n\t\t	2. 2015");
								printf("\n\t\t	3. 2016");
								printf("\n\n\t\t	Masukkan tahun	: ");
								scanf("%d", &pil3);
								
								switch(pil3)
								{
									case 1 :
										system("cls");
										gotoxy(26,2);printf("%c     Film     %c\n\n",175,174);
											printf("\t\t I Fine.. Thank You Love You (2014)\n");
										getch(); break;
										
									case 2 :
										system("cls");
										gotoxy(26,2);printf("%c     Film     %c\n\n",175,174);
										printf("\t\t Make Me Shudder 2: Shudder Me Mae Nak (2014)\n");
										getch(); break;
										
									case 3 :
										system("cls");
										gotoxy(26,2);printf("%c     Film     %c\n\n",175,174);
										printf("\t\t May Who ? AKA May Nai Fang Rang Frer (2015)\n");
										getch(); break;
										
									case 0 :
										break;
										
									default :
										printf("\n\t\t\t    %c Hanya ada menu 1-3 %c",158,158);
										getch(); break;
								}
							}while(pil3!=0);
							break;
							
						case 3 : //Horror
							do
							{
								system("cls");
								gotoxy(31,2);printf("%c     TAHUN     %c",175,174);
								printf("\n\n\t\t	1. 2014");
								printf("\n\t\t	2. 2015");
								printf("\n\t\t	3. 2016");
								printf("\n\n\t\t	Masukkan tahun	: ");
								scanf("%d", &pil3);
								
								switch(pil3)
								{
									case 1 :
										system("cls");
										gotoxy(26,2);printf("%c     Film     %c\n\n",175,174);
										printf("\t\t The Eyes Diary (2014)\n");
										getch(); break;
										
									case 2 :
										system("cls");
										gotoxy(26,2);printf("%c     Film     %c\n\n",175,174);
										printf("\t\t Make Me Shudder 3 (2015)\n");
										getch(); break;
										
									case 3 :
										system("cls");
										gotoxy(26,2);printf("%c     Film     %c\n\n",175,174);
										printf("\t\t The Black Death (2015)\n");
										getch(); break;
										
									case 0 :
										break;
										
									default :
										printf("\n\t\t\t    %c Hanya ada menu 1-3 %c",158,158);
										getch(); break;
								}
							}while(pil3!=0);
							break;
							
						case 4 : //Action
							do
							{
								system("cls");
								gotoxy(31,2);printf("%c     TAHUN     %c",175,174);
								printf("\n\n\t\t	1. 2014");
								printf("\n\t\t	2. 2015");
								printf("\n\t\t	3. 2016");
								printf("\n\n\t\t	Masukkan tahun	: ");
								scanf("%d", &pil3);
								
								switch(pil3)
								{
									case 1 :
										system("cls");
										gotoxy(26,2);printf("%c     Film     %c\n\n",175,174);
										printf("\t\t Iron Shadows (2014)\n");
										getch(); break;
										
									case 2 :
										system("cls");
										gotoxy(26,2);printf("%c     Film     %c\n\n",175,174);
										printf("\t\t Zero Tolerance (2015)\n");
										getch(); break;
										
									case 3 :
										system("cls");
										gotoxy(26,2);printf("%c     Film     %c\n\n",175,174);
										printf("\t\t The Asian Connection (2016)\n");
										getch(); break;
										
									case 0 :
										break;
										
									default :
										printf("\n\t\t\t    %c Hanya ada menu 1-3 %c",158,158);
										getch(); break;
								}
							}while(pil3!=0);
							break;
							
						case 0 :
							break;
							
						default :
							printf("\n\t\t\t    %c Hanya ada menu 1-4 %c",158,158);
							getch(); break;
					}
				}while(pil2!=0);
				break;
				
			case 4 : //Western
				do
				{
					system("cls");
					gotoxy(31,1);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
					gotoxy(31,2);printf("%c     Genre Film     %c",186,186);
					gotoxy(31,3);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
					printf("\n\n\t\t	1. Action");
					printf("\n\t\t	2. Comedy");
					printf("\n\t\t	3. Horror");
					printf("\n\t\t	4. Animasi");
					printf("\n\t\t	0. Menu Utama");
					printf("\n\n\t\t	Masukkan genre	: ");
					scanf("%d", &pil2);
					
					switch(pil2)
					{
						case 1 : //Action
							do
							{
								system("cls");
								gotoxy(31,2);printf("%c     TAHUN     %c",175,174);
								printf("\n\n\t\t	1. 2014");
								printf("\n\t\t	2. 2015");
								printf("\n\t\t	3. 2016");
								printf("\n\n\t\t	Masukkan tahun	: ");
								scanf("%d", &pil3);
								
								switch(pil3)
								{
									case 1 :
										system("cls");
										gotoxy(26,2);printf("%c     Film     %c\n\n",175,174);
										printf("\t\t Jack Ryan: Shadow Recruit (2014)\n");
										getch(); break;
										
									case 2 :
										system("cls");
										gotoxy(26,2);printf("%c     Film     %c\n\n",175,174);
										printf("\t\t San Andreas (2015)\n");
										getch(); break;
										
									case 3 :
										system("cls");
										gotoxy(26,2);printf("%c     Film     %c\n\n",175,174);
										printf("\t\t Deadpool (2016)\n");
										getch(); break;
										
									case 0 :
										break;
										
									default :
										printf("\n\t\t\t    %c Hanya ada menu 1-3 %c",158,158);
										getch(); break;
								}
							}while(pil3!=0);
							break;
							
						case 2 : //Comedy
							do
							{
								system("cls");
								gotoxy(31,2);printf("%c     TAHUN     %c",175,174);
								printf("\n\n\t\t	1. 2014");
								printf("\n\t\t	2. 2015");
								printf("\n\t\t	3. 2016");
								printf("\n\n\t\t	Masukkan tahun	: ");
								scanf("%d", &pil3);
								
								switch(pil3)
								{
									case 1 :
										system("cls");
										gotoxy(26,2);printf("%c     Film     %c\n\n",175,174);
										printf("\t\t Infinitely Polar Bear (2014)\n");
										getch(); break;
										
									case 2 :
										system("cls");
										gotoxy(26,2);printf("%c     Film     %c\n\n",175,174);
										printf("\t\t Legacy (2015)\n");
										getch(); break;
										
									case 3 :
										system("cls");
										gotoxy(26,2);printf("%c     Film     %c\n\n",175,174);
										printf("\t\t How to Be Single (2016)\n");
										getch(); break;
										
									case 0 :
										break;
										
									default :
										printf("\n\t\t\t    %c Hanya ada menu 1-3 %c",158,158);
										getch(); break;
								}
							}while(pil3!=0);
							break;
							
						case 3 : //Horror
							do
							{
								system("cls");
								gotoxy(31,2);printf("%c     TAHUN     %c",175,174);
								printf("\n\n\t\t	1. 2014");
								printf("\n\t\t	2. 2015");
								printf("\n\t\t	3. 2016");
								printf("\n\n\t\t	Masukkan tahun	: ");
								scanf("%d", &pil3);
								
								switch(pil3)
								{
									case 1 :
										system("cls");
										gotoxy(26,2);printf("%c     Film     %c\n\n",175,174);
										printf("\t\t The Woman in Black 2: Angel of Death (2014)\n");
										getch(); break;
										
									case 2 :
										system("cls");
										gotoxy(26,2);printf("%c     Film     %c\n\n",175,174);
										printf("\t\t Sinister 2 (2015)\n");
										getch(); break;
										
									case 3 :
										system("cls");
										gotoxy(26,2);printf("%c     Film     %c\n\n",175,174);
										printf("\t\t The Boy (2016)\n");
										getch(); break;
										
									case 0 :
										break;
										
									default :
										printf("\n\t\t\t    %c Hanya ada menu 1-3 %c",158,158);
										getch(); break;
								}
							}while(pil3!=0);
							break;
							
						case 4 : //Animasi
							do
							{
								system("cls");
								gotoxy(31,2);printf("%c     TAHUN     %c",175,174);
								printf("\n\n\t\t	1. 2014");
								printf("\n\t\t	2. 2015");
								printf("\n\t\t	3. 2016");
								printf("\n\n\t\t	Masukkan tahun	: ");
								scanf("%d", &pil3);
								
								switch(pil3)
								{
									case 1 :
										system("cls");
										gotoxy(26,2);printf("%c     Film     %c\n\n",175,174);
										printf("\t\t Tinker Bell and the Legend of the NeverBeast (2014)\n");
										getch(); break;
										
									case 2 :
										system("cls");
										gotoxy(26,2);printf("%c     Film     %c\n\n",175,174);
										printf("\t\t Minions (2015)\n");
										getch(); break;
										
									case 3 :
										system("cls");
										gotoxy(26,2);printf("%c     Film     %c\n\n",175,174);
										printf("\t\t The Angry Birds Movie (2016)\n");
										getch(); break;
										
									case 0 :
										break;
										
									default :
										printf("\n\t\t\t    %c Hanya ada menu 1-3 %c",158,158);
										getch(); break;
								}
							}while(pil3!=0);
							break;
							
						case 0 :
							break;
							
						default :
							printf("\n\t\t\t    %c Hanya ada menu 1-4 %c",158,158);
							getch(); break;
					}
				}while(pil2!=0);
				break;
				
			case 0 :
				system("cls");
				printf("\n\n\t\t\t   Thankyou for using our program! \n");
				printf("\n\t\t\t Build by : \n");
				printf("\n\t\t\t 1. Djoni Halim		/ 150708141 \n");
				printf("\n\t\t\t 2. Kadek Lia Turyani	/ 150708142 \n");
				printf("\n\t\t\t 3. Nadya Cahyaning P.	/ 150708155 \n");
				printf("\n\t\t\t 4. Bethari Anjani	/ 150708211 \n");
				printf("\n\t\t\t\t	Kelas B \n");
				printf("\n\t\t\t	  Inteligensi Buatan \n");
				break;
			
			default :
				printf("\n\t\t\t    %c Hanya ada menu 1-4 %c",158,158);
				getch(); break;
		}
	}while(pil1!=0);
	
	getch();
}
