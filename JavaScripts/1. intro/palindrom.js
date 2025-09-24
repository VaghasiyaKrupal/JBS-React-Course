let n = 121, r, rev=0;
let i = n;

for(i=n;i!=0;i=parseInt(i/10))
{
		r=i%10;
		rev=rev*10+r;
		
}

if(rev===n)
{
	console.log("Palindrome number");
}
else
{
	console.log("Not Palindrome number");
}
