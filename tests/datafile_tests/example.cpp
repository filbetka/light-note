#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE Hello
#include <boost/test/unit_test.hpp>
#include "datafile.h"

BOOST_AUTO_TEST_CASE(hello_test)
{
    version();
    int value = 1;
    BOOST_CHECK(value == 1);
}
