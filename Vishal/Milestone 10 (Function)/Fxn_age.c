#include<stdio.h>

int age_calculator(yob,dob,mob,cd,cm,cy)
{
    int yr,mon,day,count=0;
    for(int i = yob; i<=cy; i++)
    {
        if(check_leapyear(i)==1)
            count++;
    }
    if(cm<mob)
    {
        yr = cy -1- yob;
        if(cd<dob)
        {
            mon = 11 - (mob-cm);
            if(mob==1)
            day = (31 - dob) + cd;
            else if(mob==3||mob==5||mob==7||mob==8||mob==10||mob==12)
            day = (31 - dob) + cd + count;
            else if(mob==4||mob==6||mob==9||mob==11)
                day = (30 - dob) + cd + count;
            else
                day = (28 - dob) + cd ;
        }
        else
        {
            mon = 12 - (mob-cm);
            day = cd - dob + count;
        }

    }
    else
    {
        yr = cy - yob;
        if(cd<dob)
        {
            mon = cm - mob -1;
            if(mob==1)
            day = (31 - dob) + cd;
            else if(mob==3||mob==5||mob==7||mob==8||mob==10||mob==12)
                day = (31 - dob) + cd + count;
            else if(mob==4||mob==6||mob==9||mob==11)
                day = (30 - dob) + cd + count;
            else
                day = (28 - dob) + cd;
        }   
            else
            {
                mon = cm - mob;
                day = cd - dob + count;
            }

        }
        printf("\n%dyears %dmonths %ddays",yr,mon,day);

    }
    int check_leapyear(yr)
    {
        if(yr%4==0||(yr%100==0&&yr%400==0))
            return 1;
    }
    int main()
    {
        int yob,dob,mob,cd,cm,cy,re;
        printf("Enter the date of birth in DD MM YYYY format\n");
        scanf("%d%d%d",&dob,&mob,&yob);
        printf("\nEnter the current date in DD MM YYYY format\n");
        scanf("%d%d%d",&cd,&cm,&cy);
        printf("\nDate of birth : %d/%d/%d",dob,mob,yob);
        printf("\nCurrent date : %d/%d/%d",cd,cm,cy);
        age_calculator(yob,dob,mob,cd,cm,cy);

    }