/* vim:expandtab:ts=2 sw=2:
*/
/*  Grafx2 - The Ultimate 256-color bitmap paint program

    Copyright 2007 Adrien Destugues
    Copyright 1996-2001 Sunset Design (Guillaume Dorme & Karl Maritaud)

    Grafx2 is free software; you can redistribute it and/or
    modify it under the terms of the GNU General Public License
    as published by the Free Software Foundation; version 2
    of the License.

    Grafx2 is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Grafx2; if not, see <http://www.gnu.org/licenses/>
*/
//////////////////////////////////////////////////////////////////////////////
///@file palette.h
/// Palette screen, and some palette-related high-level functions.
//////////////////////////////////////////////////////////////////////////////

/// Open the palette menu and handles everything inside it.
void Button_Palette(void);
/// Open the secondary palette menu and handles it.
void Button_Secondary_palette(void);

/// Choose the number of graduations for RGB components, from 2 to 256.
void Set_palette_RGB_scale(int);

int Get_palette_RGB_scale(void);

///
/// Scale a component (R, G or B) according to the current RGB graduations.
/// Returns the resulting value, in the [0-255] range.
byte Round_palette_component(byte comp);

/// Put some colors in the clipboard.
/// @param nb_colors Number of colors to push
/// @param colors First color of the input array
void Set_clipboard_colors(int nb_colors, T_Components *colors);

/// Get some RGB colors from clipboard.
/// @param palette Target palette
/// @param start_color  Index of first color to replace
/// @return        Number of colors retrieved (0-256)
int Get_clipboard_colors(T_Palette palette, byte start_color);

