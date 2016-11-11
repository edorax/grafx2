\

Grafx2

Quick start guide

\

\

1<span class="Apple-tab-span"> </span>Introduction<span
class="Apple-tab-span"> </span>3

2<span class="Apple-tab-span"> </span>Fundamentals<span
class="Apple-tab-span"> </span>3

2.1<span class="Apple-tab-span"> </span>Indexed colors<span
class="Apple-tab-span"> </span>3

2.2<span class="Apple-tab-span"> </span>2-button drawing<span
class="Apple-tab-span"> </span>3

2.3<span class="Apple-tab-span"> </span>Brushes<span
class="Apple-tab-span"> </span>3

2.4<span class="Apple-tab-span"> </span>Drawing tools (general)<span
class="Apple-tab-span"> </span>4

2.5<span class="Apple-tab-span"> </span>Spare page<span
class="Apple-tab-span"> </span>4

2.6<span class="Apple-tab-span"> </span>Drawing effects<span
class="Apple-tab-span"> </span>4

3<span class="Apple-tab-span"> </span>Helpers<span
class="Apple-tab-span"> </span>4

3.1<span class="Apple-tab-span"> </span>Contextual help<span
class="Apple-tab-span"> </span>4

3.2<span class="Apple-tab-span"> </span>Keyboard shortcuts<span
class="Apple-tab-span"> </span>5

3.3<span class="Apple-tab-span"> </span>Use the spare page to store
parts you will need later<span class="Apple-tab-span"> </span>5

3.4<span class="Apple-tab-span"> </span>Use the color picker<span
class="Apple-tab-span"> </span>5

3.5<span class="Apple-tab-span"> </span>Magnifier (Zoom)<span
class="Apple-tab-span"> </span>5

3.6<span class="Apple-tab-span"> </span>I made a mistake: Undo /
Redo<span class="Apple-tab-span"> </span>5

4<span class="Apple-tab-span"> </span>Customization<span
class="Apple-tab-span"> </span>6

4.1<span class="Apple-tab-span"> </span>Keyboard shortcuts<span
class="Apple-tab-span"> </span>6

4.2<span class="Apple-tab-span"> </span>Settings<span
class="Apple-tab-span"> </span>6

4.3<span class="Apple-tab-span"> </span>Bookmark directories<span
class="Apple-tab-span"> </span>6

4.4<span class="Apple-tab-span"> </span>Skinability<span
class="Apple-tab-span"> </span>6

5<span class="Apple-tab-span"> </span>Drawing tools (detailed)<span
class="Apple-tab-span"> </span>6

6<span class="Apple-tab-span"> </span>Palette manipulation<span
class="Apple-tab-span"> </span>6

6.1<span class="Apple-tab-span"> </span>Using shade mode and defining
your color ranges<span class="Apple-tab-span"> </span>6

6.2<span class="Apple-tab-span"> </span>Converting images
(remapping)<span class="Apple-tab-span"> </span>6

6.3<span class="Apple-tab-span"> </span>Color replacer tool<span
class="Apple-tab-span"> </span>6

7<span class="Apple-tab-span"> </span>Tiles and game mockups<span
class="Apple-tab-span"> </span>7

7.1<span class="Apple-tab-span"> </span>Grid mode<span
class="Apple-tab-span"> </span>7

8<span class="Apple-tab-span"> </span>Bitmap effects<span
class="Apple-tab-span"> </span>7

8.1<span class="Apple-tab-span"> </span>Text<span
class="Apple-tab-span"> </span>7

8.2<span class="Apple-tab-span"> </span>Outline, nibble<span
class="Apple-tab-span"> </span>7

8.3<span class="Apple-tab-span"> </span>Mirror<span
class="Apple-tab-span"> </span>7

8.4<span class="Apple-tab-span"> </span>Resize<span
class="Apple-tab-span"> </span>7

8.5<span class="Apple-tab-span"> </span>Rotate<span
class="Apple-tab-span"> </span>7

8.6<span class="Apple-tab-span"> </span>Distort<span
class="Apple-tab-span"> </span>7

9<span class="Apple-tab-span"> </span>Low resolution art<span
class="Apple-tab-span"> </span>7

