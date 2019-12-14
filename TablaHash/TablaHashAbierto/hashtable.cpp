#include "vector"
#include "iostream"

using namespace std;

int funcionhash(int numero){

	int hasheado;

	hasheado = numero % 10;
	//cout << "elemento: " << numero << "guardado en slot: " << hasheado << endl;
	return hasheado;
}

int main(int argc, char const *argv[])
{
	
	vector<int> tabla[10];
	int num, hasheado;

	cout << "Ingrese numeros" << endl;

	for (int i = 0; i < 10; ++i)
	{
		cin >> num;
		tabla[funcionhash(num)].push_back(num);
	}

	for(int i = 0; i < 10; ++i){
		for(int j = 0; j < tabla[i].size(); ++j){
			cout << "En slot " << i << " : " << tabla[i][j] << endl;
		}
		cout << endl;
	}

	return 0;
}