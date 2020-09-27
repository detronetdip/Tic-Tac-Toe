#include<stdio.h>
#include<conio.h>



//All Function declarations(Global)

void welcome(void);
void showb(void);
void inst(void);
void instt(void);
void pvp(void);
void pvc(void);
void g_name(void);
void welcomee(void);
int  doex(char,int);
char cvt(int);
char ckwin(void);

//Global var declaration

char e[3][3]= {'1','2','3','4','5','6','7','8','9'};
char mov[9]= {' '};
char tem;

//main start
int main()
{
    int num;
    g_name();
    getch();
    clrscr();
    printf("Enter 1 for player vs computer\nEnter 2 for player vs player.\n\n\nEnter: ");
    scanf("%d",&num);
    scanf("%c",&tem);
    switch(num) {
    case 1: {
        pvc();
    }
    break;
    case 2: {
        pvp();
    }
    break;
    }

}//main end


//All Function Definitions.


void pvc(void)
{
    char sym,pos,tem,ch,COM;
    int i,bi,j,ki=0,z;
    clrscr();
    welcomee();
    instt();
    srand(time(NULL));
    for(bi=1; bi<=9; bi++)
    {
        clrscr();
        showb();
        if(bi%2==0)
        {
            sym='O';
            z=2;
            COM=cvt(rand()%10);
            while(COM==0) {
                COM=cvt(rand()%10);
            }
            pos=COM;

        }
        else
        {
            sym='X';
            z=1;
            printf("Player %d \nEnter position:",z);
            scanf("%c",&pos);
            scanf("%c",&tem);
        }

        mov[bi-1]=pos;
        clrscr();
        if(bi>1) {
            ki=doex(pos,bi);

        }
        if(ki>=1 && z==2) {
            bi--;
        }
        else if(ki>=1)
        {
            bi--;

            printf("\t\t\v\v\v\v\v       |     |       \n");
            printf("\t\t   %c   |  %c  |   %c    \n",e[0][0],e[0][1],e[0][2]);
            printf("\t\t_______|_____|_______\n");
            printf("\t\t       |     |       \n");
            printf("\t\t   %c   |  %c  |   %c    \n",e[1][0],e[1][1],e[1][2]);
            printf("\t\t_______|_____|_______\n");
            printf("\t\t       |     |       \n");
            printf("\t\t   %c   |  %c  |   %c    \n",e[2][0],e[2][1],e[2][2]);
            printf("\t\t       |     |       \n");


            printf("\nWrong Move.\n\nPerss Any Key To continue\n\n");
            getch();
            clrscr();
        }

        else {

            for(i=0; i<3; i++)
            {
                for(j=0; j<3; j++)
                {
                    if(e[i][j]==pos)
                    {
                        e[i][j]=sym;
                    }

                }
            }

            printf("\t\t\v\v\v\v\v       |     |       \n");
            printf("\t\t   %c   |  %c  |   %c    \n",e[0][0],e[0][1],e[0][2]);
            printf("\t\t_______|_____|_______\n");
            printf("\t\t       |     |       \n");
            printf("\t\t   %c   |  %c  |   %c    \n",e[1][0],e[1][1],e[1][2]);
            printf("\t\t_______|_____|_______\n");
            printf("\t\t       |     |       \n");
            printf("\t\t   %c   |  %c  |   %c    \n",e[2][0],e[2][1],e[2][2]);
            printf("\t\t       |     |       \n");

            ch=ckwin();
            if(ch=='X') {
                printf("\n\nPlayer 1 Win.\n\n\n");
                return 0;
            }
            else if(ch=='O') {
                printf("\n\nComputer  Win.\n\n\n");
                return 0;
            }
            else if(ch=='k' && bi==9)
                printf("\n\nMatch Draw.\nBetter Luck Next Time.\n\n\n");

        }


    }


}
void pvp(void)
{
    char sym,pos,ch;
    int i,bi,j,ki=0,z;
    clrscr();
    welcome();
    inst();

    for(bi=1; bi<=9; bi++)
    {
        clrscr();
        showb();
        if(bi%2==0)
        {
            sym='O';
            z=2;
        }
        else
        {
            sym='X';
            z=1;
        }
        printf("Player %d \nEnter position:",z);
        scanf("%c",&pos);
        scanf("%c",&tem);
        mov[bi-1]=pos;
        printf("%c \n\n",mov[bi]);
        clrscr();
        if(bi>1) {
            ki=doex(pos,bi);

        }
        if(ki>=1)
        {
            bi--;

            printf("\t\t\v\v\v\v\v       |     |       \n");
            printf("\t\t   %c   |  %c  |   %c    \n",e[0][0],e[0][1],e[0][2]);
            printf("\t\t_______|_____|_______\n");
            printf("\t\t       |     |       \n");
            printf("\t\t   %c   |  %c  |   %c    \n",e[1][0],e[1][1],e[1][2]);
            printf("\t\t_______|_____|_______\n");
            printf("\t\t       |     |       \n");
            printf("\t\t   %c   |  %c  |   %c    \n",e[2][0],e[2][1],e[2][2]);
            printf("\t\t       |     |       \n");


            printf("\nWrong Move.\n\nPerss Any Key To continue\n\n");
            getch();
            clrscr();
        }

        else {

            for(i=0; i<3; i++)
            {
                for(j=0; j<3; j++)
                {
                    if(e[i][j]==pos)
                    {
                        e[i][j]=sym;
                    }

                }
            }

            printf("\t\t\v\v\v\v\v       |     |       \n");
            printf("\t\t   %c   |  %c  |   %c    \n",e[0][0],e[0][1],e[0][2]);
            printf("\t\t_______|_____|_______\n");
            printf("\t\t       |     |       \n");
            printf("\t\t   %c   |  %c  |   %c    \n",e[1][0],e[1][1],e[1][2]);
            printf("\t\t_______|_____|_______\n");
            printf("\t\t       |     |       \n");
            printf("\t\t   %c   |  %c  |   %c    \n",e[2][0],e[2][1],e[2][2]);
            printf("\t\t       |     |       \n");

            ch=ckwin();
            if(ch=='X') {
                printf("\n\nPlayer 1 Win.\n\n\n");
                return 0;
            }
            else if(ch=='O') {
                printf("\n\nPlayer 2 win.\n\n\n");
                return 0;
            }
            else if(ch=='k' && bi==9)
                printf("\n\nMatch Draw.\nBetter Luck Next Time.\n\n\n");

        }


    }


}

