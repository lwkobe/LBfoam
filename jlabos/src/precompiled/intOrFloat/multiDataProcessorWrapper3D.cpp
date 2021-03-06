/* This file is part of the Palabos library.
 *
 * Copyright (C) 2011-2017 FlowKit Sarl
 * Route d'Oron 2
 * 1010 Lausanne, Switzerland
 * E-mail contact: contact@flowkit.com
 *
 * The most recent release of Palabos can be downloaded at
 * <http://www.palabos.org/>
 *
 * The library Palabos is free software: you can redistribute it and/or
 * modify it under the terms of the GNU Affero General Public License as
 * published by the Free Software Foundation, either version 3 of the
 * License, or (at your option) any later version.
 *
 * The library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "multiBlock/multiDataProcessorWrapper3D.h"
#include "multiBlock/multiDataProcessorWrapper3D.hh"

namespace plb
{

/* *************** Boxed Data Processor functionals ****************** */

template
void applyProcessingFunctional<PRECOMP_T> (
    BoxProcessingFunctional3D_N<PRECOMP_T>* functional,
    Box3D domain, MultiNTensorField3D<PRECOMP_T>& field );
template
void integrateProcessingFunctional<PRECOMP_T> (
    BoxProcessingFunctional3D_N<PRECOMP_T>* functional,
    Box3D domain, MultiNTensorField3D<PRECOMP_T>& field, plint level );

template
void applyProcessingFunctional<PRECOMP_T> (
    BoxProcessingFunctional3D_S<PRECOMP_T>* functional,
    Box3D domain, MultiScalarField3D<PRECOMP_T>& field );
template
void integrateProcessingFunctional<PRECOMP_T> (
    BoxProcessingFunctional3D_S<PRECOMP_T>* functional,
    Box3D domain, MultiScalarField3D<PRECOMP_T>& field, plint level );

template
void applyProcessingFunctional<PRECOMP_T> (
    MaskedBoxProcessingFunctional3D_N<PRECOMP_T>* functional,
    Box3D domain,
    MultiNTensorField3D<PRECOMP_T>& field,
    MultiNTensorField3D<int>& mask );
template
void integrateProcessingFunctional<PRECOMP_T> (
    MaskedBoxProcessingFunctional3D_N<PRECOMP_T>* functional,
    Box3D domain,
    MultiNTensorField3D<PRECOMP_T>& field,
    MultiNTensorField3D<int>& mask,
    plint level );
template
void applyProcessingFunctional<PRECOMP_T,int> (
    BoxProcessingFunctional3D_NN<PRECOMP_T,int>* functional,
    Box3D domain,
    MultiNTensorField3D<PRECOMP_T>& field1,
    MultiNTensorField3D<int>& field2 );
template
void integrateProcessingFunctional<PRECOMP_T,int> (
    BoxProcessingFunctional3D_NN<PRECOMP_T,int>* functional,
    Box3D domain,
    MultiNTensorField3D<PRECOMP_T>& field1,
    MultiNTensorField3D<int>& field2, plint level );

template
void applyProcessingFunctional<PRECOMP_T,int> (
    BoxProcessingFunctional3D_SS<PRECOMP_T,int>* functional,
    Box3D domain,
    MultiScalarField3D<PRECOMP_T>& field1,
    MultiScalarField3D<int>& field2 );
template
void integrateProcessingFunctional<PRECOMP_T,int> (
    BoxProcessingFunctional3D_SS<PRECOMP_T,int>* functional,
    Box3D domain,
    MultiScalarField3D<PRECOMP_T>& field1,
    MultiScalarField3D<int>& field2, plint level );

template
void applyProcessingFunctional<PRECOMP_T,float> (
    BoxProcessingFunctional3D_NN<PRECOMP_T,float>* functional,
    Box3D domain,
    MultiNTensorField3D<PRECOMP_T>& field1,
    MultiNTensorField3D<float>& field2 );
template
void integrateProcessingFunctional<PRECOMP_T,float> (
    BoxProcessingFunctional3D_NN<PRECOMP_T,float>* functional,
    Box3D domain,
    MultiNTensorField3D<PRECOMP_T>& field1,
    MultiNTensorField3D<float>& field2, plint level );

