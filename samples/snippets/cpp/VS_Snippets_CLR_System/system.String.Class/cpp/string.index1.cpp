// Index1.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
// <Snippet4>
using namespace System;

void main()
{
   String^ s1 = "This string consists of a single short sentence.";
   int nWords = 0;

   s1 = s1->Trim();      
   for (int ctr = 0; ctr < s1->Length; ctr++) {
         if (Char::IsPunctuation(s1[ctr]) | Char::IsWhiteSpace(s1[ctr]))
            nWords++;              
   }
   Console::WriteLine("The sentence\n   {0}\nhas {1} words.",
                     s1, nWords);           
}
// The example displays the following output: 
//       The sentence 
//          This string consists of a single short sentence. 
//       has 8 words.
// </Snippet4>

