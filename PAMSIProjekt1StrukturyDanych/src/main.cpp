#include <iostream>
// #include "../include/data_structures/stack.hpp"
// #include "../include/data_structures/queue.hpp"
// #include "../include/data_structures/singly_linked_list.hpp"
// #include "../include/data_structures/doubly_linked_list.hpp"
// #include "../include/data_structures/heap.hpp"
#include <stack>
#include <queue>
#include <list>
#include <cstdlib>


using namespace std;

void podajPrzedzial(int &min, int &max)
{

    cout << "podaj przedzial losowosci (min max)" << endl;
    cin >> min;
    cin >> max;
}

int losowanie(int min, int max)
{
    int liczba = (rand() % max - min + 1) + min;
    return liczba;
}

int main(int argc, char* argv[])
{
    stack<int> stos;
    queue<int> kolejka;
    list<int> lista;
    int wybor1;
    int wybor2;
    int liczba;
    int m;

    int min;
    int max;
    while (true)
    {
        cout << "Co chesz zrobić?" << endl;
        cout << "1. Stos" << endl;
        cout << "2. Kolejka" << endl;
        cout << "3. Lista" << endl;
        cin >> wybor1;
        switch (wybor1)
        {
        case 1:
            cout << "1. dodawanie losowego elementu na szczyt stosu" << endl;
            cout << "2. dodawanie na stos m losowych elementów" << endl;
            cout << "3. wyświetlanie element na szczycie stosu" << endl;
            cout << "4. usunięcie elementu na szczycie stosu" << endl;
            cout << "5. k razy usunięcie element ze szczytu stosu" << endl;
            cout << "6. wyświetl liczbę elementów na stosie" << endl;

            cin >> wybor2;

            switch (wybor2)
            {
            case 1:
                podajPrzedzial(min, max);
                liczba = losowanie(min, max);
                stos.push(liczba);
                break;
            
            case 2:
                podajPrzedzial(min, max);
                cout << "ile losowych elementow?" << endl;
                cin >> m;
                for (int i = 0; i < m; i++)
                {
                    liczba = losowanie(min, max);
                    stos.push(liczba);
                }
                break;

            case 3:
                if(stos.empty())
                {
                    cout<< "stos jest pusty" << endl;
                }
                else
                {
                    cout << stos.top() << endl;
                }
                break;

            case 4:
                if(stos.empty())
                {
                    cout << "stos jest pusty" << endl;
                }
                else
                {
                    stos.pop();
                }
                break;

            case 5:
                cout << "ile popow?" << endl;
                cin >> m;
                if(m > stos.size())
                {
                    cout << "nie mozna usunac az tak wielu elementow" << endl;
                }
                else
                {
                    for (int i = 0; i < m; i++)
                    {
                        stos.pop();
                    }
                }
                break;
            case 6:
                cout << stos.size() << endl;
                break;
            
            default:
                cout << "podaj liczbe od 1 do 6" << endl;
                break;
            }
            break;
        
        case 2:
            cout << "1. dodanie losowego elementu na koniec kolejki" << endl;
            cout << "2. dodaj l elementów na koniec kolejki" << endl;
            cout << "3. usunięcie element z początku kolejki" << endl;
            cout << "4. usunięcie k elementów z początku kolejki" << endl;
            cout << "5. wyświetlenie pierwszego elementu kolejki" << endl;
            cout << "6. wyświetlenie liczby elementów w kolejce" << endl;
            cin >> wybor2;

            switch (wybor2)
            {
            case 1:
                podajPrzedzial(min, max);
                liczba = losowanie(min, max);
                kolejka.push(liczba);
                break;
            
            case 2:
                podajPrzedzial(min, max);
                cout << "ile losowych elementow?" << endl;
                cin >> m;
                for (int i = 0; i < m; i++)
                {
                    liczba = losowanie(min, max);
                    kolejka.push(liczba);
                }
                break;

            case 5:
                if(kolejka.empty())
                {
                    cout<< "kolajka jest pusta" << endl;
                }
                else
                {
                    cout << kolejka.back() << endl;
                }
                break;

            case 3:
                if(kolejka.empty())
                {
                    cout << "kolejka jest pusta" << endl;
                }
                else
                {
                    kolejka.pop();
                }
                break;

            case 4:
                cout << "ile popow?" << endl;
                cin >> m;
                if(m > kolejka.size())
                {
                    cout << "nie mozna usunac az tak wielu elementow" << endl;
                }
                else
                {
                    for (int i = 0; i < m; i++)
                    {
                        kolejka.pop();
                    }
                }
                break;
            case 6:
                cout << kolejka.size() << endl;
                break;
            
            default:
                cout << "podaj liczbe od 1 do 6" << endl;
                break;
            }

            break;

        case 3:
            cout << "1. wyświetlanie zawartości listy" << endl;
            cout << "2. wyświetlenie liczby elementów listy" << endl;
            cout << "3. wyświetlenie ostatniego elementu listy" << endl;
            cout << "4. wyświetlenie pierwszego elementu listy" << endl;
            cout << "5. dodanie losowego elementu na początku listy" << endl;
            cout << "6. dodanie losowego elementu na końcu listy" << endl;
            cout << "7. dodanie k elementów na początku listy" << endl;
            cout << "8. dodanielelementów na końcu listy" << endl;
            cout << "9. usuwanie elementu na końcu listy" << endl;
            cout << "10. usuwaniejelementów na końcu listy" << endl;
            cout << "11. usuwanie wszystkich elementów z listy" << endl;

            cin >> wybor2;

            switch (wybor2)
            {
            case 1:
                for (auto v : lista)
                    std::cout << v << "\n";
                break;
            case 2:
                cout << lista.size() << endl;
                break;

            case 3:
                cout << lista.back() << endl;
                break;

            case 4:
                cout << lista.front() << endl;
                break;
            
            case 5:
                podajPrzedzial(min, max);
                liczba = losowanie(min, max);
                lista.push_front(liczba);
                break;

            case 6:
                podajPrzedzial(min, max);
                liczba = losowanie(min, max);
                lista.push_back(liczba);
                break;

            case 7:
                podajPrzedzial(min, max);
                cout << " ile elementow chcesz dodac" << endl;
                cin >> m;
                for (int i = 0; i < m; i++)
                {
                    losowanie(min, max);
                    lista.push_front(liczba);
                }
                break;
            case 8:
                podajPrzedzial(min, max);
                cout << " ile elementow chcesz dodac" << endl;
                cin >> m;
                for (int i = 0; i < m; i++)
                {
                    losowanie(min, max);
                    lista.push_back(liczba);
                }
                break;

            case 9:
                lista.pop_back();
                break;

            case 10:
                cout << "ile elementow chcesz usunac" << endl;
                cin >> m;
                for (int i = 0; i < m; i++)
                {
                    lista.pop_back();
                }
                break;

            case 11:
                lista.clear();

            default:
                cout << "wybierz liczbe od 1 do 11" << endl;
                break;
            }

            break;

        default:
            cout << "podaj liczbe od 1 do 3" << endl;
            break;
        }
        
    }

    
    return 0;
}
