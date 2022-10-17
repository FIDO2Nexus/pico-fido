/*
 * This file is part of the Pico FIDO distribution (https://github.com/polhenarejos/pico-fido).
 * Copyright (c) 2022 Pol Henarejos.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, version 3.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _FILES_H_
#define _FILES_H_

#include "file.h"

#define EF_KEY_DEV      0xCC00
#define EF_KEY_DEV_ENC  0xCC01
#define EF_EE_DEV       0xCE00
#define EF_COUNTER      0xC000
#define EF_PIN          0x1080
#define EF_AUTHTOKEN    0x1090
#define EF_CRED         0xCF00 // Creds at 0xCF00 - 0xCFFF
#define EF_RP           0xD000 // RPs at 0xD000 - 0xD0FF

extern file_t *ef_keydev;
extern file_t *ef_certdev;
extern file_t *ef_counter;
extern file_t *ef_pin;
extern file_t *ef_authtoken;

#endif //_FILES_H_
