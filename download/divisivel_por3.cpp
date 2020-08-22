#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	
	int vet[10], i, div, j = 0;
	
	for(i = 0; i <= 3; i++)
	{
		cout << "Digite os vetores: ";
		cin >> vet[i];
	}
	
	for(i = 0; i <= 3; i++)
	{
	
		div = vet[i] % 3;
		
		if(div == 0)
		{
		  j++;	
		}
	}
	for( i = 1; i <= 3; i++)
	{
		aux = vet[i - 1, i];
	}

	cout << j;
	
	
		
	return 0;
}