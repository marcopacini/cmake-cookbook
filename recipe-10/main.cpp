#include <boost/asio.hpp>
#include <iostream>

int main() {
    boost::asio::io_service io_svc;
    io_svc.run();
    return EXIT_SUCCESS;
}