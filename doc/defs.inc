@c defs.inc                         -*- texinfo -*-
@c Common and build specific constants for the manuals.
@c This file has been created by mkdefsinc.

@ifclear defsincincluded
@set defsincincluded 1


@c Flags


@c Directories

@set BINDIR         /opt/gnupg-lab/bin
@set LIBEXECDIR     /opt/gnupg-lab/libexec
@set LIBDIR         /opt/gnupg-lab/lib/gnupg
@set DATADIR        /opt/gnupg-lab/share/gnupg
@set SYSCONFDIR     /opt/gnupg-lab/etc/gnupg
@set LOCALSTATEDIR  /opt/gnupg-lab/var
@set LOCALCACHEDIR  /opt/gnupg-lab/var/cache/gnupg
@set LOCALRUNDIR    /opt/gnupg-lab/var/run/gnupg
@set SYSCONFSKELDIR /opt/gnupg-lab/etc/skel/.gnupg

@c Version information a la version.texi

@set UPDATED 19 February 2025
@set UPDATED-MONTH February 2025
@set EDITION 2.4.8
@set VERSION 2.4.8

@c Algorithm defaults

@set GPGSYMENCALGO AES-128

@c Macros

@macro gpgname
gpg
@end macro
@macro gpgvname
gpgv
@end macro

@end ifclear

@c Local Variables:
@c buffer-read-only: t
@c End:
