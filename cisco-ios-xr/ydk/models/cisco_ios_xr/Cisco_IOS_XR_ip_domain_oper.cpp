
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ip_domain_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ip_domain_oper {

HostAddressBase::HostAddressBase()
     : Identity("http://cisco.com/ns/yang/Cisco-IOS-XR-ip-domain-oper", "Cisco-IOS-XR-ip-domain-oper", "Cisco-IOS-XR-ip-domain-oper:Host-address-base")
{

}

HostAddressBase::~HostAddressBase()
{
}

IpDomain::IpDomain()
    :
    vrfs(std::make_shared<IpDomain::Vrfs>())
{
    vrfs->parent = this;

    yang_name = "ip-domain"; yang_parent_name = "Cisco-IOS-XR-ip-domain-oper"; is_top_level_class = true; has_list_ancestor = false;
}

IpDomain::~IpDomain()
{
}

bool IpDomain::has_data() const
{
    return (vrfs !=  nullptr && vrfs->has_data());
}

bool IpDomain::has_operation() const
{
    return is_set(yfilter)
	|| (vrfs !=  nullptr && vrfs->has_operation());
}

std::string IpDomain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-domain-oper:ip-domain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpDomain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> IpDomain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrfs")
    {
        if(vrfs == nullptr)
        {
            vrfs = std::make_shared<IpDomain::Vrfs>();
        }
        return vrfs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpDomain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vrfs != nullptr)
    {
        children["vrfs"] = vrfs;
    }

    return children;
}

void IpDomain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void IpDomain::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> IpDomain::clone_ptr() const
{
    return std::make_shared<IpDomain>();
}

std::string IpDomain::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string IpDomain::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function IpDomain::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> IpDomain::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool IpDomain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrfs")
        return true;
    return false;
}

IpDomain::Vrfs::Vrfs()
{

    yang_name = "vrfs"; yang_parent_name = "ip-domain"; is_top_level_class = false; has_list_ancestor = false;
}

IpDomain::Vrfs::~Vrfs()
{
}

bool IpDomain::Vrfs::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool IpDomain::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string IpDomain::Vrfs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-domain-oper:ip-domain/" << get_segment_path();
    return path_buffer.str();
}

std::string IpDomain::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpDomain::Vrfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> IpDomain::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        for(auto const & c : vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<IpDomain::Vrfs::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpDomain::Vrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void IpDomain::Vrfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void IpDomain::Vrfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool IpDomain::Vrfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

IpDomain::Vrfs::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"}
    	,
    server(std::make_shared<IpDomain::Vrfs::Vrf::Server>())
	,hosts(std::make_shared<IpDomain::Vrfs::Vrf::Hosts>())
{
    server->parent = this;
    hosts->parent = this;

    yang_name = "vrf"; yang_parent_name = "vrfs"; is_top_level_class = false; has_list_ancestor = false;
}

IpDomain::Vrfs::Vrf::~Vrf()
{
}

bool IpDomain::Vrfs::Vrf::has_data() const
{
    return vrf_name.is_set
	|| (server !=  nullptr && server->has_data())
	|| (hosts !=  nullptr && hosts->has_data());
}

bool IpDomain::Vrfs::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (server !=  nullptr && server->has_operation())
	|| (hosts !=  nullptr && hosts->has_operation());
}

std::string IpDomain::Vrfs::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-domain-oper:ip-domain/vrfs/" << get_segment_path();
    return path_buffer.str();
}

std::string IpDomain::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpDomain::Vrfs::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> IpDomain::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<IpDomain::Vrfs::Vrf::Server>();
        }
        return server;
    }

    if(child_yang_name == "hosts")
    {
        if(hosts == nullptr)
        {
            hosts = std::make_shared<IpDomain::Vrfs::Vrf::Hosts>();
        }
        return hosts;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpDomain::Vrfs::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(server != nullptr)
    {
        children["server"] = server;
    }

    if(hosts != nullptr)
    {
        children["hosts"] = hosts;
    }

    return children;
}

void IpDomain::Vrfs::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void IpDomain::Vrfs::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool IpDomain::Vrfs::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "server" || name == "hosts" || name == "vrf-name")
        return true;
    return false;
}

