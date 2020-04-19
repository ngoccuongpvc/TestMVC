#include <iostream>
#include <vector>
#include "controller.h"
#include "view.h"
#include "model.h"

using namespace std;

int main()
{
    Controller *controller = new Controller(new Model, new View);

    string type;
    int x;

    while (true) {
        cin >> type;
        if (type == "APPEND") {
            cin >> x;
            controller->appendAction(x);
        } else if (type == "SHOW") {
            controller->showAction();
        } else if (type == "END") {
            cout << "Terminating..." << endl;
            break;
        } else if (type == "ERASE") {
            controller->eraseData();
        } else if (type == "HELP") {
            cout << "APPEND x : add x to the end of file" << endl;
            cout << "SHOW : show all elements" << endl;
            cout << "ERASE : erase all elements" << endl;
        } else {
            cout << "Wrong syntax!" << endl;
            cout << "Type HELP to get instructions" << endl;
        }
    }

    return 0;
}
