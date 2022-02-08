
struct Braille
{
  int table[6];
  Braille(int a1, int a2, int a3, int a4, int a5, int a6)
  {
    table[0] = a1;
    table[1] = a2;
    table[2] = a3;
    table[3] = a4;
    table[4] = a5;
    table[5] = a6;
  }
  
};

class Letters
{
public:
  int N;
   Braille *table[25];
  
  
  Letters(String zdanie)
  {
    N = zdanie.length();
   int i =0;
    
    for(int a = 0; a < N; a++)
      {
        char letter = zdanie[a];
         if(letter == 'a')
         {
            table[i]= new Braille(1, 0, 0, 0, 0, 0);
         }
            else if (letter == 'b')
         {
            table[i]= new Braille(1, 1, 0, 0, 0, 0);
         }
            else if (letter == 'c')
         {
            table[i]= new Braille(1, 0, 0, 1, 0, 0);
         }
            else if (letter == 'd')
         {
           table[i]= new Braille(1, 0, 0, 1, 1, 0);
         }
            else if (letter == 'e')
         {
              table[i]= new Braille(1, 0, 0, 0, 1, 0);
         }
            else if (letter == 'f')
         {
            table[i]= new Braille(1, 1, 0, 1, 0, 0);
         }
            else if (letter == 'g')
         {
            table[i]= new Braille(1, 1, 0, 1, 1, 0);
         }
            else if (letter == 'h')
         {
           table[i]= new Braille(1, 1, 0, 0, 1, 0);
         }
            else if (letter == 'i')
         {
              table[i]= new Braille(0, 1, 0, 1, 0, 0);
         }
          else if (letter == 'j')
         {
            table[i]= new Braille(0, 1, 0, 1, 1, 0);
         }
            else if (letter == 'k')
         {
            table[i]= new Braille(1, 0, 1, 0, 0, 0);
         }
            else if (letter == 'l')
         {
           table[i]= new Braille(1, 1, 1, 0, 0, 0);
         }
            else if (letter == 'm')
         {
              table[i]= new Braille(1, 0, 1, 1, 0, 0);
         }
            else if (letter == 'n')
         {
            table[i]= new Braille(1, 0, 1, 1, 1, 0);
         }
            else if (letter == 'o')
         {
            table[i]= new Braille(1, 0, 1, 0, 1, 0);
         }
            else if (letter == 'p')
         {
           table[i]= new Braille(1, 1, 1, 1, 0, 0);
         }
            else if (letter == 'q')
         {
              table[i]= new Braille(1, 1, 1, 1, 1, 0);
         }
         else if (letter == 'r')
         {
            table[i]= new Braille(1, 1, 1, 0, 1, 0);
         }
            else if (letter == 's')
         {
            table[i]= new Braille(0, 1, 1, 1, 0, 0);
         }
            else if (letter == 't')
         {
           table[i]= new Braille(0, 1, 1, 1, 1, 0);
         }
            else if (letter == 'u')
         {
              table[i]= new Braille(1, 0, 1, 0, 0, 1);
         }
            else if (letter == 'v')
         {
            table[i]= new Braille(1, 1, 1, 0, 0, 1);
         }
            else if (letter == 'x')
         {
            table[i]= new Braille(1, 0, 1, 1, 0, 1);
         }
            else if (letter == 'y')
         {
           table[i]= new Braille(1, 0, 1, 1, 1, 1);
         }
            else if (letter == 'z')
         {
              table[i]= new Braille(1, 0, 1, 0, 1, 1);
         }
         else if (letter == 'w')
         {
              table[i]= new Braille(0, 1, 0, 1, 1, 1);
         }
         else if (letter == 32)
         {
          continue;
         }
         else
         {
           table[i]=new Braille(0, 0, 0, 0, 0, 0);
         }
         i++;
         
      }

    
  }
};
