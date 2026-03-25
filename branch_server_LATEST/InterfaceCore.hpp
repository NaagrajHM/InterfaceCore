#pragma once
#include <memory>
using namespace std;

class InterfaceCore{
   public:
      virtual                          ~InterfaceCore ()     = default;
      virtual bool                      MainFunction  (void) = 0;
      static  unique_ptr<InterfaceCore> Instantiate   (void);
};
