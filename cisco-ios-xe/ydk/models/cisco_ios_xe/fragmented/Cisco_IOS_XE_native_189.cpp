
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_189.hpp"
#include "Cisco_IOS_XE_native_190.hpp"
#include "Cisco_IOS_XE_native_191.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::DatabaseMappingOption()
    :
    priority{YType::uint8, "priority"},
    weight{YType::uint8, "weight"},
    down{YType::empty, "down"}
{

    yang_name = "database-mapping-option"; yang_parent_name = "ipv4-addrees"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::~DatabaseMappingOption()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::has_data() const
{
    return priority.is_set
	|| weight.is_set
	|| down.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(down.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping-option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (down.is_set || is_set(down.yfilter)) leaf_name_data.push_back(down.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down")
    {
        down = value;
        down.value_namespace = name_space;
        down.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "down")
    {
        down.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority" || name == "weight" || name == "down")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv6Addrees::Ipv6Addrees()
    :
    address{YType::str, "address"}
    	,
    database_mapping_option(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption>())
{
    database_mapping_option->parent = this;

    yang_name = "ipv6-addrees"; yang_parent_name = "eid-cont"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv6Addrees::~Ipv6Addrees()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv6Addrees::has_data() const
{
    return address.is_set
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv6Addrees::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv6Addrees::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-addrees" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv6Addrees::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv6Addrees::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-mapping-option")
    {
        if(database_mapping_option == nullptr)
        {
            database_mapping_option = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption>();
        }
        return database_mapping_option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv6Addrees::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(database_mapping_option != nullptr)
    {
        children["database-mapping-option"] = database_mapping_option;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv6Addrees::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv6Addrees::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv6Addrees::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database-mapping-option" || name == "address")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::DatabaseMappingOption()
    :
    priority{YType::uint8, "priority"},
    weight{YType::uint8, "weight"},
    down{YType::empty, "down"}
{

    yang_name = "database-mapping-option"; yang_parent_name = "ipv6-addrees"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::~DatabaseMappingOption()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::has_data() const
{
    return priority.is_set
	|| weight.is_set
	|| down.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(down.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping-option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (down.is_set || is_set(down.yfilter)) leaf_name_data.push_back(down.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down")
    {
        down = value;
        down.value_namespace = name_space;
        down.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "down")
    {
        down.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority" || name == "weight" || name == "down")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv4Interface::IPv4Interface()
    :
    name{YType::str, "name"}
    	,
    database_mapping_option(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv4Interface::DatabaseMappingOption>())
{
    database_mapping_option->parent = this;

    yang_name = "IPv4-interface"; yang_parent_name = "eid-cont"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv4Interface::~IPv4Interface()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv4Interface::has_data() const
{
    return name.is_set
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv4Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv4Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IPv4-interface" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv4Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv4Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-mapping-option")
    {
        if(database_mapping_option == nullptr)
        {
            database_mapping_option = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv4Interface::DatabaseMappingOption>();
        }
        return database_mapping_option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv4Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(database_mapping_option != nullptr)
    {
        children["database-mapping-option"] = database_mapping_option;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv4Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv4Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv4Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database-mapping-option" || name == "name")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv4Interface::DatabaseMappingOption::DatabaseMappingOption()
    :
    priority{YType::uint8, "priority"},
    weight{YType::uint8, "weight"},
    down{YType::empty, "down"}
{

    yang_name = "database-mapping-option"; yang_parent_name = "IPv4-interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv4Interface::DatabaseMappingOption::~DatabaseMappingOption()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv4Interface::DatabaseMappingOption::has_data() const
{
    return priority.is_set
	|| weight.is_set
	|| down.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv4Interface::DatabaseMappingOption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(down.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv4Interface::DatabaseMappingOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping-option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv4Interface::DatabaseMappingOption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (down.is_set || is_set(down.yfilter)) leaf_name_data.push_back(down.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv4Interface::DatabaseMappingOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv4Interface::DatabaseMappingOption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv4Interface::DatabaseMappingOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down")
    {
        down = value;
        down.value_namespace = name_space;
        down.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv4Interface::DatabaseMappingOption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "down")
    {
        down.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv4Interface::DatabaseMappingOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority" || name == "weight" || name == "down")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv6Interface::IPv6Interface()
    :
    name{YType::str, "name"}
    	,
    database_mapping_option(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv6Interface::DatabaseMappingOption>())
{
    database_mapping_option->parent = this;

    yang_name = "IPv6-interface"; yang_parent_name = "eid-cont"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv6Interface::~IPv6Interface()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv6Interface::has_data() const
{
    return name.is_set
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv6Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv6Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IPv6-interface" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv6Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv6Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-mapping-option")
    {
        if(database_mapping_option == nullptr)
        {
            database_mapping_option = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv6Interface::DatabaseMappingOption>();
        }
        return database_mapping_option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv6Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(database_mapping_option != nullptr)
    {
        children["database-mapping-option"] = database_mapping_option;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv6Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv6Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv6Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database-mapping-option" || name == "name")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv6Interface::DatabaseMappingOption::DatabaseMappingOption()
    :
    priority{YType::uint8, "priority"},
    weight{YType::uint8, "weight"},
    down{YType::empty, "down"}
{

    yang_name = "database-mapping-option"; yang_parent_name = "IPv6-interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv6Interface::DatabaseMappingOption::~DatabaseMappingOption()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv6Interface::DatabaseMappingOption::has_data() const
{
    return priority.is_set
	|| weight.is_set
	|| down.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv6Interface::DatabaseMappingOption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(down.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv6Interface::DatabaseMappingOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping-option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv6Interface::DatabaseMappingOption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (down.is_set || is_set(down.yfilter)) leaf_name_data.push_back(down.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv6Interface::DatabaseMappingOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv6Interface::DatabaseMappingOption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv6Interface::DatabaseMappingOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down")
    {
        down = value;
        down.value_namespace = name_space;
        down.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv6Interface::DatabaseMappingOption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "down")
    {
        down.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv6Interface::DatabaseMappingOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority" || name == "weight" || name == "down")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::Mac::Mac()
    :
    locator_set{YType::str, "locator-set"}
{

    yang_name = "mac"; yang_parent_name = "database-mapping"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::Mac::~Mac()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::Mac::has_data() const
{
    return locator_set.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::Mac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(locator_set.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locator_set.is_set || is_set(locator_set.yfilter)) leaf_name_data.push_back(locator_set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "locator-set")
    {
        locator_set = value;
        locator_set.value_namespace = name_space;
        locator_set.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "locator-set")
    {
        locator_set.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "locator-set")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::Limit::Limit()
    :
    dynamic{YType::uint32, "dynamic"},
    warning_threshold{YType::uint8, "warning-threshold"}
{

    yang_name = "limit"; yang_parent_name = "database-mapping"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::Limit::~Limit()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::Limit::has_data() const
{
    return dynamic.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::Limit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dynamic.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::Limit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dynamic.is_set || is_set(dynamic.yfilter)) leaf_name_data.push_back(dynamic.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::Limit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dynamic")
    {
        dynamic = value;
        dynamic.value_namespace = name_space;
        dynamic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
        warning_threshold.value_namespace = name_space;
        warning_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::Limit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dynamic")
    {
        dynamic.yfilter = yfilter;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::Limit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic" || name == "warning-threshold")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Itr::Itr()
{

    yang_name = "itr"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Itr::~Itr()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Itr::has_data() const
{
    for (std::size_t index=0; index<map_resolver.size(); index++)
    {
        if(map_resolver[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Itr::has_operation() const
{
    for (std::size_t index=0; index<map_resolver.size(); index++)
    {
        if(map_resolver[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Itr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "itr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Itr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Itr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-resolver")
    {
        auto c = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Itr::MapResolver>();
        c->parent = this;
        map_resolver.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Itr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : map_resolver)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Itr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Itr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Itr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-resolver")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Itr::MapResolver::MapResolver()
    :
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "map-resolver"; yang_parent_name = "itr"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Itr::MapResolver::~MapResolver()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Itr::MapResolver::has_data() const
{
    return ip_addr.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Itr::MapResolver::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Itr::MapResolver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-resolver" <<"[ip-addr='" <<ip_addr <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Itr::MapResolver::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Itr::MapResolver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Itr::MapResolver::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Itr::MapResolver::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Itr::MapResolver::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Itr::MapResolver::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-addr")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::ItrEnable::ItrEnable()
    :
    itr{YType::empty, "itr"}
{

    yang_name = "itr-enable"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::ItrEnable::~ItrEnable()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::ItrEnable::has_data() const
{
    return itr.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::ItrEnable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(itr.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::ItrEnable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "itr-enable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::ItrEnable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (itr.is_set || is_set(itr.yfilter)) leaf_name_data.push_back(itr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::ItrEnable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::ItrEnable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::ItrEnable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "itr")
    {
        itr = value;
        itr.value_namespace = name_space;
        itr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::ItrEnable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "itr")
    {
        itr.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::ItrEnable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "itr")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::EtrEnable::EtrEnable()
    :
    etr{YType::empty, "etr"}
{

    yang_name = "etr-enable"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::EtrEnable::~EtrEnable()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::EtrEnable::has_data() const
{
    return etr.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::EtrEnable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(etr.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::EtrEnable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etr-enable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::EtrEnable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (etr.is_set || is_set(etr.yfilter)) leaf_name_data.push_back(etr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::EtrEnable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::EtrEnable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::EtrEnable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "etr")
    {
        etr = value;
        etr.value_namespace = name_space;
        etr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::EtrEnable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "etr")
    {
        etr.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::EtrEnable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "etr")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::Etr()
    :
    map_cache_ttl{YType::uint16, "map-cache-ttl"}
    	,
    accept_map_request_mapping(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::AcceptMapRequestMapping>())
{
    accept_map_request_mapping->parent = this;

    yang_name = "etr"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::~Etr()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::has_data() const
{
    for (std::size_t index=0; index<map_server.size(); index++)
    {
        if(map_server[index]->has_data())
            return true;
    }
    return map_cache_ttl.is_set
	|| (accept_map_request_mapping !=  nullptr && accept_map_request_mapping->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::has_operation() const
{
    for (std::size_t index=0; index<map_server.size(); index++)
    {
        if(map_server[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(map_cache_ttl.yfilter)
	|| (accept_map_request_mapping !=  nullptr && accept_map_request_mapping->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (map_cache_ttl.is_set || is_set(map_cache_ttl.yfilter)) leaf_name_data.push_back(map_cache_ttl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-server")
    {
        auto c = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer>();
        c->parent = this;
        map_server.push_back(c);
        return c;
    }

    if(child_yang_name == "accept-map-request-mapping")
    {
        if(accept_map_request_mapping == nullptr)
        {
            accept_map_request_mapping = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::AcceptMapRequestMapping>();
        }
        return accept_map_request_mapping;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : map_server)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(accept_map_request_mapping != nullptr)
    {
        children["accept-map-request-mapping"] = accept_map_request_mapping;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "map-cache-ttl")
    {
        map_cache_ttl = value;
        map_cache_ttl.value_namespace = name_space;
        map_cache_ttl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "map-cache-ttl")
    {
        map_cache_ttl.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-server" || name == "accept-map-request-mapping" || name == "map-cache-ttl")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::MapServer()
    :
    ip_addr{YType::str, "ip-addr"},
    proxy_reply{YType::empty, "proxy-reply"}
    	,
    key(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key>())
{
    key->parent = this;

    yang_name = "map-server"; yang_parent_name = "etr"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::~MapServer()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::has_data() const
{
    return ip_addr.is_set
	|| proxy_reply.is_set
	|| (key !=  nullptr && key->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_addr.yfilter)
	|| ydk::is_set(proxy_reply.yfilter)
	|| (key !=  nullptr && key->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-server" <<"[ip-addr='" <<ip_addr <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (proxy_reply.is_set || is_set(proxy_reply.yfilter)) leaf_name_data.push_back(proxy_reply.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key>();
        }
        return key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(key != nullptr)
    {
        children["key"] = key;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proxy-reply")
    {
        proxy_reply = value;
        proxy_reply.value_namespace = name_space;
        proxy_reply.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
    if(value_path == "proxy-reply")
    {
        proxy_reply.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key" || name == "ip-addr" || name == "proxy-reply")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key()
    :
    key_pwd(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::KeyPwd>())
	,key_0(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key0>())
	,key_6(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key6>())
	,key_7(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key7>())
{
    key_pwd->parent = this;
    key_0->parent = this;
    key_6->parent = this;
    key_7->parent = this;

    yang_name = "key"; yang_parent_name = "map-server"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::~Key()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::has_data() const
{
    return (key_pwd !=  nullptr && key_pwd->has_data())
	|| (key_0 !=  nullptr && key_0->has_data())
	|| (key_6 !=  nullptr && key_6->has_data())
	|| (key_7 !=  nullptr && key_7->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::has_operation() const
{
    return is_set(yfilter)
	|| (key_pwd !=  nullptr && key_pwd->has_operation())
	|| (key_0 !=  nullptr && key_0->has_operation())
	|| (key_6 !=  nullptr && key_6->has_operation())
	|| (key_7 !=  nullptr && key_7->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-pwd")
    {
        if(key_pwd == nullptr)
        {
            key_pwd = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::KeyPwd>();
        }
        return key_pwd;
    }

    if(child_yang_name == "key-0")
    {
        if(key_0 == nullptr)
        {
            key_0 = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key0>();
        }
        return key_0;
    }

    if(child_yang_name == "key-6")
    {
        if(key_6 == nullptr)
        {
            key_6 = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key6>();
        }
        return key_6;
    }

    if(child_yang_name == "key-7")
    {
        if(key_7 == nullptr)
        {
            key_7 = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key7>();
        }
        return key_7;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(key_pwd != nullptr)
    {
        children["key-pwd"] = key_pwd;
    }

    if(key_0 != nullptr)
    {
        children["key-0"] = key_0;
    }

    if(key_6 != nullptr)
    {
        children["key-6"] = key_6;
    }

    if(key_7 != nullptr)
    {
        children["key-7"] = key_7;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-pwd" || name == "key-0" || name == "key-6" || name == "key-7")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::KeyPwd::KeyPwd()
    :
    unc_pwd{YType::str, "unc-pwd"},
    hash_function{YType::enumeration, "hash-function"}
{

    yang_name = "key-pwd"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::KeyPwd::~KeyPwd()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::KeyPwd::has_data() const
{
    return unc_pwd.is_set
	|| hash_function.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::KeyPwd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unc_pwd.yfilter)
	|| ydk::is_set(hash_function.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::KeyPwd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-pwd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::KeyPwd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unc_pwd.is_set || is_set(unc_pwd.yfilter)) leaf_name_data.push_back(unc_pwd.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.yfilter)) leaf_name_data.push_back(hash_function.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::KeyPwd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::KeyPwd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::KeyPwd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unc-pwd")
    {
        unc_pwd = value;
        unc_pwd.value_namespace = name_space;
        unc_pwd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hash-function")
    {
        hash_function = value;
        hash_function.value_namespace = name_space;
        hash_function.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::KeyPwd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unc-pwd")
    {
        unc_pwd.yfilter = yfilter;
    }
    if(value_path == "hash-function")
    {
        hash_function.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::KeyPwd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unc-pwd" || name == "hash-function")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key0::Key0()
    :
    ak_0{YType::str, "ak-0"},
    hash_function{YType::enumeration, "hash-function"}
{

    yang_name = "key-0"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key0::~Key0()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key0::has_data() const
{
    return ak_0.is_set
	|| hash_function.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key0::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ak_0.yfilter)
	|| ydk::is_set(hash_function.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key0::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-0";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key0::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_0.is_set || is_set(ak_0.yfilter)) leaf_name_data.push_back(ak_0.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.yfilter)) leaf_name_data.push_back(hash_function.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key0::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key0::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key0::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ak-0")
    {
        ak_0 = value;
        ak_0.value_namespace = name_space;
        ak_0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hash-function")
    {
        hash_function = value;
        hash_function.value_namespace = name_space;
        hash_function.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key0::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ak-0")
    {
        ak_0.yfilter = yfilter;
    }
    if(value_path == "hash-function")
    {
        hash_function.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key0::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ak-0" || name == "hash-function")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key6::Key6()
    :
    ak_6{YType::str, "ak-6"},
    hash_function{YType::enumeration, "hash-function"}
{

    yang_name = "key-6"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key6::~Key6()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key6::has_data() const
{
    return ak_6.is_set
	|| hash_function.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ak_6.yfilter)
	|| ydk::is_set(hash_function.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_6.is_set || is_set(ak_6.yfilter)) leaf_name_data.push_back(ak_6.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.yfilter)) leaf_name_data.push_back(hash_function.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ak-6")
    {
        ak_6 = value;
        ak_6.value_namespace = name_space;
        ak_6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hash-function")
    {
        hash_function = value;
        hash_function.value_namespace = name_space;
        hash_function.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ak-6")
    {
        ak_6.yfilter = yfilter;
    }
    if(value_path == "hash-function")
    {
        hash_function.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ak-6" || name == "hash-function")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key7::Key7()
    :
    ak_7{YType::str, "ak-7"},
    hash_function{YType::enumeration, "hash-function"}
{

    yang_name = "key-7"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key7::~Key7()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key7::has_data() const
{
    return ak_7.is_set
	|| hash_function.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key7::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ak_7.yfilter)
	|| ydk::is_set(hash_function.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key7::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-7";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key7::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_7.is_set || is_set(ak_7.yfilter)) leaf_name_data.push_back(ak_7.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.yfilter)) leaf_name_data.push_back(hash_function.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key7::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key7::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key7::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ak-7")
    {
        ak_7 = value;
        ak_7.value_namespace = name_space;
        ak_7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hash-function")
    {
        hash_function = value;
        hash_function.value_namespace = name_space;
        hash_function.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key7::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ak-7")
    {
        ak_7.yfilter = yfilter;
    }
    if(value_path == "hash-function")
    {
        hash_function.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key7::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ak-7" || name == "hash-function")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::AcceptMapRequestMapping::AcceptMapRequestMapping()
    :
    accept_mappping{YType::empty, "accept-mappping"},
    verify{YType::empty, "verify"}
{

    yang_name = "accept-map-request-mapping"; yang_parent_name = "etr"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::AcceptMapRequestMapping::~AcceptMapRequestMapping()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::AcceptMapRequestMapping::has_data() const
{
    return accept_mappping.is_set
	|| verify.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::AcceptMapRequestMapping::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(accept_mappping.yfilter)
	|| ydk::is_set(verify.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::AcceptMapRequestMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accept-map-request-mapping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::AcceptMapRequestMapping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accept_mappping.is_set || is_set(accept_mappping.yfilter)) leaf_name_data.push_back(accept_mappping.get_name_leafdata());
    if (verify.is_set || is_set(verify.yfilter)) leaf_name_data.push_back(verify.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::AcceptMapRequestMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::AcceptMapRequestMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::AcceptMapRequestMapping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "accept-mappping")
    {
        accept_mappping = value;
        accept_mappping.value_namespace = name_space;
        accept_mappping.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verify")
    {
        verify = value;
        verify.value_namespace = name_space;
        verify.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::AcceptMapRequestMapping::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "accept-mappping")
    {
        accept_mappping.yfilter = yfilter;
    }
    if(value_path == "verify")
    {
        verify.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::AcceptMapRequestMapping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accept-mappping" || name == "verify")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCacheLimit::MapCacheLimit()
    :
    max_map_cache_entries{YType::uint32, "max-map-cache-entries"},
    reserve_list{YType::str, "reserve-list"},
    warning_threshold{YType::uint8, "warning-threshold"}
{

    yang_name = "map-cache-limit"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCacheLimit::~MapCacheLimit()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCacheLimit::has_data() const
{
    return max_map_cache_entries.is_set
	|| reserve_list.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCacheLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_map_cache_entries.yfilter)
	|| ydk::is_set(reserve_list.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCacheLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCacheLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_map_cache_entries.is_set || is_set(max_map_cache_entries.yfilter)) leaf_name_data.push_back(max_map_cache_entries.get_name_leafdata());
    if (reserve_list.is_set || is_set(reserve_list.yfilter)) leaf_name_data.push_back(reserve_list.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCacheLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCacheLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCacheLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-map-cache-entries")
    {
        max_map_cache_entries = value;
        max_map_cache_entries.value_namespace = name_space;
        max_map_cache_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reserve-list")
    {
        reserve_list = value;
        reserve_list.value_namespace = name_space;
        reserve_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
        warning_threshold.value_namespace = name_space;
        warning_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCacheLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-map-cache-entries")
    {
        max_map_cache_entries.yfilter = yfilter;
    }
    if(value_path == "reserve-list")
    {
        reserve_list.yfilter = yfilter;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCacheLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-map-cache-entries" || name == "reserve-list" || name == "warning-threshold")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::SiteRegistration::SiteRegistration()
    :
    limit{YType::uint32, "limit"},
    warning_threshold{YType::uint8, "warning-threshold"}
{

    yang_name = "site-registration"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::SiteRegistration::~SiteRegistration()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::SiteRegistration::has_data() const
{
    return limit.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::SiteRegistration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::SiteRegistration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "site-registration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::SiteRegistration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::SiteRegistration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::SiteRegistration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::SiteRegistration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
        warning_threshold.value_namespace = name_space;
        warning_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::SiteRegistration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::SiteRegistration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit" || name == "warning-threshold")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::SolicitMapRequest::SolicitMapRequest()
    :
    ignore{YType::empty, "ignore"},
    max_per_entry{YType::uint8, "max-per-entry"},
    suppression_time{YType::uint16, "suppression-time"}
{

    yang_name = "solicit-map-request"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::SolicitMapRequest::~SolicitMapRequest()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::SolicitMapRequest::has_data() const
{
    return ignore.is_set
	|| max_per_entry.is_set
	|| suppression_time.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::SolicitMapRequest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ignore.yfilter)
	|| ydk::is_set(max_per_entry.yfilter)
	|| ydk::is_set(suppression_time.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::SolicitMapRequest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "solicit-map-request";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::SolicitMapRequest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore.is_set || is_set(ignore.yfilter)) leaf_name_data.push_back(ignore.get_name_leafdata());
    if (max_per_entry.is_set || is_set(max_per_entry.yfilter)) leaf_name_data.push_back(max_per_entry.get_name_leafdata());
    if (suppression_time.is_set || is_set(suppression_time.yfilter)) leaf_name_data.push_back(suppression_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::SolicitMapRequest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::SolicitMapRequest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::SolicitMapRequest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ignore")
    {
        ignore = value;
        ignore.value_namespace = name_space;
        ignore.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-per-entry")
    {
        max_per_entry = value;
        max_per_entry.value_namespace = name_space;
        max_per_entry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppression-time")
    {
        suppression_time = value;
        suppression_time.value_namespace = name_space;
        suppression_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::SolicitMapRequest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ignore")
    {
        ignore.yfilter = yfilter;
    }
    if(value_path == "max-per-entry")
    {
        max_per_entry.yfilter = yfilter;
    }
    if(value_path == "suppression-time")
    {
        suppression_time.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::SolicitMapRequest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ignore" || name == "max-per-entry" || name == "suppression-time")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCache::MapCache()
{

    yang_name = "map-cache"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCache::~MapCache()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCache::has_data() const
{
    for (std::size_t index=0; index<eid_cont.size(); index++)
    {
        if(eid_cont[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCache::has_operation() const
{
    for (std::size_t index=0; index<eid_cont.size(); index++)
    {
        if(eid_cont[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCache::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eid-cont")
    {
        auto c = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCache::EidCont>();
        c->parent = this;
        eid_cont.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCache::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : eid_cont)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCache::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCache::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCache::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eid-cont")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCache::EidCont::EidCont()
    :
    eid_prefix{YType::str, "eid-prefix"}
    	,
    etr_interface_ip(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCache::EidCont::EtrInterfaceIp>())
{
    etr_interface_ip->parent = this;

    yang_name = "eid-cont"; yang_parent_name = "map-cache"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCache::EidCont::~EidCont()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCache::EidCont::has_data() const
{
    return eid_prefix.is_set
	|| (etr_interface_ip !=  nullptr && etr_interface_ip->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCache::EidCont::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eid_prefix.yfilter)
	|| (etr_interface_ip !=  nullptr && etr_interface_ip->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCache::EidCont::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eid-cont" <<"[eid-prefix='" <<eid_prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCache::EidCont::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eid_prefix.is_set || is_set(eid_prefix.yfilter)) leaf_name_data.push_back(eid_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCache::EidCont::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "etr-interface-ip")
    {
        if(etr_interface_ip == nullptr)
        {
            etr_interface_ip = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCache::EidCont::EtrInterfaceIp>();
        }
        return etr_interface_ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCache::EidCont::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(etr_interface_ip != nullptr)
    {
        children["etr-interface-ip"] = etr_interface_ip;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCache::EidCont::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eid-prefix")
    {
        eid_prefix = value;
        eid_prefix.value_namespace = name_space;
        eid_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCache::EidCont::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eid-prefix")
    {
        eid_prefix.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCache::EidCont::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "etr-interface-ip" || name == "eid-prefix")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCache::EidCont::EtrInterfaceIp::EtrInterfaceIp()
    :
    etr_interface_ip_address{YType::str, "etr-interface-ip-address"},
    priority{YType::uint8, "priority"},
    weight{YType::uint8, "weight"}
{

    yang_name = "etr-interface-ip"; yang_parent_name = "eid-cont"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCache::EidCont::EtrInterfaceIp::~EtrInterfaceIp()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCache::EidCont::EtrInterfaceIp::has_data() const
{
    return etr_interface_ip_address.is_set
	|| priority.is_set
	|| weight.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCache::EidCont::EtrInterfaceIp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(etr_interface_ip_address.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCache::EidCont::EtrInterfaceIp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etr-interface-ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCache::EidCont::EtrInterfaceIp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (etr_interface_ip_address.is_set || is_set(etr_interface_ip_address.yfilter)) leaf_name_data.push_back(etr_interface_ip_address.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCache::EidCont::EtrInterfaceIp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCache::EidCont::EtrInterfaceIp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCache::EidCont::EtrInterfaceIp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "etr-interface-ip-address")
    {
        etr_interface_ip_address = value;
        etr_interface_ip_address.value_namespace = name_space;
        etr_interface_ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCache::EidCont::EtrInterfaceIp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "etr-interface-ip-address")
    {
        etr_interface_ip_address.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCache::EidCont::EtrInterfaceIp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "etr-interface-ip-address" || name == "priority" || name == "weight")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::EidTable::EidTable()
    :
    vlan{YType::uint16, "vlan"}
{

    yang_name = "eid-table"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::EidTable::~EidTable()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::EidTable::has_data() const
{
    return vlan.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::EidTable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::EidTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eid-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::EidTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::EidTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::EidTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::EidTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::EidTable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::EidTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::BroadcastUnderlay::BroadcastUnderlay()
    :
    ipv4_multicast{YType::str, "ipv4-multicast"},
    ipv6_multicast{YType::str, "ipv6-multicast"}
{

    yang_name = "broadcast-underlay"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::BroadcastUnderlay::~BroadcastUnderlay()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::BroadcastUnderlay::has_data() const
{
    return ipv4_multicast.is_set
	|| ipv6_multicast.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::BroadcastUnderlay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_multicast.yfilter)
	|| ydk::is_set(ipv6_multicast.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::BroadcastUnderlay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast-underlay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::BroadcastUnderlay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_multicast.is_set || is_set(ipv4_multicast.yfilter)) leaf_name_data.push_back(ipv4_multicast.get_name_leafdata());
    if (ipv6_multicast.is_set || is_set(ipv6_multicast.yfilter)) leaf_name_data.push_back(ipv6_multicast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::BroadcastUnderlay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::BroadcastUnderlay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::BroadcastUnderlay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-multicast")
    {
        ipv4_multicast = value;
        ipv4_multicast.value_namespace = name_space;
        ipv4_multicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-multicast")
    {
        ipv6_multicast = value;
        ipv6_multicast.value_namespace = name_space;
        ipv6_multicast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::BroadcastUnderlay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-multicast")
    {
        ipv4_multicast.yfilter = yfilter;
    }
    if(value_path == "ipv6-multicast")
    {
        ipv6_multicast.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::BroadcastUnderlay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-multicast" || name == "ipv6-multicast")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::DatabaseMapping()
    :
    mac(nullptr) // presence node
	,limit(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::Limit>())
{
    limit->parent = this;

    yang_name = "database-mapping"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::~DatabaseMapping()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::has_data() const
{
    for (std::size_t index=0; index<eid_cont.size(); index++)
    {
        if(eid_cont[index]->has_data())
            return true;
    }
    return (mac !=  nullptr && mac->has_data())
	|| (limit !=  nullptr && limit->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::has_operation() const
{
    for (std::size_t index=0; index<eid_cont.size(); index++)
    {
        if(eid_cont[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (mac !=  nullptr && mac->has_operation())
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eid-cont")
    {
        auto c = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont>();
        c->parent = this;
        eid_cont.push_back(c);
        return c;
    }

    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::Mac>();
        }
        return mac;
    }

    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::Limit>();
        }
        return limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : eid_cont)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(mac != nullptr)
    {
        children["mac"] = mac;
    }

    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eid-cont" || name == "mac" || name == "limit")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::EidCont()
    :
    eid_prefix{YType::str, "eid-prefix"},
    locator_set{YType::str, "locator-set"}
{

    yang_name = "eid-cont"; yang_parent_name = "database-mapping"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::~EidCont()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::has_data() const
{
    for (std::size_t index=0; index<ipv4_addrees.size(); index++)
    {
        if(ipv4_addrees[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv6_addrees.size(); index++)
    {
        if(ipv6_addrees[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv4_interface.size(); index++)
    {
        if(ipv4_interface[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv6_interface.size(); index++)
    {
        if(ipv6_interface[index]->has_data())
            return true;
    }
    return eid_prefix.is_set
	|| locator_set.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::has_operation() const
{
    for (std::size_t index=0; index<ipv4_addrees.size(); index++)
    {
        if(ipv4_addrees[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv6_addrees.size(); index++)
    {
        if(ipv6_addrees[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv4_interface.size(); index++)
    {
        if(ipv4_interface[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv6_interface.size(); index++)
    {
        if(ipv6_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(eid_prefix.yfilter)
	|| ydk::is_set(locator_set.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eid-cont" <<"[eid-prefix='" <<eid_prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eid_prefix.is_set || is_set(eid_prefix.yfilter)) leaf_name_data.push_back(eid_prefix.get_name_leafdata());
    if (locator_set.is_set || is_set(locator_set.yfilter)) leaf_name_data.push_back(locator_set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-addrees")
    {
        auto c = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees>();
        c->parent = this;
        ipv4_addrees.push_back(c);
        return c;
    }

    if(child_yang_name == "ipv6-addrees")
    {
        auto c = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees>();
        c->parent = this;
        ipv6_addrees.push_back(c);
        return c;
    }

    if(child_yang_name == "IPv4-interface")
    {
        auto c = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv4Interface>();
        c->parent = this;
        ipv4_interface.push_back(c);
        return c;
    }

    if(child_yang_name == "IPv6-interface")
    {
        auto c = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv6Interface>();
        c->parent = this;
        ipv6_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : ipv4_addrees)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : ipv6_addrees)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : ipv4_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : ipv6_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eid-prefix")
    {
        eid_prefix = value;
        eid_prefix.value_namespace = name_space;
        eid_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locator-set")
    {
        locator_set = value;
        locator_set.value_namespace = name_space;
        locator_set.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eid-prefix")
    {
        eid_prefix.yfilter = yfilter;
    }
    if(value_path == "locator-set")
    {
        locator_set.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-addrees" || name == "ipv6-addrees" || name == "IPv4-interface" || name == "IPv6-interface" || name == "eid-prefix" || name == "locator-set")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::Ipv4Addrees()
    :
    address{YType::str, "address"}
    	,
    database_mapping_option(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption>())
{
    database_mapping_option->parent = this;

    yang_name = "ipv4-addrees"; yang_parent_name = "eid-cont"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::~Ipv4Addrees()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::has_data() const
{
    return address.is_set
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-addrees" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-mapping-option")
    {
        if(database_mapping_option == nullptr)
        {
            database_mapping_option = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption>();
        }
        return database_mapping_option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(database_mapping_option != nullptr)
    {
        children["database-mapping-option"] = database_mapping_option;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database-mapping-option" || name == "address")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::DatabaseMappingOption()
    :
    priority{YType::uint8, "priority"},
    weight{YType::uint8, "weight"},
    down{YType::empty, "down"}
{

    yang_name = "database-mapping-option"; yang_parent_name = "ipv4-addrees"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::~DatabaseMappingOption()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::has_data() const
{
    return priority.is_set
	|| weight.is_set
	|| down.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(down.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping-option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (down.is_set || is_set(down.yfilter)) leaf_name_data.push_back(down.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down")
    {
        down = value;
        down.value_namespace = name_space;
        down.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "down")
    {
        down.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority" || name == "weight" || name == "down")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::Ipv6Addrees()
    :
    address{YType::str, "address"}
    	,
    database_mapping_option(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption>())
{
    database_mapping_option->parent = this;

    yang_name = "ipv6-addrees"; yang_parent_name = "eid-cont"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::~Ipv6Addrees()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::has_data() const
{
    return address.is_set
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-addrees" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-mapping-option")
    {
        if(database_mapping_option == nullptr)
        {
            database_mapping_option = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption>();
        }
        return database_mapping_option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(database_mapping_option != nullptr)
    {
        children["database-mapping-option"] = database_mapping_option;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database-mapping-option" || name == "address")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::DatabaseMappingOption()
    :
    priority{YType::uint8, "priority"},
    weight{YType::uint8, "weight"},
    down{YType::empty, "down"}
{

    yang_name = "database-mapping-option"; yang_parent_name = "ipv6-addrees"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::~DatabaseMappingOption()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::has_data() const
{
    return priority.is_set
	|| weight.is_set
	|| down.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(down.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping-option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (down.is_set || is_set(down.yfilter)) leaf_name_data.push_back(down.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down")
    {
        down = value;
        down.value_namespace = name_space;
        down.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "down")
    {
        down.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority" || name == "weight" || name == "down")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv4Interface::IPv4Interface()
    :
    name{YType::str, "name"}
    	,
    database_mapping_option(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv4Interface::DatabaseMappingOption>())
{
    database_mapping_option->parent = this;

    yang_name = "IPv4-interface"; yang_parent_name = "eid-cont"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv4Interface::~IPv4Interface()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv4Interface::has_data() const
{
    return name.is_set
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv4Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv4Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IPv4-interface" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv4Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv4Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-mapping-option")
    {
        if(database_mapping_option == nullptr)
        {
            database_mapping_option = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv4Interface::DatabaseMappingOption>();
        }
        return database_mapping_option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv4Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(database_mapping_option != nullptr)
    {
        children["database-mapping-option"] = database_mapping_option;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv4Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv4Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv4Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database-mapping-option" || name == "name")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv4Interface::DatabaseMappingOption::DatabaseMappingOption()
    :
    priority{YType::uint8, "priority"},
    weight{YType::uint8, "weight"},
    down{YType::empty, "down"}
{

    yang_name = "database-mapping-option"; yang_parent_name = "IPv4-interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv4Interface::DatabaseMappingOption::~DatabaseMappingOption()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv4Interface::DatabaseMappingOption::has_data() const
{
    return priority.is_set
	|| weight.is_set
	|| down.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv4Interface::DatabaseMappingOption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(down.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv4Interface::DatabaseMappingOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping-option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv4Interface::DatabaseMappingOption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (down.is_set || is_set(down.yfilter)) leaf_name_data.push_back(down.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv4Interface::DatabaseMappingOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv4Interface::DatabaseMappingOption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv4Interface::DatabaseMappingOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down")
    {
        down = value;
        down.value_namespace = name_space;
        down.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv4Interface::DatabaseMappingOption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "down")
    {
        down.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv4Interface::DatabaseMappingOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority" || name == "weight" || name == "down")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv6Interface::IPv6Interface()
    :
    name{YType::str, "name"}
    	,
    database_mapping_option(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv6Interface::DatabaseMappingOption>())
{
    database_mapping_option->parent = this;

    yang_name = "IPv6-interface"; yang_parent_name = "eid-cont"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv6Interface::~IPv6Interface()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv6Interface::has_data() const
{
    return name.is_set
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv6Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv6Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IPv6-interface" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv6Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv6Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-mapping-option")
    {
        if(database_mapping_option == nullptr)
        {
            database_mapping_option = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv6Interface::DatabaseMappingOption>();
        }
        return database_mapping_option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv6Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(database_mapping_option != nullptr)
    {
        children["database-mapping-option"] = database_mapping_option;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv6Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv6Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv6Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database-mapping-option" || name == "name")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv6Interface::DatabaseMappingOption::DatabaseMappingOption()
    :
    priority{YType::uint8, "priority"},
    weight{YType::uint8, "weight"},
    down{YType::empty, "down"}
{

    yang_name = "database-mapping-option"; yang_parent_name = "IPv6-interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv6Interface::DatabaseMappingOption::~DatabaseMappingOption()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv6Interface::DatabaseMappingOption::has_data() const
{
    return priority.is_set
	|| weight.is_set
	|| down.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv6Interface::DatabaseMappingOption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(down.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv6Interface::DatabaseMappingOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping-option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv6Interface::DatabaseMappingOption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (down.is_set || is_set(down.yfilter)) leaf_name_data.push_back(down.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv6Interface::DatabaseMappingOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv6Interface::DatabaseMappingOption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv6Interface::DatabaseMappingOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down")
    {
        down = value;
        down.value_namespace = name_space;
        down.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv6Interface::DatabaseMappingOption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "down")
    {
        down.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv6Interface::DatabaseMappingOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority" || name == "weight" || name == "down")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::Mac::Mac()
    :
    locator_set{YType::str, "locator-set"}
{

    yang_name = "mac"; yang_parent_name = "database-mapping"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::Mac::~Mac()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::Mac::has_data() const
{
    return locator_set.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::Mac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(locator_set.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locator_set.is_set || is_set(locator_set.yfilter)) leaf_name_data.push_back(locator_set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "locator-set")
    {
        locator_set = value;
        locator_set.value_namespace = name_space;
        locator_set.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "locator-set")
    {
        locator_set.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "locator-set")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::Limit::Limit()
    :
    dynamic{YType::uint32, "dynamic"},
    warning_threshold{YType::uint8, "warning-threshold"}
{

    yang_name = "limit"; yang_parent_name = "database-mapping"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::Limit::~Limit()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::Limit::has_data() const
{
    return dynamic.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::Limit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dynamic.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::Limit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dynamic.is_set || is_set(dynamic.yfilter)) leaf_name_data.push_back(dynamic.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::Limit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dynamic")
    {
        dynamic = value;
        dynamic.value_namespace = name_space;
        dynamic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
        warning_threshold.value_namespace = name_space;
        warning_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::Limit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dynamic")
    {
        dynamic.yfilter = yfilter;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::Limit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic" || name == "warning-threshold")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Itr::Itr()
{

    yang_name = "itr"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Itr::~Itr()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Itr::has_data() const
{
    for (std::size_t index=0; index<map_resolver.size(); index++)
    {
        if(map_resolver[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Itr::has_operation() const
{
    for (std::size_t index=0; index<map_resolver.size(); index++)
    {
        if(map_resolver[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Itr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "itr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Itr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Itr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-resolver")
    {
        auto c = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Itr::MapResolver>();
        c->parent = this;
        map_resolver.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Itr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : map_resolver)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Itr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Itr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Itr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-resolver")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Itr::MapResolver::MapResolver()
    :
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "map-resolver"; yang_parent_name = "itr"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Itr::MapResolver::~MapResolver()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Itr::MapResolver::has_data() const
{
    return ip_addr.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Itr::MapResolver::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Itr::MapResolver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-resolver" <<"[ip-addr='" <<ip_addr <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Itr::MapResolver::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Itr::MapResolver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Itr::MapResolver::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Itr::MapResolver::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Itr::MapResolver::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Itr::MapResolver::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-addr")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::ItrEnable::ItrEnable()
    :
    itr{YType::empty, "itr"}
{

    yang_name = "itr-enable"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::ItrEnable::~ItrEnable()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::ItrEnable::has_data() const
{
    return itr.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::ItrEnable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(itr.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::ItrEnable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "itr-enable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::ItrEnable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (itr.is_set || is_set(itr.yfilter)) leaf_name_data.push_back(itr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::ItrEnable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::ItrEnable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::ItrEnable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "itr")
    {
        itr = value;
        itr.value_namespace = name_space;
        itr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::ItrEnable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "itr")
    {
        itr.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::ItrEnable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "itr")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::EtrEnable::EtrEnable()
    :
    etr{YType::empty, "etr"}
{

    yang_name = "etr-enable"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::EtrEnable::~EtrEnable()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::EtrEnable::has_data() const
{
    return etr.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::EtrEnable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(etr.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::EtrEnable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etr-enable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::EtrEnable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (etr.is_set || is_set(etr.yfilter)) leaf_name_data.push_back(etr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::EtrEnable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::EtrEnable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::EtrEnable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "etr")
    {
        etr = value;
        etr.value_namespace = name_space;
        etr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::EtrEnable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "etr")
    {
        etr.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::EtrEnable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "etr")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::Etr()
    :
    map_cache_ttl{YType::uint16, "map-cache-ttl"}
    	,
    accept_map_request_mapping(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::AcceptMapRequestMapping>())
{
    accept_map_request_mapping->parent = this;

    yang_name = "etr"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::~Etr()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::has_data() const
{
    for (std::size_t index=0; index<map_server.size(); index++)
    {
        if(map_server[index]->has_data())
            return true;
    }
    return map_cache_ttl.is_set
	|| (accept_map_request_mapping !=  nullptr && accept_map_request_mapping->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::has_operation() const
{
    for (std::size_t index=0; index<map_server.size(); index++)
    {
        if(map_server[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(map_cache_ttl.yfilter)
	|| (accept_map_request_mapping !=  nullptr && accept_map_request_mapping->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (map_cache_ttl.is_set || is_set(map_cache_ttl.yfilter)) leaf_name_data.push_back(map_cache_ttl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-server")
    {
        auto c = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer>();
        c->parent = this;
        map_server.push_back(c);
        return c;
    }

    if(child_yang_name == "accept-map-request-mapping")
    {
        if(accept_map_request_mapping == nullptr)
        {
            accept_map_request_mapping = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::AcceptMapRequestMapping>();
        }
        return accept_map_request_mapping;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : map_server)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(accept_map_request_mapping != nullptr)
    {
        children["accept-map-request-mapping"] = accept_map_request_mapping;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "map-cache-ttl")
    {
        map_cache_ttl = value;
        map_cache_ttl.value_namespace = name_space;
        map_cache_ttl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "map-cache-ttl")
    {
        map_cache_ttl.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-server" || name == "accept-map-request-mapping" || name == "map-cache-ttl")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::MapServer()
    :
    ip_addr{YType::str, "ip-addr"},
    proxy_reply{YType::empty, "proxy-reply"}
    	,
    key(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key>())
{
    key->parent = this;

    yang_name = "map-server"; yang_parent_name = "etr"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::~MapServer()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::has_data() const
{
    return ip_addr.is_set
	|| proxy_reply.is_set
	|| (key !=  nullptr && key->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_addr.yfilter)
	|| ydk::is_set(proxy_reply.yfilter)
	|| (key !=  nullptr && key->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-server" <<"[ip-addr='" <<ip_addr <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (proxy_reply.is_set || is_set(proxy_reply.yfilter)) leaf_name_data.push_back(proxy_reply.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key>();
        }
        return key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(key != nullptr)
    {
        children["key"] = key;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proxy-reply")
    {
        proxy_reply = value;
        proxy_reply.value_namespace = name_space;
        proxy_reply.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
    if(value_path == "proxy-reply")
    {
        proxy_reply.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key" || name == "ip-addr" || name == "proxy-reply")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::Key()
    :
    key_pwd(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::KeyPwd>())
	,key_0(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::Key0>())
	,key_6(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::Key6>())
	,key_7(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::Key7>())
{
    key_pwd->parent = this;
    key_0->parent = this;
    key_6->parent = this;
    key_7->parent = this;

    yang_name = "key"; yang_parent_name = "map-server"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::~Key()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::has_data() const
{
    return (key_pwd !=  nullptr && key_pwd->has_data())
	|| (key_0 !=  nullptr && key_0->has_data())
	|| (key_6 !=  nullptr && key_6->has_data())
	|| (key_7 !=  nullptr && key_7->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::has_operation() const
{
    return is_set(yfilter)
	|| (key_pwd !=  nullptr && key_pwd->has_operation())
	|| (key_0 !=  nullptr && key_0->has_operation())
	|| (key_6 !=  nullptr && key_6->has_operation())
	|| (key_7 !=  nullptr && key_7->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-pwd")
    {
        if(key_pwd == nullptr)
        {
            key_pwd = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::KeyPwd>();
        }
        return key_pwd;
    }

    if(child_yang_name == "key-0")
    {
        if(key_0 == nullptr)
        {
            key_0 = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::Key0>();
        }
        return key_0;
    }

    if(child_yang_name == "key-6")
    {
        if(key_6 == nullptr)
        {
            key_6 = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::Key6>();
        }
        return key_6;
    }

    if(child_yang_name == "key-7")
    {
        if(key_7 == nullptr)
        {
            key_7 = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::Key7>();
        }
        return key_7;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(key_pwd != nullptr)
    {
        children["key-pwd"] = key_pwd;
    }

    if(key_0 != nullptr)
    {
        children["key-0"] = key_0;
    }

    if(key_6 != nullptr)
    {
        children["key-6"] = key_6;
    }

    if(key_7 != nullptr)
    {
        children["key-7"] = key_7;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-pwd" || name == "key-0" || name == "key-6" || name == "key-7")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::KeyPwd::KeyPwd()
    :
    unc_pwd{YType::str, "unc-pwd"},
    hash_function{YType::enumeration, "hash-function"}
{

    yang_name = "key-pwd"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::KeyPwd::~KeyPwd()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::KeyPwd::has_data() const
{
    return unc_pwd.is_set
	|| hash_function.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::KeyPwd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unc_pwd.yfilter)
	|| ydk::is_set(hash_function.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::KeyPwd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-pwd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::KeyPwd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unc_pwd.is_set || is_set(unc_pwd.yfilter)) leaf_name_data.push_back(unc_pwd.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.yfilter)) leaf_name_data.push_back(hash_function.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::KeyPwd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::KeyPwd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::KeyPwd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unc-pwd")
    {
        unc_pwd = value;
        unc_pwd.value_namespace = name_space;
        unc_pwd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hash-function")
    {
        hash_function = value;
        hash_function.value_namespace = name_space;
        hash_function.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::KeyPwd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unc-pwd")
    {
        unc_pwd.yfilter = yfilter;
    }
    if(value_path == "hash-function")
    {
        hash_function.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::KeyPwd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unc-pwd" || name == "hash-function")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::Key0::Key0()
    :
    ak_0{YType::str, "ak-0"},
    hash_function{YType::enumeration, "hash-function"}
{

    yang_name = "key-0"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::Key0::~Key0()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::Key0::has_data() const
{
    return ak_0.is_set
	|| hash_function.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::Key0::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ak_0.yfilter)
	|| ydk::is_set(hash_function.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::Key0::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-0";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::Key0::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_0.is_set || is_set(ak_0.yfilter)) leaf_name_data.push_back(ak_0.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.yfilter)) leaf_name_data.push_back(hash_function.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::Key0::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::Key0::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::Key0::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ak-0")
    {
        ak_0 = value;
        ak_0.value_namespace = name_space;
        ak_0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hash-function")
    {
        hash_function = value;
        hash_function.value_namespace = name_space;
        hash_function.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::Key0::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ak-0")
    {
        ak_0.yfilter = yfilter;
    }
    if(value_path == "hash-function")
    {
        hash_function.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::Key0::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ak-0" || name == "hash-function")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::Key6::Key6()
    :
    ak_6{YType::str, "ak-6"},
    hash_function{YType::enumeration, "hash-function"}
{

    yang_name = "key-6"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::Key6::~Key6()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::Key6::has_data() const
{
    return ak_6.is_set
	|| hash_function.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::Key6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ak_6.yfilter)
	|| ydk::is_set(hash_function.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::Key6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::Key6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_6.is_set || is_set(ak_6.yfilter)) leaf_name_data.push_back(ak_6.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.yfilter)) leaf_name_data.push_back(hash_function.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::Key6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::Key6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::Key6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ak-6")
    {
        ak_6 = value;
        ak_6.value_namespace = name_space;
        ak_6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hash-function")
    {
        hash_function = value;
        hash_function.value_namespace = name_space;
        hash_function.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::Key6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ak-6")
    {
        ak_6.yfilter = yfilter;
    }
    if(value_path == "hash-function")
    {
        hash_function.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::Key6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ak-6" || name == "hash-function")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::Key7::Key7()
    :
    ak_7{YType::str, "ak-7"},
    hash_function{YType::enumeration, "hash-function"}
{

    yang_name = "key-7"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::Key7::~Key7()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::Key7::has_data() const
{
    return ak_7.is_set
	|| hash_function.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::Key7::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ak_7.yfilter)
	|| ydk::is_set(hash_function.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::Key7::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-7";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::Key7::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_7.is_set || is_set(ak_7.yfilter)) leaf_name_data.push_back(ak_7.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.yfilter)) leaf_name_data.push_back(hash_function.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::Key7::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::Key7::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::Key7::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ak-7")
    {
        ak_7 = value;
        ak_7.value_namespace = name_space;
        ak_7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hash-function")
    {
        hash_function = value;
        hash_function.value_namespace = name_space;
        hash_function.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::Key7::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ak-7")
    {
        ak_7.yfilter = yfilter;
    }
    if(value_path == "hash-function")
    {
        hash_function.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::Key7::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ak-7" || name == "hash-function")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::AcceptMapRequestMapping::AcceptMapRequestMapping()
    :
    accept_mappping{YType::empty, "accept-mappping"},
    verify{YType::empty, "verify"}
{

    yang_name = "accept-map-request-mapping"; yang_parent_name = "etr"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::AcceptMapRequestMapping::~AcceptMapRequestMapping()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::AcceptMapRequestMapping::has_data() const
{
    return accept_mappping.is_set
	|| verify.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::AcceptMapRequestMapping::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(accept_mappping.yfilter)
	|| ydk::is_set(verify.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::AcceptMapRequestMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accept-map-request-mapping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::AcceptMapRequestMapping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accept_mappping.is_set || is_set(accept_mappping.yfilter)) leaf_name_data.push_back(accept_mappping.get_name_leafdata());
    if (verify.is_set || is_set(verify.yfilter)) leaf_name_data.push_back(verify.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::AcceptMapRequestMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::AcceptMapRequestMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::AcceptMapRequestMapping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "accept-mappping")
    {
        accept_mappping = value;
        accept_mappping.value_namespace = name_space;
        accept_mappping.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verify")
    {
        verify = value;
        verify.value_namespace = name_space;
        verify.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::AcceptMapRequestMapping::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "accept-mappping")
    {
        accept_mappping.yfilter = yfilter;
    }
    if(value_path == "verify")
    {
        verify.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::AcceptMapRequestMapping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accept-mappping" || name == "verify")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCacheLimit::MapCacheLimit()
    :
    max_map_cache_entries{YType::uint32, "max-map-cache-entries"},
    reserve_list{YType::str, "reserve-list"},
    warning_threshold{YType::uint8, "warning-threshold"}
{

    yang_name = "map-cache-limit"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCacheLimit::~MapCacheLimit()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCacheLimit::has_data() const
{
    return max_map_cache_entries.is_set
	|| reserve_list.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCacheLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_map_cache_entries.yfilter)
	|| ydk::is_set(reserve_list.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCacheLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCacheLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_map_cache_entries.is_set || is_set(max_map_cache_entries.yfilter)) leaf_name_data.push_back(max_map_cache_entries.get_name_leafdata());
    if (reserve_list.is_set || is_set(reserve_list.yfilter)) leaf_name_data.push_back(reserve_list.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCacheLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCacheLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCacheLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-map-cache-entries")
    {
        max_map_cache_entries = value;
        max_map_cache_entries.value_namespace = name_space;
        max_map_cache_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reserve-list")
    {
        reserve_list = value;
        reserve_list.value_namespace = name_space;
        reserve_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
        warning_threshold.value_namespace = name_space;
        warning_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCacheLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-map-cache-entries")
    {
        max_map_cache_entries.yfilter = yfilter;
    }
    if(value_path == "reserve-list")
    {
        reserve_list.yfilter = yfilter;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCacheLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-map-cache-entries" || name == "reserve-list" || name == "warning-threshold")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::SiteRegistration::SiteRegistration()
    :
    limit{YType::uint32, "limit"},
    warning_threshold{YType::uint8, "warning-threshold"}
{

    yang_name = "site-registration"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::SiteRegistration::~SiteRegistration()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::SiteRegistration::has_data() const
{
    return limit.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::SiteRegistration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::SiteRegistration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "site-registration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::SiteRegistration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::SiteRegistration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::SiteRegistration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::SiteRegistration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
        warning_threshold.value_namespace = name_space;
        warning_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::SiteRegistration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::SiteRegistration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit" || name == "warning-threshold")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::SolicitMapRequest::SolicitMapRequest()
    :
    ignore{YType::empty, "ignore"},
    max_per_entry{YType::uint8, "max-per-entry"},
    suppression_time{YType::uint16, "suppression-time"}
{

    yang_name = "solicit-map-request"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::SolicitMapRequest::~SolicitMapRequest()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::SolicitMapRequest::has_data() const
{
    return ignore.is_set
	|| max_per_entry.is_set
	|| suppression_time.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::SolicitMapRequest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ignore.yfilter)
	|| ydk::is_set(max_per_entry.yfilter)
	|| ydk::is_set(suppression_time.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::SolicitMapRequest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "solicit-map-request";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::SolicitMapRequest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore.is_set || is_set(ignore.yfilter)) leaf_name_data.push_back(ignore.get_name_leafdata());
    if (max_per_entry.is_set || is_set(max_per_entry.yfilter)) leaf_name_data.push_back(max_per_entry.get_name_leafdata());
    if (suppression_time.is_set || is_set(suppression_time.yfilter)) leaf_name_data.push_back(suppression_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::SolicitMapRequest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::SolicitMapRequest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::SolicitMapRequest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ignore")
    {
        ignore = value;
        ignore.value_namespace = name_space;
        ignore.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-per-entry")
    {
        max_per_entry = value;
        max_per_entry.value_namespace = name_space;
        max_per_entry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppression-time")
    {
        suppression_time = value;
        suppression_time.value_namespace = name_space;
        suppression_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::SolicitMapRequest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ignore")
    {
        ignore.yfilter = yfilter;
    }
    if(value_path == "max-per-entry")
    {
        max_per_entry.yfilter = yfilter;
    }
    if(value_path == "suppression-time")
    {
        suppression_time.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::SolicitMapRequest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ignore" || name == "max-per-entry" || name == "suppression-time")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCache::MapCache()
{

    yang_name = "map-cache"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCache::~MapCache()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCache::has_data() const
{
    for (std::size_t index=0; index<eid_cont.size(); index++)
    {
        if(eid_cont[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCache::has_operation() const
{
    for (std::size_t index=0; index<eid_cont.size(); index++)
    {
        if(eid_cont[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCache::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eid-cont")
    {
        auto c = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCache::EidCont>();
        c->parent = this;
        eid_cont.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCache::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : eid_cont)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCache::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCache::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCache::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eid-cont")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCache::EidCont::EidCont()
    :
    eid_prefix{YType::str, "eid-prefix"}
    	,
    etr_interface_ip(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCache::EidCont::EtrInterfaceIp>())
{
    etr_interface_ip->parent = this;

    yang_name = "eid-cont"; yang_parent_name = "map-cache"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCache::EidCont::~EidCont()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCache::EidCont::has_data() const
{
    return eid_prefix.is_set
	|| (etr_interface_ip !=  nullptr && etr_interface_ip->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCache::EidCont::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eid_prefix.yfilter)
	|| (etr_interface_ip !=  nullptr && etr_interface_ip->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCache::EidCont::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eid-cont" <<"[eid-prefix='" <<eid_prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCache::EidCont::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eid_prefix.is_set || is_set(eid_prefix.yfilter)) leaf_name_data.push_back(eid_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCache::EidCont::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "etr-interface-ip")
    {
        if(etr_interface_ip == nullptr)
        {
            etr_interface_ip = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCache::EidCont::EtrInterfaceIp>();
        }
        return etr_interface_ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCache::EidCont::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(etr_interface_ip != nullptr)
    {
        children["etr-interface-ip"] = etr_interface_ip;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCache::EidCont::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eid-prefix")
    {
        eid_prefix = value;
        eid_prefix.value_namespace = name_space;
        eid_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCache::EidCont::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eid-prefix")
    {
        eid_prefix.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCache::EidCont::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "etr-interface-ip" || name == "eid-prefix")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCache::EidCont::EtrInterfaceIp::EtrInterfaceIp()
    :
    etr_interface_ip_address{YType::str, "etr-interface-ip-address"},
    priority{YType::uint8, "priority"},
    weight{YType::uint8, "weight"}
{

    yang_name = "etr-interface-ip"; yang_parent_name = "eid-cont"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCache::EidCont::EtrInterfaceIp::~EtrInterfaceIp()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCache::EidCont::EtrInterfaceIp::has_data() const
{
    return etr_interface_ip_address.is_set
	|| priority.is_set
	|| weight.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCache::EidCont::EtrInterfaceIp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(etr_interface_ip_address.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCache::EidCont::EtrInterfaceIp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etr-interface-ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCache::EidCont::EtrInterfaceIp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (etr_interface_ip_address.is_set || is_set(etr_interface_ip_address.yfilter)) leaf_name_data.push_back(etr_interface_ip_address.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCache::EidCont::EtrInterfaceIp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCache::EidCont::EtrInterfaceIp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCache::EidCont::EtrInterfaceIp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "etr-interface-ip-address")
    {
        etr_interface_ip_address = value;
        etr_interface_ip_address.value_namespace = name_space;
        etr_interface_ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCache::EidCont::EtrInterfaceIp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "etr-interface-ip-address")
    {
        etr_interface_ip_address.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCache::EidCont::EtrInterfaceIp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "etr-interface-ip-address" || name == "priority" || name == "weight")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::Decapsulation()
    :
    filter(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::Filter>())
{
    filter->parent = this;

    yang_name = "decapsulation"; yang_parent_name = "instance-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::~Decapsulation()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::has_data() const
{
    return (filter !=  nullptr && filter->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::has_operation() const
{
    return is_set(yfilter)
	|| (filter !=  nullptr && filter->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "decapsulation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "filter")
    {
        if(filter == nullptr)
        {
            filter = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::Filter>();
        }
        return filter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(filter != nullptr)
    {
        children["filter"] = filter;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "filter")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::Filter::Filter()
    :
    rloc(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::Filter::Rloc>())
{
    rloc->parent = this;

    yang_name = "filter"; yang_parent_name = "decapsulation"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::Filter::~Filter()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::Filter::has_data() const
{
    return (rloc !=  nullptr && rloc->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::Filter::has_operation() const
{
    return is_set(yfilter)
	|| (rloc !=  nullptr && rloc->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::Filter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::Filter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::Filter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rloc")
    {
        if(rloc == nullptr)
        {
            rloc = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::Filter::Rloc>();
        }
        return rloc;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::Filter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rloc != nullptr)
    {
        children["rloc"] = rloc;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::Filter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::Filter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::Filter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rloc")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::Filter::Rloc::Rloc()
    :
    source(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::Filter::Rloc::Source>())
{
    source->parent = this;

    yang_name = "rloc"; yang_parent_name = "filter"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::Filter::Rloc::~Rloc()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::Filter::Rloc::has_data() const
{
    return (source !=  nullptr && source->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::Filter::Rloc::has_operation() const
{
    return is_set(yfilter)
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::Filter::Rloc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rloc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::Filter::Rloc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::Filter::Rloc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::Filter::Rloc::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::Filter::Rloc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(source != nullptr)
    {
        children["source"] = source;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::Filter::Rloc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::Filter::Rloc::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::Filter::Rloc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::Filter::Rloc::Source::Source()
    :
    locator_set{YType::str, "locator-set"},
    member{YType::empty, "member"}
{

    yang_name = "source"; yang_parent_name = "rloc"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::Filter::Rloc::Source::~Source()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::Filter::Rloc::Source::has_data() const
{
    return locator_set.is_set
	|| member.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::Filter::Rloc::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(locator_set.yfilter)
	|| ydk::is_set(member.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::Filter::Rloc::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::Filter::Rloc::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locator_set.is_set || is_set(locator_set.yfilter)) leaf_name_data.push_back(locator_set.get_name_leafdata());
    if (member.is_set || is_set(member.yfilter)) leaf_name_data.push_back(member.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::Filter::Rloc::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::Filter::Rloc::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::Filter::Rloc::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "locator-set")
    {
        locator_set = value;
        locator_set.value_namespace = name_space;
        locator_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "member")
    {
        member = value;
        member.value_namespace = name_space;
        member.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::Filter::Rloc::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "locator-set")
    {
        locator_set.yfilter = yfilter;
    }
    if(value_path == "member")
    {
        member.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::Filter::Rloc::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "locator-set" || name == "member")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::DynamicEid()
    :
    name{YType::str, "name"},
    map_notify_group{YType::str, "map-notify-group"}
    	,
    database_mapping(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::DatabaseMapping>())
	,eid_notify(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify>())
{
    database_mapping->parent = this;
    eid_notify->parent = this;

    yang_name = "dynamic-eid"; yang_parent_name = "instance-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::~DynamicEid()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::has_data() const
{
    for (std::size_t index=0; index<map_server.size(); index++)
    {
        if(map_server[index]->has_data())
            return true;
    }
    return name.is_set
	|| map_notify_group.is_set
	|| (database_mapping !=  nullptr && database_mapping->has_data())
	|| (eid_notify !=  nullptr && eid_notify->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::has_operation() const
{
    for (std::size_t index=0; index<map_server.size(); index++)
    {
        if(map_server[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(map_notify_group.yfilter)
	|| (database_mapping !=  nullptr && database_mapping->has_operation())
	|| (eid_notify !=  nullptr && eid_notify->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic-eid" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (map_notify_group.is_set || is_set(map_notify_group.yfilter)) leaf_name_data.push_back(map_notify_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-mapping")
    {
        if(database_mapping == nullptr)
        {
            database_mapping = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::DatabaseMapping>();
        }
        return database_mapping;
    }

    if(child_yang_name == "eid-notify")
    {
        if(eid_notify == nullptr)
        {
            eid_notify = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify>();
        }
        return eid_notify;
    }

    if(child_yang_name == "map-server")
    {
        auto c = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer>();
        c->parent = this;
        map_server.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(database_mapping != nullptr)
    {
        children["database-mapping"] = database_mapping;
    }

    if(eid_notify != nullptr)
    {
        children["eid-notify"] = eid_notify;
    }

    count = 0;
    for (auto const & c : map_server)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "map-notify-group")
    {
        map_notify_group = value;
        map_notify_group.value_namespace = name_space;
        map_notify_group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "map-notify-group")
    {
        map_notify_group.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database-mapping" || name == "eid-notify" || name == "map-server" || name == "name" || name == "map-notify-group")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::DatabaseMapping::DatabaseMapping()
{

    yang_name = "database-mapping"; yang_parent_name = "dynamic-eid"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::DatabaseMapping::~DatabaseMapping()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::DatabaseMapping::has_data() const
{
    for (std::size_t index=0; index<ipv4_prefix.size(); index++)
    {
        if(ipv4_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::DatabaseMapping::has_operation() const
{
    for (std::size_t index=0; index<ipv4_prefix.size(); index++)
    {
        if(ipv4_prefix[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::DatabaseMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::DatabaseMapping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::DatabaseMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-prefix")
    {
        auto c = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::DatabaseMapping::Ipv4Prefix>();
        c->parent = this;
        ipv4_prefix.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::DatabaseMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : ipv4_prefix)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::DatabaseMapping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::DatabaseMapping::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::DatabaseMapping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-prefix")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::DatabaseMapping::Ipv4Prefix::Ipv4Prefix()
    :
    eid_prefix{YType::str, "eid-prefix"},
    locator_set{YType::str, "locator-set"}
{

    yang_name = "ipv4-prefix"; yang_parent_name = "database-mapping"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::DatabaseMapping::Ipv4Prefix::~Ipv4Prefix()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::DatabaseMapping::Ipv4Prefix::has_data() const
{
    return eid_prefix.is_set
	|| locator_set.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::DatabaseMapping::Ipv4Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eid_prefix.yfilter)
	|| ydk::is_set(locator_set.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::DatabaseMapping::Ipv4Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-prefix" <<"[eid-prefix='" <<eid_prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::DatabaseMapping::Ipv4Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eid_prefix.is_set || is_set(eid_prefix.yfilter)) leaf_name_data.push_back(eid_prefix.get_name_leafdata());
    if (locator_set.is_set || is_set(locator_set.yfilter)) leaf_name_data.push_back(locator_set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::DatabaseMapping::Ipv4Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::DatabaseMapping::Ipv4Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::DatabaseMapping::Ipv4Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eid-prefix")
    {
        eid_prefix = value;
        eid_prefix.value_namespace = name_space;
        eid_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locator-set")
    {
        locator_set = value;
        locator_set.value_namespace = name_space;
        locator_set.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::DatabaseMapping::Ipv4Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eid-prefix")
    {
        eid_prefix.yfilter = yfilter;
    }
    if(value_path == "locator-set")
    {
        locator_set.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::DatabaseMapping::Ipv4Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eid-prefix" || name == "locator-set")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::EidNotify()
    :
    authentication_key(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::AuthenticationKey>())
{
    authentication_key->parent = this;

    yang_name = "eid-notify"; yang_parent_name = "dynamic-eid"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::~EidNotify()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::has_data() const
{
    for (std::size_t index=0; index<gateway_key.size(); index++)
    {
        if(gateway_key[index]->has_data())
            return true;
    }
    return (authentication_key !=  nullptr && authentication_key->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::has_operation() const
{
    for (std::size_t index=0; index<gateway_key.size(); index++)
    {
        if(gateway_key[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (authentication_key !=  nullptr && authentication_key->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eid-notify";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication-key")
    {
        if(authentication_key == nullptr)
        {
            authentication_key = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::AuthenticationKey>();
        }
        return authentication_key;
    }

    if(child_yang_name == "gateway-key")
    {
        auto c = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey>();
        c->parent = this;
        gateway_key.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(authentication_key != nullptr)
    {
        children["authentication-key"] = authentication_key;
    }

    count = 0;
    for (auto const & c : gateway_key)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication-key" || name == "gateway-key")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::AuthenticationKey::AuthenticationKey()
    :
    unc_pwd{YType::str, "unc-pwd"},
    key_0{YType::str, "key-0"},
    key_6{YType::str, "key-6"},
    key_7{YType::str, "key-7"}
{

    yang_name = "authentication-key"; yang_parent_name = "eid-notify"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::AuthenticationKey::~AuthenticationKey()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::AuthenticationKey::has_data() const
{
    return unc_pwd.is_set
	|| key_0.is_set
	|| key_6.is_set
	|| key_7.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::AuthenticationKey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unc_pwd.yfilter)
	|| ydk::is_set(key_0.yfilter)
	|| ydk::is_set(key_6.yfilter)
	|| ydk::is_set(key_7.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::AuthenticationKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication-key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::AuthenticationKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unc_pwd.is_set || is_set(unc_pwd.yfilter)) leaf_name_data.push_back(unc_pwd.get_name_leafdata());
    if (key_0.is_set || is_set(key_0.yfilter)) leaf_name_data.push_back(key_0.get_name_leafdata());
    if (key_6.is_set || is_set(key_6.yfilter)) leaf_name_data.push_back(key_6.get_name_leafdata());
    if (key_7.is_set || is_set(key_7.yfilter)) leaf_name_data.push_back(key_7.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::AuthenticationKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::AuthenticationKey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::AuthenticationKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unc-pwd")
    {
        unc_pwd = value;
        unc_pwd.value_namespace = name_space;
        unc_pwd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-0")
    {
        key_0 = value;
        key_0.value_namespace = name_space;
        key_0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-6")
    {
        key_6 = value;
        key_6.value_namespace = name_space;
        key_6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-7")
    {
        key_7 = value;
        key_7.value_namespace = name_space;
        key_7.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::AuthenticationKey::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unc-pwd")
    {
        unc_pwd.yfilter = yfilter;
    }
    if(value_path == "key-0")
    {
        key_0.yfilter = yfilter;
    }
    if(value_path == "key-6")
    {
        key_6.yfilter = yfilter;
    }
    if(value_path == "key-7")
    {
        key_7.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::AuthenticationKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unc-pwd" || name == "key-0" || name == "key-6" || name == "key-7")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::GatewayKey()
    :
    gateway_ip{YType::str, "gateway-ip"}
    	,
    key(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key>())
{
    key->parent = this;

    yang_name = "gateway-key"; yang_parent_name = "eid-notify"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::~GatewayKey()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::has_data() const
{
    return gateway_ip.is_set
	|| (key !=  nullptr && key->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(gateway_ip.yfilter)
	|| (key !=  nullptr && key->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gateway-key" <<"[gateway-ip='" <<gateway_ip <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gateway_ip.is_set || is_set(gateway_ip.yfilter)) leaf_name_data.push_back(gateway_ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key>();
        }
        return key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(key != nullptr)
    {
        children["key"] = key;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "gateway-ip")
    {
        gateway_ip = value;
        gateway_ip.value_namespace = name_space;
        gateway_ip.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "gateway-ip")
    {
        gateway_ip.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key" || name == "gateway-ip")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key()
    :
    key_pwd(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::KeyPwd>())
	,key_0(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key0>())
	,key_6(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key6>())
{
    key_pwd->parent = this;
    key_0->parent = this;
    key_6->parent = this;

    yang_name = "key"; yang_parent_name = "gateway-key"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::~Key()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::has_data() const
{
    return (key_pwd !=  nullptr && key_pwd->has_data())
	|| (key_0 !=  nullptr && key_0->has_data())
	|| (key_6 !=  nullptr && key_6->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::has_operation() const
{
    return is_set(yfilter)
	|| (key_pwd !=  nullptr && key_pwd->has_operation())
	|| (key_0 !=  nullptr && key_0->has_operation())
	|| (key_6 !=  nullptr && key_6->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-pwd")
    {
        if(key_pwd == nullptr)
        {
            key_pwd = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::KeyPwd>();
        }
        return key_pwd;
    }

    if(child_yang_name == "key-0")
    {
        if(key_0 == nullptr)
        {
            key_0 = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key0>();
        }
        return key_0;
    }

    if(child_yang_name == "key-6")
    {
        if(key_6 == nullptr)
        {
            key_6 = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key6>();
        }
        return key_6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(key_pwd != nullptr)
    {
        children["key-pwd"] = key_pwd;
    }

    if(key_0 != nullptr)
    {
        children["key-0"] = key_0;
    }

    if(key_6 != nullptr)
    {
        children["key-6"] = key_6;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-pwd" || name == "key-0" || name == "key-6")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::KeyPwd::KeyPwd()
    :
    unc_pwd{YType::str, "unc-pwd"},
    hash_function{YType::enumeration, "hash-function"}
{

    yang_name = "key-pwd"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::KeyPwd::~KeyPwd()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::KeyPwd::has_data() const
{
    return unc_pwd.is_set
	|| hash_function.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::KeyPwd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unc_pwd.yfilter)
	|| ydk::is_set(hash_function.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::KeyPwd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-pwd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::KeyPwd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unc_pwd.is_set || is_set(unc_pwd.yfilter)) leaf_name_data.push_back(unc_pwd.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.yfilter)) leaf_name_data.push_back(hash_function.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::KeyPwd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::KeyPwd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::KeyPwd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unc-pwd")
    {
        unc_pwd = value;
        unc_pwd.value_namespace = name_space;
        unc_pwd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hash-function")
    {
        hash_function = value;
        hash_function.value_namespace = name_space;
        hash_function.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::KeyPwd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unc-pwd")
    {
        unc_pwd.yfilter = yfilter;
    }
    if(value_path == "hash-function")
    {
        hash_function.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::KeyPwd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unc-pwd" || name == "hash-function")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key0::Key0()
    :
    ak_0{YType::str, "ak-0"},
    hash_function{YType::enumeration, "hash-function"}
{

    yang_name = "key-0"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key0::~Key0()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key0::has_data() const
{
    return ak_0.is_set
	|| hash_function.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key0::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ak_0.yfilter)
	|| ydk::is_set(hash_function.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key0::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-0";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key0::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_0.is_set || is_set(ak_0.yfilter)) leaf_name_data.push_back(ak_0.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.yfilter)) leaf_name_data.push_back(hash_function.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key0::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key0::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key0::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ak-0")
    {
        ak_0 = value;
        ak_0.value_namespace = name_space;
        ak_0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hash-function")
    {
        hash_function = value;
        hash_function.value_namespace = name_space;
        hash_function.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key0::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ak-0")
    {
        ak_0.yfilter = yfilter;
    }
    if(value_path == "hash-function")
    {
        hash_function.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key0::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ak-0" || name == "hash-function")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key6::Key6()
    :
    ak_6{YType::str, "ak-6"},
    hash_function{YType::enumeration, "hash-function"}
{

    yang_name = "key-6"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key6::~Key6()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key6::has_data() const
{
    return ak_6.is_set
	|| hash_function.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ak_6.yfilter)
	|| ydk::is_set(hash_function.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_6.is_set || is_set(ak_6.yfilter)) leaf_name_data.push_back(ak_6.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.yfilter)) leaf_name_data.push_back(hash_function.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ak-6")
    {
        ak_6 = value;
        ak_6.value_namespace = name_space;
        ak_6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hash-function")
    {
        hash_function = value;
        hash_function.value_namespace = name_space;
        hash_function.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ak-6")
    {
        ak_6.yfilter = yfilter;
    }
    if(value_path == "hash-function")
    {
        hash_function.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ak-6" || name == "hash-function")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::MapServer()
    :
    ip_addr{YType::str, "ip-addr"},
    proxy_reply{YType::empty, "proxy-reply"}
    	,
    key(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key>())
{
    key->parent = this;

    yang_name = "map-server"; yang_parent_name = "dynamic-eid"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::~MapServer()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::has_data() const
{
    return ip_addr.is_set
	|| proxy_reply.is_set
	|| (key !=  nullptr && key->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_addr.yfilter)
	|| ydk::is_set(proxy_reply.yfilter)
	|| (key !=  nullptr && key->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-server" <<"[ip-addr='" <<ip_addr <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (proxy_reply.is_set || is_set(proxy_reply.yfilter)) leaf_name_data.push_back(proxy_reply.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key>();
        }
        return key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(key != nullptr)
    {
        children["key"] = key;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proxy-reply")
    {
        proxy_reply = value;
        proxy_reply.value_namespace = name_space;
        proxy_reply.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
    if(value_path == "proxy-reply")
    {
        proxy_reply.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key" || name == "ip-addr" || name == "proxy-reply")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key()
    :
    key_pwd(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::KeyPwd>())
	,key_0(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key0>())
	,key_6(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key6>())
	,key_7(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key7>())
{
    key_pwd->parent = this;
    key_0->parent = this;
    key_6->parent = this;
    key_7->parent = this;

    yang_name = "key"; yang_parent_name = "map-server"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::~Key()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::has_data() const
{
    return (key_pwd !=  nullptr && key_pwd->has_data())
	|| (key_0 !=  nullptr && key_0->has_data())
	|| (key_6 !=  nullptr && key_6->has_data())
	|| (key_7 !=  nullptr && key_7->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::has_operation() const
{
    return is_set(yfilter)
	|| (key_pwd !=  nullptr && key_pwd->has_operation())
	|| (key_0 !=  nullptr && key_0->has_operation())
	|| (key_6 !=  nullptr && key_6->has_operation())
	|| (key_7 !=  nullptr && key_7->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-pwd")
    {
        if(key_pwd == nullptr)
        {
            key_pwd = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::KeyPwd>();
        }
        return key_pwd;
    }

    if(child_yang_name == "key-0")
    {
        if(key_0 == nullptr)
        {
            key_0 = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key0>();
        }
        return key_0;
    }

    if(child_yang_name == "key-6")
    {
        if(key_6 == nullptr)
        {
            key_6 = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key6>();
        }
        return key_6;
    }

    if(child_yang_name == "key-7")
    {
        if(key_7 == nullptr)
        {
            key_7 = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key7>();
        }
        return key_7;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(key_pwd != nullptr)
    {
        children["key-pwd"] = key_pwd;
    }

    if(key_0 != nullptr)
    {
        children["key-0"] = key_0;
    }

    if(key_6 != nullptr)
    {
        children["key-6"] = key_6;
    }

    if(key_7 != nullptr)
    {
        children["key-7"] = key_7;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-pwd" || name == "key-0" || name == "key-6" || name == "key-7")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::KeyPwd::KeyPwd()
    :
    unc_pwd{YType::str, "unc-pwd"},
    hash_function{YType::enumeration, "hash-function"}
{

    yang_name = "key-pwd"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::KeyPwd::~KeyPwd()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::KeyPwd::has_data() const
{
    return unc_pwd.is_set
	|| hash_function.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::KeyPwd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unc_pwd.yfilter)
	|| ydk::is_set(hash_function.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::KeyPwd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-pwd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::KeyPwd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unc_pwd.is_set || is_set(unc_pwd.yfilter)) leaf_name_data.push_back(unc_pwd.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.yfilter)) leaf_name_data.push_back(hash_function.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::KeyPwd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::KeyPwd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::KeyPwd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unc-pwd")
    {
        unc_pwd = value;
        unc_pwd.value_namespace = name_space;
        unc_pwd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hash-function")
    {
        hash_function = value;
        hash_function.value_namespace = name_space;
        hash_function.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::KeyPwd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unc-pwd")
    {
        unc_pwd.yfilter = yfilter;
    }
    if(value_path == "hash-function")
    {
        hash_function.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::KeyPwd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unc-pwd" || name == "hash-function")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key0::Key0()
    :
    ak_0{YType::str, "ak-0"},
    hash_function{YType::enumeration, "hash-function"}
{

    yang_name = "key-0"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key0::~Key0()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key0::has_data() const
{
    return ak_0.is_set
	|| hash_function.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key0::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ak_0.yfilter)
	|| ydk::is_set(hash_function.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key0::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-0";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key0::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_0.is_set || is_set(ak_0.yfilter)) leaf_name_data.push_back(ak_0.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.yfilter)) leaf_name_data.push_back(hash_function.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key0::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key0::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key0::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ak-0")
    {
        ak_0 = value;
        ak_0.value_namespace = name_space;
        ak_0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hash-function")
    {
        hash_function = value;
        hash_function.value_namespace = name_space;
        hash_function.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key0::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ak-0")
    {
        ak_0.yfilter = yfilter;
    }
    if(value_path == "hash-function")
    {
        hash_function.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key0::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ak-0" || name == "hash-function")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key6::Key6()
    :
    ak_6{YType::str, "ak-6"},
    hash_function{YType::enumeration, "hash-function"}
{

    yang_name = "key-6"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key6::~Key6()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key6::has_data() const
{
    return ak_6.is_set
	|| hash_function.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ak_6.yfilter)
	|| ydk::is_set(hash_function.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_6.is_set || is_set(ak_6.yfilter)) leaf_name_data.push_back(ak_6.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.yfilter)) leaf_name_data.push_back(hash_function.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ak-6")
    {
        ak_6 = value;
        ak_6.value_namespace = name_space;
        ak_6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hash-function")
    {
        hash_function = value;
        hash_function.value_namespace = name_space;
        hash_function.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ak-6")
    {
        ak_6.yfilter = yfilter;
    }
    if(value_path == "hash-function")
    {
        hash_function.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ak-6" || name == "hash-function")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key7::Key7()
    :
    ak_7{YType::str, "ak-7"},
    hash_function{YType::enumeration, "hash-function"}
{

    yang_name = "key-7"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key7::~Key7()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key7::has_data() const
{
    return ak_7.is_set
	|| hash_function.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key7::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ak_7.yfilter)
	|| ydk::is_set(hash_function.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key7::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-7";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key7::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_7.is_set || is_set(ak_7.yfilter)) leaf_name_data.push_back(ak_7.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.yfilter)) leaf_name_data.push_back(hash_function.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key7::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key7::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key7::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ak-7")
    {
        ak_7 = value;
        ak_7.value_namespace = name_space;
        ak_7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hash-function")
    {
        hash_function = value;
        hash_function.value_namespace = name_space;
        hash_function.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key7::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ak-7")
    {
        ak_7.yfilter = yfilter;
    }
    if(value_path == "hash-function")
    {
        hash_function.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key7::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ak-7" || name == "hash-function")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::LocReachAlgorithm::LocReachAlgorithm()
    :
    rloc_probing{YType::empty, "rloc-probing"}
    	,
    lsb_reports(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::LocReachAlgorithm::LsbReports>())
{
    lsb_reports->parent = this;

    yang_name = "loc-reach-algorithm"; yang_parent_name = "instance-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::LocReachAlgorithm::~LocReachAlgorithm()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::LocReachAlgorithm::has_data() const
{
    return rloc_probing.is_set
	|| (lsb_reports !=  nullptr && lsb_reports->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::LocReachAlgorithm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rloc_probing.yfilter)
	|| (lsb_reports !=  nullptr && lsb_reports->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::LocReachAlgorithm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "loc-reach-algorithm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::LocReachAlgorithm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rloc_probing.is_set || is_set(rloc_probing.yfilter)) leaf_name_data.push_back(rloc_probing.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::LocReachAlgorithm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsb-reports")
    {
        if(lsb_reports == nullptr)
        {
            lsb_reports = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::LocReachAlgorithm::LsbReports>();
        }
        return lsb_reports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::LocReachAlgorithm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(lsb_reports != nullptr)
    {
        children["lsb-reports"] = lsb_reports;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::LocReachAlgorithm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rloc-probing")
    {
        rloc_probing = value;
        rloc_probing.value_namespace = name_space;
        rloc_probing.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::LocReachAlgorithm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rloc-probing")
    {
        rloc_probing.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::LocReachAlgorithm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsb-reports" || name == "rloc-probing")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::LocReachAlgorithm::LsbReports::LsbReports()
    :
    do_not_transmit{YType::empty, "do-not-transmit"},
    ignore{YType::empty, "ignore"}
{

    yang_name = "lsb-reports"; yang_parent_name = "loc-reach-algorithm"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::LocReachAlgorithm::LsbReports::~LsbReports()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::LocReachAlgorithm::LsbReports::has_data() const
{
    return do_not_transmit.is_set
	|| ignore.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::LocReachAlgorithm::LsbReports::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(do_not_transmit.yfilter)
	|| ydk::is_set(ignore.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::LocReachAlgorithm::LsbReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsb-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::LocReachAlgorithm::LsbReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (do_not_transmit.is_set || is_set(do_not_transmit.yfilter)) leaf_name_data.push_back(do_not_transmit.get_name_leafdata());
    if (ignore.is_set || is_set(ignore.yfilter)) leaf_name_data.push_back(ignore.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::LocReachAlgorithm::LsbReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::LocReachAlgorithm::LsbReports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::LocReachAlgorithm::LsbReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "do-not-transmit")
    {
        do_not_transmit = value;
        do_not_transmit.value_namespace = name_space;
        do_not_transmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore")
    {
        ignore = value;
        ignore.value_namespace = name_space;
        ignore.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::LocReachAlgorithm::LsbReports::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "do-not-transmit")
    {
        do_not_transmit.yfilter = yfilter;
    }
    if(value_path == "ignore")
    {
        ignore.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::LocReachAlgorithm::LsbReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "do-not-transmit" || name == "ignore")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::MapServer::MapServer()
    :
    rloc(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::MapServer::Rloc>())
	,site_registration(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::MapServer::SiteRegistration>())
{
    rloc->parent = this;
    site_registration->parent = this;

    yang_name = "map-server"; yang_parent_name = "instance-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::MapServer::~MapServer()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::MapServer::has_data() const
{
    return (rloc !=  nullptr && rloc->has_data())
	|| (site_registration !=  nullptr && site_registration->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::MapServer::has_operation() const
{
    return is_set(yfilter)
	|| (rloc !=  nullptr && rloc->has_operation())
	|| (site_registration !=  nullptr && site_registration->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::MapServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::MapServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::MapServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rloc")
    {
        if(rloc == nullptr)
        {
            rloc = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::MapServer::Rloc>();
        }
        return rloc;
    }

    if(child_yang_name == "site-registration")
    {
        if(site_registration == nullptr)
        {
            site_registration = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::MapServer::SiteRegistration>();
        }
        return site_registration;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::MapServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rloc != nullptr)
    {
        children["rloc"] = rloc;
    }

    if(site_registration != nullptr)
    {
        children["site-registration"] = site_registration;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::MapServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::InstanceContainer::InstanceList::MapServer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::MapServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rloc" || name == "site-registration")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::MapServer::Rloc::Rloc()
    :
    members(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::MapServer::Rloc::Members>())
{
    members->parent = this;

    yang_name = "rloc"; yang_parent_name = "map-server"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::MapServer::Rloc::~Rloc()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::MapServer::Rloc::has_data() const
{
    return (members !=  nullptr && members->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::MapServer::Rloc::has_operation() const
{
    return is_set(yfilter)
	|| (members !=  nullptr && members->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::MapServer::Rloc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rloc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::MapServer::Rloc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::MapServer::Rloc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "members")
    {
        if(members == nullptr)
        {
            members = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::MapServer::Rloc::Members>();
        }
        return members;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::MapServer::Rloc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(members != nullptr)
    {
        children["members"] = members;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::MapServer::Rloc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::InstanceContainer::InstanceList::MapServer::Rloc::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::MapServer::Rloc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "members")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::MapServer::Rloc::Members::Members()
    :
    distribute{YType::empty, "distribute"}
    	,
    modify_discovered(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::MapServer::Rloc::Members::ModifyDiscovered>())
{
    modify_discovered->parent = this;

    yang_name = "members"; yang_parent_name = "rloc"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::MapServer::Rloc::Members::~Members()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::MapServer::Rloc::Members::has_data() const
{
    return distribute.is_set
	|| (modify_discovered !=  nullptr && modify_discovered->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::MapServer::Rloc::Members::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(distribute.yfilter)
	|| (modify_discovered !=  nullptr && modify_discovered->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::MapServer::Rloc::Members::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "members";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::MapServer::Rloc::Members::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (distribute.is_set || is_set(distribute.yfilter)) leaf_name_data.push_back(distribute.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::MapServer::Rloc::Members::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "modify-discovered")
    {
        if(modify_discovered == nullptr)
        {
            modify_discovered = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::MapServer::Rloc::Members::ModifyDiscovered>();
        }
        return modify_discovered;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::MapServer::Rloc::Members::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(modify_discovered != nullptr)
    {
        children["modify-discovered"] = modify_discovered;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::MapServer::Rloc::Members::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "distribute")
    {
        distribute = value;
        distribute.value_namespace = name_space;
        distribute.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::MapServer::Rloc::Members::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "distribute")
    {
        distribute.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::MapServer::Rloc::Members::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "modify-discovered" || name == "distribute")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::MapServer::Rloc::Members::ModifyDiscovered::ModifyDiscovered()
    :
    operator_{YType::enumeration, "operator"},
    locator_set{YType::str, "locator-set"}
{

    yang_name = "modify-discovered"; yang_parent_name = "members"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::MapServer::Rloc::Members::ModifyDiscovered::~ModifyDiscovered()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::MapServer::Rloc::Members::ModifyDiscovered::has_data() const
{
    return operator_.is_set
	|| locator_set.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::MapServer::Rloc::Members::ModifyDiscovered::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(locator_set.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::MapServer::Rloc::Members::ModifyDiscovered::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "modify-discovered";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::MapServer::Rloc::Members::ModifyDiscovered::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (locator_set.is_set || is_set(locator_set.yfilter)) leaf_name_data.push_back(locator_set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::MapServer::Rloc::Members::ModifyDiscovered::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::MapServer::Rloc::Members::ModifyDiscovered::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::MapServer::Rloc::Members::ModifyDiscovered::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locator-set")
    {
        locator_set = value;
        locator_set.value_namespace = name_space;
        locator_set.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::MapServer::Rloc::Members::ModifyDiscovered::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "locator-set")
    {
        locator_set.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::MapServer::Rloc::Members::ModifyDiscovered::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "locator-set")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::MapServer::SiteRegistration::SiteRegistration()
    :
    limit{YType::uint32, "limit"},
    warning_threshold{YType::uint8, "warning-threshold"}
{

    yang_name = "site-registration"; yang_parent_name = "map-server"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::MapServer::SiteRegistration::~SiteRegistration()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::MapServer::SiteRegistration::has_data() const
{
    return limit.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::MapServer::SiteRegistration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::MapServer::SiteRegistration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "site-registration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::MapServer::SiteRegistration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::MapServer::SiteRegistration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::MapServer::SiteRegistration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::MapServer::SiteRegistration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
        warning_threshold.value_namespace = name_space;
        warning_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::MapServer::SiteRegistration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::MapServer::SiteRegistration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit" || name == "warning-threshold")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::OtherXtrProbe::OtherXtrProbe()
    :
    period{YType::uint16, "period"}
{

    yang_name = "other-xtr-probe"; yang_parent_name = "instance-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::OtherXtrProbe::~OtherXtrProbe()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::OtherXtrProbe::has_data() const
{
    return period.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::OtherXtrProbe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(period.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::OtherXtrProbe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "other-xtr-probe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::OtherXtrProbe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (period.is_set || is_set(period.yfilter)) leaf_name_data.push_back(period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::OtherXtrProbe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::OtherXtrProbe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::OtherXtrProbe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "period")
    {
        period = value;
        period.value_namespace = name_space;
        period.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::OtherXtrProbe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "period")
    {
        period.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::OtherXtrProbe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "period")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::RemoteRlocProbe::RemoteRlocProbe()
    :
    on_membership_change{YType::empty, "on-membership-change"},
    on_route_change{YType::empty, "on-route-change"}
{

    yang_name = "remote-rloc-probe"; yang_parent_name = "instance-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::RemoteRlocProbe::~RemoteRlocProbe()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::RemoteRlocProbe::has_data() const
{
    return on_membership_change.is_set
	|| on_route_change.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::RemoteRlocProbe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(on_membership_change.yfilter)
	|| ydk::is_set(on_route_change.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::RemoteRlocProbe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-rloc-probe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::RemoteRlocProbe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (on_membership_change.is_set || is_set(on_membership_change.yfilter)) leaf_name_data.push_back(on_membership_change.get_name_leafdata());
    if (on_route_change.is_set || is_set(on_route_change.yfilter)) leaf_name_data.push_back(on_route_change.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::RemoteRlocProbe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::RemoteRlocProbe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::RemoteRlocProbe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "on-membership-change")
    {
        on_membership_change = value;
        on_membership_change.value_namespace = name_space;
        on_membership_change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "on-route-change")
    {
        on_route_change = value;
        on_route_change.value_namespace = name_space;
        on_route_change.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::RemoteRlocProbe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "on-membership-change")
    {
        on_membership_change.yfilter = yfilter;
    }
    if(value_path == "on-route-change")
    {
        on_route_change.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::RemoteRlocProbe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "on-membership-change" || name == "on-route-change")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Service()
    :
    ipv4(nullptr) // presence node
	,ipv6(nullptr) // presence node
	,ethernet(nullptr) // presence node
{

    yang_name = "service"; yang_parent_name = "instance-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::~Service()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::has_data() const
{
    return (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (ethernet !=  nullptr && ethernet->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (ethernet !=  nullptr && ethernet->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Service::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Service::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Service::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "ethernet")
    {
        if(ethernet == nullptr)
        {
            ethernet = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet>();
        }
        return ethernet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Service::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    if(ethernet != nullptr)
    {
        children["ethernet"] = ethernet;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6" || name == "ethernet")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Ipv4()
    :
    alt_vrf{YType::str, "alt-vrf"},
    proxy_etr{YType::empty, "proxy-etr"},
    sgt{YType::empty, "sgt"},
    map_request_source{YType::str, "map-request-source"}
    	,
    default_(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default>())
	,eid_table(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::EidTable>())
	,itr(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Itr>())
	,itr_enable(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::ItrEnable>())
	,etr_enable(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::EtrEnable>())
	,etr(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Etr>())
	,map_cache_limit(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::MapCacheLimit>())
	,site_registration(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::SiteRegistration>())
	,solicit_map_request(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::SolicitMapRequest>())
	,alt(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Alt>())
	,distance(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Distance>())
	,map_cache(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::MapCache>())
	,map_cache_persistent(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::MapCachePersistent>())
	,proxy_itr(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::ProxyItr>())
	,route_export(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::RouteExport>())
	,route_import(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::RouteImport>())
	,database_mapping(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::DatabaseMapping>())
{
    default_->parent = this;
    eid_table->parent = this;
    itr->parent = this;
    itr_enable->parent = this;
    etr_enable->parent = this;
    etr->parent = this;
    map_cache_limit->parent = this;
    site_registration->parent = this;
    solicit_map_request->parent = this;
    alt->parent = this;
    distance->parent = this;
    map_cache->parent = this;
    map_cache_persistent->parent = this;
    proxy_itr->parent = this;
    route_export->parent = this;
    route_import->parent = this;
    database_mapping->parent = this;

    yang_name = "ipv4"; yang_parent_name = "service"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::~Ipv4()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::has_data() const
{
    for (std::size_t index=0; index<use_petr.size(); index++)
    {
        if(use_petr[index]->has_data())
            return true;
    }
    return alt_vrf.is_set
	|| proxy_etr.is_set
	|| sgt.is_set
	|| map_request_source.is_set
	|| (default_ !=  nullptr && default_->has_data())
	|| (eid_table !=  nullptr && eid_table->has_data())
	|| (itr !=  nullptr && itr->has_data())
	|| (itr_enable !=  nullptr && itr_enable->has_data())
	|| (etr_enable !=  nullptr && etr_enable->has_data())
	|| (etr !=  nullptr && etr->has_data())
	|| (map_cache_limit !=  nullptr && map_cache_limit->has_data())
	|| (site_registration !=  nullptr && site_registration->has_data())
	|| (solicit_map_request !=  nullptr && solicit_map_request->has_data())
	|| (alt !=  nullptr && alt->has_data())
	|| (distance !=  nullptr && distance->has_data())
	|| (map_cache !=  nullptr && map_cache->has_data())
	|| (map_cache_persistent !=  nullptr && map_cache_persistent->has_data())
	|| (proxy_itr !=  nullptr && proxy_itr->has_data())
	|| (route_export !=  nullptr && route_export->has_data())
	|| (route_import !=  nullptr && route_import->has_data())
	|| (database_mapping !=  nullptr && database_mapping->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::has_operation() const
{
    for (std::size_t index=0; index<use_petr.size(); index++)
    {
        if(use_petr[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(alt_vrf.yfilter)
	|| ydk::is_set(proxy_etr.yfilter)
	|| ydk::is_set(sgt.yfilter)
	|| ydk::is_set(map_request_source.yfilter)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (eid_table !=  nullptr && eid_table->has_operation())
	|| (itr !=  nullptr && itr->has_operation())
	|| (itr_enable !=  nullptr && itr_enable->has_operation())
	|| (etr_enable !=  nullptr && etr_enable->has_operation())
	|| (etr !=  nullptr && etr->has_operation())
	|| (map_cache_limit !=  nullptr && map_cache_limit->has_operation())
	|| (site_registration !=  nullptr && site_registration->has_operation())
	|| (solicit_map_request !=  nullptr && solicit_map_request->has_operation())
	|| (alt !=  nullptr && alt->has_operation())
	|| (distance !=  nullptr && distance->has_operation())
	|| (map_cache !=  nullptr && map_cache->has_operation())
	|| (map_cache_persistent !=  nullptr && map_cache_persistent->has_operation())
	|| (proxy_itr !=  nullptr && proxy_itr->has_operation())
	|| (route_export !=  nullptr && route_export->has_operation())
	|| (route_import !=  nullptr && route_import->has_operation())
	|| (database_mapping !=  nullptr && database_mapping->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alt_vrf.is_set || is_set(alt_vrf.yfilter)) leaf_name_data.push_back(alt_vrf.get_name_leafdata());
    if (proxy_etr.is_set || is_set(proxy_etr.yfilter)) leaf_name_data.push_back(proxy_etr.get_name_leafdata());
    if (sgt.is_set || is_set(sgt.yfilter)) leaf_name_data.push_back(sgt.get_name_leafdata());
    if (map_request_source.is_set || is_set(map_request_source.yfilter)) leaf_name_data.push_back(map_request_source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default>();
        }
        return default_;
    }

    if(child_yang_name == "eid-table")
    {
        if(eid_table == nullptr)
        {
            eid_table = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::EidTable>();
        }
        return eid_table;
    }

    if(child_yang_name == "itr")
    {
        if(itr == nullptr)
        {
            itr = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Itr>();
        }
        return itr;
    }

    if(child_yang_name == "itr-enable")
    {
        if(itr_enable == nullptr)
        {
            itr_enable = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::ItrEnable>();
        }
        return itr_enable;
    }

    if(child_yang_name == "etr-enable")
    {
        if(etr_enable == nullptr)
        {
            etr_enable = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::EtrEnable>();
        }
        return etr_enable;
    }

    if(child_yang_name == "etr")
    {
        if(etr == nullptr)
        {
            etr = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Etr>();
        }
        return etr;
    }

    if(child_yang_name == "map-cache-limit")
    {
        if(map_cache_limit == nullptr)
        {
            map_cache_limit = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::MapCacheLimit>();
        }
        return map_cache_limit;
    }

    if(child_yang_name == "site-registration")
    {
        if(site_registration == nullptr)
        {
            site_registration = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::SiteRegistration>();
        }
        return site_registration;
    }

    if(child_yang_name == "solicit-map-request")
    {
        if(solicit_map_request == nullptr)
        {
            solicit_map_request = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::SolicitMapRequest>();
        }
        return solicit_map_request;
    }

    if(child_yang_name == "alt")
    {
        if(alt == nullptr)
        {
            alt = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Alt>();
        }
        return alt;
    }

    if(child_yang_name == "distance")
    {
        if(distance == nullptr)
        {
            distance = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Distance>();
        }
        return distance;
    }

    if(child_yang_name == "map-cache")
    {
        if(map_cache == nullptr)
        {
            map_cache = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::MapCache>();
        }
        return map_cache;
    }

    if(child_yang_name == "map-cache-persistent")
    {
        if(map_cache_persistent == nullptr)
        {
            map_cache_persistent = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::MapCachePersistent>();
        }
        return map_cache_persistent;
    }

    if(child_yang_name == "proxy-itr")
    {
        if(proxy_itr == nullptr)
        {
            proxy_itr = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::ProxyItr>();
        }
        return proxy_itr;
    }

    if(child_yang_name == "route-export")
    {
        if(route_export == nullptr)
        {
            route_export = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::RouteExport>();
        }
        return route_export;
    }

    if(child_yang_name == "use-petr")
    {
        auto c = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::UsePetr>();
        c->parent = this;
        use_petr.push_back(c);
        return c;
    }

    if(child_yang_name == "route-import")
    {
        if(route_import == nullptr)
        {
            route_import = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::RouteImport>();
        }
        return route_import;
    }

    if(child_yang_name == "database-mapping")
    {
        if(database_mapping == nullptr)
        {
            database_mapping = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::DatabaseMapping>();
        }
        return database_mapping;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(eid_table != nullptr)
    {
        children["eid-table"] = eid_table;
    }

    if(itr != nullptr)
    {
        children["itr"] = itr;
    }

    if(itr_enable != nullptr)
    {
        children["itr-enable"] = itr_enable;
    }

    if(etr_enable != nullptr)
    {
        children["etr-enable"] = etr_enable;
    }

    if(etr != nullptr)
    {
        children["etr"] = etr;
    }

    if(map_cache_limit != nullptr)
    {
        children["map-cache-limit"] = map_cache_limit;
    }

    if(site_registration != nullptr)
    {
        children["site-registration"] = site_registration;
    }

    if(solicit_map_request != nullptr)
    {
        children["solicit-map-request"] = solicit_map_request;
    }

    if(alt != nullptr)
    {
        children["alt"] = alt;
    }

    if(distance != nullptr)
    {
        children["distance"] = distance;
    }

    if(map_cache != nullptr)
    {
        children["map-cache"] = map_cache;
    }

    if(map_cache_persistent != nullptr)
    {
        children["map-cache-persistent"] = map_cache_persistent;
    }

    if(proxy_itr != nullptr)
    {
        children["proxy-itr"] = proxy_itr;
    }

    if(route_export != nullptr)
    {
        children["route-export"] = route_export;
    }

    count = 0;
    for (auto const & c : use_petr)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(route_import != nullptr)
    {
        children["route-import"] = route_import;
    }

    if(database_mapping != nullptr)
    {
        children["database-mapping"] = database_mapping;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alt-vrf")
    {
        alt_vrf = value;
        alt_vrf.value_namespace = name_space;
        alt_vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proxy-etr")
    {
        proxy_etr = value;
        proxy_etr.value_namespace = name_space;
        proxy_etr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgt")
    {
        sgt = value;
        sgt.value_namespace = name_space;
        sgt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "map-request-source")
    {
        map_request_source = value;
        map_request_source.value_namespace = name_space;
        map_request_source.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alt-vrf")
    {
        alt_vrf.yfilter = yfilter;
    }
    if(value_path == "proxy-etr")
    {
        proxy_etr.yfilter = yfilter;
    }
    if(value_path == "sgt")
    {
        sgt.yfilter = yfilter;
    }
    if(value_path == "map-request-source")
    {
        map_request_source.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "eid-table" || name == "itr" || name == "itr-enable" || name == "etr-enable" || name == "etr" || name == "map-cache-limit" || name == "site-registration" || name == "solicit-map-request" || name == "alt" || name == "distance" || name == "map-cache" || name == "map-cache-persistent" || name == "proxy-itr" || name == "route-export" || name == "use-petr" || name == "route-import" || name == "database-mapping" || name == "alt-vrf" || name == "proxy-etr" || name == "sgt" || name == "map-request-source")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Default()
    :
    alt_vrf{YType::str, "alt-vrf"},
    proxy_etr{YType::empty, "proxy-etr"},
    sgt{YType::empty, "sgt"},
    map_request_source{YType::str, "map-request-source"}
    	,
    eid_table(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::EidTable>())
	,itr(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Itr>())
	,itr_enable(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::ItrEnable>())
	,etr_enable(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::EtrEnable>())
	,etr(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr>())
	,map_cache_limit(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::MapCacheLimit>())
	,site_registration(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::SiteRegistration>())
	,solicit_map_request(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::SolicitMapRequest>())
	,alt(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Alt>())
	,distance(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Distance>())
	,map_cache(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::MapCache>())
	,map_cache_persistent(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::MapCachePersistent>())
	,proxy_itr(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::ProxyItr>())
	,route_export(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteExport>())
	,route_import(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport>())
	,database_mapping(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::DatabaseMapping>())
{
    eid_table->parent = this;
    itr->parent = this;
    itr_enable->parent = this;
    etr_enable->parent = this;
    etr->parent = this;
    map_cache_limit->parent = this;
    site_registration->parent = this;
    solicit_map_request->parent = this;
    alt->parent = this;
    distance->parent = this;
    map_cache->parent = this;
    map_cache_persistent->parent = this;
    proxy_itr->parent = this;
    route_export->parent = this;
    route_import->parent = this;
    database_mapping->parent = this;

    yang_name = "default"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::~Default()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::has_data() const
{
    for (std::size_t index=0; index<use_petr.size(); index++)
    {
        if(use_petr[index]->has_data())
            return true;
    }
    return alt_vrf.is_set
	|| proxy_etr.is_set
	|| sgt.is_set
	|| map_request_source.is_set
	|| (eid_table !=  nullptr && eid_table->has_data())
	|| (itr !=  nullptr && itr->has_data())
	|| (itr_enable !=  nullptr && itr_enable->has_data())
	|| (etr_enable !=  nullptr && etr_enable->has_data())
	|| (etr !=  nullptr && etr->has_data())
	|| (map_cache_limit !=  nullptr && map_cache_limit->has_data())
	|| (site_registration !=  nullptr && site_registration->has_data())
	|| (solicit_map_request !=  nullptr && solicit_map_request->has_data())
	|| (alt !=  nullptr && alt->has_data())
	|| (distance !=  nullptr && distance->has_data())
	|| (map_cache !=  nullptr && map_cache->has_data())
	|| (map_cache_persistent !=  nullptr && map_cache_persistent->has_data())
	|| (proxy_itr !=  nullptr && proxy_itr->has_data())
	|| (route_export !=  nullptr && route_export->has_data())
	|| (route_import !=  nullptr && route_import->has_data())
	|| (database_mapping !=  nullptr && database_mapping->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::has_operation() const
{
    for (std::size_t index=0; index<use_petr.size(); index++)
    {
        if(use_petr[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(alt_vrf.yfilter)
	|| ydk::is_set(proxy_etr.yfilter)
	|| ydk::is_set(sgt.yfilter)
	|| ydk::is_set(map_request_source.yfilter)
	|| (eid_table !=  nullptr && eid_table->has_operation())
	|| (itr !=  nullptr && itr->has_operation())
	|| (itr_enable !=  nullptr && itr_enable->has_operation())
	|| (etr_enable !=  nullptr && etr_enable->has_operation())
	|| (etr !=  nullptr && etr->has_operation())
	|| (map_cache_limit !=  nullptr && map_cache_limit->has_operation())
	|| (site_registration !=  nullptr && site_registration->has_operation())
	|| (solicit_map_request !=  nullptr && solicit_map_request->has_operation())
	|| (alt !=  nullptr && alt->has_operation())
	|| (distance !=  nullptr && distance->has_operation())
	|| (map_cache !=  nullptr && map_cache->has_operation())
	|| (map_cache_persistent !=  nullptr && map_cache_persistent->has_operation())
	|| (proxy_itr !=  nullptr && proxy_itr->has_operation())
	|| (route_export !=  nullptr && route_export->has_operation())
	|| (route_import !=  nullptr && route_import->has_operation())
	|| (database_mapping !=  nullptr && database_mapping->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alt_vrf.is_set || is_set(alt_vrf.yfilter)) leaf_name_data.push_back(alt_vrf.get_name_leafdata());
    if (proxy_etr.is_set || is_set(proxy_etr.yfilter)) leaf_name_data.push_back(proxy_etr.get_name_leafdata());
    if (sgt.is_set || is_set(sgt.yfilter)) leaf_name_data.push_back(sgt.get_name_leafdata());
    if (map_request_source.is_set || is_set(map_request_source.yfilter)) leaf_name_data.push_back(map_request_source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eid-table")
    {
        if(eid_table == nullptr)
        {
            eid_table = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::EidTable>();
        }
        return eid_table;
    }

    if(child_yang_name == "itr")
    {
        if(itr == nullptr)
        {
            itr = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Itr>();
        }
        return itr;
    }

    if(child_yang_name == "itr-enable")
    {
        if(itr_enable == nullptr)
        {
            itr_enable = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::ItrEnable>();
        }
        return itr_enable;
    }

    if(child_yang_name == "etr-enable")
    {
        if(etr_enable == nullptr)
        {
            etr_enable = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::EtrEnable>();
        }
        return etr_enable;
    }

    if(child_yang_name == "etr")
    {
        if(etr == nullptr)
        {
            etr = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr>();
        }
        return etr;
    }

    if(child_yang_name == "map-cache-limit")
    {
        if(map_cache_limit == nullptr)
        {
            map_cache_limit = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::MapCacheLimit>();
        }
        return map_cache_limit;
    }

    if(child_yang_name == "site-registration")
    {
        if(site_registration == nullptr)
        {
            site_registration = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::SiteRegistration>();
        }
        return site_registration;
    }

    if(child_yang_name == "solicit-map-request")
    {
        if(solicit_map_request == nullptr)
        {
            solicit_map_request = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::SolicitMapRequest>();
        }
        return solicit_map_request;
    }

    if(child_yang_name == "alt")
    {
        if(alt == nullptr)
        {
            alt = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Alt>();
        }
        return alt;
    }

    if(child_yang_name == "distance")
    {
        if(distance == nullptr)
        {
            distance = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Distance>();
        }
        return distance;
    }

    if(child_yang_name == "map-cache")
    {
        if(map_cache == nullptr)
        {
            map_cache = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::MapCache>();
        }
        return map_cache;
    }

    if(child_yang_name == "map-cache-persistent")
    {
        if(map_cache_persistent == nullptr)
        {
            map_cache_persistent = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::MapCachePersistent>();
        }
        return map_cache_persistent;
    }

    if(child_yang_name == "proxy-itr")
    {
        if(proxy_itr == nullptr)
        {
            proxy_itr = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::ProxyItr>();
        }
        return proxy_itr;
    }

    if(child_yang_name == "route-export")
    {
        if(route_export == nullptr)
        {
            route_export = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteExport>();
        }
        return route_export;
    }

    if(child_yang_name == "use-petr")
    {
        auto c = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::UsePetr>();
        c->parent = this;
        use_petr.push_back(c);
        return c;
    }

    if(child_yang_name == "route-import")
    {
        if(route_import == nullptr)
        {
            route_import = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport>();
        }
        return route_import;
    }

    if(child_yang_name == "database-mapping")
    {
        if(database_mapping == nullptr)
        {
            database_mapping = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::DatabaseMapping>();
        }
        return database_mapping;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(eid_table != nullptr)
    {
        children["eid-table"] = eid_table;
    }

    if(itr != nullptr)
    {
        children["itr"] = itr;
    }

    if(itr_enable != nullptr)
    {
        children["itr-enable"] = itr_enable;
    }

    if(etr_enable != nullptr)
    {
        children["etr-enable"] = etr_enable;
    }

    if(etr != nullptr)
    {
        children["etr"] = etr;
    }

    if(map_cache_limit != nullptr)
    {
        children["map-cache-limit"] = map_cache_limit;
    }

    if(site_registration != nullptr)
    {
        children["site-registration"] = site_registration;
    }

    if(solicit_map_request != nullptr)
    {
        children["solicit-map-request"] = solicit_map_request;
    }

    if(alt != nullptr)
    {
        children["alt"] = alt;
    }

    if(distance != nullptr)
    {
        children["distance"] = distance;
    }

    if(map_cache != nullptr)
    {
        children["map-cache"] = map_cache;
    }

    if(map_cache_persistent != nullptr)
    {
        children["map-cache-persistent"] = map_cache_persistent;
    }

    if(proxy_itr != nullptr)
    {
        children["proxy-itr"] = proxy_itr;
    }

    if(route_export != nullptr)
    {
        children["route-export"] = route_export;
    }

    count = 0;
    for (auto const & c : use_petr)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(route_import != nullptr)
    {
        children["route-import"] = route_import;
    }

    if(database_mapping != nullptr)
    {
        children["database-mapping"] = database_mapping;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alt-vrf")
    {
        alt_vrf = value;
        alt_vrf.value_namespace = name_space;
        alt_vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proxy-etr")
    {
        proxy_etr = value;
        proxy_etr.value_namespace = name_space;
        proxy_etr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgt")
    {
        sgt = value;
        sgt.value_namespace = name_space;
        sgt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "map-request-source")
    {
        map_request_source = value;
        map_request_source.value_namespace = name_space;
        map_request_source.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alt-vrf")
    {
        alt_vrf.yfilter = yfilter;
    }
    if(value_path == "proxy-etr")
    {
        proxy_etr.yfilter = yfilter;
    }
    if(value_path == "sgt")
    {
        sgt.yfilter = yfilter;
    }
    if(value_path == "map-request-source")
    {
        map_request_source.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eid-table" || name == "itr" || name == "itr-enable" || name == "etr-enable" || name == "etr" || name == "map-cache-limit" || name == "site-registration" || name == "solicit-map-request" || name == "alt" || name == "distance" || name == "map-cache" || name == "map-cache-persistent" || name == "proxy-itr" || name == "route-export" || name == "use-petr" || name == "route-import" || name == "database-mapping" || name == "alt-vrf" || name == "proxy-etr" || name == "sgt" || name == "map-request-source")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::EidTable::EidTable()
    :
    vrf_name{YType::str, "vrf-name"},
    default_{YType::empty, "default"},
    vrf{YType::str, "vrf"}
{

    yang_name = "eid-table"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::EidTable::~EidTable()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::EidTable::has_data() const
{
    return vrf_name.is_set
	|| default_.is_set
	|| vrf.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::EidTable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(default_.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::EidTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eid-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::EidTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::EidTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::EidTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::EidTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::EidTable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::EidTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-name" || name == "default" || name == "vrf")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Itr::Itr()
{

    yang_name = "itr"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Itr::~Itr()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Itr::has_data() const
{
    for (std::size_t index=0; index<map_resolver.size(); index++)
    {
        if(map_resolver[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Itr::has_operation() const
{
    for (std::size_t index=0; index<map_resolver.size(); index++)
    {
        if(map_resolver[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Itr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "itr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Itr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Itr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-resolver")
    {
        auto c = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Itr::MapResolver>();
        c->parent = this;
        map_resolver.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Itr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : map_resolver)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Itr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Itr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Itr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-resolver")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Itr::MapResolver::MapResolver()
    :
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "map-resolver"; yang_parent_name = "itr"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Itr::MapResolver::~MapResolver()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Itr::MapResolver::has_data() const
{
    return ip_addr.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Itr::MapResolver::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Itr::MapResolver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-resolver" <<"[ip-addr='" <<ip_addr <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Itr::MapResolver::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Itr::MapResolver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Itr::MapResolver::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Itr::MapResolver::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Itr::MapResolver::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Itr::MapResolver::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-addr")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::ItrEnable::ItrEnable()
    :
    itr{YType::empty, "itr"}
{

    yang_name = "itr-enable"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::ItrEnable::~ItrEnable()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::ItrEnable::has_data() const
{
    return itr.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::ItrEnable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(itr.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::ItrEnable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "itr-enable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::ItrEnable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (itr.is_set || is_set(itr.yfilter)) leaf_name_data.push_back(itr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::ItrEnable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::ItrEnable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::ItrEnable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "itr")
    {
        itr = value;
        itr.value_namespace = name_space;
        itr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::ItrEnable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "itr")
    {
        itr.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::ItrEnable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "itr")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::EtrEnable::EtrEnable()
    :
    etr{YType::empty, "etr"}
{

    yang_name = "etr-enable"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::EtrEnable::~EtrEnable()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::EtrEnable::has_data() const
{
    return etr.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::EtrEnable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(etr.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::EtrEnable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etr-enable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::EtrEnable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (etr.is_set || is_set(etr.yfilter)) leaf_name_data.push_back(etr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::EtrEnable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::EtrEnable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::EtrEnable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "etr")
    {
        etr = value;
        etr.value_namespace = name_space;
        etr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::EtrEnable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "etr")
    {
        etr.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::EtrEnable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "etr")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::Etr()
    :
    map_cache_ttl{YType::uint16, "map-cache-ttl"}
    	,
    accept_map_request_mapping(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::AcceptMapRequestMapping>())
{
    accept_map_request_mapping->parent = this;

    yang_name = "etr"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::~Etr()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::has_data() const
{
    for (std::size_t index=0; index<map_server.size(); index++)
    {
        if(map_server[index]->has_data())
            return true;
    }
    return map_cache_ttl.is_set
	|| (accept_map_request_mapping !=  nullptr && accept_map_request_mapping->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::has_operation() const
{
    for (std::size_t index=0; index<map_server.size(); index++)
    {
        if(map_server[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(map_cache_ttl.yfilter)
	|| (accept_map_request_mapping !=  nullptr && accept_map_request_mapping->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (map_cache_ttl.is_set || is_set(map_cache_ttl.yfilter)) leaf_name_data.push_back(map_cache_ttl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-server")
    {
        auto c = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::MapServer>();
        c->parent = this;
        map_server.push_back(c);
        return c;
    }

    if(child_yang_name == "accept-map-request-mapping")
    {
        if(accept_map_request_mapping == nullptr)
        {
            accept_map_request_mapping = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::AcceptMapRequestMapping>();
        }
        return accept_map_request_mapping;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : map_server)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(accept_map_request_mapping != nullptr)
    {
        children["accept-map-request-mapping"] = accept_map_request_mapping;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "map-cache-ttl")
    {
        map_cache_ttl = value;
        map_cache_ttl.value_namespace = name_space;
        map_cache_ttl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "map-cache-ttl")
    {
        map_cache_ttl.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-server" || name == "accept-map-request-mapping" || name == "map-cache-ttl")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::MapServer::MapServer()
    :
    ip_addr{YType::str, "ip-addr"},
    proxy_reply{YType::empty, "proxy-reply"}
    	,
    key(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::MapServer::Key>())
{
    key->parent = this;

    yang_name = "map-server"; yang_parent_name = "etr"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::MapServer::~MapServer()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::MapServer::has_data() const
{
    return ip_addr.is_set
	|| proxy_reply.is_set
	|| (key !=  nullptr && key->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::MapServer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_addr.yfilter)
	|| ydk::is_set(proxy_reply.yfilter)
	|| (key !=  nullptr && key->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::MapServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-server" <<"[ip-addr='" <<ip_addr <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::MapServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (proxy_reply.is_set || is_set(proxy_reply.yfilter)) leaf_name_data.push_back(proxy_reply.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::MapServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::MapServer::Key>();
        }
        return key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::MapServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(key != nullptr)
    {
        children["key"] = key;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::MapServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proxy-reply")
    {
        proxy_reply = value;
        proxy_reply.value_namespace = name_space;
        proxy_reply.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::MapServer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
    if(value_path == "proxy-reply")
    {
        proxy_reply.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::MapServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key" || name == "ip-addr" || name == "proxy-reply")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::MapServer::Key::Key()
    :
    key_pwd(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::MapServer::Key::KeyPwd>())
	,key_0(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::MapServer::Key::Key0>())
	,key_6(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::MapServer::Key::Key6>())
	,key_7(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::MapServer::Key::Key7>())
{
    key_pwd->parent = this;
    key_0->parent = this;
    key_6->parent = this;
    key_7->parent = this;

    yang_name = "key"; yang_parent_name = "map-server"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::MapServer::Key::~Key()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::MapServer::Key::has_data() const
{
    return (key_pwd !=  nullptr && key_pwd->has_data())
	|| (key_0 !=  nullptr && key_0->has_data())
	|| (key_6 !=  nullptr && key_6->has_data())
	|| (key_7 !=  nullptr && key_7->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::MapServer::Key::has_operation() const
{
    return is_set(yfilter)
	|| (key_pwd !=  nullptr && key_pwd->has_operation())
	|| (key_0 !=  nullptr && key_0->has_operation())
	|| (key_6 !=  nullptr && key_6->has_operation())
	|| (key_7 !=  nullptr && key_7->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::MapServer::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::MapServer::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::MapServer::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-pwd")
    {
        if(key_pwd == nullptr)
        {
            key_pwd = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::MapServer::Key::KeyPwd>();
        }
        return key_pwd;
    }

    if(child_yang_name == "key-0")
    {
        if(key_0 == nullptr)
        {
            key_0 = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::MapServer::Key::Key0>();
        }
        return key_0;
    }

    if(child_yang_name == "key-6")
    {
        if(key_6 == nullptr)
        {
            key_6 = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::MapServer::Key::Key6>();
        }
        return key_6;
    }

    if(child_yang_name == "key-7")
    {
        if(key_7 == nullptr)
        {
            key_7 = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::MapServer::Key::Key7>();
        }
        return key_7;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::MapServer::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(key_pwd != nullptr)
    {
        children["key-pwd"] = key_pwd;
    }

    if(key_0 != nullptr)
    {
        children["key-0"] = key_0;
    }

    if(key_6 != nullptr)
    {
        children["key-6"] = key_6;
    }

    if(key_7 != nullptr)
    {
        children["key-7"] = key_7;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::MapServer::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::MapServer::Key::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::MapServer::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-pwd" || name == "key-0" || name == "key-6" || name == "key-7")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::MapServer::Key::KeyPwd::KeyPwd()
    :
    unc_pwd{YType::str, "unc-pwd"},
    hash_function{YType::enumeration, "hash-function"}
{

    yang_name = "key-pwd"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::MapServer::Key::KeyPwd::~KeyPwd()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::MapServer::Key::KeyPwd::has_data() const
{
    return unc_pwd.is_set
	|| hash_function.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::MapServer::Key::KeyPwd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unc_pwd.yfilter)
	|| ydk::is_set(hash_function.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::MapServer::Key::KeyPwd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-pwd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::MapServer::Key::KeyPwd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unc_pwd.is_set || is_set(unc_pwd.yfilter)) leaf_name_data.push_back(unc_pwd.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.yfilter)) leaf_name_data.push_back(hash_function.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::MapServer::Key::KeyPwd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::MapServer::Key::KeyPwd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::MapServer::Key::KeyPwd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unc-pwd")
    {
        unc_pwd = value;
        unc_pwd.value_namespace = name_space;
        unc_pwd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hash-function")
    {
        hash_function = value;
        hash_function.value_namespace = name_space;
        hash_function.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::MapServer::Key::KeyPwd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unc-pwd")
    {
        unc_pwd.yfilter = yfilter;
    }
    if(value_path == "hash-function")
    {
        hash_function.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::MapServer::Key::KeyPwd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unc-pwd" || name == "hash-function")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::MapServer::Key::Key0::Key0()
    :
    ak_0{YType::str, "ak-0"},
    hash_function{YType::enumeration, "hash-function"}
{

    yang_name = "key-0"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::MapServer::Key::Key0::~Key0()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::MapServer::Key::Key0::has_data() const
{
    return ak_0.is_set
	|| hash_function.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::MapServer::Key::Key0::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ak_0.yfilter)
	|| ydk::is_set(hash_function.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::MapServer::Key::Key0::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-0";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::MapServer::Key::Key0::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_0.is_set || is_set(ak_0.yfilter)) leaf_name_data.push_back(ak_0.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.yfilter)) leaf_name_data.push_back(hash_function.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::MapServer::Key::Key0::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::MapServer::Key::Key0::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::MapServer::Key::Key0::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ak-0")
    {
        ak_0 = value;
        ak_0.value_namespace = name_space;
        ak_0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hash-function")
    {
        hash_function = value;
        hash_function.value_namespace = name_space;
        hash_function.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::MapServer::Key::Key0::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ak-0")
    {
        ak_0.yfilter = yfilter;
    }
    if(value_path == "hash-function")
    {
        hash_function.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::MapServer::Key::Key0::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ak-0" || name == "hash-function")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::MapServer::Key::Key6::Key6()
    :
    ak_6{YType::str, "ak-6"},
    hash_function{YType::enumeration, "hash-function"}
{

    yang_name = "key-6"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::MapServer::Key::Key6::~Key6()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::MapServer::Key::Key6::has_data() const
{
    return ak_6.is_set
	|| hash_function.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::MapServer::Key::Key6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ak_6.yfilter)
	|| ydk::is_set(hash_function.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::MapServer::Key::Key6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::MapServer::Key::Key6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_6.is_set || is_set(ak_6.yfilter)) leaf_name_data.push_back(ak_6.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.yfilter)) leaf_name_data.push_back(hash_function.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::MapServer::Key::Key6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::MapServer::Key::Key6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::MapServer::Key::Key6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ak-6")
    {
        ak_6 = value;
        ak_6.value_namespace = name_space;
        ak_6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hash-function")
    {
        hash_function = value;
        hash_function.value_namespace = name_space;
        hash_function.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::MapServer::Key::Key6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ak-6")
    {
        ak_6.yfilter = yfilter;
    }
    if(value_path == "hash-function")
    {
        hash_function.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::MapServer::Key::Key6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ak-6" || name == "hash-function")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::MapServer::Key::Key7::Key7()
    :
    ak_7{YType::str, "ak-7"},
    hash_function{YType::enumeration, "hash-function"}
{

    yang_name = "key-7"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::MapServer::Key::Key7::~Key7()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::MapServer::Key::Key7::has_data() const
{
    return ak_7.is_set
	|| hash_function.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::MapServer::Key::Key7::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ak_7.yfilter)
	|| ydk::is_set(hash_function.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::MapServer::Key::Key7::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-7";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::MapServer::Key::Key7::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_7.is_set || is_set(ak_7.yfilter)) leaf_name_data.push_back(ak_7.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.yfilter)) leaf_name_data.push_back(hash_function.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::MapServer::Key::Key7::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::MapServer::Key::Key7::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::MapServer::Key::Key7::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ak-7")
    {
        ak_7 = value;
        ak_7.value_namespace = name_space;
        ak_7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hash-function")
    {
        hash_function = value;
        hash_function.value_namespace = name_space;
        hash_function.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::MapServer::Key::Key7::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ak-7")
    {
        ak_7.yfilter = yfilter;
    }
    if(value_path == "hash-function")
    {
        hash_function.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::MapServer::Key::Key7::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ak-7" || name == "hash-function")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::AcceptMapRequestMapping::AcceptMapRequestMapping()
    :
    accept_mappping{YType::empty, "accept-mappping"},
    verify{YType::empty, "verify"}
{

    yang_name = "accept-map-request-mapping"; yang_parent_name = "etr"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::AcceptMapRequestMapping::~AcceptMapRequestMapping()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::AcceptMapRequestMapping::has_data() const
{
    return accept_mappping.is_set
	|| verify.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::AcceptMapRequestMapping::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(accept_mappping.yfilter)
	|| ydk::is_set(verify.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::AcceptMapRequestMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accept-map-request-mapping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::AcceptMapRequestMapping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accept_mappping.is_set || is_set(accept_mappping.yfilter)) leaf_name_data.push_back(accept_mappping.get_name_leafdata());
    if (verify.is_set || is_set(verify.yfilter)) leaf_name_data.push_back(verify.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::AcceptMapRequestMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::AcceptMapRequestMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::AcceptMapRequestMapping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "accept-mappping")
    {
        accept_mappping = value;
        accept_mappping.value_namespace = name_space;
        accept_mappping.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verify")
    {
        verify = value;
        verify.value_namespace = name_space;
        verify.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::AcceptMapRequestMapping::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "accept-mappping")
    {
        accept_mappping.yfilter = yfilter;
    }
    if(value_path == "verify")
    {
        verify.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::AcceptMapRequestMapping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accept-mappping" || name == "verify")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::MapCacheLimit::MapCacheLimit()
    :
    max_map_cache_entries{YType::uint32, "max-map-cache-entries"},
    reserve_list{YType::str, "reserve-list"},
    warning_threshold{YType::uint8, "warning-threshold"}
{

    yang_name = "map-cache-limit"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::MapCacheLimit::~MapCacheLimit()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::MapCacheLimit::has_data() const
{
    return max_map_cache_entries.is_set
	|| reserve_list.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::MapCacheLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_map_cache_entries.yfilter)
	|| ydk::is_set(reserve_list.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::MapCacheLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::MapCacheLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_map_cache_entries.is_set || is_set(max_map_cache_entries.yfilter)) leaf_name_data.push_back(max_map_cache_entries.get_name_leafdata());
    if (reserve_list.is_set || is_set(reserve_list.yfilter)) leaf_name_data.push_back(reserve_list.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::MapCacheLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::MapCacheLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::MapCacheLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-map-cache-entries")
    {
        max_map_cache_entries = value;
        max_map_cache_entries.value_namespace = name_space;
        max_map_cache_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reserve-list")
    {
        reserve_list = value;
        reserve_list.value_namespace = name_space;
        reserve_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
        warning_threshold.value_namespace = name_space;
        warning_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::MapCacheLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-map-cache-entries")
    {
        max_map_cache_entries.yfilter = yfilter;
    }
    if(value_path == "reserve-list")
    {
        reserve_list.yfilter = yfilter;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::MapCacheLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-map-cache-entries" || name == "reserve-list" || name == "warning-threshold")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::SiteRegistration::SiteRegistration()
    :
    limit{YType::uint32, "limit"},
    warning_threshold{YType::uint8, "warning-threshold"}
{

    yang_name = "site-registration"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::SiteRegistration::~SiteRegistration()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::SiteRegistration::has_data() const
{
    return limit.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::SiteRegistration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::SiteRegistration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "site-registration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::SiteRegistration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::SiteRegistration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::SiteRegistration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::SiteRegistration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
        warning_threshold.value_namespace = name_space;
        warning_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::SiteRegistration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::SiteRegistration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit" || name == "warning-threshold")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::SolicitMapRequest::SolicitMapRequest()
    :
    ignore{YType::empty, "ignore"},
    max_per_entry{YType::uint8, "max-per-entry"},
    suppression_time{YType::uint16, "suppression-time"}
{

    yang_name = "solicit-map-request"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::SolicitMapRequest::~SolicitMapRequest()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::SolicitMapRequest::has_data() const
{
    return ignore.is_set
	|| max_per_entry.is_set
	|| suppression_time.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::SolicitMapRequest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ignore.yfilter)
	|| ydk::is_set(max_per_entry.yfilter)
	|| ydk::is_set(suppression_time.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::SolicitMapRequest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "solicit-map-request";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::SolicitMapRequest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore.is_set || is_set(ignore.yfilter)) leaf_name_data.push_back(ignore.get_name_leafdata());
    if (max_per_entry.is_set || is_set(max_per_entry.yfilter)) leaf_name_data.push_back(max_per_entry.get_name_leafdata());
    if (suppression_time.is_set || is_set(suppression_time.yfilter)) leaf_name_data.push_back(suppression_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::SolicitMapRequest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::SolicitMapRequest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::SolicitMapRequest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ignore")
    {
        ignore = value;
        ignore.value_namespace = name_space;
        ignore.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-per-entry")
    {
        max_per_entry = value;
        max_per_entry.value_namespace = name_space;
        max_per_entry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppression-time")
    {
        suppression_time = value;
        suppression_time.value_namespace = name_space;
        suppression_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::SolicitMapRequest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ignore")
    {
        ignore.yfilter = yfilter;
    }
    if(value_path == "max-per-entry")
    {
        max_per_entry.yfilter = yfilter;
    }
    if(value_path == "suppression-time")
    {
        suppression_time.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::SolicitMapRequest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ignore" || name == "max-per-entry" || name == "suppression-time")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Alt::Alt()
{

    yang_name = "alt"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Alt::~Alt()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Alt::has_data() const
{
    for (std::size_t index=0; index<summary_route.size(); index++)
    {
        if(summary_route[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Alt::has_operation() const
{
    for (std::size_t index=0; index<summary_route.size(); index++)
    {
        if(summary_route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Alt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Alt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Alt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary-route")
    {
        auto c = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Alt::SummaryRoute>();
        c->parent = this;
        summary_route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Alt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : summary_route)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Alt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Alt::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Alt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summary-route")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Alt::SummaryRoute::SummaryRoute()
    :
    eid_prefix{YType::str, "eid-prefix"},
    route_tag{YType::uint32, "route-tag"}
{

    yang_name = "summary-route"; yang_parent_name = "alt"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Alt::SummaryRoute::~SummaryRoute()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Alt::SummaryRoute::has_data() const
{
    return eid_prefix.is_set
	|| route_tag.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Alt::SummaryRoute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eid_prefix.yfilter)
	|| ydk::is_set(route_tag.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Alt::SummaryRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-route" <<"[eid-prefix='" <<eid_prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Alt::SummaryRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eid_prefix.is_set || is_set(eid_prefix.yfilter)) leaf_name_data.push_back(eid_prefix.get_name_leafdata());
    if (route_tag.is_set || is_set(route_tag.yfilter)) leaf_name_data.push_back(route_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Alt::SummaryRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Alt::SummaryRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Alt::SummaryRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eid-prefix")
    {
        eid_prefix = value;
        eid_prefix.value_namespace = name_space;
        eid_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-tag")
    {
        route_tag = value;
        route_tag.value_namespace = name_space;
        route_tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Alt::SummaryRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eid-prefix")
    {
        eid_prefix.yfilter = yfilter;
    }
    if(value_path == "route-tag")
    {
        route_tag.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Alt::SummaryRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eid-prefix" || name == "route-tag")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Distance::Distance()
    :
    alt{YType::uint8, "alt"},
    away{YType::uint8, "away"},
    dyn_eid{YType::uint8, "dyn-eid"},
    site_registrations{YType::uint8, "site-registrations"}
{

    yang_name = "distance"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Distance::~Distance()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Distance::has_data() const
{
    return alt.is_set
	|| away.is_set
	|| dyn_eid.is_set
	|| site_registrations.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Distance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(alt.yfilter)
	|| ydk::is_set(away.yfilter)
	|| ydk::is_set(dyn_eid.yfilter)
	|| ydk::is_set(site_registrations.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Distance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Distance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alt.is_set || is_set(alt.yfilter)) leaf_name_data.push_back(alt.get_name_leafdata());
    if (away.is_set || is_set(away.yfilter)) leaf_name_data.push_back(away.get_name_leafdata());
    if (dyn_eid.is_set || is_set(dyn_eid.yfilter)) leaf_name_data.push_back(dyn_eid.get_name_leafdata());
    if (site_registrations.is_set || is_set(site_registrations.yfilter)) leaf_name_data.push_back(site_registrations.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Distance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Distance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Distance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alt")
    {
        alt = value;
        alt.value_namespace = name_space;
        alt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "away")
    {
        away = value;
        away.value_namespace = name_space;
        away.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dyn-eid")
    {
        dyn_eid = value;
        dyn_eid.value_namespace = name_space;
        dyn_eid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "site-registrations")
    {
        site_registrations = value;
        site_registrations.value_namespace = name_space;
        site_registrations.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Distance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alt")
    {
        alt.yfilter = yfilter;
    }
    if(value_path == "away")
    {
        away.yfilter = yfilter;
    }
    if(value_path == "dyn-eid")
    {
        dyn_eid.yfilter = yfilter;
    }
    if(value_path == "site-registrations")
    {
        site_registrations.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Distance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alt" || name == "away" || name == "dyn-eid" || name == "site-registrations")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::MapCache::MapCache()
    :
    site_registration{YType::empty, "site-registration"}
    	,
    away_eids(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::MapCache::AwayEids>())
{
    away_eids->parent = this;

    yang_name = "map-cache"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::MapCache::~MapCache()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::MapCache::has_data() const
{
    for (std::size_t index=0; index<eid_interface.size(); index++)
    {
        if(eid_interface[index]->has_data())
            return true;
    }
    return site_registration.is_set
	|| (away_eids !=  nullptr && away_eids->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::MapCache::has_operation() const
{
    for (std::size_t index=0; index<eid_interface.size(); index++)
    {
        if(eid_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(site_registration.yfilter)
	|| (away_eids !=  nullptr && away_eids->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::MapCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::MapCache::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (site_registration.is_set || is_set(site_registration.yfilter)) leaf_name_data.push_back(site_registration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::MapCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eid-interface")
    {
        auto c = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::MapCache::EidInterface>();
        c->parent = this;
        eid_interface.push_back(c);
        return c;
    }

    if(child_yang_name == "away-eids")
    {
        if(away_eids == nullptr)
        {
            away_eids = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::MapCache::AwayEids>();
        }
        return away_eids;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::MapCache::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : eid_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(away_eids != nullptr)
    {
        children["away-eids"] = away_eids;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::MapCache::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "site-registration")
    {
        site_registration = value;
        site_registration.value_namespace = name_space;
        site_registration.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::MapCache::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "site-registration")
    {
        site_registration.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::MapCache::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eid-interface" || name == "away-eids" || name == "site-registration")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::MapCache::EidInterface::EidInterface()
    :
    eid_prefix{YType::str, "eid-prefix"},
    drop{YType::empty, "drop"},
    map_request{YType::empty, "map-request"},
    native_forward{YType::empty, "native-forward"}
    	,
    etr_interface_ip(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::MapCache::EidInterface::EtrInterfaceIp>())
{
    etr_interface_ip->parent = this;

    yang_name = "eid-interface"; yang_parent_name = "map-cache"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::MapCache::EidInterface::~EidInterface()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::MapCache::EidInterface::has_data() const
{
    return eid_prefix.is_set
	|| drop.is_set
	|| map_request.is_set
	|| native_forward.is_set
	|| (etr_interface_ip !=  nullptr && etr_interface_ip->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::MapCache::EidInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eid_prefix.yfilter)
	|| ydk::is_set(drop.yfilter)
	|| ydk::is_set(map_request.yfilter)
	|| ydk::is_set(native_forward.yfilter)
	|| (etr_interface_ip !=  nullptr && etr_interface_ip->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::MapCache::EidInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eid-interface" <<"[eid-prefix='" <<eid_prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::MapCache::EidInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eid_prefix.is_set || is_set(eid_prefix.yfilter)) leaf_name_data.push_back(eid_prefix.get_name_leafdata());
    if (drop.is_set || is_set(drop.yfilter)) leaf_name_data.push_back(drop.get_name_leafdata());
    if (map_request.is_set || is_set(map_request.yfilter)) leaf_name_data.push_back(map_request.get_name_leafdata());
    if (native_forward.is_set || is_set(native_forward.yfilter)) leaf_name_data.push_back(native_forward.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::MapCache::EidInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "etr-interface-ip")
    {
        if(etr_interface_ip == nullptr)
        {
            etr_interface_ip = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::MapCache::EidInterface::EtrInterfaceIp>();
        }
        return etr_interface_ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::MapCache::EidInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(etr_interface_ip != nullptr)
    {
        children["etr-interface-ip"] = etr_interface_ip;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::MapCache::EidInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eid-prefix")
    {
        eid_prefix = value;
        eid_prefix.value_namespace = name_space;
        eid_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drop")
    {
        drop = value;
        drop.value_namespace = name_space;
        drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "map-request")
    {
        map_request = value;
        map_request.value_namespace = name_space;
        map_request.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "native-forward")
    {
        native_forward = value;
        native_forward.value_namespace = name_space;
        native_forward.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::MapCache::EidInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eid-prefix")
    {
        eid_prefix.yfilter = yfilter;
    }
    if(value_path == "drop")
    {
        drop.yfilter = yfilter;
    }
    if(value_path == "map-request")
    {
        map_request.yfilter = yfilter;
    }
    if(value_path == "native-forward")
    {
        native_forward.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::MapCache::EidInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "etr-interface-ip" || name == "eid-prefix" || name == "drop" || name == "map-request" || name == "native-forward")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::MapCache::EidInterface::EtrInterfaceIp::EtrInterfaceIp()
    :
    etr_interface_ip_address{YType::str, "etr-interface-ip-address"},
    priority{YType::uint8, "priority"},
    weight{YType::uint8, "weight"}
{

    yang_name = "etr-interface-ip"; yang_parent_name = "eid-interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::MapCache::EidInterface::EtrInterfaceIp::~EtrInterfaceIp()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::MapCache::EidInterface::EtrInterfaceIp::has_data() const
{
    return etr_interface_ip_address.is_set
	|| priority.is_set
	|| weight.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::MapCache::EidInterface::EtrInterfaceIp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(etr_interface_ip_address.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::MapCache::EidInterface::EtrInterfaceIp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etr-interface-ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::MapCache::EidInterface::EtrInterfaceIp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (etr_interface_ip_address.is_set || is_set(etr_interface_ip_address.yfilter)) leaf_name_data.push_back(etr_interface_ip_address.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::MapCache::EidInterface::EtrInterfaceIp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::MapCache::EidInterface::EtrInterfaceIp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::MapCache::EidInterface::EtrInterfaceIp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "etr-interface-ip-address")
    {
        etr_interface_ip_address = value;
        etr_interface_ip_address.value_namespace = name_space;
        etr_interface_ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::MapCache::EidInterface::EtrInterfaceIp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "etr-interface-ip-address")
    {
        etr_interface_ip_address.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::MapCache::EidInterface::EtrInterfaceIp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "etr-interface-ip-address" || name == "priority" || name == "weight")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::MapCache::AwayEids::AwayEids()
    :
    send_map_request{YType::empty, "send-map-request"}
{

    yang_name = "away-eids"; yang_parent_name = "map-cache"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::MapCache::AwayEids::~AwayEids()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::MapCache::AwayEids::has_data() const
{
    return send_map_request.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::MapCache::AwayEids::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(send_map_request.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::MapCache::AwayEids::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "away-eids";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::MapCache::AwayEids::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (send_map_request.is_set || is_set(send_map_request.yfilter)) leaf_name_data.push_back(send_map_request.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::MapCache::AwayEids::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::MapCache::AwayEids::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::MapCache::AwayEids::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "send-map-request")
    {
        send_map_request = value;
        send_map_request.value_namespace = name_space;
        send_map_request.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::MapCache::AwayEids::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "send-map-request")
    {
        send_map_request.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::MapCache::AwayEids::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "send-map-request")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::MapCachePersistent::MapCachePersistent()
    :
    interval{YType::uint16, "interval"}
{

    yang_name = "map-cache-persistent"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::MapCachePersistent::~MapCachePersistent()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::MapCachePersistent::has_data() const
{
    return interval.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::MapCachePersistent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::MapCachePersistent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-persistent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::MapCachePersistent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::MapCachePersistent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::MapCachePersistent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::MapCachePersistent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::MapCachePersistent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::MapCachePersistent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::ProxyItr::ProxyItr()
    :
    ipv4_addr{YType::str, "ipv4-addr"},
    ipv6_addr{YType::str, "ipv6-addr"}
{

    yang_name = "proxy-itr"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::ProxyItr::~ProxyItr()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::ProxyItr::has_data() const
{
    return ipv4_addr.is_set
	|| ipv6_addr.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::ProxyItr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_addr.yfilter)
	|| ydk::is_set(ipv6_addr.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::ProxyItr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proxy-itr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::ProxyItr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_addr.is_set || is_set(ipv4_addr.yfilter)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());
    if (ipv6_addr.is_set || is_set(ipv6_addr.yfilter)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::ProxyItr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::ProxyItr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::ProxyItr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-addr")
    {
        ipv4_addr = value;
        ipv4_addr.value_namespace = name_space;
        ipv4_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-addr")
    {
        ipv6_addr = value;
        ipv6_addr.value_namespace = name_space;
        ipv6_addr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::ProxyItr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-addr")
    {
        ipv4_addr.yfilter = yfilter;
    }
    if(value_path == "ipv6-addr")
    {
        ipv6_addr.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::ProxyItr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-addr" || name == "ipv6-addr")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteExport::RouteExport()
    :
    site_registrations{YType::empty, "site-registrations"},
    away_eids{YType::empty, "away-eids"}
{

    yang_name = "route-export"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteExport::~RouteExport()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteExport::has_data() const
{
    return site_registrations.is_set
	|| away_eids.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteExport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(site_registrations.yfilter)
	|| ydk::is_set(away_eids.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteExport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-export";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteExport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (site_registrations.is_set || is_set(site_registrations.yfilter)) leaf_name_data.push_back(site_registrations.get_name_leafdata());
    if (away_eids.is_set || is_set(away_eids.yfilter)) leaf_name_data.push_back(away_eids.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteExport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteExport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteExport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "site-registrations")
    {
        site_registrations = value;
        site_registrations.value_namespace = name_space;
        site_registrations.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "away-eids")
    {
        away_eids = value;
        away_eids.value_namespace = name_space;
        away_eids.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteExport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "site-registrations")
    {
        site_registrations.yfilter = yfilter;
    }
    if(value_path == "away-eids")
    {
        away_eids.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteExport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "site-registrations" || name == "away-eids")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::UsePetr::UsePetr()
    :
    locator_address{YType::str, "locator-address"}
    	,
    priority(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::UsePetr::Priority>())
{
    priority->parent = this;

    yang_name = "use-petr"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::UsePetr::~UsePetr()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::UsePetr::has_data() const
{
    return locator_address.is_set
	|| (priority !=  nullptr && priority->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::UsePetr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(locator_address.yfilter)
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::UsePetr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "use-petr" <<"[locator-address='" <<locator_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::UsePetr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locator_address.is_set || is_set(locator_address.yfilter)) leaf_name_data.push_back(locator_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::UsePetr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::UsePetr::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::UsePetr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::UsePetr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "locator-address")
    {
        locator_address = value;
        locator_address.value_namespace = name_space;
        locator_address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::UsePetr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "locator-address")
    {
        locator_address.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::UsePetr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority" || name == "locator-address")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::UsePetr::Priority::Priority()
    :
    priority_value{YType::uint8, "priority-value"},
    weight{YType::uint8, "weight"}
{

    yang_name = "priority"; yang_parent_name = "use-petr"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::UsePetr::Priority::~Priority()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::UsePetr::Priority::has_data() const
{
    return priority_value.is_set
	|| weight.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::UsePetr::Priority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority_value.yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::UsePetr::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::UsePetr::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority_value.is_set || is_set(priority_value.yfilter)) leaf_name_data.push_back(priority_value.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::UsePetr::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::UsePetr::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::UsePetr::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority-value")
    {
        priority_value = value;
        priority_value.value_namespace = name_space;
        priority_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::UsePetr::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority-value")
    {
        priority_value.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::UsePetr::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority-value" || name == "weight")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::RouteImport()
    :
    database(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database>())
	,map_cache(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache>())
{
    database->parent = this;
    map_cache->parent = this;

    yang_name = "route-import"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::~RouteImport()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::has_data() const
{
    return (database !=  nullptr && database->has_data())
	|| (map_cache !=  nullptr && map_cache->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::has_operation() const
{
    return is_set(yfilter)
	|| (database !=  nullptr && database->has_operation())
	|| (map_cache !=  nullptr && map_cache->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database")
    {
        if(database == nullptr)
        {
            database = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database>();
        }
        return database;
    }

    if(child_yang_name == "map-cache")
    {
        if(map_cache == nullptr)
        {
            map_cache = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache>();
        }
        return map_cache;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(database != nullptr)
    {
        children["database"] = database;
    }

    if(map_cache != nullptr)
    {
        children["map-cache"] = map_cache;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database" || name == "map-cache")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Database()
    :
    application(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Application>())
	,connected(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Connected>())
	,isis(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Isis>())
	,maximum_prefix(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::MaximumPrefix>())
	,nd(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Nd>())
	,static_(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Static>())
	,rip(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Rip>())
{
    application->parent = this;
    connected->parent = this;
    isis->parent = this;
    maximum_prefix->parent = this;
    nd->parent = this;
    static_->parent = this;
    rip->parent = this;

    yang_name = "database"; yang_parent_name = "route-import"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::~Database()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::has_data() const
{
    for (std::size_t index=0; index<bgp.size(); index++)
    {
        if(bgp[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<eigrp.size(); index++)
    {
        if(eigrp[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ospf.size(); index++)
    {
        if(ospf[index]->has_data())
            return true;
    }
    return (application !=  nullptr && application->has_data())
	|| (connected !=  nullptr && connected->has_data())
	|| (isis !=  nullptr && isis->has_data())
	|| (maximum_prefix !=  nullptr && maximum_prefix->has_data())
	|| (nd !=  nullptr && nd->has_data())
	|| (static_ !=  nullptr && static_->has_data())
	|| (rip !=  nullptr && rip->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::has_operation() const
{
    for (std::size_t index=0; index<bgp.size(); index++)
    {
        if(bgp[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<eigrp.size(); index++)
    {
        if(eigrp[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ospf.size(); index++)
    {
        if(ospf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (application !=  nullptr && application->has_operation())
	|| (connected !=  nullptr && connected->has_operation())
	|| (isis !=  nullptr && isis->has_operation())
	|| (maximum_prefix !=  nullptr && maximum_prefix->has_operation())
	|| (nd !=  nullptr && nd->has_operation())
	|| (static_ !=  nullptr && static_->has_operation())
	|| (rip !=  nullptr && rip->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application")
    {
        if(application == nullptr)
        {
            application = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Application>();
        }
        return application;
    }

    if(child_yang_name == "bgp")
    {
        auto c = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Bgp>();
        c->parent = this;
        bgp.push_back(c);
        return c;
    }

    if(child_yang_name == "connected")
    {
        if(connected == nullptr)
        {
            connected = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Connected>();
        }
        return connected;
    }

    if(child_yang_name == "eigrp")
    {
        auto c = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Eigrp>();
        c->parent = this;
        eigrp.push_back(c);
        return c;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "maximum-prefix")
    {
        if(maximum_prefix == nullptr)
        {
            maximum_prefix = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::MaximumPrefix>();
        }
        return maximum_prefix;
    }

    if(child_yang_name == "nd")
    {
        if(nd == nullptr)
        {
            nd = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Nd>();
        }
        return nd;
    }

    if(child_yang_name == "ospf")
    {
        auto c = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Ospf>();
        c->parent = this;
        ospf.push_back(c);
        return c;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Static>();
        }
        return static_;
    }

    if(child_yang_name == "rip")
    {
        if(rip == nullptr)
        {
            rip = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Rip>();
        }
        return rip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(application != nullptr)
    {
        children["application"] = application;
    }

    count = 0;
    for (auto const & c : bgp)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(connected != nullptr)
    {
        children["connected"] = connected;
    }

    count = 0;
    for (auto const & c : eigrp)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(isis != nullptr)
    {
        children["isis"] = isis;
    }

    if(maximum_prefix != nullptr)
    {
        children["maximum-prefix"] = maximum_prefix;
    }

    if(nd != nullptr)
    {
        children["nd"] = nd;
    }

    count = 0;
    for (auto const & c : ospf)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(static_ != nullptr)
    {
        children["static"] = static_;
    }

    if(rip != nullptr)
    {
        children["rip"] = rip;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application" || name == "bgp" || name == "connected" || name == "eigrp" || name == "isis" || name == "maximum-prefix" || name == "nd" || name == "ospf" || name == "static" || name == "rip")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Application::Application()
    :
    lisp_ip_route_import(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Application::LispIpRouteImport>())
{
    lisp_ip_route_import->parent = this;

    yang_name = "application"; yang_parent_name = "database"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Application::~Application()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Application::has_data() const
{
    return (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Application::has_operation() const
{
    return is_set(yfilter)
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Application::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lisp-ip-route-import")
    {
        if(lisp_ip_route_import == nullptr)
        {
            lisp_ip_route_import = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Application::LispIpRouteImport>();
        }
        return lisp_ip_route_import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Application::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(lisp_ip_route_import != nullptr)
    {
        children["lisp-ip-route-import"] = lisp_ip_route_import;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Application::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Application::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Application::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lisp-ip-route-import")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Application::LispIpRouteImport::LispIpRouteImport()
    :
    route_map{YType::str, "route-map"},
    locator_set{YType::str, "locator-set"}
{

    yang_name = "lisp-ip-route-import"; yang_parent_name = "application"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Application::LispIpRouteImport::~LispIpRouteImport()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Application::LispIpRouteImport::has_data() const
{
    return route_map.is_set
	|| locator_set.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Application::LispIpRouteImport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(locator_set.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Application::LispIpRouteImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp-ip-route-import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Application::LispIpRouteImport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (locator_set.is_set || is_set(locator_set.yfilter)) leaf_name_data.push_back(locator_set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Application::LispIpRouteImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Application::LispIpRouteImport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Application::LispIpRouteImport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locator-set")
    {
        locator_set = value;
        locator_set.value_namespace = name_space;
        locator_set.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Application::LispIpRouteImport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "locator-set")
    {
        locator_set.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Application::LispIpRouteImport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map" || name == "locator-set")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Bgp::Bgp()
    :
    id{YType::str, "id"}
    	,
    lisp_ip_route_import(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Bgp::LispIpRouteImport>())
{
    lisp_ip_route_import->parent = this;

    yang_name = "bgp"; yang_parent_name = "database"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Bgp::~Bgp()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Bgp::has_data() const
{
    return id.is_set
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lisp-ip-route-import")
    {
        if(lisp_ip_route_import == nullptr)
        {
            lisp_ip_route_import = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Bgp::LispIpRouteImport>();
        }
        return lisp_ip_route_import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(lisp_ip_route_import != nullptr)
    {
        children["lisp-ip-route-import"] = lisp_ip_route_import;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lisp-ip-route-import" || name == "id")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Bgp::LispIpRouteImport::LispIpRouteImport()
    :
    route_map{YType::str, "route-map"},
    locator_set{YType::str, "locator-set"}
{

    yang_name = "lisp-ip-route-import"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Bgp::LispIpRouteImport::~LispIpRouteImport()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Bgp::LispIpRouteImport::has_data() const
{
    return route_map.is_set
	|| locator_set.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Bgp::LispIpRouteImport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(locator_set.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Bgp::LispIpRouteImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp-ip-route-import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Bgp::LispIpRouteImport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (locator_set.is_set || is_set(locator_set.yfilter)) leaf_name_data.push_back(locator_set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Bgp::LispIpRouteImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Bgp::LispIpRouteImport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Bgp::LispIpRouteImport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locator-set")
    {
        locator_set = value;
        locator_set.value_namespace = name_space;
        locator_set.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Bgp::LispIpRouteImport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "locator-set")
    {
        locator_set.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Bgp::LispIpRouteImport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map" || name == "locator-set")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Connected::Connected()
    :
    lisp_ip_route_import(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Connected::LispIpRouteImport>())
{
    lisp_ip_route_import->parent = this;

    yang_name = "connected"; yang_parent_name = "database"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Connected::~Connected()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Connected::has_data() const
{
    return (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Connected::has_operation() const
{
    return is_set(yfilter)
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Connected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Connected::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Connected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lisp-ip-route-import")
    {
        if(lisp_ip_route_import == nullptr)
        {
            lisp_ip_route_import = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Connected::LispIpRouteImport>();
        }
        return lisp_ip_route_import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Connected::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(lisp_ip_route_import != nullptr)
    {
        children["lisp-ip-route-import"] = lisp_ip_route_import;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Connected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Connected::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Connected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lisp-ip-route-import")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Connected::LispIpRouteImport::LispIpRouteImport()
    :
    route_map{YType::str, "route-map"},
    locator_set{YType::str, "locator-set"}
{

    yang_name = "lisp-ip-route-import"; yang_parent_name = "connected"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Connected::LispIpRouteImport::~LispIpRouteImport()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Connected::LispIpRouteImport::has_data() const
{
    return route_map.is_set
	|| locator_set.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Connected::LispIpRouteImport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(locator_set.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Connected::LispIpRouteImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp-ip-route-import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Connected::LispIpRouteImport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (locator_set.is_set || is_set(locator_set.yfilter)) leaf_name_data.push_back(locator_set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Connected::LispIpRouteImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Connected::LispIpRouteImport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Connected::LispIpRouteImport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locator-set")
    {
        locator_set = value;
        locator_set.value_namespace = name_space;
        locator_set.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Connected::LispIpRouteImport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "locator-set")
    {
        locator_set.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Connected::LispIpRouteImport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map" || name == "locator-set")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Eigrp::Eigrp()
    :
    id{YType::uint16, "id"}
    	,
    lisp_ip_route_import(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Eigrp::LispIpRouteImport>())
{
    lisp_ip_route_import->parent = this;

    yang_name = "eigrp"; yang_parent_name = "database"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Eigrp::~Eigrp()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Eigrp::has_data() const
{
    return id.is_set
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Eigrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Eigrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lisp-ip-route-import")
    {
        if(lisp_ip_route_import == nullptr)
        {
            lisp_ip_route_import = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Eigrp::LispIpRouteImport>();
        }
        return lisp_ip_route_import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(lisp_ip_route_import != nullptr)
    {
        children["lisp-ip-route-import"] = lisp_ip_route_import;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Eigrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Eigrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Eigrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lisp-ip-route-import" || name == "id")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Eigrp::LispIpRouteImport::LispIpRouteImport()
    :
    route_map{YType::str, "route-map"},
    locator_set{YType::str, "locator-set"}
{

    yang_name = "lisp-ip-route-import"; yang_parent_name = "eigrp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Eigrp::LispIpRouteImport::~LispIpRouteImport()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Eigrp::LispIpRouteImport::has_data() const
{
    return route_map.is_set
	|| locator_set.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Eigrp::LispIpRouteImport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(locator_set.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Eigrp::LispIpRouteImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp-ip-route-import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Eigrp::LispIpRouteImport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (locator_set.is_set || is_set(locator_set.yfilter)) leaf_name_data.push_back(locator_set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Eigrp::LispIpRouteImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Eigrp::LispIpRouteImport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Eigrp::LispIpRouteImport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locator-set")
    {
        locator_set = value;
        locator_set.value_namespace = name_space;
        locator_set.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Eigrp::LispIpRouteImport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "locator-set")
    {
        locator_set.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Eigrp::LispIpRouteImport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map" || name == "locator-set")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Isis::Isis()
    :
    process_id{YType::str, "process-id"}
    	,
    lisp_ip_route_import(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Isis::LispIpRouteImport>())
{
    lisp_ip_route_import->parent = this;

    yang_name = "isis"; yang_parent_name = "database"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Isis::~Isis()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Isis::has_data() const
{
    return process_id.is_set
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Isis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(process_id.yfilter)
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process_id.is_set || is_set(process_id.yfilter)) leaf_name_data.push_back(process_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lisp-ip-route-import")
    {
        if(lisp_ip_route_import == nullptr)
        {
            lisp_ip_route_import = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Isis::LispIpRouteImport>();
        }
        return lisp_ip_route_import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(lisp_ip_route_import != nullptr)
    {
        children["lisp-ip-route-import"] = lisp_ip_route_import;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "process-id")
    {
        process_id = value;
        process_id.value_namespace = name_space;
        process_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "process-id")
    {
        process_id.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lisp-ip-route-import" || name == "process-id")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Isis::LispIpRouteImport::LispIpRouteImport()
    :
    route_map{YType::str, "route-map"},
    locator_set{YType::str, "locator-set"}
{

    yang_name = "lisp-ip-route-import"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Isis::LispIpRouteImport::~LispIpRouteImport()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Isis::LispIpRouteImport::has_data() const
{
    return route_map.is_set
	|| locator_set.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Isis::LispIpRouteImport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(locator_set.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Isis::LispIpRouteImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp-ip-route-import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Isis::LispIpRouteImport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (locator_set.is_set || is_set(locator_set.yfilter)) leaf_name_data.push_back(locator_set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Isis::LispIpRouteImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Isis::LispIpRouteImport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Isis::LispIpRouteImport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locator-set")
    {
        locator_set = value;
        locator_set.value_namespace = name_space;
        locator_set.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Isis::LispIpRouteImport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "locator-set")
    {
        locator_set.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Isis::LispIpRouteImport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map" || name == "locator-set")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::MaximumPrefix::MaximumPrefix()
    :
    number{YType::uint32, "number"},
    warning_only{YType::empty, "warning-only"},
    threshold{YType::uint8, "threshold"},
    threshold1{YType::uint8, "threshold1"},
    warning_only1{YType::empty, "warning-only1"}
{

    yang_name = "maximum-prefix"; yang_parent_name = "database"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::MaximumPrefix::~MaximumPrefix()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::MaximumPrefix::has_data() const
{
    return number.is_set
	|| warning_only.is_set
	|| threshold.is_set
	|| threshold1.is_set
	|| warning_only1.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::MaximumPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(warning_only.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(threshold1.yfilter)
	|| ydk::is_set(warning_only1.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::MaximumPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::MaximumPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (warning_only.is_set || is_set(warning_only.yfilter)) leaf_name_data.push_back(warning_only.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (threshold1.is_set || is_set(threshold1.yfilter)) leaf_name_data.push_back(threshold1.get_name_leafdata());
    if (warning_only1.is_set || is_set(warning_only1.yfilter)) leaf_name_data.push_back(warning_only1.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::MaximumPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::MaximumPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::MaximumPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-only")
    {
        warning_only = value;
        warning_only.value_namespace = name_space;
        warning_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold1")
    {
        threshold1 = value;
        threshold1.value_namespace = name_space;
        threshold1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-only1")
    {
        warning_only1 = value;
        warning_only1.value_namespace = name_space;
        warning_only1.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::MaximumPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "warning-only")
    {
        warning_only.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "threshold1")
    {
        threshold1.yfilter = yfilter;
    }
    if(value_path == "warning-only1")
    {
        warning_only1.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::MaximumPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "warning-only" || name == "threshold" || name == "threshold1" || name == "warning-only1")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Nd::Nd()
    :
    lisp_ip_route_import(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Nd::LispIpRouteImport>())
{
    lisp_ip_route_import->parent = this;

    yang_name = "nd"; yang_parent_name = "database"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Nd::~Nd()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Nd::has_data() const
{
    return (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Nd::has_operation() const
{
    return is_set(yfilter)
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Nd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Nd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Nd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lisp-ip-route-import")
    {
        if(lisp_ip_route_import == nullptr)
        {
            lisp_ip_route_import = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Nd::LispIpRouteImport>();
        }
        return lisp_ip_route_import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Nd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(lisp_ip_route_import != nullptr)
    {
        children["lisp-ip-route-import"] = lisp_ip_route_import;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Nd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Nd::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Nd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lisp-ip-route-import")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Nd::LispIpRouteImport::LispIpRouteImport()
    :
    route_map{YType::str, "route-map"},
    locator_set{YType::str, "locator-set"}
{

    yang_name = "lisp-ip-route-import"; yang_parent_name = "nd"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Nd::LispIpRouteImport::~LispIpRouteImport()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Nd::LispIpRouteImport::has_data() const
{
    return route_map.is_set
	|| locator_set.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Nd::LispIpRouteImport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(locator_set.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Nd::LispIpRouteImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp-ip-route-import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Nd::LispIpRouteImport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (locator_set.is_set || is_set(locator_set.yfilter)) leaf_name_data.push_back(locator_set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Nd::LispIpRouteImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Nd::LispIpRouteImport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Nd::LispIpRouteImport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locator-set")
    {
        locator_set = value;
        locator_set.value_namespace = name_space;
        locator_set.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Nd::LispIpRouteImport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "locator-set")
    {
        locator_set.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Nd::LispIpRouteImport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map" || name == "locator-set")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Ospf::Ospf()
    :
    id{YType::uint16, "id"}
    	,
    lisp_ip_route_import(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Ospf::LispIpRouteImport>())
{
    lisp_ip_route_import->parent = this;

    yang_name = "ospf"; yang_parent_name = "database"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Ospf::~Ospf()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Ospf::has_data() const
{
    return id.is_set
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Ospf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lisp-ip-route-import")
    {
        if(lisp_ip_route_import == nullptr)
        {
            lisp_ip_route_import = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Ospf::LispIpRouteImport>();
        }
        return lisp_ip_route_import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(lisp_ip_route_import != nullptr)
    {
        children["lisp-ip-route-import"] = lisp_ip_route_import;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lisp-ip-route-import" || name == "id")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Ospf::LispIpRouteImport::LispIpRouteImport()
    :
    route_map{YType::str, "route-map"},
    locator_set{YType::str, "locator-set"}
{

    yang_name = "lisp-ip-route-import"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Ospf::LispIpRouteImport::~LispIpRouteImport()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Ospf::LispIpRouteImport::has_data() const
{
    return route_map.is_set
	|| locator_set.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Ospf::LispIpRouteImport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(locator_set.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Ospf::LispIpRouteImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp-ip-route-import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Ospf::LispIpRouteImport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (locator_set.is_set || is_set(locator_set.yfilter)) leaf_name_data.push_back(locator_set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Ospf::LispIpRouteImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Ospf::LispIpRouteImport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Ospf::LispIpRouteImport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locator-set")
    {
        locator_set = value;
        locator_set.value_namespace = name_space;
        locator_set.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Ospf::LispIpRouteImport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "locator-set")
    {
        locator_set.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Ospf::LispIpRouteImport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map" || name == "locator-set")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Static::Static()
    :
    lisp_ip_route_import(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Static::LispIpRouteImport>())
{
    lisp_ip_route_import->parent = this;

    yang_name = "static"; yang_parent_name = "database"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Static::~Static()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Static::has_data() const
{
    return (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Static::has_operation() const
{
    return is_set(yfilter)
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Static::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Static::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Static::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lisp-ip-route-import")
    {
        if(lisp_ip_route_import == nullptr)
        {
            lisp_ip_route_import = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Static::LispIpRouteImport>();
        }
        return lisp_ip_route_import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Static::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(lisp_ip_route_import != nullptr)
    {
        children["lisp-ip-route-import"] = lisp_ip_route_import;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Static::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Static::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Static::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lisp-ip-route-import")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Static::LispIpRouteImport::LispIpRouteImport()
    :
    route_map{YType::str, "route-map"},
    locator_set{YType::str, "locator-set"}
{

    yang_name = "lisp-ip-route-import"; yang_parent_name = "static"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Static::LispIpRouteImport::~LispIpRouteImport()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Static::LispIpRouteImport::has_data() const
{
    return route_map.is_set
	|| locator_set.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Static::LispIpRouteImport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(locator_set.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Static::LispIpRouteImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp-ip-route-import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Static::LispIpRouteImport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (locator_set.is_set || is_set(locator_set.yfilter)) leaf_name_data.push_back(locator_set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Static::LispIpRouteImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Static::LispIpRouteImport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Static::LispIpRouteImport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locator-set")
    {
        locator_set = value;
        locator_set.value_namespace = name_space;
        locator_set.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Static::LispIpRouteImport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "locator-set")
    {
        locator_set.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Static::LispIpRouteImport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map" || name == "locator-set")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Rip::Rip()
    :
    lisp_ip_route_import(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Rip::LispIpRouteImport>())
{
    lisp_ip_route_import->parent = this;

    yang_name = "rip"; yang_parent_name = "database"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Rip::~Rip()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Rip::has_data() const
{
    return (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Rip::has_operation() const
{
    return is_set(yfilter)
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Rip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Rip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Rip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lisp-ip-route-import")
    {
        if(lisp_ip_route_import == nullptr)
        {
            lisp_ip_route_import = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Rip::LispIpRouteImport>();
        }
        return lisp_ip_route_import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Rip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(lisp_ip_route_import != nullptr)
    {
        children["lisp-ip-route-import"] = lisp_ip_route_import;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Rip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Rip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Rip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lisp-ip-route-import")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Rip::LispIpRouteImport::LispIpRouteImport()
    :
    route_map{YType::str, "route-map"},
    locator_set{YType::str, "locator-set"}
{

    yang_name = "lisp-ip-route-import"; yang_parent_name = "rip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Rip::LispIpRouteImport::~LispIpRouteImport()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Rip::LispIpRouteImport::has_data() const
{
    return route_map.is_set
	|| locator_set.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Rip::LispIpRouteImport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(locator_set.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Rip::LispIpRouteImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp-ip-route-import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Rip::LispIpRouteImport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (locator_set.is_set || is_set(locator_set.yfilter)) leaf_name_data.push_back(locator_set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Rip::LispIpRouteImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Rip::LispIpRouteImport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Rip::LispIpRouteImport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locator-set")
    {
        locator_set = value;
        locator_set.value_namespace = name_space;
        locator_set.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Rip::LispIpRouteImport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "locator-set")
    {
        locator_set.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::Database::Rip::LispIpRouteImport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map" || name == "locator-set")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::MapCache()
    :
    application(nullptr) // presence node
	,connected(nullptr) // presence node
	,isis(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Isis>())
	,maximum_prefix(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::MaximumPrefix>())
	,nd(nullptr) // presence node
	,static_(nullptr) // presence node
	,rip(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Rip>())
{
    isis->parent = this;
    maximum_prefix->parent = this;
    rip->parent = this;

    yang_name = "map-cache"; yang_parent_name = "route-import"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::~MapCache()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::has_data() const
{
    for (std::size_t index=0; index<bgp.size(); index++)
    {
        if(bgp[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<eigrp.size(); index++)
    {
        if(eigrp[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ospf.size(); index++)
    {
        if(ospf[index]->has_data())
            return true;
    }
    return (application !=  nullptr && application->has_data())
	|| (connected !=  nullptr && connected->has_data())
	|| (isis !=  nullptr && isis->has_data())
	|| (maximum_prefix !=  nullptr && maximum_prefix->has_data())
	|| (nd !=  nullptr && nd->has_data())
	|| (static_ !=  nullptr && static_->has_data())
	|| (rip !=  nullptr && rip->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::has_operation() const
{
    for (std::size_t index=0; index<bgp.size(); index++)
    {
        if(bgp[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<eigrp.size(); index++)
    {
        if(eigrp[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ospf.size(); index++)
    {
        if(ospf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (application !=  nullptr && application->has_operation())
	|| (connected !=  nullptr && connected->has_operation())
	|| (isis !=  nullptr && isis->has_operation())
	|| (maximum_prefix !=  nullptr && maximum_prefix->has_operation())
	|| (nd !=  nullptr && nd->has_operation())
	|| (static_ !=  nullptr && static_->has_operation())
	|| (rip !=  nullptr && rip->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application")
    {
        if(application == nullptr)
        {
            application = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Application>();
        }
        return application;
    }

    if(child_yang_name == "bgp")
    {
        auto c = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Bgp>();
        c->parent = this;
        bgp.push_back(c);
        return c;
    }

    if(child_yang_name == "connected")
    {
        if(connected == nullptr)
        {
            connected = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Connected>();
        }
        return connected;
    }

    if(child_yang_name == "eigrp")
    {
        auto c = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Eigrp>();
        c->parent = this;
        eigrp.push_back(c);
        return c;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "maximum-prefix")
    {
        if(maximum_prefix == nullptr)
        {
            maximum_prefix = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::MaximumPrefix>();
        }
        return maximum_prefix;
    }

    if(child_yang_name == "nd")
    {
        if(nd == nullptr)
        {
            nd = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Nd>();
        }
        return nd;
    }

    if(child_yang_name == "ospf")
    {
        auto c = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Ospf>();
        c->parent = this;
        ospf.push_back(c);
        return c;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Static>();
        }
        return static_;
    }

    if(child_yang_name == "rip")
    {
        if(rip == nullptr)
        {
            rip = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Rip>();
        }
        return rip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(application != nullptr)
    {
        children["application"] = application;
    }

    count = 0;
    for (auto const & c : bgp)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(connected != nullptr)
    {
        children["connected"] = connected;
    }

    count = 0;
    for (auto const & c : eigrp)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(isis != nullptr)
    {
        children["isis"] = isis;
    }

    if(maximum_prefix != nullptr)
    {
        children["maximum-prefix"] = maximum_prefix;
    }

    if(nd != nullptr)
    {
        children["nd"] = nd;
    }

    count = 0;
    for (auto const & c : ospf)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(static_ != nullptr)
    {
        children["static"] = static_;
    }

    if(rip != nullptr)
    {
        children["rip"] = rip;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application" || name == "bgp" || name == "connected" || name == "eigrp" || name == "isis" || name == "maximum-prefix" || name == "nd" || name == "ospf" || name == "static" || name == "rip")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Application::Application()
    :
    map_cache_container(nullptr) // presence node
{

    yang_name = "application"; yang_parent_name = "map-cache"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Application::~Application()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Application::has_data() const
{
    return (map_cache_container !=  nullptr && map_cache_container->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Application::has_operation() const
{
    return is_set(yfilter)
	|| (map_cache_container !=  nullptr && map_cache_container->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Application::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-cache-container")
    {
        if(map_cache_container == nullptr)
        {
            map_cache_container = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Application::MapCacheContainer>();
        }
        return map_cache_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Application::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(map_cache_container != nullptr)
    {
        children["map-cache-container"] = map_cache_container;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Application::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Application::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Application::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-cache-container")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Application::MapCacheContainer::MapCacheContainer()
    :
    route_map{YType::str, "route-map"}
{

    yang_name = "map-cache-container"; yang_parent_name = "application"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Application::MapCacheContainer::~MapCacheContainer()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Application::MapCacheContainer::has_data() const
{
    return route_map.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Application::MapCacheContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Application::MapCacheContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Application::MapCacheContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Application::MapCacheContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Application::MapCacheContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Application::MapCacheContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Application::MapCacheContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Application::MapCacheContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Bgp::Bgp()
    :
    id{YType::str, "id"}
    	,
    map_cache_container(nullptr) // presence node
{

    yang_name = "bgp"; yang_parent_name = "map-cache"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Bgp::~Bgp()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Bgp::has_data() const
{
    return id.is_set
	|| (map_cache_container !=  nullptr && map_cache_container->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (map_cache_container !=  nullptr && map_cache_container->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-cache-container")
    {
        if(map_cache_container == nullptr)
        {
            map_cache_container = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Bgp::MapCacheContainer>();
        }
        return map_cache_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(map_cache_container != nullptr)
    {
        children["map-cache-container"] = map_cache_container;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-cache-container" || name == "id")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Bgp::MapCacheContainer::MapCacheContainer()
    :
    route_map{YType::str, "route-map"}
{

    yang_name = "map-cache-container"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Bgp::MapCacheContainer::~MapCacheContainer()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Bgp::MapCacheContainer::has_data() const
{
    return route_map.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Bgp::MapCacheContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Bgp::MapCacheContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Bgp::MapCacheContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Bgp::MapCacheContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Bgp::MapCacheContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Bgp::MapCacheContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Bgp::MapCacheContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Bgp::MapCacheContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Connected::Connected()
    :
    map_cache_container(nullptr) // presence node
{

    yang_name = "connected"; yang_parent_name = "map-cache"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Connected::~Connected()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Connected::has_data() const
{
    return (map_cache_container !=  nullptr && map_cache_container->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Connected::has_operation() const
{
    return is_set(yfilter)
	|| (map_cache_container !=  nullptr && map_cache_container->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Connected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Connected::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Connected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-cache-container")
    {
        if(map_cache_container == nullptr)
        {
            map_cache_container = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Connected::MapCacheContainer>();
        }
        return map_cache_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Connected::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(map_cache_container != nullptr)
    {
        children["map-cache-container"] = map_cache_container;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Connected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Connected::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Connected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-cache-container")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Connected::MapCacheContainer::MapCacheContainer()
    :
    route_map{YType::str, "route-map"}
{

    yang_name = "map-cache-container"; yang_parent_name = "connected"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Connected::MapCacheContainer::~MapCacheContainer()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Connected::MapCacheContainer::has_data() const
{
    return route_map.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Connected::MapCacheContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Connected::MapCacheContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Connected::MapCacheContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Connected::MapCacheContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Connected::MapCacheContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Connected::MapCacheContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Connected::MapCacheContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Connected::MapCacheContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Eigrp::Eigrp()
    :
    id{YType::uint16, "id"}
    	,
    map_cache_container(nullptr) // presence node
{

    yang_name = "eigrp"; yang_parent_name = "map-cache"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Eigrp::~Eigrp()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Eigrp::has_data() const
{
    return id.is_set
	|| (map_cache_container !=  nullptr && map_cache_container->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Eigrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (map_cache_container !=  nullptr && map_cache_container->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Eigrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-cache-container")
    {
        if(map_cache_container == nullptr)
        {
            map_cache_container = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Eigrp::MapCacheContainer>();
        }
        return map_cache_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(map_cache_container != nullptr)
    {
        children["map-cache-container"] = map_cache_container;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Eigrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Eigrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Eigrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-cache-container" || name == "id")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Eigrp::MapCacheContainer::MapCacheContainer()
    :
    route_map{YType::str, "route-map"}
{

    yang_name = "map-cache-container"; yang_parent_name = "eigrp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Eigrp::MapCacheContainer::~MapCacheContainer()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Eigrp::MapCacheContainer::has_data() const
{
    return route_map.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Eigrp::MapCacheContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Eigrp::MapCacheContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Eigrp::MapCacheContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Eigrp::MapCacheContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Eigrp::MapCacheContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Eigrp::MapCacheContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Eigrp::MapCacheContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Eigrp::MapCacheContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Isis::Isis()
    :
    id{YType::str, "id"}
    	,
    map_cache_container(nullptr) // presence node
{

    yang_name = "isis"; yang_parent_name = "map-cache"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Isis::~Isis()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Isis::has_data() const
{
    return id.is_set
	|| (map_cache_container !=  nullptr && map_cache_container->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Isis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (map_cache_container !=  nullptr && map_cache_container->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-cache-container")
    {
        if(map_cache_container == nullptr)
        {
            map_cache_container = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Isis::MapCacheContainer>();
        }
        return map_cache_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(map_cache_container != nullptr)
    {
        children["map-cache-container"] = map_cache_container;
    }

    return children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::RouteImport::MapCache::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-cache-container" || name == "id")
        return true;
    return false;
}

const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::KeyPwd::HashFunction::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::KeyPwd::HashFunction::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key0::HashFunction::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key0::HashFunction::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key6::HashFunction::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key6::HashFunction::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key7::HashFunction::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key7::HashFunction::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::KeyPwd::HashFunction::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::KeyPwd::HashFunction::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::Key0::HashFunction::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::Key0::HashFunction::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::Key6::HashFunction::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::Key6::HashFunction::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::Key7::HashFunction::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::Key7::HashFunction::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::KeyPwd::HashFunction::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::KeyPwd::HashFunction::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key0::HashFunction::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key0::HashFunction::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key6::HashFunction::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key6::HashFunction::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::KeyPwd::HashFunction::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::KeyPwd::HashFunction::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key0::HashFunction::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key0::HashFunction::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key6::HashFunction::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key6::HashFunction::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key7::HashFunction::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key7::HashFunction::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::MapServer::Rloc::Members::ModifyDiscovered::Operator_::add {0, "add"};
const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::MapServer::Rloc::Members::ModifyDiscovered::Operator_::override {1, "override"};

const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::MapServer::Key::KeyPwd::HashFunction::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::MapServer::Key::KeyPwd::HashFunction::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::MapServer::Key::Key0::HashFunction::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::MapServer::Key::Key0::HashFunction::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::MapServer::Key::Key6::HashFunction::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::MapServer::Key::Key6::HashFunction::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::MapServer::Key::Key7::HashFunction::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv4::Default::Etr::MapServer::Key::Key7::HashFunction::sha2 {1, "sha2"};


}
}