void g_name(void)
{
  printf("\v\v\v\v\v\v       __________      ________       _________\n");
                    printf("\t   |              |          |\n");
                    printf("\t   |              |          |\n");
                    printf("\t   |              |          |\n");
                    printf("\t   |              |          |\n");
                    printf("\t   |           ___|___       |_________");
 
printf("        __________         /\\           _________\n");
        printf("\t   |            /  \\         |\n");
        printf("\t   |           /    \\        |\n");
        printf("\t   |          /      \\       |\n");
        printf("\t   |         /________\\      |\n");
        printf("\t   |        /          \\     |_________");
 
printf("        __________     __________       _________\n");
        printf("\t   |        |          |     |\n");
        printf("\t   |        |          |     |\n");
        printf("\t   |        |          |     |_______\n");
        printf("\t   |        |          |     |\n");
        printf("\t   |        |__________|     |_________\n");
 


}
void welcomee(void)
{

    printf("\t\t\v\v\v\v\vWelcome Player.\n\n\t\tPress Any Key to continue.");
    getch();
    clrscr();
}
void welcome(void)
{

    printf("\t\t\v\v\v\v\vWelcome Players.\n\n\t\tPress Any Key to continue.");
    getch();
    clrscr();
}



void showb(void)
{



    printf("\t\t\v\v\v\v\v       |     |       \n");
             printf("\t\t   %c   |  %c  |   %c    \n",e[0][0],e[0][1],e[0][2]);
              printf("\t\t_______|_____|_______\n");
              printf("\t\t       |     |       \n");
             printf("\t\t   %c   |  %c  |   %c    \n",e[1][0],e[1][1],e[1][2]);
              printf("\t\t_______|_____|_______\n");
              printf("\t\t       |     |       \n");
             printf("\t\t   %c   |  %c  |   %c    \n",e[2][0],e[2][1],e[2][2]);
              printf("\t\t       |     |       \n");

}


