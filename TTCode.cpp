#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;



int main()
{string mot,line;
   ifstream fichier("c:/trait1/SWAP_AXE_Classique.txt");
   ofstream fichier1("c:/trait1/safi.txt");
   ofstream fichier2("c:/trait1/mot.txt"); 
   ofstream fichier3("c:/trait1/convertion.txt");
      ofstream fichier4("c:/trait1/numero.txt");
 if ( fichier && fichier1 &&fichier2 &&fichier3&&fichier4)
 {
       string mot ;	 
     int a,bb,c,d,e ;
     string ligne ;
        
         getline(fichier,ligne);
           while ( !fichier.eof())
                 {  
                     a=ligne.find("RC");
                     bb=ligne.find("NC");
                     c=ligne.find("SNB");
					 d=ligne.find("DEV");
					 e=ligne.find("WO");	
 	                     if ( ( a!= -1) ||  (bb != -1) ||  (c != -1) ||  (d != -1) ||  (e != -1) )
 	                       {
	                      	getline(fichier,ligne);

                            }
                   
				             else
	                           {
	                         	fichier1<<ligne<<endl;
	                	        getline(fichier,ligne);
		                       } 
                     }
    
	
	fichier.close();

//*******vers mot.txt****************************

ifstream fichi("c:/trait1/safi.txt");
string term,chaine;

     
           while (  getline(fichi,chaine))
	        { 
	          istringstream iss(chaine);
                 while(iss >> term)
                  {
                  	 fichier2<<term<<endl;	 
				  }
       }
   fichi.close();    
   
   
   
 
//-----------------taille de fichier mot------------------------------------------------------
   
   
 FILE *f;
    long size;
 
    f=fopen("c:/trait1/mot.txt","rb");
 
    if(fichier)
    {
            fseek (f, 0, SEEK_END); 
            size=ftell (f);
            fclose (f);          
    }   
   
   
   
   
   
   
//-----------------vers t ---------------------------   

   string t[size];
   int pos[size];
   ifstream ft("c:/trait1/mot.txt");
      int n;
      string lt;
       int x=0;
    while ( !ft.eof())
    {
       getline(ft,lt);
	   t[x]=lt; 
	   cout <<t[x]<<endl;
	   x++;       
    } 
   n=x;
   cout <<"---------------------"<<endl;
   cout<<"taille de T :"<<n<<endl;
   ft.close();
   
 
 


	      
//**************position********************
   int pj, j; 
   int y=0; 
   pj=0;
for (j=0; j<n;j++)
{  
  if (t[j].find('7') == 0)
    {  
	 	pos[pj]=j;
	 	pj++;
    }
}
int np;
np=pj;
pos[np]=n;cout<<"fin de TPOS :"<<pos[np]<<endl;
cout<<"taille de tpos :"<<np<<endl;
//*************************PROGRAMME****************************** 
int ii,ipos,b1,b2,b3,b4,b5;
  b1=0;b2=0;b3=0;b4=0,b5=0;
string ch2;



int posj,posj2;
posj=0;
posj2=0;
int ipp=1;
 ii=0;

string cht;
//-------------------------------------------------------
ipos=1;
do
{

    cout <<"---------------------"<<endl;
    posj=pos[ipos-1];cout<<"pos:"<<posj<<endl;
    posj2=pos[ipos];cout<<"pos2:"<<posj2<<endl;ipp++;
//*************************convertion******************************
	      
          string chn=t[posj];
            fichier4<<chn<<endl;      
                do
                   {  
                        cht=t [ii];
                       if ( t[ii]== "FLA-2" ) 
                        { b1=1;}
                       if (t[ii]== "CAW-1" )
                        {b2=1;}
                        if (t[ii] == "ANT-1" ) 
                        {b3=1;}
                        if (t[ii]== "IPT-2" )    
                     	{b4=1;}
                    	if (t[ii] == "OBA-102" )    
	                    {b5=1;}  
					    ii++;	  
					    cout<<t[ii]<<endl; 
                    }while(ii<posj2) ;
                   
                  
              
               		 string ch1;
                        if (b5 ==1)
			 {ch2=",LP=0,DID=ESL,MN=44,EID=""X.X.X.X.X"",TID=""2999,RCHS=700,CSC=60,UTP=NRM,ICR=LCO-1&LC-1&LCT-1&NTT-1&ITT-1&ICTX-1&ICCTX-1&INTT-1&IITT-1&TFL-1&ICLT-1&ICDDD-1&ICIDD-1&IOLT-1&CCO1-1&CCO2-1&CCO3-1&CCO4-1&CCO5-1&CCO6-1&CCO7-1&CCO8-1&CCO9-1&CCO10-1&CCO11-1&CCO12-1&CCO13-1&CCO14-1&CCO15-1&CCO16-1,OCR=LCO-1&LC-1&LCT-1&NTT-1&ITT-1&ICTX-1&OCTX-1&INTT-1&IITT-1&OFL-1&ICLT-1&ICDDD-1&ICIDD-1&IOLT-1&CCO1-1&CCO2-1&CCO3-1&CCO4-1&CCO5-1&CCO6-1&CCO7-1&CCO8-1&CCO9-1&CCO10-1&CCO11-1&CCO12-1&CCO13-1&CCO14-1&CCO15-1&CCO16-1,CNTRX=NO,PBX=NO,CHG=NO,ENH=NO"; }
                        else
                         { ch2=",LP=0,DID=ESL,MN=44,EID=""X.X.X.X.X"",TID=""2999,RCHS=700,CSC=0,UTP=NRM,ICR=LCO-1&LC-1&LCT-1&NTT-1&ITT-1&ICTX-1&ICCTX-1&INTT-1&IITT-1&TFL-1&ICLT-1&ICDDD-1&ICIDD-1&IOLT-1&CCO1-1&CCO2-1&CCO3-1&CCO4-1&CCO5-1&CCO6-1&CCO7-1&CCO8-1&CCO9-1&CCO10-1&CCO11-1&CCO12-1&CCO13-1&CCO14-1&CCO15-1&CCO16-1,OCR=LCO-1&LC-1&LCT-1&NTT-1&ITT-1&ICTX-1&OCTX-1&INTT-1&IITT-1&OFL-1&ICLT-1&ICDDD-1&ICIDD-1&IOLT-1&CCO1-1&CCO2-1&CCO3-1&CCO4-1&CCO5-1&CCO6-1&CCO7-1&CCO8-1&CCO9-1&CCO10-1&CCO11-1&CCO12-1&CCO13-1&CCO14-1&CCO15-1&CCO16-1,CNTRX=NO,PBX=NO,CHG=NO,ENH=NO";  }
                    
  
                          if ((b1 ==1 )&& (b2 ==1 ) && (b3 ==1 )&& (b4 ==1 ))
                             {
                                   	ch1="MOD VSBR:D=K'";
                                   	ch1+=chn;
   	                                ch1+=",LP=0,NS=CLIP-1"";\nMOD VSBR:D=K'";
                                   	ch1+=chn;
                                     	ch1+=",LP=0,NS=CW-1;";
                             }
   
                           else if ((b3 ==1 )&& (b4 ==1 ))
                             { ch1="MOD VSBR:D=K'";
                               ch1+=chn;
                               ch1+=",LP=0,NS=CLIP-1";   
                              }
   
                             else if ((b1 ==1 )&& (b2 ==1 ) )
                               { ch1="MOD VSBR:D=K'";
                                 ch1+=chn;
                                 ch1+=",LP=0,NS=CW-1,";
                                }
                         
			 cout<<b1<<endl;cout<<b2<<endl;cout<<b3<<endl;cout<<b4<<endl;cout<<b5<<endl;
                         cout<<ch1<<endl;
	
                               string chg; 
                               chg="ADD VSBR:D=K'";
                               chg+=chn;
                               chg+=ch2;
                               fichier3<<ch1<<endl;
                               fichier3<<chg<<endl;
                               fichier3<<" "<<endl;
                               cout<<chg<<endl;
 			b1=0;b2=0;b3=0;b4=0,b5=0;

ipos++;
}while(ipos<np+1);
//---------------------------------------------------------------------------	        	
}
 else
{
 	cout<<"erreur "<<endl;	
 	
}
 cout<<"------------------"<<endl; 
  cout<<"safi"<<endl;
  cout<<"mot"<<endl;
  cout<<"convertion"<<endl; 
  cout<<"numero"<<endl;
  return 0;	
 
}
