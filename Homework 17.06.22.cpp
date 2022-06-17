#include <iostream>
using namespace std;

int main()
{
    //setlocale(0, "UKR");

    //int i = 1;
    //int j = 1;
    //int sum = 0;

    //cout << "Совершенные числа в диапазоне от 0 до 10.000.000: \n\n";

    //while (i <= 10000000)
    //{
    //    while (j <= 10000000)
    //    {
    //        if (j < i)
    //        {
    //            if (i % j == 0)
    //                sum = sum + j;
    //        }
    //        j++;
    //    }
    //    if (sum == i) 
    //    {
    //        cout << i << "\n";
    //    }

    //    i++;
    //    j = 1;
    //    sum = 0;
    //}

    //setlocale(0, "UKR");

    //int num1 = 0;
    //int num2 = 1;
    //int limit = 0;
    //int n = 10000000;

    //cout << "Числа Фибоначчи в диапазоне от 0 до 10.000.000: " << "\n" << num1 << "\n" << num2 << "\n";

    //limit = num1 + num2;

    //while (limit <= n) 
    //{
    //    cout << limit << "\n";
    //    num1 = num2;
    //    num2 = limit;
    //    limit = num1 + num2;
    //}

    setlocale(0, "UKR");

    cout << "Введите количество ярусов: ";
    int num;
    cin >> num;

    cout << "Введите высоту яруса: ";
    int height;
    cin >> height;

    int temp = num * height;
    int check = temp / 2;

    cout << "\n";

    for (int i = 1; i <= num; i++)
    {
        int j = i;
        for (int k = 0; k < height; k++, j++)
        {
            for (int n = 0; n < temp; n++)
            {
                if (n < check + j && n > check - j)
                {
                    cout << "<>";
                }
                else
                {
                    cout << "  ";
                }
            }
            cout << "\n";
        }
    }
}

