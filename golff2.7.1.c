#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<string.h>
#include<windows.h>
#include <unistd.h>
#include <time.h>
#include <math.h>

#define Pi 3.14159265358979323846264338327950288419716939937510
#define G 9.80665 

// golf game made by dzyof
// поміняти генерацію лунки

typedef char * string;

struct Rezalt
{
	int score;
	char name[20];
	char date[20];
};

int main(){ 
 struct Rezalt* tabl;
 	int scr;
 	char name1[20];
 	char date[20];
int  line=0, a=1,v=0;
int  j, diff, m,b, i = 0, k =1, kompas;
float lunka, gradus,rad,speed,dist1, time1,height,  Vx,force, weight = 0.46,udar = 0,  dist = 0;


char name[50];
	FILE* blank;
	FILE* list;						// Створеня файла
	FILE *f1;
	char l[1000];
	time_t now;
	struct tm  ts;
    time(&now);
    
    char  *file []=
{
	"2.txt",
	"3.txt",
	"4.txt",
	"5.txt",
	"6.txt",
	"7.txt",
	"8.txt",
	"9.txt",
	"10.txt",
	};
           
	srand (time(0));                     // генерується рандомно місце лузи  
	lunka = rand()%437 ;  
	printf ("It is a game of golf. You need to score the ball in the pocket than the minimum number of shots\n\n");
do{
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 7);
	
	printf ("1 - Play game.\n2 - Leaderboards show.\n3 - Exit game\n");
		while (scanf ("%d", &kompas) == 0)
   		 {
          printf("you enter the character set - enter number !!!\n");
          while (getchar()!='\n');
          continue;
   		 }
		switch (kompas){                                  //рух по меню гри
								
			case 1 :
				printf ("Enter your name - ");
				scanf ("%s", name);
				printf ("enter the difficulty level\n1 - low\n\n2 - hard\n");
			do{
				while (scanf ("%d", &diff) == 0)
			   		 {
			          printf("you enter the character set - enter number !!!\n");
			          while (getchar()!='\n');
			          continue;
			   		 }
			   }while((diff < 1) || (diff > 2)); 
	blank = fopen ("blank.txt", "w");		// очищенняфайлу бланк
	fclose(blank);
	
do{															
	
		switch (diff){              // вибір складності - в залежності від неї буде сильніший вітер
			case 1:
			{
				v = 0;
				break;					
			}
			case 2:
  		  	{
				srand (time(0));                     // функція для визначення виводу жарту 
				 v = rand()%100 + 1 ;                   
				break;
			}
			default :
			printf ("You entered incorrectly value \n \n");
			continue;
		}	
		printf ("\nInto the hole left %.2f meters\n",lunka - dist );
		printf ("Trying number %d  hit the ball\n", ++i);
		printf ("enter angle of impact  < 90' ");
		do{
			while (scanf ("%f", &gradus) == 0)
   		 		{
          			printf("not valid value\n");
          			while (getchar()!='\n');
          			continue;
   		 		}
		}while ((gradus > 90.0) || (gradus < 0.0));
		printf ("enter force of impact  1000 N/m <  force  < 0 N/m ");
	do{
	
		while (scanf ("%f", &force) == 0 )
   		 {
          printf("not valid value\n");
          while (getchar()!='\n');
          continue;
   		 }
	}while((force > 1000) || (force < 0));
		speed  = sqrt (2*force/weight);	
		rad = gradus * Pi / 180;
		Vx = speed * cos(rad);
		udar = ((pow (speed,2)/G)*sin(2*rad) );
		switch(v){
			case 1:
				{
					SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 6);
					printf("\nherd of unicorns ran by and you forget to make a hit\n");
					udar = udar*0;
					SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 7);
					break;
				}
			case 2:
				{
					SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 6);
					printf("\nYou noticed the girl in the top and missing hit\n");
					udar = udar*0;
					SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 7);
					break;
				}
			case 3:
				{
					SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 6);
					printf("\nwhile you were preparing - ants steal your ball\n");
					udar = udar*0;
					SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 7);
					break;
				}
			case 4:
				{
					SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 6);
					printf("\nyou've almost hit but the wind put the package on your head\n");
					udar = udar*0;
					SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 7);
					break;
				}
			case 5:
				{
					SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 6);
					printf("\nHave you seen a dinosaur and realized that the third glass of vodka was redundant\n");
					udar = udar*0;
					SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 7);
					break;
				}
			case 6:
				{
					SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 6);
					printf("\nbirds laid out on the ground with their bodies sign C and you realize that creating a game console cruelly\n");
					udar = udar*0;
					SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 7);
					break;
				}
			case 7:
				{
					SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 6);
					printf("\nyou hit the ball incredibly strong - but then you wake up\n");
					udar = udar*0;
					SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 7);
					break;
				}
			case 8:
				{
					SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 6);
					printf("\nlightning destroyed a ball that had almost landed in the pocket\n");
					udar = udar*0;
					SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 7);
					break;
				}
			case 9:
				{
					SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 6);
					printf("\nuntil you go to the bathroom recorded in the table shock\n");
					udar = udar*0;
					SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 7);
					break;
				}
			case 10:	
		  		{
		  			SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 6);
					printf("\nDay of marmot in action - a hundred times and hit all going nowhere\n");
					udar = udar*0;
					SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 7);
					break;
				}	
				
		}
  dist = dist + udar;										//міняємо дистанцію  
  if(dist < lunka )
  {
  		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 6);
  	printf ("undershoot \n ");
  	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 7);
  }
	     
  										// починаються блоки де ми порівнюємо дистанцію з луекою
  if(dist > lunka){
  	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 6);
    printf ("\nYour blow was very strong . The ball flew over the pocket. You have come to the ball and turned \n ");
    SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 7);
    lunka = dist - lunka;
    dist = 0;
  }
  printf ("___________________________________________________________\n");
	blank = fopen ("blank.txt", "a+");								//  відкриття і заповнення файлу
		fprintf(blank, "%.3d %.2f %.2f\n", i ,dist, udar);
		fclose(blank);
		
		blank = fopen ("blank.txt", "r");							// виведення на екран вссіх ударів
			while (fscanf(blank, "%d %f %f\n",&i ,&dist, &udar) != EOF)
				 	printf ("%d.Ydar| Total distance traveled = %.2f meters| current strike = %.2f meters| \n", i, dist, udar);
 	fclose(blank);
	printf ("___________________________________________________________\n");
  	
  //	printf ("distance to hole %f \n lunka,dist %f  \n",(roundf(lunka) - roundf(dist)));		
	  						// лічильник ударів
} while (roundf(dist)!=roundf(lunka)); 
							 
	printf ("Congratulations, you have scored the ball in the hole in %d times\n\n", i);
	sleep(2);
	system("cls");

	for (i = 0 ; i < 9; i++){
	 	f1 = fopen (file [i], "r");							// виведення на екран вссіх ударів
			while (!feof(f1)){	
				fgets(l, 100, f1);
				SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), i);
				printf ("%s",l);
			}
		struct timespec tw = {0,500000000};
	//	nanosleep (&tw, &tr);
		sleep(1);
		system("cls");
		fclose(f1);
	
	}
