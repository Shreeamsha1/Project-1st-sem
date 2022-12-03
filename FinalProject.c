#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <conio.h>   
#include <time.h> 

void Beginner();
void Intermediate();
void Expert();
void Testyourspeed();


int main(){
  int p = 0 ;
  
  do{
    int op = 0;
    printf("\n\n\t Choose the level \n");
    printf("\t 1) Beginner\n\t 2) Intermediate\n\t 3) Expert\n\t 4) Test Your Speed " );
    printf("\t\n\n enter only serial number of the level \n\n\t");
    scanf("%d",&op);
    system("cls");

    switch(op){
      case 1 : Beginner(); break;
      case 2 : Intermediate(); break;
      case 3 : Expert(); break;
      case 4 : Testyourspeed(); break;
      default : printf("\t Enter only serial number of the level \n"); 
                getch(); getch(); system("cls"); op = 0; break;
    
    
    }

  }while(p == 0);
  
  return 0;
}


void Expert(){
 
  int z=1;
  char ans[1000];
  char *word;
  int i,a ;
  
  printf("Enter number of words you want to type: \n");
  scanf("%d",&i);
  
  a=i;
  
  do{

switch(z){
  case 1 :word = "Please take your dog, Cali, out for a walk he really needs some exercise!"; z++; break;
  case 2 :word = "What a beautiful day it is on the beach, here in beautiful and sunny Hawaii."; z++; break;
  case 3 :word = "Rex Quinfrey, a renowned scientist, created plans for an invisibility machine."; z++; break;
  case 4 :word = "Do you know why all those chemicals are so hazardous to the environment?"; z++; break;
  case 5 :word = "You never did tell me how many copper pennies where in that jar; how come?"; z++; break;
  case 6 :word = "Abnegation- Renouncing a belief or doctrine- I believe in the abnegation of political power"; z++; break;
  case 7 :word = "Cognizant- awareness or realization- Politicians must be cognizant of the political boundaries within which they work."; z++; break;
  case 8 :word = "Equanimity- maintaining composure in stressful situations- He accepted both the good and the bad with equanimity."; z++; break;
  case 9 :word = "Licentious- someone who is promiscuous- The ruler’s tyrannical and licentious behaviour."; z++; break;
  case 10 :word = "Quotidian- something that is of daily occurrence- The car sped noisily off through the quotidian traffic."; z++; break;
  case 11 :word = "That herd of bison seems to be moving quickly; does that seem normal to you?"; z++; break;
  case 12 :word = "All the grandfather clocks in that store were set at exactly 3 o’clock."; z++; break;
  case 13 :word = "There are so many places to go in Europe for a vacation--Paris, Rome, Prague, etc."; z++; break;
  case 14 :word = "Those diamonds and rubies will make a beautiful piece of jewelry."; z++; break;
  case 15 :word = "There are so many places to go in Europe for a vacation--Paris, Rome, Prague, etc."; z++; break;
  case 16 :word = "Vociferous- something or someone who is offensively/ conspicuously loud- He was a vociferous opponent of the takeover."; z++; break;
  case 17 :word = "Vicissitude- an unwelcome or unpleasant change in circumstances or fortune- Her husband’s sharp vicissitudes of fortune."; z++; break;
  case 18 :word = "Promulgate- to broadcast or announce- These objectives have to be promulgated within the organization."; z++; break;
  case 19 :word = "Ostracism- excluding a person or certain section from society by majority consent- I argued this point with him, but he was obdurate."; z++; break;
  case 20 :word = "Multifarious- multifaceted or diverse- The university offers multifarious activities."; z++; break;
  
}
 if(z == 2){
 printf("\n\n\n\tType : %s\n\t     : ",word);
 gets(ans);
  
   system("cls");
}
else{
   printf("\tType : %s\n\t     : ",word);
 gets(ans);
  
   system("cls");
}



 if(strcmp(word , ans)== 0){
   printf("\t\t\t\t correct \n\n\n");
   
 }
 else{
   printf("\t\t\t\t wrong \n\n\n");
  i--;
  continue;
  
 }


}while(z <= i);

system("cls");
printf("\n\n\n\n\t Your typing accuracy is : %d percent \n\n",a*100/i);
getch();
system("cls");
}


