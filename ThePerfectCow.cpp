//  Copyright © 2017 Dougy Ouyang. All rights reserved.

#include <iostream>
#include <algorithm>

using namespace std;
int n, mat[200][200], fi[200];

int s(int row)
{
    int so[200];
    int i;
    for(i=0;i<n;i++){
        so[i]=mat[row][i];
    }
    sort(so, so+n);
    return so[n/2];
}

int main()
{
    int i, j;
    
    cin >> n;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin >> mat[i][j];
        }
    }
    
    for(i=0;i<n;i++){
        fi[i]=s(i);
    }
    sort(fi, fi+n);
    
    cout << fi[n/2] << endl;
    
    return 0;
}