9.1<span class="Apple-tab-span"> </span>Pixel scalers<span
class="Apple-tab-span"> </span>7

9.2<span class="Apple-tab-span"> </span>Mouse sensitivity<span
class="Apple-tab-span"> </span>7

10<span class="Apple-tab-span"> </span>Low colors<span
class="Apple-tab-span"> </span>7

10.1<span class="Apple-tab-span"> </span>Customize the menu palette<span
class="Apple-tab-span"> </span>7

10.2<span class="Apple-tab-span"> </span>Less than 256 values in RGB
components<span class="Apple-tab-span"> </span>8

11<span class="Apple-tab-span"> </span>Layers<span
class="Apple-tab-span"> </span>8

11.1<span class="Apple-tab-span"> </span>System of transparency<span
class="Apple-tab-span"> </span>8

11.2<span class="Apple-tab-span"> </span>User interface<span
class="Apple-tab-span"> </span>8

11.3<span class="Apple-tab-span"> </span>File formats<span
class="Apple-tab-span"> </span>8

\

1.  ***1<span class="Apple-tab-span"> </span>Introduction***

This guide is designed to help people get comfortable with Grafx2, it's
recommended to read the table of contents and the fundamentals, scanning
quickly when you're already familiar with a concept, only stopping to
read in-depth details when something surprising or interesting catches
your eye.

Each chapter begins with basic information.

**\

*Then there are advanced details and techniques, in italic. You can
safely ignore them until you are confident in using the basics.*

\

This document tries to avoid repeating lengthy explanations that belong
to the user manual, so if<span class="Apple-converted-space"> 
</span>you wonder where is a tool or what it does, please refer to the
manual itself or Grafx2's contextual help.

\

1.  ***2<span class="Apple-tab-span"> </span>Fundamentals***

By default when you run Grafx2, it starts a new image as large as the
program’s window, with a default 256-color palette.

To change the canvas dimensions, click the Resolution icon, then click
the image Width or Height to change it and click OK.

When an image is bigger than the editing window, you can use the cursor
keys to scroll the view.

To load or save an image, use the Load/Save icon

To exit the program, press the ‘Quit’ icon, on the right edge of the
tool bar. Grafx2 will propose to save your changes, if you have not
saved yet.

1.  **2.1<span class="Apple-tab-span"> </span>Indexed colors**

Grafx2 is made for drawing with a system called indexed colors. This
means that your image defines a palette of colors, 256 at most, and when
you draw with “red”, or “black”, in fact the program remember which
color number you used. The big difference with a program like MS Paint
or Gimp is that you can later alter your image’s palette, and this will
affect all the places where you used the modified colors.

A typical file format for indexed colors is GIF.

\

*See the chapter ‘Palette manipulation’ for useful palette actions.*

*Grafx2 can import 24bit images from a few file formats such as Jpeg,
creating a custom palette by selecting 256 colors using a mathematical
method (Median cut in the RGB color space) Be aware that the result can
never be good with photographic images and the like, it’s mostly useful
to convert screenshots of computer applications.*

*Grafx2 saves only indexed colors formats: for example it uses the PNG
variant which keeps the palette.*

1.  **2.2<span class="Apple-tab-span"> </span>Two-button drawing**

Usually, clicking on the image with the left mouse button paints with
the foreground color (FG), and clicking with the right mouse button
paints with the background colors (BG). Some other tools will use left
click for confirm and right to cancel/stop. In any case, it’s rare to
get the same effect from left-clicking and right-clicking, and the right
mouse button is as useful as the left one.

The current FG and BG are shown next to the palette, and clicking on the
palette itself with the left and right mouse button will set the FG and
BG colors, respectively.

Setting two useful colors can save you a lot of time when drawing, as
you won’t need to change the active color so often.

\

*If you have a third mouse button, it’s not used for drawing. You can
assign a shortcut to the button and to wheel movements to perform
punctual actions, for example to activate the color picker or the
magnifier.*

1.  **2.3<span class="Apple-tab-span"> </span>Brushes**

The program allows you to draw using single pixels, of course.

You can also use one of the built-in monochrome shapes, like circles,
squares, horizontal lines etc. They are called monochrome because they
automatically use your foreground and background colors when drawing.

