#include "go.h"
#include "BaseFunc.h"
#include "menu.h"
#include "play.h"
 using namespace std;


 void start()
 {
     char op = getch();
     switch (op)
     {
         case '1': play(); break;
         case '2': instruction(); break;
         case '3': break;
     }
 }
