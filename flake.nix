{
  description = "snazzy terminal (suckless + lightweight)";

  inputs.nixpkgs.url = "github:nixos/nixpkgs/nixos-unstable";
  inputs.flake-utils.url = "github:numtide/flake-utils";

  outputs = { self, nixpkgs, flake-utils }:
    flake-utils.lib.eachDefaultSystem (system:
      let pkgs = nixpkgs.legacyPackages.${system};
      in rec {
        packages = flake-utils.lib.flattenTree {
          st-snazzy = pkgs.callPackage ./default.nix { };
        };
        defaultPackage = packages.st-snazzy;
        apps.st-snazzy = flake-utils.lib.mkApp {
          drv = packages.st-snazzy;
          exePath = "/bin/st";
        };
        apps.default = apps.st-snazzy;
        defaultApp = apps.st-snazzy;
        devShell = pkgs.mkShell rec {
          name = "st-snazzy";
          packages = with pkgs; [
            pkgconfig
            xorg.libX11
            xorg.libXft
            fontconfig
            harfbuzz
            gd
            glib
          ];
        };

      });
}
