#include <iostream>
 
int main() 
{
        int t;
        
        std::cin >> t;
        
        while(t--)
        {
                std::string Liczba; 
                unsigned int Potega;
                
                std::cin >> Liczba >> Potega;
                
                unsigned int POM = int(Liczba[Liczba.size()-1]-48);
                
                if( Potega == 1 ) std::cout << "1\n";
                else
                {
                             if( POM == 0 ) std::cout << "0\n";
                        else if( POM == 1 ) std::cout << "1\n";
                        else if( POM == 2 )
                        {
                                        int ABC = Potega % 4;
                                        
                                             if( ABC == 0)  std::cout << "6\n";
                                        else if( ABC == 1)  std::cout << "2\n";
                                        else if( ABC == 2)  std::cout << "4\n";
                                        else std::cout << "8\n";
                        }
                        else if( POM == 3 )
                        {
                                        int ABC = Potega % 4;
                                        
                                             if( ABC == 0)  std::cout << "1\n";
                                        else if( ABC == 1)  std::cout << "3\n";
                                        else if( ABC == 2)  std::cout << "9\n";
                                        else std::cout << "7\n";
                        }
                        else if( POM == 4 )
                        {
                                        int ABC = Potega % 2;
                                        
                                             if( ABC == 0)  std::cout << "6\n";
                                        else std::cout << "4\n";
                        }
                        else if( POM == 5 )
                        {
                                std::cout << "5\n";
                        }
                        else if( POM == 6 )
                        {
                                std::cout << "6\n";
                        }
                        else if( POM == 7 )
                        {
                                        int ABC = Potega % 4;
                                        
                                             if( ABC == 0)  std::cout << "1\n";
                                        else if( ABC == 1)  std::cout << "7\n";
                                        else if( ABC == 2)  std::cout << "9\n";
                                        else std::cout << "3\n";
                        }
                        else if( POM == 8 )
                        {
                                        int ABC = Potega % 4;
                                        
                                             if( ABC == 0)  std::cout << "6\n";
                                        else if( ABC == 1)  std::cout << "8\n";
                                        else if( ABC == 2)  std::cout << "4\n";
                                        else std::cout << "2\n";        
                        }
                        else // POM == 9
                        {
                                        int ABC = Potega % 2;
                                        
                                             if( ABC == 0)  std::cout << "1\n";
                                        else std::cout << "9\n";
                        }
                        
                }
            
                
        }       
        
        return 0;
}
