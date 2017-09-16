// ------------------------------------------------------------------
// File name:   HashFile .cpp
// Assign ID:   PROG1
// Due Date:    mm/dd/yy at hh
//
// Purpose: Design and write a program that reads a text file and counts 
//          the number of times each NON-WHITESPACE character occurs, then 
//          computes a single integer (long) value based on the character 
//          code and occurrence frequency of each such character.
//
// Author:      twilson
//
// ------------------------------------------------------------------
                                                                                                                                                                                                                                    

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main()
{
   // ----------------------------------------------------------------------
   //  Declare variables
   // ----------------------------------------------------------------------
   char Cha;
	
   int A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P, Q, R, S, T,
   U, V, W, X, Y, Z,a, b, c, d, e, f, g, h, i, j, k, l, m, n, o,
   p, q, r, s, t, u, v, w, x, y, z, period, comma, semicolon, colon,
   exclamationMark, dash, QuotaionMarks, QuestionMark, HashTag, DollarSign, Percent, And,
   LeftParen, RightParen, Plus, BackSlash, LessThan, GreaterThan, Zero, One, Two, Three, Four, Five,
   Six, Seven, Eight, Nine, Apos, Equal, Mult, UnderScore, StraightLine, LeftBracket, RightBracket, FrontSlash,
   LeftFlow, RightFlow;
	
   //-| ----------------------------------------------------------------------
   //-| Print the copyright notice declaring authorship.
   //-| ----------------------------------------------------------------------
   cout << endl << "(c) 2017, twilson" << endl << endl; 
    
   //Initialize Variables
   A = B = C = D = E = F = G = H = I = J = K = L = M = N = O = P = 
   Q = R = S = T = U = V = W = X = Y = Z = a = b = c = d = e = f = 
   g = h = i = j = k = l = m = n = o = p = q = r = s = t = u = v = w =  x =  y =  z = 
   period = comma = semicolon =  colon = exclamationMark = dash = QuotaionMarks = QuestionMark =
   HashTag = DollarSign = Percent = And = LeftParen = RightParen = Plus = BackSlash = LessThan 
   = GreaterThan = Zero = One = Two = Three = Four = Equal = Mult = Five = Six = Seven = Eight = Nine = Apos = UnderScore = 
   StraightLine = LeftBracket = RightBracket = FrontSlash = LeftFlow = RightFlow = 0;

   ifstream inF;
   char inFName[80];   // Name of input file.
   char Characters[256];
   long hashValue = 0;

   //-| Get file name and open file.
   cout << "Enter name of input file: "; 
   cin >> inFName;
   cout << endl;

   inF.open(inFName);
   if (inF.fail())
   {
      cout << "FATAL ERROR: Can not open file " <<  inFName << endl;
      exit(1);
   }

   //-| Read file char by char till EOF reached.
   while (inF >> Cha )
   {
       //cout << "Count character '" << Cha << "'" << endl;
	   //-| if statements to compare chars in file to individual chars
	   if(Cha == 'A')
		   A++;
	   if(Cha == 'B')
		   B++;
	   if(Cha == 'C')
		   C++;
	   if(Cha == 'D')
		   D++;
	   if(Cha == 'E')
		   E++;
	   if(Cha == 'F')
		   F++;
	   if(Cha == 'G')
		   G++;
	   if(Cha == 'H')
		   H++;
	   if(Cha == 'I')
		   I++;
	   if(Cha == 'J')
		   J++;
	   if(Cha == 'K')
		   K++;
	   if(Cha == 'L')
		   L++;
	   if(Cha == 'M')
		   M++;
	   if(Cha == 'N')
		   N++;
	   if(Cha == 'O')
		   O++;
	   if(Cha == 'P')
		   P++;
	   if(Cha == 'Q')
		   Q++;
	   if(Cha == 'R')
		   R++;
	   if(Cha == 'S')
		   S++;
	   if(Cha == 'T')
		   T++;
	   if(Cha == 'U')
		   U++;
	   if(Cha == 'V')
		   V++;
	   if(Cha == 'W')
		   W++;
	   if(Cha == 'X')
		   X++;
	   if(Cha == 'Y')
		   Y++;
	   if(Cha == 'Z')
		   Z++;
	   if(Cha == 'a')
		   a++;
	   if(Cha == 'b')
		   b++;
	   if(Cha == 'c')
		   c++;
	   if(Cha == 'd')
		   d++;
	   if(Cha == 'e')
		   e++;
	   if(Cha == 'f')
		   f++;
	   if(Cha == 'g')
		   g++;
	   if(Cha == 'h')
		   h++;
	   if(Cha == 'i')
		   i++;
	   if(Cha == 'j')
		   j++;
	   if(Cha == 'k')
		   k++;
	   if(Cha == 'l')
		   l++;
	   if(Cha == 'm')
		   m++;
	   if(Cha == 'n')
		   n++;
	   if(Cha == 'o')
		   o++;
	   if(Cha == 'p')
		   p++;
	   if(Cha == 'q')
		   q++;
	   if(Cha == 'r')
		   r++;
	   if(Cha == 's')
		   s++;
	   if(Cha == 't')
		   t++;
	   if(Cha == 'u')
		   u++;
	   if(Cha == 'v')
		   v++;
	   if(Cha == 'w')
		   w++;
	   if(Cha == 'x')
		   x++;
	   if(Cha == 'y')
		   y++;
	   if(Cha == 'z')
		   z++;
	    if(Cha == '.')
		   period++;
	    if(Cha == ',')
		   comma++;
	    if(Cha == ';')
		   semicolon++;
	    if(Cha == ':')
		   colon++;
	    if(Cha == '!')
		   exclamationMark++;
	    if(Cha == '-')
		   dash++;
	    if(Cha == '"')
		   QuotaionMarks++;
	    if(Cha == '?')
		   QuestionMark++;
	    if(Cha == '#')
		   HashTag++;
	    if(Cha == '$')
		   DollarSign++;
	    if(Cha == '%')
		   Percent++;
	    if(Cha == '&')
		   And++;
	    if(Cha == '(')
		   LeftParen++;
	    if(Cha == ')')
		   RightParen++;
	    if(Cha == '+')
		   Plus++;
	    if(Cha == '*')
			Mult++;
		if(Cha == '=')
			Equal++;
	    if(Cha == '/')
		   BackSlash++;
	    if(Cha == '<')
		   LessThan++;
		if(Cha == '>')
		   GreaterThan++;
		if(Cha == '\'')
		   Apos++;
		if(Cha == '0')
		   Zero++;
		if(Cha == '1')
		   One++; 
		if(Cha == '2')
		   Two++; 
		if(Cha == '3')
		   Three++; 
		if(Cha == '4')
		   Four++; 
		if(Cha == '5')
		   Five++; 
		if(Cha == '6')
		   Six++; 
		if(Cha == '7')
		   Seven++; 
		if(Cha == '8')
		   Eight++;
		if(Cha == '9')
		   Nine++;  
	    if(Cha == '_')
			UnderScore++;
	    if(Cha == '|')
			StraightLine++;
	    if(Cha == '[')
			LeftBracket++;
	    if(Cha == '\\')
			FrontSlash++;
	    if(Cha == ']')
			RightBracket++;
	    if(Cha == '{')
			RightFlow++;
	    if(Cha == '}')
			LeftFlow++;
	    
   }
	
	//-| Print Symbol Frequencies
	cout << "SYMBOL FREQUENCIES:" << endl;
	int xtimes = 1;
	int format = 0;
    int nextline = 0;
	
	//-| Use a while loop and if statements to format 10 per line and output frequency
while(xtimes < 2)
{
	if(exclamationMark > 0)
	{
		cout << setw(3)<< exclamationMark << '!' << "  ";
		format++;
	}
	if (format == 10)
	{
		format = 0;
		cout << endl;
	}
	if(QuotaionMarks > 0)
	{
		cout << setw(3) << QuotaionMarks << '"' << "  ";
		format++;
	}
	if (format == 10)
	{
		format = 0;
		cout << endl;
	}
	if(HashTag > 0)
	{
		cout << setw(3) << HashTag << '#' << "  ";
		format++;
	}
	if (format == 10)
	{
		format = 0;
		cout << endl;
	}
	if(DollarSign > 0)
	{
		cout << setw(3)  << DollarSign << '$' << "  ";
		format++;
	}
	if (format == 10)
	{
		format = 0;
		cout << endl;
	}
	if(Percent > 0)
	{
		cout << setw(3) << Percent << '%' << "  ";
		format++;
	}
	if (format == 10)
	{
		format = 0;
		cout << endl;
	}
	if(And > 0)
	{
		cout << setw(3)  << And << '&' << "  ";
		format++;
	}
	if (format == 10)
	{
		format = 0;
		cout << endl;
	}
	if (Apos > 0)
	{
		cout << setw(3) << Apos << '\'' << "  ";
		format++;
	}
	if (format == 10)
	{
		format = 0;
		cout << endl;
	}
	if(LeftParen > 0)
	{
		cout << setw(3)  << LeftParen << '(' << "  ";
		format++;
	}
	if (format == 10)
	{
		format = 0;
		cout << endl;
	}
	if(RightParen > 0)
	{
		cout << setw(3) << RightParen << ')' << "  ";
		format++;
	}
	if(Mult > 0)
	{
		cout << setw(3) << Mult << '*' << "  ";
		format++;
	}
	if (format == 10)
	{
		format = 0;
		cout << endl;
	}
	if(Plus > 0)
	{
		cout << setw(3) << Plus << '+' << "  ";
		format++;
	}
	if (format == 10)
	{
		format = 0;
		cout << endl;
	}
	if(comma > 0)
	{
		cout << setw(3) << comma << ',' << "  ";
	    format++;
	}
	if (format == 10)
	{
		format = 0;
		cout << endl;
	}
	if(dash > 0)
	{
		cout << setw(3)<< dash << '-' << "  ";
		format++;
	}
	if (format == 10)
	{
		format = 0;
		cout << endl;
	}
	if(period > 0)
	{
		cout << setw(3) << period << '.' << "  ";
	    format++;
	}
	if (format == 10)
	{
		format = 0;
		cout << endl;
	}
	if(BackSlash > 0)
	{
		cout << setw(3) << BackSlash << '/' << "  ";
		format++;
	}
	if (format == 10)
	{
		format = 0;
		cout << endl;
	}
	if(Zero > 0)
	{
		cout << setw(3) << Zero << '0' << "  ";
		format++;
	}
	if (format == 10)
	{
		format = 0;
		cout << endl;
	}
	if(One > 0)
	{
		cout << setw(3) << One << '1' << "  ";
		format++;
	}
	if (format == 10)
	{
		format = 0;
		cout << endl;
	}
	if(Two > 0)
	{
		cout << setw(3) << Two << '2' << "  ";
		format++;
	}
	if (format == 10)
	{
		format = 0;
		cout << endl;
	}
	if(Three > 0)
	{
		cout << setw(3) << Three << '3' << "  ";
		format++;
	}
	if (format == 10)
	{
		format = 0;
		cout << endl;
	}
	if(Four > 0)
	{
		cout << setw(3) << Four << '4' << "  ";
		format++;
	}
	if (format == 10)
	{
		format = 0;
		cout << endl;
	}
	if(Five > 0)
	{
		cout << setw(3) << Five << '5' << "  ";
		format++;
	}
	if (format == 10)
	{
		format = 0;
		cout << endl;
	}
	if(Six > 0)
	{
		cout << setw(3) << Six << '6' << "  ";
		format++;
	}
	if (format == 10)
	{
		format = 0;
		cout << endl;
	}
	if(Seven > 0)
	{
		cout << setw(3) << Seven << '7' << "  ";
		format++;
	}
	if (format == 10)
	{
		format = 0;
		cout << endl;
	}
	if(Eight > 0)
	{
		cout << setw(3) << Eight << '8' << "  ";
		format++;
	}
	if (format == 10)
	{
		format = 0;
		cout << endl;
	}
	if(Nine > 0)
	{
		cout << setw(3) << Nine << '9' << "  ";
		format++;
	}
	if (format == 10)
	{
		format = 0;
		cout << endl;
	}
	if(colon > 0)
	{
		cout << setw(3) << colon << ':' << "  ";
		format++;
	}
	if (format == 10)
	{
		format = 0;
		cout << endl;
	}
	if(semicolon > 0)
	{
		cout << setw(3) << semicolon << ';' << "  ";
		format++;
	}
	if (format == 10)
	{
		format = 0;
		cout << endl;
	}
	if(LessThan > 0)
	{
		cout << setw(3) << LessThan << '<' << "  ";
		format++;
	}
	if (format == 10)
	{
		format = 0;
		cout << endl;
	}
	if(Equal > 0)
	{
		cout << setw(3) << Equal << '=' << "  ";
		format++;
	}
	if (format == 10)
	{
		format = 0;
		cout << endl;
	}
	if(GreaterThan > 0)
	{
		cout << setw(3) << GreaterThan << '>' << "  ";
		format++;
	}
	if (format == 10)
	{
		format = 0;
		cout << endl;
	}
	if(QuestionMark > 0)
	{
		cout << setw(3) << QuestionMark << '?' << "  ";
		format++;
	}
	if (format == 10)
	{
		format = 0;
		cout << endl;
	}
	if(A > 0)
	{
		cout << setw(3) << A << 'A' << "  ";
		format++;
	}
	if (format == 10)
	{
		format = 0;
		cout << endl;
	}
	if(B > 0)
	{
		cout << setw(3) << B << 'B' << "  ";
		format++;
	}
	if (format == 10)
	{
		format = 0;
		cout << endl;
	}
    if(C > 0)
	{
		cout << setw(3) << C << 'C' << "  ";
		format++;
	}
	if (format == 10)
	{
		format = 0;
		cout << endl;
	}
	if(D > 0)
	{
		cout << setw(3) << D << 'D' << "  ";
		format++;
	}
	if (format == 10)
	{
		format = 0;
		cout << endl;
	}
	if(E > 0)
	{
		cout << setw(3) << E << 'E' << "  ";
		format++;
	}
	if (format == 10)
	{
		format = 0;
		cout << endl;
	}
	if(F > 0)
	{
		cout << setw(3) << F << 'F' << "  ";
		format++;
	}
	if (format == 10)
	{
		format = 0;
		cout << endl;
	}
	if(G > 0)
	{
		cout << setw(3) << G << 'G' << "  ";
		format++;
	}
	if (format == 10)
	{
		format = 0;
		cout << endl;
	}
	if(H > 0)
	{
		cout << setw(3) << H << 'H' << "  ";
		format++;
	}
	if (format == 10)
	{
		format = 0;
		cout << endl;
	}
	if(I > 0)
	{
		cout << setw(3) << I << 'I' << "  ";
	    format++;
	}
	if (format == 10)
	{
		format = 0;
		cout << endl;
	}
	if(J > 0)
	{
		cout << setw(3) << J << 'J' << "  ";
		format++;
	}
	if (format == 10)
	{
		format = 0;
		cout << endl;
	}
	if(K > 0)
	{
		cout << setw(3) << K << 'K' << "  ";
		format++;
	}
	
	if (format == 10)
	{
		format = 0;
		cout << endl;
	}
	if(L > 0)
	{
		cout << setw(3) << L << 'L' << "  " ;
		format++;
	}
	if (format == 10)
	{
		format = 0;
		cout << endl;
	}
	if(M > 0)
	{
		cout << setw(3) << M << 'M' << "  ";
		format++;
	}

	if (format == 10)
	{
		format = 0;
		cout << endl;
	}
	if(N > 0)
	{
		cout << setw(3) << N << 'N' << "  ";
		format++;
	}
	if (format == 10)
	{
		format = 0;
		cout << endl;
	}
	if(O > 0)
	{
		cout << setw(3) << O << 'O' << "  ";
		format++;
	}
	if (format == 10)
	{
		format = 0;
		cout << endl;
	}
	if(P > 0)
	{
		cout << setw(3) << P << 'P' << "  ";
		format++;
	}
	if (format == 10)
	{
		format = 0;
		cout << endl;
	}
	if(Q > 0)
	{
		cout << setw(3) << Q << 'Q' << "  ";
		format++;
	}
	if (format == 10)
	{
		format = 0;
		cout << endl;
	}
	if(R > 0)
	{
		cout << setw(3)<< R << 'R' << "  ";
		format++;
	}
	if (format == 10)
	{
		format = 0;
		cout << endl;
	}
	if(S > 0)
	{
		cout << setw(3) << S << 'S' << "  ";
		format++;
	}
	if (format == 10)
	{
		format = 0;
		cout << endl;
	}
	if(T > 0)
	{
		cout << " "  << T << 'T' << "  ";
		format++;
	}
	if (format == 10)
	{
		format = 0;
		cout << endl;
	}
	if(U > 0)
	{
		cout << setw(3) << U << 'U' << "  ";
		format++;
	}
	if (format == 10)
	{
		format = 0;
		cout << endl;
	}
	if(V > 0)
	{
		cout << setw(3) << V << 'V' << "  ";
		format++;
	}
	if (format == 10)
	{
		format = 0;
		cout << endl;
	}
	if(W > 0)
	{
		cout << setw(3)<< W << 'W' << "  ";
		format++;
	}
	if (format == 10)
	{
		format = 0;
		cout << endl;
	}
	if(X > 0)
	{
		cout << setw(3)<< X << 'X' << "  ";
		format++;
	}
	if (format == 10)
	{
		format = 0;
		cout << endl;
	}
	if(Y > 0)
	{
		cout << setw(3) << Y << 'Y' << "  ";
		format++;
	}
	if (format == 10)
	{
		format = 0;
		cout << endl;
	}
	if(Z > 0)
	{
		cout << setw(3) << Z << 'Z' << "  ";
		format++;
	}
	if (format == 10)
	{
		format = 0;
		cout << endl;
	}
	if(LeftBracket > 0)
	{
		cout << setw(3) << LeftBracket << '[' << "  ";
		format++;
	}
	if (format == 10)
	{
		format = 0;
		cout << endl;
	}
	if(FrontSlash > 0)
	{
		cout << setw(3) << FrontSlash << '\\' << "  ";
		format++;
	}
	if (format == 10)
	{
		format = 0;
		cout << endl;
	}
	if(RightBracket > 0)
	{
		cout << setw(3) << RightBracket << ']' << "  ";
		format++;
	}
	if (format == 10)
	{
		format = 0;
		cout << endl;
	}
	if(UnderScore > 0)
	{
		cout << setw(3)<< UnderScore << '_' << "  ";
		format++;
	}
	if(format == 10)
	{
		format = 0;
		cout << endl;
	}
	if(a > 0)
	{
		cout << setw(3) << a << 'a' << "  ";
		format++;
	}
	if (format == 10)
	{
		format = 0;
		cout << endl;
	}
	if(b > 0)
	{
		cout << setw(3) << b << 'b' << "  ";
		format++;
	}
	if (format == 10)
	{
		format = 0;
		cout << endl;
	}
	if(c > 0)
	{
		cout << setw(3) << c << 'c' << "  ";
		format++;
	}
	if (format == 10)
	{
		format = 0;
		cout << endl;
	}
	if(d > 0)
	{
		cout << setw(3) << d << 'd' << "  ";
		format++;
	}
	if (format == 10)
	{
		format = 0;
		cout << endl;
	}
	if(e > 0)
	{
		cout << setw(3) << e << 'e' << "  ";
		format++;
	}
	if (format == 10)
	{
		format = 0;
		cout << endl;
	}
	if(f > 0)
	{
		cout << setw(3) << f << 'f' << "  ";
		format++;
	}
	if (format == 10)
	{
		format = 0;
		cout << endl;
	}
	if(g > 0)
	{
		cout << setw(3) << g << 'g' << "  ";
		format++;
	}
	if (format == 10)
	{
		format = 0;
		cout << endl;
	}
	if(h > 0)
	{
		cout << setw(3) << h << 'h' << "  ";
		format++;
	}
	if (format == 10)
	{
		format = 0;
		cout << endl;
	}
	if(i > 0)
	{
		cout << setw(3) << i << 'i' << "  ";
		format++;
	}
	if (format == 10)
	{
		format = 0;
		cout << endl;
	}
	if(j > 0)
	{
		cout << setw(3) << j << 'j' << "  ";
		format++;
	}
	if (format == 10)
	{
		format = 0;
		cout << endl;
	}
	if(k > 0)
	{
		cout << setw(3) << k << 'k' << "  ";
		format++;
	}
	if (format == 10)
	{
		format = 0;
		cout << endl;
	}
	if(l > 0)
	{
		cout << setw(3) << l << 'l' << "  ";
		format++;
	}
	if (format == 10)
	{
		format = 0;
		cout << endl;
	}
	if(m > 0)
	{
		cout << setw(3) << m << 'm' << "  ";
		format++;
	}
	if (format == 10)
	{
		format = 0;
		cout << endl;
	}
	if(n > 0)
	{
		cout << setw(3) << n << 'n' << "  ";
		format++;
	}
	if (format == 10)
	{
		format = 0;
		cout << endl;
	}
	if(o > 0)
	{
		cout << setw(3) << o << 'o' << "  ";
		format++;
	}
	if (format == 10)
	{
		format = 0;
		cout << endl;
	}
	if(p > 0)
	{
	cout << setw(3) << p << 'p' << "  ";
		format++;
	}
	if (format == 10)
	{
		format = 0;
		cout << endl;
	}
	if(q > 0)
	{
		cout << setw(3) << q << 'q' << "  ";
		format++;
	}
	if (format == 10)
	{
		format = 0;
		cout << endl;
	}
	if(r > 0)
	{
		cout << setw(3) << r << 'r' << "  ";
		format++;
	}
	if (format == 10)
	{
		format = 0;
		cout << endl;
	}
	if(s > 0)
	{
		cout << setw(3) << s << 's' << "  ";
		format++;
	}
	if (format == 10)
	{
		format = 0;
		cout << endl;
	}
	if(t > 0)
	{
		cout << setw(3) << t << 't' << "  ";
		format++;
	}
	if (format == 10)
	{
		format = 0;
		cout << endl;
	}
	if(u > 0)
	{
		cout << setw(3)  << u << 'u' << "  ";
		format++;
	}
	if (format == 10)
	{
		format = 0;
		cout << endl;
	}
	if(v > 0)
	{
		cout << setw(3) << v << 'v' << "  ";
		format++;
	}
	if (format == 10)
	{
		format = 0;
		cout << endl;
	}
	if(w > 0)
	{
		cout << setw(3) << w << 'w' << "  ";
		format++;
	}
	if (format == 10)
	{
		format = 0;
		cout << endl;
	}
	if(x > 0)
	{
		cout << setw(3) << x << 'x' << "  ";
		format++;
	}
	if (format == 10)
	{
		format = 0;
		cout << endl;
	}
	if(y > 0)
	{
		cout << setw(3) << y << 'y'<< "  ";
		format++;
	}
	if (format == 10)
	{
		format = 0;
		cout << endl;
	}
	if(z > 0)
	{
		cout << setw(3) << z << 'z' << "  ";
		format++;
	}
	if (format == 10)
	{
		format = 0;
		cout << endl;
	}
	if(LeftFlow > 0)
	{
		cout << setw(3) << LeftFlow << '{' << "  ";
		format++;
	}
	if (format == 10)
	{
		format = 0;
		cout << endl;
	}
	if(StraightLine > 0)
	{
		cout << setw(3) << StraightLine << '|' << "  ";
		format++;
	}
	if (format == 10)
	{
		format = 0;
		cout << endl;
	}
	if(RightFlow > 0)
	{
		cout << setw(3) << RightFlow << '}'<< "  ";
		format++;
	}
	if (format == 10)
	{
		format = 0;
		cout << endl;
	}
	
	xtimes++;
}
	
	//-| Hash Value equation

	hashValue = (exclamationMark * 33) + (QuotaionMarks * 34) + (HashTag * 35) + (DollarSign * 36) + (dash * 45) + (period * 46) 
				+ (colon * 58) + (semicolon * 59) + (QuestionMark * 63) + (A * 65) + (B * 66) + (C * 67) + (D * 68)
		        + (E * 69) + (F * 70) + (G * 71) + (H * 72) + (I * 73) + (J * 74) + (K * 75) + (L * 76) + (M * 77) 
				+ (N * 78) + (O * 79) + (P * 80) + (Q * 81) + (R * 82) + (S * 83)
		        + (T * 84) + (U * 85) + (V * 86) + (W * 87) + (X * 88) + (Y * 89) + (Z * 90) + (a * 97) 
				+ (b * 98) + (c * 99) + (d * 100) + (e * 101) + (f * 102) + (g * 103) + (h * 104) 
				+ (i * 105) + (j * 106) + (k * 107) + (l * 108) + (m * 109) + (n * 110) + (o * 111) + (p * 112) 
				+ (q * 113) + (r * 114) + (s * 115) + (t * 116) + (u * 117) + (v * 118) + (w * 119)
		        + (x * 120) + (y * 121) + (z * 122) + (Percent * 37) + (And * 38) + (Apos * 39) + (LeftParen * 40) 
			    + (RightParen * 41) + (Mult * 42) + (BackSlash * 47) + (Zero * 48) + (One * 49) 
				+ (Two * 50) + (Three * 51) + (Four * 52) + (Five * 53) + (Six * 54) + (Seven * 55)
	            + (Eight * 56) + (Nine * 57) + (LessThan * 60) + (Equal * 61) + (GreaterThan * 62) + (UnderScore * 95)
		        + (StraightLine * 124) + (LeftBracket * 91) + (FrontSlash * 92) + (RightBracket * 93)
		        + (LeftFlow * 123) + (RightFlow * 125) + (Plus * 43) + (comma * 44);
		
	//-| Output Hash Value
	cout << endl << endl << inFName << " " << "HASH VALUE = " << hashValue << endl;
	
	
   //-| ----------------------------------------------------------------------
   //-| Print the copyright notice declaring authorship.
   //-| ----------------------------------------------------------------------
   cout << endl << "(c) 2017, $stud" << endl << endl; 
	
   return 0;

}//main
