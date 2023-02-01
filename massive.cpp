#include <iostream>
using namespace std;

const int N = 10;

int main()
{
    setlocale(LC_ALL, "Russian");
    int averageTemp = 0, countDays = 0, containerSum = 0, downAverageTemp = 0, b = 0, x = 0;
    int days[N] = { -17, -23, -13, -15,
        2, -11, -15, -25, -27, -20 };

    for (int i = 0; i < N; i++)
    {
        containerSum += days[i];
        averageTemp = containerSum / N;

        if (i >= 9) {
            while (b <= N)
            {
                if (averageTemp < days[x])
                {
                    downAverageTemp++;
                }
                x++;
                b++;
            }
        }
    }
    cout << averageTemp << endl;
    cout << downAverageTemp;
}

