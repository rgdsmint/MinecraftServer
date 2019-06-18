#include <iostream>
using namespace std;

int main() {
    system("git add .");
    system("git commit -m \"Perhap changed the map\"");
    system("git push -u origin master");
    cout << "Succeed" << endl;
	cin.get();
	cin.get();
    return 0;
}
