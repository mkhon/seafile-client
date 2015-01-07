
#include "applet-connection.h"

namespace seafile {

AppletConnection::AppletConnection()
{
}

bool AppletConnection::sendCommand(const AppletCommand& cmd, char *response)
{
    return true;
}

AppletCommand::AppletCommand(std::string name, std::vector<std::string> args)
{
}

}
