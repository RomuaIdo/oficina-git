#include "../include/Greeter.h"

int main() {
    
    string minhaArte = R"(
       /\_/\  
      ( o.o ) 
       > ^ <
    )";
    
    string meuNome = "Robson Rosbife";
    string meuTitulo = "Chefe de Pastelaria";
    string meuContato = "github.com/rosbife";

    string minhaCor = Color::Red;

    
    ProfileGreeter Greeter(meuNome, meuTitulo, meuContato, minhaArte, minhaCor);
    
    Greeter.clear();
    Greeter.print();
    getchar();    
    return 0;
}
