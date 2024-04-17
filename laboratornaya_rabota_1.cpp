#include <iostream>
using namespace std;

// Определение класса Money
class Money 
{
private:
    int first; // Номинал купюр
    int second; // Количество купюр
    int sum; // Сумма денег
public:
    // Методы класса
    void Init(int f, int s); // Метод для инициализации объекта
    void Read(); // Метод для ввода данных с клавиатуры
    void Summa(); // Метод для вычисления суммы денег
    void Show(); // Метод для вывода суммы денег
};

// Определение метода Init класса Money
void Money::Init(int f, int s)
{
    const int k = 9;
    int allowed[k] = {1, 2, 5, 10, 50, 100, 500, 1000, 5000};
    // Проверка, что номинал купюры находится в списке разрешенных
    for(int i = 0; i < k; i++) 
    {
        if(f == allowed[i]) 
        {
            first = f; // Присваивание номинала купюры
            second = s; // Присваивание количества купюр
            Summa(); // Пересчет суммы после инициализации
            return;
        }
    }
    cout << "Неправильный номинал" << endl; 
}

// Определение метода Read класса Money
void Money::Read() 
{
    cout << "Введите номинал: ";
    cin >> first; // Ввод номинала купюры
    cout << "Введите кол-во купюр: ";
    cin >> second; // Ввод количества купюр
    Init(first, second); // Инициализация объекта
}

// Определение метода Summa класса Money
void Money::Summa() 
{
    sum = first * second; // Вычисление суммы денег
}

// Определение метода Show класса Money
void Money::Show() 
{
    cout << "Сумма: " << sum << endl; // Вывод суммы денег
}

// Функция, создающая объект класса Money с заданными параметрами
Money take_type(int f, int s)
{
    Money obj;
    obj.Init(f, s); // Инициализация объекта переданными значениями
    return obj;
}

int main() 
{
    Money a; // Создание объекта класса Money
    a.Read(); // Ввод данных о деньгах
    a.Show(); // Вывод суммы денег

    Money b = take_type(10, 3); // Создание объекта b с заданными параметрами
    b.Show(); // Вывод суммы денег

    return 0;
}