To select a monochrome brush, open the Paintbrush window and click the
button with the shape you want to use. Note that the single pixel is
proposed, top left.

\

The last type is the Color Brush, often called simply “brush”. It’s a
group of colored pixels that you get by grabbing with the rectangular
grab tool, or the freehand grab. You can use a color brush to draw a
texture, or displace part of a picture for example.<span
class="Apple-converted-space"> </span>

Note that the current Background color acts as transparent for your
brush: pixels of this color will not be drawn. Drawing with the right
mouse button will paste the background color only, in the shape of your
brush.

\

In the toolbar, the paintbrush icon shows which brush you’re currently
using. A special symbol indicates when you’re using a color brush.

\

*The monochrome brushes are resizable, you can use shortcuts xxx and xxx
to increase and decrease your current brush’s size. This allows you to
pick sizes that are not available in the Paintbrush screen.*

*A very useful shortcut sets the paintbrush to single-pixel: DEL.
(actually it’s a circle of size 1)*

*Many actions can be performed on the color brush, see the Brush FX
menu.*

*You can use your color brush in monochrome mode by right-clicking the
Paintbrush icon. It does not alter the brush contents, only the way it’s
displayed and drawn.*

*Right-clicking the ‘pick brush’ icon recovers the last color brush you
had. This is useful after using a built-in monochrome brush, or after
turning your brush monochrome.*

1.  **2.4<span class="Apple-tab-span"> </span>Drawing tools (general)**

A lot of drawing tools work by pasting your brush repeatedly at several
positions:

-   <span class="s1">•<span class="Apple-tab-span"> </span></span>at all
    the mouse positions (freehand drawing),
-   <span class="s1">•<span class="Apple-tab-span"> </span></span>in
    straight lines from one position to the next,
-   <span class="s1">•<span class="Apple-tab-span">
    </span></span>outlining a circle, etc.

While such tool is active, the current brush is shown “stuck” under your
mouse cursor, as a preview.

The current brush is not shown when you’re using “Flood fill” and other
tools that don’t use your current brush.

\

*A more in-depth description of drawing tools is in Drawing tools
(detailed), but feel free to experiment. Some tools work by single
click, or while dragging the mouse and releasing; but a few ones use a
more complicated series of clicks. If the usage or effect of a tool is
not clear, use the contextual help on its button to get immediate
information.*

1.  **2.5<span class="Apple-tab-span"> </span>Spare page**

Grafx2 keeps two different images open at the same time. The image you
see is called the “Main page”, and the one you don’t see is called the
“Spare page”. You can exchange them by clicking the icon xxx or using
the shortcut TAB : The Spare becomes the Main (and visible), the Main
becomes the Spare (hidden).

When editing a single image, the spare is often used as “rough paper”,
to save pieces of your main image or brushes, for future use.

The program keeps track of them independently: file name, modified since
last save, history of modifications for undo/redo, etc. Their palette
can be different, but then a brush that you grab in an image will look
different in another.

1.  **2.6<span class="Apple-tab-span"> </span>Drawing effects**

Grafx2 has a system of<span class="Apple-converted-space"> 
</span>Effects, allowing you for example to darken a piece of picture,
or protect some colors against drawing on them.

If drawing doesn't seem to give the right colors, maybe it's because you
have accidentally activated an effect : Check the Effects screen.

When an effect is active, the 'FX' button appears pressed, though it's
not very noticeable.

\

*This guide will describe some of the effects, when they are most
relevant*

***3<span class="Apple-tab-span"> </span>Helpers***

1.  **3.1<span class="Apple-tab-span"> </span>Contextual help**

There are extensive help screens for all drawing tools and all windows.
By default, the associated key is F1. If a specific window was open, it
will show the explanations about this window. When no window is open,
and your mouse cursor is positioned over one of the buttons of the
toolbar, it will show the help for this tool (and/or the related options
window)<span class="Apple-converted-space"> </span>

The help screens also show the current keyboard shortcuts, and allow you
to change them immediately.

1.  **3.2<span class="Apple-tab-span"> </span>Keyboard shortcuts**

