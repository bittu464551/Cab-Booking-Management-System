#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<string.h>
char AdminName[]="admin";
char AdminPassword[]="admin";
void delete_allcrecord();
void append_customer();
void customer_detail();
void delete_customer();
void delete_alldrecord();
void append_driver();
void driver_detail();
void SetColor(int ForgC);
void register_customer();
void cabpay_balance(int,float*);
void cab_booking(int ,char[15]);
void booking_record();


int NumberOfCab[5]={01,02,03,04,05};
int Cabstatus[5]={1,1,1,1,1};

typedef struct customer
{
    int cu_id;
    int cu_age;
    long long mobile_no;
    char name[15];
    char pick_up[15];
    char drop[15];
    int cab_no;
    char cu_password[15];
    float cabpay_balance;
}customer;
typedef struct driver
{
    int dr_id;
    char name[15];
    int dr_age;
    long long mobile_no;
    long long license_no;
}driver;

int main()
{

    system("Color 0");
    SetColor(34);
    printf("\t\t\t\t\t             Welcome            \n");
    printf("\t\t\t\t\t               To               \n");
    printf("\t\t\t\t\t        Cab Booking System       \n");
    printf("\t\t\t\t\t---------------------------------\n");
    printf("\t\t\t\t\t<");
    Sleep(0);
    printf(">");
    Sleep(0);
    printf("\t<");
    Sleep(0);
    printf(">");
    Sleep(0);
    printf("\t<");
    Sleep(0);
    printf(">");
    Sleep(0);
    printf("\t<");
    Sleep(0);
    printf(">");
    sleep(0);
    printf("\t<");
    sleep(0);
    printf(">");
    Sleep(1000);


    int wish;
    char choice;
    do{
         system("cls");
         SetColor(14);
         printf("\t\t\t\t\t       CAB BOOKING SYSTEM      \n");
         printf("\t\t\t\t\t-------------------------------\n\n\n\n");

         SetColor(11);
         printf("\t\t1. ADMIN LOGIN \n\n\n");
         printf("\t\t2. CUSTOMER LOGIN     \n\n\n");
         printf("\t\t3. EXIT           \n\n\n");

       /*char UserName[15];
       char UserPassword[15];
       int LoginSuccess=0;*/
        SetColor(7);
        printf("\n\t\tEnter Your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            system("cls");
            char UserName[15];
            char UserPassword[15];
            int LoginSuccess=0;
            do{
                    system("cls");
                    SetColor(14);
                    printf("\t\t\t\t\t          ADMIN LOGIN            \n");
                    printf("\t\t\t\t\t---------------------------------\n\n\n\n");
                    SetColor("color green");
                    //printf("\t\t\tHint:- admin\n\n");
                    SetColor(11);
                    printf("\t\t\tUSER ID: ");
                    scanf("%s",UserName);
                    printf("\n\n\t\t\tPASSWORD: ");
                    char ch;
                    /*for(int i=0;i<strlen(AdminPassword);i++)
                    {
                        ch=getch();
                        UserPassword[i]=ch;
                        printf("*");
                    }*/
                    scanf("%s",UserPassword);
                    int x=strcmp(AdminName,UserName);
                    int y=strcmp(AdminPassword,UserPassword);
                    printf("%d %d",x,y);
                    if(!(x||y)){
                            printf("\n\n\t\t\tLogin Successful.....\n");
                            Sleep(1000);
                            LoginSuccess=1;
                            int wish_a;
                            int choice_a;
                            int wish_cr;
                            int choice_cr;
                            int choice_dr;
                            int wish_dr;
                            do{
                                system("cls");
                                SetColor(14);
                                printf("\t\t\t\t\t        ADMINISTRATION         \n");
                                printf("\t\t\t\t\t-------------------------------\n\n\n\n");
                                SetColor(11);
                                printf("\t\t1. CUSTOMER RECORD\n");
                                printf("\t\t2. DRIVER RECORD\n");
                                printf("\t\t3. BOOKING RECORD\n");
                                printf("\t\t4. CAB STATUS\n");
                                printf("\t\t5. CANCLE BOOKING\n");
                                printf("\t\t6. LOGOUT\n\n");
                                SetColor(7);
                                printf("\n\t\tENTER YOUR CHOICE:");
                                scanf("%d",&choice_a);

                                switch(choice_a)
                                {
                                case 1:
                                    do{
                                            system("cls");
                                            SetColor(14);
                                            printf("\t\t\t\t\t       CUSTOMER RECORD        \n");
                                            printf("\t\t\t\t\t------------------------------\n\n\n\n");
                                            SetColor(11);
                                            printf("\t\t1. APPEND CUSTOMER\n");
                                            printf("\t\t2. DELETE CUSTOMER\n");
                                            printf("\t\t3. CUSTOMER DETAIL\n");
                                            printf("\t\t4. DELETE ALL RECORD\n");
                                            printf("\t\t5. EXIT\n");
                                            SetColor(7);
                                            printf("\n\n\n\t\tENTER YOUR CHOICE:");
                                            scanf("%d",&choice_cr);
                                            switch(choice_cr)
                                            {
                                                case 1:
                                                    append_customer();
                                                    break;
                                                case 2:
                                                    delete_customer();
                                                    break;
                                                case 3:
                                                    customer_detail();
                                                    break;
                                                case 4:
                                                    delete_allcrecord();
                                                    break;
                                                case 5:
                                                    printf("\t\tBack To Admin");
                                                    break;
                                                default:
                                                    printf("\n\t\tYOU ENTER DEFAULT:");
                                                    break;
                                            }
                                            if(choice_cr==5)
                                            {
                                                break;
                                            }
                                            printf("\n\n\n\t\tENTER ANY KEY TO CONTINUE.....:");
                                            wish_cr=getch();
                                    }while(wish_cr);
                                    break;
                                case 2:
                                    do{
                                            system("cls");
                                            SetColor(14);
                                            printf("\t\t\t\t\t        Driver Record        \n");
                                            printf("\t\t\t\t\t-----------------------------\n\n\n\n");
                                            SetColor(11);
                                            printf("\t\t1. APPEND DRIVER\n");
                                            printf("\t\t2. DELETE DRIVER\n");
                                            printf("\t\t3. DRIVER DETAIL\n");
                                            printf("\t\t4. DELETE ALL RECORD\n");
                                            printf("\t\t5. EXIT\n");
                                            printf("\t\tENTER YOUR CHOICE:");
                                            scanf("%d",&choice_dr);
                                            switch(choice_dr)
                                            {
                                                case 1:
                                                    append_driver();
                                                    break;
                                                case 2:
                                                    delete_driver();
                                                    break;
                                                case 3:
                                                    driver_detail();
                                                    break;
                                                case 4:
                                                    delete_alldrecord();
                                                    break;
                                                case 5:
                                                    printf("\t\tBack To Driver Record\n");
                                                    break;
                                                default:
                                                    printf("\t\tYou Enter Default:\n");
                                                    break;
                                            }
                                            if(choice_dr==5)
                                            {
                                                break;
                                            }
                                            printf("\t\tEnter any Key to continue:");
                                            wish_dr=getch();
                                    }while(wish_dr);
                                    break;
                                case 3:
                                    system("cls");
                                    SetColor(14);
                                    printf("\t\t\t\t\t         BOOKING RECORD       \n");
                                    printf("\t\t\t\t\t------------------------------\n\n\n\n");
                                    booking_record();
                                    break;
                                case 4:
                                    system("cls");
                                    SetColor(14);
                                    printf("\t\t\t\t\t          CAB STATUS          \n");
                                    printf("\t\t\t\t\t------------------------------\n\n\n\n");
                                    SetColor(11);
                                    for(int i=0;i<5;i++)
                                    {
                                        if(Cabstatus[i]==1)
                                        {
                                            printf("Cab %d Is Free\n",NumberOfCab[i]);
                                        }
                                        else
                                        {
                                            printf("Cab %d IS NOT Free\n",NumberOfCab[i]);
                                        }
                                    }
                                    break;
                                case 5:
                                    break;
                                case 6:
                                    printf("\t\tFor Logout\n");
                                    break;
                                default:
                                    printf("\t\tYou Enter Wrong choice\n");
                                    break;
                                }

                                if(choice_a==6)
                                {
                                    break;
                                }
                                printf("\t\tPress any key to continue.........\n");
                                wish_a=getch();
                             }while(wish_a);
                             break;
                   }
                   else{
                        printf("\t\tIncorrect User Name and Password\n");
                        printf("\t\tPlease Try Again\n");
                        Sleep(1000);
                   }
            }while(!LoginSuccess);
            break; //end of case 1
        case 2:
            system("cls");
            int cu_choice;
            int cu_wish;
            do{
                system("cls");
                SetColor(14);
                printf("\t\t\t\t\t         CUSTOMER LOGIN         \n");
                printf("\t\t\t\t\t--------------------------------\n\n\n\n");
                SetColor(11);
                printf("\t\t1. LOGIN\n\n\n");
                printf("\t\t2. REGISTER\n\n\n");
                printf("\t\t3. EXIT\n\n\n");
                printf("\n\t\tEnter Your choice: ");
                scanf("%d",&cu_choice);
                switch(cu_choice)
                {
                    case 1:
                        SetColor(14);
                        int log_choice;
                        int log_wish;

                        do
                        {
                            customer c;
                            FILE *fp;
                            int log_id,temp_id;
                            char log_password[15],temp_password[15];
                            float balance;
                            fp=fopen("cr_registration.txt","r");
                            system("cls");
                            SetColor(14);
                            printf("\t\t\t\t\t         LOGIN TO CUSTOMER       \n");
                            printf("\t\t\t\t\t---------------------------------\n\n\n\n");
                            SetColor(11);
                            printf("\t\t USER ID: ");
                            scanf("%d",&log_id);
                            printf("\n\t\t PASSWORD: ");
                            char ch;
                            while(fread(&c,sizeof(customer),1,fp))
                            {
                                if(c.cu_id==log_id)
                                {
                                    temp_id=c.cu_id;
                                    strcpy(temp_password,c.cu_password);
                                    balance=c.cabpay_balance;
                                }
                            }
                            for(int i=0;i<strlen(temp_password);i++)
                            {
                                ch=getch();
                                log_password[i]=ch;
                                printf("*");
                            }
                            fclose(fp);
                            int x=strcmp(temp_password,log_password);
                            int y=!(temp_id==log_id);
                            if(!(x||y))
                            {
                                SetColor(7);
                                int choice_log;
                                int wish_log;
                                printf("\n\n\t\t Login Successful.....");
                                Sleep(500);
                                do
                                {
                                    system("cls");
                                    SetColor(14);
                                    printf("\t\t\t\t\t         CAB BOOKING        ");
                                    printf("\n\t\t\t\t\t-------------------------\n\n\n");
                                    SetColor(11);
                                    printf("\n\t\t   CURRENT BALANCE :%f",balance);
                                    printf("\n\n\t\t1. ADD MONEY TO BALANCE");
                                    printf("\n\t\t2. CAB BOOKING");
                                    printf("\n\t\t3. CURRENT CAB");
                                    printf("\n\t\t4. CANCLE BOOKING");
                                    printf("\n\t\t5. DELETE ACCOUNT");
                                    printf("\n\t\t6. LOGOUT");
                                    printf("\n\n\t\tENTER YOUR CHOICE: ");
                                    scanf("%d",&choice_log);
                                    switch(choice_log)
                                    {
                                        case 1:
                                            printf("\t\tCAB PAY BALANCE:");
                                            cabpay_balance(temp_id,&balance);
                                            break;
                                        case 2:
                                            printf("\t\tCAB BOOKING");
                                            cab_booking(temp_id,temp_password);
                                            break;
                                        case 3:
                                            printf("\t\tCURRENT CAB");
                                            break;
                                        case 4:
                                            printf("\t\tCANCLE BOOKING");
                                            break;
                                        case 5:
                                            printf("\t\tDELETE ACCOUNT");
                                            break;
                                        case 6:
                                            printf("\t\tLOGOUT");
                                            break;
                                        default:
                                            printf("\t\tYOUR ENTER DEFAULT");
                                            break;
                                    }
                                    if(choice_log==6)
                                    {
                                        break;
                                    }
                                    printf("\n\t\tEnter any key for continue and another 0:");
                                    wish_log=getch();
                                }while(choice_log);
                            }
                            else
                            {
                                printf("\n\n\t\t Wrong User Name and Password\n");
                            }

                            printf("\n\n\t\t Press any key for continue another wise 0: ");
                            scanf("%d",&log_wish);
                            if(log_wish==0)
                            {
                                break;
                            }
                            //log_wish=getch();
                        }while(log_wish);
                        break;
                    case 2:
                        register_customer();
                        break;
                    case 3:
                        printf("\t\tBack");
                        break;
                    default:
                        printf("\n\t\tYou Enter Default");
                        break;
                }
                if(cu_choice==3)
                {
                    break;
                }
                cu_wish=getch();
            }while(cu_wish);
            break;         //end of case 2
        case 3:

            //clrscr();
           /* ifstream InFile;
            char ch;
            InFile.open("Exit.txt"):
            while(!InFile.eof())
            {
                InFile.get ( ch ) ;
                printf("%d",ch);
            }
            InFile.close();       //file close
            exit(0);*/
            break;             //end of case 3
        default:
            printf("\t\tYou Enter Wrong choice");
            break;
        }
        if(choice==3){
            break;
        }
        printf("\n\t\tPress any key to continue.........\n");
        wish=getch();
    }while(wish);
    return 0;
}

