#include "xslider.hpp"

namespace xw
{
	extern template class xmaterialize<xslider, double>;
	extern template class xmaterialize<xslider, int>;

	extern template xmaterialize<xslider, int>::xmaterialize();
	extern template xmaterialize<xslider, double>::xmaterialize();

    void test_fun();
    slider<double> create_slider_double();
}