There are more than a hundred actions which can have a shortcut key. As
soon as you have found the functions you use a lot, it’s recommended to
check the associated shortcut key, this can save you a lot of
back-and-forth between the toolbar and the drawing area. If the default
key combination doesn’t suit you, redefine it.

To view a shortcut, open the relevant page of contextual help: the
highlighted key names are the actual shortcuts with your current
configuration. Click the name to edit the shortcut.

\

*Some shortcuts which are often useful:*

*Scroll picture:<span class="Apple-tab-span"> </span>cursor arrows*

*Magnifier:<span class="Apple-tab-span"> </span>M*

*Zoom in/out when magnified:<span class="Apple-tab-span"> </span>+ and
-*

*Grab brush:<span class="Apple-tab-span"> </span>B*

*Choose single-pixel brush<span class="Apple-tab-span"> </span>DEL*

*Color picker:<span class="Apple-tab-span"> </span>\~*

*Swap to spare:<span class="Apple-tab-span"> </span>TAB*

*The keys SHIFT, ALT, CONTROL, and META (on Mac) can be used to make
more combinations – so you can’t associate anything to “just Shift”.*

*With a wheel mouse, you can also associate shortcuts to the third
button (“Mouse3”), and to WheelUp and WheelDown. Again, Control, Shift
etc. can be used to make more combinations. You can set at most 2 key
combinations for the same shortcut, so for example you can associate
both \~ and Mouse3 to the Colorpicker tool.*

1.  **3.3<span class="Apple-tab-span"> </span>Use the spare page to
    store parts you will need later**

The spare page is very handy to store pieces of your main image. For
example you can pick a part of your image with the rectangular brush
tool, paste it somewhere in the spare over a solid color background,
clean out the background (still on the spare) until it has just the
contour you need, then grab it again, and switch back to the original
Main page: you will have a clean brush with no leftover pixels, that you
can paste anywhere.

1.  **3.4<span class="Apple-tab-span"> </span>Use the color picker**

There is a color picker tool (also called pipette) to pick a color from
the picture. By default the shortcut is the easy-to-reach \~ key. Using
it can spare a lot of time, especially when your palette has more colors
than can be displayed in the toolbar’s palette.<span
class="Apple-converted-space"> </span>

While the tool is active, you have a specific mouse cursor, and the
status bar displays both the color you’re currently highlighting and its
RGB values. Click with left mouse button to pick

1.  **3.5<span class="Apple-tab-span"> </span>Magnifier (Zoom)**

A magnifier is available to zoom in on your picture. It’s very useful to
draw on detailed parts of picture, without needing extreme mouse
precision, and easier on your eyes.

Activate it or disable by clicking the magnifying glass icon.

While active, your editing area is split in two, with the normal view on
the left and the zoomed-in part on the right. You can drag the separator
bar to adjust the proportions.

You can draw in either areas, both update in real time.

If the mouse cursor is over the picture when you use the keyboard
shortcut of the magnifier (default: M), Grafx2 instantly zooms and
centers the zoomed part on the place where your mouse cursor was.

By default, the cursor arrows are used to scroll the zoomed area around.

1.  **3.6<span class="Apple-tab-span"> </span>I made a mistake: Undo /
    Redo**

Your drawing actions are memorized, so you can easily Undo any number of
drawing steps, and Redo them if you go too far in history. A single step
is generally all the changes you do from the moment you click on the
picture, to the moment you release the mouse button.

To Undo or Redo, click the “Oops” with the left mouse button and the
right mouse button, respectively.

\

*The maximum number of steps that can be recorded is in the settings,
you can go up to 99.*

*The system uses a circular buffer, so it behaves a bit different from
usual: When you Undo until you reach the oldest step and then Undo once
more, you’re back on the more recent step.*

***4<span class="Apple-tab-span"> </span>Customization***

1.  **4.1<span class="Apple-tab-span"> </span>Keyboard shortcuts**

Don’t hesitate to change the keyboard shortcuts to ones that are easy to
use and remember for you. The default configuration is a lot like Deluxe
Paint, but not many people are used to it.

1.  **4.2<span class="Apple-tab-span"> </span>Settings**

Some general program settings are available in the Settings screen

