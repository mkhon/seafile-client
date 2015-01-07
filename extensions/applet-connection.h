#ifndef SEAFILE_EXTENSION_APPLET_CONNECTION_H
#define SEAFILE_EXTENSION_APPLET_CONNECTION_H

#include <vector>
#include <string>

namespace seafile {

class AppletCommand;

/**
 * Connection to the seafile appplet, thourgh which the shell extension would
 * execute an `AppletCommand`.
 *
 * It connects to seafile appelt through a named pipe.
 */
class AppletConnection {
public:
    static AppletConnection *instance();

    /**
     * Send a command to seafile applet, and get back the reponse.
     */
    bool sendCommand(const AppletCommand& cmd, char *response);

private:
    AppletConnection();
};

/**
 * Abstract base class for all commands sent to seafile applet.
 */
class AppletCommand {
public:
    AppletCommand(std::string name, std::vector<std::string> args);
};

}

#endif // SEAFILE_EXTENSION_APPLET_CONNECTION_H
