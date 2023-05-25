#include "../Controller/Controller.h"
#include "./Router.h"

// Path registration
http::Router::Router() {
    // Initialize the root
    root = new http::PathTrie("ROOT", 0);

    // Register public files
    registerPublicPath();

    // Register path
    registerPath("GET", "/", Controller::getHome);
    registerPath("GET", "/user/:id", Controller::getUser);
    registerPath("GET", "/user/chat", Controller::getUserChat);
    registerPath("GET", "/redirect-user", Controller::redirectUserToGoogle);
    registerPath("POST", "/user", Controller::saveUserData);

    registerPath("GET", "*", Controller::getNotFound);
}