A few other, less-used ones can be defined in the file gfx2.ini, that
you can check and modify with a text editor. This file is located in
%appdata%\\Grafx2 (Windows) or \~/.grafx2 (Linux), and self-documented
with comments.

This file, as well as gfx2.cfg which contains for example the keyboard
shortcuts, are defined for each user of your computer and automatically
re-created with default values when they are missing.

**\

*(Windows) You can carry Grafx2 on a flash drive and use it on any
computer by simply copying the program’s directory on your flash drive,
and adding the two files gfx2.cfg and gfx2.ini with the executable. In
this case, Grafx2 will not read or write configuration files on the
computer’s hard disk when running, leaving no trace.*

1.  **4.3<span class="Apple-tab-span"> </span>Bookmark directories**

The file selector windows have little icons with stars in them. They are
used as bookmarks, to quickly change to a directory. This is useful to
memorize the usual places where you need to read and write images.

Left-click a bookmark to use it,

Right-click (and hold) a bookmark to open a dropdown menu to set it
(store the current directory).

1.  **4.4<span class="Apple-tab-span"> </span>Skinability**

Several sets of icons are available, and you can make your own (or only
modify the icon or mouse cursor that you find annoying). The skins and
the fonts are stored in the program’s directory under “skins”. They are
plain image files, so you can edit them…in Grafx2 for example. (You can
reload the skin without leaving Grafx2)

There are many graphical constraints, such as using only 4 colors for
GUI elements; but don’t worry, Grafx2 will check everything before
loading, and if there’s something it doesn’t like, it will cancel the
loading and display a very verbose message, telling you exactly what
pixel is the problem.

1.  ***5<span class="Apple-tab-span"> </span>Drawing tools (detailed)***

\

***6<span class="Apple-tab-span"> </span>Palette manipulation***

1.  **6.1<span class="Apple-tab-span"> </span><span
    class="Apple-tab-span"> </span>Using shade mode and defining your
    color ranges**

\

1.  **6.2<span class="Apple-tab-span"> </span><span
    class="Apple-tab-span"> </span>Converting images (remapping)**

\

1.  **6.3<span class="Apple-tab-span"> </span><span
    class="Apple-tab-span"> </span>Color replacer tool**

\

***7<span class="Apple-tab-span"> </span>Tiles and game mockups***

1.  **7.1<span class="Apple-tab-span"> </span><span
    class="Apple-tab-span"> </span>Grid mode**

***8<span class="Apple-tab-span"> </span>Bitmap effects***

A very common technique with Grafx2 is to grab a brush, alter it, and
paste it somewhere else.

1.  **8.1<span class="Apple-tab-span"> </span><span
    class="Apple-tab-span"> </span>Text**

\

1.  **8.2<span class="Apple-tab-span"> </span><span
    class="Apple-tab-span"> </span>Outline, nibble**

\

1.  **8.3<span class="Apple-tab-span"> </span><span
    class="Apple-tab-span"> </span>Mirror**

\

1.  **8.4<span class="Apple-tab-span"> </span><span
    class="Apple-tab-span"> </span>Resize**

\

1.  **8.5<span class="Apple-tab-span"> </span><span
    class="Apple-tab-span"> </span>Rotate**

\

1.  **8.6<span class="Apple-tab-span"> </span><span
    class="Apple-tab-span"> </span>Distort**

\

***9<span class="Apple-tab-span"> </span>Low resolution art***

1.  **9.1<span class="Apple-tab-span"> </span><span
    class="Apple-tab-span"> </span>Pixel scalers**

LCD displays look very bad when<span class="Apple-converted-space"> 
</span>using something else than their native resolutions, and low
resolutions are very rarely supported or proposed.

If you find yourself squinting at your screen because pixels are too
small and too close, Grafx2 can scale its own display to x2, x3 and x4,
thus giving larger pixel units. This works as well in full screen mode
than in a window. The whole display area of Grafx2 gets zoomed in: mouse
cursor, menus, fonts. Since Grafx2 was designed in the era of MCGA, the
minimum resolution for GUI windows is 320x200, so if you're running in
1024x768 you can scale to x3, You need at least 1280x800 to scale x4.

The scaling is done in software, so you won't get any blurring (linear
interpolation).

\

