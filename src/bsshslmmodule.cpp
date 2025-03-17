/*
 *  bsshslmmodule.cpp
 *
 *  This file is part of NEST.
 *
 *  Copyright (C) 2004 The NEST Initiative
 *
 *  NEST is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  NEST is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with NEST.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

// Include headers with your own stuff
#include "eprop_iaf_adapt_bsshslm_2020.h"
#include "eprop_readout_bsshslm_2020.h"
#include "eprop_iaf_bsshslm_2020.h"
#include "eprop_learning_signal_connection_bsshslm_2020.h"
#include "eprop_synapse_bsshslm_2020.h"

// Includes from NEST
#include "nest_extension_interface.h"

namespace bsshslm
{
  class BsshslmModule : public nest::NESTExtensionInterface
  {
  public:
    BsshslmModule() {}
    virtual ~BsshslmModule() {}

    void initialize() override;
  };
}

// Define module instance outside of namespace to avoid name-mangling problems
bsshslm::BsshslmModule bsshslmmodule_LTX_module;

void bsshslm::BsshslmModule::initialize()
{
  register_eprop_iaf_bsshslm_2020( "eprop_iaf_bsshslm_2020" );
  register_eprop_iaf_adapt_bsshslm_2020( "eprop_iaf_adapt_bsshslm_2020" );
  register_eprop_readout_bsshslm_2020( "eprop_readout_bsshslm_2020" );

  register_eprop_synapse_bsshslm_2020( "eprop_synapse_bsshslm_2020" );
  register_eprop_learning_signal_connection_bsshslm_2020( "eprop_learning_signal_connection_bsshslm_2020" );
}

