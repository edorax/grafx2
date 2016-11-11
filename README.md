```
   __/_/_/                         __/_/  _/      _/   __/_/
 _/        _/ __/_/   __/_/_/    _/        _/  _/    _/    _/
_/  _/_/  _/_/      _/    _/  _/_/_/_/      _/          _/
_/    _/  _/        _/    _/    _/        _/  _/      _/
 _/_/_/  _/          _/_/_/    _/      _/      _/  _/_/_/_/

GrafX2 - The Ultimate 256-color bitmap paint program
Copyright (C)1996-2001 Sunset Design (G.Dorme & K.Maritaud)
Copyright (C)2007-2012 the Grafx2 Project Team (A.Destugues & Y.Rizoud)
```

-------------------------------------

# ABOUT

GrafX2 is a drawing program dedicated to pixelart and low-color graphics. This
program is dedicated to everybody who knows what a single pixel is. Its layout
is not very different from the famous Deluxe Paint or Brilliance, so it will be
quite easy to handle it if you know at least one of these programs. If you
aren't used to the art of drawing with up to 256 colors, it will be a little
more difficult for you, but you should give it a try (or more, because most of
the power of this program won't show up on the first try). You might
eventually like to draw the oldschool way.

Grafx2 was originally written for MS-DOS. The authors then
released the sourcecode and we've modified it to run on a range of platforms.

# HELP

Remember that right-clicking and left-clicking often have different functions,
even on menu buttons. If you are in trouble when using the program, press `<F1>`
to get contextual help.

# AUTHORS AND SUPPORT

To watch the full credits list, in the program, click '?' then 'Credits'.

Sends greetings and glops to pouet.net : http://pouet.net/prod.php?which=51865

# HISTORY

Short change log:

*    2016            Google Projects was closed down. Fork of the SDL2 branch.
* 10/2012  2.4       Animation
* 04/2011  2.3       Further improvements
* 03/2010  2.2       Layers, Lua scripting
* 09/2009  2.1       GUI improvements and some new features.
* 06/2009  2.0       Completed the features planned by Sunset Design.
* 04/2009  2.0b99.0% Many new features and critical fixes.
* 01/2009  2.0b98.0% Now running Linux, Windows, Mac OS X, BeOS, Haiku, AmigaOS 3.x and 4, MorphOS, SkyOS and gp2x.
* 10/2008  2.0b97.0% Our first public beta release.
* 07/2008            Our first public alpha release, Windows and Linux only
* 04/2007            Start of this project and port to SDL.
*    2001            Sunset Design releases the source under the GNU GPL.
* 12/1999  2.0b96.5% Last release from Sunset Design.
* 11/1996  2.0b90%   First public release, at the Wired'96.
* 09/1995            Project starts.

Check http://pulkomandy.tk/projects/GrafX2/log/ for (very) detailed changelog.
Check http://pulkomandy.tk/projects/GrafX2/wiki/History for an overview of the
new features and bugfixes in each numbered version.

# Grafx2 compilation and installation

## Requirements

* gcc C compiler (other compilers may work, but are not officially supported)
* GNU make (other similar "make" tools may work, but are not supported)
* SDL 2
* SDL2_image library
* libpng (not on macOS)
* FreeType library (optional, for truetype fonts)
* SD2L_ttf library (optional, for truetype fonts)
* Lua library v5.2 (optional, for Lua scripting)

Extra requirements for Windows:

* a POSIX environment: MSYS is fine, maybe Cygwin would work as well.
* use Mingw C compiler instead of gcc

Extra requirements for UNIX/X11 (Linux, FreeBSD, ...):

* pkg-config (optional, for Lua scripting)
* X11 headers (optional, for truetype fonts)

## Instructions

Open a shell/Terminal, enter the directory where you have the project tree, and
type:

    cd src
    make

If all goes well, it should build grafx2 (the main program) in the "bin"
directory.

If you don't have FreeType and SDL2_ttf, type make NOTTF=1 instead. It will
build a version without TrueType support : the Text tool will be limited to
bitmap fonts, proportional fonts with .ttf extension won't be available.

If you don't have lua available, type `make NOLUA=1`. You will not be able to
use lua scripts to generate and alter brush and pictures.

These options can be combined, for example for a build without ttf nor lua type
make NOTTF=1 NOLUA=1


## Build variants

The default compilation is optimized ( -O ), with debugging symbols for GDB.
Compile with OPTIM=0 to disable optimizations, if you have some real debugging
to do.
Compile with OPTIM=3 to use maximum optimizations.
Type "make release" if you don't want the debugging symbols.

Compile with USE_JOYSTICK=1 to enable joystick input : Only useful for
developers, to check the input code for platforms that don't have a mouse.

Compile with NOLAYERS=1 to make a version of Grafx2 that can't display
several layers at a time: You will still be able to edit layered images,
but you will only see one layer at a time. This option is designed for slow
platforms, as it makes the program faster.

## Other compilation targets

    make clean

Erases all generated files (intermediate objects, and executable)

    make depend

Re-compute the dependencies (makefile.dep).

Other compilation targets (make version, make ziprelease) require Subversion
and are only useful to contributors to the svn repository of Grafx2.

## System specifics

### Unix/Linux

    sudo make install

This copies the executable and data files in your system, in the /usr/local/bin
and /usr/local/share directories. You then no longer need the compilation
directory.

    sudo make uninstall

Removes the copied files from your system, keeps your configuration.

For both options, you can specify prefix=something to choose the target
directory root: For example prefix=/usr or prefix=./test-install

### macOS

* Install the XCode command line compiler with `xcode-select --install`
* Install the rest of the dependencies with Homebrew
* Compile with: `cd src; make`

### Windows

It is possible to compile from linux, with this command :
	make WIN32CROSS=1

You will need the mingw cross-compiler, and all the libraries listed above.

Here is a list of the resources used to build the Windows version:

4DOS
  with an alias make=mingw32-make

MSYS
  installed in C:\MSYS

Mingw
  installed in C:\MSYS\mingw

SDL2:
  Uncompress in temporary directory
  make
  make install (no effect?)
  Headers are in /usr/mingw/include/SDL, copy them to /usr/include/SDL

Zlib:
  http://gnuwin32.sourceforge.net/downlinks/zlib.php
  zlib-1.2.3.exe
  Install in c:\msys\mingw

Libpng
  Requires: Zlib
  http://www.mirrorservice.org/sites/download.sourceforge.net/pub/sourceforge/l/li/libpng/
  libpng-1.6.tar.gz
  Uncompress in temporary directory
  ./configure
  make
  make install (long)
  Files created in /usr/local/include and /usr/local/lib ....

libjpeg (optional - improves SDL_image with JPEG reading)
  http://www.mirrorservice.org/sites/download.sourceforge.net/pub/sourceforge/l/project/li/libjpeg/libjpeg/
  jpegsr6.zip
  Uncompress in temporary directory
  ./configure --enable-shared
  make
  (make install doesn't work. Copy jpeglib.h, jmorecfg.h, jconfig.h in include, and libjpeg.a in lib)

libtiff (optional - improves SDL_image with TIFF reading)
  ftp://ftp.sgi.com/graphics/tiff/
  tiff-v3.4-tar.gz
  Uncompress in temporary directory
  ./configure i686-pc-mingw32
  make
  Don't use 'make install', copy tiff.h libtiff.a manually instead.

SDL2_image:
  Requires: Libpng
  Requires optionally: libtiff
  Requires optionally: libjpeg
  http://www.mirrorservice.org/sites/download.sourceforge.net/pub/sourceforge/l/li/libsdl/
  Uncompress in temporary directory
  ./configure
  Check in the messages that png worked
  Optionally check if jpeg worked too
  Optionally check if tiff worked too
  make
  make install prefix=/usr/mingw

FreeType:
  http://www.mirrorservice.org/sites/download.sourceforge.net/pub/sourceforge/m/mi/mingw-cross/
  mingw-freetype-2.3.7-2
  Uncompress in c:/mwsys/mingw

SDL2_ttf:
  No mingw package
  http://www.mirrorservice.org/sites/download.sourceforge.net/pub/sourceforge/l/li/libsdl/

Lua:
  (optional)
  http://www.lua.org/ftp/lua-5.2.1.tar.gz
  Uncompress in temporary directory
  Use sh shell
  make mingw
  (make install doesn't work, even with prefix)
  Copy luaconf.h, lualib.h, lua.h, lauxlib.h to c:\msys\mingw\include
  Copy liblua.a to c:\msys\mingw\lib
  Copy lua51.dll to c:\msys\mingw\bin

# Technical documentation for GrafX 2.00 - Version 1.08 (10/05/1997)

The following text deals with:

  * the PKM picture format
  * the values to send to the CRTC to access all the amazing video modes available in GrafX 2.00

## The PKM picture format - by Karl Maritaud

    First of all, I'd like to say that I made this file format some years ago
  when I didn't knew how to load any good format (eg. GIF) and wanted to have
  my own format.
    PKM format was designed to be very simple, easy to encode and decode. Its
  header is very simple (short) and evolutive.
    The only real default I can find in this format is that you can only save
  256-color pictures.
    I know that you will think:
      "Oh no just another fucking format! I'll never use it! Its compression
      is too poor and I prefer GIF!".
    And I'll answer:
      "Yeah! You're right. But if you dunno how to load GIF and want a simple
      format with a quite good compression rate (on simple pictures at least),
      it could be useful."

  So, here comes the format documentation...



## The HEADER

  The header is the following 780-byte-structure. (Don't worry about the size.
  That's just because the palette is considered as a part of the header).

```
  ��������������������������������������������������������������������������Ŀ
  � Pos � Field     � Type � Size � Description                              �
  ��������������������������������������������������������������������������͵
  �   0 � Signature � char �   3  � Constant string "PKM" (with NO size      �
  �     �           �      �      � delimitation '\0' or so...)              �
  ��������������������������������������������������������������������������Ĵ
  �   3 � Version   � byte �   1  � For the moment, it can take only the     �
  �     �           �      �      � value 0.                                 �
  �     �           �      �      � Other packing methods may change this    �
  �     �           �      �      � field but there is only one for now...   �
  ��������������������������������������������������������������������������Ĵ
  �   4 � Pack_byte � byte �   1  � Value of the recognition byte for color  �
  �     �           �      �      � repetitions that are coded on 1 byte.    �
  �     �           �      �      � (See the picture packing section for a   �
  �     �           �      �      � better explanation)                      �
  ��������������������������������������������������������������������������Ĵ
  �   5 � Pack_word � byte �   1  � Value of the recognition byte for color  �
  �     �           �      �      � repetitions that are coded on 2 bytes.   �
  �     �           �      �      � (See the picture packing section...)     �
  ��������������������������������������������������������������������������Ĵ
  �   6 � Width     � word �   2  � Picture width  (in pixels)               �
  ��������������������������������������������������������������������������Ĵ
  �   8 � Height    � word �   2  � Picture height (in pixels)               �
  ��������������������������������������������������������������������������Ĵ
  �  10 � Palette   � byte � 768  � RGB palette (RGB RGB ... 256 times) with �
  �     �           �      �      � values from 0 to 63. I know the standard �
  �     �           �      �      � in picture files is 0 to 255 but I find  �
  �     �           �      �      � it stupid! It is really easier to send   �
  �     �           �      �      � the whole palette in port 3C9h with a    �
  �     �           �      �      � REP OUTSB without palette convertion.    �
  ��������������������������������������������������������������������������Ĵ
  � 778 � PH_size   � word �   2  � Post-header size. This is the number of  �
  �     �           �      �      � bytes between the header and the picture �
  �     �           �      �      � data. This value can be equal to 0.      �
  ����������������������������������������������������������������������������
```

  Data of type "word" are stored with Intel conventions: lower byte first.



## The POST-HEADER

  The post-header has a variable size. It was designed to support new features
for this file format without changing the whole format.

  It consists in field identifiers followed by their size and their value.
  A field identifier is coded with 1 byte and a field size also.


  These field identifiers are:  (this list may be updated...)
  ����������������������������

    0 : Comment on the picture
    1 : Original screen dimensions
    2 : Back color (transparent color)

  If you encounter a field that you don't know just jump over it. But if a
  field tells you to jump to a position that is over the beginning of the
  picture data, there is an error in the file.


  The fields:
  �����������

    * Comment:

      With this field, artists will be able to comment their pictures.
      Note that GrafX 2 has a comment size limit of 32 chars. But you can
      comment a picture with up to 255 chars if you make your own viewer
      since GrafX 2 will just ignore extra characters.

      Example: [0],[16],[Picture by X-Man]
      This sequence means:
        - the field is a comment
        - the comment takes 16 characters (there is no end-of-string character
          since you know its size)
        - the comment is "Picture by X-Man"

    * Original screen dimensions:

      Since GrafX 2 supplies a huge range of resolutions, it seemed convenient
      to add a field that indicates what were the original screen dimensions.

      Example: [1],[4],[320],[256]
      This sequence means:
        - the field is a screen dimensions descriptor
        - the dimensions are 2 words (so this value must be always equal to 4)
        - the original screen width was 320 pixels
        - the original screen height was 256 pixels

      Note that words stored in fields are written Intel-like. The 90% BETA
      version did not respect this norm. I'm really sorry about this. This is
      not very serious but pictures saved with version 90% and loaded with a
      latest version (91% and more) won't set the right resolution.

    * Back color:

      Saving the back color (transparent color) is especially useful when you
      want to save a brush.
      The size of this field is 1 byte (index of the color between 0 and 255).

      Example: [2],[1],[255]
      This sequence means:
        - the field is a screen dimensions descriptor
        - the value takes 1 byte
        - the transparent color is 255


## The PICTURE PACKING METHOD

  The PKM compression method is some sort of Run-Length-Compression which is
very efficient on pictures with long horizontal color repetitions.
  Actually, the compression is efficient if there are often more than 3 times
the same color consecutively.

  I think that it would be better to give you the algorithm instead of swim-
ming in incomprehensible explanations.


  BEGIN
    /*
      functions:
        Read_byte(File)       reads and returns 1 byte from File
        Draw_pixel(X,Y,Color) draws a pixel of a certain Color at pos. (X,Y)
        File_length(File)     returns the total length in bytes of File

      variables:
        type of Image_size          is dword
        type of Data_size           is dword
        type of Packed_data_counter is dword
        type of Pixels_counter      is dword
        type of Color               is byte
        type of Byte_read           is byte
        type of Word_read           is word
        type of Counter             is word
        type of File                is <binary file>
    */

    /* At this point you've already read the header and post-header. */

    Image_size          <- Header.Width * Header.Height
    Data_size           <- File_length(File) - (780+Header.PH_size)

    Packed_data_counter <- 0
    Pixels_counter      <- 0

    /* Depacking loop: */
    WHILE ((Pixels_counter<Image_size) AND (Packed_data_counter<Data_size)) DO
    {
      Byte_read <- Read_byte(File)

      /* If it is not a packet recognizer, it's a raw pixel */
      IF ((Byte_read<>Header.Pack_byte) AND (Byte_read<>Header.Pack_word))
      THEN
      {
        Draw_pixel(Pixels_counter MOD Header.Width,
                   Pixels_counter DIV Header.Width,
                   Byte_read)

        Pixels_counter      <- Pixels_counter + 1
        Packed_data_counter <- Packed_data_counter + 1
      }
      ELSE /* Is the number of pixels to repeat coded... */
      {    /* ... with 1 byte */
        IF (Byte_read = Header.Pack_byte) THEN
        {
          Color     <- Read_byte(File)
          Byte_read <- Read_byte(File)

          FOR Counter FROM 0 TO (Byte_read-1) STEP +1
            Draw_pixel((Pixels_counter+Counter) MOD Header.Width,
                       (Pixels_counter+Counter) DIV Header.Width,
                       Color)

          Pixels_counter      <- Pixels_counter + Byte_read
          Packed_data_counter <- Packed_data_counter + 3
        }
        ELSE /* ... with 2 bytes */
        {
          Color     <- Read_byte(File)
          Word_read <- (word value) (Read_byte(File) SHL 8)+Read_byte(File)

          FOR Counter FROM 0 TO (Word_read-1) STEP +1
            Draw_pixel((Pixels_counter+Counter) MOD Header.Width,
                       (Pixels_counter+Counter) DIV Header.Width,
                       Color)

          Pixels_counter      <- Pixels_counter + Word_read
          Packed_data_counter <- Packed_data_counter + 4
        }
      }
    }
  END


  For example, the following sequence:
    (we suppose that Pack_byte=01 and Pack_word=02)
    04 03 01 05 06 03 02 00 01 2C
  will be decoded as:
    04 03 05 05 05 05 05 05 03 00 00 00 ... (repeat 0 300 times (012Ch=300))

  Repetitions that fit in a word must be written with their higher byte first.
  I know that it goes against Intel standard but since I read bytes from the
  file thru a buffer (really faster), I don't care about the order (Sorry :)).
  But words in the header and post-header must be written and read Intel-like!


  Packing advices:

  * As you can see, there could be a problem when you'd want to pack a raw
  pixel with a color equal to Pack_byte or Pack_word. These pixels should
  always be coded as a packet even if there is only one pixel.

    Example: (we suppose that Pack_byte=9)
      9   will be encoded 9,9,1     (The 1st 9 in the encoded...
      9,9 will be encoded 9,9,2     ... sequence is Pack_byte)
      etc...

  * It seems obvious to find values for Pack_byte and Pack_word that are
  (almost) never used. So a small routine that finds the 2 less used colors
  in the image should be called before starting to pack the picture. This can
  be done almost instantaneously in Assembler.

  * When you want to pack a 2-color-sequence, just write these 2 colors one
  after the other (Color,Color) because it only takes 2 bytes instead of 3 if
  you had to write a packet (Pack_byte,Color,2).

  * If you pack a very simple picture which has a sequence of more than 65535
  same consecutive bytes, you must break the sequence and continue with a new
  packet.

    Example: you have to pack 65635 same consecutive bytes (eg. color 0)
      (we suppose that Pack_byte=01 and Pack_word=02)
      You'll write: 02 00 FF FF 01 00 64        (FFFFh=65535, 64h=100)



# Setting GrafX 2.00 video modes

    All set-mode procs are in 386 ASM. Anyway, if you can't understand any
  line of ASM, I really can't see the use you'll have of these procedures.

    They are designed to be used in FLAT memory model. Anyway, it wouldn't
  take too much time for you to adapt them to the model you use since only
  memory indexations can be affected by this (so use DS:SI instead of ESI,
  ES:DI instead of EDI, and beware to the address 0A0000h that will become
  0A000h:0000h).


MCGA: (Standard VGA mode)

    Is there anybody in this world who still don't now how to set the MCGA
  320x200 256 colors mode ??!?
    Well... I hope you are a novice if you read the 2 following lines :)


    mov  ax,0013h
    int  10h



X-Modes: (Extended VGA modes)

    Well... I think the original Mode X was 320x240 but now, many people call
  "X-Modes" (or Modes X, or Tweaked modes) all the VGA modes that use more
  that 64Kb of video memory with the "Unchained" structure.
    Setting a pixel in any X-Mode can be done by one same function (but I
  won't explain to you how to do that. You just have to tell the function what
  the plane width (screen_width/4) is).
    If you can't understand anything about what I say (unchained, planes...),
  just read any good documentation about Mode X.

    We'd like to thank the authors of XLIB2 for saving our time by having made
  this useful function. We slightly optimized it for our needs but the most
  important parts are here.


    mov  ax,13h      ; Yeah! The MCGA mode again! All X-Modes must start from
    int  10h         ; the standard VGA mode, but many things change after.

    mov  dx,3C6h     ; During the initialization, we'll turn the palette into
    xor  al,al       ; black in order to avoid the user to see all our
    out  dx,al       ; manipulations.

    mov  dx,3C4h     ; We will inform the TIMING SEQUENCER register to switch
    mov  ax,0604h    ; in unchained mode (mode-X), without odd/even management
    out  dx,ax       ; and with an access to the 256Kb of the video card.
    mov  ax,0100h    ; Now we will engage the synchronous reset of the TS
    out  dx,ax       ; register because we're about to play with registers.

    mov  al,01h      ; Like with the palette, we ask the video card not to
    out  dx,al       ; peek the memory to display it anymore. Thus, it's
    inc  dx          ; one more way to avoid interferences in the display,
    in   al,dx       ; which happens until the mode is completely initialized
    mov  ah,al       ; and stable. In addition, we can expect that asking a
    mov  al,01h      ; memory reading interruption will turn the system
    push ax          ; faster, and thus speed up the initialization of the
    mov  al,ah       ; graphic mode (hope makes you live :))
    or   al,20h      ;
    out  dx,al       ;

    mov  esi,X_ptr   ; Pointer on the list of constants to send to the CRTC.
    cld

    lodsb            ; This loads in AL a value that will tell what to do
                     ; with the MISCELLANEOUS register, and increases ESI.
                     ; The value is equal to ZERO => Nothing to do
                     ;                    or ELSE => Send AL to MISCELLANEOUS

    or   al,al       ; Shall we modify the basic video mode?
    jz   NoThankYou  ; No?Ŀ Actually the answer is always "Yes".
    mov  dx,3C2h     ;     � Except for a few modes such as
    out  dx,al       ;     � 320x200 in Mode X
    NoThankYou:      ; <���� (but our 320x200 is MCGA...)

    mov  dx,3C4h     ; Manipulations with MISCELLANEOUS register are over, we
    mov  ax,0300h    ; can now disengage the synchronous register of the TS.
    out  dx,ax

    ; Now, what about teasing the CRTC?

    mov  dx,3D4h     ; In the 18th register of the CRTC, we will disengage the
    mov  al,11h      ; protection bit. Without this, the values we would have
    out  dx,al       ; sent to the CRTC registers would have been ignored.
    inc  dx
    in   al,dx
    and  al,7Fh
    out  dx,al

    dec  dx          ; DX points back to the CRTC register entry
    lodsb            ; This loads in AL the number of CRTC registers to modify
    xor  ecx,ecx     ; You must clear ECX before...
    mov  cl,al       ; ... starting to repeat AL (CL) times OUTSW
    rep  outsw       ; Let's send all the CRTC parameters!

    ; Just in case the 20th CRTC register would have been forgotten in the
    ; initialisation table, we can compute it by ourselves (Yeah, we are good
    ; guys).

    mov  ax,Screen_width ; You must tell the routine what the Screen width is
    shr  ax,3
    mov  ah,al
    mov  al,13h
    out  dx,ax

    mov  dx,3C4h     ; Now you have the good resolution but there can be
    mov  ax,0F02h    ; shitty pixels on the screen coming from the uncleared
    out  dx,ax       ; memory areas.
    mov  edi,0A0000h ; So we'll clean memory starting from 0A0000h with the
    xor  eax,eax     ; value 0 (which is the standard black) and on a range
    mov  ecx,4000h   ; of 4000h dwords (256Kb).
    rep  stosd       ; Let's wipe all this out.

    mov  dx,3C4h     ; We can ask the VGA to read again the memory to display
    pop  ax          ; it on the screen...
    out  dx,ax       ;
    mov  dx,3C6h     ; ... and turn on the palette so the picture appears to
    mov  al,0FFh     ; the user.
    out  dx,al       ;


  The table of constants you must send is one of these:
  (These are tables for C but they can be easily used in other languages)

    word X320Y224[] =
      { 0x0BA3, 0x6F06, 0xBA07, 0x0008, 0x4109, 0x0810, 0x8A11, 0xBF12, 0x0014,
        0xC715, 0x0416, 0xE317 };
    word X320Y240[] =
      { 0x0AE3, 0x0D06, 0x3E07, 0x4109, 0xEA10, 0xAC11, 0xDF12, 0x0014, 0xE715,
        0x0616, 0xE317 };
    word X320Y256[] =
      { 0x0CE3, 0x2306, 0xB207, 0x0008, 0x6109, 0x0A10, 0xAC11, 0xFF12, 0x2013,
        0x0014, 0x0715, 0x1A16, 0xE317 };
    word X320Y270[] =
      { 0x0BE7, 0x3006, 0xF007, 0x0008, 0x6109, 0x2010, 0xA911, 0x1B12, 0x0014,
        0x1F15, 0x2F16, 0xE317 };
    word X320Y282[] =
      { 0x0CE3, 0x6206, 0xF007, 0x6109, 0x310F, 0x3710, 0x8911, 0x3312, 0x2F13,
        0x0014, 0x3C15, 0x5C16, 0xE317 };
    word X320Y300[] =
      { 0x0DE3, 0x4606, 0x1F07, 0x0008, 0x4009, 0x3110, 0x8011, 0x2B12, 0x2013,
        0x0014, 0x2F15, 0x4416, 0xE317 };
    word X320Y360[] =
      { 0x09E3, 0x4009, 0x8810, 0x8511, 0x6712, 0x2013, 0x0014, 0x6D15, 0xBA16,
        0xE317 };
    word X320Y400[] =
      { 0x03E3, 0x4009, 0x0014, 0xE317 };
    word X320Y448[] =
      { 0x0BA3, 0x6F06, 0xBA07, 0x0008, 0x4009, 0x0810, 0x8A11, 0xBF12, 0x0014,
        0xC715, 0x0416, 0xE317 };
    word X320Y480[] =
      { 0x0AE3, 0x0D06, 0x3E07, 0x4009, 0xEA10, 0xAC11, 0xDF12, 0x0014, 0xE715,
        0x0616 , 0xE317};
    word X320Y512[] =
      { 0x0CE3, 0x2306, 0xB207, 0x0008, 0x6009, 0x0A10, 0xAC11, 0xFF12, 0x2013,
        0x0014, 0x0715, 0x1A16, 0xE317 };
    word X320Y540[] =
      { 0x0BE7, 0x3006, 0xF007, 0x0008, 0x6009, 0x2010, 0xA911, 0x1B12, 0x0014,
        0x1F15, 0x2F16, 0xE317 };
    word X320Y564[] =
      { 0x0CE7, 0x6206, 0xF007, 0x0008, 0x6009, 0x3E10, 0x8911, 0x3312, 0x2013,
        0x0014, 0x3C15, 0x5C16, 0xE317 };
    word X320Y600[] =
      { 0x0BE7, 0xBE06, 0xF007, 0x0008, 0x6009, 0x7C10, 0x8C11, 0x5712, 0x0014,
        0x5815, 0x7016, 0xE317 };
    word X360Y200[] =
      { 0x09E7, 0x6B00, 0x5901, 0x5A02, 0x8E03, 0x5E04, 0x8A05, 0x2D13, 0x0014,
        0xE317 };
    word X360Y224[] =
      { 0x12A7, 0x6B00, 0x5901, 0x5A02, 0x8E03, 0x5E04, 0x8A05, 0x6F06, 0xBA07,
        0x0008, 0x4109, 0x0810, 0x8A11, 0xBF12, 0x2D13, 0x0014, 0xC715, 0x0416,
        0xE317 };
    word X360Y240[] =
      { 0x11E7, 0x6B00, 0x5901, 0x5A02, 0x8E03, 0x5E04, 0x8A05, 0x0D06, 0x3E07,
        0x4109, 0xEA10, 0xAC11, 0xDF12, 0x2D13, 0x0014, 0xE715, 0x0616, 0xE317 };
    word X360Y256[] =
      { 0x12E7, 0x6B00, 0x5901, 0x5A02, 0x8E03, 0x5E04, 0x8A05, 0x2B06, 0xB207,
        0x0008, 0x6109, 0x0E10, 0xAC11, 0xFF12, 0x2D13, 0x0014, 0x0715, 0x1A16,
        0xE317 };
    word X360Y270[] =
      { 0x12E7, 0x6B00, 0x5901, 0x5A02, 0x8E03, 0x5E04, 0x8A05, 0x3006, 0xF007,
        0x0008, 0x6109, 0x2010, 0xA911, 0x1B12, 0x2D13, 0x0014, 0x1F15, 0x2F16,
        0xE317 };
    word X360Y282[] =
      { 0x12E7, 0x6B00, 0x5901, 0x5A02, 0x8E03, 0x5E04, 0x8A05, 0x6206, 0xF007,
        0x6109, 0x310F, 0x3710, 0x8911, 0x3312, 0x2D13, 0x0014, 0x3C15, 0x5C16,
        0xE317 };
    word X360Y300[] =
      { 0x12E7, 0x6B00, 0x5901, 0x5A02, 0x8E03, 0x5E04, 0x8A05, 0x4606, 0x1F07,
        0x0008, 0x4009, 0x3110, 0x8011, 0x2B12, 0x2D13, 0x0014, 0x2F15, 0x4416,
        0xE317 };
    word X360Y360[] =
      { 0x0FE7, 0x6B00, 0x5901, 0x5A02, 0x8E03, 0x5E04, 0x8A05, 0x4009, 0x8810,
        0x8511, 0x6712, 0x2D13, 0x0014, 0x6D15, 0xBA16, 0xE317 };
    word X360Y400[] =
      { 0x0AE7, 0x6B00, 0x5901, 0x5A02, 0x8E03, 0x5E04, 0x8A05, 0x4009, 0x2D13,
        0x0014, 0xE317 };
    word X360Y448[] =
      { 0x12A7, 0x6B00, 0x5901, 0x5A02, 0x8E03, 0x5E04, 0x8A05, 0x6F06, 0xBA07,
        0x0008, 0x4009, 0x0810, 0x8A11, 0xBF12, 0x2D13, 0x0014, 0xC715, 0x0416,
        0xE317 };
    word X360Y480[] =
      { 0x11E7, 0x6B00, 0x5901, 0x5A02, 0x8E03, 0x5E04, 0x8A05, 0x0D06, 0x3E07,
        0x4009, 0xEA10, 0xAC11, 0xDF12, 0x2D13, 0x0014, 0xE715, 0x0616, 0xE317 };
    word X360Y512[] =
      { 0x12E7, 0x6B00, 0x5901, 0x5A02, 0x8E03, 0x5E04, 0x8A05, 0x2B06, 0xB207,
        0x0008, 0x6009, 0x0E10, 0xAC11, 0xff12, 0x2D13, 0x0014, 0x0715, 0x1A16,
        0xE317 };
    word X360Y540[] =
      { 0x12E7, 0x6B00, 0x5901, 0x5A02, 0x8E03, 0x5E04, 0x8A05, 0x3006, 0xF007,
        0x0008, 0x6009, 0x2010, 0xA911, 0x1B12, 0x2D13, 0x0014, 0x1F15, 0x2F16,
        0xE317 };
    word X360Y564[] =
      { 0x12EB, 0x6B00, 0x5901, 0x5A02, 0x8E03, 0x5E04, 0x8A05, 0x6206, 0xF007,
        0x0008, 0x6009, 0x3E10, 0x8911, 0x3312, 0x2D13, 0x0014, 0x3C15, 0x5C16,
        0xE317 };
    word X360Y600[] =
      { 0x12E7, 0x6B00, 0x5901, 0x5A02, 0x8E03, 0x5E04, 0x8A05, 0xBE06, 0xF007,
        0x0008, 0x6009, 0x7C10, 0x8C11, 0x5712, 0x2D13, 0x0014, 0x5815, 0x7016,
        0xE317 };
    word X400Y200[] =
      { 0x09E7, 0x7100, 0x6301, 0x6402, 0x9203, 0x6604, 0x8205, 0x3213, 0x0014,
        0xE317 };
    word X400Y224[] =
      { 0x12A7, 0x7100, 0x6301, 0x6402, 0x9203, 0x6604, 0x8205, 0x6F06, 0xBA07,
        0x0008, 0x4109, 0x0810, 0x8A11, 0xBF12, 0x3213, 0x0014, 0xC715, 0x0416,
        0xE317 };
    word X400Y240[] =
      { 0x12E7, 0x7100, 0x6301, 0x6402, 0x9203, 0x6604, 0x8205, 0x0D06, 0x3E07,
        0x0008, 0x4109, 0xEA10, 0xAC11, 0xDF12, 0x3213, 0x0014, 0xE715, 0x0616,
        0xE317 };
    word X400Y256[] =
      { 0x12E7, 0x7100, 0x6301, 0x6402, 0x9203, 0x6604, 0x8205, 0x2B06, 0xB207,
        0x0008, 0x6109, 0x1310, 0xAC11, 0xFF12, 0x3213, 0x0014, 0x0715, 0x1A16,
        0xE317 };
    word X400Y270[] =
      { 0x12E7, 0x7100, 0x6301, 0x6402, 0x9203, 0x6604, 0x8205, 0x3006, 0xF007,
        0x0008, 0x6109, 0x2010, 0xA911, 0x1B12, 0x3213, 0x0014, 0x1F15, 0x2F16,
        0xE317 };
    word X400Y282[] =
      { 0x12E7, 0x7100, 0x6301, 0x6402, 0x9203, 0x6604, 0x8205, 0x6206, 0xF007,
        0x6109, 0x310F, 0x3710, 0x8911, 0x3312, 0x3213, 0x0014, 0x3C15, 0x5C16,
        0xE317 };
    word X400Y300[] =
      { 0x12E7, 0x7100, 0x6301, 0x6402, 0x9203, 0x6604, 0x8205, 0x4606, 0x1F07,
        0x0008, 0x4009, 0x3110, 0x8011, 0x2B12, 0x3213, 0x0014, 0x2F15, 0x4416,
        0xE317 };
    word X400Y360[] =
      { 0x0FE7, 0x7100, 0x6301, 0x6402, 0x9203, 0x6604, 0x8205, 0x4009, 0x8810,
        0x8511, 0x6712, 0x3213, 0x0014, 0x6D15, 0xBA16, 0xE317 };
    word X400Y400[] =
      { 0x0AE7, 0x7100, 0x6301, 0x6402, 0x9203, 0x6604, 0x8205, 0x4009, 0x3213,
        0x0014, 0xE317 };
    word X400Y448[] =
      { 0x12A7, 0x7100, 0x6301, 0x6402, 0x9203, 0x6604, 0x8205, 0x6F06, 0xBA07,
        0x0008, 0x4009, 0x0810, 0x8A11, 0xBF12, 0x3213, 0x0014, 0xC715, 0x0416,
        0xE317 };
    word X400Y480[] =
      { 0x11E7, 0x7100, 0x6301, 0x6402, 0x9203, 0x6604, 0x8205, 0x0D06, 0x3E07,
        0x4009, 0xEA10, 0xAC11, 0xDF12, 0x3213, 0x0014, 0xE715, 0x0616, 0xE317 };
    word X400Y512[] =
      { 0x12E7, 0x7100, 0x6301, 0x6402, 0x9203, 0x6604, 0x8205, 0x2B06, 0xB207,
        0x0008, 0x6009, 0x1310, 0xAC11, 0xFF12, 0x3213, 0x0014, 0x0715, 0x1A16,
        0xE317 };
    word X400Y540[] =
      { 0x12E7, 0x7100, 0x6301, 0x6402, 0x9203, 0x6604, 0x8205, 0x3006, 0xF007,
        0x0008, 0x6009, 0x2010, 0xA911, 0x1B12, 0x3213, 0x0014, 0x1F15, 0x2F16,
        0xE317 };
    word X400Y564[] =
      { 0x12EB, 0x7100, 0x6301, 0x6402, 0x9203, 0x6604, 0x8205, 0x6206, 0xF007,
        0x0008, 0x6009, 0x3E10, 0x8911, 0x3312, 0x3213, 0x0014, 0x3C15, 0x5C16,
        0xE317 };
    word X400Y600[] =
      { 0x12E7, 0x7100, 0x6301, 0x6402, 0x9203, 0x6604, 0x8205, 0xBE06, 0xF007,
        0x0008, 0x6009, 0x7C10, 0x8C11, 0x5712, 0x3213, 0x0014, 0x5815, 0x7016,
        0xE317 };


  The structure: (example)

         �����This is the number of values to send to the CRTC registers. This
         �    is actually the number of words in the tables minus 1 (because the
         �    1st word of the table is not sent to the CRTC but contains a value
         �    to send to the MISCELLANEOUS register and the number of values to
         �    send to the CRTC registers ;) ).
         �
         � ���This is the value to send to the MISCEALLANEOUS register (or ZERO
         � �  if no value must be sent to it).
         � �
         � �     ����This is a value to send to a register of the CRTC.
         � �     �
         � �     � ��This is the index of the CRTC register that will receive
         � �     � � the value.
         ÿÿ    ÿÿ
     { 0x0AE3, 0x0D06, 0x3E07, 0x4109, 0xEA10, 0xAC11, 0xDF12, 0x0014, 0xE715,
       0x0616, 0xE317 };

    You can notice that CRTC registers 0 to 5 (and 13h) define the screen
  width while registers 6 to 17h (except 13h) define the screen height.


    We have more modes in our pocket than the "few" :) ones we included in
  GrafX 2.00, but they aren't really useful or stable. But we may decice to
  include them anyway in a next version.
    If some of your favourite modes are missing, just send us the list of
  constants we must shoot at the CRTC just following the structure we use
  above.

  IMPORTANT! The constant values listed above are not supported by every
             monitor or video card.
             We have tested GrafX2 with several different configurations and
             we constated that some modes don't work at all with some video
             cards while some others can be overscanned, out of center, dark,
             too bright, or shrunk.
             But they all work fine with our poor little Tseng Labs ET4000...

  If you already have a good knowledge about CRTC and have different values
  than ours for certain modes, please let us know. We'll use them if they work
  better with a majority of computers.


