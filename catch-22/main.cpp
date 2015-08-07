#include <iostream>

using namespace std;

int main()
{

	int *f, *b, *t, *fd, *bd, n, tem, tem2;

	cin>>n;
	f= new int[n];
	b= new int[n];
	t= new int[n];
	fd= new int[n];
	bd=new int[n];
	cout<<"hello";
	for (int i = 0; i<n; i++)
	{
		cin>>f[i];
		cin>>b[i];
		cin>>t[i];
		cin>>fd[i];
		cin>>bd[i];
	}

	for (int i = 0; i<n; i++)
	{
		if (f[i] == b[i])
		{

			if (f[i] >= fd[i])
				cout<<fd[i]*t[i]<<" F";


			else
			{
				cout<<"No Ditch";

			}
		}
		else
        {
			if (f[i]>b[i])
			{
				fd[i] = fd[i] - f[i];
				tem = f[i] - b[i];
				tem2 = fd[i] / tem;
				fd[i] = fd[i]%tem;
				if (fd[i] != 0)
				{
					tem2++;
					fd[i] = fd[i] - tem;
				}
				fd[i] = fd[i] + f[i];
				tem = f[i] + b[i];
				int lol = (fd[i]*t[i]);
				tem2 = tem2*tem*t[i];
				tem2 = tem2 + lol ;

				cout<<tem2<<" F";
			}
			else if (b[i]>f[i])
			{

				tem = b[i] - f[i];
				tem2 = bd[i] / tem;
				bd[i] = bd[i]%tem;
				if (bd != 0)
				{

					bd[i] = bd[i] +f[i]+f[i];
				}

				tem = f[i] + b[i];

				tem2 = tem2*tem*t[i];
				tem2 = tem2 + (bd[i]*t[i]);

				cout<<tem2<<" B";
			}
		}

	}
    return 0;
}
