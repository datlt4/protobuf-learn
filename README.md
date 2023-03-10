# protocol-buffers

## Install PROTOC compiler

### Install via `apt`
- Protobuf compiler and libraries could be installed via apt on Ubuntu. However, to use the latest version of protobuf, we install from source code.

    - Mac: `brew install protobuf`

    - Ubuntu : `sudo apt install protobuf-compiler`

    - Windows: [link](https://www.geeksforgeeks.org/how-to-install-protocol-buffers-on-windows/)

### Install from source code

```bash
wget https://github.com/protocolbuffers/protobuf/releases/download/v21.12/protobuf-all-21.12.tar.gz
tar -xf protobuf-all-21.12.tar.gz
cd protobuf-21.12

./configure
make -j$(nproc)
# Make sure the installation would not have problems
make check -j$(nproc)
sudo make install
# Refresh shared library cache
sudo ldconfig
```

### Install Python Runtime from source code

```bash
python3 -m pip install tzdata==2022.5
cd python && \
    python3 setup.py build && \
    python3 setup.py test && \
    python3 setup.py install && \
    python3 -m pip install .
```

### Dockerfile

https://github.com/leimao/Protocol-Buffer-Examples/blob/master/docker/protobuf.Dockerfile

### Python

```bash
python3 -m pip install protobuf
```

> Check if it works

```bash
$ protoc --version
libprotoc 3.17.1
```

## [proto2](proto2/)

## [proto3](proto3/)
