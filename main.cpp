#include <iostream>
#include<bits/stdc++.h>
#include<conio.h>
#include <string>
#include <cstdlib>

using namespace std;

int score = 0;

void upmove(int a[4][4]){
	int i,j,li,ri;
	for(j=0;j<4;j++)
	{
		li=0,ri=j;
		for(i=1;i<4;i++)
		{
			if(a[i][j]!=0)
			{
				if(a[i-1][j]==0 || a[i-1][j]==a[i][j])
				{
					if(a[li][ri]==a[i][j])
					{
						a[li][ri]*=2;
						score += a[li][ri];
						a[i][j]=0;
					}
					else
					{
						if(a[li][ri]==0)
						{
							a[li][ri]=a[i][j];
							a[i][j]=0;
						}
						else
						{
							a[++li][ri]=a[i][j];
							a[i][j]=0;
						}
					}
				}
				else li++;
			}
		}
	}
}

void downmove(int a[4][4]){
	int i,j,li,ri;
	for(j=0;j<4;j++)
	{
		li=3,ri=j;
		for(i=2;i>=0;i--)
		{
			if(a[i][j]!=0)
			{
				if(a[i+1][j]==0 || a[i+1][j]==a[i][j])
				{
					if(a[li][ri]==a[i][j])
					{
						a[li][ri]*=2;
						score += a[li][ri];
						a[i][j]=0;
					}
					else
					{
						if(a[li][ri]==0)
						{
							a[li][ri]=a[i][j];
							a[i][j]=0;
						}
						else
						{
							a[--li][ri]=a[i][j];
							a[i][j]=0;
						}
					}
				}
				else li--;
			}
		}
	}
}
void leftmove(int a[4][4])
{
	int i,j,li,ri;
	for(i=0;i<4;i++)
	{
		li=i,ri=0;
		for(j=1;j<4;j++)
		{
			if(a[i][j]!=0)
			{
				if(a[i][j-1]==0 || a[i][j-1]==a[i][j])
				{
					if(a[li][ri]==a[i][j])
					{
						a[li][ri]*=2;
						score += a[li][ri];
						a[i][j]=0;
					}
					else
					{
						if(a[li][ri]==0)
						{
							a[li][ri]=a[i][j];
							a[i][j]=0;
						}
						else
						{
							a[li][++ri]=a[i][j];
							a[i][j]=0;
						}
					}
				}
				else ri++;
			}
		}
	}
}

void rightmove(int a[4][4])
{
	int i,j,li,ri;
	for(i=0;i<4;i++)
	{
		li=i,ri=3;
		for(j=2;j>=0;j--)
		{
			if(a[i][j]!=0)
			{
				if(a[i][j+1]==0 || a[i][j+1]==a[i][j])
				{
					if(a[li][ri]==a[i][j])
					{
						a[li][ri]*=2;
						score += a[li][ri];
						a[i][j]=0;
					}
					else
					{
						if(a[li][ri]==0)
						{
							a[li][ri]=a[i][j];
							a[i][j]=0;
						}
						else
						{
							a[li][--ri]=a[i][j];
							a[i][j]=0;
						}
					}
				}
				else ri--;
			}
		}
	}
}
void addblock(int a[4][4])
{
	int li,ri;
	srand(time(0));
	while(1)
	{
		li=rand()%4;
		ri=rand()%4;
		if(a[li][ri]==0)
		{
			a[li][ri]=pow(2,li%2 + 1);
			break;
		}
	}

}

void disp(int a[4][4])
{
	cout<<"\n\t\tNhan ESC de thoat game";
	cout<<"\n\t\tSu dung cac phim mui ten de choi game";
	cout<<"\n\n\t\tDiem hien tai: " << score;
	cout<<"\n\n\n\n";
	int i,j;
	for(i=0;i<4;i++)
	{
		cout<<"\t\t\t\t---------------------------------------------\n\t\t\t\t";
		for(j=0;j<4;j++)
		{
			cout << "|";
			if(a[i][j]==0) cout<<"          ";
			else
			{
				int cnt = 0, tmp = a[i][j];
				while(tmp){
					cnt++;
					tmp /= 10;
				}
                int sum = 10 - cnt;
                int left = sum / 2;
                int right = sum - left;

                cout << setw(left) << "" << a[i][j] << setw(right) << "";
			}
		}
		cout<<"|"<<endl;
	}
	cout<<"\t\t\t\t---------------------------------------------\n";
}


