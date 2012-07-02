/*
    Copyright (C) 2012  Intel Corporation

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public
    License as published by the Free Software Foundation; either
    version 2.1 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public
    License along with this library; if not, write to the Free Software
    Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
*/


#ifndef ENGINESPEEDPROPERTY_H
#define ENGINESPEEDPROPERTY_H

#include "abstractproperty.h"


class EngineSpeedProperty : public AbstractProperty
{

public:

	operator uint16_t()
	{
		return value();
	}

	EngineSpeedProperty & operator = (uint16_t const &v)
	{
		setValue(v);
		return *this;
	}

	void setValue(uint16_t v);
	uint16_t value() { return AbstractProperty::value<uint16_t>(); }
	virtual void fromGVariant(GVariant* value);
	virtual GVariant* toGVariant();
	EngineSpeedProperty();

};

#endif // ENGINESPEEDPROPERTY_H