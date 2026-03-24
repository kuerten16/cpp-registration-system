#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> nomes;
    int opcao;

    do {
        cout << "\n=== MENU ===\n";
        cout << "1 - Cadastrar nome\n";
        cout << "2 - Listar nomes\n";
        cout << "0 - Sair\n";
        cout << "Escolha: ";
        cin >> opcao;

        cin.ignore();

        if (opcao == 1) {
            string nome;
            cout << "Digite o nome: ";
            getline(cin, nome);
            nomes.push_back(nome);
            cout << "Nome cadastrado!\n";
        }
        else if (opcao == 2) {
            cout << "\nLista de nomes:\n";
            for (int i = 0; i < nomes.size(); i++) {
                cout << i + 1 << " - " << nomes[i] << endl;
            }
        }

    } while (opcao != 0);

    cout << "Programa encerrado.\n";
    return 0;
}