template
void applyProcessingFunctional<PRECOMP_T,float> (
    BoxProcessingFunctional3D_SS<PRECOMP_T,float>* functional,
    Box3D domain,
    MultiScalarField3D<PRECOMP_T>& field1,
    MultiScalarField3D<float>& field2 );
template
void integrateProcessingFunctional<PRECOMP_T,float> (
    BoxProcessingFunctional3D_SS<PRECOMP_T,float>* functional,
    Box3D domain,
    MultiScalarField3D<PRECOMP_T>& field1,
    MultiScalarField3D<float>& field2, plint level );

template
void applyProcessingFunctional<PRECOMP_T,double> (
    BoxProcessingFunctional3D_NN<PRECOMP_T,double>* functional,
    Box3D domain,
    MultiNTensorField3D<PRECOMP_T>& field1,
    MultiNTensorField3D<double>& field2 );
template
void integrateProcessingFunctional<PRECOMP_T,double> (
    BoxProcessingFunctional3D_NN<PRECOMP_T,double>* functional,
    Box3D domain,
    MultiNTensorField3D<PRECOMP_T>& field1,
    MultiNTensorField3D<double>& field2, plint level );

template
void applyProcessingFunctional<PRECOMP_T,double> (
    BoxProcessingFunctional3D_SS<PRECOMP_T,double>* functional,
    Box3D domain,
    MultiScalarField3D<PRECOMP_T>& field1,
    MultiScalarField3D<double>& field2 );
template
void integrateProcessingFunctional<PRECOMP_T,double> (
    BoxProcessingFunctional3D_SS<PRECOMP_T,double>* functional,
    Box3D domain,
    MultiScalarField3D<PRECOMP_T>& field1,
    MultiScalarField3D<double>& field2, plint level );

template
void applyProcessingFunctional<PRECOMP_T,float> (
    MaskedBoxProcessingFunctional3D_NN<PRECOMP_T,float>* functional,
    Box3D domain,
    MultiNTensorField3D<PRECOMP_T>& field1,
    MultiNTensorField3D<float>& field2,
    MultiNTensorField3D<int>& mask );
template
void applyProcessingFunctional<PRECOMP_T,double> (
    MaskedBoxProcessingFunctional3D_NN<PRECOMP_T,double>* functional,
    Box3D domain,
    MultiNTensorField3D<PRECOMP_T>& field1,
    MultiNTensorField3D<double>& field2,
    MultiNTensorField3D<int>& mask );
template
void applyProcessingFunctional<PRECOMP_T,int> (
    MaskedBoxProcessingFunctional3D_NN<PRECOMP_T,int>* functional,
    Box3D domain,
    MultiNTensorField3D<PRECOMP_T>& field1,
    MultiNTensorField3D<int>& field2,
    MultiNTensorField3D<int>& mask );
template
void integrateProcessingFunctional<PRECOMP_T,PRECOMP_T> (
    MaskedBoxProcessingFunctional3D_NN<PRECOMP_T,PRECOMP_T>* functional,
    Box3D domain,
    MultiNTensorField3D<PRECOMP_T>& field1,
    MultiNTensorField3D<PRECOMP_T>& field2,
    MultiNTensorField3D<int>& mask,
    plint level );

template
void applyProcessingFunctional<PRECOMP_T> (
    NTensorFieldBoxProcessingFunctional3D<PRECOMP_T>* functional,
    Box3D domain, std::vector<MultiNTensorField3D<PRECOMP_T>*> fields );
template
void integrateProcessingFunctional<PRECOMP_T> (
    NTensorFieldBoxProcessingFunctional3D<PRECOMP_T>* functional,
    Box3D domain, std::vector<MultiNTensorField3D<PRECOMP_T>*> fields, plint level );

template
void applyProcessingFunctional<PRECOMP_T> (
    ScalarFieldBoxProcessingFunctional3D<PRECOMP_T>* functional,
    Box3D domain, std::vector<MultiScalarField3D<PRECOMP_T>*> fields );
template
void integrateProcessingFunctional<PRECOMP_T> (
    ScalarFieldBoxProcessingFunctional3D<PRECOMP_T>* functional,
    Box3D domain, std::vector<MultiScalarField3D<PRECOMP_T>*> fields, plint level );

