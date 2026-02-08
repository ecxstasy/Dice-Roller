#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(NULL));

    char roll;
    int dice;

    cout << "Roll a dice? [Y/N]: ";
    cin >> roll;

    while (roll == 'Y' || roll == 'y') {
        dice = (rand() % 6) + 1;
        cout << "You rolled a: " << dice << endl;

        cout << "Roll again? [Y/N]: ";
        cin >> roll;
    }

    cout << "Finished." << endl;
    return 0;
}
