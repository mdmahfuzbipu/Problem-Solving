#include <iostream>
using namespace std;
int main()
{
    int option;
    int inter_win=0,gremio_win=0,draw=0;
    int score[2];
    int num_grenais=0;

while(true)
    {   

    cin>>score[0]>>score[1];

    if(score[0]>score[1])
    {    
        inter_win++;
    }
    else if(score[0]<score[1])
    {
        gremio_win++;
    }
    else
    {
        draw++;
    }

    num_grenais++;

    std::cout<<"Novo grenal (1-sim 2-nao)"<<endl;
    cin>>option;        
        
    if(option==2)
        break;

    }

    std::cout<<num_grenais<<" grenais"<<endl;
    std::cout<<"Inter:"<<inter_win<<endl;
    std::cout<<"Gremio:"<<gremio_win<<endl;
    std::cout<<"Empates:"<<draw<<endl;
    
    if(inter_win>gremio_win)
    std::cout<<"Inter venceu mais"<<endl;
    else if(gremio_win>inter_win)
        std::cout<<"Gremio venceu mais"<<endl;
    else
        std::cout<<"Não houve vencedor"<<endl;

}