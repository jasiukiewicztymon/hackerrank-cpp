#include<bits/stdc++.h>

using namespace std;
//Doc: https://docs.microsoft.com/en-us/cpp/standard-library/overloading-the-output-operator-for-your-own-classes?view=msvc-170

class Box {
    private:
        int l = 0, b = 0, h = 0;
    public:
        Box() {}
        Box(int bl, int bb, int bh) { l = bl, b = bb, h = bh; }
        Box(const Box &box) { l = box.l, b = box.b, h = box.h; }
        
        int getLength() { return l; }
        int getBreadth() { return b; }
        int getHeight() { return h; }
        
        long CalculateVolume() { return (long)(b)*l*h; }
        
        //overloading operators
        //operator <
        bool operator<(Box &box) {
            if  (l < box.l) 
            { return true; }
            else if (l == box.l) {
                if (b < box.b) 
                { return true; }
                else if (b == box.b) {
                    if (h < box.h) 
                    { return true; }
                }
            }
            return false;
        }
};

ostream &operator<<(ostream &out, Box &box) {
    out << box.getLength() << " " << box.getBreadth() << " " << box.getHeight();
    return out;
}


void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}
