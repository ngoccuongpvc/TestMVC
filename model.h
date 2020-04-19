#ifndef MODEL_H_INCLUDED
#define MODEL_H_INCLUDED

#include <cstring>
#include <vector>
#include <fstream>

using namespace std;
struct Model {
    const string source = "file.txt";
    vector<int> *getData()
    {
        ifstream fi(source);
        vector<int> *res = new vector<int>;
        int x;
        while (fi >> x) {
            res->push_back(x);
        }
        fi.close();
        return res;
    }

    void append(int x)
    {
        ofstream fo(source, ofstream::app);
        fo << x << endl;
        fo.close();
    }

    void eraseData()
    {
        ofstream fo(source);
        fo.close();
    }
};

#endif // MODEL_H_INCLUDED
