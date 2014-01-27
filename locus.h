//****************************************************************************************************
//* locus.h                                                                                          *
//*                                                                                                  *
//* Copyright (c) 2008 LuCCA-Z (Laborat√≥rio de Computa√ß√£o Cient√≠fica Aplicada √† Zootecnia),     *
//* Rodovia Comandante Jo√£o Ribeiro de Barros (SP 294), km 651. UNESP,                              *
//* Dracena, S√£o Paulo, Brazil, 17900-000                                                           *
//*                                                                                                  *
//* This file is part of LZ5.                                                                        *
//*                                                                                                  *
//* LZ5 is free software: you can redistribute it and/or modify it under the terms of the            *
//* GNU General Public License as published by the Free Software Foundation, either version 3        *
//* of the License, or (at your option) any later version.                                           *
//*                                                                                                  *
//* LZ5 is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without         *
//* even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See            *
//* the GNU General Public License for more details. You should have received a copy of the          *
//* GNU General Public License along with LZ5. If not, see <http://www.gnu.org/licenses/>.           *
//*                                                                                                  *
//* Acknowledgements                                                                                 *
//*                                                                                                  *
//* To Dr. Rohan L. Fernando from Iowa State University and Dr. Ricardo Frederico Euclydes           *
//* from Vicosa Federal University, who had great influence in ideas behind the LZ5's development.   *
//*                                                                                                  *
//****************************************************************************************************

#ifndef _LOCUS_H_
#define _LOCUS_H_

/* As classes LocusQ e LocusM tÍm como objetivo simular locos de caracterÌsticas quantitativas (QTLs) e locos marcadores respectivamente.*/

//#include "alelo.h"
//#include<iostream>
//#include<gsl/gsl_rng.h>
//#include<vector>
//using std::vector;

//extern gsl_rng* prand;

namespace simulation{

  /*A classe LocusM representa um loco marcador*/
  class Loco{
  private:
    bool* genotipo[2];                /*!< Armazena o genÛtipo do loco*/
    vector<double> efLoco;            /*!< Armazena valor genÈtico aditivo do loco*/
  public:
    inline Loco():genotipo(true,false),efLoco(0);        
  };
    
}

#endif
