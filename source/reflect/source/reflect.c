/*
 *	Reflect Library by Parra Studios
 *	Copyright (C) 2016 Vicente Eduardo Ferrer Garcia <vic798@gmail.com>
 *
 *	A library for provide reflection and metadata representation.
 *
 */

#include <metacall/metacall-version.h>

#include <reflect/reflect.h>

const char * reflect_print_info()
{
	static const char reflect_info[] =
		"Reflect Library " METACALL_VERSION "\n"
		"Copyright (c) 2016 Vicente Eduardo Ferrer Garcia <vic798@gmail.com>\n"

		#ifdef REFLECT_STATIC_DEFINE
			"Compiled as static library type"
		#else
			"Compiled as shared library type"
		#endif

		"\n";

	return reflect_info;
}
