#include <iostream>
using namespace std;

void show(bool screen[20][20]){
  for(int y = 19; y >= 0; y--){
    for(int x = 0; x < 20; x++){
      if(screen[x][y]){
        cout<<"EE";
      }
      else{
        cout<<"  ";
      }
    }
    cout<<"\n";
  }
}


int* vec_sum(int vec1[2], int vec2[2]){
  static int vecf[2];
  for(int i = 0; i < sizeof(vec1)/sizeof(int); i++){
    vecf[i] = vec1[i]+vec2[i];
  }
  return vecf;
}

int main(){
  int v1[2] = {2, 4};
  int v2[2] = {3, 5};
  int *p = vec_sum(v1, v2);
  int v3[2];
  v3[0] = p[0];
  v3[1] = p[1];
  cout<<v3[1];
  /*
  int* p;
  p = vec_sum(v1, v2);
  cout<<*p;*/

}

/*
bool tela[20][20];
  for(int j = 19; j >= 0; j--){
    for(int i = 0; i < 20; i++){
      tela[i][j] = true;
    }
  }*/