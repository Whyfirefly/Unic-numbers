//дан набор элементов из 10 штук. Удалить из него все повторяющиеся элементы
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    vector<int> temp;

    cout << "Size = " << temp.size() << endl;

    for (int i = 0; i < 10; ++i) {
        temp.push_back(1 + rand() % 10); //рандомные числа от 1 до 10
    }

    cout << "Size = " << temp.size() << endl;

    cout << "Array" << endl;
    cout << "-----------------------------------------" << endl;
    for (int element : temp) //каждый элемент из temp копируется в element. так пока не закончатся все элементы в temp
    {
        cout << element << "\t";
    }
    cout << endl;

    //сортируем, а потом удаляем повторяющиеся значения
    sort(temp.begin(), temp.end()); //сортируем
    temp.erase(unique(temp.begin(), temp.end()), temp.end());

    //затем выводим на экран получившийся массив
    cout << "-----------------------------------------" << endl;
    cout << "Array without identic numbers" << endl;
    cout << "-----------------------------------------" << endl;
    for (int element : temp) //каждый элемент из temp копируется в element. так пока не закончатся все элементы в temp
    {
        cout << element << "\t";
    }
    cout << endl;


}