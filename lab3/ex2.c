#include<stdio.h>
#define N 50
long fun(char *s)
{
	int i,t;             //t记录临时加的数 
	long sum =0;
	for(i=0;s[i];i++)
	{
		if(s[i]>='0'&&s[i]<='9')
		t=s[i]-'0';       //当字符是0~9时保持原数不变
		if(s[i]>='a'&&s[i]<='z')
		t=s[i]-'a'+10;
		if(s[i]>='A'&&s[i]<='Z')
		t=s[i]-'A'+10;
		sum=sum*16+t;
	}
	return sum;
 } 
int main()
{
	int m;
	char s[N];       //字符串与字符数组相结合的方式 
	printf("Enter 16进制数：");
	scanf("%s",s);        //注意此处%s 
	m=fun(s);
	printf("%d",m);
 }





#include<stdio.h>

#include<math.h>

int power(int base, int n){

    int i,p;

    p=1;

    for (i=1;i<=n;++i)

    p = p*base;

    return p;

}

int main()

{

    char number1[18] = {0};

    int i = 0;

    char number;

    int sum = 0;

    int gen =-1;

    unsigned int b = 1;

    printf("please input a positive hexadecimal number(start with 0X/0x)\n");

    while((number = getchar()) != '\n'){

        number1[i]=number;

        i++;

        gen++;

    }

        if(number1[0]!='0'){

        printf("input error\n");

        return 0;}

        if(number1[1]!='x'&&number1[1]!='X'){

            printf("input error\n");

            return 0;

        }

        i--;

        while(i > 1)

    {

            if(number1[i]<='9'&&number1[i]>='0')

                sum+=(number1[i]-'0')*power(16,gen-i);

            else if(number1[i]>='A'&&number1[i]<='F')

                sum+=(number1[i]-'A'+10)*power(16,gen-i);

            else if(number1[i]>='a'&&number1[i]<='f')

            sum+=(number1[i]+'A'-'a'-'A'+10)*power(16,gen-i);

            else{

                printf("input error\n");

                return 0;

                }

            i--;

    }

    while(b!=0){

        b=b<<1;

    }

    if(sum>b-1){

    printf("the max is %u,your input number  is too big\n",b-1);

    }

    else printf("%d\n",sum);

    return 0 ;

}