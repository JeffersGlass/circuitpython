/*
 * This file is part of the Micro Python project, http://micropython.org/
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2017 Scott Shawcroft for Adafruit Industries
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef MICROPY_INCLUDED_SHARED_BINDINGS_MEMORYMAP_ADDRESSRANGE_H
#define MICROPY_INCLUDED_SHARED_BINDINGS_MEMORYMAP_ADDRESSRANGE_H

#include "common-hal/memorymap/AddressRange.h"

extern const mp_obj_type_t memorymap_addressrange_type;

void common_hal_memorymap_addressrange_construct(memorymap_addressrange_obj_t *self, uint8_t *start_address, size_t length);

size_t common_hal_memorymap_addressrange_get_length(const memorymap_addressrange_obj_t *self);

void common_hal_memorymap_addressrange_set_bytes(const memorymap_addressrange_obj_t *self,
    size_t start_index, uint8_t *values, size_t len);

// len and values are intentionally swapped to signify values is an output and
// also leverage the compiler to validate uses are expected.
void common_hal_memorymap_addressrange_get_bytes(const memorymap_addressrange_obj_t *self,
    size_t start_index, size_t len, uint8_t *values);

#endif  // MICROPY_INCLUDED_SHARED_BINDINGS_MEMORYMAP_ADDRESSRANGE_H
