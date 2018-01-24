#!/bin/bash
make

cd Async
make
cd ..

cd AsyncTaskAndDataParallel
make
cd ..

cd AsyncTaskAndDataParallelFireAndForgetSave
make
cd ..

cd AsyncTaskParallel
make
cd ..

cd Sync
make
cd ..

cd SyncDataParallel
make
cd ..
