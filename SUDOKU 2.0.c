# include<stdio.h>
# include<conio.h>
# include<stdlib.h>
int main()
{
    int mat[9][9],mat1[9][9];
    int a,b,c,d,e,f,i,j,k,l,m,n,p,q,x,y,z;
    int flag=0,flag1=0,flag2=0,flag3=0,flag4=0,count;
    int arr[9],index,mode;
    char mat2[9][9],ch;
    for(i=0;i<9;i++)
    {
        for(j=0;j<9;j++)
        {
            mat[i][j] = 0;
        }
    }
    a=1;
    srand(time(0));
    while(a<=9)
    {
        x = rand()%3;
        y = rand()%3;
        if(mat[x][y]==0)
        {
            mat[x][y] = a;
            a++;
        }
    }
    a = mat[0][0];
    k=0;
    while(k<=6)
    {
        l=0;
        while(l<=6)
        {
            for(i=k;i<k+3;i++)
            {
                for(j=l;j<l+3;j++)
                {
                    if(mat[i][j]==a)
                        flag=1;
                }
            }
            if(flag==0)
            {
                for(i=k;i<k+3;i++)
                {
                    for(j=l;j<l+3;j++)
                    {
                        for(b=0;b<=8;b++)
                        {
                            if(mat[i][b]==a)
                                flag1=1;
                            if(mat[b][j]==a)
                                flag2=1;
                        }
                        if((flag1==0)&&(flag2==0))
                        {
                            mat[i][j]=a;
                            flag3=1;
                        }
                        flag1=0;flag2=0;
                        if(flag3==1)
                        {
                            flag4=1;
                            flag3=0;
                            break;
                        }
                    }
                    if(flag4==1)
                    {
                        flag4=0;
                        break;
                    }
                }
            }
            flag=0;
          l = l+3;
        }
        k = k+3;
    }
    index=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            arr[index]=mat[i][j];
            index++;
        }
    }
    for(i=0;i<=2;i++)
    {
        for(j=3;j<=5;j++)
        {
            if(mat[i][j]==a)
            {
                p=i;q=j;
            }
        }
    }

    i=p;j=q+1;index=1;
    while(1)
    {
        count = 1;
        for(i;i<=2;i++)
        {
            for(j;j<=5;j++)
            {
                if(mat[i][j]!=0)
                    count++;
                if(index<9)
                {
                    mat[i][j]=arr[index];
                    index++;
                }
            }
            j=3;
        }
        i=0;
        if(count>=9)
            break;
    }

    for(i=0;i<=2;i++)
    {
        for(j=6;j<=8;j++)
        {
            if(mat[i][j]==a)
            {
                p=i;q=j;
            }
        }
    }

    i=p;j=q+1;index=1;
    while(1)
    {
        count = 1;
        for(i;i<=2;i++)
        {
            for(j;j<=8;j++)
            {
                if(mat[i][j]!=0)
                    count++;
                if(index<9)
                {
                    mat[i][j]=arr[index];
                    index++;
                }
            }
            j=6;
        }
        i=0;
        if(count>=9)
            break;
    }
    for(i=3;i<=5;i++)
    {
        for(j=0;j<=2;j++)
        {
            if(mat[i][j]==a)
            {
                p=i;q=j;
            }
        }
    }

    i=p;j=q+1;index=1;
    while(1)
    {
        count = 1;
        for(i;i<=5;i++)
        {
            for(j;j<=2;j++)
            {
                if(mat[i][j]!=0)
                    count++;
                if(index<9)
                {
                    mat[i][j]=arr[index];
                    index++;
                }
            }
            j=0;
        }
        i=3;
        if(count>=9)
            break;
    }
    for(i=3;i<=5;i++)
    {
        for(j=3;j<=5;j++)
        {
            if(mat[i][j]==a)
            {
                p=i;q=j;
            }
        }
    }

    i=p;j=q+1;index=1;
    while(1)
    {
        count = 1;
        for(i;i<=5;i++)
        {
            for(j;j<=5;j++)
            {
                if(mat[i][j]!=0)
                    count++;
                if(index<9)
                {
                    mat[i][j]=arr[index];
                    index++;
                }
            }
            j=3;
        }
        i=3;
        if(count>=9)
            break;
    }
    for(i=3;i<=5;i++)
    {
        for(j=6;j<=8;j++)
        {
            if(mat[i][j]==a)
            {
                p=i;q=j;
            }
        }
    }

    i=p;j=q+1;index=1;
    while(1)
    {
        count = 1;
        for(i;i<=5;i++)
        {
            for(j;j<=8;j++)
            {
                if(mat[i][j]!=0)
                    count++;
                if(index<9)
                {
                    mat[i][j]=arr[index];
                    index++;
                }
            }
            j=6;
        }
        i=3;
        if(count>=9)
            break;
    }
    for(i=6;i<=8;i++)
    {
        for(j=0;j<=2;j++)
        {
            if(mat[i][j]==a)
            {
                p=i;q=j;
            }
        }
    }

    i=p;j=q+1;index=1;
    while(1)
    {
        count = 1;
        for(i;i<=8;i++)
        {
            for(j;j<=2;j++)
            {
                if(mat[i][j]!=0)
                    count++;
                if(index<9)
                {
                    mat[i][j]=arr[index];
                    index++;
                }
            }
            j=0;
        }
        i=6;
        if(count>=9)
            break;
    }
    for(i=6;i<=8;i++)
    {
        for(j=3;j<=5;j++)
        {
            if(mat[i][j]==a)
            {
                p=i;q=j;
            }
        }
    }

    i=p;j=q+1;index=1;
    while(1)
    {
        count = 1;
        for(i;i<=8;i++)
        {
            for(j;j<=5;j++)
            {
                if(mat[i][j]!=0)
                    count++;
                if(index<9)
                {
                    mat[i][j]=arr[index];
                    index++;
                }
            }
            j=3;
        }
        i=6;
        if(count>=9)
            break;
    }
