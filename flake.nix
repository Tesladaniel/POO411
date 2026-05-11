{
  description = "Entorno C/C++ con clang";

  inputs.nixpkgs.url = "github:NixOS/nixpkgs/nixos-unstable";

  outputs = {nixpkgs, ...}: let
    system = "x86_64-linux";
    pkgs = import nixpkgs {inherit system;};
  in {
    devShells.${system}.default = pkgs.mkShell {
      packages = with pkgs; [
        llvmPackages_latest.clang
        llvmPackages_latest.clang-tools
        llvmPackages_latest.lld
        llvmPackages_latest.lldb

        gcc
        gdb
        bear
        pkg-config
      ];

      shellHook = ''
        export CC=clang
        export CXX=clang++
        export NVIM_ENABLE_C_CPP=1
        exec fish
      '';
    };
  };
}