void delete_allcrecord()
{
    customer *c;
    FILE *fp;
    /*int n;
    printf("\n\t\tHow many customer you want:");
    scanf("%d",&n);
    c=(customer*)calloc(n,sizeof(customer));*/
    fp=fopen("cr_registration.txt","w");
   /* for(int i=0;i<n;i++)
    {
        printf("\n\t\tEnter customer Id:");
        scanf("%d",&c[i].cu_id);
        fflush(stdin);
        printf("\n\t\tEnter customer Name:");
        scanf("%s",&c[i].name);
        printf("\n\t\tEnter customer Age:");
        scanf("%d",&c[i].cu_age);
        printf("\n\t\tEnter customer mobile_no:");
        scanf("%lld",&c[i].mobile_no);
        printf("\n\t\tEnter cabpay balance:");
        scanf("%f",&c[i].cabpay_balance);
        printf("\n\t\tEnter customer password:");
        scanf("%s",&c[i].cu_password);
        fwrite(&c[i],sizeof(customer),1,fp);
    }*/
    fclose(fp);
}
void append_customer()
{
    customer *c;
    FILE *fp;
    int n;
    printf("\n\t\tHow many customer you want:");
    scanf("%d",&n);
    c=(customer*)calloc(n,sizeof(customer));
    fp=fopen("cr_registration.txt","a");
    for(int i=0;i<n;i++)
    {
        printf("\n\t\tEnter customer Id:");
        scanf("%d",&c[i].cu_id);
        fflush(stdin);
        printf("\n\t\tEnter customer Name:");
        scanf("%s",&c[i].name);
        printf("\n\t\tEnter customer Age:");
        scanf("%d",&c[i].cu_age);
        printf("\n\t\tEnter customer mobile_no:");
        scanf("%lld",&c[i].mobile_no);
        printf("\n\t\tEnter cabpay balance:");
        scanf("%f",&c[i].cabpay_balance);
        printf("\n\t\tEnter customer password:");
        scanf("%s",&c[i].cu_password);
        fwrite(&c[i],sizeof(customer),1,fp);

    }
    fclose(fp);
}
void delete_customer()
{
    customer c;
    FILE *fp,*fp1;
    int cu_id,found=0;
    fp=fopen("cr_registration.txt","r");
    fp1=fopen("temp.txt","w");
    printf("Enter cu_id:\n");
    scanf("%d",&cu_id);
    while(fread(&c,sizeof(customer),1,fp))
    {
        if(c.cu_id==cu_id)
        {
            found=1;
        }
        else
            fwrite(&c,sizeof(customer),1,fp1);
    }
    fclose(fp);
    fclose(fp1);
    if(found)
    {
        fp1=fopen("temp.txt","r");
        fp=fopen("cr_registration.txt","w");

        while(fread(&c,sizeof(customer),1,fp1))
        {
            fwrite(&c,sizeof(customer),1,fp);
        }
        fclose(fp);
        fclose(fp1);
    }
}
void customer_detail()
{
    customer c1;
    FILE *fp;
    fp=fopen("cr_registration.txt","r");
    printf("\n\t\tCu_Id\tCu_Name\t\tCu_Age\tCu_Mobile_No\tCabpay_Balance\tPickup_Loc\tDrop_Loc\tCab_No\tCu_Password\n");
    while(fread(&c1,sizeof(customer),1,fp))
    {
        printf("\n\t\t%d\t%s\t\t%d\t%lld\t%f\t\t\t%s\t%s\t%d\t%s\n",c1.cu_id,c1.name,c1.cu_age,c1.mobile_no,c1.cabpay_balance,c1.pick_up,c1.drop,c1.cab_no,c1.cu_password);
        fflush(stdin);
    }
    fclose(fp);
}

