#!/usr/bin/python

import socket, argparse

# initiate parser
parser = argparse.ArgumentParser()

# add long and short arguments
parser.add_argument("--ipaddress", "-i", help="identify ip address")
parser.add_argument("--port", "-p", help="identify a port")

# read the arguments from the command line
args = parser.parse_args()

# open socket
sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

# check for ip address and port
if (args.ipaddress != "") & (args.port != ""):
    if sock.connect_ex((args.ipaddress, int(args.port))):
        print("[-] Port %s is closed [-]" % args.port)
    else:
        print("[+] Port %s is open [+]" % args.port)
else:
    print("[!] Format: ./pingports -i <ip address> -p <port>")



