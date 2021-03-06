/**
 * @file
 * @author Nico Wollenzin <nico@wollenzin.de>
 * @version 1.0
 *
 * @section LICENSE
 *
 * Copyright [2014] [Nico Wollenzin]
 *
 * This is free and unencumbered software released into the public domain.
 *
 * Anyone is free to copy, modify, publish, use, compile, sell, or
 * distribute this software, either in source code form or as a compiled
 * binary, for any purpose, commercial or non-commercial, and by any
 * means.
 *
 * In jurisdictions that recognize copyright laws, the author or authors
 * of this software dedicate any and all copyright interest in the
 * software to the public domain. We make this dedication for the benefit
 * of the public at large and to the detriment of our heirs and
 * successors. We intend this dedication to be an overt act of
 * relinquishment in perpetuity of all present and future rights to this
 * software under copyright law.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL THE AUTHORS BE LIABLE FOR ANY CLAIM, DAMAGES OR
 * OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
 * ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 * 
 * For more information, please refer to <http://unlicense.org> 
 *
 * @section DESCRIPTION
 *
 * I want to try out something.
 */

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main ()
{
 /** int a,b,c;

  a=(b=5, cout << b*2 << endl, c=3, c*b);

  cout << a << '\n';

  string mystr ("1204");
  int myint;
  stringstream(mystr) >> myint;
  cout << myint;
*/
  
  int bla[5] = {1,2,3,4,5};

  for (int b: bla) {
   cout << b << endl;
  }
}

