#ifndef CONTROLLER_H_INCLUDED
#define CONTROLLER_H_INCLUDED

#include <iostream>
#include <vector>

#include "model.h"
#include "view.h"

struct Controller {
    Model *model = nullptr;
    View *view = nullptr;

    Controller(Model *model, View *view) {
        this->model = model;
        this->view = view;
    }
    void appendAction(int x)
    {
        Model *model = new Model;
        model->append(x);
        delete model;
        cout << "Append successfully!" << endl;
    }

    void showAction()
    {
        vector<int> *v = model->getData();
        view->render(v);
    }

    void eraseData()
    {
        model->eraseData();
        cout << "Erase successfully!" << endl;
    }

    void selfDestruct()
    {
        delete model;
        delete view;
        delete this;
    }

};

#endif // CONTROLLER_H_INCLUDED
