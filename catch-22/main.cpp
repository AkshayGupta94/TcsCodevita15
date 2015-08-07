#include <iostream>

using namespace std;

int main()
{

	int *f, *b, *t, *fd, *bd, n, tem;

	cin >> n;
	f = new int[n];
	b = new int[n];
	t = new int[n];
	fd = new int[n];
	bd = new int[n];

	for (int i = 0; i<n; i++)
	{
		cin >> f[i];
		cin >> b[i];
		cin >> t[i];
		cin >> fd[i];
		cin >> bd[i];
	}
	for (int i = 0; i<n; i++)
	{
		tem = 0;
		if (f[i] == b[i])
		{

			if (f[i] >= fd[i])
				cout << fd[i] * t[i] << " F"<<endl;
			else
			{
				cout << "No Ditch "<<endl ;
			}
		}
		else
		{
			if (f[i]>b[i])
			{
				if (f[i]>=fd[i])
				{
					cout << fd[i] * t[i] << " F "<<endl ;

				}
				else {
					while (true)
					{
						fd[i] = fd[i] - f[i];fd[i] = fd[i] + b[i];
						tem += (f[i] + b[i])*t[i];
						if (fd[i]<=f[i])
						{
							tem += fd[i] * t[i];
							cout << tem << " F "<<endl;
							break;
						}

					}
				}


			}
			else if (b[i]>f[i])
			{
				if (bd[i]<=(b[i] - f[i]))
				{
					tem += bd[i] * t[i];
					tem += 2 * f[i] * t[i];
					cout << tem << " B "<<endl;
				}
				else
				{


					while (true)
					{
						bd[i] = bd[i] + f[i] - b[i];
						tem += (f[i] + b[i])*t[i];
						if (bd[i]<=(b[i] - f[i]))
						{
							tem += bd[i] * t[i];
							tem += 2 * f[i] * t[i];
							cout << tem << " B "<<endl;
							break;
						}
					}

				}
			}
		}

	}
	return 0;
}