void inst(void)
{


    printf("\t\vINSTRUCTION\n");
     printf("\t\t\v\v\v\v\v       |     |       \n");
              printf("\t\t   %c   |  %c  |   %c    \n",e[0][0],e[0][1],e[0][2]);
               printf("\t\t_______|_____|_______\n");
               printf("\t\t       |     |       \n");
              printf("\t\t   %c   |  %c  |   %c    \n",e[1][0],e[1][1],e[1][2]);
               printf("\t\t_______|_____|_______\n");
               printf("\t\t       |     |       \n");
              printf("\t\t   %c   |  %c  |   %c    \n",e[2][0],e[2][1],e[2][2]);
               printf("\t\t       |     |       \n");

    printf("\v\vYou have to enter your position\n according to this bord.\nPlayer-1: X  .\nPlayer-2: O  .\n\n\nPress Any Key to Continue.");
    getch();
    clrscr();
}

void instt(void)
{


    printf("\t\vINSTRUCTION\n");
    printf("\t\t\v\v\v\v\v       |     |       \n");
    printf("\t\t   %c   |  %c  |   %c    \n",e[0][0],e[0][1],e[0][2]);
    printf("\t\t_______|_____|_______\n");
    printf("\t\t       |     |       \n");
    printf("\t\t   %c   |  %c  |   %c    \n",e[1][0],e[1][1],e[1][2]);
    printf("\t\t_______|_____|_______\n");
    printf("\t\t       |     |       \n");
    printf("\t\t   %c   |  %c  |   %c    \n",e[2][0],e[2][1],e[2][2]);
    printf("\t\t       |     |       \n");

    printf("\v\vYou have to enter your position\n according to this bord.\ncomputer will play with you\n\nPlayer-1: X  .\nComputer: O  .\n\n\nPress Any Key to Continue.");
    getch();
    clrscr();
}

char ckwin(void)
{
    if(e[0][0]==e[0][1] && e[0][1]==e[0][2])
        return (e[0][0]);
    else if(e[1][0]==e[1][1] && e[1][1]==e[1][2])
        return (e[1][0]);
    else if(e[2][0]==e[2][1] && e[2][1]==e[2][2])
        return (e[2][0]);
    else if(e[0][0]==e[1][0] && e[1][0]==e[2][0])
        return (e[0][0]);
    else if(e[0][1]==e[1][1] && e[1][1]==e[2][1])
        return (e[0][1]);
    else if(e[0][2]==e[1][2] && e[1][2]==e[2][2])
        return (e[2][2]);
    else
        return 'k';
}

int doex(char ch,int n)
{
    int ki,itr=0;
    for(ki=1; ki<n; ki++) {
        if(mov[ki-1]==ch)
        {
            itr++;
        }
    }
    return itr;
}
char cvt(int n) {
    char new;
    if(n==1) {
        new='1';
    }
    else if(n==2) {
        new='2';
    }
    else if(n==3) {
        new='3';
    }
    else if(n==4) {
        new='4';
    }
    else if(n==5) {
        new='5';
    }
    else if(n==6) {
        new='6';
    }
    else if(n==7) {
        new='7';
    }
    else if(n==8) {
        new='8';
    }
    else if(n==9) {
        new='9';
    }

    return new;
}