In addition, Grafx2 can propose some non-square modes where it zooms
differently on each axis: Wide modes and Tall modes.

1.  **9.2<span class="Apple-tab-span"> </span><span
    class="Apple-tab-span"> </span>Mouse sensitivity**

\

***10<span class="Apple-tab-span"> </span>Low colors***

1.  **10.1<span class="Apple-tab-span"> </span><span
    class="Apple-tab-span"> </span>Customize the menu palette**

The little palette on the bottom right of the menu displays 64 colors by
default. If you’re working on 16-color graphics, ¾ of the space is
wasted. So, Gafx2 allows you to set the number of colors in this palette
: less colors will mean bigger buttons, which are more comfortable to
use.

To edit this setting, open the ‘Secondary palette menu’, by
right-clicking the ‘Pal’ icon.

You can set the number of rows, the number of columns, and if the colors
are ordered from left to right, or from top to bottom.

1.  **10.2<span class="Apple-tab-span"> </span><span
    class="Apple-tab-span"> </span>Less than 256 values in RGB
    components**

By default, Grafx2 allows you to set RGB values of palette with 256
levels of precision, but if you are drawing graphics for older
technologies (or inspired by them), you may want a rougher scale: the
relevant setting is “<span class="s2">RGB scale</span>”.

To edit this setting, open the ‘Secondary palette menu’, by
right-clicking the ‘Pal’ icon.

<span class="Apple-converted-space"> </span>Example values that you can
use are 64 (VGA) 16 (classic Commodore Amiga, 4096 combinations), or
even 3 (Amstrad CPC)

A smaller scale means that the RGB sliders in the palette are more
blocky, they move by bigger units, and they show numbers from zero to
'scale' minus 1.

In HSV mode, the palette sliders are not affected, however the program
will really search the closest-match RGB by taking the setting into
account.

1.  ***11<span class="Apple-tab-span"> </span>Layers***

Layers are a late addition to Grafx2, so don’t be surprised if the
functions seem a bit separate from the rest of the program.

The concept of layers in Grafx2 is exactly the same as in Gimp,
Photoshop etc. Here's a tentative introduction:

\

An image is made of several images of same dimensions, placed on top of
each others (the 'layers'). The transparent parts in a layer allow you
to see the layer directly below, and the complete image is what you see
when looking down from the top.

\

As you can edit each layer separately, designing your image as layers
will allow you to modify/displace an element in the foreground without
having to redraw the background, since the background is memorized in
its own unchanged layer.

For more beginner explanations, try searching online tutorials on “using
layers”.

**\

*An understanding of the concept of layers is assumed for the following
sub-chapters.*

1.  **11.1<span class="Apple-tab-span"> </span>System of transparency**

*Grafx2 handles layer transparency by marking a single color as
transparent, for example color 0. All pixels drawn with this color are
considered fully transparent; all other colors are considered fully
opaque. No values in-between are possible, so no alpha channel is used.
The result is like a 1-bit alpha channel, but a color is reserved, so
you can only draw in 255 colors when using layers – except in the bottom
layer, where this color is shown anyway in Grafx2.There is no eraser
tool, because anything that paints with the transparent color will
actually erase : you can erase with a monochrome brush of any size, with
a filled circle, or with a polygon !*

1.  **11.2<span class="Apple-tab-span"> </span>User interface**

*The layer-specific tools are located in an optional toolbar that can be
shown or hidden.*

*To open the layer toolbar, left-click the button on the status bar.*

*In the layer toolbar, you can see:*

-   -<span class="Apple-tab-span"> </span>*how many layers you have :
    the numbered buttons*
-   -<span class="Apple-tab-span"> </span>*which one is the active layer
    where you draw : white button*
-   -<span class="Apple-tab-span"> </span>*which layers are temporarily
    hidden : black buttons.*

**\

1.  **11.3<span class="Apple-tab-span"> </span>File formats**

*Only GIF supports layers at this moment. If you use any other format to
save your layered image, the layer data will be lost and only the
flattened image will be saved. (Grafx2 reminds you when you do).*

*If you use PNG or GIF transparency, then the transparent color of
layers will also act as transparent in all editing programs and web
browsers that display your image.*

**\

