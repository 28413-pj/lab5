#include <iostream>
#include <vector>

using namespace std;
int naj = 0;
int miej = 0;
    void vek(vector<int> war, int wiel) {

        naj = war[0];
        for(int i = 0; i < wiel; i++){
            if( war[i] > naj){
                naj = war[i];
                miej = i;
            }
        }

    }


int main()
{
	int wiel = 0;
	int value;

	cout << "Podaj wielkosc wektora: ";
	cin >> wiel;
	cout << endl;
	vector <int> vec(wiel);

	for (int i = 0; i < wiel; i++) {
		cout << "Podaj wartosc elementu wektora: ";
		cin >> value;
		vec[i] = value;
	}
	
	vek(vec, wiel);
	cout << "Największa wartość to: " << naj << endl;
    cout << "O indeksie: " << miej << endl;
}

