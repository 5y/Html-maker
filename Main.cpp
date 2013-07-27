//============================================================================
// Name        : htmlchek.cpp
// Author      : rehb
// Version     :
// Copyright   : Your copyleft notice
// Description : Hello World in C++, Ansi-style
//============================================================================
/**

  #include <iostream>
	#include <fstream>
	#include <string>
	using namespace std;
	int main()
	{


		int a;
		int n;

   char data[100];
	cout << "HTML4 Maker For Start please insert 1"<<endl;
	cin >> a;
	if (a == 1){


   char data[100];
   ofstream outfile;
   outfile.open("index.html");
   cout << "loading ...." << endl;
   outfile << "<html>\n";
   outfile << "<head> \n ";
   outfile << "<title>\n";
   cout<<"insert Title:"<<endl;
   cin.getline(data, 100);
      outfile << data;
      cin >> data;
            cin.ignore();
            outfile << data << endl;
   outfile << "</title> \n";
   outfile << "</head>\n";
   outfile << "<body>\n";

	cout << "HELP:\n";
cout<< "H1:1"<<" "<<"H6=2"<<" "<<"p:3"<<" "<<"Br:4"<<" "<<"hr:5"<<" "<<"ul:6"<<" "<<"ol:7"<<" "<<"li:8"<<endl<<" "<<"strong:9"<<" "<<"a:10"<<" "<<"img=11"<<" "<<"styl:12"<<" " << " "<<"border:13"<<" "<<"tablecreator:14"<<"td:15"<<" "<<"th:16"<<" "<<"closetable=17"<<" "<<"align:18"<<" "<<"valing:19"<<"  "<<"span:20"<<endl;
cout<<" for enter the editor Insert 1"<<endl;
cin>>  n ;
   while(1)
   {
	   cout<<"make"<<endl;
	   cin>>n;
   if (n==1){
outfile << "<h1>";
cout<<"please insert text"<<endl;
cin.getline(data, 100);
   outfile << data;
   cin >> data;
         cin.ignore();
         outfile << data << endl;
   outfile << "</h1>";
   }

   else if
     (n==3){
outfile << "<p>";
cout<<"please insert text"<<endl;
cin.getline(data, 100);
   outfile << data;
   cin >> data;
         cin.ignore();
         outfile << data << endl;
   outfile << "</p>";

   }
   else if
        (n==2){
   outfile << "<h6>";
   cout<<"please insert text";
   cin.getline(data, 100);
      outfile << data;
      cin >> data;
            cin.ignore();
            outfile << data << endl;
      outfile << "</h6>";

      }
   else if
        (n==4){

            outfile << "</br>";

      ;

      }
   else if
        (n==5){

            outfile << "<hr>";


      }
   else if
         (n==6){
    outfile << "<ul>";
    outfile << "<li>";
    cout<<"please insert text"<<endl;
    cin.getline(data, 100);
       outfile << data;
       cin >> data;
             cin.ignore();
             outfile << data << endl;
             outfile << "<li>";
       outfile << "</ul>";

       }
   else if
         (n==7){
    outfile << "<ol>";
    outfile << "<li>";
    cout<<"please insert text"<<endl;
    cin.getline(data, 100);
       outfile << data;
       cin >> data;
             cin.ignore();
             outfile << data << endl;
             outfile << "<li>";
       outfile << "</pl>";

       }
   else if
         (n==8){

    outfile << "<li>";
    cout<<"please insert text"<<endl;
    cin.getline(data, 100);
       outfile << data;
       cin >> data;
             cin.ignore();
             outfile << data << endl;
             outfile << "<li>";


       }
   else if
         (n==9){
    outfile << "<strong>";
    cout<<"please insert text"<<endl;
    cin.getline(data, 100);
       outfile << data;
       cin >> data;
             cin.ignore();
             outfile << data << endl;
       outfile << "</strong>";

       }
   else if
            (n==11){
       outfile << "<img ";
       outfile << "src=\"";
       cout<<"please insert location picture"<<endl;
       cin.getline(data, 100);
          outfile << data;
          cin >> data;
                cin.ignore();
                outfile << data << endl;
                outfile << "\">";
                outfile << "</img>";



          }
   else if
               (n==12){
          outfile << "<p style='color:sienna;margin-left:20px'>";
          cout<<"please insert text"<<endl;
          cin.getline(data, 100);
             outfile << data;
             cin >> data;
                   cin.ignore();
                   outfile << data << endl;
                   outfile << "</p>";


             }
   else if
            (n==10){
       outfile << "<a href=\"";
       cout<<"please insert hyperlink"<<endl;
       cin.getline(data, 100);
          outfile << data;
          cin >> data;
                cin.ignore();
                outfile << data << endl;
                outfile << "\">";
                cout<<"please insert hyperlink"<<endl;
                cin >> data;
                 cin.ignore();
                               outfile << data << endl;
                outfile << "</a>\n";


          }
   else if
               (n==13){
          outfile << "<p style='border-style:dotted solid;'>\n";
          cout<<"please insert text"<<endl;
          cin.getline(data, 100);
             outfile << data;
             cin >> data;
                   cin.ignore();
                   outfile << data << endl;
                   outfile << "</p>\n";


             }
   else if
                (n==14){
           outfile << "<table border=\"1\">\n";



              }
   else if
                (n==15){
           outfile << "<tr>\n";
           outfile << "<td>\n";

           cout<<"please insert text"<<endl;
           cin.getline(data, 100);
              outfile << data;
              cin >> data;
                    cin.ignore();
                    outfile << data << endl;
                    outfile << "</td>\n";

                    outfile << "</tr>\n";



              }
   else if
                (n==16){
           outfile << "<tr>\n";
           outfile << "<th>\n";

           cout<<"please insert text"<<endl;
           cin.getline(data, 100);
              outfile << data;
              cin >> data;
                    cin.ignore();
                    outfile << data << endl;
                    outfile << "</th>\n";

                    outfile << "</tr>\n";



              }

   else if
                (n==17){
           outfile << "</table>\n";


              }
   else if
                  (n==23){
             outfile << "<p style='text-alig:center;'>\n";
             cout<<"please insert text"<<endl;
             cin.getline(data, 100);
                outfile << data;
                cin >> data;
                      cin.ignore();
                      outfile << data << endl;
                      outfile << "</p>\n";



                }
   else if
                  (n==22){
             outfile << "<p style='text-align:right;>\n";
             cout<<"please insert text"<<endl;
             cin.getline(data, 100);
                outfile << data;
                cin >> data;
                      cin.ignore();
                      outfile << data << endl;
                      outfile << "</p>\n";


                }
   else if
                  (n==21){
             outfile << "<p style='text-align:left;>\n";
             cout<<"please insert text"<<endl;
             cin.getline(data, 100);
                outfile << data;
                cin >> data;
                      cin.ignore();
                      outfile << data << endl;
                      outfile << "</p>\n";



                }
   else if
                  (n==19){
	   cout <<"right:1"<<endl;
	   cout<<"left:2"<<endl;
	   cout<<"center:1"<<endl;
	   int vl;
	   cin>>vl;
             switch (vl){
             case '1':
                 outfile << "<tr>\n";
                 outfile << "<td valign='top'>\n";

                 cout<<"please insert text"<<endl;
                 cin.getline(data, 100);
                    outfile << data;
                    cin >> data;
                          cin.ignore();
                          outfile << data << endl;
                          outfile << "</td>";

                          outfile << "</tr>";
            break;
             case '2':
                 outfile << "<tr>";
                         outfile << "<td valign='bottom'>\n";

                         cout<<"please insert text"<<endl;
                         cin.getline(data, 100);
                            outfile << data;
                            cin >> data;
                                  cin.ignore();
                                  outfile << data << endl;
                                  outfile << "</td>\n";

                                  outfile << "</tr>\n";
                 break;


             }

                }
   else if
                (n==20){
	   outfile << "<p>\n";
	   cout<<"please insert text"<<endl;
	   cin.getline(data, 100);
	      outfile << data;
	      cin >> data;
	            cin.ignore();
	            outfile << data << endl;
	     	   outfile << "<span style='color:blue'>\n";
	     	  cout<<"please insert text"<<endl;
	     	  	   cin.getline(data, 100);
	     	  	      outfile << data;
	     	  	      cin >> data;
	     	  	            cin.ignore();
	     	  	            outfile << data << endl;
	     		     	   outfile << "</span>\n ";

	      outfile << "</p>\n";



              }
   else if
                (n==0){
	   outfile << "</body>\n ";
	   	   outfile << "</html>\n ";
	return 0;



              }

    }

	   outfile << "</body>\n ";
	   outfile << "</html>\n ";


   outfile.close();

	}		return 0;
	}
*/
