FROM ubuntu:16.04
#FROM alpine:3.5

RUN apt-get update
RUN apt-get install -y socat

ENV HOME /root

#disable ASLR?
#RUN echo 0 > /proc/sys/kernel/randomize_va_space
#RUN sysctl kernel.randomize_va_space=0

RUN useradd -m --uid 995 sectalks

USER sectalks
WORKDIR /home