int check(int tmp[4][4],int a[4][4])
{
	int fl=1,i,j;
	for(i=0;i<4;i++)
    	for(j=0;j<4;j++)
    		if(tmp[i][j]!=a[i][j])
    		{
    			fl=0;
    			break;
			}
	return fl;
}

int checkover(int a[4][4])
{
	int fl=0,gl=0,i,j;
	for(i=0;i<4;i++)
    	for(j=0;j<4;j++)
    		if(a[i][j]==0)
    		{
    			fl=1;
				break;
			}

	for(i=0;i<3;i++)
    	for(j=0;j<3;j++)
    		if(a[i+1][j]==a[i][j] || a[i][j+1]==a[i][j])
    		{
    			gl=1;
    			break;
			}

	if(fl || gl) return 1;
	else return 0;
};


void mainMenu(){
		cout <<"\t\t\t\t-------------------------"<< endl;
		cout <<"\t\t\t\t         2048           "<< endl;
		cout <<"\t\t\t\t-------------------------"<< endl;
		cout <<"\t\t\t\t1.Bat dau"<< endl;
		cout <<"\t\t\t\t2.Huong dan choi"<< endl;
		cout <<"\t\t\t\t3.Thoat game."<< endl;
}   
		
		  
void showInstructions() {
	cout << "\n\n\n\t\t\t\tHUONG DAN CHOI GAME 2048\n\n";
	cout << "\t\t\t\t1. Su dung cac phim mui ten de di chuyen cac o.\n";
	cout << "\t\t\t\t2. Khi hai o co cung so cham nhau, chung se hop nhat thanh mot!\n";
	cout << "\t\t\t\t3. Nhan ESC de thoat game.\n";
	cout << "\t\t\t\t4. Muc tieu cua ban là tao ra mot o co so 2048.\n";
	cout << "\n\n\t\t\t\tNhan ESC de quay lai...";

	getch();
}

void checkWin(int a[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (a[i][j] == 2048) {
                cout << "\n\n\t\t\tCHIEN THANG!!!\n";
                cout << "\n\t\t\tDiem hien tai: " << score << "\n";
                cout << "\n\t\t\tBan da dat duoc 2048!";
                cout << "\n\t\t\tNhan ESC de thoat, hoac nhan bat ky phim nao de tiep tuc choi!";
                char ch;
                ch = getch();
                if (ch == 27) {
                    return; 
                }
                break;
            }
        }
    }
}

void playGame()
{

	int i1,i2,i3,i4,i,j;
	int a[4][4]={0},tmp[4][4]={0};
	srand(time(0));
	i1=rand()%4;
	i2=rand()%4;
	while(1)
	{
		i3=rand()%4;
		i4=rand()%4;
		if(i3!=i1 && i4!=i2) break;
	}
	a[i1][i2]=2;
	a[i3][i4]=4;
	disp(a);

	int ch;
	while (1)
    {
    	for(i=0;i<4;i++)
    		for(j=0;j<4;j++)
    			tmp[i][j]=a[i][j];
    	ch=getch();
    	system("cls");
    	if(ch==72) upmove(a);
    	if(ch==80) downmove(a);
    	if(ch==75) leftmove(a);
    	if(ch==77) rightmove(a);
		if(ch==27) break;

		if(!check(tmp,a))
			addblock(a);
		disp(a);
		
		if (!checkover(a)) {
            cout << "\n\n\t\t\tGAME OVER!!\n";
            cout << "\n\n\t\t\tDiem dat duoc: " << score << "\n\n\n";
            cout << "\n\t\t\t1. Choi lai";
            cout << "\n\t\t\t2. Thoat\n";
            cout << "\n\t\t\tLua chon cua ban: ";
            int choice;
            cin >> choice;
            if (choice == 1) {
                score = 0;
                playGame();
            } else {
                break;
            }
        }
		
	}
}

int main (){
	int choice;
	
	while (choice<4){
	system("cls");
	mainMenu();	
		cout <<"\n\t\t\t\tVui long dua ra lua chon: ";		
		
		cin >> choice;
		
		switch (choice){
			case 1:
				system("cls");
				playGame();
				break;
			case 2:
				system("cls");
				showInstructions() ;
				break;
			case 3:
				cout << "\n\t\t\t\tThoat khoi game. Hen gap lai!" << endl;
                return 0;
            case 4:
            	default:
                cout << "Lua chon khong hop le. Vui long chon lai." << endl;
                break;
        }
	}
	return 0;
}	
