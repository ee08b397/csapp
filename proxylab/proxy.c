#include <stdio.h>
#include "proxy.h"

static const char *user_agent = "User-Agent: Mozilla/5.0 (X11; Linux x86_64; rv:10.0.3) Gecko/20120305 Firefox/10.0.3\r\n";
static const char *accept = "Accept: text/html,application/xhtml+xml,application/xml;q=0.9,*/*;q=0.8\r\n";
static const char *accept_encoding = "Accept-Encoding: gzip, deflate\r\n";

unsigned int QUIT = 0;

int main()
{
    printf("%s%s%s", user_agent, accept, accept_encoding);
    return 0;
}
