
#include <iostream>
#include <cstring>

void towers(int disks, int b[3][3], int from_col, int to_col, int spare){


if(disks >= 1){
        towers(disks - 1, b, from_col, to_col, spare)
        moveDisk(b, from_col, to_col, spare);
        print_array();

}

void moveDisk(b[3][3], from_col, to_col, spare, disks){

    for(int i = 0; i < disks; i++){
        if (b[from_col][i] != 0){
            //make note of the disk number, set the place to zero, and break
            transfer = array[from_col][i];
            array[from_col][i] = 0;
            break;
          }
    }

    for(int i=0; i<disks; i++){
//        #If we find the to_col already has some disks on it
        //if (array[to_col][i] != 0)
          if (array[to_col][i] <= 2){
            //#Place the transfer on top of the last disk in the column
            array[to_col][i-1] = transfer;
            break;
        }
    }

      //  #if we find to_col has no disks in it
        else if (array[to_col][i] == 0 and (i+1) == disks){}
          //  #place the transfer disk on the bottom
            array[to_col][i] = transfer;
          }
}











}

print_array(){

//      int amount = 0;
//      cout << "How many rings? Enter 1-3." << endl;
//      cin >> amount;

for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
                cout<<b[i][j]<<" ";
}
cout << endl;
cout << "--------" << endl;
}

for(int i=0; i<amount; i++){
cout << i << " ";
}



}

int main () {

int disks = 0;
int b[3][3] = {{1,2,3},{0,0,0}};
int from_col = 0;
int to_col = 0;
int spare = 0;
