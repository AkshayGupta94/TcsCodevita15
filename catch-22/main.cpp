#include <stdio.h>

using namespace std;

int main()
{

	int f, b, t, fd, bd, n, tem, tem2;
	scanf("%d",&n);
	for (int i = 0; i<n; i++)
	{
		scanf("%d", &f); scanf("%d", &b); scanf("%d", &t); scanf("%d", &fd); scanf("%d", &bd);
		if (f == b)
		{

			if (f >= fd)
				printf("%d F ", fd*t);


			else
			{
				printf("No Ditch ");

			}
		}
		else {
			if (f>b)
			{
				fd = fd - f;
				tem = f - b;
				tem2 = fd / tem;
				fd = fd%tem;
				if (fd != 0)
				{
					tem2++;
					fd = fd - tem;
				}
				fd = fd + f;
				tem = f + b;
				int lol = (fd*t);
				tem2 = tem2*tem*t;
				tem2 = tem2 + lol ;

				printf("%d F ", tem2);
			}
			else if (b>f)
			{

				tem = b - f;
				tem2 = bd / tem;
				bd = bd%tem;
				if (bd != 0)
				{

					bd = bd +f+f;
				}

				tem = f + b;

				tem2 = tem2*tem*t;
				tem2 = tem2 + (bd*t);

				printf("%d B ", tem2);
			}
		}

	}
    return 0;
}
