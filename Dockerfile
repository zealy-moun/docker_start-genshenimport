FROM gcc:latest
#RUN apt update && apt install -y gcc
RUN mkdir /home/start_genshen
WORKDIR /home/start_genshen
COPY . .
RUN cd /home/start_genshen
RUN gcc -c start_genshen.cpp -o genshen

CMD ["./genshen"]