VESA: (A "pseudo-standard" for Super-VGA modes)

    We use VESA for modes that require a width of 640, 800 or 1024 pixels.
  But there is a way to combine X-Modes height with VESA so it's possible to
  have modes as weird as in X-Mode.


    mov  ax,4F02h
    mov  bx,Video_mode
    int  10h


  256-color-VESA video modes are:

    100h :  640x400
    101h :  640x480
    103h :  800x600
    105h : 1024x768
    107h : 1280x1024 (not available in GrafX2 because only supported with
                     video cards with 2 or more Megabytes of video memory)


  As with X-Modes, you can modify CRTC registers to access "Xtd-VESA" modes!
  (Note that some video cards don't support the modification of the VGA CRTC
  registers in VESA modes.)


  To enter these extended VESA modes, set a standard VESA mode with the right
  width, and then call Modify_CRTC_registers with the proper Height table.

  Example (640x512) :

    VESA_Set_mode(101h)          /* Set a video mode with the same width */
    Modify_CRTC_registers(Y512)  /* Modify height */


  * Height tables:

    word Y224[] =
      { 0x09A3, 0x6F06, 0xBA07, 0x0008, 0x4109, 0x0810, 0x8A11, 0xBF12, 0xC715,
        0x0416 };
    word Y240[] =
      { 0x09E3, 0x0D06, 0x3E07, 0x0008, 0x4109, 0xEA10, 0xAC11, 0xDF12, 0xE715,
        0x0616 };
    word Y256[] =
      { 0x0900, 0x2B06, 0xB207, 0x0008, 0x6109, 0x0A10, 0xAC11, 0xFF12, 0x0715,
        0x1A16 };
    word Y270[] =
      { 0x09E7, 0x3006, 0xF007, 0x0008, 0x6109, 0x2010, 0xA911, 0x1B12, 0x1F15,
        0x2F16 };
    word Y282[] =
      { 0x0AE3, 0x6206, 0xF007, 0x0008, 0x6109, 0x310F, 0x3710, 0x8911, 0x3312,
        0x3C15, 0x5C16 };
    word Y300[] =
      { 0x09E3, 0x4606, 0x1F07, 0x0008, 0x4009, 0x3110, 0x8011, 0x2B12, 0x2F15,
        0x4416 };
    word Y350[] =
      { 0x09A3, 0xBF06, 0x1F07, 0x0008, 0x4009, 0x8310, 0x8511, 0x5D12, 0x6315,
        0xBA16 };
    word Y360[] =
      { 0x07E3, 0x0008, 0x4009, 0x8810, 0x8511, 0x6712, 0x6D15, 0xBA16 };
    word Y400[] =
      { 0x01E3, 0x4009 };
    word Y448[] =
      { 0x09A3, 0x6F06, 0xBA07, 0x0008, 0x4009, 0x0810, 0x8A11, 0xBF12, 0xC715,
        0x0416 };
    word Y480[] =
      { 0x09E3, 0x0D06, 0x3E07, 0x0008, 0x4009, 0xEA10, 0xAC11, 0xDF12, 0xE715,
        0x0616 };
    word Y512[] =
      { 0x0900, 0x2B06, 0xB207, 0x0008, 0x6009, 0x0A10, 0xAC11, 0xFF12, 0x0715,
        0x1A16 };
    word Y540[] =
      { 0x09E7, 0x3006, 0xF007, 0x0008, 0x6009, 0x2010, 0xA911, 0x1B12, 0x1F15,
        0x2F16 };
    word Y564[] =
      { 0x09E7, 0x6206, 0xF007, 0x0008, 0x6009, 0x3E10, 0x8911, 0x3312, 0x3C15,
        0x5C16 };
    word Y600[] =
      { 0x09E7, 0xBE06, 0xF007, 0x0008, 0x6009, 0x7C10, 0x8C11, 0x5712, 0x5815,
        0x7016 };

  Modifying CRTC registers: (inspired by X-Modes init... See above for more details or comments)

    mov  esi,XVESA_Ptr
    cld

    lodsb
    or   al,al       ; Shall we modify the basic video mode?
    jz   NoThankYou  ; No?Ŀ The answer can be "No" because initialisations
    mov  dx,3C2h     ;     � of certain VESA modes directly set the right
    out  dx,al       ;     � value for the Miscellaneous register.
    NoThankYou:      ; <����

    mov  dx,3D4h
    mov  al,11h
    out  dx,al
    inc  dx
    in   al,dx
    and  al,7Fh
    out  dx,al

    dec  dx
    lodsb
    xor  ecx,ecx
    mov  cl,al
    rep  outsw

    If you are cunning enough, you'll be able to combine constants used in
  X-Modes to get more "Xtd-VESA" modes such as 640x200, 800x480, etc...
  (but I don't think this will work with 1024x??? because this mode is
  generally interlaced... But who knows?...)
    The most difficult is to find the right value for the MISCELLANEOUS
  register.

# GENERAL INFO

We enjoy programming GrafX2, we hope you will enjoy drawing with it. If you like
the program, here is a list of things you can do:

* Register as an user at www.ohloh.net/p/grafx2 to improve our Karma
* Port GrafX2 to your favourite platform
* Report bugs or ask for features you miss (you'll get credited in the helpscreen !)
* Make all your friends use GrafX2
* Send us your nice drawings, we'll put them in our online gallery

Enjoy Pixelling with GrafX2,

PulkoMandy & Yves, the great GrafX2 Project Team.-

# LICENSE

GrafX2 is free software; you can redistribute it and/or modify it under the
terms of the GNU General Public License as published by the Free Software
foundation; version 2 of the License. See COPYING for details.

The font Tuffy.ttf included as a sample in the fonts directory is public domain.

The source code of Grafx2 should always be distributed along with the
executable; You can normally find it in a packed archive whose name begins by
"src". The original source code is available from the Subversion repository at svn://pulkomandy.tk/GrafX2/


