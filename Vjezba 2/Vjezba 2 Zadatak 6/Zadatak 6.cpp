#include <iostream>
//log popunjeno
//fiz alocirano
using namespace std;
struct vektor
{
    int* arr;
    int log = 0;
    int fiz = 0;
};
vektor* vector_new()
{
    vektor* n_vektor = new vektor;
    cout << "Enter allocated size: ";
    cin >> n_vektor -> fiz;
    n_vektor -> arr = new int[n_vektor -> fiz];
    return n_vektor;
}
void vector_delete(vektor* vekdel)
{
    delete [] vekdel -> arr;
    vekdel -> arr = 0;
    if(!(vekdel -> arr))
        cout << "Array successfully deallocated." << endl;
    delete [] vekdel;
    vekdel = 0;
    if(!vekdel)
        cout << "Structure successfully deallocated." << endl;
}
void vector_push_back(int T,vektor* vekpsh)
{
    if(T)
    {
    vekpsh -> arr[vekpsh -> log] = T;
    vekpsh -> log++;
    if(vekpsh -> log == vekpsh -> fiz)
    {
        int* temp;
        temp = new int[vekpsh -> fiz * 2];
        copy(vekpsh -> arr, vekpsh -> arr + vekpsh -> fiz, temp);
        delete [] vekpsh -> arr;
        vekpsh -> arr = 0;
        vekpsh -> arr = temp;
        vekpsh -> fiz = vekpsh -> fiz * 2;
    }
    }
}
void vector_pop_back(vektor* vekpop)
{
    int* tempop;
    tempop = new int[vekpop -> fiz - 1];
    copy(vekpop -> arr, vekpop -> arr + vekpop -> log - 1, tempop);
    delete [] vekpop -> arr;
    vekpop -> arr = 0;
    vekpop -> arr = tempop;
    vekpop -> log -= 1;
    vekpop -> fiz -= 1;
}
int vector_front(vektor* vekf)
{
    return vekf -> arr[0];
}
int vector_back(vektor* vekb)
{
    return vekb -> arr[vekb -> log - 1];
}
int vector_size(vektor* veksiz)
{
    return veksiz -> log;
}
int main()
{
    vektor* m_vektor = vector_new();
    int i = 1;
    while(i)
    {
        cout << "Enter a number: ";
        cin >> i;
        vector_push_back(i,m_vektor);
    }
    cout << "List of numbers: ";
    for(int i = 0; i < (m_vektor -> log);i++)
    {
        cout << m_vektor -> arr[i] << " ";
    }
    cout << endl;
    cout << "Front: " << vector_front(m_vektor) << endl;
    cout << "Back: " << vector_back(m_vektor) << endl;
    cout << "Size: " << vector_size(m_vektor) << endl;
    vector_pop_back(m_vektor);
    cout << "Numbers after pop back: ";
    for(int i = 0; i < (m_vektor -> log);i++)
    {
        cout << m_vektor -> arr[i] << " ";
    }
    cout << endl;
    vector_delete(m_vektor);
    return 0;
}