void delete_alldrecord()
{
    driver *d;
    FILE *fp;
    /*int n;
    printf("How many customer you want:\n");
    scanf("%d",&n);
    d=(driver*)calloc(n,sizeof(driver));*/
    fp=fopen("dr_registration.txt","w");
    /*for(int i=0;i<n;i++)
    {
        printf("Enter driver Id:\n");
        scanf("%d",&d[i].dr_id);
        printf("Enter driver Name:\n");
        scanf("%s",&d[i].name);
        printf("Enter driver Age:\n");
        scanf("%d",&d[i].dr_age);
        printf("Enter driver License:\n");
        scanf("%lld",&d[i].license_no);
        printf("Enter driver Mobile_no:\n");
        scanf("%lld",&d[i].mobile_no);
        fwrite(&d[i],sizeof(driver),1,fp);
    }*/
    fclose(fp);
}
void append_driver()
{
    driver *d;
    FILE *fp;
    int n;
    printf("How many driver you want:\n");
    scanf("%d",&n);
    d=(driver*)calloc(n,sizeof(driver));
    fp=fopen("dr_registration.txt","a");
    for(int i=0;i<n;i++)
    {
        printf("Enter driver_id:\n");
        scanf("%d",&d[i].dr_id);
        printf("Enter driver Name:\n");
        scanf("%s",&d[i].name);
        printf("Enter driver Age:\n");
        scanf("%d",&d[i].dr_age);
        printf("Enter driver License:\n");
        scanf("%lld",&d[i].license_no);
        printf("Enter driver Mobile_no:\n");
        scanf("%lld",&d[i].mobile_no);
        fwrite(&d[i],sizeof(driver),1,fp);
    }
    fclose(fp);
}
void delete_driver()
{
    driver d;
    FILE *fp,*fp1;
    int dr_id,found=0;
    fp=fopen("dr_registration.txt","r");
    fp1=fopen("temp1.txt","w");
    printf("Enter dr_id:\n");
    scanf("%d",&dr_id);
    while(fread(&d,sizeof(driver),1,fp))
    {
        if(d.dr_id==dr_id)
        {
            found=1;
        }
        else
            fwrite(&d,sizeof(driver),1,fp1);
    }
    fclose(fp);
    fclose(fp1);
    if(found) //1!=0
    {
        fp1=fopen("temp1.txt","r");
        fp=fopen("dr_registration.txt","w");

        while(fread(&d,sizeof(driver),1,fp1))
        {
            fwrite(&d,sizeof(driver),1,fp);
        }
        fclose(fp);
        fclose(fp1);
    }
}

