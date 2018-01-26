// #include "xprecompiled.hpp"
#include "xslider.hpp"
#include <iostream>

namespace xw
{
	// template slider<double>;
	template class xmaterialize<xslider, double>;
	template class xmaterialize<xslider, int>;

	template xmaterialize<xslider, int>::xmaterialize();
	template xmaterialize<xslider, double>::xmaterialize();

	slider<double> create_slider_double()
	{
		return slider<double>();
	}

	// static auto slizer = create_slider_double();

	void test_fun ()
	{
		std::cout << "Helpo" << std::endl;
	}
}