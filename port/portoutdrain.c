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
#include <termios.h>

int portoutdrain_(port)
int *port;
/* portoutdrain waits for the output queue to drain for this port */
{
  if(0!=tcdrain( *port))
    return(-1);

  return 0;
}