ts = *localtime(&now);											// збереження дати проходження гри
strftime(date, sizeof(date),"%Y-%m-%d", &ts); /* %H:%M:%S*/     // перетворення її в строку і збереження - з виділенням під неї памяті

	list = fopen ("list.txt", "a+");							// відкриття файлу і добавлення в нього результату проходження імя і дати 
	fprintf(list, "%d %s %s\n",i,name, date);
	fclose(list);
	++i;
	continue;
	case 2: 
	k=0;
		list = fopen ("list.txt", "r");		// відкриття файлу з результатами і підрахунок кількості стрічок
			while (!feof(list))	
				{										
					if (fgetc(list) == '\n') 
					k++;
				}
			fclose(list);
		
	tabl = (struct Rezalt*)calloc(k, sizeof(struct Rezalt)); // видылення памяты пыд структуру на ту кількість елементів скільки в нас стрічок
		list = fopen ("list.txt", "r");	
	
		for(i=0;i<k;i++) {						// зчитування з файлу і запис в структури кожну стрічку
           fscanf(list,"%d",&tabl->score);
           fscanf(list,"%s",tabl->name);
           fscanf(list,"%s",tabl->date);
           tabl++;             
         }      
      tabl-=k;    
	 
  	for (i=0; i<k; i++)
	{
		for (j=0; j < k; j++ )		// сортування структур по tabl.score (по очкам проходження)
		{
			if (tabl[i].score < tabl[j].score)
			{ 
				struct  Rezalt buff; 								// створення додаткової структури для сортування
				buff = tabl[i];
				tabl[i] = tabl[j];
				tabl[j] = buff;
			}
		}
	}    
		do {
			printf ("enter the number of winners that you want to see < %d \n",k);	// вибір з таблиці переможців і перевірка на їх кількість
			while (scanf ("%d", &b) == 0)
	   		 {
	          printf("you enter the character set - enter number !!!\n");
	          while (getchar()!='\n');
	          continue;
	   		 }
				
		}while (b >= k);
		   	printf ("\nTop | score |  name | date\n");
			for(i=0; i<b; i++)	// виведення відсортованих структур
				if (i < 3)
				{
					SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 6);
					printf("%3d.%5d %10s %s\n", i+1, tabl[i].score, tabl[i].name, tabl[i].date);
				} else
					{
						SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 7);
						printf("%3d.%5d %10s %s\n", i+1, tabl[i].score, tabl[i].name, tabl[i].date);
					}
		fclose(list);
			i = 0;
 		
	continue;
	case 3: 	
		printf ("goodbye \n \n");
		break;
	default :
			printf ("You entered incorrectly value \n \n");
		continue;
		}
}while (kompas != 3 );		
return 0;

}

