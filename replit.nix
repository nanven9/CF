{ pkgs }: {
	deps = [
		pkgs.busybox-sandbox-shell
  pkgs.vimHugeX
  pkgs.sudo
  pkgs.python39Packages.pip
  pkgs.python39Full
  pkgs.clang_12
		pkgs.ccls
		pkgs.gdb
		pkgs.gnumake
	];
}