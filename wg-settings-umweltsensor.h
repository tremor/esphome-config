#include <WireGuard-ESP32.h>
static WireGuard wg;

char private_key[] = "sPKE2lRWDseK/m++VWNgnPxwGGc3zomBUfrR7ndfDVw="; // private key of the client (ESP)
char public_key[]  = "E3X5676O4u08VaFOvL+H3EGVvbfPVXqoDyrDIahw+CE="; // public key of the server (remote linux VPN server)
IPAddress local_ip(10,0,50,200);           // VPN IP for this VPN client
char endpoint_address[] = "frontend.schmidtie.net"; // VPN/Wireguard server hostname
int endpoint_port = 23456;                   // VPN/Wireguard server port
