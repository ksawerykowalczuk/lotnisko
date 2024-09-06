#include <iostream>
using namespace std;

void dodajelement(int *tablica, int dlugosc, int wartosc)
{
    dlugosc++;
    (int *)realloc(tablica, dlugosc * sizeof(int));
    tablica[dlugosc - 1] = wartosc;
}

void wypisz(int *lotniska, int dlugosc)
{
    for (int i = 0; i < dlugosc; i++)
    {
        cout << lotniska[i] << ", ";
    }
}

int main()
{
    int bokkwadratu, ilelondowisk;
    cin >> bokkwadratu >> ilelondowisk;
    string mapa[bokkwadratu];
    int dlougoscTablicy = 0;
    /*
    struct Punkt
    {
        int x;
        int y;
    };*/
    // Punkt *punkty;
    int *lotniska;
    lotniska = (int *)malloc(0);
    for (int i = 0; i < bokkwadratu; i++)
    {
        cin >> mapa[i];
    }
    for (int y = 0; y < bokkwadratu; y++)
    {
        int streak = 0;
        for (int x = 0; x < bokkwadratu; x++)
        {
            if (mapa[y][x] == '.')
            {
                streak++;
                if (streak == 1)
                {
                    dodajelement(lotniska, dlougoscTablicy, 1);
                    dlougoscTablicy++;
                }
                lotniska[dlougoscTablicy - 1] = lotniska[dlougoscTablicy - 1] + 1;
            }
            else
            {
                streak = 0;
            }
        }
    }
    wypisz(lotniska, dlougoscTablicy);
}
