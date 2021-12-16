#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;

int main(){
    int count = 0;
    float mean ,sum,sum1,SD ; 
    
    string textline;
    ifstream source("score.txt");
    while(getline(source,textline))
        {
            sum += atof(textline.c_str());
            sum1 += pow(atof(textline.c_str()),2);
            count++;
        }

        
        mean = sum/count;
        SD = sqrt((sum1/count)-pow(mean,2));

        cout << "Number of data = "<< count <<'\n';
        cout << setprecision(3) << "Mean = "<< mean <<'\n';
        cout << setprecision(3) << "Standard deviation = "<< SD ;

    source.close();
    return 0;
    }





