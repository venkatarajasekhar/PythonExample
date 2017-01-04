#!/bin/sh
die()
xmkdir()
R="$1"
[ -n "$R" ] || die "usage: prepare-chroot.sh <root>"
[ -x git ] || die "This script needs to be executed at git source code's top directory"
[ -x /bin/busybox ] || die "You need busybox"
xmkdir "$R" "$R/bin" "$R/etc" "$R/lib" "$R/dev"
[ -c "$R/dev/null" ] || die "/dev/null is missing. Do mknod $R/dev/null c 1 3 && chmod 666 $R/dev/null"
echo "root:x:0:0:root:/:/bin/sh" > "$R/etc/passwd"
echo "$(id -nu):x:$(id -u):$(id -g)::$(pwd)/t:/bin/sh" >> "$R/etc/passwd"
echo "root::0:root" > "$R/etc/group"
echo "$(id -ng)::$(id -g):$(id -nu)" >> "$R/etc/group"
[ -x "$R/bin/busybox" ] || cp /bin/busybox "$R/bin/busybox"
[ -x "$R/bin/sh" ] || ln -s /bin/busybox "$R/bin/sh"
[ -x "$R/bin/su" ] || ln -s /bin/busybox "$R/bin/su"
mkdir -p "$R$(pwd)"
rsync --exclude-from t/t1509/excludes -Ha . "$R$(pwd)"
ldd git | grep '/' | sed 's,.*\s\(/[^ ]*\).*,\1,' | while read i; do
mkdir -p "$R$(dirname $i)"
cp "$i" "$R/$i"
done
echo "Execute this in root: 'chroot $R /bin/su - $(id -nu)'"
