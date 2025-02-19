/*
    Copyright (c) 2012 Torbjörn Klatt <opensource@torbjoern-klatt.de>

    Permission is hereby granted, free of charge, to any person
    obtaining a copy of this software and associated documentation
    files (the "Software"), to deal in the Software without
    restriction, including without limitation the rights to use,
    copy, modify, merge, publish, distribute, sublicense, and/or sell
    copies of the Software, and to permit persons to whom the
    Software is furnished to do so, subject to the following
    conditions:

    The above copyright notice and this permission notice shall be
    included in all copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
    EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
    OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
    NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
    HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
    WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
    FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
    OTHER DEALINGS IN THE SOFTWARE.
*/

#include <iostream>
#include "headers/koan_handler.hpp"
#include "headers/all_koans.hpp"

/**
 *
 */
int main()
{
  KoanHandler status;

  // Koan 00: getting started
  Koan00_get_started koan00 = Koan00_get_started( &status );

  // Koan 01: number types
  Koan01_number_types koan01 = Koan01_number_types( &status );

  // Koan 02: character types
  Koan02_character_types koan02 = Koan02_character_types( &status );

  // Koan 03: further types
  Koan03_further_types koan03 = Koan03_further_types( &status );

  // Koan 04: arrays
  Koan04_arrays koan04 = Koan04_arrays( &status );
  
  // Koan 05: pointers
  Koan05_pointers koan05 = Koan05_pointers( &status );

  // Koan 06: files
  Koan06_files koan06 = Koan06_files( &status );
  
  // Koan 10: auto
  Koan10_auto koan10 = Koan10_auto(&status);

  // Koan 11: lambdas
  Koan11_lambdas koan11 = Koan11_lambdas( &status );

  // Koan XX: sample koans
  // KoanXX_sample_koans koanXX = KoanXX_sample_koans( &status );

  // Welcome message
  status.start();

  // The Path of Enlightment
  koan00.run();
  koan01.run();
  koan02.run();
  koan03.run();
  koan04.run();
  koan05.run();
  koan06.run();
  
  koan10.run();
  koan11.run();
  // koanXX.run();

  // Done.
  status.end();
#ifdef WIN32
  // make sure the console display stays on top until user presses a key
  system("pause");
#endif
  return 0;
}

// EOF