void driver_detail()
{
    driver d;
    FILE *fp;
    fp=fopen("dr_registration.txt","r");
    printf("\tDr_Id\tDr_Name\tDr_Age\tDr_Lic\tDr_mobile_No\tCab_No\n");
    while(fread(&d,sizeof(driver),1,fp))
    {
        printf("\t%d\t%s\t%d\t%lld\t%lld\n",d.dr_id,d.name,d.dr_age,d.license_no,d.mobile_no);
    }
    fclose(fp);
}


void SetColor(int ForgC)
{
     WORD wColor;
     //This handle is needed to get the current background attribute

     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     CONSOLE_SCREEN_BUFFER_INFO csbi;
     //csbi is used for wAttributes word

     if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
     {
          //To mask out all but the background attribute, and to add the color
          wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
          SetConsoleTextAttribute(hStdOut, wColor);
     }
     return;
}
void register_customer()
{
    customer c;
    FILE *fp;
    int i;
    fp=fopen("cr_registration.txt","a");
    printf("\nENTER CUSTOMER ID: ");
    scanf("%d",&c.cu_id);
    printf("\nENTER NAME: ");
    scanf("%s",c.name);
    printf("\nENTER AGE: ");
    scanf("%d",&c.cu_age);
    printf("\nENTER MOBILE NO: ");
    scanf("%lld",&c.mobile_no);
    printf("\nCREATE PASSWORD: ");
    scanf("%s",c.cu_password);
    fwrite(&c,sizeof(customer),1,fp);
    fclose(fp);
    printf("\n\nREGISTRATION SUCCESSFUL...");

}

