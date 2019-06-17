#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE Hello
#include <boost/test/unit_test.hpp>
#include "gateway_data.h"

BOOST_AUTO_TEST_CASE(hello_test)
{
    BOOST_CHECK(hello() == 1);
}