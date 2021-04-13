int waysUpStair(int n)
{
	
	if(n==1 || n==0)
    {
        return 1;
    }
    if(n==2)
        return 2;
   else
    	return waysUpStair(n-1)+waysUpStair(n-2)+waysUpStair(n-3);

}

