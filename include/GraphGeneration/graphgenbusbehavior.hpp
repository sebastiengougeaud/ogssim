/*
 * Copyright UVSQ - CEA/DAM/DIF (2016)
 * contributeur : Sebastien GOUGEAUD	sebastien.gougeaud@uvsq.fr
 *                Soraya ZERTAL			soraya.zertal@uvsq.fr
 *
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 3 of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301 USA
 *
 * ---------------------------------------
 */

/**
 * @file	graphgenbusbehavior.hpp
 * @brief	Graph generation mechanism: bus behavior (utilization rate).
 */

#ifndef __OGSS_GRAPHGENBUSBEHAVIOR_HPP__
#define __OGSS_GRAPHGENBUSBEHAVIOR_HPP__

#include "GraphGeneration/graphgeneration.hpp"

class GraphGenBusBehavior: public GraphGeneration {
public:
/**************************************/
/* PUBLIC FUNCTIONS *******************/
/**************************************/
/**
 * Constructor.
 * @param	requests			Request array.
 * @param	architecture		Architecture.
 * @param	outputFilename		Output file.
 * @param	idxVolume			Targeted bus index.
 */
	GraphGenBusBehavior (
		RequestArray			* requestArray,
		Architecture			* architecture,
		const OGSS_String		outputFileName,
		const OGSS_Ushort		idxBus);

/**
 * Destructor.
 */
	~GraphGenBusBehavior ();

/**
 * Main function, create the requested graph.
 */
	void makeGraph ();
	
private:
/**************************************/
/* PRIVATE FUNCTIONS ******************/
/**************************************/

/**************************************/
/* ATTRIBUTES *************************/
/**************************************/
	OGSS_Ushort					m_idxBus;				/*!< Targeted bus
															 index. */
};

#endif