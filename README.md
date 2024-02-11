# St (Suckless Terminal)

## Xresources live-reload demo

<img src="https://github.com/siduck/dotfiles/blob/all/rice%20flex/live-reloadXresources.gif"> <br><br>

## Dependencies

```
# Void
xbps-install libXft-devel libX11-devel harfbuzz-devel libXext-devel libXrender-devel libXinerama-devel gd-devel

# Debian (and ubuntu probably)
apt install build-essential libxft-dev libharfbuzz-dev libgd-dev

# Nix
nix develop github:siduck/st

# Arch
pacman -S gd

# Fedora (or Red-Hat based)
dnf install gd-devel libXft-devel

# SUSE (or openSUSE)
zypper in -t pattern devel_basis
zypper in gd-devel libXft-devel harfbuzz-devel

# Install font-symbola and libXft-bgra
```

## Try it out!

Before you install st on your system, you might want to try it out first.
To do so, simply run (requires [Nix](https://nixos.org/download.html))
`nix run github:siduck/st`

## Install

```
git clone https://github.com/siduck/st.git
cd st
(change the compiler if you cant use c99 to compile: sed -i 's/^#\ CC\ =\ c99/CC=gcc/' config.mk)
sudo make install
xrdb merge pathToXresourcesFile
```

(note : put the xrdb merge command in your wm's autostart or similar)

### Using Nix flakes

Add `st.url = "github:siduck/st";` to your inputs and install `inputs.st.packages."${system}".st-snazzy` package

## Fonts

- Install JetbrainsMono Mono Nerd Font or any nerd font from [here](https://www.nerdfonts.com/font-downloads)

## Patches:

- Ligatures
- sixel (check sixel branch)
- scrollback
- Clipboard
- Alpha(Transparency)
- Boxdraw
- patch_column ( doesnt cut text while resizing)
- font2
- right click paste
- st desktop entry
- newterm
- anygeometry
- xresources
- sync patch ( Better draw timing to reduce flicker/tearing and improve animation smoothness )
- live reload ( change colors/fonts on the fly )
  and more...
  <br>

## Xresources live-reload

```
# make an alias for this command

alias rel="xrdb merge pathToXresourcesFile && kill -USR1 $(pidof st)"
```

## Ram usage comparison with other terminals and speed test

<img src="https://raw.githubusercontent.com/siduck/dotfiles/all/rice%20flex/terminal_ramUsage.jpg"> <br><br>
<img src="https://raw.githubusercontent.com/siduck/dotfiles/all/rice%20flex/speedTest.png"> <br><br>
<img src="https://raw.githubusercontent.com/siduck/dotfiles/all/rice%20flex/speedTest1.png"> <br><br>

( note : This benchmark was done on my low-end machine which has a pentium cpu so the speed results might vary )

## Default Keybindings<br>

<pre>
ctrl + shift + c        Copy  <br>
ctrl + shift + v        Paste <br>
right click on the terminal ( will paste the copied thing )

(Zoom)
alt  + comma            Zoom in <br>
alt  + .                Zoom out <br>
alt  + g                Reset Zoom<br>

(Transparency)
alt  + s                Increase Transparency<br>
alt  + a                Decrease Transparency<br>
alt  + m                Reset Transparency<br>

alt + k                 scroll down
alt + j                 scroll up

mod + shift + enter    open a new terminal with same cwd ( current working directory )
</pre>

you can change all of these in config.h
<br>

## Themes/Fonts used

- ls-icons: https://github.com/Yash-Handa/logo-ls <br>
- Xresources: onedark (just `xrdb merge xresourcesfile`, do this everytime you make any change to xresources file) from this repo itself.<br>
- Font: JetbrainsMono Nerd Font + material design icon fonts

## Screenshots:

<img src="https://raw.githubusercontent.com/siduck/dotfiles/all/misc/delete_this/bruh.png"> <br><br>
<img src="https://raw.githubusercontent.com/siduck/dotfiles/all/misc/delete_this/ithree0-36-43.png"> <br><br>
<img src="https://raw.githubusercontent.com/siduck/dotfiles/all/misc/delete_this/two7-00.png"> <br><br>
<img src="https://raw.githubusercontent.com/siduck/dotfiles/all/misc/delete_this/u.png"> <br><hr>

# Credits

- [live-reload](https://github.com/nimaipatel/st)
- [patch_column](https://github.com/nimaipatel/st/blob/all/patches/7672445bab01cb4e861651dc540566ac22e25812.diff)
