# pma_malloc

This is a repo for a C implementation of the persistence memory arena allocator, as designed by
[Edward Amsden](https://github.com/eamsden).

## Design

- [Design doc](https://github.com/urbit/new-mars/blob/master/docs/persistence.md)
- [LMDB whitepaper](http://www.lmdb.tech/media/20120829-LinuxCon-MDB-txt.pdf)
- [PHK malloc whitepaper](https://papers.freebsd.org/1998/phk-malloc.files/phk-malloc-paper.pdf)
- [PHK's "Notes from the Architect"](https://varnish-cache.org/docs/trunk/phk/notes.html#)

## Reference Code Sources

- phkmalloc source pulled from
  [here](https://github.com/emeryberger/Malloc-Implementations/blob/master/allocators/phkmalloc/phkmalloc.c)
- lmdb source pulled from [here](https://github.com/LMDB/lmdb/tree/mdb.master/libraries/liblmdb)
