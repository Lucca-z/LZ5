//****************************************************************************************************
//* genoma.h                                                                                         *
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

namespace simulation{

/* A estrutura InfoGenoma tem como objetivo armazenar informaÁ„o que È comum ao genoma de todos os indivÌduos, de forma que o genoma desses possam ser construÌdos por meio de ponteiros para os elementos dessa estrutura.*/
  struct InfoGenoma{
    LocoQ locoInfo[3];
    LocoM marcInfo[3];
  }
}

#endif
