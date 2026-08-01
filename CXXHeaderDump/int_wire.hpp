#ifndef UE4SS_SDK_int_wire_HPP
#define UE4SS_SDK_int_wire_HPP

class Iint_wire_C : public IInterface
{

    void wireDisconnected(class Awire_C* wire, bool side);
    void wireConnected(class Awire_C* wire, bool side);
    void wirePass(class Awire_C* wire);
}; // Size: 0x28

#endif
