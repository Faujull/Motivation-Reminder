/*
███████╗░█████╗░██╗░░░██╗░░░░░██╗██╗░░░██╗██╗░░░░░
██╔════╝██╔══██╗██║░░░██║░░░░░██║██║░░░██║██║░░░░░
█████╗░░███████║██║░░░██║░░░░░██║██║░░░██║██║░░░░░
██╔══╝░░██╔══██║██║░░░██║██╗░░██║██║░░░██║██║░░░░░
██║░░░░░██║░░██║╚██████╔╝╚█████╔╝╚██████╔╝███████╗
╚═╝░░░░░╚═╝░░╚═╝░╚═════╝░░╚════╝░░╚═════╝░╚══════╝
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> messages = {
        "You are never alone!",
        "True friends are always connected by heart.",
        "Keep pushing, you're doing great!",
        "I'm proud of you, always!",
        "Your dreams are valid and powerful."
    };

    srand(time(0));
    int randomIndex = rand() % messages.size();

    cout << "\n========================================\n";
    cout << "          M O T I V A T I O N\n";
    cout << "========================================\n\n";

    cout << "Dear Friend,\n\n";
    cout << "Message: " << messages[randomIndex] << "\n\n";
    cout << "Stay strong and keep shining! \n";
    cout << "========================================\n";

    cin.get();
    return 0;
}

