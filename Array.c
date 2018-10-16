#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
	int sum=0;
	int des[2];
	int children[10];
	pipe(des);
	int status;

	int arr[10];
	for(int i=0;i<1000;i++)
	{
		arr[i]=i;
		
	}


	int func(int a, int  b,int SUM)
	{	
		for(int z=a;z<=b;z++)
		{			
			SUM=SUM+z;	
		}
	    return SUM;
	}

	
		int sum1=0;
		int x1=fork();
		if(x1==0)
	
	    {
		
		close(des[0]);
		int res1=func(arr[0],[99],sum1);
		sum1=res1;
	
		children[0]=sum1;
		
		write(des[1], &sum1,sizeof(sum1));
		exit(0);
	    }

	   else if(x1>0)
	    {
		wait(&status);
		
		read(des[0], &sum1,sizeof(sum1));
		children[0]=sum1;
		sum=sum+sum1;		
	    }
		
		
		int x2=fork();int sum2=0;
	
		if(x2==0)
	
	    {
		
		close(des[0]);
		 int res2=func(arr[100],arr[199],sum2);

		sum2=res2;
	
		children[1]=sum2;
		write(des[1], &sum2,sizeof(sum2));
		exit(0);
	    }

	   else if(x2>0)
	    {
		wait(&status);
		
		read(des[0], &sum2,sizeof(sum2));
		
		children[1]=sum2;
		sum=sum+sum2;		
	    }




	    int x3=fork();int sum3=0;
	
		if(x3==0)
	    {
		 close(des[0]);
		 int res3=func(arr[200],arr[299],sum3);

		sum3=res3;
		children[2]=sum3;
		
		write(des[1], &sum3,sizeof(sum3));
		exit(0);
	    }

	   else if(x3>0)
	    {
		wait(&status);
		
		read(des[0], &sum3,sizeof(sum3));
		children[2]=sum3;
		sum=sum+sum3;		
	    }



           int x4=fork();int sum4=0;
	
		if(x4==0)
	    {
		 close(des[0]);
		 int res4=func(arr[300],arr[399],sum4);

		sum4=res4;
		children[3]=sum4;
		
		write(des[1], &sum4,sizeof(sum4));
		exit(0);
	    }

	   else if(x4>0)
	    {
		wait(&status);
		
		read(des[0], &sum4,sizeof(sum4));
		children[3]=sum4;
		sum=sum+sum4;		
	    }


	 int x5=fork();int sum5=0;
	
		if(x5==0)
	    {
		 close(des[0]);
		 int res5=func(arr[400],arr[499],sum5);

		sum5=res5;
		children[4]=sum5;
		
		write(des[1], &sum5,sizeof(sum5));
		exit(0);
	    }

	   else if(x5>0)
	    {
		wait(&status);
		
		read(des[0], &sum5,sizeof(sum5));
		children[4]=sum5;
		sum=sum+sum5;		
	    }

	    int x6=fork();int sum6=0;
	
		if(x6==0)
	    {
		 close(des[0]);
		 int res6=func(arr[500],arr[599],sum6);

		sum6=res6;
		children[5]=sum6;
		
		write(des[1], &sum6,sizeof(sum6));
		exit(0);
	    }

	   else if(x6>0)
	    {
		wait(&status);
		
		read(des[0], &sum6,sizeof(sum6));
		children[5]=sum6;
		sum=sum+sum6;		
	    }


		int x7=fork();int sum7=0;
	
		if(x7==0)
	    {
		 close(des[0]);
		 int res7=func(arr[600],arr[699],sum7);

		sum7=res7;
		children[6]=sum7;
		
		write(des[1], &sum7,sizeof(sum7));
		exit(0);
	    }

	   else if(x7>0)
	    {
		wait(&status);
		
		read(des[0], &sum7,sizeof(sum7));
		children[6]=sum7;
		sum=sum+sum7;		
	    }

		int x8=fork();int sum8=0;
	
		if(x8==0)
	    {
		 close(des[0]);
		 int res8=func(arr[700],arr[799],sum8);

		sum8=res8;
		children[7]=sum8;
		
		write(des[1], &sum8,sizeof(sum8));
		exit(0);
	    }

	   else if(x8>0)
	    {
		wait(&status);
		
		read(des[0], &sum8,sizeof(sum8));
		children[7]=sum8;
		sum=sum+sum8;		
	    }


		int x9=fork();int sum9=0;
	
		if(x9==0)
	    {
		 close(des[0]);
		 int res9=func(arr[800],arr[899],sum9);

		sum9=res9;
		children[8]=sum9;
		
		write(des[1], &sum9,sizeof(sum9));
		exit(0);
	    }

	   else if(x9>0)
	    {
		wait(&status);
		
		read(des[0], &sum9,sizeof(sum9));
		children[8]=sum9;
		sum=sum+sum9;		
	    }


		int x10=fork();int sum10=0;
	
		if(x10==0)
	    {
		 close(des[0]);
		 int res10=func(arr[900],arr[999],sum10);

		sum10=res10;
		children[9]=sum10;
		
		write(des[1], &sum10,sizeof(sum10));
		exit(0);
	    }

	   else if(x10>0)
	    {
		wait(&status);
		close(des[1]);
		read(des[0], &sum10,sizeof(sum10));
		children[9]=sum10;
		sum=sum+sum10;		
	    }

	wait(&status);
	for(int i=0;i<10;i++)
	{
		printf("Child %d process sum: %d \n",i+1,children[i]);
	}
	printf("Total sum calculated in parent: %d \n ",sum);
		


	
return 0;
}

