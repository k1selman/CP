#include <iostream>

using namespace std;

int main()
{
   int n;
   char f[15];
   int sum = 0;
   string cont[n];
   cin >> n;

   for(int i = 0; i < n; i++)
   {
        cin >> cont[i];
   }
   

   for(int i = 0; i <= n; i++)
   {
        if(cont[i].length()>10)
        {
            for(int z = 0; z <= n; z++)
            {
                cont[i] = f[z];
            }

                for(int j = 1; j < n; j++)
                {
                    sum = sum + 1;
                }
                    cout << f[0] << sum << f[n] << endl;
        }
        else
        {
            cout << cont[i] << endl;
        }

   }

   return 0;
}
