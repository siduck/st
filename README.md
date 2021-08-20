# st (Suckless Terminal)

This is a custom suckless st build and I've added some additional patches like newterm , rightclick paste , desktop entry ,sixel, live-reload xresources , dynamic cursor etc!.

## Patches:

- alpha 
- Ligatures
- sixel 
- scrollback
- Clipboard
- Alpha(Transparency)
- Boxdraw
- w3m
- patch_column ( doesnt cut text while resizing)
- font2
- right click paste
- st desktop entry
- newterm
- anysize
- anygeometry
- xresources
- sync patch ( Better draw timing to reduce flicker/tearing and improve animation smoothness )
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


```

#void (most of these are already installed on arch distros)
xbps-install libXft-devel libX11-devel harfbuzz-devel libXext-devel libXrender-devel libXinerama-devel
 

#Debian (and ubuntu probably)
apt install build-essential libxft-dev libharfbuzz-dev 

```

## Install <br>

`cd st (this repo) `<br>
`sudo make install `<br>

## other ST builds <br>

1. Default ST (main branch)
2. Sixel St (sixel branch , with sixel graphics support)
3. St with vim-browse (vim-browse branch , navigate within like vim)

- Use a different st build ( clone its branch)

`example: git clone https://github.com/siduck76/st --branch sixel`

## Ram comparison with other terminals and speed test
<img src="https://raw.githubusercontent.com/siduck76/dotfiles/master/rice%20flex/terminal_ramUsage.jpg"> <br><br>
<img src="https://raw.githubusercontent.com/siduck76/dotfiles/master/rice%20flex/speedTest.png"> <br><br>
<img src="https://raw.githubusercontent.com/siduck76/dotfiles/master/rice%20flex/speedTest1.png"> <br><br>


## Default Keybindings<br>

<pre>
ctrl + shift + c        Copy  <br>
ctrl + shift + v        Paste <br>
alt  + comma            Zoom in <br>
alt  + .                Zoom out <br>
alt  + g                Reset Zoom<br>
alt  + s                Increase Transparency<br>
alt  + a                Decrease Transparency<br>
alt  + m                Reset Transparency<br>
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

<img src="https://raw.githubusercontent.com/siduck76/personal-backup/master/misc/delete_this/bruh.png"> <br><br>
<img src="https://raw.githubusercontent.com/siduck76/personal-backup/master/misc/delete_this/ithree0-36-43.png"> <br><br>
<img src="https://raw.githubusercontent.com/siduck76/personal-backup/master/misc/delete_this/two7-00.png"> <br><br>
<img src="https://raw.githubusercontent.com/siduck76/personal-backup/master/misc/delete_this/u.png"> <br><hr>

# Credits

- [live-reload](https://github.com/nimaipatel/st) 
- [patch_column](https://github.com/nimaipatel/st/blob/master/patches/7672445bab01cb4e861651dc540566ac22e25812.diff)
