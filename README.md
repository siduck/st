# st (Simple Terminal)
My custom terminal build based on (lukesmith's with some additional patches like newterm , rightclick paste , desktop entry , live-reload ,sixel, anygeometry and sane keybinds) (is functional enough and complete for a terminal).

## Patches: 
- Sixel (credits to Tanish2002)
- Ligatures
- Clipboard
- Boxdraw
- Scrollback
- Xresources
- externalpipe
- iso14755
- w3m
- font2
- st desktop entry 
- newterm 
- anysize
- anygeometry 
- live reload ( change colors/fonts on the fly )
<br>
<b>DON'T SKIP THE README, if you want to have a similar setup / know default keybinds.<br><br></b>

## To use this build 
`git clone -b sixel  --single-branch  https://github.com/siduck76/st.git` 
## Screenshots: 
<img src="https://raw.githubusercontent.com/siduck76/personal-backup/master/misc/delete_this/ithree0-36-43.png"> <br><br>
<img src="https://raw.githubusercontent.com/siduck76/personal-backup/master/misc/delete_this/two7-00.png"> <br><br>
<img src="https://raw.githubusercontent.com/siduck76/personal-backup/master/misc/delete_this/u.png"> <br><hr>
<img src="https://raw.githubusercontent.com/siduck76/personal-backup/master/misc/delete_this/sixel.png"> <br><hr>

## Install <br> 
`cd st & make && sudo make install `<br>

## Keybindings<br> 
<pre>
ctrl + shift + c        Copy  <br>
ctrl + shift + v        Paste <br>
alt  + comma            Zoom in <br>
alt  + .                Zoom out <br>
alt  + g                Reset Zoom<br>

 view images in cli : img2sixel -w size file <br><br> 
copy anything and right click on the terminal ( will paste the copied thing ) 
mod + shift + enter    open a new terminal with same cwd ( current working directory )

</pre>
you can change all of these in config.h
<br> 

## Themes/Fonts used
ls-icons: https://github.com/Yash-Handa/logo-ls <br>
Fresources: onedark ( just xrdb merge xresourcesfile , do this everytime you make any change to xresources file ) from this repo itself.<br>
Font: <a href="https://github.com/siduck76/matfonts">  JetbrainsMono Nerd Font + material design icon fonts </a> 


a lil<a href="https://share.vidyard.com/watch/sdFeoxaRr124U893WVEcxN?"> video  </a>demo to show zoom/alpha changing via keybinds

