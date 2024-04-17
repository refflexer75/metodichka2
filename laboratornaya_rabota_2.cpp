#include <iostream>
#include <string>
using namespace std;

// Определение класса Book
class Book 
{
    string BookTitle; // Название книги
    string BookAuthor; // Автор книги
    int BookYear; // Год публикации книги
public:
    // Конструкторы класса
    Book() // Конструктор по умолчанию
    {
        BookTitle = "Fathers and Sons"; // Название книги по умолчанию
        BookAuthor = "Ivan Turgenev"; // Автор книги по умолчанию
        BookYear = 1860; // Год публикации книги по умолчанию
    }
    Book(string title, string author, int year) // Конструктор с параметрами
    {
        BookTitle = title; // Инициализация названия книги
        BookAuthor = author; // Инициализация автора книги
        BookYear = year; // Инициализация года публикации книги
    } 
    Book(const Book& book) // Конструктор копирования
    {
        BookTitle = book.BookTitle; // Копирование названия книги
        BookAuthor = book.BookAuthor; // Копирование автора книги
        BookYear = book.BookYear; // Копирование года публикации книги
    } 
    // Деструктор класса
    ~Book() 
    {
        cout << "\nДеструктор сработал!\n" << endl; 
    }
    // Метод для вывода информации о книге
    void print() 
    {
        cout << "Название: " << BookTitle << endl; // Вывод названия книги
        cout << "Автор: " << BookAuthor << endl; // Вывод автора книги
        cout << "Год публикации: " << BookYear << endl; // Вывод года публикации книги
    }
};

int main() 
{
    setlocale(LC_ALL, "Russian"); 

    // Создание объекта book1 с использованием конструктора по умолчанию
    Book book1;
    cout << "Вызов конструктора без параметров: " << endl;
    book1.print(); // Вывод информации о книге book1
    cout << endl;

    // Создание объекта book2 с использованием конструктора с параметрами
    Book book2("War and Peace", "Tolstoy", 1868);
    cout << "Вызов конструктора с параметрами: " << endl;
    book2.print(); // Вывод информации о книге book2
    cout << endl;
    
    // Создание объекта book3 с использованием конструктора копирования от объекта book1
    Book book3(book1);
    cout << "Вызов конструктора копирования: " << endl;
    book3.print(); // Вывод информации о книге book3

    return 0; 
}