void cabpay_balance(int cu_id,float *balance)
{
    customer c;
    FILE *fp,*fp1;
    int found=0;
    float cabpay_balance;
    char password[15];
    printf("\n\t\tHOW MANY YOU WANT TO ADD BALANCE:");
    scanf("%f",&cabpay_balance);
    *balance+=cabpay_balance;
    printf("\n\t\tENTER PASSWORD:");
    scanf("%s",&password);
    fp=fopen("cr_registration.txt","r");
    fp1=fopen("temp.txt","w");
    int x,y;
    while(fread(&c,sizeof(customer),1,fp))
    {
        x=(!(c.cu_id==cu_id));
        y=strcmp(c.cu_password,password);
        if(!(x||y))
        {
            found=1;
            fflush(stdin);
            /*printf("\nHOW MANY YOU WANT TO ADD BALANCE:");
            scanf("%f",&c.cabpay_balance);*/
            c.cabpay_balance+=cabpay_balance;
            printf("\n\t\tBALANCE ADDED SUCCESSFUL.......");
        }
        fwrite(&c,sizeof(customer),1,fp1);
    }
    fclose(fp);
    fclose(fp1);
    if(found)
    {
        fp1=fopen("temp.txt","r");
        fp=fopen("cr_registration.txt","w");
        while(fread(&c,sizeof(customer),1,fp1))
        {
            fwrite(&c,sizeof(customer),1,fp);
        }
        fclose(fp);
        fclose(fp1);
    }
    else
    {
        printf("\nWRONG PASSWORD");
    }
}

