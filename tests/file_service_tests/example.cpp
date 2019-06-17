#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE file_manager
#include <boost/test/unit_test.hpp>
#include "manager/file_manager.h"


BOOST_AUTO_TEST_CASE(file_manager__get)
{
    File_Manager manager;
    Data data = manager.Get();

    BOOST_CHECK(data.title == "");
}