IpDomain::Vrfs::Vrf::Server::Server()
    :
    domain_lookup{YType::enumeration, "domain-lookup"},
    domain_name{YType::str, "domain-name"},
    domain{YType::str, "domain"}
{

    yang_name = "server"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

IpDomain::Vrfs::Vrf::Server::~Server()
{
}

bool IpDomain::Vrfs::Vrf::Server::has_data() const
{
    for (std::size_t index=0; index<server_address.size(); index++)
    {
        if(server_address[index]->has_data())
            return true;
    }
    for (auto const & leaf : domain.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return domain_lookup.is_set
	|| domain_name.is_set;
}

bool IpDomain::Vrfs::Vrf::Server::has_operation() const
{
    for (std::size_t index=0; index<server_address.size(); index++)
    {
        if(server_address[index]->has_operation())
            return true;
    }
    for (auto const & leaf : domain.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(domain_lookup.yfilter)
	|| ydk::is_set(domain_name.yfilter)
	|| ydk::is_set(domain.yfilter);
}

std::string IpDomain::Vrfs::Vrf::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpDomain::Vrfs::Vrf::Server::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain_lookup.is_set || is_set(domain_lookup.yfilter)) leaf_name_data.push_back(domain_lookup.get_name_leafdata());
    if (domain_name.is_set || is_set(domain_name.yfilter)) leaf_name_data.push_back(domain_name.get_name_leafdata());

    auto domain_name_datas = domain.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), domain_name_datas.begin(), domain_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> IpDomain::Vrfs::Vrf::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "server-address")
    {
        for(auto const & c : server_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<IpDomain::Vrfs::Vrf::Server::ServerAddress>();
        c->parent = this;
        server_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpDomain::Vrfs::Vrf::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : server_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void IpDomain::Vrfs::Vrf::Server::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain-lookup")
    {
        domain_lookup = value;
        domain_lookup.value_namespace = name_space;
        domain_lookup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain-name")
    {
        domain_name = value;
        domain_name.value_namespace = name_space;
        domain_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain")
    {
        domain.append(value);
    }
}

void IpDomain::Vrfs::Vrf::Server::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain-lookup")
    {
        domain_lookup.yfilter = yfilter;
    }
    if(value_path == "domain-name")
    {
        domain_name.yfilter = yfilter;
    }
    if(value_path == "domain")
    {
        domain.yfilter = yfilter;
    }
}

bool IpDomain::Vrfs::Vrf::Server::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "server-address" || name == "domain-lookup" || name == "domain-name" || name == "domain")
        return true;
    return false;
}

IpDomain::Vrfs::Vrf::Server::ServerAddress::ServerAddress()
    :
    af_name{YType::identityref, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "server-address"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true;
}

IpDomain::Vrfs::Vrf::Server::ServerAddress::~ServerAddress()
{
}

bool IpDomain::Vrfs::Vrf::Server::ServerAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool IpDomain::Vrfs::Vrf::Server::ServerAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string IpDomain::Vrfs::Vrf::Server::ServerAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpDomain::Vrfs::Vrf::Server::ServerAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> IpDomain::Vrfs::Vrf::Server::ServerAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpDomain::Vrfs::Vrf::Server::ServerAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void IpDomain::Vrfs::Vrf::Server::ServerAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void IpDomain::Vrfs::Vrf::Server::ServerAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool IpDomain::Vrfs::Vrf::Server::ServerAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

