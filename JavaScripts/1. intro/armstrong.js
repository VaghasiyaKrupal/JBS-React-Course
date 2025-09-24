let num=370,r,arm=0,i;

	for(i=num; i!=0;i=i/10)
	{
		r=i%10;
		console.log(r);
		arm=arm+(r*r*r);
		console.log(arm);
		
		
	}

	if(num==arm)
	{
		console.log("Armstrong number.");
	}
	else
	{
		console.log("Not armstrong number.");
	}