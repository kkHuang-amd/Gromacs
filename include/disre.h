/*
 * $Id$
 * 
 *                This source code is part of
 * 
 *                 G   R   O   M   A   C   S
 * 
 *          GROningen MAchine for Chemical Simulations
 * 
 *                        VERSION 3.0
 * 
 * Copyright (c) 1991-2001
 * BIOSON Research Institute, Dept. of Biophysical Chemistry
 * University of Groningen, The Netherlands
 * 
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 * 
 * If you want to redistribute modifications, please consider that
 * scientific software is very special. Version control is crucial -
 * bugs must be traceable. We will be happy to consider code for
 * inclusion in the official distribution, but derived work must not
 * be called official GROMACS. Details are found in the README & COPYING
 * files - if they are missing, get the official version at www.gromacs.org.
 * 
 * To help us fund GROMACS development, we humbly ask that you cite
 * the papers on the package - you can find them in the top README file.
 * 
 * Do check out http://www.gromacs.org , or mail us at gromacs@gromacs.org .
 * 
 * And Hey:
 * Good ROcking Metal Altar for Chronical Sinners
 */

#ifndef _disre_h
#define _disre_h

static char *SRCID_disre_h = "$Id$";
#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#ifdef HAVE_IDENT
#ident	"@(#) disre.h 1.13 2/2/97"
#endif /* HAVE_IDENT */

#ifdef CPLUSPLUS
extern "C" {
#endif

#include "sysstuff.h"
#include "typedefs.h"

void init_disres(FILE *log,int nbonds,t_inputrec *ir,t_fcdata *fcd);
/* Initiate *fcd data, must be called once, nbonds is the number 
 * of iatoms in the ilist of the idef struct
 */

extern real ta_disres(int nbonds,t_iatom fa[],t_iparams *fp,
		      rvec x[],rvec f[],t_forcerec *fr,t_graph *g,
		      matrix box,real lambda,real *dvdlambda,
		      t_mdatoms *md,int ngrp,real egnb[],real egcoul[],
		      t_fcdata *fcd);
/* Do the actual calculation */

#ifdef CPLUSPLUS
}
#endif

#endif	/* _disre_h */
