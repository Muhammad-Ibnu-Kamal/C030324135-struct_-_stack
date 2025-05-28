#include <iostream>
using namespace std;

#define M 10 // MAXSTACK
typedef int IT; // ItemType

typedef struct { IT I[M]; int C; } S; // Stack

void IS(S *s) { s->C = 0; }
int E(S *s) { return s->C == 0; }
int F(S *s) { return s->C == M; }

void P(IT x, S *s) {
    if (F(s)) std::cout << "Stack penuh!\n";
    else s->I[s->C++] = x; // Post-increment
}

void O(S *s, IT *x) {
    if (E(s)) std::cout << "Stack kosong!\n";
    else *x = s->I[--s->C]; // Pre-decrement
}

int main() {
    S s; IT d;
    std::cout << "Inisialisasi...\n"; IS(&s); std::cout << "Kosong? " << (E(&s)?"Y":"T") << "\n";
    std::cout << "\nPUSH...\n";
    P(10,&s);P(20,&s);P(30,&s);P(40,&s);P(50,&s);
    std::cout << "Count: " << s.C << "\n";
    std::cout << "\nPOP...\n";
    O(&s,&d); std::cout << "Pop: " << d << "\n";
    O(&s,&d); std::cout << "Pop: " << d << "\n";
    std::cout << "\nPOP sampai kosong...\n";
    while(!E(&s)) {O(&s,&d); std::cout << "Pop: " << d << "\n";}
    std::cout << "Kosong? " << (E(&s)?"Y":"T") << "\n";
    std::cout << "\nCoba POP dari kosong...\n"; O(&s,&d);
    std::cout << "\nPUSH sampai penuh...\n";
    for(int i=1;i<=M+2;++i) P(i*100,&s);
    return 0;
}