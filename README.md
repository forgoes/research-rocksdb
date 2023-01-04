# research-rocksdb

### Create soft links to the RocksDB include and library directories

```bash
ln -s ~/github/facebook/rocksdb/include/rocksdb ~/github/forgoes/research-rocksdb/rocksdb
rm -rf ~/github/forgoes/research-rocksdb/rocksdb

ln -s ~/github/facebook/rocksdb/cmake-build-debug/librocksdb.a ~/github/forgoes/research-rocksdb/rocksdb/librocksdb.a
rm -rf ~/github/forgoes/research-rocksdb/rocksdb/librocksdb.a
```
