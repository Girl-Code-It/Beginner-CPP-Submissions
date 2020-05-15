#include<stdio.h>

void main()
{
    int n,odd = 0,even = 0,Zpower = 0,Vpower = 0;
    scanf("%d",&n);

    int zombies[n],vampires[n],a[n];
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);
        
    //Sort the power
    for(int i = 1; i<n; i++)
    {
        int key = a[i];
        int j = i-1;

        while(j >= 0 && a[j] > key)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }
    //Divide
    for(int i=0; i<n; i++)
    {
        if(a[i]%2 != 0)
        {
            Vpower += a[i];
            vampires[odd] = a[i];
            odd++;
        }
        else
        {
            Zpower += a[i];
            zombies[even] = a[i];
            even++;
        }
    }
    //Print zombies power
    for(int i=0; i<even; i++)
        printf("%d ",zombies[i]);

    //Print total power of Zombies
    printf("%d ",Zpower);

    //print Vampires power
    for(int i=0; i<odd; i++)
        printf("%d ",vampires[i]);

    //Total power of Vampires
    printf("%d\n",Vpower);
}