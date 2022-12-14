#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

class TrataDivZero
{
      public:
            TrataDivZero(int n);           
            void Msg();
      private:
              int NLinha;
};
TrataDivZero::TrataDivZero(int n)
{
     NLinha = n;
}     

void TrataDivZero::Msg()
{
      cout << "Tratador de erro foi chamado ..." << endl;
      cout << "Erro na linha: " << NLinha << endl;    
}     

int main()
{
    
     int n, m;
     cout << "Numerador: ";
     cin >> n;
     cout << "Denominador: ";
     cin >> m;
   
     try // inicio do bloco TRY
     {
       
        if (m==0)
        { 
             // lança a exceção, criando um objeto da classe TrataDivZero
             // e passando o número da linha onde o erro ocorreu
             throw (TrataDivZero(__LINE__)); 
             // dentro deste bloco nada é executado após o throw. 
        }
        cout << "Divisão: "  << (double)n/m << endl;
     } // final do bloco TRY
     
     catch (TrataDivZero T) // pode ter ou não o objeto
     {                      // apenas o tipo é obrigatório
          T.Msg();
     }
     
     cout << "Fim..." << endl;
     system("pause");
     return 0;
}
