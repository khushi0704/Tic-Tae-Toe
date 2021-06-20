#include <iostream>
using namespace std;
void show_board();
int main(){
    show_board();
    return 0;
}
void show_board(){
char board[9]={'X','0',' ',' ',' ',' ',' ',' ',' '};
cout<<"   "<<board[0]<<"   |   "<<"   "<<"   |   "<<endl;
cout<<"-----------------------"<<endl;
cout<<"   "<<"   |   "<<"   "<<"   |   "<<endl;
cout<<"-----------------------"<<endl;
cout<<"   "<<"   |   "<<"   "<<"   |   "<<endl;
}