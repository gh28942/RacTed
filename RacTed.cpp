#include <iostream>
#include <stdlib.h>
#define _WIN32_WINNT 0x0500
#include <windows.h>
#include <conio.h>

using namespace std;

const int zei = 20;
const int spa = 50;

// by GerH, 2013

void game(char map[zei][spa], int players, char mappes, int rounds){
     int zaehler = 0;                                             //Zeitrennen
     string weiter;
		//PLAYERS
		if(players==1)
			for(int i=0; i<zei; i++){
				cout << endl;
				for(int j=0; j<spa; j++)
					if(map[i][j]=='D'||map[i][j]=='C'||map[i][j]=='B')
						map[i][j]=' ';
			}       
		if(players==2)
			for(int i=0; i<zei; i++){
				cout << endl;
				for(int j=0; j<spa; j++)
					if(map[i][j]=='D'||map[i][j]=='C')
						map[i][j]=' ';
			}
		if(players==3)
			for(int i=0; i<zei; i++){
				cout << endl;
				for(int j=0; j<spa; j++)
					if(map[i][j]=='D')
						map[i][j]=' ';
			}
		//PLAYERS//	
		
		//INTRO		
		for(int i=0; i<zei; i++){
			cout << endl;
			for(int j=0; j<spa; j++)
				cout <<  map[i][j];
		}
			Sleep(70);
		system ("cls");							//COUNTDOWN
		cout << " 3 ";
			Beep(300,800);
		system ("cls");
		for(int i=0; i<zei; i++){
			cout << endl;
			for(int j=0; j<spa; j++)
				cout <<  map[i][j];
		}
			Sleep(80);
		system ("cls");
		cout << " 2 ";
			Beep(620,700);
		system ("cls");
		for(int i=0; i<zei; i++){
			cout << endl;
			for(int j=0; j<spa; j++)
				cout <<  map[i][j];
		}
			Sleep(90);
		system ("cls");
		cout << " 1 ";
			Beep(970,600);
		system ("cls");

		int rndA = 0;                   //Runden der Player
        int rndB = 0;
        int rndC = 0;
        int rndD = 0;	
        
        bool Awon = true;
        bool Bwon = true;
        bool Cwon = true;
        bool Dwon = true;
        
        char erster = ' ';
        char zweiter = ' ';
        char dritter = ' ';
        char vierter = ' ';

	while(true){                       //THE GAME//
        
        
		int x1 = 0;
        int x2 = 0;
        int x3 = 0;
        int x4 = 0;
        int z = 0; 
        
		bool begg = false;
		
		if(begg == false){
    		if (mappes=='b'){               
               x1 = 12;
               x2 = 13;
               x3 = 14;
               x4 = 15;
               z = 8;    		   
            }
            if (mappes=='e'){
                x1 = 3;
                x2 = 4;
                x3 = 5;
                x4 = 6;
                z=9;
            }
            if (mappes=='o'){
                x1 = 1;
                x2 = 2;
                x3 = 3;
                x4 = 4;
                z=15;
            }
            if (mappes=='l'){
                x1 = 15;
                x2 = 16;
                x3 = 17;
                x4 = 18;
                z=5;
            }
            if (mappes=='w'){
                x1 = 15;
                x2 = 16;
                x3 = 17;
                x4 = 18;
                z=9;
            }
            if (mappes=='m'){
                x1 = 9;
                x2 = 10;
                x3 = 11;
                x4 = 12;
                z=14;
            }
            if (mappes=='h'){
                x1 = 7;
                x2 = 8;
                x3 = 9;
                x4 = 10;
                z=7;
            }
            if (mappes=='g'){
                x1 = 14;
                x2 = 15;
                x3 = 16;
                x4 = 17;
                z=12;
            }
            if (mappes=='r'){
                x1 = 11;
                x2 = 12;
                x3 = 13;
                x4 = 14;
                z=25;
            }
            if (mappes=='u'){
                x1 = 9;
                x2 = 10;
                x3 = 11;
                x4 = 12;
                z=5;
            }
            if (mappes=='q'){
                x1 = 8;
                x2 = 9;
                x3 = 10;
                x4 = 11;
                z=9;
            }
            if (mappes=='y'){
                x1 = 8;
                x2 = 9;
                x3 = 10;
                x4 = 11;
                z=9;
            }
            if (mappes=='k'){
                x1 = 8;
                x2 = 9;
                x3 = 10;
                x4 = 11;
                z=33;
            }
            if (mappes=='x'){
                x1 = 10;
                x2 = 11;
                x3 = 12;
                x4 = 13;
                z=18;
            }
            if (mappes=='d'){
                x1 = 1;
                x2 = 2;
                x3 = 3;
                x4 = 4;
                z=20;
            }
            if (mappes=='p'){
                x1 = 12;
                x2 = 13;
                x3 = 14;
                x4 = 15;
                z=41;
            }
            if (mappes=='s'){
                x1 = 16;
                x2 = 17;
                x3 = 18;
                x4 = 19;
                z=16;
            }
            if (mappes=='f'){
                x1 = 4;
                x2 = 5;
                x3 = 6;
                x4 = 7;
                z=22;
            }
            if (mappes=='t'){
                x1 = 11;
                x2 = 12;
                x3 = 13;
                x4 = 14;
                z=3;
            }
            if (mappes=='a'){
                x1 = 15;
                x2 = 16;
                x3 = 17;
                x4 = 18;
                z=26;
            }
            begg = true;
         }
		
		//CONTROLS PLAYER ONE
		if(GetAsyncKeyState(0x57)){//w
			for(int i=0; i<zei; i++){
				for(int j=0; j<spa; j++)
					if(map[i][j]=='A' && map[i-1][j]==' '){					
						map[i][j]=' ';
						map[i-1][j]='A';
					}
							
			}
		}
		if(GetAsyncKeyState(0x41)){//a
			for(int i=0; i<zei; i++){
				for(int j=0; j<spa; j++)
					if(map[i][j]=='A' && map[i][j-1]==' '){	
                        if(map[i][j] == map[x1][z] || map[i][j] == map[x2][z] || map[i][j] == map[x3][z] || map[i][j] == map[x4][z]){
                                       rndA--;
                        }				
						map[i][j]=' ';
						map[i][j-1]='A';
					}
							
			}
		}
		if(GetAsyncKeyState(0x53)){//s	
			for(int i=zei; i>0; i--){
				for(int j=0; j<spa; j++)
					if(map[i][j]=='A' && map[i+1][j]==' '){					
						map[i][j]=' ';
						map[i+1][j]='A';
					}
			}
		}
		if(GetAsyncKeyState(0x44)){//d
			for(int i=0; i<zei; i++){
				for(int j=spa; j>0; j--)
					if(map[i][j]=='A' && map[i][j+1]==' '){
                        if(map[i][j] == map[x1][z] || map[i][j] == map[x2][z] || map[i][j] == map[x3][z] || map[i][j] == map[x4][z])
                                       rndA++;
                                       if(rndA == rounds)
                                               Awon = false;
						map[i][j]=' ';
						if(Awon != false)
						        map[i][j+1]='A';
                        else
                            if(erster == ' ')
                                      erster = 'A';
                            else if(zweiter == ' ')
                                      zweiter = 'A';
                            else if(dritter == ' ')
                                      dritter = 'A';
                            else
                                      vierter = 'A';
					}
							
			}	
		}
		//CONTROLS PLAYER ONE//	
		
		
		//CONTROLS PLAYER TWO
		if(GetAsyncKeyState(0x26)){//up
			for(int i=0; i<zei; i++){
				for(int j=0; j<spa; j++)
					if(map[i][j]=='B' && map[i-1][j]==' '){					
						map[i][j]=' ';
						map[i-1][j]='B';
					}
							
			}
		}
		if(GetAsyncKeyState(0x25)){//left
			for(int i=0; i<zei; i++){
				for(int j=0; j<spa; j++)
					if(map[i][j]=='B' && map[i][j-1]==' '){	
                        if(map[i][j] == map[x1][z] || map[i][j] == map[x2][z] || map[i][j] == map[x3][z] || map[i][j] == map[x4][z]){
                                       rndB--;
                        }			
						map[i][j]=' ';
						map[i][j-1]='B';
					}
							
			}
		}
		if(GetAsyncKeyState(0x28)){//down
			for(int i=zei; i>0; i--){
				for(int j=0; j<spa; j++)
					if(map[i][j]=='B' && map[i+1][j]==' '){					
						map[i][j]=' ';
						map[i+1][j]='B';
					}
			}
		}
		if(GetAsyncKeyState(0x27)){//right	
			for(int i=0; i<zei; i++){
				for(int j=spa; j>0; j--)
					if(map[i][j]=='B' && map[i][j+1]==' '){	
                        if(map[i][j] == map[x1][z] || map[i][j] == map[x2][z] || map[i][j] == map[x3][z] || map[i][j] == map[x4][z]){
                                       rndB++;
                                       if(rndB == rounds)
                                               Bwon = false;	
                        }			
						map[i][j]=' ';
						if(Bwon != false)
						        map[i][j+1]='B';
                        else
                            if(erster == ' ')
                                      erster = 'B';
                            else if(zweiter == ' ')
                                      zweiter = 'B';
                            else if(dritter == ' ')
                                      dritter = 'B';
                            else
                                      vierter = 'B';
					}
							
			}	
		}
		//CONTROLS PLAYER TWO//	
		
		
		//CONTROLS PLAYER THREE
		if(GetAsyncKeyState(0x47)){//g
			for(int i=0; i<zei; i++){
				for(int j=0; j<spa; j++)
					if(map[i][j]=='C' && map[i-1][j]==' '){					
						map[i][j]=' ';
						map[i-1][j]='C';
					}
							
			}
		}
		if(GetAsyncKeyState(0x56)){//v
			for(int i=0; i<zei; i++){
				for(int j=0; j<spa; j++)
					if(map[i][j]=='C' && map[i][j-1]==' '){
                        if(map[i][j] == map[x1][z] || map[i][j] == map[x2][z] || map[i][j] == map[x3][z] || map[i][j] == map[x4][z]){
                                       rndC--;
                        }				
						map[i][j]=' ';
						map[i][j-1]='C';
					}
							
			}
		}
		if(GetAsyncKeyState(0x42)){//b
			for(int i=zei; i>0; i--){
				for(int j=0; j<spa; j++)
					if(map[i][j]=='C' && map[i+1][j]==' '){					
						map[i][j]=' ';
						map[i+1][j]='C';
					}
			}
		}
		if(GetAsyncKeyState(0x4e)){//n	
			for(int i=0; i<zei; i++){
				for(int j=spa; j>0; j--)
					if(map[i][j]=='C' && map[i][j+1]==' '){	
                        if(map[i][j] == map[x1][z] || map[i][j] == map[x2][z] || map[i][j] == map[x3][z] || map[i][j] == map[x4][z]){
                                       rndC++;
                                       if(rndC == rounds)
                                               Cwon = false;
                        }		
						map[i][j]=' ';
						if(Cwon != false)
						        map[i][j+1]='C';
                        else
                            if(erster == ' ')
                                      erster = 'C';
                            else if(zweiter == ' ')
                                      zweiter = 'C';
                            else if(dritter == ' ')
                                      dritter = 'C';
                            else
                                      vierter = 'C';
					}
							
			}	
		}
		//CONTROLS PLAYER THREE//
		
		
		//CONTROLS PLAYER FOUR
		if(GetAsyncKeyState(0x49)){//i
			for(int i=0; i<zei; i++){
				for(int j=0; j<spa; j++)
					if(map[i][j]=='D' && map[i-1][j]==' '){					
						map[i][j]=' ';
						map[i-1][j]='D';
					}
							
			}
		}
		if(GetAsyncKeyState(0x4a)){//j
			for(int i=0; i<zei; i++){
				for(int j=0; j<spa; j++)
					if(map[i][j]=='D' && map[i][j-1]==' '){	
                        if(map[i][j] == map[x1][z] || map[i][j] == map[x2][z] || map[i][j] == map[x3][z] || map[i][j] == map[x4][z]){
                                       rndD--;
                        }		
						map[i][j]=' ';
						map[i][j-1]='D';
					}
							
			}
		}
		if(GetAsyncKeyState(0x4b)){//k	
			for(int i=zei; i>0; i--){
				for(int j=0; j<spa; j++)
					if(map[i][j]=='D' && map[i+1][j]==' '){					
						map[i][j]=' ';
						map[i+1][j]='D';
					}
			}
		}
		if(GetAsyncKeyState(0x4c)){//l
			for(int i=0; i<zei; i++){
				for(int j=spa; j>0; j--)
					if(map[i][j]=='D' && map[i][j+1]==' '){	
                        if(map[i][j] == map[x1][z] || map[i][j] == map[x2][z] || map[i][j] == map[x3][z] || map[i][j] == map[x4][z]){
                                       rndD++;			
                                       if(rndD == rounds)
                                               Dwon = false;
                        }
						map[i][j]=' ';
						if(Dwon != false)
						        map[i][j+1]='D';
                        else
                            if(erster == ' ')
                                      erster = 'D';
                            else if(zweiter == ' ')
                                      zweiter = 'D';
                            else if(dritter == ' ')
                                      dritter = 'D';
                            else
                                      vierter = 'D';
					}
							
			}	
		}
		//CONTROLS PLAYER FOUR//		
		if(GetAsyncKeyState(0x1b)){		//esc
			break;
		}
		           system ("cls");
				
		           zaehler++;
		           cout << endl << zaehler/10 << "r'" << zaehler%10 << "r''" << endl;
		           
		           if(players == 1){
                              cout << rndA << "/" << rounds << endl;
                              if (Awon == false){
                                 system ("cls");
                                 for(int i=0; i<zei; i++){
                        			cout << endl;
                        			for(int j=0; j<spa; j++)
                        				cout <<  map[i][j];
                        		 }
                                 cout << "\n\nRounds: " << rounds << "\nTime: " << zaehler/10 << "r'" << zaehler%10 << "r''\n\n";
                                 
                                 cin>> weiter;
                                 break;
                              }
                   }
		           else if(players == 2){
		                      cout << rndA << "/" << rounds << endl;
		                      cout << rndB << "/" << rounds << endl;
		                      if (Awon == false && Bwon == false){
                                 system ("cls");
                                 for(int i=0; i<zei; i++){
                        			cout << endl;
                        			for(int j=0; j<spa; j++)
                        				cout <<  map[i][j];
                        		 }
                                 cout << "\n\nRounds: " << rounds << "\nTime: " << zaehler/10 << "r'" << zaehler%10 << "r''\n\n";
                                 cout << "First: " << erster << "\nLast:  " << zweiter;
                                 cin>> weiter;
                                 break;
                              }
                   }
		           else if(players == 3){
		                      cout << rndA << "/" << rounds << endl;
		                      cout << rndB << "/" << rounds << endl;
		                      cout << rndC << "/" << rounds << endl;
		                      if (Awon == false && Bwon == false && Cwon == false){
                                 system ("cls");
                                 for(int i=0; i<zei; i++){
                        			cout << endl;
                        			for(int j=0; j<spa; j++)
                        				cout <<  map[i][j];
                        		 }
                                 cout << "\n\nRounds: " << rounds << "\nTime: " << zaehler/10 << "r'" << zaehler%10 << "r''\n\n";
                                 cout << "First:  " << erster << "\nSecond: " << zweiter << "\nLast:   " << dritter;
                                 cin>> weiter;
                                 break;
                              }
                   }
		           else{
		                      cout << rndA << "/" << rounds << endl;
		                      cout << rndB << "/" << rounds << endl;
		                      cout << rndC << "/" << rounds << endl;
		                      cout << rndD << "/" << rounds << endl;
		                      if (Awon == false && Bwon == false && Cwon == false && Dwon == false){
                                 system ("cls");
                                 for(int i=0; i<zei; i++){
                        			cout << endl;
                        			for(int j=0; j<spa; j++)
                        				cout <<  map[i][j];
                        		 }
                                 cout << "\n\nRounds: " << rounds << "\nTime: " << zaehler/10 << "r'" << zaehler%10 << "r''\n\n";
                                 cout << "First:  " << erster << "\nSecond: " << zweiter << "\nThird:  " << dritter << "\nLast:   " << vierter;
                                 cin>> weiter;
                                 break;
                              }
                   }
                   
        
		for(int i=0; i<zei; i++){
			cout << endl;
			for(int j=0; j<spa; j++)
				cout <<  map[i][j];
		}
	}

}

	
int main(){
    
    HWND console = GetConsoleWindow();
    RECT r;
    GetWindowRect(console, &r);
    MoveWindow(console, r.left, r.top, 430, 400, TRUE);
    
	char gameisrunning = 'y';
	while(gameisrunning == 'y'){
	system("cls");
    
    
char map[zei][spa]={};
bool activemap=false;

				  char intro[zei][spa]={'+','~','+','*',' ',' ',' ',' ',' ',' ','*',' ',' ',' ','*','*',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*','+','~','+',
										'~','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*','~',
										'+',' ','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','+',
										'*',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*',
										' ',' ','#',' ','R','A','C','E','R','S',' ','U','N','L','I','M','I','T','E','D',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
										' ',' ','#',' ','v','e','r','s','i','o','n',' ','0','.','8',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
										' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
										' ',' ','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
										' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
										' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
										' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
										'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*',
										' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
										' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
										' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
										'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*',
										'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','B','y',' ','G','e','r','H',' ',' ','*',
										'+',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','2','0','1','3',' ',' ','+',
										'~','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*','~',
										'+','~','+','*',' ',' ',' ',' ',' ',' ','*',' ',' ',' ','*','*',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*','+','~','+'};

	for(int i=0; i<zei; i++){
		cout << endl;
		for(int j=0; j<spa; j++)
			cout << intro[i][j];
	}
	
		Sleep(2000);			//0x07
		   Beep(200,100);
           Beep(800,100);
           Beep(600,100);
           Beep(500,100);
           Beep(400,100);
		system ("cls");
		
		int players;
		cout << "Players?(1-4)\n";
			cin>> players;
			if(1<=players&&players<=4 || players==1993 || players==26 || players==37921846 || players==581911954 || players==776580933 || players==288106214 || players==669973263 || players==984429601 || players==364059807 || players==199668168 || players==285631404 || players==140099488){
				Beep(200,100);
                Beep(800,100);
                Beep(600,100);
                Beep(800,100);
               cout << "Okay";
		       Beep(700,100);
            }
			else{
				cout << "Sorry, WRONG NUMBER!";
				Beep(50,500);
				//Sleep(200);
				return 0;
			}			
		Sleep(200);
		system ("cls");	
		cout << "Rounds?(2-20)\n";
    		int rounds;
    		cin >> rounds;
    		if(2<=rounds && rounds<=20){
               cout << "Okay";
            }
            else{
				cout << "Sorry, WRONG NUMBER!";
				Beep(50,500);
				//Sleep(200);
				return 0;
			}
		system ("cls");
        
               
		char maps[zei][spa]={'#','#','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#','#','#',
							 '#','+','-','-','-','-','+',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',
							 '#','|','M','A','P','S','|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','c','o','n','t','r','o','l','s',':','w','-','a','-','s','&','d',' ','#',
							 ' ','+','-','-','-','-','+',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','a','r','r','o','w','s',' ',' ',
							 ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','g','-','v','-','b','&','n',' ',' ',
							 ' ','b',' ','B','e','g','i','n','n','e','r','s',' ',' ','g',' ','G','r','a','s','s','l','a','n','d',' ',' ','d',' ','T','e','m','p','l','e',' ',' ',' ',' ',' ',' ','i','-','j','-','k','&','l',' ',' ',
							 ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
							 ' ','o',' ','W','o','r','m','h','o','l','e',' ',' ',' ','r',' ','C','r','a','z','y',' ',' ',' ',' ',' ',' ','p',' ','P','i','r','a','t','e',' ','B','a','y',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
							 ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
							 ' ','e',' ','E','i','g','h','t',' ',' ',' ',' ',' ',' ','u',' ','P','u','z','z','l','e','d',' ',' ',' ',' ','s',' ','S','i','l','k','r','o','a','d',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
							 ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
							 ' ','l',' ','L','o','n','g',' ','W','a','y',' ',' ',' ','q',' ','T','h','r','e','e','-','W','a','y',' ',' ','f',' ','T','o','u','r',' ','d','e',' ','F','r','a','n','c','e',' ',' ',' ',' ',' ',' ',' ',
							 ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
							 ' ','w',' ','W','i','d','e',' ',' ',' ',' ',' ',' ',' ','y',' ','W','a','t',' ',' ',' ',' ',' ',' ',' ',' ','t',' ','T','r','a','n','s','s','i','b','e','r','i','a',' ',' ',' ',' ',' ',' ',' ',' ',' ',
							 ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
							 ' ','m',' ','M','a','z','e',' ',' ',' ',' ',' ',' ',' ','k',' ','S','c','h','r','a','e','g','e',' ',' ',' ','a',' ','A','r','o','u','n','d',' ','t','h','e',' ','W','o','r','l','d',' ',' ',' ',' ',' ',
							 ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
							 '#','h',' ','H','i','p','p','o','d','r','o','m',' ',' ','x',' ','C','r','o','s','s','w','a','y',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',
							 '#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',
							 '#','#','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#','#','#'};	

		for(int i=0; i<zei; i++){
			cout << endl;
			for(int j=0; j<spa; j++)
				cout << maps[i][j];
		}
		char mappes;
		cin >> mappes;
		
/*		EASTER-EGG-MAPS

        669973263 a
		26        b
        199668168 c
        1993      g
		37921846  g
		288106214 j
		581911954 l	
        285631404 m
        984429601 n
        776580933 o	
        364059807 q
        140099488 r
*/		

if(mappes=='l' && players==581911954 ){
        system ("cls");		
		
		
		
cout<<"                                ..gMMMMMMNa,.\n";
cout<<"                             .dMMMMMMMMMMMMMMN,\n";
cout<<"                            JMMMMMMMMMMMMNSwHMMN,\n";
cout<<"                           .MMMMMMMMMMMMMNMMMMMMM,\n";
cout<<"                        `  MMMMMMMMMMMMMMMMMMMMMMM,    `\n";
cout<<"    `  `  `  `  `  `      .MMMMNMMMMMMMMMMNKMMMMMMb        `  `  `  `\n";
cout<<"     LINUX                .MM5??7NMMMM9!``??NMMMMMM.\n";
cout<<"                      `   .M#.ga,.MMMF .gK, .MMMMMM:\n";
cout<<"    `                     .M@JMK@ MNNr MMMM| MMMMMM    `\n";
cout<<"        `  `  `  `         MM,WM5x:^+z!dMM@ .MMMMMM,      `  `  `  `\n";
cout<<"                    `   `  MMBv:^:^^:::^^::?TMMMMMML\n";
cout<<"   `                       d#v:^::^::^^^:.J!JMMMMMMN.  `             `\n";
cout<<"      `          `         dNw+.:^:^:.?J?:.JdMMMXMMMb\n";
cout<<"         `  `        `     JMIOwz?!!!:.Jx?``?HMMNkXMMp    `  `  `\n";
cout<<"               `        ` .MM:`1OXwzOv7``     WMMMMMMMe            `\n";
cout<<"   `                     .MMF   ??+?!`         WMMMMMMMb\n";
cout<<"      `    `      `    .JMM%      `            .MMMMMMMMN,           `\n";
cout<<"                     `.MMM%                     JMMMMMMMMMx  `  `\n";
cout<<"        `     `      JMMME+                .   . UMMMMMMMMMh.      `\n";
cout<<"   `       `     `  dMMM#C?`               `     .WMMMMMMMMMN,\n";
cout<<"      `            JMMMM=                         ,WMMNMMMMMMN,\n";
cout<<"                  .MMMM^             `    `       ``MMMMMMMMMMN,  `  `\n";
cout<<"             `   .MMMM^      `  `                   ,MNMMNMMMMMN.\n";
cout<<"   `   `  `     .MMMMt            `   `    `  `      MMMMMMMMMMMb\n";
cout<<"                dMMM#       `   .                    JMMMMMMMMMMM,\n";
cout<<"              .dMMMMt          .     `   `     `   ` JMMMMMMMMMMMb  `\n";
cout<<"    `         dMMNMM:     `    .`           `        ,MMM#MMMMMMM#\n";
cout<<"       `  `   MMMMNM:        ` `. `   `              ,MMMMMMMMMMMF\n";
cout<<"              ?:::7Mp   `      ..         `    `    .dNMMMMMMNMMM'  `\n";
cout<<"   `         .^^^^^:TMa.        `    `           .:^^.MMMMMMMMM5:.\n";
cout<<"       `   .::^^^^^^:?MMm,                   `   ,+^.dMMMMMMMM3^^.\n";
cout<<"     ..?!!!!!:^^^^^^^^:?MMMN,             `      .z::?1OVMMMBC:::^`\n";
cout<<"    .!:^^^:^^^^^^^^^^^::WMMMMe                  `dz:^:++++?!:^^^^^`.\n";
cout<<"     c:^^^^^^^^^^^^^^^^^:dMMMM:     `           .dI!:^:^:^^:^^^^^^^^`.`\n";
cout<<"     I:^^^^^^^^^^^^^^^^^^:?M""`            `   .M#I::^^^^^^^^^^^^^^^^^^.\n";
cout<<"     ::^^^^^^^^^^^^^^^^^^:^?l               ..MMMSv!^^^^^^^^^^^^^^^^^^^`\n";
cout<<"  `` :^:^^^^^^^^^^^^^^^^^:::?X,   `  ` ...+MMMMM#Zz:^^^^^^^^^^^^^^^..`\n";
cout<<" ```.^:::::::^:^^^^^^^^^^^:^+zMMMMMMMMMMMMMMMMMM#Zz:^^^^^^^^^^^.J?!.``\n";
cout<<" ```.?1zzz&++++..::::^::::.?+zdMMMMMMMMMMMMMMMMMHOz+.:::^::..+v!^^..```\n";
cout<<"  ``...^^^??7TOwwzz+++..+++zwwdBYT777?!!+::+?7TTBXOz1++++1zwC!:^^...```\n";
cout<<"  ````...^^^:::;;+?7OwwwOwwZ=:^^^^^^^^^^^^^:::;;+OXwwwwwwZ=+^^^^..````\n";
cout<<"     ```....^^^^^:^::^:?!!`^^....``````....^^^^^:::+!?!!^^^^^...````\n";
cout<<"       `` ```..`............`.```      ` ```.......`.....`.`````\n";
cout<<"                  `  ``  `                   ``  ` ```` `  `	\n";
/*Intro*/
    Beep (330,100);Sleep(100);
    Beep (330,100);Sleep(300);
    Beep (330,100);Sleep(300);
    Beep (262,100);Sleep(100);
    Beep (330,100);Sleep(300);
    Beep (392,100);Sleep(700);
    Beep (196,100);Sleep(700);
    /*Part 1*/
    Beep (262,300);Sleep(300);
    Beep (196,300);Sleep(300);
    Beep (164,300);Sleep(300);
    Beep (220,300);Sleep(100);
    Beep (246,100);Sleep(300);
    Beep (233,200);
    Beep (220,100);Sleep(300);
    Beep (196,100);Sleep(150);
    Beep (330,100);Sleep(150);
    Beep (392,100);Sleep(150);
    Beep (440,100);Sleep(300);
    Beep (349,100);Sleep(100);
    Beep (392,100);Sleep(300);
    Beep (330,100);Sleep(300);
    Beep (262,100);Sleep(100);
    Beep (294,100);Sleep(100);
    Beep (247,100);Sleep(500);
    /*Part 2*/
    Beep (262,300);Sleep(300);
    Beep (196,300);Sleep(300);
    Beep (164,300);Sleep(300);
    Beep (220,300);Sleep(100);
    Beep (246,100);Sleep(300);
    Beep (233,200);
    Beep (220,100);Sleep(300);
    Beep (196,100);Sleep(150);
    Beep (330,100);Sleep(150);
    Beep (392,100);Sleep(150);
    Beep (440,100);Sleep(300);
    Beep (349,100);Sleep(100);
    Beep (392,100);Sleep(300);
    Beep (330,100);Sleep(300);
    Beep (262,100);Sleep(100);
    Beep (294,100);Sleep(100);
    Beep (247,100);Sleep(900);
    /*Part 3*/
    Beep (392,100);Sleep(100);
    Beep (370,100);Sleep(100);
    Beep (349,100);Sleep(100);
    Beep (311,100);Sleep(300);
    Beep (330,100);Sleep(300);
    Beep (207,100);Sleep(100);
    Beep (220,100);Sleep(100);
    Beep (262,100);Sleep(300);
    Beep (220,100);Sleep(100);
    Beep (262,100);Sleep(100);
    Beep (294,100);Sleep(500);
    Beep (392,100);Sleep(100);
    Beep (370,100);Sleep(100);
    Beep (349,100);Sleep(100);
    Beep (311,100);Sleep(300);
    Beep (330,100);Sleep(300);
    Beep (523,100);Sleep(300);
    Beep (523,100);Sleep(100);
    Beep (523,100);Sleep(1100);
    Beep (392,100);Sleep(100);
    Beep (370,100);Sleep(100);
    Beep (349,100);Sleep(100);
    Beep (311,100);Sleep(300);
    Beep (330,100);Sleep(300);
    Beep (207,100);Sleep(100);
    Beep (220,100);Sleep(100);
    Beep (262,100);Sleep(300);
    Beep (220,100);Sleep(100);
    Beep (262,100);Sleep(100);
    Beep (294,100);Sleep(500);
    Beep (311,300);Sleep(300);
    Beep (296,300);Sleep(300);
    Beep (262,300);Sleep(1300);
    /*Part 4*/
    Beep (262,100);Sleep(100);
    Beep (262,100);Sleep(300);
    Beep (262,100);Sleep(300);
    Beep (262,100);Sleep(100);
    Beep (294,100);Sleep(300);
    Beep (330,200);Sleep(50);
    Beep (262,200);Sleep(50);
    Beep (220,200);Sleep(50);
    Beep (196,100);Sleep(700);
    Beep (262,100);Sleep(100);
    Beep (262,100);Sleep(300);
    Beep (262,100);Sleep(300);
    Beep (262,100);Sleep(100);
    Beep (294,100);Sleep(100);
    Beep (330,100);Sleep(700);
    Beep (440,100);Sleep(300);
    Beep (392,100);Sleep(500);
    Beep (262,100);Sleep(100);
    Beep (262,100);Sleep(300);
    Beep (262,100);Sleep(300);
    Beep (262,100);Sleep(100);
    Beep (294,100);Sleep(300);
    Beep (330,200);Sleep(50);
    Beep (262,200);Sleep(50);
    Beep (220,200);Sleep(50);
    Beep (196,100);Sleep(700);
    /*Intro*/
    Beep (330,100);Sleep(100);
    Beep (330,100);Sleep(300);
    Beep (330,100);Sleep(300);
    Beep (262,100);Sleep(100);
    Beep (330,100);Sleep(300);
    Beep (392,100);Sleep(700);
    Beep (196,100);Sleep(700);
    /*Level Clear*/
    Beep (196,100);Sleep(125);
    Beep (262,100);Sleep(125);
    Beep (330,100);Sleep(125);
    Beep (392,100);Sleep(125);
    Beep (523,100);Sleep(125);
    Beep (660,100);Sleep(125);
    Beep (784,100);Sleep(575);
    Beep (660,100);Sleep(575);
    Beep (207,100);Sleep(125);
    Beep (262,100);Sleep(125);
    Beep (311,100);Sleep(125);
    Beep (415,100);Sleep(125);
    Beep (523,100);Sleep(125);
    Beep (622,100);Sleep(125);
    Beep (830,100);Sleep(575);
    Beep (622,100);Sleep(575);
    Beep (233,100);Sleep(125);
    Beep (294,100);Sleep(125);
    Beep (349,100);Sleep(125);
    Beep (466,100);Sleep(125);
    Beep (587,100);Sleep(125);
    Beep (698,100);Sleep(125);
    Beep (932,100);Sleep(575);
    Beep (932,100);Sleep(125);
    Beep (932,100);Sleep(125);
    Beep (932,100);Sleep(125);
    Beep (1046,675);	
     Sleep(6000);
     return 0;
     }		
		
if(mappes=='o' && players==776580933){
        system ("cls");			
cout<<"...........z=!`    ``      `             ` `  `             ``4x`^..`...\n";
cout<<".....^ ..Z!                                            `   ` ` zx...^^..\n";
cout<<"..`^`..Z!                                                  `    S.`.....\n";
cout<<"^....J$                                                         jl......\n";
cout<<"..`.JC                                                          .Z .....\n";
cout<<"..`JP                    I'M  OK  WITH  THIS!                   .w......\n";
cout<<".^``F`                                                           X.^`...\n";
cout<<".^.`0.                                                          .Z...^..\n";
cout<<"....`C+.`                                                       J:`.....\n";
cout<<"..^...`CJ.                                                     J$.+,....\n";
cout<<"`^.....``??7T1&J........     ......                   ..   ` .JC`.`.`^..\n";
cout<<".j&J..`.`.`^.`WKUUUUUUUUUUUUUUUUUUUUWUUWWWWWWWfWWWH0?????6,.UC`.....`^..\n";
cout<<"..`??4I.......dHuuuuuXWkuXwuuuXuuuuuXXuuuXHkXWXuuuXWWx...`?o.w..z=!.`...\n";
cout<<"..^...`^.....dHuuuuuuuWHRXMNyUHkdWHkXWkXuwXUW0uuuuuuuUH+..`w.d...^``^...\n";
cout<<".`...........HXXkuXuuuWCTHd9WkUHkXMHRXXUUXkXXuXkXuuuuuSWe.`d`d^`....Jc`.\n";
cout<<".````...^.^.JHkXHXuXkZWc `?!`?THNkWR?WmXXXWNkkXWNkXuuXMHWm.v.C`..JJT!...\n";
cout<<" ...........WHHWWXuXNXN:`..`..`..?9Ms.?THkkXHHHkW9WkwXXR.j0u3..+V!......\n";
cout<<".^...^.....JNWWWuuuXNW@!..^........`!`...`!?TY`7WHc??HWNgWC!.ZC`....^...\n";
cout<<"...?!`..^..`HHWpuuuWNH3.......^.`^..`..`.....^```.`.^dHH!`^. .`..^......\n";
cout<<"..........^,NWKWuXkWB=^..^..............^.....^...^^.?HH+.`^.......J&...\n";
cout<<"...........`NkXuuXNH!..^..^....^...........^....^.....dM=7S,`.^`77!``.^.\n";
cout<<"......^..^..dHWkXX#=..^...^.^.^..^.^.^.^..^^.JNNe.`. .`W..Jk.. .`..``...\n";
cout<<"........^..J#!.vHWD. .^....JJ,`............^.dMMM$..^..`.w.X.^..........\n";
cout<<"...........d$..`?!`.`..^..jMMNp.^.....^....`..?7!`..^.`.`d2X!........^..\n";
cout<<"....^..^..^dr?R........^..JTMMD....^....^.`...^.`. ^..^`.`.d!..^..^.....\n";
cout<<"...JZC!.`^.vR`+:.^^..^....^....^.........^...........^....JY`..^.?=` ...\n";
cout<<".?=`.....^.`Wo?+^..^....^..^..^...^..^....^.^..^..^.....,Z`..` .....`...\n";
cout<<".....^...^..`Ue,..`.........`.^`.^.^.^..^..^.^.......^`.,k......OwI!`...\n";
cout<<".^.^`... ..``.?T9W&..^.....^..``....JJJ+&ggNNm+.^..^....,W`....`...^....\n";
cout<<"..`.jC`...^..^..`j@.`...^...`^JgM#MMNMMNMMMMMNb`.....^..`W.......`..^...\n";
cout<<"..............^..`Wl......^^..JHyZZZWMMMMMMMMMC..^..^.^..X`..?7TUA&JJ...\n";
cout<<"..........^.......Jk.^........ ?UHkXkXHMMMMMB:.......^...X.........`?``.\n";
cout<<"...^...^...^.^..^.`dp..^...``.`..`??77777?!`.^..^..^...^.W`..^..`.....^.\n";
cout<<"......^....^..^`.` `Wo.` ....^...^...............^...^`.gI..`..J..^.....\n";
cout<<"......^.`.JC`....`..`Hx..^....^....^...........^.......jBWe.`..?!=!^`...\n";
cout<<"...^.^..+V!..........dNx``.^...^....^.^..^^..^....^^.JX01zWm....^....^..\n";
cout<<"..^...JY!.^..J......W0vHx.....^..^...^.......... ..JXSI?=?zUR,.^........\n";
cout<<".....`!`...,V!`?`.JXC?1zWH&.........^.^^.....J+gXBTIdI=?==?zdR..........\n";
cout<<"...^...^...``...`JH3?=1?1=vTYWWHHMHHHHHHMMMMMHmAAeszdkz11?==zWR...^...^.\n";
cout<<"...............^.X0=?=?!!!!!=????ORz+?+zdHo+d81=11vTWWI=?=1=?vHo........\n";
cout<<"..^......^..^....Hz=?!=?=?==?!==1zdI1dUYzz4sd$z?1+=?1vI?=?=?z=dH....^...\n";
cout<<".....^..........dR?!==?!?=?!=?!?1=vQd6?=?=zWd0?=?=?=!?==?=?=?=1UR.`.`..^\n";
cout<<".......^........d$=?=?!=?!?!!=?=z1zZ9=?!=?1zWIz?=?!=?=?!=?!=?=?zN:.. ^..	\n";
Beep(233,250);                                                              //Pink Panther
Beep(246,450);
Beep(30000,250);
Beep(261,250);
Beep(261,1800);
Beep(261,900);
Beep(261,450);
Beep(30000,250);
Beep(233,250);
Beep(246,450);
Beep(30000,250);
Beep(261,250);
Beep(261,1800);
Beep(261,900);
Beep(261,450);
Beep(30000,250);
Beep(246,250);
Beep(246,450);
Beep(30000,250);
Beep(246,250);
Beep(220,1800);
Beep(220,900);
Beep(220,450);
Beep(30000,250);
Beep(233,250);
Beep(246,450);
Beep(30000,250);
Beep(261,250);
Beep(261,1800);
Beep(261,900);
Beep(261,450);
Beep(30000,450);
Beep(30000,675);
Beep(261,250);
Beep(261,450);
Beep(30000,675);
Beep(293,250);
Beep(329,450);
Beep(30000,675);
Beep(261,250);
Beep(261,675);
Beep(293,250);
Beep(329,675);
Beep(493,250);
Beep(392,675);
Beep(261,250);
Beep(329,675);
Beep(392,250);
Beep(369,900);
Beep(392,150);
Beep(349,150);
Beep(329,150);
Beep(261,150);
Beep(246,150);
Beep(261,150);
Beep(261,900);
Beep(30000,787);
Beep(261,250);
Beep(261,450);
Beep(30000,675);
Beep(293,250);
Beep(329,450);
Beep(30000,675);
Beep(261,250);
Beep(261,675);
Beep(293,250);
Beep(329,675);
Beep(493,250);
Beep(392,675);
Beep(261,250);
Beep(329,675);
Beep(587,250);
Beep(554,1800);
Beep(554,900);
Beep(30000,787);
Beep(277,250);
Beep(261,250);
Beep(261,450);
Beep(30000,675);
Beep(293,250);
Beep(329,450);
Beep(30000,675);
Beep(261,250);
Beep(261,675);
Beep(293,250);
Beep(329,675);
Beep(493,250);
Beep(392,675);
Beep(261,250);
Beep(329,675);
Beep(392,250);
Beep(369,900);
Beep(392,150);
Beep(349,150);
Beep(329,150);
Beep(261,150);
Beep(246,150);
Beep(261,150);
Beep(261,900);
Beep(30000,1350);
Beep(587,675);
Beep(523,250);
Beep(392,675);
Beep(349,250);
Beep(329,675);
Beep(261,250);
Beep(369,250);
Beep(349,675);
Beep(369,250);
Beep(349,675);
Beep(369,250);
Beep(349,675);
Beep(369,250);
Beep(349,675);
Beep(329,150);
Beep(261,150);
Beep(246,150);
Beep(261,450);
Beep(261,450);
Beep(261,900);
Beep(30000,900);
Beep(329,150);
Beep(261,150);
Beep(246,150);
Beep(261,450);
Beep(261,450);
Beep(261,900);
Beep(30000,900);
Beep(329,150);
Beep(261,150);
Beep(246,150);
Beep(261,450);
Beep(261,450);
Beep(261,900);	
     Sleep(6000);
     return 0;
     }		
		
		if(mappes=='j' && players==288106214){
        system ("cls");		
cout<<"llllllllllllllllllttttttttttttttttttttttttttttttttlOz11?????+++;;;+++???\n";
cout<<"tttttttttttttttrrrrrrrrrrrrrrrrtrrrrtrrtrrtrtOv1=???++;;;++?????????11zz\n";
cout<<"vvrrrrrrrrrrrrrvrrvrvrvvvvvvrrrvrrrrrrrrrOOl===??++??????1z&&uOwuuuuuuuu\n";
cout<<"zzuzzuzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzvrrttlzzll==zzuzwuuuuuuuuuuuuuZZZZZ\n";
cout<<"ttttOOOOOwwwwzzuuuuuuuuuuuuuuuuzzwwrtttOOrrtwwwZuuZZuZZZZZZZZyZyyyyyyWWW\n";
cout<<"tttltlltlttttttttttttrrrrwwZwrrrrtrOrrrrwXZZZZZZZV7XZZZyyyyyVVVffffpfppp\n";
cout<<"tttttttttttttttrtrtrrrrrrrrOwvvvwwwXZZXUUZZZZZZXXXXXXWyyyyyyyVVVyVyyyyyy\n";
cout<<"wOOrtttttttwwwwXQQAwrrrrrrrvzuXXUVOOOOvuuZZXXkWMMMMHHMHmkzuZZyyyVVVVfVff\n";
cout<<"VVVVVVVVfWWWWUUUXXWHHkwrrrvvvzzuZI+:+?zwuZXWHM9=???7MMMM@HXuZyyyVVVffpfp\n";
cout<<"yVVyyyVWWHHV!`....`?WHHkrrrvvvzzAAag++&ewXWHK:`.```.`WHMMHHkVVVffffWWWWW\n";
cout<<"VyVVyVWHHH0!..````..?WbHHwrrvvzzXZZuZZyyWkHWK!.````` ,WM@MMgkzXZgWHyyVVV\n";
cout<<"VVyVVWHMMHC.``.   ...WWpHHvrrvzzXZZZZZyfbkWHK!.` ` ...JHH@MHMkXZWWkyyVyy\n";
cout<<"VyVVWH@MMK!.jc.  ..c,JqHWHkvvvvvXyZZZyVpkqmHt?!!...```.OHHMHMHHWWWHyyVVy\n";
cout<<"VVVWHHH@Ht.. `   .``..qW0dXkwvvvdyyyyyVfbqmH;.` .`. ```.XH@HHMMMWkkkqkqq\n";
cout<<"VyWHMMMmHr.`  .  .  ` JHkXrXXvvvXffVVVfpWqHHb. ........`uHHHgMgMMkkbbHbb\n";
cout<<"VfWHMHHHWy....:^^:....JMHHkwXWwzdWWpfppbqqHMN:.`+.......XWHgHHMHHWkbbbbk\n";
cout<<"fpqqHWyWdRu..`+...!..sJ#MHHwXWHzwkbppWWWHHMHMdN,````...zkWHHHHMHHkHkqkkk\n";
cout<<"pWmHk0XyXKdHx.``...`+9J#HHHNkUXHXggHHHHHMMM#HzHMI...```jWWHWHMMNWmMHHMHM\n";
cout<<"pHHMHwWWXWXHS!!..^^^?+??TWMHMRXXHMHHqkbWHHMMMCCz1!.....zfWbWHHMM@MHHHWfV\n";
cout<<"WHMMSdNHXkdS++......^...:``?YYHHWHkuXXuVTC+?++++.?`...`vXWWH@HHHHgHpHkWk\n";
cout<<"mHMHXMNNWWJ+;;+...^.``..^...:..JHHMRzX0z?:^::::`^^.....1?yWWHHkWXHHkHWWW\n";
cout<<"HMgWHMNMH6+^:``......^.^^^^?....JHMMXV0+?+++::^^.......^?CWXWHmHWkHHKMHU\n";
cout<<"MMHWMMMH8+:^^^^^..^^^^^^...l..^.`dMHHV0z+t=+:::..^......:^??XW@HNWHHHXNX\n";
cout<<"WHWH@HMD;;+;+....^..::^^^^J++!^^.JMHHVkIzOZ++`^```...+!``.^`+zWHWHWMMHHw\n";
cout<<"WMWWHHHSs+!```++..+!`...JzuAZ+^^.zMHWWkZ1OI+^.....`i?``....+llzXWWHMHMMk\n";
cout<<"#MHpHWHZZZG,...`?!!`..wuuuuuX+.^`?WMWWkId===1..``..``.` .1lltllzXHW@MHMR\n";
cout<<"NMHHHHyyZZuuG....iJ+uzuuuuuuX:^.`+WHfWWk3==llllz+....J+lllllltllzHHM@HHH\n";
cout<<"MMMMMWZZZuuuuuuuuuuuzzzvzzzzuI^..+dNyyZfl==lllllllllllllllllllll=dHHMHH#\n";
cout<<"MMMMMWZZZZuuuzuuuzuzzuzrzuzzzk^^^+dHWpbWylllltllllllll=lllllltllldHHH#M#\n";
cout<<"HHMMMkZZZZZuuuzuuuuzzuuzuuuuX0+^^?dkWWWIUyzlltltlttltltllllttttldMHH#MMH\n";
cout<<"HMMNMNkXyZZZuuZuuZuuuuXXZZZZ0I;;+^jHWZ0!+?TXOOrrrrrttttrtttttllldMMHMHMH\n";
cout<<"XMNMH#MHkyyXWWVVVVVyyyZZZyy0zz+``.`XHy0+^^+ZlOOllltOrtttttOllltzWMNMH#HH\n";
cout<<"dMNMMMNWpWWpWWyVyyZyZXZuuX0+dk+^^^`dWfI+^?zXXzwzOOtrttOOrttttv+dHMNMMHHN\n";
cout<<"dHNMMMNWkkpyWVyZyyyyyyyyyX+jWfI+^^.dpVI:.wzvvvOrtOOOrrrrrrrrw++wWMMMMMMN\n";
cout<<"WWMMMMMkkppWWWWfyyyyyyVyynuXWfk+^^`zWWz^juuzzvrrwrrrrrrrrrrrrwrwHMMMMNMM\n";
cout<<"HMNMMMHkbWbppfffVfffVfVVVffpfVWZ+^`jXS:?dzvzvvrrwuwrrtrrrrvvrrrwXHMNMMHM\n";
cout<<"dNNMMMHqkbbpppWppfffffffpppbWyVWc^`jyI:juuuzzzzvrrzwrrrrrvvvvrrvXHMNNNMM\n";	
Sleep(1234000);
Beep(1320,500);
Beep(990,250);
Beep(1056,250);
Beep(1188,250);
Beep(1320,125);
Beep(1188,125);
Beep(1056,250);
Beep(990,250);
Beep(880,500);
Beep(880,250);
Beep(1056,250);
Beep(1320,500);
Beep(1188,250);
Beep(1056,250);
Beep(990,750);
Beep(1056,250);
Beep(1188,500);
Beep(1320,500);
Beep(1056,500);
Beep(880,500);
Beep(880,500);
Sleep(250);
Beep(1188,500);
Beep(1408,250);
Beep(1760,500);
Beep(1584,250);
Beep(1408,250);
Beep(1320,750);
Beep(1056,250);
Beep(1320,500);
Beep(1188,250);
Beep(1056,250);
Beep(990,500);
Beep(990,250);
Beep(1056,250);
Beep(1188,500);
Beep(1320,500);
Beep(1056,500);
Beep(880,500);
Beep(880,500);
Sleep(500);
Beep(1320,500);
Beep(990,250);
Beep(1056,250);
Beep(1188,250);
Beep(1320,125);
Beep(1188,125);
Beep(1056,250);
Beep(990,250);
Beep(880,500);
Beep(880,250);
Beep(1056,250);
Beep(1320,500);
Beep(1188,250);
Beep(1056,250);
Beep(990,750);
Beep(1056,250);
Beep(1188,500);
Beep(1320,500);
Beep(1056,500);
Beep(880,500);
Beep(880,500);
Sleep(250);
Beep(1188,500);
Beep(1408,250);
Beep(1760,500);
Beep(1584,250);
Beep(1408,250);
Beep(1320,750);
Beep(1056,250);
Beep(1320,500);
Beep(1188,250);
Beep(1056,250);
Beep(990,500);
Beep(990,250);
Beep(1056,250);
Beep(1188,500);
Beep(1320,500);
Beep(1056,500);
Beep(880,500);
Beep(880,500);
Sleep(500);
Beep(660,1000);
Beep(528,1000);
Beep(594,1000);
Beep(495,1000);
Beep(528,1000);
Beep(440,1000);
Beep(419,1000);
Beep(495,1000);
Beep(660,1000);
Beep(528,1000);
Beep(594,1000);
Beep(495,1000);
Beep(528,500);
Beep(660,500);
Beep(880,1000);
Beep(838,2000);
Beep(660,1000);
Beep(528,1000);
Beep(594,1000);
Beep(495,1000);
Beep(528,1000);
Beep(440,1000);
Beep(419,1000);
Beep(495,1000);
Beep(660,1000);
Beep(528,1000);
Beep(594,1000);
Beep(495,1000);
Beep(528,500);
Beep(660,500);
Beep(880,1000);
Beep(838,2000);
     Sleep(6000);
     return 0;
     }
     		
		if(mappes=='g' && players==37921846){
        system ("cls");

cout<<"=??;;;;:::^^^^^^..........`.``.```````````````````.```.``..`............\n";
cout<<"lll=z1++:^^^^^.........`.``````````````````````````````````.```.`.......\n";
cout<<"ttlll==?:^^..........``.``.`````````````````````````````.````.`..`.``...\n";
cout<<"tlll==??:..^^.......`.`.``````````````````````````````````.`.`.`...`....\n";
cout<<"lll===??`...^^^^^............        `````````````````..`...`.....``.`..\n";
cout<<"ll===??+`...^^^^.^.^^...^.....................................^^^````...\n";
cout<<"l====??;``....^..............................................^.^```.`.`.\n";
cout<<"l===???:.```.................J..J.............................^^`````...\n";
cout<<"====???``````..^.........XHmggg@@@HHHHm&..```````.`.`.........^. `````..\n";
cout<<"====??+```````.......JdWqqqqg@@@@@@H@HHHHm,....```.``````......````````.\n";
cout<<"====??:```````...```.WHqqqHHHHHHHHHMM@H@@HHQk,   ```.``.```.... `````.`.\n";
cout<<"===???:`` ` ````.. JWqH9UZrrrrvzuXXWWHH@@HH@HHm. ```````.```.. ` ``````.\n";
cout<<"===??;!  `    ```.JWW0ttlttttrrrzuuXWyWWHHHHH@Hm,``````````.`.   ` `````\n";
cout<<"==???;`  ` `  ```.X0OttttltttrrvzuuZZZyyWH@HHH@@H,``````````.`` `  `````\n";
cout<<"==???+         ` JWOttttttttrrzzuuuZZZyyyWMHHHH@@D ``````````      `````\n";
cout<<"=???;!  `        dSttttttttttwvzuuZZZZZyyWH@@HH@@r`` `` `````` `    ````\n";
cout<<"????;! `  `  `  `jkwkkkwOttrwXWWHHHkkWyyyVW@@@@@MR    ` ``````    `   ``\n";
cout<<"=??;;`     `  `  ,TVwzuuXXrwuZZZZuXUWHHWffWHH@H@@K  `  ` ````       ` ``\n";
cout<<"???;;          ?1; jwXXwXXXXXSXXWAdWkkWfpfpH@HH@H$ `  `  ` `   `     ` `\n";
cout<<"???;!`  `  `    +` zOXXXXSzXWWuX0XWHHWWfVfbH@@MHWWl    ` ``      `    `\n";
cout<<"??;;`        `    ?ltOvvzvXZywXwrzuZZyVyVfpH@HHXZZr   `  `` `      `   `\n";
cout<<"???;``   `      ` ?llttrrvuyyXuuuXUXyyyyffpHgHWZuX:       `   `       `\n";
cout<<"??;;` `   `  `    1lltrOrwXQkXWXvvzuZyyVffWHHWZZu= ` `  ``      `   `\n";
cout<<"?;;+          `   1=tttrvXUUyyZzzzuuZyyVfVVfXuXV!        `  `    ` `.z,`\n";
cout<<"?;;!   `  `       `=ltttrvvvXuZZXuuuZyVfVW0X0!`    `  `  `   ` `    .z!`\n";
cout<<"??;`  `    `  `  ` +=OXuZyyyWWWWpXuuZVVfyXwV;  `     ` ``  `        .r`\n";
cout<<"?;;`           `   .1=ltwzuuXZZZuuuuXfffVXZZ`    `      `   .       ,Z`\n";
cout<<"?;+``   `  `         1lttrzuzuuZZyZyVppppWZZ        `  `   `.     ` JI``\n";
cout<<"?;!   `       `  `    ?ltrzzuuZyyVfpWbHWWyZX+`  `  `  ``  ` `      `jI\n";
cout<<"?;!       `            `OrzuZyWWWkkbWWyyyyyWwo.  `   ` `      ` `   wl `\n";
cout<<";;!`    `  `   `   `   ` ?7UWWWWWWVyyyZZZyVVVyXo.`` ```  `       ` .w:`\n";
cout<<"?;`  `       `  ` ` `  ..+XVvzuuXZZZZZZZZyVffVVWWHHm,.`      ``` ` .Z:\n";
cout<<"?;`   `   `   ` ...+wXWkWqHrrrvzuuuuuuZZZyVffWMMHHHHHHk&.` .`  ``` ,X``\n";
cout<<"?+         ` .uwXWWWkqqqmgHkrrrvzzzzzuuZXWQHM#####HHHHMHma.,    ```Jk` `\n";
cout<<";!  `  `   .wXWpbkkqqmmg@@@HmmmmQQQQQHMM##NNNNNN#####HHHMMMHHn.  ``df``\n";
cout<<"?!      ` .wWppkqqqmgg@@@@@HHHHHHHH###NNNNNNNNN#NNNN#HHM#####HMNa..d$ ``\n";
cout<<"?`  `    .dfWkqqqmgg@@@@@@H@HHHHHHH###NNN#NNNNNNNNNNN##N###HHHHHMMMNm, `\n";
cout<<";``   `  dWpkqqmggg@@@@@@H@HHHHHHH#######NNNNNNNNNNNNNNN#####NN###HHHHh.\n";
cout<<"+       JWpkqqmgg@@@@@@@@HHHHHHHH######NNNNNNNNNMNNMNNNNNNNNNNNNN####HMN\n";
cout<<";  `   .XpWkqmgg@@@@@@H@HHHHHHHHH#####NNNNMNNNMNNMNNNNNNNNMNNNMNNNNNNN##\n";
cout<<"`    `.Xpbkqmgg@@@@H@HHH@HHHHHHH#####NNNMNNNNMNNNNNNNNMNNNMNMNNNMNNMNNNN\n";
cout<<" `    dfbkqmmg@@@@H@HH@HHHHHHH######NNNNNNNNMMNMNNNMNNNNNMNMNMNMNMMNMMNN\n";
cout<<"`     Xpbkqgg@@@@HH@HHH@HHHHHH##H##NNNMNNNMNMNMNNMNMMNMNNMMNNMMNMNMMNMMM\n";
cout<<"  `  .Xpbqqgg@@@@HH@HHHHHHHHH#HH##NNNNNMNMNNMNNNNNMNNNNNMMNMMNMNMNMMNMMN\n";
cout<<"`    jfpkqmg@@@@H@HH@HHHHHH##H###NNNNMNNMNNMMNMNMMNNMNNMMMMMNMMNMMNMMNMM\n";
Sleep(987654321);
Beep(704,750);
Beep(880,500);
Beep(940,500);
Beep(792,250);
Beep(704,500);
Beep(1056,500);
Beep(880,500);
Beep(880,250);
Beep(1056,1000);
Beep(792,250);
Beep(792,500);
Beep(880,500);
Beep(660,250);
Beep(1188,500);
Beep(940,500);
Beep(792,500);
Beep(704,250);
Beep(792,500);
Beep(792,250);
Beep(528,500);
Beep(880,500);
Beep(660,250);
Beep(1056,500);
Beep(880,750);
Beep(990,500);
Beep(1056,250);
Beep(1408,750);
Beep(1320,250);
Beep(1056,500);
Beep(1056,250);
Beep(940,250);
Beep(792,750);
Beep(940,125);
Beep(1188,250);
Beep(792,250);
Beep(880,250);
Beep(704,1000);
Beep(1320,250);
Beep(1188,250);
Beep(1188,750);
Beep(1056,250);
Beep(880,500);
Beep(880,125);
Beep(1056,250);
Beep(940,250);
Beep(704,500);
Beep(792,250);
     Sleep(6000);
     return 0;
     }		
		
		
		
	if(mappes=='a' && players==669973263){
        system ("cls");
        	
		
cout<<"                                                                            ,aa,       ,aa\n";
cout<<"                                                                           d'  'b    ,d',`b\n";
cout<<"                                                                         ,dP a  'b,ad8' 8 8\n";
cout<<"                                                                         d8' 8  ,88888a 8 8\n";
cout<<"                                                                        d8baa8ba888888888a8\n";
cout<<"                                                                     ,ad888888888YYYY888YYY,\n";
cout<<"                                                                  ,a888888888888'   '8P'  'b\n";
cout<<"                                                              ,aad8888tt,8888888b (0 `8, 0 8\n";
cout<<"                          ____________________________,,aadd888ttt8888ttt'8'I  'Yb,   `Ya  8\n";
cout<<"                    ,aad8888b888888aab8888888888b,     ,aatPt888ttt8888tt 8,`b,   'Ya,. `'aP\n";
cout<<"                ,ad88tttt8888888888888888888888888ttttt888ttd88888ttt8888tt,t 'ba,.  `'`d888\n";
cout<<"             ,d888tttttttttttttt888888888888888888888888ttt8888888888ttt888ttt,   'a,   `88'\n";
cout<<"            a888tttttttttttttttttttttttttt8888888888888ttttt88888ttt888888888tt,    `''8''\n";
cout<<"           d8P'' ,tttttttttttttttttttttttttttttttttt88tttttt888tttttttt8a'8888ttt,   ,8'\n";
cout<<"          d8tb  ' ,tt'  ''tttttttttttttttttttttttttttttttttt88ttttttttttt, Y888tt'  ,8'\n";
cout<<"          88tt)              't' ttttt' '''  '''    '' tttttYttttttttttttt, ' 8ttb,a8'\n";
cout<<"          88tt                    `'b'                  ''t'ttttttttttt't't   t taP'\n";
cout<<"          8tP                       `b                       ,tttttt' ' ' 'tt, ,8'\n";
cout<<"         (8tb  b,                    `b,                 a,  tttttt'        ''dP'\n";
cout<<"         I88tb `8,                    `b                d'   tttttt        ,aP'\n";
cout<<"         8888tb `8,                   ,P               d'    'tt 't'    ,a8P'\n";
cout<<"        I888ttt, 'b                  ,8'              ,8       'tt'  ,d'd''\n";
cout<<"       ,888tttt'  8b               ,dP''''''''''''''''Y8        tt ,d',d'\n";
cout<<"     ,d888ttttP  d'8b            ,dP'                  'b,      'ttP' d'\n";
cout<<"   ,d888ttttPY ,d' dPb,        ,dP'      Normand         'b,     t8'  8\n";
cout<<"  d888tttt8' ,d' ,d'  8      ,d''        Veilleux         `b     'P   8\n";
cout<<" d888tt88888d' ,d'  ,d'    ,d'                             8      I   8\n";
cout<<"d888888888P' ,d'  ,d'    ,d'                               8      I   8\n";
cout<<"88888888P' ,d'   (P'    d'                                 8      8   8\n";
cout<<"'8P'''8   ,8'    Ib    d'                                  Y      8   8\n";
cout<<"      8   d'     `8    8                                   `b     8   Y\n";
cout<<"      8   8       8,   8,                                   8     Y   `b\n";
cout<<"      8   Y,      `b   `b                                   Y     `b   `b\n";
cout<<"      Y,   'ba,    `b   `b,                                 `b     8,   `'ba,\n";
cout<<"       'b,   '8     `b    `''b                               `b     `Yaa,adP'\n";
cout<<"         ''''''      `baaaaaaP                                `YaaaadP''\n";
		
        Sleep(60000);
        return 0;
        }		
		
		if(mappes=='b' && players==26){
           system ("cls");
           char map[zei][spa]={    ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
								   ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
								   ' ',' ','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',' ',' ',
								   ' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',
								   ' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',
								   ' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',
								   ' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',
								   ' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',
								   ' ',' ','#',' ',' ',' ',' ',' ','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',' ',' ',' ',' ',' ','#',' ',' ',
								   ' ',' ','#',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ','#',' ',' ',
								   ' ',' ','#',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ','#',' ',' ',
								   ' ',' ','#',' ',' ',' ',' ',' ','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',' ',' ',' ',' ',' ','#',' ',' ',
								   ' ',' ','#',' ','U','P','K','F','A',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',
								   ' ',' ','#',' ','V','Q','L','G','B',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',
								   ' ',' ','#','Z','W','R','M','H','C',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',
								   ' ',' ','#',' ','X','S','N','I','D',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',
								   ' ',' ','#',' ','Y','T','O','J','E',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',
								   ' ',' ','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',' ',' ',
								   ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
								   ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '};

           for(int i=0; i<zei; i++){
			cout << endl;
			for(int j=0; j<spa; j++)
				cout <<  map[i][j];
		   }
           Sleep(60000);
              Beep(2000,300);
              Beep(1950,300);
              Beep(2000,300);
              Beep(2050,300);
              Beep(2000,300);
           return 0;
        }
        
        if(mappes=='m' && players==285631404){
               //system ("cls");
               Sleep(6000);
		       cout << "\n\nDon’t";Sleep(100);cout << " dismiss";Sleep(100);cout << " this";Sleep(100);cout << " outright";Sleep(100);cout << " as";Sleep(100);cout << " the";Sleep(100);cout << " work";Sleep(100);cout << " of";Sleep(100);cout << " a";Sleep(100);cout << " raving";Sleep(100);cout << " lunatic.";Sleep(100);cout << " There’s";Sleep(100);cout << " some";Sleep(100);
               cout << " truth";Sleep(100);cout << " in";Sleep(100);cout << " what";Sleep(100);cout << " I";Sleep(100);cout << " have";Sleep(100);cout << " to";Sleep(100);cout << " say,";Sleep(100);cout << " if";Sleep(100);cout << " you’ll";Sleep(100);cout << " just";Sleep(100);cout << " hear";Sleep(100);cout << " me";Sleep(100);cout << " out.";
               Sleep(60000);
               cout << "\n\nLook, we all wonder if time travel is possible, right? Let me just tell you something: it is. I’m from the future, actually. Now I realize you probably don’t believe that, but seriously, I’m from the future. And I must say—it’s been really great getting to see the past, watching events unfold as the world we’re familiar with comes to be. We know more now than we ever could, previously.";
               Sleep(60000);
               cout << "\n\nBehind all the fun, however, there’s a more serious aspect to what we’re doing. We aren’t supposed to influence our own lifelines. And it’s absolutely forbidden to attempt to contact past selves. Well, I’m in direct violation of that rule. That’s right, kiddo, you’re talking to yourself. Your future self, at least. I’m going to be executed for this. But you know what? I accept that. Because, through talking to you, I am preventing something worse than death. I can’t speak outright about what you need to do, as the filters would catch me. But I can send you a little message. This is the closest I can get. I’m sorry, but you have to trust me.";
               Sleep(60000);
               cout << "\n\nYou should probably read the first word of every paragraph. Now.";
               Sleep(20000);
               players=1;
        }
        
		if(mappes=='q' && players==364059807){
        system ("cls");
               Sleep(1000);
               cout << "Hallo ich bin neu hier und habe mich extra wegen dieser Frage angemeldet.\n";Sleep(1000);
               cout << "Hier gilt es grundsätzlich sehr genau zu differenzieren und nicht zu pauschalieren.\n";Sleep(1000); 
               cout << "Zunächst einmal kann man sagen, dass alle Investoren in Sachwerte, ganz gleich ob in Gold oder in Holzplantagen in der aktuellen Finanz- und Wirtschaftskrise deutlich besser wegkommen, als Aktionäre oder gar Investoren in Zertifikate und Derivate. \n";Sleep(1000);
               cout << "Das Investment in Holz gibt es schon seit über 100 Jahren und hat sich stets als solides Investment herausgestellt. \n";Sleep(1000);
               cout << "Erst seit rund 15 Jahren steht diese Anlageform auch in größerem Umfang privaten Investoren zur Verfügung. \n";Sleep(1000);
               cout << "Die Geschäftsmodelle sind dabei recht unterschiedlich und reichen von Aktien, also Anteilsscheinen bis hin zum Kauf genau nummerierter Bäume. \n";Sleep(1000);
               cout << "Die Anbieter heißten dabei unter anderem ecoforest, Life Forestry, Lignum, Forest Finance, Sharewood, etc. \n";Sleep(1000);
               cout << "Seriös sind diese Anbieter zunächst einmal alle. Problematisch für diese Branche ist, dass es einst ein schwarzes Schaf gab, das alle in Verruf gebracht hat. \n";Sleep(1000);
               cout << "Die Prime Forestry hat nämlich 2006 einen unschönen Konkurs hingelegt. \n";Sleep(1000);
               cout << "Die heutigen Anbieter sollten jedoch aus dieser Pleite gelernt haben. \n";Sleep(1000);
               cout << "Renditeversprechen sind dabei natürlich immer skeptisch zu betrachten. \n";Sleep(1000);
               cout << "Keiner kann wissen, wie der Preis in 20 Jahren liegen wird und was alles passieren wird. \n";Sleep(1000);
               cout << "Dennoch haben seriöse Anbieter einiges an Sicherheit eingebaut. \n";Sleep(1000);
               cout << "Das reicht von einer Garantie gegen Verlust der Setzlinge in den ersten Jahren bis hin zu einer juristischen Trennung von Land und Pflanzen, damit auch bei politischen Unruhen die Investition gesichert bleibt. \n";Sleep(1000);
               cout << "Sicher ist jedoch, dass Holz immer gebraucht werden wird und wer sich die Preisentwicklung der vergangenen Jahrzehnte anschaut darf mit einer Rendite zwischen 3 und im besten Fall sogar 20 Prozent rechnen. \n";Sleep(1000);
               cout << "Nur die 20 kann keiner garantieren. Wer investiert nimmt immer Risiko in Kauf, zumal eben die lange Laufzeit eine Menge von Unwägbarkeiten mit sich bringt. \n";Sleep(1000);
               cout << "Bei der Frage der Preise für Setzlinge und Bäume muss genau betrachtet werden, obe es sich um Monokultur, also ausschließlich hochwertiges Holz oder Mischwald mit entsprechendem Ausschuss handelt. \n";Sleep(1000);
               cout << "Außerdem ist genau zu hinterfragen, wo und wie die Plantagen angelegt werden. \n";Sleep(1000);
               cout << "Denn je nach geographischer und klimatischer Rahmenbedingungen können Bäume in der Laufzeit mehr oder weniger wachsen und damit Ertrag erwirtschaften. \n";Sleep(1000);
               cout << "Bei einem Urteil über die Frage ob ein Investment zu teuer oder nicht ist, sollte man daher sehr genau ins Detail gehen. \n";Sleep(1000);
               cout << "Der zuvor genannte Vergleich der Forest Finance hinkt daher und vergleicht Äpfel mit Birnen. \n";Sleep(1000);
               cout << "Wer in Holz investiert tut auf jeden Fall etwas gutes für die Umwelt, wenn er nachweisen kann, dass er die entsprechenden Standards berücksichtigt. \n";Sleep(1000);
               cout << "Diese werden kontrolliert vom FSC. Wichtig ist also, dass der Anbieter über ein FSC-Siegel verfügt. \n";Sleep(1000);
               cout << "Dieses Siegel mit Prüfnummer läßt sich auch im Internet unter www.fsc-info.org nachprüfen. \n";Sleep(1000);
               cout << "Vorsicht ist also vor all denen geboten, die eine Zertifizierung behaupten, diese aber nur betrügerisch suggeriert wird. \n";Sleep(1000);
               cout << "Unsere Recherchen haben jedenfalls ergeben, dass die Life Forestry, ebenso wie fast alle anderen der großen Player zurecht zertifiziert sind. \n";Sleep(1000);
               cout << "Lediglich die Forest Finance von Harry Assenmacher konnte einer Überprüfung nicht standhalten. \n";Sleep(1000);
               cout << "das Unternehmen wirbt mit Zertifizierung, nennt aber die Prüfnummer SGS FM/COC-003498 nur auf schriftliche Nachfrage. \n";Sleep(1000);
               cout << "Eine Überprüfung und Nachfrage haben jedoch ergeben, dass diese Nummer frei erfunden ist. \n";Sleep(5000);
               cout << "Der FSC hat bestätigt, dass Forest Finance nicht zertifiziert ist.\n";Sleep(1000);
               for(int a=2000; a>100; a=a-5)
                       Beep(a,100);
               return 0;      
        }
        
		if(mappes=='c' && players==199668168){
            system ("cls");
            Sleep(2000);
            for(int i=0; i<20; i++){
                if(i%2==0)
                    Beep(423,100); // 523 hertz (C5) for 500 milliseconds     
                else
                    Beep(123,100);
            }
            for(int j=0; j<20; j++){
                if(j%2==0)
                    Beep(523,100); // 523 hertz (C5) for 500 milliseconds     
                else
                    Beep(223,100);
            }
            for(int k=0; k<20; k++){
                if(k%2==0)
                    Beep(623,100); // 523 hertz (C5) for 500 milliseconds     
                else
                    Beep(323,100);
            }
            Sleep(2000);
			system ("cls");
			Sleep(8000);
            return 0;
         }
         
         if(mappes=='r' && players==140099488){
            system ("cls");
            Sleep(2000);
            cout << "Hacking process initiated!\n";
            Sleep(2000);
            for(int i = 0; i<100; i++){
                    cout << endl << i << "% finished!\n";
                    Sleep(500);
                    for(int j = 0; j<999; j++){
                            if (j%3 == 0 && i<30)
                               cout << "1010101010101010";
                            if (j%3 != 0 && i<30)
                               cout << "111001111110111101111001100001010100010100010111000011111000111110101000101000101110000000010101110000011000010101000101000101111110000010101110101";
                            if (j%3 == 0 && i>30)
                               cout << "1010101010101010";   
                            else
                               cout << "0011000010101000101000101110000000010101110101";
                    }
            }
            cout << endl <<"100% finished!\n";
            Sleep(2000);
            cout << endl <<"Computer Status: HACKED\n";
            Sleep(2000);
            cout << "\nDONE!";
            
            Sleep(1526);
            Beep(2500,5483);  
            int x = 0;      
            int z = 7/x;
            return 0;
         }
         
         if(mappes=='g' && players==1993){
            system ("cls");
            Sleep(2000);


cout << "                                   ..+MNNJ,.\n";
cout << "                               ..JJMMMMMMMMMNNQg,\n";
cout << "                             .dMMMMMMMMMMMMMMMMMMN,\n";
cout << "                            .MMMMMMMMMHbbbbWpbpMMMMN,\n";
cout << "                          .MMMMMMMHMMHbbbbpbbpbWWMMMMh.\n";
cout << "                        .MMMMMMMHbbHppbppbpbbpR  ?MMMMN.\n";
cout << "               `   `  .JMMMMMMHpWQQNQkpbbpbppbk,  .WMMMN    `    `\n";
cout << "      `    `          dMMMMMHWNMMMMMMMMpbbbbpWNmJ.  7MNMb\n";
cout << "                     .MMMMMNNMMHNMMNNHkbpppppWHMMMN, .MHb!          `\n";
cout << "                    .MMMMMMMNpMMMMMMMMMNNHQkHHMNHHfT& `NWr    `  `\n";
cout << "    `   `  `  `  `  dMMMMMMHMWHpWHHHHMMMpppHNMMMMMR. HdN1!\n";
cout << "                   .MMMMM#bbpbpWHHHHHMHbpP?4HbbbHk7` HdMj`\n";
cout << "                   JMMMMMNppbbpppbpppbWppP   XHHHD```7dNd`    `    `\n";
cout << "   `  `   `    `    gWNWMppppbpbpbppbMMNfJMH,Wpp7^    JNJ!\n";
cout << "                  JMMbpMHppbpbppbbppbppppf7pdppp;     jbbm,          `\n";
cout << "                  dMMHbMNppbpbpppbpbpbpppR .WppW      XbpWMD.  `  `\n";
cout << "           `        dNbMMpbppbpbpWQkHHHWbpa..Wf=     ,WdK0`b\n";
cout << "      `        `   .MMMNMHpbpbppbbppppppp%,4mpR     .MHW?% '\n";
cout << "                   JMMMMMNkbpbppbbppbpbppW, ?Wb:   .dW=,\n";
cout << "                  .MMMMMMMMNbbpppbpbpbpbf7^   ?    &N.`\n";
cout << "                 .MMMMMMMNWMMNkbpbppbppbW.       .dMMt        `   `\n";
cout << "      `    `  ..MMMMMMMMMpppMMMNNWbppbppR       .MMMMr\n";
cout << "     .....JgMMMMMMMMMMMMNppbppWMMMNkbpppp|     .MMMMME\n";
cout << "..gMMMMMMMMMMMMMMMMMMMMMNbpppbbbpbppbpbW^     .MMM#!?       `\n";
cout << "MMMMMMMMMMMMMMMMMMMMMMMMMNbpbbpppbpppbpP      dMMMF      `       `\n";
cout << "MMMMMMMMMMMMMMMMMMMMMMMMMMWppbppbbpbppbP     JMMMMMMN&,.\n";
cout << "MMMMMMMMMMMMMMMMMMMMMMMMMNNpbbpppbppbpp     .MMMMMMMMMMMNJ,   `\n";
cout << "MMMMMMMMMMMMMMMMMMMMMMMMMMNppbpbpbppbpW`    MMMMMMMMMMMMMMMMa.\n";
cout << "MMMMMMMMMMMMMMMMMMMMMMMMMMMNbbppbbpbpp    .dMMMMMMMMMMMMMMMMMMN,\n";
cout << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMNkbppbppbW ...MMMMMMMMMMMMMMMMMMMMMMb\n";
cout << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNppWWNNNNNMMMMMMMMMMMMMMMMMMMMMMMMMb\n";
cout << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM,\n";
cout << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMr\n";
cout << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMN\n";
cout << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMN.\n";
cout << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMr           \n"; 

            Sleep(6000);
            system ("cls");
cout << "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNM\n";
cout << "MNNMNNMNNMNNMNNMNNMNNNNMMNMNNMNNMNNMNNMNMNNMNNMNNMNNMNNMNMNNMNNMNNMNNMNN\n";
cout << "MNNMNNMNNMNNMNNMMNMMMMNMMNNMNMNMNNMNNMNNNMNNMNNMNMMMMNMNNNMNNMNNMNNMNNMM\n";
cout << "NNMNNMNNNNMNNNNNNM@^`  `JWMNNNMH''''''''WMMNNMM'`  ` `WMNNMNMNNNNNNMNNNN\n";
cout << "MNNNMNNNMNNMNNMNNNNMm+    ,'! `     `    `  ?=    `.dNNNMNNNNNMNMNMNNMNM\n";
cout << "MNMNMNMMNMNMNNMNNNNNMRi  `      `           `     .MNNNNNNMNNMNNNMNNNNNM\n";
cout << "BYC+::+?7TWMMMNNMMNNMMml   ` `   ` ` `` ` `    ` jdNMNMNNMNMNNMNNMNNMNNM\n";
cout << "I::::::::::::?TMNNNMNN#:    `  `    `    `  `   `.MMNNNMNNNNMNNMNNNMNNMN\n";
cout << "I:++++.+::::::::?HMNNMK`  `   `  `           `    MNNNNNMNNNNMNNMNNNNMNM\n";
cout << "M@@H@@H@@Ha+::::::?MMNK.   ` .. `  ` ` ` ` .`  ` .MNMNMNNMNMNNNNNMNNMNNM\n";
cout << "MNNNMNNMNNMMm+:::::+WN#;`..?`J,   `   `  `.r?..  .MNNNNMNNNNMNMNNNMNNNNN\n";
cout << "MNNNNNNMNNNNNNN+:::::dNw.!`n.MM; `       .Mh.x?:`JNNMNNNMNNMNNNMNNNMNNMM\n";
cout << "MNMNMNNNMNNMNNNMe:::::Wk!! W4MD5   ` ` `.PjMB@ `.MNNNMNNNMNNNMNNMNNNMNNM\n";
cout << "NNNMNMNNNMNMNNMNNR::::?S:`` `     `   ` `  `.!  .MNMNNMNNNMNNNMNNMMNMNNM\n";
cout << "MNNNNMNNMNNNMNNMNNP::::zl       ` .J+.      `   JNMNNNMNNMNNMNNNNNNNNNMN\n";
cout << "MNNMNNNMNNNNNMNNNM#`...:Xm..` `      .`  `   `.JMMNMMMNNMNNNNMNMNNMNNMNM\n";
cout << "NNMNNMNNNMNMNNNMNMMl.`::?MMNm,  ``.... `  ..&MMMWMMHQM#MMNMNNNMNNMNNMNNM\n";
cout << "NNNNMNNNNNMNNMNNMNNr:+???TMM#vwG..    ..gMMMNNMMMNmMNNMMNNNMNNNNMNNNNNNM\n";
cout << "MNNMNNMNMNNNNNNNNNNI!`      ` 1r0rrvvrrUXUY7!     TMMNMNNMNNMNMNNMNMNNMN\n";
cout << "MNNNNMNNNMNNMNNMNMMywvo.        `7zwrwZ7^`   ` ` `..MNNMNNMNNMNNNNMNNMNN\n";
cout << "NNMNNMNMNNMNMNNNMNDJVvXXn.``        ?`   `  `  ..wUWMNNNMNNNNNMNMNNNMNNM\n";
cout << "MNNNNNMMMMMMMNNNN#:+ ?rrw%  `  `    .     `   ``wr! ,MNMNNMNMNNNNMNNNNNM\n";
cout << "MNNMNNNMMNNMNNNMND:? `.rd: ` `````` ,`  ``` `` .w2  JNNNNMNNNMNNMNNMNMNN\n";        
         Sleep(6000);   
         system ("cls");
         
         
cout << "                           ..JQkWHHHHmaJ,\n";
cout << "                        `.dWHgHHHHHHMMMMHH&..   `\n";
cout << "          `    `  `  ....dgHHHyUWbHWkWHHmmHmH+.+;\n";
cout << "  `  `  `  `  `  ` .uXWHgH@HHkXwXfWWWHHHHHHHgggHkke. ` `  `  `  `  `  `\n";
cout << "               ` .dWH@HH@MM@HWUXWWg@@@@@@@@@H@HHHg@H&.`\n";
cout << "   `  `   `    `.dHH@HMM@@M@HWOwXWqgMM@@@MHM@H@@@@HHHgH, `  `  `  `  `\n";
cout << "            ` ..WHH@HHHHMHHHHk0vzUWWHHHHH@HH@HHHH@HWXH@gK!\n";
cout << "   `     `  `.HHHHH@@@MM@M@HHHkwzzwWHHH@H@@@@@@MHHHZOOW@Ho\n";
cout << "  `   `    `.WMMHZWWHHgHWHHWHHWXkzzwWHHHHHHHHqHHWUI==zwWkWo,.   `  `  `\n";
cout << "            J@@HXuuXZZVUUUVOzzOOOz11zCz7CC7CzzI11==?=zOXHHwvwy,,\n";
cout << "    `  ` `  WHMkuzzurtl=++;::^:!:^::.^:^:::.:;;;;????zwWHHkww0ugH,`\n";
cout << "  `        ,UHMHWXzvOOl?+;;::::^`^^:^^`^^`:::+;+;??1=zwWgHHkWXX@gHo `\n";
cout << "     ` .JWD+dW@HWXXrrtl??;::::^^^^^^^^^.^^`::;+???1==zwWH@MHs`H@gqH, `\n";
cout << "  `  .WgHbZ1XHHMHZXwwwwzz+++.?+...^^......?J+&uywwwzllzXH@@@g;OHgHbk.\n";
cout << "    JHHkHm9?XHHMHXXXHHWUWHHpkwwzz+.`;?zzXWHHHUZVOVUSOl=wHH@MSzzXkqHb|`\n";
cout << " ` JWHkqgH!JMHHNXuXHyXWWHHHWHkkwO+.^++zwXWHMMMNkkO?OIz?zX@M0lv1XWkWWb\n";
cout << "  ,dHbWHHf dMHHHzXWfWHHMN@MMNKHWWI+.?zwXXHMMMMMMHSwzl??zXMH$++`dWbfWS.\n";
cout << "  dkHkWgHr wWM@HuvvXWHHHMMMMMMWXwI+;+=1OUkWbWXXXVI???1?lzWHz`+.dWpVWW!\n";
cout << " .XkHbHHk% zUH@HzwtrOUUWHkWpHW0OwI+;+1z??7ZUVUOv+!:++??zlOOz.`+zWWffy;\n";
cout << " JWWbHHmb% `zXHSXvrO1+?+1zz1+++OrO+`++??+:::::^^:::;++?=ltO,`.+zWpWWSl\n";
cout << " dWkpWHmbr` .wXXuzwzz;::::^..JOO=z!``+;+??+..:^^^.::+??llOtI++:1WWVfZI`\n";
cout << ".dWWWWqkqR`  zwZZuOv;;;+.?++zXwAwz,..?+&&zI+1z++++++++=zttrO,z+1XWWfyI\n";
cout << ".dWWWWqWqR.  ZXyZuwlzzzzzwO1zwUWWWAsAX0tO1+::+vwwOOtzO=lltrrz.??XyVVV0.\n";
cout << ".dWHfXHWHH,  OXZZXuwwwuXXXOOOrrOwOZttz=1===zzzOwwXwwOtI=ztrtz:``XWWVy0!\n";
cout << ".dWfWWpkqHl  jwZZXOXWWWXHHkkXwwwwOOOOtOOztrwwwwQQkKzOtl=ltrtl !`XfWWVk:\n";
cout << "JXpfWWWHkHf.`.CXZXIzWyVuWHgHOOv1IllOOOtOOOOOvwXHM8XXXZ??zOtt: `.XWWWyX;\n";
cout << "dppfSWWHWkS+   JZXO=XXXSwWWD.d!++++z+++++++O!zHHSwXWWZ=11ztI`  `XfWfXX;\n";
cout << "wWfWZyXfWbR.`   XXOzdXXWkXWHH?Guwvvrl..Jo.J:QdH0wXHMHZ=1ztlv   .XWyWXXl\n";
cout << "dWfVyXXyWWS:`   ,ywOzXWWHWXyWkzO+J;?z?+:+I+jU0zwXWHHSOzlllO:   JXWWWXXl\n";
cout << "jWWVXXXWfWkc     jXXOrXHHWWyWWZZuXwwwwwwwzzwzuuZWHHSOzOzOlz    JXWkWfSI\n";
cout << "+dWXWkyXWWSI.    `jXuvwWHNWZXuuuuwwtttrrrvwwwvwXWKSOtOOOlIz    ?VWpyWkI`\n";
cout << "`JVWWWZXybWv.  `   jyXXZWHWWkXwrrwXzzrOtOOwwuwkHHSOOttttllz    +ybpWfWI\n";
cout << ";JyVkWZwXHZO.`     .ZyZZyUHHHkWXwrwwwwOOwwXXXWWHSwtttttlz==.   +XWHWWWZ.\n";
cout << " `XfqWXuXWWXc       XyyZZyWWHHHWkvvvvwwwXXXHWWWUXOrOtl====?.   +XWbWWVZ.\n";
cout << " `XWkpWuXKWZk+      XyyVyZyXWWWHWXWWWWXUUUUUZwrrrwrOllz=1??i   ?XWHWXyZ!\n";
cout << "  zyWpWXWWKkWI.     XXXyyyyyZZXuzzvvvvrrtwrrwvvvrOlzl==????zzi.`XpWWfWZ;\n";
cout << " .`XbHWXyWWSUI`  ..JuzvvXUXZyyZZXXXXzXwzwvvvvrOlll===??????zI?+vOWXWHWI`\n";
 
         Sleep(2000);   
         system ("cls");
         
          
cout << "ll===ll=l=zl0uXArtrtOrtrtrrtrtrrtrrrtrtrrtrtrrtrtrwttzrrwr2\n";
cout << "rtOrXXwrrtrrrZrZrtrwrtrtOrtrtrrtrtrrtrrvzv1zwwywOrrwrrt2^\n";
cout << "rtrSkwZUrttOOttrtrwrrrrtU0ttrrtttwwZv?!    ,777OOtt\?OZ      `\n";
cout << "ttOrtZSAV4wrttrttrtttttwrrrrrwrrrwv` ! `         `OZ..^\n";
cout << "rrttrrOS^?`=7UrrwrtrsAAAwAAAAwtrtv `             .w?^\n";
cout << "rtrtttwO;!?+jJtwrtrrrrwAAwSrrwttC .    `.     `Owwi.\n";
cout << "OXrrtrrrtOttttOOtttttrrrrrrtrOZ! .    JOwb     dOZ`\n";
cout << "rrrtrOOtttttrrrttrrtrrtttttrt^        Jr'    `\n";
cout << "ttOrrwwrrtrtrOtrttrtrrtrtO7!   .   ..wZ......\n";
cout << "trdW999UrrrrwttrtrttrrttO      .   ,rtO `````...  . .....  . . ...\n";
cout << "rdWHWUHUSttwrrrrrrrwrtrtZ!!?!: `   1rtw.  .JZr7   `!`!`!!!!!````!?`\n";
cout << "twSXS8HHwrOOtOwrwytrrtrr3   ..`...+.wrrrwZ777`\n";
cout << "rrttrtrtrtOttUf`zzrrtttrr+.JrO    .QwAyOI..`:``!!?!?\n";
cout << "rttrtttrtrrtrdl .zwOtrttrttwOO,   JrksA71r ,......\n";
cout << "trttrtrtwvZ`?X   OdUUUUUSZC`?OO  .ZtrrO.``` .`?!``           `\n";
cout << "yOrtrtdWWc1 zZ0i `OtdHkXkrw.dnJXWUU9U8O!.   `                      .\n";
cout << "wVtrttrX....rX``  6ttUXXrtZ ?77TZ7! .!  `` ...... ` `          ` `?J\n";
cout << "ttrrrrwwdXXwSJ.....`Awdx.`      .         ` `````.`  ..           .=\n";
cout << "rttrtOOrrrrwo.....wZ7Y!``.    .   ..:++`  .   ```      `````.\n";
cout << "trttrrttrttrtwXWW0Y!`!'. ``!`!`!``..      . ` ` ......      .\n";
cout << "trttwrttrtt6..?` .?``  `......!?!:`?z..` ..               .+:\n";
cout << "rtrrOttrtrrtrn.j....       `   ``  ! ..```?????:.........zr2    `\n";
cout << "tttrtrtdSkkXSr;   ....... ,:.J..,J.!?!?^?       `.`OZx=?7ZX..\n";
cout << "rtwrOvOdUUSWRO!   ```` ` ```   +..`+.....       ..jrttriZtrrtrZOuzl1\n";
cout << "OrOr:    ?71wr         ` ....JkhS?` ```   !?!?!!!,rdWWWWZ08UttrrrZ??\n";
cout << "ZUrZ ``. .    `+J!ud&.JJwrwx``?ykkJo` ,   .i.....ZrrtttZI7=1OOv7!\n";
cout << "wkwl . ``!!?`    .JUUVUUU7SO.  .OttU0o?^??`    . 7wwOZ'\n";
cout << "wZ.    .    ` .zrOSWZXWddUSVVV..:!CWUUX``..`.....Zv7`   .\n";
cout << "OO! .  ?!!`  jrrwZZZrrrrI OrrrrrZo!O+Ow,?`?HHWWS,       .?!?!     .J\n";
cout << "ttOZG      ..mAwAsyAAAAwnJmAAOtttrl.rtrwX:!TV0tw0.         ..,.+lz==\n";
cout << "trttwGwOwOzrrrrrwrOrOOrOrrOOOO?77z+AAAAAZI `w0SOrw... J&..,rrI====z=\n";
cout << "rtrw3=vOVwwOVI=====vO=IOOzvXttrO+zrtdQAytrZ+Zttttrw0wrtrtwZ0twl===l=\n";

         Sleep(10000);   
         system ("cls");

cout << ".jA+.\n";
cout << "jWMWx..\n";
cout << "`zUWWNy,\n";
cout << "`+wXUUXw&+.\n";
cout << "`+Oz+?ZHMS+..\n";
cout << "`+tz+?+?zXWmy.\n";
cout << "`+Oz!``^?zXWXw&..\n";
cout << "`+Zz` .^:::+ZHMS+..\n";
cout << "`+Z+``.^:::??1CXXmo.\n";
cout << "`+Z+``````^:::?zUHXw+..\n";
cout << "`+Z+````  ^:::::!+dHMk+.\n";
cout << "`+Z+`` ``.^:^::::?+zOXXmo.\n";
cout << "`+Z+``` ` ```^:^::::?OWHSo...\n";
cout << "`+Z+` ````` ``::^::^:!!+wWNk+\n";
cout << "`+Z+`` `  ``.^:::^:::::?+OVXXmx.\n";
cout << "`+Z+`` ``` ..+uuuuuuuuuuuudXMNHs...\n";
cout << "`+Z+```` ..JdWMMMMMNNMMHHHM#MM#MNZ!\n";
cout << "`+Z+```..+dkXV7TUUHMMM0777777777C!`\n";
cout << "`+Oz...+uwWB0z..^?OWMSo..\n";
cout << "`+Oz+JdWNSv`!1z+` `?1XWNy,\n";
cout << "`+wwXkXVC!` `+Z+``.^?dHNk:\n";
cout << ".jXWHM6!    `?z+...^?OWMSc..\n";
cout << "jXNSv``       ``+z+` `?1XWmy,\n";
cout << "`?6!`          `+Z+``.^?dHNk:\n";
cout << "               `?z+...^?wHMS+..\n";
cout << "                 ``+++. ??zXXmo.\n";
cout << "                  `+Oz...:?dHNk:\n";
cout << "                  `+I1+?+++dHNk:\n";
cout << "                   ``jXHHHHMMNk:\n";
cout << "                     ?OUUUUUU9I`\n";

         Sleep(2000);   
         system ("cls");

cout << "                 ..Jwjg+gggr`        `\n";
cout << "   ..+J....dMK.pJ'Q, .MMHB^     ..J.. ...,??????++..+.......\n";
cout << " ,#'TBMMMMMMM'` Je;  ,=      . MM`H1??????????????????????`!`\n";
cout << "     ,MMMMMMMMhMMHB:       `=4.dHM$+???;?;??;?;;?;??;??+.. `   `  `  `\n";
cout << "    .MMMMMMMQj#Y7!          JJ'TV1Mt.`+.!;?+++????;???++! ;\n";
cout << "  ` JMMMMMMMMD        `     z1++` !`?+++.?;?+++???????? !,'\n";
cout << "     `1?Y!  %             .?+???????+??+.?!?;??;+;;????`\n";
cout << "       ?:.!   `           +?;???;?+??i`?;!   `??` ?;:`\n";
cout << "  `       ......          `;?++?;?????+..     ?    .?`             `\n";
cout << "    `       ,?+?;?.    `       .+;??;;?!           .` .;              `\n";
cout << "       `    ????????+.          ??+;+?`             `.. `  `+.\n";
cout << "  `   `      1;?;????   `  ` `  ,?;+;+! . `  `   `      ..g;.,      ` `\n";
cout << "              .?;????           .++ux  ?             `.gMMMMMN.  !\n";
cout << "    `    `    .??;?       `  `   GM#^             `   MMMMMMMM'\n";
cout << "      `    `  .++!    `                                   ,'=    .   `\n";
cout << "               ?:        `                                    .=\n";
cout << "  `  `   `       ` `     `                  `  `  `\n";
  
         Sleep(10000);   
         system ("cls");  
  
cout << "                                 .......\n";
cout << "                       .......JZCzz????``?i.\n";
cout << "                    .?`.?!+dWkx+`^^........``.   `  `  `    `    `\n";
cout << "  `  `  `  `  `  .Jf.++::?WWUC```...` .`.......`.        `     `    `\n";
cout << "                 j9Zv!^^J+zI!`..     `  ```````. `                    `\n";
cout << "                 Zv++:.J1z+`. ```          ```````.         `\n";
cout << "     `   `   `  `0+;+.J1v:`..```            ````````     `       `   `\n";
cout << "               ,j+;112+v;!^...```              ``````.       `\n";
cout << "              .?z+11Z+dI++^..... ``           ` ```````\n";
cout << "   `  `  `   `+;+z!?+zHbffVk&,.... `    `    `   ```````    `   `  `  `\n";
cout << "              ?jR+..jdkbffffW$^.... ` `       ``   `````\n";
cout << "              ?;4wxzddHkWU0C!^^^^^^.. `  `  `` ````` ```.\n";
cout << "              z?;?ds?XUVI+;;:::..^.^^^.   .J&swwA&&J.` ...   `\n";
cout << "              z1+jHNUks&z1&&+;;;++.?++++jWyI++++1?zdN`J+!            `\n";
cout << "              j??zOwwZYTYWHHHkXadMMMHkH9UWyr^^++z?1dK`!`\n";
cout << "              .z11z11+?:::;+H@H@HHHHHW:`.uJ$+,+z+?`X$  .\n";
cout << "               j1C;+:?i..++=zTHMHHMkHW++?J1$!```  .R!`\n";
cout << "                +v`+zI+1?++;+?+I7WHgHMHAA++JkAs&xd0! . `             `\n";
cout << "                `+`1!+;!+:::+??????1zzOOTTC!`..?++!..^.  `\n";
cout << "                 `+.`.^`.:::;???;?;;?;;;;;;:;:!``...``.  `\n";
cout << "                  .+..!``:::;;;;?;;;;;;;;::`````..`+.?zI+!\n";
cout << "                  .z.`...`;:::::;;;;;;;;::`.```````   ```            `\n";
cout << "     `   `   `     1=?+.Jz++::^::^::::::+``..`` ``  `````    `  `  `\n";
cout << "                   .z?;??1O+;.^^^^^^^^^^^...```````  .. .\n";
cout << "                   .+`````+z?++:^^^^^^^^....   .!????````\n";
cout << "                   .z.^^.^`+lz+;:^^^...^......````....:`\n";
cout << "      `    `    ` .=z!^...^`?zz++::^^^^^......`````````    `` ` ` ` ``\n";
cout << "              `  .??+!^....^`?1=z1++.:^^^^^...```````````   `  `   `  `\n";
cout << "   ` ` `` `` ` `.+:;;!^^.....^`+++1zl=z1++..^^....```` .```  ` `` `  ` `\n";
cout << "` ` ` `  `  ` `````+:!^`^.....^``++;;??+11llzz+.......````````` ````` `\n";
cout << "`` `` ````````````.^^:..........^^^^`+;;;;;+;;;;;;;;+...```````` ` ` ``\n";
cout << "`````````````.`.....+1zzzzzzzzzzzzz+++++++++??????;;;+`` ```` ``` ` ` ``\n";
cout << "`````..`.......^^`??1zOrrvzzuzzzzzzzvrrtttlll==????;+!` `` ` `   ` `\n";
         Sleep(4000);   
         system ("cls");
cout << "M------------------------------------M\n";
cout << "|MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM|\n";
cout << "|MMMMMMMHkXUHBzQkMHHHHHQwzzwHMMMMMMMM|\n";
cout << "|MMMMMSzzzXHHmgM0zzzUHHQXzzzzzZMMMMMM|\n";
cout << "|MMMMRzQgwzzzzzzQgyzzzzzzzzzuzzZMMMMM|\n";
cout << "|MMMNzwMMBzzzzzuMM@zzzzzuzzzzzzzwMMMM|\n";
cout << "|MMMM#zzzzzzuzzzzzzzuzzzzuzzuzzzzzdMM|\n";
cout << "|MMMM@OOzuzzzzzwC777777777mwzzuzzzzdM|\n";
cout << "|MMM%      +Ne            .BzzzzzzzdM|\n";
cout << "|MMMMMNWmxv'TTn..      ..dSzzuzzzzuMM|\n";
cout << "|MMMMMMKNW,......`?HMUUzzzzzzzzzzzdMM|\n";
cout << "|MMMMMMNwHHa,.^...Wd8zzzzzzzzzuzQMMMM|\n";
cout << "|MMMMMMMNmZHWkkWHH8zzzzzzzzuzwQMMMMMM|\n";
cout << "|'EBIN'MMMMMMNNNNNNNNNggggNNMMMMMMMMM|\n";
cout << "|MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM|\n";
cout << "M------------------------------------M\n";
         Sleep(2000);   
         system ("cls");
cout << "     +----------+\n";
cout << "    /|         /|\n";
cout << "   / |        / |\n";
cout << "  /  |       /  |\n";
cout << " /   |      /   |\n";
cout << "+----------+    |\n";
cout << "|    |     |    |\n";
cout << "|    |     |    |\n";
cout << "|    |     |    |\n";
cout << "|    |     |    |\n";
cout << "|    |     |    |\n";
cout << "|    +-----|----+\n";
cout << "|   /      |   /\n";
cout << "|  /       |  /\n";
cout << "| /        | /\n";
cout << "|/         |/\n";
cout << "+----------+\n";
         Sleep(2000);   
         system ("cls");
cout << "+----------------------------------------------------------------------+\n";
cout << "|                                                      .-'             |\n";
cout << "|           +-------+  __...........  +---------+.  .-'  | |'''''|     |\n";
cout << "|          |        |  |           `. |          |  |    | |     |     |\n";
cout << "|          /         | |    ...______| |         |  |     | |     |    |\n";
cout << "|         /          |  |    |         |    ``````|  |    | |     |    |\n";
cout << "|        /     +      |  |    |-.       |    |       |     ||     |    |\n";
cout << "|       /     /|      |  `.      `-._   |    |       |     | |     |   |\n";
cout << "|      |     `. |      |   `-.       `-. |    |       |    | |     |   |\n";
cout << "|      /       `.      |      `.       |  |    |      |     | |     |  |\n";
cout << "|     /                |        `-|    |  |    |      |     | |     |  |\n";
cout << "|    /      +....       |         |    |   |    |      |    |  |    |  |\n";
cout << "|   /      /    |       |   ___....     |  |     |     |     | |     | |\n";
cout << "|  |      |     |        |  |           |   |    |.... |     |  |    | |\n";
cout << "|  /      |      |       |   |          |   |        |  |     | |     ||\n";
cout << "|________/       |        |  |          |    |        | |     | |     ||\n";
cout << "|                 `````````   +---------+    +-----...| ...___|  |  .-'|\n";
cout << "|                                                                |-'   |\n";
cout << "|                                                                      |\n";
cout << "+----------------------------------------------------------------------+\n";
         Sleep(5000);
         
         cout << "So";
         Sleep(1000);   
         system ("cls"); 
         cout << "so you think you can tell ";
         Sleep(1000);   
         system ("cls"); 
         cout << "Heaven from Hell ";
         Sleep(1000);   
         system ("cls"); 
         cout << "Blue skies from pain ";
         Sleep(1000);   
         system ("cls"); 
         cout << "Can you tell a green field ";
         Sleep(1000);   
         system ("cls"); 
         cout << "From a cold steel rail? ";
         Sleep(1000);   
         system ("cls"); 
         cout << "A smile from a veil? ";
         Sleep(1000);   
         system ("cls"); 
         cout << "Do you think you can tell? ";
         Sleep(1000);   
         system ("cls"); 
         cout << "Did they get you to trade ";
         Sleep(1000);   
         system ("cls"); 
         cout << "Your heroes for ghosts? ";
         Sleep(1000);   
         system ("cls"); 
         cout << "Hot ashes for trees? ";
         Sleep(1000);   
         system ("cls"); 
         cout << "Hot air for a cool breeze? ";
         Sleep(1000);   
         system ("cls"); 
         cout << "Cold comfort for change? ";
         Sleep(1000);   
         system ("cls"); 
         cout << "And did you exchange ";
         Sleep(1000);   
         system ("cls"); 
         cout << "A walk on part in a war ";
         Sleep(1000);   
         system ("cls"); 
         cout << "For a lead role in a cage? ";
         Sleep(1700);   
         system ("cls"); 
         cout << "How I wish, how I wish you were here ";
         Sleep(1000);   
         system ("cls"); 
         cout << "We're just two lost souls ";
         Sleep(1000);   
         system ("cls"); 
         cout << "Swimming in a fish bowl ";
         Sleep(1000);   
         system ("cls"); 
         cout << "Year after year ";
         Sleep(1000);   
         system ("cls"); 
         cout << "Running over the same old ground ";
         Sleep(1000);   
         system ("cls"); 
         cout << "What have we found? ";
         Sleep(1000);   
         system ("cls"); 
         cout << "The same old fears ";
         Sleep(1000);   
         system ("cls"); 
         cout << "Wish you were here";
         Sleep(2345);         
         system ("cls");
         return 0;
}
         
         if(mappes=='n' && players==984429601){
         system ("cls");
         Sleep(11000);         
            cout << "Hey you!";
            Sleep(1000);   
            system ("cls"); 
            cout << "out there in the cold ";
            Sleep(1000);   
            system ("cls"); 
            cout << "Getting lonely, getting old, can you feel me ";
            Sleep(1000);   
            system ("cls"); 
            cout << "Hey you! Standing in the aisles ";
            Sleep(1000);   
            system ("cls"); 
            cout << "With itchy feet and fading smiles, can you feel me ";
            Sleep(1300);   
            system ("cls"); 
            cout << "Hey you! don't help them to bury the live ";
            Sleep(1000);   
            system ("cls"); 
            cout << "Don't give in without a fight. ";
            Sleep(1000);   
            system ("cls"); 
            cout << "Hey you! out there on your own ";
            Sleep(1000);   
            system ("cls"); 
            cout << "Sitting naked by the phone would you touch me ";
            Sleep(1600);   
            system ("cls"); 
            cout << "Hey you! with your ear against the wall ";
            Sleep(1600);   
            system ("cls"); 
            cout << "Waiting for someone to call out would you touch me ";
            Sleep(1600);   
            system ("cls"); 
            cout << "Hey you! would you help me to carry the stone ";
            Sleep(1600);   
            system ("cls"); 
            cout << "Open your heart, ";
            Sleep(1000);   
            system ("cls"); 
            cout << "I'm coming home ";
            Sleep(10000);   
            system ("cls"); 
            cout << "But it was only a fantasy ";
            Sleep(1000);   
            system ("cls"); 
            cout << "The wall was too high ";
            Sleep(1000);   
            system ("cls"); 
            cout << "as you can see ";
            Sleep(1000);   
            system ("cls"); 
            cout << "No matter how he tried ";
            Sleep(1000);   
            system ("cls"); 
            cout << "he could not break free ";
            Sleep(1000);   
            system ("cls"); 
            cout << "And the worms ate into his brain. ";
            Sleep(5000);   
            system ("cls"); 
            cout << "Hey you!  ";
            Sleep(1000);   
            system ("cls"); 
            cout << "out there on the road, always doing what you're told, can you help me ";
            Sleep(1800);   
            system ("cls"); 
            cout << "Hey you! out there beyond the wall ";
            Sleep(1000);   
            system ("cls"); 
            cout << "Breaking bottles in the hall, ";
            Sleep(1000);   
            system ("cls"); 
            cout << "can you help me ";
            Sleep(1000);   
            system ("cls"); 
            cout << "Hey you! don't tell me there's no hope at all ";
            Sleep(1800);   
            system ("cls"); 
            cout << "Together we stand, ";
            Sleep(5000);   
            system ("cls"); 
            cout << "divided we fall.";
            Sleep(6000);   
            system ("cls"); 
            
            return 0;
         }
         
         /////REAL MAPS
		if(mappes=='b'){
			char map[zei][spa]={   ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
								   ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
								   ' ',' ','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',' ',' ',
								   ' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',
								   ' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',
								   ' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',
								   ' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',
								   ' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',
								   ' ',' ','#',' ',' ',' ',' ',' ','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',' ',' ',' ',' ',' ','#',' ',' ',
								   ' ',' ','#',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ','#',' ',' ',
								   ' ',' ','#',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ','#',' ',' ',
								   ' ',' ','#',' ',' ',' ',' ',' ','+','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',' ',' ',' ',' ',' ','#',' ',' ',
								   ' ',' ','#',' ',' ',' ',' ','A',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',
								   ' ',' ','#',' ',' ',' ',' ','B',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',
								   ' ',' ','#',' ',' ',' ',' ','C',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',
								   ' ',' ','#',' ',' ',' ',' ','D',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',
								   ' ',' ','#',' ',' ',' ',' ',' ','+',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',
								   ' ',' ','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',' ',' ',
								   ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
								   ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '};
			system ("cls");
			game(map, players, mappes, rounds);
		}

		if(mappes=='e'){
			char map[zei][spa]={   ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
								   ' ',' ',' ','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
								   ' ','#','#','#',' ',' ',' ',' ',' ','+',' ',' ',' ',' ',' ',' ',' ','#','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
								   ' ','#',' ',' ',' ',' ',' ',' ','D',' ',' ',' ',' ',' ',' ',' ',' ',' ','#','#','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
								   ' ','#',' ',' ',' ',' ',' ',' ','C',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#','#','#','#','#','#','#','#','#','#','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
								   ' ','#',' ',' ',' ',' ',' ',' ','B',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
								   ' ','#',' ',' ',' ',' ',' ',' ','A',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
								   ' ','#',' ',' ',' ',' ',' ',' ',' ','+',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
								   ' ','#',' ',' ',' ',' ',' ','#','#','#','#','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
								   ' ','#',' ',' ',' ',' ',' ','#','#',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#','#','#',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
								   ' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#','#','#','#','#','#','#',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
								   ' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
								   ' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#','#','#',' ','#',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
								   ' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#','#','#',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
								   ' ','#','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
								   ' ',' ','#','#','#','#','#','#','#','#','#','#','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
								   ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#','#','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
								   ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
								   ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
								   ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '};
			system ("cls");
			game(map, players, mappes, rounds);
		}

		if(mappes=='l'){
			char map[zei][spa]={   '#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',
								   '#',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ','#',
								   '#',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ','#',
								   '#',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ','#',
								   '#',' ',' ',' ',' ','#',' ',' ',' ','#',' ',' ',' ','#',' ',' ',' ','#',' ',' ',' ','#',' ',' ',' ','#',' ',' ',' ',' ',' ',' ','#',' ',' ',' ','#',' ',' ',' ','#',' ',' ',' ','#',' ',' ',' ',' ','#',
								   '#',' ',' ',' ',' ','#',' ',' ',' ','#',' ',' ',' ','#',' ',' ',' ','#',' ',' ',' ','#',' ',' ',' ','#',' ',' ',' ',' ',' ',' ','#',' ',' ',' ','#',' ',' ',' ','#',' ',' ',' ','#',' ',' ',' ',' ','#',
								   '#',' ',' ',' ',' ','#',' ',' ',' ','#',' ',' ',' ','#',' ',' ',' ','#',' ',' ',' ','#',' ',' ',' ','#',' ',' ',' ',' ',' ',' ','#',' ',' ',' ','#',' ',' ',' ','#',' ',' ',' ','#',' ',' ',' ',' ','#',
								   '#',' ',' ',' ',' ','#',' ',' ',' ','#',' ',' ',' ','#',' ',' ',' ','#',' ',' ',' ','#',' ',' ',' ','#',' ',' ',' ',' ',' ',' ','#',' ',' ',' ','#',' ',' ',' ','#',' ',' ',' ','#',' ',' ',' ',' ','#',
								   '#',' ',' ',' ',' ','#',' ',' ',' ','#',' ',' ',' ','#',' ',' ',' ','#',' ',' ',' ','#',' ',' ',' ','#',' ',' ',' ',' ',' ',' ','#',' ',' ',' ','#',' ',' ',' ','#',' ',' ',' ','#',' ',' ',' ',' ','#',
								   '#','A','B','C','D','#',' ',' ',' ','#',' ',' ',' ','#',' ',' ',' ','#',' ',' ',' ','#',' ',' ',' ','#',' ',' ','#','#',' ',' ','#',' ',' ',' ','#',' ',' ',' ','#',' ',' ',' ','#',' ',' ',' ',' ','#',
								   '#',' ',' ',' ',' ','#',' ',' ',' ','#',' ',' ',' ','#',' ',' ',' ','#',' ',' ',' ','#',' ',' ',' ','#',' ',' ','#','#',' ',' ','#',' ',' ',' ','#',' ',' ',' ','#',' ',' ',' ','#',' ',' ',' ',' ','#',
								   '#',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ','#','#',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ','#',
								   '#',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ','#','#',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ','#',
								   '#',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ','#','#',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ','#',
								   '#',' ',' ',' ',' ','+','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',' ',' ',' ',' ','#',
								   '#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',
								   '#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',
								   '#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',
								   '#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',
								   '#','#','#','#','#','+','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'};
			system ("cls");
			game(map, players, mappes, rounds);
		}

		if(mappes=='w'){
			char map[zei][spa]={   '#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',
								   '#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',
								   '#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',
								   '#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',
								   '#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',
								   '#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',
								   '#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',
								   '#',' ',' ',' ',' ',' ',' ','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',' ',' ',' ',' ',' ',' ','#',
								   '#',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ','#',
								   '#',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ','#',
								   '#',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ','#',
								   '#',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ','#',
								   '#',' ',' ',' ',' ',' ',' ','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',' ',' ',' ',' ',' ',' ','#',
								   '#',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',
								   '#',' ',' ',' ',' ',' ',' ',' ',' ','+',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',
								   '#',' ',' ',' ',' ',' ',' ',' ','A',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',
								   '#',' ',' ',' ',' ',' ',' ',' ','B',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',
								   '#',' ',' ',' ',' ',' ',' ',' ','C',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',
								   '#',' ',' ',' ',' ',' ',' ',' ','D',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',
								   '#','#','#','#','#','#','#','#','#','+','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'};
			system ("cls");
			game(map, players, mappes, rounds);
			}

		if(mappes=='m'){
			char map[zei][spa]={   '#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',
								   '#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',
								   '#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',
								   '#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',
								   '#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',
								   '#',' ','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',' ',' ',' ','#',
								   '#',' ','#',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ','#',
								   '#',' ','#',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ','#','#','#','#','#',' ','#',' ',' ',' ','#',
								   '#',' ','#',' ',' ',' ',' ',' ',' ',' ',' ','#','A','C',' ',' ',' ',' ',' ',' ',' ','#',' ',' ','#','#','#','#','#','#','#','#','#','#','#',' ',' ','#',' ','#',' ',' ',' ','#',' ','#',' ',' ',' ','#',
								   '#',' ','#',' ',' ','#','#','#','#','#',' ','#','D','B','+','#','#','#','#',' ',' ','#',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ','#',' ','#',' ','#',' ','#',' ','#',' ',' ',' ','#',
								   '#',' ','#',' ',' ','#',' ',' ',' ','#',' ','#',' ',' ',' ',' ',' ',' ','#',' ',' ','#',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ','#',' ',' ',' ','#',' ','#',' ','#',' ',' ',' ','#',
								   '#',' ','#',' ',' ','#',' ','#',' ','#',' ','#',' ',' ',' ',' ',' ',' ','#',' ',' ','#',' ',' ','#',' ','#','#','#','#','#','#','#',' ','#',' ',' ','#','#','#','#','#',' ','#',' ','#',' ',' ',' ','#',
								   '#',' ','#',' ',' ','#',' ','#',' ','#',' ','#','#','#','+',' ',' ',' ','#',' ',' ','#',' ',' ','#',' ','#',' ',' ',' ',' ',' ',' ',' ','#',' ',' ','#',' ',' ',' ',' ',' ','#',' ','#',' ',' ',' ','#',
								   '#',' ','#',' ',' ','#',' ','#',' ','#',' ',' ',' ',' ','#',' ',' ',' ','#',' ',' ','#',' ',' ','#',' ','#',' ','#','#','#','#','#','#','#',' ',' ',' ',' ',' ',' ','#','#','#',' ','#',' ',' ',' ','#',
								   '#',' ','#',' ',' ',' ',' ','#',' ','#',' ',' ',' ',' ','#',' ',' ',' ','#',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ','#',' ',' ','#','#','#','#',' ',' ',' ',' ','#',' ',' ',' ','#',
								   '#',' ','#','#','#','#','#','#',' ','#','#','#',' ',' ','#',' ',' ',' ','#',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ',' ','#','#','#','#','#',' ',' ',' ',' ',' ','#','#','#','#',' ',' ',' ','#',
								   '#',' ',' ',' ',' ',' ',' ','#',' ',' ',' ','#',' ',' ','#',' ',' ',' ','#',' ',' ','#','#','#','#','#','#','#','#','#',' ',' ','#',' ',' ',' ',' ',' ','#','#','#','#',' ',' ',' ',' ',' ',' ',' ','#',
								   '#',' ',' ',' ',' ',' ',' ','#','#','#',' ','#',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ','#','#','#','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',
								   '#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',
								   '#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'};
			system ("cls");
			game(map, players, mappes, rounds);
		}
			
		if(mappes=='h'){
			char map[zei][spa]={   '#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',
								   '#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',
								   '#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',
								   '#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',
								   '#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',
								   '#',' ',' ',' ',' ','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',' ',' ',' ',' ','#',
								   '#',' ',' ',' ',' ','#','#','+','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',' ',' ',' ',' ','#',
								   '#',' ',' ',' ',' ',' ','A',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',
								   '#',' ',' ',' ',' ',' ','B',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',
								   '#',' ',' ',' ',' ',' ','C',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',
								   '#',' ',' ',' ',' ',' ','D',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',
								   '#','#','#','#','#','#','#','+','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',
								   ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
								   ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
								   ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
								   ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
								   ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
								   ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
								   ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
								   ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
};
			system ("cls");
			game(map, players, mappes, rounds);
			}			
			
		if(mappes=='o'){
			char map[zei][spa]={   '#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','+','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',
								   '#','#','#',' ','#',' ','#','#','A',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
								   ' ',' ','#','#',' ','#','#',' ','B',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
								   ' ',' ',' ','#','#','#',' ',' ','C',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
								   ' ',' ',' ',' ','#',' ','#',' ','D',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
								   ' ',' ',' ',' ',' ','#',' ','#',' ',' ',' ',' ',' ',' ',' ','+',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
								   ' ',' ',' ',' ',' ',' ','#','#','#',' ',' ',' ',' ',' ',' ','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',
								   '#','#',' ',' ',' ',' ',' ','#',' ','#',' ',' ',' ',' ',' ',' ','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',
								   '#','#','#',' ',' ',' ',' ',' ','#',' ','#',' ',' ',' ',' ',' ',' ','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',
								   ' ','#','#','#',' ',' ',' ',' ',' ','#','#','#',' ',' ',' ',' ',' ',' ','#','#','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
								   ' ',' ','#','#','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#','#','#',' ',' ','#','#','#','#','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
								   ' ',' ',' ','#','#','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#','#','#',' ',' ','#','#','#','#','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
								   ' ',' ',' ',' ','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',' ',' ','#','#','#','#','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
								   ' ',' ',' ',' ',' ','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',' ',' ','#','#','#','#','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
								   ' ',' ',' ',' ',' ',' ','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',' ',' ','#','#','#','#','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
								   ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
								   ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
								   ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
								   ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
								   ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '};
            system ("cls");
			game(map, players, mappes, rounds);
	    	}
	    	
         if(mappes=='s' && players==26){
			char map[zei][spa]={   ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
								   ' ','L','E',' ','S','E','C','R','E','T',' ','M','A','P',' ',':','D',' ',' ',' ',' ',' ',' ',' ',' ',' ','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',' ',
								   ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',
								   ' ',' ','#','#','#','#','#',' ',' ','#','#','#','#','#','#',' ',' ',' ',' ',' ',' ',' ','#','#','#','#','#',' ','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',' ','#',' ',
								   ' ',' ','#',' ',' ',' ','#','#','#','#',' ',' ',' ',' ','#','#','#','#','#','#','#','#','#',' ',' ',' ','#',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ','#',' ',
								   ' ',' ','#',' ',' ',' ','#',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ','#',' ',' ',' ','#',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ','#',' ',
								   ' ',' ','#',' ',' ',' ','#',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ','#',' ',' ',' ','#',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ','#',' ',
								   ' ',' ','#','#',' ','#','#',' ','#','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ','#','#','#','#',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ','#',' ',
								   ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ','#',' ',
								   ' ',' ','#','#',' ',' ','#',' ','#','#',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',
								   ' ',' ','B','#',' ',' ','#',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ','#',' ',
								   ' ',' ',' ','#',' ',' ','#',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ','#',' ',
								   ' ',' ',' ','#',' ',' ','#',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ','#',' ',
								   ' ',' ',' ','#',' ',' ','#','#','#','#',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ','#',' ',
								   ' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ','#','#',' ','#','#','#',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ','#',' ',
								   ' ',' ',' ','#','#',' ','#','#','#','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ','#',' ',' ',' ','#',' ','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',' ','#',' ',
								   ' ',' ',' ','#',' ',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ','#',' ',' ',' ','#',' ','#',' ',' ',' ','#',' ',' ',' ','#',' ',' ',' ','#',' ',' ',' ','#',' ',' ',' ','#',' ',
								   ' ',' ',' ','#',' ',' ',' ',' ',' ','#',' ',' ',' ',' ','#','#','#','#','#','#','#','#','#',' ',' ',' ','#',' ',' ',' ','#',' ',' ',' ','#',' ',' ',' ','#',' ',' ',' ','#',' ',' ',' ','#',' ','#',' ',
								   ' ',' ',' ','#',' ',' ',' ',' ',' ','#','#','#','#','#','#',' ',' ',' ',' ',' ',' ',' ','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',' ',
								   ' ',' ',' ','#','#','#','#','#','#','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '};
			system ("cls");
			game(map, players, mappes, rounds);
			}
        if(mappes=='n' && players==26){
			char map[zei][spa]={   '#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',
								   '#','C','A',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',
								   '#',' ','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',' ','#',
								   '#','D','B',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',
								   '#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',
								   ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
								   ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
								   ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
								   ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
								   ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
								   ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
								   ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
								   ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
								   ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
								   ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
								   ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
								   ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
								   ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
								   ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
								   ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',};
			system ("cls");
			game(map, players, mappes, rounds);
			}  
			
			if(mappes=='g'){
                       char map[zei][spa]={' ',' ',' ',' ',' ',' ','#','#','#','#','#','#','#','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#','#','#','#','#','#','#','#','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
                                           ' ',' ',' ',' ','#','#','#',' ',' ',' ',' ',' ',' ','#','#','#','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#','#','#',' ',' ',' ',' ',' ',' ',' ','#','#','#','#','#','#','#',' ',' ',' ',' ',
                                           ' ',' ',' ','#','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#','#',' ',' ',' ',' ',' ',' ',' ',' ',' ','#','#','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#','#','#',' ',' ',
                                           ' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#','#','#','#',' ',' ',' ',' ','#','#','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#','#','#',
                                           ' ','#','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#','#',' ',' ','#','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',
                                           ' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ','#','#','#',' ',' ',' ',' ',' ',' ',' ','#','#','#','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#','#',
                                           ' ','#','#','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#','#',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ','#','#','#','#','#','#',' ',
                                           ' ',' ',' ','#','#','#','#','#','#',' ',' ',' ',' ',' ',' ',' ','#','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#','#','#','#','#',' ',' ',' ',' ','#','#','#','#','#','#',' ',' ',' ',' ',' ',' ',
                                           ' ',' ',' ',' ',' ',' ',' ',' ','#','#','#','#',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ','#','#','#','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
                                           ' ',' ',' ',' ',' ',' ','#','#','#','#','#',' ',' ',' ',' ',' ',' ',' ',' ','#','#','#','#','#','#','#','#','#',' ',' ',' ',' ',' ',' ','#','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
                                           ' ',' ',' ','#','#','#','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ','#','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
                                           ' ','#','#','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ','#','#','#','#','#','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
                                           '#','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ','#','#','#','#','#','#',' ',' ',' ',' ',' ',' ',
                                           '#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#','+','#',' ',' ',' ',' ',' ',' ',' ',' ','#','#',' ',' ',' ',' ',' ',' ',' ','#','#','#',' ',' ',' ',' ',' ',' ',' ',' ',' ','#','#','#','#','#','#',' ',
                                           '#','#',' ',' ',' ',' ',' ',' ',' ',' ',' ','A',' ',' ',' ',' ',' ',' ',' ',' ','#','#','#','#','#','#','#',' ',' ',' ',' ',' ',' ','#','#','#','#','#',' ',' ',' ',' ',' ',' ',' ',' ',' ','#','#',' ',
                                           ' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ','B',' ',' ',' ',' ',' ',' ',' ','#','#',' ',' ',' ',' ',' ',' ','#','#','#',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',
                                           ' ','#','#',' ',' ',' ',' ',' ',' ',' ',' ','C',' ',' ',' ',' ','#','#','#','#',' ',' ',' ',' ',' ',' ',' ',' ',' ','#','#','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',
                                           ' ',' ','#','#','#',' ',' ',' ',' ',' ',' ','D',' ',' ','#','#','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#','#','#','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#','#','#',
                                           ' ',' ',' ',' ','#','#','#','#',' ',' ','#','#','+','#','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#','#','#','#',' ',' ',' ',' ','#','#','#','#','#',' ',' ',' ',
                                           ' ',' ',' ',' ',' ',' ',' ','#','#','#','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#','#','#','#','#','#',' ',' ',' ',' ',' ',' ',' ',};     
            system ("cls");
			game(map, players, mappes, rounds);
            }
            
            if(mappes=='r'){
                if(rounds==19){
                   rounds=100;
                }
            char map[zei][spa]={'~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~',
                                '~',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','~',
                                '~',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','~',
                                '~',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','~',
                                '~',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','~',
                                '~',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','~',
                                '~',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','~',
                                '~',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','~',
                                '~',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','~',
                                '~',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','+','+',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','~',
                                '~',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','+','+',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','~',
                                '~',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','D',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','~',
                                '~',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','C',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','~',
                                '~',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','B',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','~',
                                '~',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','A',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','~',
                                '~',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','+','+',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','~',
                                '~',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','+','+',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','~',
                                '~',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','~',
                                '~',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','~',
                                '~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~',};
            system ("cls");
			game(map, players, mappes, rounds);                                         
            }
            
            if(mappes=='a'){
            char map[zei][spa]={'~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~',
                                '~','~','~','~',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','~','~','~','~',
                                '~','~',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','~','~',
                                '~','~',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','~','~',
                                '~',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','~',
                                '~',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','+','+','+','+',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','~',
                                '~',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','~',
                                '~',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','+','+','+',' ','+',' ','+','+',' ',' ','+','+',' ',' ','+','+',' ','+',' ','+','+','+',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','~',
                                '~',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','+','+',' ','+',' ','+',' ','+',' ','+','+','+','+',' ','+',' ','+',' ','+',' ','+','+',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','~',
                                '~',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','+','+',' ','+',' ','+',' ','+','+','+','+','+','+','+','+','+','+',' ','+',' ','+',' ','+','+',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','~',
                                '~',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','+','+',' ','+',' ','+',' ','+','+','+','+','+','+','+','+','+','+',' ','+',' ','+',' ','+','+',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','~',
                                '~',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','+','+',' ','+',' ','+',' ','+',' ','+','+','+','+',' ','+',' ','+',' ','+',' ','+','+',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','~',
                                '~',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','+','+','+',' ','+',' ','+','+',' ',' ','+','+',' ',' ','+','+',' ','+',' ','+','+','+',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','~',
                                '~',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','~',
                                '~',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','+','+','+','+',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','~',
                                '~',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','D',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','~',
                                '~','~',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','C',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','~','~',
                                '~','~',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','B',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','~','~',
                                '~','~','~','~',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','A',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','~','~','~','~',
                                '~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','+','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~',};
            system ("cls");
			game(map, players, mappes, rounds);                                         
            }
            
            if(mappes=='t'){
            char map[zei][spa]={
'~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~',
'~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~',
'~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~',
'~','~','~','~','~','~','~','~','~','~','~','~','~','~','~',' ','~',' ','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~',
'~','~','~','~','~','~','~','~','~','~','~','~',' ',' ',' ',' ',' ',' ','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~',
'~','~','~','~','~','~','~',' ','~',' ',' ',' ',' ',' ','t','t',' ','t',' ',' ',' ',' ',' ','t',' ','~','~','~','~',' ',' ',' ','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~','~',
'~','~','~','~','~','~','~','~','~','~',' ','t',' ',' ',' ',' ','t',' ',' ','t',' ',' ','t',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','~','~','~','~','~','~','~',
't',' ',' ',' ',' ',' ',' ',' ','~','~',' ',' ','t',' ','t',' ',' ',' ',' ',' ',' ','t',' ','t',' ','t',' ',' ',' ','t','t',' ','t',' ',' ','t',' ',' ','t',' ',' ',' ',' ',' ',' ',' ','~','~','~','~',
' ',' ',' ','t',' ',' ','t',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','t',' ',' ',' ',' ',' ',' ',' ','t',' ',' ',' ',' ','t',' ',' ','t',' ',' ','t',' ',' ',' ',' ',' ',' ','~','~','~','~','~','~',
' ','t',' ',' ','t',' ',' ','t',' ',' ','t',' ',' ','t',' ',' ','t',' ',' ','t',' ',' ','t',' ',' ','t',' ','t',' ','t',' ',' ',' ','t',' ',' ',' ',' ',' ','~','~','~',' ',' ',' ','~','~','~','~','~',
' ',' ','t',' ',' ','t','t',' ','t','t',' ','t','t',' ','t','t',' ','t','t',' ','t','t',' ','t','t',' ','t',' ','t',' ','t',' ','t',' ',' ','~','~','~',' ','~','~','~',' ','~','~','~','~','~','~','~',
'A',' ',' ','+','t',' ',' ','t',' ',' ',' ',' ',' ','t',' ',' ','t',' ',' ',' ',' ',' ','t',' ',' ','t',' ',' ',' ',' ',' ','t',' ',' ',' ','~','~','~','~','~','~','~',' ','~','~','~','~','~','~','~',
'B',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','t',' ',' ',' ','t',' ',' ','t',' ',' ','t',' ',' ','t',' ','t','t',' ','t',' ',' ',' ',' ','~','~','~','~','~','~','~','~',' ',' ','~','~','~','~','~','~',
'C',' ',' ',' ',' ',' ',' ','t','k','X','X','k','z','^',' ',' ','t',' ',' ','t',' ',' ',' ',' ',' ',' ',' ',' ','t',' ',' ',' ',' ',' ',' ','~','~','~','~','~','~','~','~',' ','~','~','~','~','~','~',
'D',' ',' ','+','t',' ',' ','.','X','X','X','X','X','X','v',' ',' ',' ',' ','t',' ',' ','z','t',' ','t',' ',' ',' ',' ','X','X','+','t',' ',' ',' ','~','~','~','~','~','~','~','~','~','~','~','~','~',
' ','t','t','X','X','X','X','H','X','X','X','X','X','X','X','X','X','^',' ','X','X','z','X','X','R','k','.','t','+','.','X','X','X',':','t',' ',' ',' ','~','~','~','~','~','~','~','~','~','~','~','~',
't',' ','t','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X',':','z',' ',' ','~','~','~','~','~','~','~','~','~','~','~',
' ',' ',' ','^','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X',' ',' ','~','~','~','~','~','~','~','~','~','~','~',
'+',' ','t','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','Z',' ','~','~','~','~','~','~','~','~','~','~','~','~',
'N','N','K','^','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','~','~','~','~','~','~','~','~','~','~','~','~',};
            
            system ("cls");
			game(map, players, mappes, rounds);
            }
            
            if(mappes=='x'){
            char map[zei][spa]={   ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#','#','#','#','#','#','#','#','#','#','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
								   ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
								   ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
								   ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
								   '#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',' ',' ',' ',' ',' ',' ',' ',' ',' ','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',
								   '#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',
								   '#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',
								   '#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',
								   '#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',
								   '#',' ',' ',' ',' ','#','#','#','#','#','#','#','#','#','#','#','#','#','+','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',' ',' ',' ',' ','#',
								   '#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','A',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',
								   '#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','B',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',
								   '#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','C',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',
								   '#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','D',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',
								   '#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','+','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',
								   ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
								   ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
								   ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
								   ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
								   ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#','#','#','#','#','#','#','#','#','#','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',};
                 
            system ("cls");
			game(map, players, mappes, rounds);
            }

            if(mappes=='s'){
            char map[zei][spa]={
                '=',' ',' ',' ',' ',' ',' ',' ',' ',' ','`',' ','`','`','`','`','`','`','`','`','`','`','`','`','.','!',' ','`',' ','`','.','M','M','M','M','M','M','L',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','?',
                '`',' ',' ','`',' ',' ','.','.','.',',',' ','`',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','`',' ','`',' ','H','M','M','M','M','M','M','#',' ','`','`',' ','`',' ',' ','`',' ','`','`',' ',
                '`','.','.',' ','.','.','M','M','H',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','?','M','M','M','M','M','M','M','|',' ',' ','`',' ','`',' ','`','`',' ',' ',' ',
                'N','M','M','N','M','T','T','d','H',' ',' ',' ',' ',' ',' ',' ','?','?','?',' ',' ',' ',' ',' ',' ',' ',' ','`',' ',' ','`','`','?','Y','M','M','#','E','`',' ','`',' ',' ',' ','`',' ',' ',' ',' ',' ',
                'M','M','M','N','.','.','Q','M','M',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','?',' ',' ',' ',' ',' ',' ',' ',' ','`',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
                'M','M','M','M','M','M','M','M','M',':',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','?',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','`',' ',
                'M','M','M','M','M','M','M','M','$',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','?',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
                'M','M','M','M','M','M','M','M','`','`',' ',' ',' ',' ',' ',' ',' ',' ',' ','?','?','?','?','?','?','?','?','?','?','?','?','?','?','?','?',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
                'M','M','M','M','M','M','M',':',' ',' ','`',' ',' ',' ',' ',' ',' ',' ','?',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','?',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
                'M','M','M','M','M','M','M',' ','.','.',' ',' ',' ',' ',' ',' ',' ','?',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','?',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','.',
                '!','J','T','T','T','"','^',' ','7',' ',' ',' ',' ',' ',' ',' ',' ','?',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','`',' ',' ',' ','`',' ',' ',' ',' ','?','?','?','?','?',' ',' ',' ',' ',' ',' ','`','.',
                '`',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','?',' ',' ',' ',' ',' ',' ',' ',' ','`',' ','.','&','J','.',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
                '`','.','+',' ','`','H','.','`',' ',' ',' ',' ',' ',' ',' ',' ',' ','?',' ',' ',' ',' ',' ',' ',' ',' ','.','k','H','H','M','b','.',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','`',' ',' ',' ',
                '`',' ','?','L',' ','H',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','?',' ',' ',' ',' ',' ',' ',' ',' ',' ','T','H','H','M','M','h',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','`',' ',' ',
                '`',' ',' ','J','H','M','m','.',' ',' ',' ',' ',' ',' ',' ',' ','?',' ',' ',' ',' ',' ',' ',' ',' ',' ','`',' ','Z','M','M','M','M','M','m','.',' ','`',' ',' ','.','.',' ','`',' ',' ','`',' ',' ',' ',
                '`',' ',' ',' ','J','M','M','N','.',' ',' ',' ',' ',' ',' ','?','+',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','`',' ','?','U','M','M','M','M','M','m','g','.','N','N','b','.',' ','`',' ',' ',' ',' ',' ',
                '`',' ',' ',' ',' ','q','M','M','Q','.',' ',' ',' ',' ',' ','A',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','J','=','W','M','M','M','M','N','N','D','M','m','g','J','.','.','.','.','.',
                '`',' ',' ','`',' ','.','M','M','M','H',' ',' ',' ',' ',' ','B',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','.','!','J','M','M','M','M','B','^',' ','H','N','N','N','N','N','N','N','M',
                '`',' ',' ',' ',' ',' ','`','M','M','M','N','s',' ',' ',' ','C',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','`',' ',' ','`','H','!','"','"','`',' ',' ','.','H','M','N','N','N','N','N','M',
                '`',' ','`',' ','`',' ',' ','d','M','M','M','M','b',' ',' ','D',' ',' ',' ',' ',' ',' ',' ',' ','.','.',' ',' ',' ','`',' ',' ','`',' ',' ',' ',' ',' ','`',' ',' ','`',' ',' ',' ','W','N','N','N','M',};


            system ("cls");
			game(map, players, mappes, rounds);
            }
            
            if(mappes=='p'){
            char map[zei][spa]={
                '+','-','-','-','-','-','-','-','-','+','-','-','-','-','`','-','.','-','-','-','-','-','.','`','-','-','-','-','-','`','.','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','+',
                '|',' ',' ',' ',' ',' ',' ','.','`',' ',' ',' ',' ',' ',' ',' ',' ','`','-','.','-','`',' ',' ',' ',' ',' ',' ',' ',' ',' ','`','-','.',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|',
                '|',' ',' ',' ',' ',' ','/',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','`','/',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|',
                '|',' ',' ',' ',':','`','.',' ',' ',' ',' ',' ',' ','`','-','.',' ',' ',' ',' ',' ',' ',' ','.','-','-','.','|',' ',' ',' ',' ',' ',' ','/',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|',
                '|',' ',' ',' ',' ',' ',' ','`','-','.',' ',' ',' ',' ',' ',' ','`','.','.','.','.','.','`','`','-','-','-','/',' ',' ',' ',' ',' ','.','.','_','_',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|',
                '|',' ',' ',' ','.','.','_','_',' ',' ','`','-','.',' ',' ',' ',' ',' ',' ','|',' ',' ',' ',' ',' ',' ','|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','`','-','-','.','.','_',' ',' ',' ',' ',' ',' ','|',
                '|',' ',' ','/',' ',' ',' ',' ','`','`','-','-',' ',' ',' ',' ',' ',' ',' ','+','-','-','-','-','-','-','-','-','`','.',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','`','`','+',' ',' ',' ','|',
                '|',' ','|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','/',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','`',':','-','-','.','.','_','_',' ',' ',' ',' ',' ',' ',' ',' ','`','.',' ','|',
                '|',' ','/',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','/',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','`','|',' ',' ',' ',' ',' ',' ',' ',' ','+','|',
                '|','/',' ',' ',' ',' ',' ',' ',' ','`','-','-','.','_','_',' ',' ','/',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','`','|',' ',' ',' ',' ',' ',' ','|','|',
                '+',' ',' ',' ',' ',' ',' ',' ','/','-','.',' ',' ',' ',' ','`','+',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|',' ',' ',' ',' ',' ',' ','/','|',
                '|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','`','-',':','.',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','.','+',' ',' ',' ',' ',' ','|',' ','|',
                '`','`','-','.','_',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','`','.',' ',' ',' ',' ',' ',' ','.','-','`','-','.',' ',' ',' ',' ',' ',' ',' ',' ',' ','.','-','`',' ',' ',' ',' ',' ',' ',' ','|',' ','|',
                '|',' ',' ',' ',' ','`','`','-','/',' ',' ',' ',' ',' ',' ',' ','/',' ',' ',' ',' ','.','`',' ',' ',' ',' ',' ','`','.',' ',' ',' ',' ',' ','.','`','A',' ',' ',' ',' ',' ',' ',' ',' ',' ','|',' ','|',
                '|',' ',' ',' ',' ',' ',' ','|',' ',' ',' ',' ',' ',' ',' ','/',' ',' ','/','-','`',' ',' ',' ',' ',' ',' ',' ',' ',' ','`','-','.','-','`',' ',' ',' ','B','C',' ',' ',' ',' ',' ','.','-','`',' ','|',
                '|',' ',' ',' ',' ',' ',' ','/',' ',' ',' ',' ',' ',' ','|',' ','.','`',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','D',' ','.','-','`',' ',' ',' ',' ','|',
                '|',' ',' ',' ',' ',' ','/',' ',' ',' ',' ',' ',' ',' ','+','.',' ',' ',' ',' ',' ',' ','-','-','-','-','-','.',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','_','.','-','+',' ',' ',' ',' ',' ',' ',' ','|',
                '|',' ',' ',' ',' ','`','.',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','/',' ',' ',' ',' ',' ',' ','`','.',' ',' ',' ',' ',' ','.','-','`',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|',
                '|',' ',' ',' ',' ',' ',' ','`','-','.',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','/',' ',' ',' ',' ',' ',' ',' ',' ',' ','`','-','.','-','`',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|',
                '+','-','-','-','-','-','-','-','-','-','`','.','-','-','-','-','-','-','-','+','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','+',};

system ("cls");
			game(map, players, mappes, rounds);
            }

            if(mappes=='d'){
            char map[zei][spa]={
                    '+','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','+','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','`','.','-','-','-','-','-','-','-','+',
                    '|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','A',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','`','.','X','X','X','X','X','|',
                    '|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','B',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','`','.','X','X','X','|',
                    '|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','C',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','-','-','-','-','|',' ',' ',' ',' ',' ',' ','|','X','X','X','|',
                    '|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','D',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','/','X','X','X','X','/',' ',' ',' ',' ',' ',' ','/','X','X','X','|',
                    '|',' ',' ',' ',' ',' ',' ',' ','+','-','-','-','-','-','-','-','-','-','-','-','+','-','-','-','-','-','-','-','-','-','-','-','`','X','X','X','X','/',' ',' ',' ',' ',' ',' ','|','X','X','X','X','|',
                    '|',' ',' ',' ',' ',' ',' ',' ','+','-','-','-','+','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','|',' ',' ',' ',' ',' ',' ',' ','|','X','X','X','X','|',
                    '|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','`','.','.','_','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','/',' ',' ',' ',' ',' ',' ',' ','/','X','X','X','X','|',
                    '`','.',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','/',' ',' ',' ',' ',' ',' ',' ','/','X','X','X','X','X','|',
                    '|','X','`','-','.','.','.','_','.','-','#','$',' ',' ',' ',' ',' ','$','#','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','|',' ',' ',' ',' ',' ',' ','$','#','_','_','X','X','X','|',
                    '|','X','+','-','-','-','-','-','-','+',' ',' ',' ',' ',' ',' ',' ','.','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','|',' ',' ',' ',' ',' ',' ',' ',' ',' ','|','X','X','|',
                    '.','`',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','.','`','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','`','-','.','_',' ',' ',' ',' ',' ',' ','|','X','X','|',
                    '|',' ',' ',' ',' ','.','.','.','.','_','_','_','_','.','`','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','|','-','$','#','+',' ','|','X','X','|',
                    '`','.',' ',' ',' ','+','-','-','-','`','`','-','.','|','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','+','-','-','-','-','-','+',' ',' ','|',' ','|','X','X','|',
                    '|','X','|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','/','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','+','-','-','+',' ',' ',' ',' ',' ','+','-','-','+',' ','|','X','X','|',
                    '|','X','X','`','.','-','-','|',' ',' ',' ',' ','|','X','.','`','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','+',' ',' ',' ',' ','+','-','+',' ',' ',' ',' ',' ',' ','|','X','X','|',
                    '|','X','X','X','X','X','X','|',' ',' ',' ',' ','/','`',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ','+','-','-','+','X','+','-','-','-','-','-','-','+','X','X','|',
                    '|','X','X','X','X','X','X','`','.',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ','|','X','X','X','X','X','X','X','X','X','X','X','X','X','X','|',
                    '|','X','X','X','X','X','X','X','X','|',' ',' ',' ',' ',' ',' ','.','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','+','X','X','X','X','X','X','X','X','X','X','X','X','X','X','|',
                    '+','-','-','-','-','-','-','-','-','-','`','.','-','.','-','`','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','+','-','-','-','-','-','-','-','-','-','-','-','-','-','-','+',};

            system ("cls");
			game(map, players, mappes, rounds);
            }
            
            if(mappes=='f'){
            char map[zei][spa]={
                    '8',';','+','+',';','?',';','?','?','V','1','1','O','C','?','+','7','T','T','T','T','T','T','T','T','6','z','?','?','X','d','y','W','A','O','2','X','W','W','W','W','W','W','W','W','W','W','W','W','M',
                    'I',';',';','?',';',';','?',';',';',';','?',';','?',';',';',';','?',';','?',';',';','?',';',';','?','x',' ',' ',' ','?','U','y','y','W','W','.','d','W','W','W','W','W','W','W','W','W','W','W','W','W',
                    'I',';','?',';','?','?',';','?',';','?',';','?',';','?',';','?','1','j','z','?',';','+','!','?','?','!',' ',' ',' ',' ',' ','?','U','W','W','W','I','W','W','W','W','W','W','W','W','W','W','W','W','W',
                    'I',';',';','?',';',';','?',';','?','+','+','+','+','+',';','?','j','.','?','?','+','?','+',' ',' ',' ',' ',' ',' ',' ',' ',' ','`','?','S','o',',','W','W','W','W','W','W','W','W','W','W','W','W','W',
                    'I',';','?',';',';','?',';',';','+',',',' ',' ',' ','.','?','?','j','.',' ',' ',' ','A',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','`','!','?','W','W','W','W','W','W','W','W','W','W','W','W','W',
                    'I',';','?',';','?',';','?','?','+','+','.',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','B',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','!','?','T','0','W','W','W','W','W','W','W','W','W',
                    'I',';',';','?',';','?',';',';',';',';','?','1','.','.',' ',' ',' ',' ',' ',' ',' ','C',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','.','A','W','W','W','W','W','W','W','W','W',
                    'I',';','?',';',';','?',';','?',';','?',';',';','?','1','.','.',' ',' ',' ',' ',' ','D',' ',' ',' ',' ',' ',' ',' ',' ','^','^','^','^',' ',' ',' ',' ',' ','d','W','W','W','W','W','W','W','W','W','W',
                    'I',';','?',';','?',';','?',';','?',';','?',';',';','j',';',' ',' ',' ',' ',' ',' ','^','+','^','^','^','^','^','^','^','^','^',' ',' ',' ',' ',' ',' ','.','U','0','0','0','k','W','W','W','W','W','W',
                    'I',';',';','?',';',';','?',';',';','?',';','?','?',';','+','.',' ',' ',' ',' ',' ','^','^','^','^','^','^','^','^','^','^',' ',' ',' ',' ',' ','.','o','s','A','A','s','n','o','C','O','6','V','6','d',
                    '$',';','?',';','?',';',';','?',';','?',';',';','?','?',';','j','!',' ',' ',' ',' ','^','^','^','^','^','^','^','^','^','^',' ',' ',' ',' ','.','X','W','W','W','W','W','W','y','6','Y','W','f','U','W',
                    'I',';',';','?',';','?','?',';','?',';','?',';',';','?',';','i','.',' ',' ',' ',' ','^','^','^','^','^','^','^','^','^',' ',' ',' ',' ','J','?','w','W','W','W','Y','W','f','S','k','w','k','k','k','W',
                    'I',';','?',';',';','?',';',';','?',';','?',';','?',';','+',';','!',' ',' ',' ',' ','^','^','^','^','^','^','^','^','^',' ',' ',' ',' ',' ','`','?','U','W','&','n','=','1','k','y','k','W','W','W','W',
                    'I',';','?',';','?',';',';','?',';','?',';','?',';','?','j','.',' ',' ',' ',' ',' ','^','^','^','^','^','^','^','^','^',' ',' ',' ',' ',' ',' ','J','W','W','W','W','k','k','W','W','W','W','W','W','W',
                    'H','G','&','+','+',';','?',';','?',';',';','?',';','+',';',' ',' ',' ',' ',' ','^','^','^','^','^','^','^','^','^','^','^',' ',' ',' ',' ','.','+','W','W','W','W','W','W','W','W','W','W','W','W','W',
                    'H','X','X','X','d','J','u','u','+','+',';',';','?',';',' ',' ',' ',' ',' ','^','^','^','^',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','X','W','W','W','W','W','W','W','W','W','W','W','W','W',
                    'H','X','X','X','X','X','X','X','X','X','+','Z','?','`',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','7','T','W','0','3','C','0','W','W','W','W','W','W','W',
                    'H','X','X','X','X','X','X','X','X','X','X','X','X','+','.',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','.','.',' ',' ',' ',' ',' ',' ',' ','.','+','T','C',';',';','?','?','v','U','W','W','W','W',
                    'H','X','X','X','X','X','X','X','X','X','X','X','X','X','X','+','.','.','.','.',' ',' ',' ',' ','.','Z',';','?',';','+','z','l','.','.','.','z','+','?',';','?','?',';',';',';','+','z','W','W','W','W',
                    'N','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','y','y','y','y','o','_','_','.','.','J','?',';','?',';','?','?',';',';','?',';',';','?',';',';','?','?',';','?',';','+','w','W','W','W',};

                    system ("cls");
                    game(map, players, mappes, rounds);
                    }
                    
                    if(mappes=='u'){
            char map[zei][spa]={'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',
                                '#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ','#',
                                '#',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ','#',
                                '#',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ','#',
                                '#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ','#',
                                '#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ','#',
                                '#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ','#',
                                '#','#',' ','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',' ','#','#',
                                '#',' ','C',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ','#',
                                '#','A',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ','#',
                                '#',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ','#',
                                '#','B',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ','#',
                                '#',' ','D',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ','#',
                                '#','#','#','#','#','#','#','#','#',' ','#','#',' ','#','#','#','#','#',' ','#','#','#','#',' ','#','#','#',' ','#','#','#','#','#',' ','#','#','#',' ','#','#','#','#',' ','#','#','#','#',' ','#','#',
                                '#',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ','#',
                                '#',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ','#',
                                '#',' ','#','#','#','#','#','#','#','#','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',
                                '#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ','#',
                                '#',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ','#',
                                '#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',};
            system ("cls");
			game(map, players, mappes, rounds);                                         
            }
            
            if(mappes=='q'){
			char map[zei][spa]={   '#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',
								   '#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',
								   '#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',
								   '#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',
								   '#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',
								   '#',' ',' ',' ',' ','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',' ',' ',' ',' ','#',
								   '#',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ','#',
								   '#',' ',' ',' ',' ','#','#','#','#','=','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',' ',' ',' ',' ','#',
								   '#',' ',' ',' ',' ',' ',' ',' ','A',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',
								   '#',' ',' ',' ',' ',' ',' ',' ','B',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',
								   '#',' ',' ',' ',' ',' ',' ',' ','C',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',
								   '#',' ',' ',' ',' ',' ',' ',' ','D',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',
								   '#',' ',' ',' ',' ','#','#','#','#','=','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',' ',' ',' ',' ','#',
								   '#',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ','#',
								   '#',' ',' ',' ',' ','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',' ',' ',' ',' ','#',
								   '#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',
								   '#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',
								   '#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',
								   '#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',
								   '#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'};
			system ("cls");
			game(map, players, mappes, rounds);
			}
			if(mappes=='y'){
			char map[zei][spa]={   '#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',
								   '#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ','#',
								   '#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ','#',
								   '#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ','#',
								   '#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ','#',
								   '#',' ',' ',' ',' ','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',' ',' ','#',' ',' ',' ','#',' ',' ',' ',' ','#',
								   '#','#',' ','#','#','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ','#',' ',' ',' ',' ','#',
								   '#','#',' ',' ','#','#',' ',' ','#','=','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',' ',' ',' ','#',' ',' ',' ',' ','#',
								   '#','#','#',' ',' ','#',' ',' ','A',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ','#',
								   '#','#',' ','#',' ','#',' ',' ','B',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ','#',
								   '#','#',' ',' ',' ','#',' ',' ','C',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ','#',
								   '#',' ',' ','#','#','#',' ',' ','D',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ','#',
								   '#','#',' ',' ','#','#',' ',' ',' ','=','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',' ',' ',' ',' ','#',
								   '#','#','#',' ','#','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ','#',
								   '#',' ',' ',' ',' ','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',' ',' ',' ',' ','#',
								   '#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',
								   '#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',
								   '#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',
								   '#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',
								   '#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'};
			system ("cls");
			game(map, players, mappes, rounds);
			}
			
			//Easter egg - makes window disappear
			if(mappes=='i' && players == 26){
                           system ("cls");
                           int j=600;
                           int k=0;
                           for (int i=800; i!=0; i--){
                               cout << "Bye :DDDDDDDDD";
                               MoveWindow(console, r.left, r.top, i, j, TRUE);
                               j--;
                               k = i%10;
                               while(k/3!=0){
                                           cout << "D";
                                           k--;
                               }
                               Sleep(20);
                               system ("cls");
                           }
                           return 0;
            }
			
			if(mappes=='i' && players == 37921846){
			char map[zei][spa]={'+','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','+',
'|',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','B',
'B','B','B','B',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
' ',' ',' ',' ',' ',' ',' ',' ',' ','|',
'|',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','B',
'B','B','B','B',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
' ',' ',' ',' ',' ',' ',' ',' ',' ','|',
'|',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','B',
'B','B','B','B',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
' ',' ',' ',' ',' ',' ',' ',' ',' ','|',
'|',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','B',
'B','B','B','B',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
' ',' ',' ',' ',' ',' ',' ',' ',' ','|',
'|',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','B',
'B','B','B','B',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',
' ',' ',' ',' ',' ',' ',' ',' ',' ','|',
'|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','A',
'A','A','A','A',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
' ',' ',' ',' ',' ',' ',' ',' ',' ','|',
'|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','A',
'A','A','A','A',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
' ',' ',' ',' ',' ',' ',' ',' ',' ','|',
'|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','A',
'A','A','A','A',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
' ',' ',' ',' ',' ',' ',' ',' ',' ','|',
'|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','A',
'A','A','A','A',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
' ',' ',' ',' ',' ',' ',' ',' ',' ','|',
'|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','A',
'A','A','A','A',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
' ',' ',' ',' ',' ',' ',' ',' ',' ','|',
'|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
' ',' ',' ',' ',' ',' ',' ',' ',' ','|',
'|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ','#',
' ',' ',' ',' ',' ',' ',' ',' ',' ','|',
'|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
' ',' ',' ',' ',' ',' ',' ',' ',' ','|',
'|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ','#',' ',
'#',' ',' ',' ',' ',' ',' ',' ',' ','|',
'|',' ',' ',' ',' ',' ',' ',' ','#','#','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',
' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
' ',' ',' ',' ',' ',' ',' ',' ',' ','|',
'|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ','#',
' ',' ',' ',' ',' ',' ',' ',' ',' ','|',
'|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
' ',' ',' ',' ',' ',' ',' ',' ',' ','|',
'|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
' ',' ',' ',' ',' ',' ',' ',' ',' ','|',
'+','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',
'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',
'-','-','-','-','-','-','-','-','-','+',
};
            system ("cls");
			game(map, players, mappes, rounds);
			}			
			
//Easter egg - counts up
			if(mappes=='k' && players == 26){
                           int i=0;
                           while(true){                           
                           i++;
                           cout << i << "     ";
                           if(i<1000)
                                     Sleep(5);
                           }
            }
            
			if(mappes=='k'){
			char map[zei][spa]={   '-','-','-','-','-','#','-','-','-','-','#','-','-','-','-','#','-','-','-','-','#','-','-','-','-','#','-','-','-','-','#','-','-','-','-','#','-','-','-','-','#','-','-','-','-','#','-','-','-','-',
								   ' ',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ',
								   ' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ','#',
								   ' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ','#',
								   ' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',
								   ' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',
								   ' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#','-',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',
								   ' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#','-',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',
								   ' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#','A',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',
								   ' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#','B',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',
								   '#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ','C',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ',
								   '#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ','D',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ',
								   ' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ','-','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',
								   ' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ','-','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',
								   ' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',
								   ' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',
								   ' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',
								   ' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',
								   ' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',
								   '-','#','-','-','-','-','#','-','-','-','-','#','-','-','-','-','#','-','-','-','-','#','-','-','-','-','#','-','-','-','-','#','-','-','-','-','#','-','-','-','-','#','-','-','-','-','#','-','-','#',};
            system ("cls");
			game(map, players, mappes, rounds);
			}
			
			if(mappes=='c' && players == 26){
                 system("cls");
                 cout << "Racers Unlimited (RacTed) \nMade by GerH\n2013";
                 Sleep(8000);
                 return 0;
            }
	
	Sleep(1670);
	system("cls");
	cout << "New game? \n";
	cin >> gameisrunning;
	cout << "\nOkay ";
	}
	
}