template
void applyProcessingFunctional<PRECOMP_T> (
    MaskedNTensorFieldBoxProcessingFunctional3D<PRECOMP_T>* functional,
    Box3D domain,
    std::vector<MultiNTensorField3D<PRECOMP_T>*> fields,
    MultiNTensorField3D<int>& mask);
template
void integrateProcessingFunctional<PRECOMP_T> (
    MaskedNTensorFieldBoxProcessingFunctional3D<PRECOMP_T>* functional,
    Box3D domain, std::vector<MultiNTensorField3D<PRECOMP_T>*> fields,
    MultiNTensorField3D<int>& mask, plint level );

/* *************** Bounded Boxed Data Processor functionals ****************** */

template void applyProcessingFunctional<PRECOMP_T> (
    BoundedBoxProcessingFunctional3D_N<PRECOMP_T>* functional,
    Box3D domain, MultiNTensorField3D<PRECOMP_T>& field, plint boundaryWidth );
template
void integrateProcessingFunctional<PRECOMP_T> (
    BoundedBoxProcessingFunctional3D_N<PRECOMP_T>* functional,
    Box3D domain,
    MultiNTensorField3D<PRECOMP_T>& field, plint boundaryWidth, plint level );

template
void applyProcessingFunctional<PRECOMP_T> (
    BoundedMaskedBoxProcessingFunctional3D_N<PRECOMP_T>* functional,
    Box3D domain,
    MultiNTensorField3D<PRECOMP_T>& field,
    MultiNTensorField3D<int>& mask,
    plint boundaryWidth );
template
void integrateProcessingFunctional<PRECOMP_T> (
    BoundedMaskedBoxProcessingFunctional3D_N<PRECOMP_T>* functional,
    Box3D domain,
    MultiNTensorField3D<PRECOMP_T>& field,
    MultiNTensorField3D<int>& mask,
    plint boundaryWidth, plint level );

template
void applyProcessingFunctional<PRECOMP_T,PRECOMP_T> (
    BoundedBoxProcessingFunctional3D_NN<PRECOMP_T,PRECOMP_T>* functional,
    Box3D domain,
    MultiNTensorField3D<PRECOMP_T>& field1,
    MultiNTensorField3D<PRECOMP_T>& field2,
    plint boundaryWidth );
template
void integrateProcessingFunctional<PRECOMP_T,PRECOMP_T> (
    BoundedBoxProcessingFunctional3D_NN<PRECOMP_T,PRECOMP_T>* functional,
    Box3D domain,
    MultiNTensorField3D<PRECOMP_T>& field1,
    MultiNTensorField3D<PRECOMP_T>& field2,
    plint boundaryWidth, plint level );

template
void applyProcessingFunctional<PRECOMP_T,PRECOMP_T> (
    BoundedMaskedBoxProcessingFunctional3D_NN<PRECOMP_T,PRECOMP_T>* functional,
    Box3D domain,
    MultiNTensorField3D<PRECOMP_T>& field1,
    MultiNTensorField3D<PRECOMP_T>& field2,
    MultiNTensorField3D<int>& mask,
    plint boundaryWidth );
template
void integrateProcessingFunctional<PRECOMP_T,PRECOMP_T> (
    BoundedMaskedBoxProcessingFunctional3D_NN<PRECOMP_T,PRECOMP_T>* functional,
    Box3D domain,
    MultiNTensorField3D<PRECOMP_T>& field1,
    MultiNTensorField3D<PRECOMP_T>& field2,
    MultiNTensorField3D<int>& mask,
    plint boundaryWidth, plint level );

template
void applyProcessingFunctional<PRECOMP_T> (
    BoundedNTensorFieldBoxProcessingFunctional3D<PRECOMP_T>* functional,
    Box3D domain, std::vector<MultiNTensorField3D<PRECOMP_T>*> fields, plint boundaryWidth );
template
void integrateProcessingFunctional<PRECOMP_T> (
    BoundedNTensorFieldBoxProcessingFunctional3D<PRECOMP_T>* functional,
    Box3D domain, std::vector<MultiNTensorField3D<PRECOMP_T>*> fields, plint boundaryWidth, plint level );

}  // namespace plb
