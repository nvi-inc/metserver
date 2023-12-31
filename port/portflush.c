/*
 * Copyright (c) 2020, 2023 NVI, Inc.
 *
 * This file is part of VLBI metserver
 * (see http://github.com/nvi-inc/metserver).
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */
#include <termio.h>
#include <stdio.h>

int portflush_(port)
int *port;

{
  if(ioctl(*port,TCFLSH, 0)==-1)  /* flush the input queue */
    return -1;

  return 0;
}
