#include <iostream>

using namespace std;


// ЗАДАНИЕ 1 функция, которая принимает две даты
/*
bool IsLeapYear(int year) {
    return (year % 4 == 0 || (year % 100 == 0 && year % 400 == 0)) ?
        true : false;
}
int CountDay(int m, int y) {
    switch (m)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        return 31;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        return 30;
        break;
    case 2:
        return IsLeapYear(y) ? 29 : 28;
        break;
    default:
        break;
    }
}
int DaysOfMonth(int month, int year) {
    int sum = 0;
    for (int i = 1; i < month; i++) {
        sum += CountDay(i, year);
    }
    return sum;
}
void DiffOfDays(int fDay, int sDay, int fMonth, int sMonth, int fYear, int sYear){
    
    int fSum = 0, sSum = 0;

    for (int i = fYear; i < sYear; i++) {
        if (IsLeapYear(i)) sSum += 366;
        else sSum += 365;
    }

    fSum += IsLeapYear(fYear) ? DaysOfMonth(fMonth, fYear) :
        DaysOfMonth(fMonth, fYear);

    sSum += DaysOfMonth(sMonth, sYear);

    fSum += fDay;
    sSum += sDay;


    cout << sSum - fSum;
}

int main()
{
    DiffOfDays(5, 15, 2, 1, 2018, 2019);
}
*/
//ЗАДАНИЕ 2 Написать функцию, определяющую среднее арифметическое элементов передаваемого ей массива.
/*
const int SIZE = 5;
double averege(int array[][SIZE])
{
    double sum = 0;
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            sum += array[i][j];
    return sum / (SIZE * SIZE);
}
void Print(int array[][SIZE])
{
    cout << " Array" << endl;
    for (int i = 0; i < SIZE; i++){
        for (int j = 0; j < SIZE; j++)
            cout << array[i][j] << "\t";
        cout << endl;
    }
}
void Set(int array[][SIZE])
{
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            array[i][j] = rand() % 100;
}
int main()
{
    int arr[SIZE][SIZE];
    Set(arr);
    Print(arr);
    cout << "Average = " << averege(arr) << endl;  
}
*/
//ЗАДАНИЕ 3 Написать функцию, определяющую количество положительных, отрицательных и нулевых элементов передаваемого ей массива.
/*
const int SIZE = 5;
void Sum(int array[][SIZE])
{
    int sumpos = 0;
    int sumneg = 0;
    int sumzero = 0;
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            array[i][j] = rand() % 100;
   
    for (int i = 0; i < SIZE; i++){
        for (int j = 0; j < SIZE; j++){
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (array[i][j] > 0)sumpos++;
            if (array[i][j] < 0)sumneg++;
            if (array[i][j] == 0)sumzero++;
        }
    }
    cout << endl;
    cout <<"Sum pos el = " << sumpos << endl;
    cout <<"Sum neg el = " << sumneg << endl;
    cout <<"Sum zero el = " << sumzero << endl;
}
int main() {
    srand(time(NULL));
    int arr[SIZE][SIZE];
    Sum(arr);
}
*/