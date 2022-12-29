// Homework5.5.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>

class functor
{
protected:
    std::vector<int> arr;
    int sum = 0;
    int count = 0;
public:
    functor(std::vector<int>arr) 
    {
        this->arr = arr;
    };
    std::vector<int> operator()()
    {
        return this->arr;
    }
    int get_sum()
    {
        this->arr = arr;
        for (int a = 0; a < arr.size(); ++a)
        {
            if (arr[a] % 3 == 0)
            {
                sum = sum + arr[a];
            }
        }
        return sum;
    }
    int get_count()
    {
        this->arr = arr;
        for (int a = 0; a < arr.size(); ++a)
        {
            if (arr[a] % 3 == 0)
            {
                ++count;
            }
        }
        return count;
    }
};

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");

    std::vector<int> arr{ 4, 1, 3, 6, 25, 54 };

    functor func(arr);

    std::cout << "[IN]: ";
    for (int a = 0; a < arr.size(); ++a)
    {
        std::cout << arr[a] << " ";
    }
    std::cout << std::endl;

    std::cout << "[OUT]: get_sum() = " << func.get_sum() << std::endl;
    std::cout << "[OUT]: get_count() = " << func.get_count() << std::endl;

    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
