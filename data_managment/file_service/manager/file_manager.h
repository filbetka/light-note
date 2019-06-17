#ifndef DATAFILE_FILE_MANAGER_H
#define DATAFILE_FILE_MANAGER_H

#include "data_managment/abstract/data_interface.h"


class File_Manager : public Data_Intefrace
{

    public:

        File_Manager();

    private:

        void Initialize();

    public:

        void Save(Data& data);
        Data Get() const;

};


#endif //DATAFILE_FILE_MANAGER_H
