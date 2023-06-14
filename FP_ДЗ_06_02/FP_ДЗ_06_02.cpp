#include <iostream>
using namespace std;

int main()
{
    cout << "Task 1------------------------------------------------------------\n\n";

    //Подсчитать количество целых чисел в диапазоне от 100
    //до 999, у которых есть две одинаковые цифры.

    int count = 0;

    for (int i = 100; i <= 999; i++)
    {
        int hundreds = i / 100 % 10;
        int	tens = i / 10 % 10;
        int units = i % 10;

        if ((hundreds == tens && hundreds != units) || (hundreds == units && hundreds != tens) || (tens == units && tens != hundreds))
        {
            count++;
        }
    }

    cout << count;

    cout << "\n\nTask 2------------------------------------------------------------\n\n";
    
    //Подсчитать количество целых чисел в диапазоне от 100 до
    //999, у которых все цифры разные. 

    int count1 = 0;

    for (int i = 100; i <= 999; i++)
    {
        int hundreds = i / 100 % 10;
        int	tens = i / 10 % 10;
        int units = i % 10;

        if ((hundreds != tens) && (units != hundreds) && (units != tens))
        {
            count1++;
        }
    }

    cout << count1;


    cout << "\n\nTask 3------------------------------------------------------------\n\n";

   // Пользователь вводит любое целое число.Необходимо из
   //этого целого числа удалить все цифры 3 и 6 и вывести обратно на экран.

    int number;
    cout << "Enter number: ";
    cin >> number;

    int result = 0;
    int multiplier = 0;

    while (number != 0)
    {
        int digit = number % 10;// получение последней цифры числа

        if (digit != 3 && digit != 6)
        {
            result = result + digit * pow(10, multiplier);// добавление цифры к результату с учетом позиции

            multiplier++;//увеличиваем значение чтобы следущее число стояла на одну позицию дальше предыдущей в результирующем числе
        }

        number = number / 10;// переход к следущей цифре числа 
    }

    cout << "Result: " << result << endl;

    cout << "\nTask 4------------------------------------------------------------\n\n";

    //Пользователь вводит любое целое число А.Необходимо
    //вывести все целые числа В, для которых А делиться без остатка
    //на В* В и не делиться без остатка на В* В* В.

    int A;
    cout << "Enter number A: ";
    cin >> A;

    cout << "Numbers B: ";

    for (int B = 1; B <= A; B++)
    {
        if (A % (B * B) == 0 && A % (B * B * B) != 0)
        {
            cout << B << " ";
        }
    }

    cout << "\n\nTask 5------------------------------------------------------------\n\n";

    //Пользователь вводит целое число А. Программа должна
    //определить, что куб суммы цифр этого числа равен А* А

    int a;
    cout << "Enter number a: ";
    cin >> a;

    int sum = 0;
    int end = a;

    while (end != 0) {

        int lastDigit = end % 10;//последняя цифра числа а
        sum += lastDigit;
        end /= 10;// уменьшаем число a удаляя последнюю цифру
    }


    int cube = sum * sum * sum;
    int square = a * a;

    if (cube == square) {
        cout << "The cube of the sum of the digits of this number is equal to A*A\n";
    }
    else {
        cout << "The cube of the sum of the digits of this number is  not equal to A*A\n";
    }


    cout << "\nTask 6------------------------------------------------------------\n\n";

    //Пользователь вводит целое число. Необходимо вывести все
    //целые числа, на которое заданное число делиться без остатка

    int num;
    do
    {
        cout << "Enter number: ";
        cin >> num;
    } while (num == 0);

    cout << "All the numbers by which the number " << num << " can be divided without remainder: \n";

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            cout << i << " ";
        }
    }


    cout << "\n\nTask 7------------------------------------------------------------\n\n";

    //Пользователь вводит два целых числа. Необходимо вывести все целые числа,
    //на которые оба введенных числа делятся без остатка

    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    int smallestNum = (num1 < num2) ? num1 : num2;

    cout << "All numbers by which both entered numbers are divisible without a remainder: \n";

    for (int i = 1; i <= smallestNum; i++)
    {
        if ((num1 % i == 0) && (num2 % i == 0))
        {
            cout << i << " ";
        }
    }

    cout << endl;
    return 0;
}