void Testyourspeed(){
	
	char ans[1000];
	int a;
	int b;
	 
	 printf("\n\n\n\n\t You have 60 seconds to type :\n\n");
	 
	 printf("\n Frank Edward McGurrin, a court stenographer from Salt Lake City,\n Utah who taught typing classes, reportedly invented touch\n typing in 1888.\n\n");

	unsigned int x_hours=0;
	unsigned int x_minutes=0;
	unsigned int x_seconds=0;
	unsigned int x_milliseconds=0;
	unsigned int totaltime=0,count_down_time_in_secs=0,time_left=0;

	clock_t x_startTime,x_countTime;
	count_down_time_in_secs=10;  // 1 minute is 60, 1 hour is 3600

 
    x_startTime=clock();  // start clock
    time_left=count_down_time_in_secs-x_seconds;   // update timer

	while (time_left>0) 
	{
		x_countTime=clock(); // update timer difference
		x_milliseconds=x_countTime-x_startTime;
		x_seconds=(x_milliseconds/(CLOCKS_PER_SEC))-(x_minutes*60);
		x_minutes=(x_milliseconds/(CLOCKS_PER_SEC))/60;
		x_hours=x_minutes/60;

	 

		time_left=count_down_time_in_secs-x_seconds; // subtract to get difference 

	
printf( "\nYou have %d seconds left ",time_left);
system("cls");
	printf( "\n\n\nTime's out\n\n\n");
	
            
      printf("\n\n\n\n\t Your typing speed in words per minute is %d:",b);}
      
}




void Intermediate(){
  int z=1;
  char ans[1000];
  char *word;
   int i,a ;
  
  printf("Enter number of words you want to type: \n");
  scanf("%d",&i);
  
  a=i;
  
  
  do{

switch(z){
  case 1 : word = " minute- infinitely or immeasurably small"; z++; break;
  case 2 :word = "The cat stretched."; z++; break;
  case 3 :word = "accord- concurrence of opinion"; z++; break;
  case 4 :word = "Aaron made a picture."; z++; break;
  case 5 :word = "practice- a customary way of operation or behavior"; z++; break;
  case 6 :word = "Catch up!"; z++; break;
  case 7 :word = "approach- move towards"; z++; break;
  case 8 :word = "The cat and dog ate."; z++; break;
  case 9 :word = "utter- without qualification"; z++; break;
  case 10 :word = "Samantha, Elizabeth, and Joan are on the committee."; z++; break;
  case 11 :word = "engage- consume all of one's attention or time"; z++; break;
  case 12 :word = "He was eating and talking."; z++; break;
  case 13 :word = "straight- successive, without a break"; z++; break;
  case 14 :word = "The ham, green beans, mashed potatoes, and corn are gluten-free."; z++; break;
  case 15 :word = "apparent- clearly revealed to the mind or the senses or judgment"; z++; break;
  case 16 :word = "Joe waited for the train."; z++; break;
  case 17 :word = "concept- an abstract or general idea inferred from specific instances"; z++; break;
  case 18 :word = "I looked for Mary and Samantha at the bus station."; z++; break;
  case 19 :word = "vain- unproductive of success"; z++; break;
  case 20 :word = "Mary and Samantha arrived at the bus station early but waited until noon for the bus."; z++; break;
  
 
}
 if(z == 2){
 printf("\n\n\n\tType : %s\n\t     : ",word);
 gets(ans);
  
   system("cls");
}
else{
   printf("\tType : %s\n\t     : ",word);
 gets(ans);
  
   system("cls");
}



 if(strcmp(word , ans)== 0){
   printf("\t\t\t\t correct \n\n\n");
   
 }
 else{
   printf("\t\t\t\t wrong \n\n\n");
  i--;
  continue;
  
 }


}while(z <= i);

system("cls");
printf("\n\n\n\n\t Your typing accuracy is : %d percent \n\n",a*100/i);
getch();
system("cls");
}










void Beginner(){
  int z=1;
  char ans[1000];
  char *word;
  int i,a ;
  
  printf("Enter number of words you want to type: \n");
  scanf("%d",&i);
  
  a=i;
  
  do{

switch(z){
  case 1 : word = "which"; z++; break;
  case 2 :word = "their"; z++; break;
  case 3 :word = "the"; z++; break;
  case 4 :word = "mother"; z++; break;
  case 5 :word = "home"; z++; break;
  case 6 :word = "time"; z++; break;
  case 7 :word = "will"; z++; break;
  case 8 :word = "about"; z++; break;
  case 9 :word = "many"; z++; break;
  case 10 :word = "then"; z++; break;
  case 11 :word = "them"; z++; break;
  case 12 :word = "write"; z++; break;
  case 13 :word = "would"; z++; break;
  case 14 :word = "like"; z++; break;
  case 15 :word = "these"; z++; break;
  case 16 :word = "see"; z++; break;
  case 17 :word = "him"; z++; break;
  case 18 :word = "come"; z++; break;
  case 19 :word = "number"; z++; break;
  case 20 :word = "krushna"; z++; break;
  
 }
 

if(z == 2){
 printf("\n\n\n\tType : %s\n\t     : ",word);
 scanf("%s",&ans);
  
   system("cls");
}
else{
   printf("\tType : %s\n\t     : ",word);
 scanf("%s",&ans);
  
   system("cls");
}




 if(strcmp(word , ans)== 0){
   printf("\t\t\t\t correct \n\n\n");
  
 }
 else{
   printf("\t\t\t\t wrong \n\n\n");
   a--;
   continue;
  
  
 }


}while(z <= i);

system("cls");
printf("\n\n\n\n\t Your typing accuracy is : %d percent \n\n",a*100/i);
getch();
system("cls");

}







