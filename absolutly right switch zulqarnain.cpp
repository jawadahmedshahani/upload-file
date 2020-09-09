#include<iostream>
#include<string>
using namespace std;
int main()
{
 int a=6;
 cout<<"entter e for terminate program"<<endl;
  while(a>5)
  {
  	char op;
  	cout<<"enter operator + - * / "<<endl;
    cin>>op;
    	float num1,num2;
  	            cout<<"enter num1 "<<endl;
                 cin>>num1;
                 cout<<"enter num2"<<endl;
                 cin>>num2;
   switch(op)
  {
	    	case'+':
			{
			
	      	   	cout<<num1+num2<<endl;
			 
	    	}
        	break;
        	case'*':
	     	{
	     	
		     	cout<<num1*num2<<endl;
			
	    	}
		     break;
		    case'-':
			{
			
			    cout<<num1-num2<<endl;
			 
			}
		    break;
		    
		    case'/':
			{
			
		    	cout<<num1/num2<<endl;	
			}
			break;
		    default:
		    cout<<"you put wrong number"<<endl;
		    break;
		    case 'e':
		    return 0;
}
}
			return 0;
}