for(i=6;i<=8;i++)
    {
        for(j=6;j<=8;j++)
        {
            if(mat[i][j]==a)
            {
                p=i;q=j;
            }
        }
    }

    i=p;j=q+1;index=1;
    while(1)
    {
        count = 1;
        for(i;i<=8;i++)
        {
            for(j;j<=8;j++)
            {
                if(mat[i][j]!=0)
                    count++;
                if(index<9)
                {
                    mat[i][j]=arr[index];
                    index++;
                }
            }
            j=6;
        }
        i=6;
        if(count>=9)
            break;
    }
    for(i=0;i<9;i++)
  {
      for(j=0;j<9;j++)
      {
         // printf("%d ",mat[i][j]); UNCOMMENT TO CHEAT
          mat1[i][j]=mat[i][j];
      }//printf("\n");
  }
    k=5;
    printf("!! WELCOME TO !!\n\n\n\n\n");
    printf("___________________________________________________________\n\n");
    for(i=1;i<=9;i++)
    {
        (i<=5)?(k--):(k++);
        for(j=1;j<=4;j++)
        {
            if(i==1||i==5||i==9)
                printf("%c ",1);
            else
            {  if(i<5){
                if(j==1)
                {
                    printf("%c ",2);
                }
                else
                    printf("  ");}
                else{
                if(j==4)
                {
                    printf("%c ",2);
                }
                else
                    printf("  ");}
            }
        }printf("  ");
        for(j=1;j<=4;j++)
        {
            if(i<9)
            {
                if(j==1||j==4)
                    printf("%c ",2);
                else
                    printf("  ");
            }
            else
            {
                printf("%c ",1);
            }
        }printf("  ");

       for(j=1;j<=4;j++)
        {
            if(i==1||i==9)
            {
                if(j!=4)
                    printf("%c ",1);
                else
                    printf("  ");
            }
            else
            {
                if(j==1||j==4)
                printf("%c ",2);
                else
                printf("  ");
            }
        }printf("  ");

        for(j=1;j<=4;j++)
        {
            if(i==1||i==9)
            {
                if(j!=4&&j!=1)
                    printf("%c ",1);
                else
                    printf("  ");
            }
            else
            {
                if(j==1||j==4)
                printf("%c ",2);
                else
                printf("  ");
            }
        }printf("  ");

        for(j=1;j<=5;j++)
        {
            if(j==1||j==k+1)
            {
                if(i==5)
                    printf("%c ",1);
                else{
                if(j==1)
                    printf("%c ",2);
                else
                    printf("%c ",1);}
            }
            else
                printf("  ");
        }printf("  ");

        for(j=1;j<=4;j++)
        {
            if(i<9)
            {
                if(j==1||j==4)
                    printf("%c ",2);
                else
                    printf("  ");
            }
            else
            {
                printf("%c ",1);
            }
        }printf("\n");
  }

  printf("___________________________________________________________\n\n\n\n");
  printf("\n\nPRESS ENTER \n\n");
  getch();
  printf("PLEASE READ THIS INSTRUCTION BEFORE STARTING GAME : \n\n");
  printf("You have to fill %c with numbers by selecting its position\n\n",4);
  printf("You can select position by entering X and Y coordinates as shown below :\n\n");
  for(i=0;i<9;i++)
  {
      for(j=0;j<9;j++)
      {
          printf("(%d,%d) ",i,j);
      }printf("\n");
  }
  printf("\n\nPRESS ENTER TO START ");
  getch();

    printf("Please select the mode : \n\n");
    printf("1 -> EASY\n");
    printf("2 -> MEDIUM\n");
    printf("3 -> HARD\n");
    printf("4 -> EXTREME\n\n");
    scanf("%d",&mode);
    printf("\n\n");
    switch(mode)
    {
        case 1: k = (81*45)/100;break;
        case 2: k = (81*59)/100;break;
        case 3: k = (81*65)/100;break;
        case 4: k = (81*85)/100;break;
        default : printf("Invalid Choice \n");exit(0);
    }
    i=0;
    while(i<k)
    {
        x = (rand())%9;
        y = (rand())%9;
        if(mat1[x][y]!=0){
            mat1[x][y] = 0;
            i++;}
    }

    for(i=0;i<9;i++)
    {
        for(j=0;j<9;j++)
        {
            a = mat1[i][j];
            switch(a)
            {
            case 0:mat2[i][j]=4;break;
            case 1:mat2[i][j]=49;break;
            case 2:mat2[i][j]=50;break;
            case 3:mat2[i][j]=51;break;
            case 4:mat2[i][j]=52;break;
            case 5:mat2[i][j]=53;break;
            case 6:mat2[i][j]=54;break;
            case 7:mat2[i][j]=55;break;
            case 8:mat2[i][j]=56;break;
            case 9:mat2[i][j]=57;break;
            }
        }
    }
    k=0;
    for(i=0;i<9;i++)
    {
        for(j=0;j<9;j++)
        {
            if(mat2[i][j]==4)
                k++;
            printf("%c ",mat2[i][j]);
        }printf("\n");
    }printf("\n\n");


    while(1)
    {
    printf("Enter the coordinates (x,y) where you want to put the value\n");
    scanf("%d%d",&x,&y);
    if(mat1[x][y]==0)
    {
        printf("Enter a number between 0 to 9\n");
        scanf("%d",&a);
        switch(a)
            {
            case 1:mat2[x][y]=49;break;
            case 2:mat2[x][y]=50;break;
            case 3:mat2[x][y]=51;break;
            case 4:mat2[x][y]=52;break;
            case 5:mat2[x][y]=53;break;
            case 6:mat2[x][y]=54;break;
            case 7:mat2[x][y]=55;break;
            case 8:mat2[x][y]=56;break;
            case 9:mat2[x][y]=57;break;
            }
            printf("\n");
            for(i=0;i<9;i++)
              {
                   for(j=0;j<9;j++)
                     {
                        printf("%c ",mat2[i][j]);
                     }printf("\n");
              }printf("\n");
            k=k-1;
     }
     else
     {
         printf("\n Invalid Input \n");
     }
     k=0;
     for(i=0;i<9;i++)
     {
         for(j=0;j<9;j++)
         {
             if(mat2[i][j]==4)
                k++;
         }
     }
     if(k==0)
        break;
    }

    flag=0;b=0;
    for(i=0;i<9;i++)
    {
        for(j=0;j<9;j++)
        {
            ch = mat2[i][j];
            switch(ch)
            {
            case '1':b=1;break;
            case '2':b=2;break;
            case '3':b=3;break;
            case '4':b=4;break;
            case '5':b=5;break;
            case '6':b=6;break;
            case '7':b=7;break;
            case '8':b=8;break;
            case '9':b=9;break;
            }
            if(mat[i][j]!=b){
                flag++;
                mat2[i][j]='!';}
        }
    }
    if(flag==0)
    {
        printf("\n\n YOU WIN \n\n\n\n");
        for(i=0;i<9;i++)
        {
            for(j=0;j<9;j++)
            {
                printf("%c ",1);
            }printf("\n");
        }
    }
    else{
        printf("\n\n YOU LOSE \n\n\n\n");
        for(i=0;i<9;i++)
        {
            for(j=0;j<9;j++)
            {
                printf("%c ",mat2[i][j]);
            }printf("\n");
        }
        }

    printf("\n\n!! THANKS FOR PLAYING !!\n");
    printf("HOPE YOU ENJOYED\n\n");
    getch();
    return 0;
}
