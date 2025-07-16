#include <iostream>

int main(){

    double  temp;
    char unit;

    std::cout<<"****Temperature conversion****"<<'\n';
    std::cout<<" F = Farenheit"<<'\n';
    std::cout<<" C = Celsius"<<'\n';
    std::cout<<"What unit would you like to convert to?";
    std::cin>>unit;

    if(unit=='F'||unit=='f'){
        std::cout<<" Enter the temperature in Celsius";
        std::cin>>temp;

        temp=(1.8*temp)+32.0;
        std::cout<<" Temperature is "<<temp<<"F"<<'\n';
    }
    else if(unit=='C'||unit=='c'){
        std::cout<<" Enter the temperature in Farenheit";
        std::cin>>temp; 

        temp=(temp-32)/1.8;
        std::cout<<" Temperature is "<<temp<<"C"<<'\n';
    }
    else{
        std::cout<<"Please enter only Celsius or Farenheit"<<'\n';
    }
    std::cout<<"******************************"<<'\n';

    return 0;
}