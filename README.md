# st (Simple Terminal)

My custom terminal build based on (lukesmith's build only for ligatures ) with some additional patches like newterm , rightclick paste , desktop entry ,sixel, live-reload xresources , anygeometry etc!.

## Patches:

- Ligatures
- Clipboard
- Alpha(Transparency)
- Boxdraw
- w3m
- font2
- right click paste
- st desktop entry
- newterm
- anysize
- anygeometry
- live reload ( change colors/fonts on the fly )
  and more...
  <br>

## How to apply Xresources and live-reload ?

```
 #make an alias for this command

alias load="kill -USR1 $(pidof st)"
alias  use="xrdb merge"

command : use Xresourcesfile && load

```
## Xresources live-reload demo

<img src="https://github.com/siduck76/dotfiles/blob/master/rice%20flex/live-reloadXresources.gif"> <br><br>

<b>DON'T SKIP THE README, if you want to have a similar setup / know default keybinds.<br><br></b>

## Dependencies : <br>

`libXft-devel libX11-devel harfbuzz-devel libXext-devel libXrender-devel libXinerama-devel ( on void linux , these are probably already installed on your system if you use arch based or debian I think)`

## Install <br>

`cd st & make && sudo make install `<br>

## Ram comparison with other terminals 
<img src="https://raw.githubusercontent.com/siduck76/dotfiles/master/rice%20flex/terminal_ramUsage.jpg"> <br><br>

## Keybindings<br>

<pre>
ctrl + shift + c        Copy  <br>
ctrl + shift + v        Paste <br>
alt  + comma            Zoom in <br>
alt  + .                Zoom out <br>
alt  + g                Reset Zoom<br>
alt  + s                Increase Transparency<br>
alt  + a                Decrease Transparency <br>
copy anything and right click on the terminal ( will paste the copied thing ) 
mod + shift + enter    open a new terminal with same cwd ( current working directory )


alt + k                 scroll down 
alt + j                 scroll up

</pre>

you can change all of these in config.h
<br>

## Themes/Fonts used

ls-icons: https://github.com/Yash-Handa/logo-ls <br>
Xresources: onedark ( just xrdb merge xresourcesfile , do this everytime you make any change to xresources file ) from this repo itself.<br>
Font: <a href="https://github.com/siduck76/matfonts"> JetbrainsMono Nerd Font + material design icon fonts </a>

a lil<a href="https://share.vidyard.com/watch/sdFeoxaRr124U893WVEcxN?"> video </a>demo to show zoom/alpha changing via keybinds

## Screenshots:

<img src="https://raw.githubusercontent.com/siduck76/personal-backup/master/delete_this/bruh.png"> <br><br>
<img src="https://raw.githubusercontent.com/siduck76/personal-backup/master/delete_this/ithree0-36-43.png"> <br><br>
<img src="https://raw.githubusercontent.com/siduck76/personal-backup/master/delete_this/two7-00.png"> <br><br>
<img src="https://raw.githubusercontent.com/siduck76/personal-backup/master/delete_this/u.png"> <br><hr>