void cab_booking(int cu_id,char password[15])
{
    customer c;
    FILE *fp,*fp1;
    int found=0;
    char pick_up[15];
    char drop[15];
    fp=fopen("cr_registration.txt","r");
    fp1=fopen("cab_booking.txt","a");
    int x,y;
    while(fread(&c,sizeof(customer),1,fp))
    {
        x=(!(c.cu_id==cu_id));
        y=strcmp(c.cu_password,password);
        if(!(x||y))
        {
            found=1;
            fflush(stdin);
            /*c.pick_up=pick_up;
            c.drop=drop;*/
            printf("\nENTER PICKUP LOCATION:");
            scanf("%s",&c.pick_up);
            printf("\nENTER DROP LOCATION:");
            scanf("%s",&c.drop);
            char ch[15]="INDORE";
            char ch1[15]="BHOPAL";
            /*int x=strcmp(ch,c.pick_up);
            int y=strcmp(ch1,c.drop);*/
            if(strcmp(ch,c.pick_up)==strcmp(ch1,c.drop))
            {
                printf("\nAMOUNT =1000");
            }
            printf("\n\t\tCAB BOOKED SUCCESSFUL.......");
            printf("\n\t\tHISTRY");
            fwrite(&c,sizeof(customer),1,fp1);
        }
      /*  fwrite(&c,sizeof(customer),1,fp1);*/
    }
    fclose(fp);
    fclose(fp1);
    if(found)
    {
        fp1=fopen("cab_booking.txt","r");
        fflush(stdin);

        printf("\n\t\tcu_id\tpick_up\tdrop");
        while(fread(&c,sizeof(customer),1,fp1))
        {
            x=(!(c.cu_id==cu_id));
            y=strcmp(c.cu_password,password);
            printf("%d %d",x,y);
            if(x==y)
            {
                //fwrite(&c,sizeof(customer),1,fp);
                printf("\n\t\t%d\t%s\t%s",c.cu_id,c.pick_up,c.drop);
            }
        }
        /*c.pick_up=pick_up;
        c.drop=drop;*/
       // printf("\n\t\tCAB BOOKED SUCCESSFUL.......");

        //fp=fopen("cr_registration.txt","w");
      /*  printf("\n\t\tcu_id\tpick_up\tdrop");
        while(fread(&c,sizeof(customer),1,fp1))
        {
            //fwrite(&c,sizeof(customer),1,fp);
            printf("\n\t\t%d\t%s\t%s",c.cu_id,c.pick_up,c.drop);
        }*/
     //   fclose(fp);
        fclose(fp1);
    }
    else
    {
        printf("\nRecord not found");
    }

}

void booking_record()
{
    customer c;
    FILE *fp;
    fp=fopen("cab_booking.txt","r");
    fflush(stdin);
    printf("\n\t\tcu_id\tpick_up\tdrop");
    while(fread(&c,sizeof(customer),1,fp))
    {
        printf("\n\t\t%d\t%s\t%s",c.cu_id,c.pick_up,c.drop);
    }
    fclose(fp);
}






