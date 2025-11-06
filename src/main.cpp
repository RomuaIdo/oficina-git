#include "../include/Greeter.h"

int main() {
    
    string minhaArte = R"(
       /\_/\  
      ( o.o ) 
       > ^ <
    )";
    
    string meuNome = "Maria";
    string meuTitulo = "Maria Developer";
    string meuContato = "github.com/maria";

    string minhaCor = Color::Red;

    
    ProfileGreeter Greeter(meuNome, meuTitulo, meuContato, minhaArte, minhaCor);
    
    Greeter.clear();
    Greeter.print();
    getchar();    
    return 0;
}
