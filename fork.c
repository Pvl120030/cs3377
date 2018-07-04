#include <stdio.h>
#include <unistd.h>


void displayMenu(void);

int main()
{
	int choice, pid, pid2;
 	displayMenu();

	scanf("%d", &choice);
  
  switch(choice)
	{
	   	case 1:
			if(fork()<0){fork();}
			printf("This is process %d \n", getpid());
      break;
		
		case 2:
			fork();
			fork();
			printf("This is process %d \n", getpid());
			break;
		
    case 3: 
			fork();
			fork();
			fork();
			printf("This is process %d \n", getpid());
      break;
		
		case 4:
			if(pid==fork() && pid2 == fork()) {fork();}
			if(pid==fork() && pid2 == fork()) {fork();}
			if(pid==fork() && pid2 == fork()) {fork();}
			printf("This is process %d \n", getpid());
      break;
	
		case 5:
			for (int i=1; i<=5; i++) {fork();}
			printf("This is process %d \n", getpid());
      break;
  	default:
      			printf("Incorrect selection\n");
	  }
  }

void displayMenu(void)
{
 	printf("Please choose a case below:");
	printf("\n 1. fork case 1");
	printf("\n 2. fork case 2");
	printf("\n 3. fork case 3");
	printf("\n 4. fork case 4");
	printf("\n 5. fork case 5");
	printf("\n Pick your case: ");

	
}
