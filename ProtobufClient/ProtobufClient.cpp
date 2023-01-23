// ProtobufClient.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Tx_channel.pb.h"

using namespace CNES::messages;

int main()
{
    std::shared_ptr<Tx_channel> tx_chan_msg = std::make_shared<Tx_channel>();
    
    tx_chan_msg->set_link_rate_bps(11000);

    std::cout << "Example Protobuf: " << tx_chan_msg->ShortDebugString() << std::endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
