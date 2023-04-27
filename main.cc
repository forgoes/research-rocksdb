//
// Created by Jayden on 2023/1/4.
//

#include "rocksdb/db.h"


int main() {
    rocksdb::DB* db;
    rocksdb::Options options;
    options.create_if_missing = true;
    rocksdb::Status status = rocksdb::DB::Open(options, "/Users/jayden.hong/github/forgoes/research-rocksdb/db/test", &db);

    if (!status.ok()) {
        printf("open db failed: %s", status.ToString().c_str());
        return 1;
    }

    std::string value;
    rocksdb::Status s = db->Put(rocksdb::WriteOptions(), "key1", "222222");
    if (s.ok()) s = db->Get(rocksdb::ReadOptions(), "key1", &value);
    if (s.ok()) s = db->Put(rocksdb::WriteOptions(), "key2", value);
    std::string got;
    if (s.ok()) s = db->Get(rocksdb::ReadOptions(), "key2", &got);
    if (s.ok()) s = db->Delete(rocksdb::WriteOptions(), "key1");

    printf("open db successfully");

    return 0;
}