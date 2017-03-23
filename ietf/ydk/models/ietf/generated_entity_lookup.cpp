#include "generated_entity_lookup.hpp"
#include <ydk/entity_lookup.hpp>
#include <ydk/path_api.hpp>

namespace ydk
{

void ietf_augment_lookup_tables()
{

    ydk_global_capabilities.push_back(path::Capability{std::string{"iana-crypt-hash"},"2014-08-06", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"ietf-interfaces-ext"},"", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"ietf-yang-types"},"2013-07-15", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"iana-if-type"},"2014-05-08", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"ietf-netconf-monitoring"},"2010-10-04", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"ietf-netconf-acm"},"2012-02-22", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"ietf-interfaces"},"2014-05-08", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"ietf-netconf-with-defaults"},"2011-06-01", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"ietf-yang-smiv2"},"2012-06-22", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"ietf-netconf"},"2011-06-01", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"ietf-inet-types"},"2013-07-15", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"ietf-system"},"2014-08-06", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"ietf-syslog-types"},"2015-10-14", {}, {}});

}

}