使用DockerFile编译镜像（推荐）

docker build -t zealymoun2000/docker_start_genshen_import:1.0 .

使用dockerhub拉取镜像
#前面的区域以后再来探索吧！

运行docker镜像
docker run -it \
    --name genshen_import \
zealymoun2000/docker_start_genshen_import:1.0 /bin/bash