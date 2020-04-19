#ifndef VIEW_H_INCLUDED
#define VIEW_H_INCLUDED

#include <vector>

using namespace std;
struct View {
    void render(vector<int> *v)
    {
        cout << "[";
        for (int i=0; i<(int)v->size(); ++i) {
            cout << (*v)[i];
            if (i != (int)v->size()-1)
                cout << ",";
        }
        cout << "]" << endl;
    }
};

#endif // VIEW_H_INCLUDED
