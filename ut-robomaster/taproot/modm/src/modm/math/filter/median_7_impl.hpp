/*
 * Copyright (c) 2009, Martin Rosekeit
 * Copyright (c) 2009-2010, Fabian Greif
 * Copyright (c) 2012, Niklas Hauser
 *
 * This file is part of the modm project.
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 */
// ----------------------------------------------------------------------------

namespace modm
{
	namespace filter
	{
		template <typename T>
		class Median<T, 7>
		{
		public:
			Median(const T& initialValue = 0);

			void
			append(const T& input);

			void
			update();

			const T
			getValue() const;

		private:
			uint_fast8_t index;
			T buffer[7];
			T sorted[7];
		};
	}
}

// ----------------------------------------------------------------------------
template <typename T>
modm::filter::Median<T, 7>::Median(const T& initialValue) :
	index(0)
{
	for (uint_fast8_t i = 0; i < 7; ++i) {
		buffer[i] = initialValue;
		sorted[i] = initialValue;
	}
}

template <typename T>
void
modm::filter::Median<T, 7>::append(const T& input)
{
	// Remove the old value from the sorted set and replace it with the
	// new input. This way the array remains mostly sorted.
	T valueToRemove = this->buffer[index];
	for (uint_fast8_t i = 0; i < 7; ++i)
	{
		if (this->sorted[i] == valueToRemove) {
			this->sorted[i] = input;
			break;
		}
	}

	this->buffer[index] = input;
	if (++index >= 7) {
		index = 0;
	}
}

template <typename T>
void
modm::filter::Median<T, 7>::update()
{
	MODM_MEDIAN_SORT(sorted[0], sorted[5]);
	MODM_MEDIAN_SORT(sorted[0], sorted[3]);
	MODM_MEDIAN_SORT(sorted[1], sorted[6]);
	MODM_MEDIAN_SORT(sorted[2], sorted[4]);
	MODM_MEDIAN_SORT(sorted[0], sorted[1]);
	MODM_MEDIAN_SORT(sorted[3], sorted[5]);
	MODM_MEDIAN_SORT(sorted[2], sorted[6]);
	MODM_MEDIAN_SORT(sorted[2], sorted[3]);
	MODM_MEDIAN_SORT(sorted[3], sorted[6]);
	MODM_MEDIAN_SORT(sorted[4], sorted[5]);
	MODM_MEDIAN_SORT(sorted[1], sorted[4]);
	MODM_MEDIAN_SORT(sorted[1], sorted[3]);
	MODM_MEDIAN_SORT(sorted[3], sorted[4]);
}

template <typename T>
const T
modm::filter::Median<T, 7>::getValue() const
{
	return sorted[3];
}
