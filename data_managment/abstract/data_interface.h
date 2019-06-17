#ifndef DATA_INTERFACE_H
#define DATA_INTERFACE_H

#include "data.h"


class Data_Intefrace
{

    protected:

        virtual void Initialize() = 0;

    public:

        virtual void Save(Data& data) = 0;
        virtual Data Get() const = 0;

};

#endif // DATA_INTERFACE_H