IpDomain::Vrfs::Vrf::Hosts::Hosts()
{

    yang_name = "hosts"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

IpDomain::Vrfs::Vrf::Hosts::~Hosts()
{
}

bool IpDomain::Vrfs::Vrf::Hosts::has_data() const
{
    for (std::size_t index=0; index<host.size(); index++)
    {
        if(host[index]->has_data())
            return true;
    }
    return false;
}

bool IpDomain::Vrfs::Vrf::Hosts::has_operation() const
{
    for (std::size_t index=0; index<host.size(); index++)
    {
        if(host[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string IpDomain::Vrfs::Vrf::Hosts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hosts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpDomain::Vrfs::Vrf::Hosts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> IpDomain::Vrfs::Vrf::Hosts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "host")
    {
        for(auto const & c : host)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<IpDomain::Vrfs::Vrf::Hosts::Host>();
        c->parent = this;
        host.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpDomain::Vrfs::Vrf::Hosts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : host)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void IpDomain::Vrfs::Vrf::Hosts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void IpDomain::Vrfs::Vrf::Hosts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool IpDomain::Vrfs::Vrf::Hosts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host")
        return true;
    return false;
}

IpDomain::Vrfs::Vrf::Hosts::Host::Host()
    :
    host_name{YType::str, "host-name"},
    af_name{YType::identityref, "af-name"},
    age{YType::uint16, "age"}
    	,
    host_alias_list(std::make_shared<IpDomain::Vrfs::Vrf::Hosts::Host::HostAliasList>())
{
    host_alias_list->parent = this;

    yang_name = "host"; yang_parent_name = "hosts"; is_top_level_class = false; has_list_ancestor = true;
}

IpDomain::Vrfs::Vrf::Hosts::Host::~Host()
{
}

bool IpDomain::Vrfs::Vrf::Hosts::Host::has_data() const
{
    for (std::size_t index=0; index<host_address.size(); index++)
    {
        if(host_address[index]->has_data())
            return true;
    }
    return host_name.is_set
	|| af_name.is_set
	|| age.is_set
	|| (host_alias_list !=  nullptr && host_alias_list->has_data());
}

bool IpDomain::Vrfs::Vrf::Hosts::Host::has_operation() const
{
    for (std::size_t index=0; index<host_address.size(); index++)
    {
        if(host_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(host_name.yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(age.yfilter)
	|| (host_alias_list !=  nullptr && host_alias_list->has_operation());
}

std::string IpDomain::Vrfs::Vrf::Hosts::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host" <<"[host-name='" <<host_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpDomain::Vrfs::Vrf::Hosts::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host_name.is_set || is_set(host_name.yfilter)) leaf_name_data.push_back(host_name.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (age.is_set || is_set(age.yfilter)) leaf_name_data.push_back(age.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> IpDomain::Vrfs::Vrf::Hosts::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "host-alias-list")
    {
        if(host_alias_list == nullptr)
        {
            host_alias_list = std::make_shared<IpDomain::Vrfs::Vrf::Hosts::Host::HostAliasList>();
        }
        return host_alias_list;
    }

    if(child_yang_name == "host-address")
    {
        for(auto const & c : host_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<IpDomain::Vrfs::Vrf::Hosts::Host::HostAddress>();
        c->parent = this;
        host_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpDomain::Vrfs::Vrf::Hosts::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(host_alias_list != nullptr)
    {
        children["host-alias-list"] = host_alias_list;
    }

    for (auto const & c : host_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void IpDomain::Vrfs::Vrf::Hosts::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "host-name")
    {
        host_name = value;
        host_name.value_namespace = name_space;
        host_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "age")
    {
        age = value;
        age.value_namespace = name_space;
        age.value_namespace_prefix = name_space_prefix;
    }
}

void IpDomain::Vrfs::Vrf::Hosts::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "host-name")
    {
        host_name.yfilter = yfilter;
    }
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "age")
    {
        age.yfilter = yfilter;
    }
}

bool IpDomain::Vrfs::Vrf::Hosts::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host-alias-list" || name == "host-address" || name == "host-name" || name == "af-name" || name == "age")
        return true;
    return false;
}

IpDomain::Vrfs::Vrf::Hosts::Host::HostAliasList::HostAliasList()
    :
    host_alias{YType::str, "host-alias"}
{

    yang_name = "host-alias-list"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true;
}

IpDomain::Vrfs::Vrf::Hosts::Host::HostAliasList::~HostAliasList()
{
}

bool IpDomain::Vrfs::Vrf::Hosts::Host::HostAliasList::has_data() const
{
    for (auto const & leaf : host_alias.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool IpDomain::Vrfs::Vrf::Hosts::Host::HostAliasList::has_operation() const
{
    for (auto const & leaf : host_alias.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(host_alias.yfilter);
}

std::string IpDomain::Vrfs::Vrf::Hosts::Host::HostAliasList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host-alias-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpDomain::Vrfs::Vrf::Hosts::Host::HostAliasList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto host_alias_name_datas = host_alias.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), host_alias_name_datas.begin(), host_alias_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> IpDomain::Vrfs::Vrf::Hosts::Host::HostAliasList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpDomain::Vrfs::Vrf::Hosts::Host::HostAliasList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void IpDomain::Vrfs::Vrf::Hosts::Host::HostAliasList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "host-alias")
    {
        host_alias.append(value);
    }
}

void IpDomain::Vrfs::Vrf::Hosts::Host::HostAliasList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "host-alias")
    {
        host_alias.yfilter = yfilter;
    }
}

bool IpDomain::Vrfs::Vrf::Hosts::Host::HostAliasList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host-alias")
        return true;
    return false;
}

IpDomain::Vrfs::Vrf::Hosts::Host::HostAddress::HostAddress()
    :
    af_name{YType::identityref, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "host-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true;
}

IpDomain::Vrfs::Vrf::Hosts::Host::HostAddress::~HostAddress()
{
}

bool IpDomain::Vrfs::Vrf::Hosts::Host::HostAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool IpDomain::Vrfs::Vrf::Hosts::Host::HostAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string IpDomain::Vrfs::Vrf::Hosts::Host::HostAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpDomain::Vrfs::Vrf::Hosts::Host::HostAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> IpDomain::Vrfs::Vrf::Hosts::Host::HostAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpDomain::Vrfs::Vrf::Hosts::Host::HostAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void IpDomain::Vrfs::Vrf::Hosts::Host::HostAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void IpDomain::Vrfs::Vrf::Hosts::Host::HostAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool IpDomain::Vrfs::Vrf::Hosts::Host::HostAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Ipv4::Ipv4()
     : Identity("http://cisco.com/ns/yang/Cisco-IOS-XR-ip-domain-oper", "Cisco-IOS-XR-ip-domain-oper", "Cisco-IOS-XR-ip-domain-oper:ipv4")
{

}

Ipv4::~Ipv4()
{
}

Ipv6::Ipv6()
     : Identity("http://cisco.com/ns/yang/Cisco-IOS-XR-ip-domain-oper", "Cisco-IOS-XR-ip-domain-oper", "Cisco-IOS-XR-ip-domain-oper:ipv6")
{

}

Ipv6::~Ipv6()
{
}

const Enum::YLeaf ServerDomainLkup::static_mapping {0, "static-mapping"};
const Enum::YLeaf ServerDomainLkup::domain_service {1, "domain-service"};


}
}

