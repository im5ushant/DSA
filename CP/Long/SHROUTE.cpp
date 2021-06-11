#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--)
    {
        int N, M;
        cin >> N >> M;
        int *A = new int[N];
        int *B = new int[M];
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        for (int i = 0; i < M; i++)
        {
            cin >> B[i];
        }

        for (int i = 0; i < M; i++)
        {

            int reqdStn = B[i]-1;

            if(A[reqdStn] > 0 || reqdStn == 0){
                B[i] = 0;
                continue;
            }

            int x, y;
            bool xFlag, yFlag;
            xFlag = yFlag = false;
            int xCtr, yCtr;
            xCtr = yCtr = -1;
            x = y = reqdStn;

            x--;
            while(x>=0){
                if(A[x] == 1){
                    xFlag = true;
                    xCtr++;
                    break;
                }
                xCtr++;
                x--;
            }

            y++;
            while(y<N){
                if(A[y] == 2){
                    yFlag = true;
                    yCtr++;
                    break;
                }
                yCtr++;
                y++;
            }

            if(xFlag && yFlag && xCtr < yCtr){
                B[i] = xCtr+1;
            } 
            else if(xFlag && yFlag && yCtr <= xCtr){
                B[i] = yCtr+1;
            }
            else if(xFlag && !yFlag){
                B[i] = xCtr+1;
            }
            else if(!xFlag && yFlag){
                B[i] = yCtr+1;
            } else if(!xFlag && !yFlag) {
                B[i] = -1;
            }

        }

        for(int i = 0; i < M; i++){
            cout<<B[i]<<" ";
        }
        cout<<endl;
        delete[] A;
        delete[] B;
    }
    return 0;
}