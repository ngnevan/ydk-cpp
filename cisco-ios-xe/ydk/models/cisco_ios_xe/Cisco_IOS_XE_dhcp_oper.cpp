
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_dhcp_oper.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_dhcp_oper {

DhcpOperData::DhcpOperData()
{

    yang_name = "dhcp-oper-data"; yang_parent_name = "Cisco-IOS-XE-dhcp-oper"; is_top_level_class = true; has_list_ancestor = false;
}

DhcpOperData::~DhcpOperData()
{
}

bool DhcpOperData::has_data() const
{
    for (std::size_t index=0; index<dhcpv4_server_oper.size(); index++)
    {
        if(dhcpv4_server_oper[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<dhcpv4_client_oper.size(); index++)
    {
        if(dhcpv4_client_oper[index]->has_data())
            return true;
    }
    return false;
}

bool DhcpOperData::has_operation() const
{
    for (std::size_t index=0; index<dhcpv4_server_oper.size(); index++)
    {
        if(dhcpv4_server_oper[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<dhcpv4_client_oper.size(); index++)
    {
        if(dhcpv4_client_oper[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DhcpOperData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp-oper:dhcp-oper-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DhcpOperData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DhcpOperData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dhcpv4-server-oper")
    {
        auto c = std::make_shared<DhcpOperData::Dhcpv4ServerOper>();
        c->parent = this;
        dhcpv4_server_oper.push_back(c);
        return c;
    }

    if(child_yang_name == "dhcpv4-client-oper")
    {
        auto c = std::make_shared<DhcpOperData::Dhcpv4ClientOper>();
        c->parent = this;
        dhcpv4_client_oper.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DhcpOperData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : dhcpv4_server_oper)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : dhcpv4_client_oper)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void DhcpOperData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DhcpOperData::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> DhcpOperData::clone_ptr() const
{
    return std::make_shared<DhcpOperData>();
}

std::string DhcpOperData::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string DhcpOperData::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function DhcpOperData::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> DhcpOperData::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool DhcpOperData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dhcpv4-server-oper" || name == "dhcpv4-client-oper")
        return true;
    return false;
}

DhcpOperData::Dhcpv4ServerOper::Dhcpv4ServerOper()
    :
    pool_name{YType::str, "pool-name"},
    client_ip{YType::str, "client-ip"},
    vrf_name{YType::str, "vrf-name"},
    client_id_type{YType::enumeration, "client-id-type"},
    client_id{YType::str, "client-id"},
    type{YType::enumeration, "type"},
    state{YType::enumeration, "state"},
    interface{YType::str, "interface"}
    	,
    expiration(std::make_shared<DhcpOperData::Dhcpv4ServerOper::Expiration>())
{
    expiration->parent = this;

    yang_name = "dhcpv4-server-oper"; yang_parent_name = "dhcp-oper-data"; is_top_level_class = false; has_list_ancestor = false;
}

DhcpOperData::Dhcpv4ServerOper::~Dhcpv4ServerOper()
{
}

bool DhcpOperData::Dhcpv4ServerOper::has_data() const
{
    return pool_name.is_set
	|| client_ip.is_set
	|| vrf_name.is_set
	|| client_id_type.is_set
	|| client_id.is_set
	|| type.is_set
	|| state.is_set
	|| interface.is_set
	|| (expiration !=  nullptr && expiration->has_data());
}

bool DhcpOperData::Dhcpv4ServerOper::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pool_name.yfilter)
	|| ydk::is_set(client_ip.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(client_id_type.yfilter)
	|| ydk::is_set(client_id.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| (expiration !=  nullptr && expiration->has_operation());
}

std::string DhcpOperData::Dhcpv4ServerOper::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp-oper:dhcp-oper-data/" << get_segment_path();
    return path_buffer.str();
}

std::string DhcpOperData::Dhcpv4ServerOper::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcpv4-server-oper" <<"[pool-name='" <<pool_name <<"']" <<"[client-ip='" <<client_ip <<"']" <<"[vrf-name='" <<vrf_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DhcpOperData::Dhcpv4ServerOper::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pool_name.is_set || is_set(pool_name.yfilter)) leaf_name_data.push_back(pool_name.get_name_leafdata());
    if (client_ip.is_set || is_set(client_ip.yfilter)) leaf_name_data.push_back(client_ip.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (client_id_type.is_set || is_set(client_id_type.yfilter)) leaf_name_data.push_back(client_id_type.get_name_leafdata());
    if (client_id.is_set || is_set(client_id.yfilter)) leaf_name_data.push_back(client_id.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DhcpOperData::Dhcpv4ServerOper::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "expiration")
    {
        if(expiration == nullptr)
        {
            expiration = std::make_shared<DhcpOperData::Dhcpv4ServerOper::Expiration>();
        }
        return expiration;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DhcpOperData::Dhcpv4ServerOper::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(expiration != nullptr)
    {
        children["expiration"] = expiration;
    }

    return children;
}

void DhcpOperData::Dhcpv4ServerOper::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pool-name")
    {
        pool_name = value;
        pool_name.value_namespace = name_space;
        pool_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-ip")
    {
        client_ip = value;
        client_ip.value_namespace = name_space;
        client_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-id-type")
    {
        client_id_type = value;
        client_id_type.value_namespace = name_space;
        client_id_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-id")
    {
        client_id = value;
        client_id.value_namespace = name_space;
        client_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void DhcpOperData::Dhcpv4ServerOper::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pool-name")
    {
        pool_name.yfilter = yfilter;
    }
    if(value_path == "client-ip")
    {
        client_ip.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "client-id-type")
    {
        client_id_type.yfilter = yfilter;
    }
    if(value_path == "client-id")
    {
        client_id.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool DhcpOperData::Dhcpv4ServerOper::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "expiration" || name == "pool-name" || name == "client-ip" || name == "vrf-name" || name == "client-id-type" || name == "client-id" || name == "type" || name == "state" || name == "interface")
        return true;
    return false;
}

DhcpOperData::Dhcpv4ServerOper::Expiration::Expiration()
    :
    time{YType::str, "time"},
    infinite{YType::empty, "infinite"}
{

    yang_name = "expiration"; yang_parent_name = "dhcpv4-server-oper"; is_top_level_class = false; has_list_ancestor = true;
}

DhcpOperData::Dhcpv4ServerOper::Expiration::~Expiration()
{
}

bool DhcpOperData::Dhcpv4ServerOper::Expiration::has_data() const
{
    return time.is_set
	|| infinite.is_set;
}

bool DhcpOperData::Dhcpv4ServerOper::Expiration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time.yfilter)
	|| ydk::is_set(infinite.yfilter);
}

std::string DhcpOperData::Dhcpv4ServerOper::Expiration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "expiration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DhcpOperData::Dhcpv4ServerOper::Expiration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());
    if (infinite.is_set || is_set(infinite.yfilter)) leaf_name_data.push_back(infinite.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DhcpOperData::Dhcpv4ServerOper::Expiration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DhcpOperData::Dhcpv4ServerOper::Expiration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DhcpOperData::Dhcpv4ServerOper::Expiration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "infinite")
    {
        infinite = value;
        infinite.value_namespace = name_space;
        infinite.value_namespace_prefix = name_space_prefix;
    }
}

void DhcpOperData::Dhcpv4ServerOper::Expiration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
    if(value_path == "infinite")
    {
        infinite.yfilter = yfilter;
    }
}

bool DhcpOperData::Dhcpv4ServerOper::Expiration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time" || name == "infinite")
        return true;
    return false;
}

DhcpOperData::Dhcpv4ClientOper::Dhcpv4ClientOper()
    :
    if_name{YType::str, "if-name"},
    client_addr{YType::str, "client-addr"},
    vrf_name{YType::str, "vrf-name"},
    state{YType::enumeration, "state"},
    lease_server_addr{YType::str, "lease-server-addr"},
    gateway_addr{YType::str, "gateway-addr"},
    lease_time{YType::uint32, "lease-time"},
    lease_remaining{YType::uint32, "lease-remaining"},
    dns_list{YType::str, "dns-list"}
    	,
    lease_expiry(std::make_shared<DhcpOperData::Dhcpv4ClientOper::LeaseExpiry>())
{
    lease_expiry->parent = this;

    yang_name = "dhcpv4-client-oper"; yang_parent_name = "dhcp-oper-data"; is_top_level_class = false; has_list_ancestor = false;
}

DhcpOperData::Dhcpv4ClientOper::~Dhcpv4ClientOper()
{
}

bool DhcpOperData::Dhcpv4ClientOper::has_data() const
{
    for (auto const & leaf : dns_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return if_name.is_set
	|| client_addr.is_set
	|| vrf_name.is_set
	|| state.is_set
	|| lease_server_addr.is_set
	|| gateway_addr.is_set
	|| lease_time.is_set
	|| lease_remaining.is_set
	|| (lease_expiry !=  nullptr && lease_expiry->has_data());
}

bool DhcpOperData::Dhcpv4ClientOper::has_operation() const
{
    for (auto const & leaf : dns_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(if_name.yfilter)
	|| ydk::is_set(client_addr.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(lease_server_addr.yfilter)
	|| ydk::is_set(gateway_addr.yfilter)
	|| ydk::is_set(lease_time.yfilter)
	|| ydk::is_set(lease_remaining.yfilter)
	|| ydk::is_set(dns_list.yfilter)
	|| (lease_expiry !=  nullptr && lease_expiry->has_operation());
}

std::string DhcpOperData::Dhcpv4ClientOper::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp-oper:dhcp-oper-data/" << get_segment_path();
    return path_buffer.str();
}

std::string DhcpOperData::Dhcpv4ClientOper::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcpv4-client-oper" <<"[if-name='" <<if_name <<"']" <<"[client-addr='" <<client_addr <<"']" <<"[vrf-name='" <<vrf_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DhcpOperData::Dhcpv4ClientOper::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (if_name.is_set || is_set(if_name.yfilter)) leaf_name_data.push_back(if_name.get_name_leafdata());
    if (client_addr.is_set || is_set(client_addr.yfilter)) leaf_name_data.push_back(client_addr.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (lease_server_addr.is_set || is_set(lease_server_addr.yfilter)) leaf_name_data.push_back(lease_server_addr.get_name_leafdata());
    if (gateway_addr.is_set || is_set(gateway_addr.yfilter)) leaf_name_data.push_back(gateway_addr.get_name_leafdata());
    if (lease_time.is_set || is_set(lease_time.yfilter)) leaf_name_data.push_back(lease_time.get_name_leafdata());
    if (lease_remaining.is_set || is_set(lease_remaining.yfilter)) leaf_name_data.push_back(lease_remaining.get_name_leafdata());

    auto dns_list_name_datas = dns_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), dns_list_name_datas.begin(), dns_list_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> DhcpOperData::Dhcpv4ClientOper::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lease-expiry")
    {
        if(lease_expiry == nullptr)
        {
            lease_expiry = std::make_shared<DhcpOperData::Dhcpv4ClientOper::LeaseExpiry>();
        }
        return lease_expiry;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DhcpOperData::Dhcpv4ClientOper::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(lease_expiry != nullptr)
    {
        children["lease-expiry"] = lease_expiry;
    }

    return children;
}

void DhcpOperData::Dhcpv4ClientOper::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "if-name")
    {
        if_name = value;
        if_name.value_namespace = name_space;
        if_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-addr")
    {
        client_addr = value;
        client_addr.value_namespace = name_space;
        client_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lease-server-addr")
    {
        lease_server_addr = value;
        lease_server_addr.value_namespace = name_space;
        lease_server_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gateway-addr")
    {
        gateway_addr = value;
        gateway_addr.value_namespace = name_space;
        gateway_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lease-time")
    {
        lease_time = value;
        lease_time.value_namespace = name_space;
        lease_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lease-remaining")
    {
        lease_remaining = value;
        lease_remaining.value_namespace = name_space;
        lease_remaining.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dns-list")
    {
        dns_list.append(value);
    }
}

void DhcpOperData::Dhcpv4ClientOper::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "if-name")
    {
        if_name.yfilter = yfilter;
    }
    if(value_path == "client-addr")
    {
        client_addr.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "lease-server-addr")
    {
        lease_server_addr.yfilter = yfilter;
    }
    if(value_path == "gateway-addr")
    {
        gateway_addr.yfilter = yfilter;
    }
    if(value_path == "lease-time")
    {
        lease_time.yfilter = yfilter;
    }
    if(value_path == "lease-remaining")
    {
        lease_remaining.yfilter = yfilter;
    }
    if(value_path == "dns-list")
    {
        dns_list.yfilter = yfilter;
    }
}

bool DhcpOperData::Dhcpv4ClientOper::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lease-expiry" || name == "if-name" || name == "client-addr" || name == "vrf-name" || name == "state" || name == "lease-server-addr" || name == "gateway-addr" || name == "lease-time" || name == "lease-remaining" || name == "dns-list")
        return true;
    return false;
}

DhcpOperData::Dhcpv4ClientOper::LeaseExpiry::LeaseExpiry()
    :
    time{YType::str, "time"},
    infinite{YType::empty, "infinite"}
{

    yang_name = "lease-expiry"; yang_parent_name = "dhcpv4-client-oper"; is_top_level_class = false; has_list_ancestor = true;
}

DhcpOperData::Dhcpv4ClientOper::LeaseExpiry::~LeaseExpiry()
{
}

bool DhcpOperData::Dhcpv4ClientOper::LeaseExpiry::has_data() const
{
    return time.is_set
	|| infinite.is_set;
}

bool DhcpOperData::Dhcpv4ClientOper::LeaseExpiry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time.yfilter)
	|| ydk::is_set(infinite.yfilter);
}

std::string DhcpOperData::Dhcpv4ClientOper::LeaseExpiry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lease-expiry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DhcpOperData::Dhcpv4ClientOper::LeaseExpiry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());
    if (infinite.is_set || is_set(infinite.yfilter)) leaf_name_data.push_back(infinite.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DhcpOperData::Dhcpv4ClientOper::LeaseExpiry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DhcpOperData::Dhcpv4ClientOper::LeaseExpiry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DhcpOperData::Dhcpv4ClientOper::LeaseExpiry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "infinite")
    {
        infinite = value;
        infinite.value_namespace = name_space;
        infinite.value_namespace_prefix = name_space_prefix;
    }
}

void DhcpOperData::Dhcpv4ClientOper::LeaseExpiry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
    if(value_path == "infinite")
    {
        infinite.yfilter = yfilter;
    }
}

bool DhcpOperData::Dhcpv4ClientOper::LeaseExpiry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time" || name == "infinite")
        return true;
    return false;
}

const Enum::YLeaf DhcpServerBindingState::dhcp_server_binding_state_selecting {0, "dhcp-server-binding-state-selecting"};
const Enum::YLeaf DhcpServerBindingState::dhcp_server_binding_state_active {1, "dhcp-server-binding-state-active"};
const Enum::YLeaf DhcpServerBindingState::dhcp_server_binding_state_terminated {2, "dhcp-server-binding-state-terminated"};
const Enum::YLeaf DhcpServerBindingState::dhcp_server_binding_state_unknown {3, "dhcp-server-binding-state-unknown"};

const Enum::YLeaf DhcpServerBindingType::dhcp_server_binding_type_manual {0, "dhcp-server-binding-type-manual"};
const Enum::YLeaf DhcpServerBindingType::dhcp_server_binding_type_static {1, "dhcp-server-binding-type-static"};
const Enum::YLeaf DhcpServerBindingType::dhcp_server_binding_type_relay {2, "dhcp-server-binding-type-relay"};
const Enum::YLeaf DhcpServerBindingType::dhcp_server_binding_type_automatic {3, "dhcp-server-binding-type-automatic"};
const Enum::YLeaf DhcpServerBindingType::dhcp_server_binding_type_odap {4, "dhcp-server-binding-type-odap"};
const Enum::YLeaf DhcpServerBindingType::dhcp_server_binding_type_from_aaa {5, "dhcp-server-binding-type-from-aaa"};
const Enum::YLeaf DhcpServerBindingType::dhcp_server_binding_type_remembered {6, "dhcp-server-binding-type-remembered"};

const Enum::YLeaf DhcpClientState::dhcp_client_state_temp_from_client {0, "dhcp-client-state-temp-from-client"};
const Enum::YLeaf DhcpClientState::dhcp_client_state_temp_from_sync {1, "dhcp-client-state-temp-from-sync"};
const Enum::YLeaf DhcpClientState::dhcp_client_state_initial {2, "dhcp-client-state-initial"};
const Enum::YLeaf DhcpClientState::dhcp_client_state_selecting {3, "dhcp-client-state-selecting"};
const Enum::YLeaf DhcpClientState::dhcp_client_state_requesting {4, "dhcp-client-state-requesting"};
const Enum::YLeaf DhcpClientState::dhcp_client_state_bound {5, "dhcp-client-state-bound"};
const Enum::YLeaf DhcpClientState::dhcp_client_state_rebinding {6, "dhcp-client-state-rebinding"};
const Enum::YLeaf DhcpClientState::dhcp_client_state_renewing {7, "dhcp-client-state-renewing"};
const Enum::YLeaf DhcpClientState::dhcp_client_state_holdtime {8, "dhcp-client-state-holdtime"};
const Enum::YLeaf DhcpClientState::dhcp_client_state_ddns_wait {9, "dhcp-client-state-ddns-wait"};
const Enum::YLeaf DhcpClientState::dhcp_client_state_releasing {10, "dhcp-client-state-releasing"};
const Enum::YLeaf DhcpClientState::dhcp_client_state_purging {11, "dhcp-client-state-purging"};
const Enum::YLeaf DhcpClientState::dhcp_client_state_leasequery {12, "dhcp-client-state-leasequery"};
const Enum::YLeaf DhcpClientState::dhcp_client_state_unknown {13, "dhcp-client-state-unknown"};

const Enum::YLeaf DhcpExpiryOption::dhcp_expiration_time {0, "dhcp-expiration-time"};
const Enum::YLeaf DhcpExpiryOption::dhcp_expiration_infinite {1, "dhcp-expiration-infinite"};

const Enum::YLeaf DhcpClientIdType::dhcp_htype_ethernet {0, "dhcp-htype-ethernet"};
const Enum::YLeaf DhcpClientIdType::dhcp_htype_ieee802 {1, "dhcp-htype-ieee802"};
const Enum::YLeaf DhcpClientIdType::dhcp_htype_rfclimit {2, "dhcp-htype-rfclimit"};
const Enum::YLeaf DhcpClientIdType::dhcp_htype_clientid {3, "dhcp-htype-clientid"};


}
}

