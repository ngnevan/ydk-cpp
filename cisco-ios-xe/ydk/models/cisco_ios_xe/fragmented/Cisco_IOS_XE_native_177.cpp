
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_177.hpp"
#include "Cisco_IOS_XE_native_178.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::Vlan()
    :
    access{YType::empty, "access"}
{

    yang_name = "vlan"; yang_parent_name = "range"; is_top_level_class = false; has_list_ancestor = true;
}

Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::~Vlan()
{
}

bool Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::has_data() const
{
    return access.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access.is_set || is_set(access.yfilter)) leaf_name_data.push_back(access.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access")
    {
        access = value;
        access.value_namespace = name_space;
        access.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access")
    {
        access.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Violation::Violation()
    :
    restrict{YType::empty, "restrict"},
    shutdown{YType::empty, "shutdown"}
{

    yang_name = "violation"; yang_parent_name = "port-security"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Violation::~Violation()
{
}

bool Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Violation::has_data() const
{
    return restrict.is_set
	|| shutdown.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Violation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(restrict.yfilter)
	|| ydk::is_set(shutdown.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Violation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/LAP_INTERFACE_TEMPLATE/switchport/port-security/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Violation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Violation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (restrict.is_set || is_set(restrict.yfilter)) leaf_name_data.push_back(restrict.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Violation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Violation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Violation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "restrict")
    {
        restrict = value;
        restrict.value_namespace = name_space;
        restrict.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Violation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "restrict")
    {
        restrict.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Violation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "restrict" || name == "shutdown")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::Access::Access()
    :
    vlan{YType::uint16, "vlan"}
{

    yang_name = "access"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::Access::~Access()
{
}

bool Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::Access::has_data() const
{
    return vlan.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::Access::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::Access::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/LAP_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::Access::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::Access::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::Access::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::Access::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::Access::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::Access::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::Access::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::Voice::Voice()
    :
    vlan{YType::uint16, "vlan"}
{

    yang_name = "voice"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::Voice::~Voice()
{
}

bool Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::Voice::has_data() const
{
    return vlan.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::Voice::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::Voice::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/LAP_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::Voice::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "voice";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::Voice::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::Voice::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::Voice::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::Voice::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::Voice::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::Voice::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::SpanningTree::SpanningTree()
    :
    service_policy{YType::empty, "service-policy"}
    	,
    bpduguard(std::make_shared<Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::SpanningTree::Bpduguard>())
	,portfast(std::make_shared<Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::SpanningTree::Portfast>())
{
    bpduguard->parent = this;
    portfast->parent = this;

    yang_name = "spanning-tree"; yang_parent_name = "LAP_INTERFACE_TEMPLATE"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::SpanningTree::~SpanningTree()
{
}

bool Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::SpanningTree::has_data() const
{
    return service_policy.is_set
	|| (bpduguard !=  nullptr && bpduguard->has_data())
	|| (portfast !=  nullptr && portfast->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::SpanningTree::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_policy.yfilter)
	|| (bpduguard !=  nullptr && bpduguard->has_operation())
	|| (portfast !=  nullptr && portfast->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::SpanningTree::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/LAP_INTERFACE_TEMPLATE/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::SpanningTree::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spanning-tree";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::SpanningTree::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy.is_set || is_set(service_policy.yfilter)) leaf_name_data.push_back(service_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::SpanningTree::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bpduguard")
    {
        if(bpduguard == nullptr)
        {
            bpduguard = std::make_shared<Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::SpanningTree::Bpduguard>();
        }
        return bpduguard;
    }

    if(child_yang_name == "portfast")
    {
        if(portfast == nullptr)
        {
            portfast = std::make_shared<Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::SpanningTree::Portfast>();
        }
        return portfast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::SpanningTree::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bpduguard != nullptr)
    {
        children["bpduguard"] = bpduguard;
    }

    if(portfast != nullptr)
    {
        children["portfast"] = portfast;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::SpanningTree::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-policy")
    {
        service_policy = value;
        service_policy.value_namespace = name_space;
        service_policy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::SpanningTree::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-policy")
    {
        service_policy.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::SpanningTree::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bpduguard" || name == "portfast" || name == "service-policy")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::SpanningTree::Bpduguard::Bpduguard()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "bpduguard"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::SpanningTree::Bpduguard::~Bpduguard()
{
}

bool Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::SpanningTree::Bpduguard::has_data() const
{
    return enable.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::SpanningTree::Bpduguard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::SpanningTree::Bpduguard::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/LAP_INTERFACE_TEMPLATE/spanning-tree/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::SpanningTree::Bpduguard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bpduguard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::SpanningTree::Bpduguard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::SpanningTree::Bpduguard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::SpanningTree::Bpduguard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::SpanningTree::Bpduguard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::SpanningTree::Bpduguard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::SpanningTree::Bpduguard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::SpanningTree::Portfast::Portfast()
    :
    disable{YType::empty, "disable"},
    edge{YType::empty, "edge"},
    network{YType::empty, "network"}
{

    yang_name = "portfast"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::SpanningTree::Portfast::~Portfast()
{
}

bool Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::SpanningTree::Portfast::has_data() const
{
    return disable.is_set
	|| edge.is_set
	|| network.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::SpanningTree::Portfast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(edge.yfilter)
	|| ydk::is_set(network.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::SpanningTree::Portfast::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/LAP_INTERFACE_TEMPLATE/spanning-tree/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::SpanningTree::Portfast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "portfast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::SpanningTree::Portfast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (edge.is_set || is_set(edge.yfilter)) leaf_name_data.push_back(edge.get_name_leafdata());
    if (network.is_set || is_set(network.yfilter)) leaf_name_data.push_back(network.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::SpanningTree::Portfast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::SpanningTree::Portfast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::SpanningTree::Portfast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "edge")
    {
        edge = value;
        edge.value_namespace = name_space;
        edge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network")
    {
        network = value;
        network.value_namespace = name_space;
        network.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::SpanningTree::Portfast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "edge")
    {
        edge.yfilter = yfilter;
    }
    if(value_path == "network")
    {
        network.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::SpanningTree::Portfast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "edge" || name == "network")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::StormControl()
    :
    broadcast(std::make_shared<Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Broadcast>())
	,action(std::make_shared<Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Action>())
{
    broadcast->parent = this;
    action->parent = this;

    yang_name = "storm-control"; yang_parent_name = "LAP_INTERFACE_TEMPLATE"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::~StormControl()
{
}

bool Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::has_data() const
{
    return (broadcast !=  nullptr && broadcast->has_data())
	|| (action !=  nullptr && action->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::has_operation() const
{
    return is_set(yfilter)
	|| (broadcast !=  nullptr && broadcast->has_operation())
	|| (action !=  nullptr && action->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/LAP_INTERFACE_TEMPLATE/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "storm-control";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "broadcast")
    {
        if(broadcast == nullptr)
        {
            broadcast = std::make_shared<Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Broadcast>();
        }
        return broadcast;
    }

    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Action>();
        }
        return action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(broadcast != nullptr)
    {
        children["broadcast"] = broadcast;
    }

    if(action != nullptr)
    {
        children["action"] = action;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "broadcast" || name == "action")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Broadcast::Broadcast()
    :
    level(std::make_shared<Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Broadcast::Level>())
{
    level->parent = this;

    yang_name = "broadcast"; yang_parent_name = "storm-control"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Broadcast::~Broadcast()
{
}

bool Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Broadcast::has_data() const
{
    return (level !=  nullptr && level->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Broadcast::has_operation() const
{
    return is_set(yfilter)
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Broadcast::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/LAP_INTERFACE_TEMPLATE/storm-control/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Broadcast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Broadcast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Broadcast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Broadcast::Level>();
        }
        return level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Broadcast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(level != nullptr)
    {
        children["level"] = level;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Broadcast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Broadcast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Broadcast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Broadcast::Level::Level()
    :
    threshold{YType::str, "threshold"}
    	,
    pps(std::make_shared<Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps>())
	,bps(std::make_shared<Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps>())
{
    pps->parent = this;
    bps->parent = this;

    yang_name = "level"; yang_parent_name = "broadcast"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Broadcast::Level::~Level()
{
}

bool Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Broadcast::Level::has_data() const
{
    return threshold.is_set
	|| (pps !=  nullptr && pps->has_data())
	|| (bps !=  nullptr && bps->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Broadcast::Level::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| (pps !=  nullptr && pps->has_operation())
	|| (bps !=  nullptr && bps->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Broadcast::Level::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/LAP_INTERFACE_TEMPLATE/storm-control/broadcast/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Broadcast::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Broadcast::Level::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Broadcast::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pps")
    {
        if(pps == nullptr)
        {
            pps = std::make_shared<Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps>();
        }
        return pps;
    }

    if(child_yang_name == "bps")
    {
        if(bps == nullptr)
        {
            bps = std::make_shared<Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps>();
        }
        return bps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Broadcast::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pps != nullptr)
    {
        children["pps"] = pps;
    }

    if(bps != nullptr)
    {
        children["bps"] = bps;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Broadcast::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Broadcast::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Broadcast::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pps" || name == "bps" || name == "threshold")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::Pps()
    :
    threshold{YType::str, "threshold"}
{

    yang_name = "pps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::~Pps()
{
}

bool Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::has_data() const
{
    return threshold.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/LAP_INTERFACE_TEMPLATE/storm-control/broadcast/level/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::Bps()
    :
    threshold{YType::str, "threshold"},
    b_unit{YType::str, "b-unit"}
{

    yang_name = "bps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::~Bps()
{
}

bool Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::has_data() const
{
    return threshold.is_set
	|| b_unit.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(b_unit.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/LAP_INTERFACE_TEMPLATE/storm-control/broadcast/level/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (b_unit.is_set || is_set(b_unit.yfilter)) leaf_name_data.push_back(b_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "b-unit")
    {
        b_unit = value;
        b_unit.value_namespace = name_space;
        b_unit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "b-unit")
    {
        b_unit.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "b-unit")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Action::Action()
    :
    shutdown{YType::empty, "shutdown"},
    trap{YType::empty, "trap"}
{

    yang_name = "action"; yang_parent_name = "storm-control"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Action::~Action()
{
}

bool Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Action::has_data() const
{
    return shutdown.is_set
	|| trap.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Action::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(trap.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Action::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/LAP_INTERFACE_TEMPLATE/storm-control/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Action::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (trap.is_set || is_set(trap.yfilter)) leaf_name_data.push_back(trap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trap")
    {
        trap = value;
        trap.value_namespace = name_space;
        trap.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "trap")
    {
        trap.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "shutdown" || name == "trap")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Ip::Ip()
    :
    dhcp(std::make_shared<Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Ip::Dhcp>())
{
    dhcp->parent = this;

    yang_name = "ip"; yang_parent_name = "LAP_INTERFACE_TEMPLATE"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Ip::~Ip()
{
}

bool Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Ip::has_data() const
{
    return (dhcp !=  nullptr && dhcp->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (dhcp !=  nullptr && dhcp->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Ip::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/LAP_INTERFACE_TEMPLATE/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Ip::Dhcp>();
        }
        return dhcp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dhcp != nullptr)
    {
        children["dhcp"] = dhcp;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dhcp")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Ip::Dhcp::Dhcp()
    :
    snooping(std::make_shared<Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Ip::Dhcp::Snooping>())
{
    snooping->parent = this;

    yang_name = "dhcp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Ip::Dhcp::~Dhcp()
{
}

bool Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Ip::Dhcp::has_data() const
{
    return (snooping !=  nullptr && snooping->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Ip::Dhcp::has_operation() const
{
    return is_set(yfilter)
	|| (snooping !=  nullptr && snooping->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Ip::Dhcp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/LAP_INTERFACE_TEMPLATE/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Ip::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Ip::Dhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Ip::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "snooping")
    {
        if(snooping == nullptr)
        {
            snooping = std::make_shared<Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Ip::Dhcp::Snooping>();
        }
        return snooping;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Ip::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(snooping != nullptr)
    {
        children["snooping"] = snooping;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Ip::Dhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Ip::Dhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Ip::Dhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snooping")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Ip::Dhcp::Snooping::Snooping()
    :
    limit(std::make_shared<Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit>())
{
    limit->parent = this;

    yang_name = "snooping"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Ip::Dhcp::Snooping::~Snooping()
{
}

bool Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Ip::Dhcp::Snooping::has_data() const
{
    return (limit !=  nullptr && limit->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Ip::Dhcp::Snooping::has_operation() const
{
    return is_set(yfilter)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Ip::Dhcp::Snooping::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/LAP_INTERFACE_TEMPLATE/ip/dhcp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Ip::Dhcp::Snooping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snooping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Ip::Dhcp::Snooping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Ip::Dhcp::Snooping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit>();
        }
        return limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Ip::Dhcp::Snooping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Ip::Dhcp::Snooping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Ip::Dhcp::Snooping::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Ip::Dhcp::Snooping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::Limit()
    :
    rate{YType::uint16, "rate"}
{

    yang_name = "limit"; yang_parent_name = "snooping"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::~Limit()
{
}

bool Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::has_data() const
{
    return rate.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rate.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/LAP_INTERFACE_TEMPLATE/ip/dhcp/snooping/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rate.is_set || is_set(rate.yfilter)) leaf_name_data.push_back(rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rate")
    {
        rate = value;
        rate.value_namespace = name_space;
        rate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rate")
    {
        rate.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::APINTERFACETEMPLATE()
    :
    load_interval{YType::uint16, "load-interval"}
    	,
    service_policy(std::make_shared<Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::ServicePolicy>())
	,switchport(std::make_shared<Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport>())
	,spanning_tree(nullptr) // presence node
	,storm_control(std::make_shared<Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl>())
	,ip(std::make_shared<Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Ip>())
{
    service_policy->parent = this;
    switchport->parent = this;
    storm_control->parent = this;
    ip->parent = this;

    yang_name = "AP_INTERFACE_TEMPLATE"; yang_parent_name = "Cisco-IOS-XE-switch_template"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::~APINTERFACETEMPLATE()
{
}

bool Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::has_data() const
{
    return load_interval.is_set
	|| (service_policy !=  nullptr && service_policy->has_data())
	|| (switchport !=  nullptr && switchport->has_data())
	|| (spanning_tree !=  nullptr && spanning_tree->has_data())
	|| (storm_control !=  nullptr && storm_control->has_data())
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(load_interval.yfilter)
	|| (service_policy !=  nullptr && service_policy->has_operation())
	|| (switchport !=  nullptr && switchport->has_operation())
	|| (spanning_tree !=  nullptr && spanning_tree->has_operation())
	|| (storm_control !=  nullptr && storm_control->has_operation())
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AP_INTERFACE_TEMPLATE";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (load_interval.is_set || is_set(load_interval.yfilter)) leaf_name_data.push_back(load_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy")
    {
        if(service_policy == nullptr)
        {
            service_policy = std::make_shared<Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::ServicePolicy>();
        }
        return service_policy;
    }

    if(child_yang_name == "switchport")
    {
        if(switchport == nullptr)
        {
            switchport = std::make_shared<Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport>();
        }
        return switchport;
    }

    if(child_yang_name == "spanning-tree")
    {
        if(spanning_tree == nullptr)
        {
            spanning_tree = std::make_shared<Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::SpanningTree>();
        }
        return spanning_tree;
    }

    if(child_yang_name == "storm-control")
    {
        if(storm_control == nullptr)
        {
            storm_control = std::make_shared<Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl>();
        }
        return storm_control;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(service_policy != nullptr)
    {
        children["service-policy"] = service_policy;
    }

    if(switchport != nullptr)
    {
        children["switchport"] = switchport;
    }

    if(spanning_tree != nullptr)
    {
        children["spanning-tree"] = spanning_tree;
    }

    if(storm_control != nullptr)
    {
        children["storm-control"] = storm_control;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "load-interval")
    {
        load_interval = value;
        load_interval.value_namespace = name_space;
        load_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "load-interval")
    {
        load_interval.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy" || name == "switchport" || name == "spanning-tree" || name == "storm-control" || name == "ip" || name == "load-interval")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::ServicePolicy::ServicePolicy()
    :
    input(std::make_shared<Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::ServicePolicy::Input>())
	,output(std::make_shared<Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::ServicePolicy::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "service-policy"; yang_parent_name = "AP_INTERFACE_TEMPLATE"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::ServicePolicy::~ServicePolicy()
{
}

bool Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::ServicePolicy::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::ServicePolicy::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::ServicePolicy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/AP_INTERFACE_TEMPLATE/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::ServicePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::ServicePolicy::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::ServicePolicy::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    if(output != nullptr)
    {
        children["output"] = output;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::ServicePolicy::Input::Input()
    :
    policy_map_name{YType::str, "policy-map-name"}
{

    yang_name = "input"; yang_parent_name = "service-policy"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::ServicePolicy::Input::~Input()
{
}

bool Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::ServicePolicy::Input::has_data() const
{
    return policy_map_name.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::ServicePolicy::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_map_name.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::ServicePolicy::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/AP_INTERFACE_TEMPLATE/service-policy/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::ServicePolicy::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::ServicePolicy::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_map_name.is_set || is_set(policy_map_name.yfilter)) leaf_name_data.push_back(policy_map_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::ServicePolicy::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::ServicePolicy::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::ServicePolicy::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name = value;
        policy_map_name.value_namespace = name_space;
        policy_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::ServicePolicy::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::ServicePolicy::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-map-name")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::ServicePolicy::Output::Output()
    :
    policy_map_name{YType::str, "policy-map-name"}
{

    yang_name = "output"; yang_parent_name = "service-policy"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::ServicePolicy::Output::~Output()
{
}

bool Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::ServicePolicy::Output::has_data() const
{
    return policy_map_name.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::ServicePolicy::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_map_name.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::ServicePolicy::Output::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/AP_INTERFACE_TEMPLATE/service-policy/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::ServicePolicy::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::ServicePolicy::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_map_name.is_set || is_set(policy_map_name.yfilter)) leaf_name_data.push_back(policy_map_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::ServicePolicy::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::ServicePolicy::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::ServicePolicy::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name = value;
        policy_map_name.value_namespace = name_space;
        policy_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::ServicePolicy::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::ServicePolicy::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-map-name")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::Switchport()
    :
    nonegotiate{YType::empty, "nonegotiate"}
    	,
    mode(std::make_shared<Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::Mode>())
	,block(std::make_shared<Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::Block>())
	,port_security(nullptr) // presence node
	,access(std::make_shared<Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::Access>())
	,voice(std::make_shared<Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::Voice>())
{
    mode->parent = this;
    block->parent = this;
    access->parent = this;
    voice->parent = this;

    yang_name = "switchport"; yang_parent_name = "AP_INTERFACE_TEMPLATE"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::~Switchport()
{
}

bool Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::has_data() const
{
    return nonegotiate.is_set
	|| (mode !=  nullptr && mode->has_data())
	|| (block !=  nullptr && block->has_data())
	|| (port_security !=  nullptr && port_security->has_data())
	|| (access !=  nullptr && access->has_data())
	|| (voice !=  nullptr && voice->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nonegotiate.yfilter)
	|| (mode !=  nullptr && mode->has_operation())
	|| (block !=  nullptr && block->has_operation())
	|| (port_security !=  nullptr && port_security->has_operation())
	|| (access !=  nullptr && access->has_operation())
	|| (voice !=  nullptr && voice->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/AP_INTERFACE_TEMPLATE/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switchport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nonegotiate.is_set || is_set(nonegotiate.yfilter)) leaf_name_data.push_back(nonegotiate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::Mode>();
        }
        return mode;
    }

    if(child_yang_name == "block")
    {
        if(block == nullptr)
        {
            block = std::make_shared<Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::Block>();
        }
        return block;
    }

    if(child_yang_name == "port-security")
    {
        if(port_security == nullptr)
        {
            port_security = std::make_shared<Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity>();
        }
        return port_security;
    }

    if(child_yang_name == "access")
    {
        if(access == nullptr)
        {
            access = std::make_shared<Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::Access>();
        }
        return access;
    }

    if(child_yang_name == "voice")
    {
        if(voice == nullptr)
        {
            voice = std::make_shared<Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::Voice>();
        }
        return voice;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mode != nullptr)
    {
        children["mode"] = mode;
    }

    if(block != nullptr)
    {
        children["block"] = block;
    }

    if(port_security != nullptr)
    {
        children["port-security"] = port_security;
    }

    if(access != nullptr)
    {
        children["access"] = access;
    }

    if(voice != nullptr)
    {
        children["voice"] = voice;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nonegotiate")
    {
        nonegotiate = value;
        nonegotiate.value_namespace = name_space;
        nonegotiate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nonegotiate")
    {
        nonegotiate.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode" || name == "block" || name == "port-security" || name == "access" || name == "voice" || name == "nonegotiate")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::Mode::Mode()
    :
    trunk{YType::empty, "trunk"},
    access{YType::empty, "access"}
{

    yang_name = "mode"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::Mode::~Mode()
{
}

bool Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::Mode::has_data() const
{
    return trunk.is_set
	|| access.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::Mode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trunk.yfilter)
	|| ydk::is_set(access.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::Mode::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/AP_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trunk.is_set || is_set(trunk.yfilter)) leaf_name_data.push_back(trunk.get_name_leafdata());
    if (access.is_set || is_set(access.yfilter)) leaf_name_data.push_back(access.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trunk")
    {
        trunk = value;
        trunk.value_namespace = name_space;
        trunk.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access")
    {
        access = value;
        access.value_namespace = name_space;
        access.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trunk")
    {
        trunk.yfilter = yfilter;
    }
    if(value_path == "access")
    {
        access.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trunk" || name == "access")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::Block::Block()
    :
    unicast{YType::empty, "unicast"}
{

    yang_name = "block"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::Block::~Block()
{
}

bool Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::Block::has_data() const
{
    return unicast.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::Block::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unicast.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::Block::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/AP_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::Block::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "block";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::Block::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unicast.is_set || is_set(unicast.yfilter)) leaf_name_data.push_back(unicast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::Block::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::Block::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::Block::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unicast")
    {
        unicast = value;
        unicast.value_namespace = name_space;
        unicast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::Block::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unicast")
    {
        unicast.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::Block::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unicast")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::PortSecurity()
    :
    aging(std::make_shared<Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Aging>())
	,maximum(std::make_shared<Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Maximum>())
	,violation(std::make_shared<Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Violation>())
{
    aging->parent = this;
    maximum->parent = this;
    violation->parent = this;

    yang_name = "port-security"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::~PortSecurity()
{
}

bool Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::has_data() const
{
    return (aging !=  nullptr && aging->has_data())
	|| (maximum !=  nullptr && maximum->has_data())
	|| (violation !=  nullptr && violation->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::has_operation() const
{
    return is_set(yfilter)
	|| (aging !=  nullptr && aging->has_operation())
	|| (maximum !=  nullptr && maximum->has_operation())
	|| (violation !=  nullptr && violation->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/AP_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-security";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aging")
    {
        if(aging == nullptr)
        {
            aging = std::make_shared<Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Aging>();
        }
        return aging;
    }

    if(child_yang_name == "maximum")
    {
        if(maximum == nullptr)
        {
            maximum = std::make_shared<Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Maximum>();
        }
        return maximum;
    }

    if(child_yang_name == "violation")
    {
        if(violation == nullptr)
        {
            violation = std::make_shared<Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Violation>();
        }
        return violation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aging != nullptr)
    {
        children["aging"] = aging;
    }

    if(maximum != nullptr)
    {
        children["maximum"] = maximum;
    }

    if(violation != nullptr)
    {
        children["violation"] = violation;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aging" || name == "maximum" || name == "violation")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Aging()
    :
    static_{YType::empty, "static"},
    time{YType::uint16, "time"}
    	,
    type(nullptr) // presence node
{

    yang_name = "aging"; yang_parent_name = "port-security"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Aging::~Aging()
{
}

bool Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Aging::has_data() const
{
    return static_.is_set
	|| time.is_set
	|| (type !=  nullptr && type->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Aging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(static_.yfilter)
	|| ydk::is_set(time.yfilter)
	|| (type !=  nullptr && type->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Aging::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/AP_INTERFACE_TEMPLATE/switchport/port-security/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Aging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Aging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (static_.is_set || is_set(static_.yfilter)) leaf_name_data.push_back(static_.get_name_leafdata());
    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Aging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "type")
    {
        if(type == nullptr)
        {
            type = std::make_shared<Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type>();
        }
        return type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Aging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(type != nullptr)
    {
        children["type"] = type;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Aging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "static")
    {
        static_ = value;
        static_.value_namespace = name_space;
        static_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Aging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "static")
    {
        static_.yfilter = yfilter;
    }
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Aging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "static" || name == "time")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::Type()
    :
    inactivity{YType::empty, "inactivity"}
{

    yang_name = "type"; yang_parent_name = "aging"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::~Type()
{
}

bool Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::has_data() const
{
    return inactivity.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inactivity.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/AP_INTERFACE_TEMPLATE/switchport/port-security/aging/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inactivity.is_set || is_set(inactivity.yfilter)) leaf_name_data.push_back(inactivity.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inactivity")
    {
        inactivity = value;
        inactivity.value_namespace = name_space;
        inactivity.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inactivity")
    {
        inactivity.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inactivity")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Maximum()
{

    yang_name = "maximum"; yang_parent_name = "port-security"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::~Maximum()
{
}

bool Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::has_data() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::has_operation() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/AP_INTERFACE_TEMPLATE/switchport/port-security/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        for(auto const & c : range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range>();
        c->parent = this;
        range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Range()
    :
    range{YType::uint16, "range"}
    	,
    vlan(nullptr) // presence node
{

    yang_name = "range"; yang_parent_name = "maximum"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::~Range()
{
}

bool Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::has_data() const
{
    return range.is_set
	|| (vlan !=  nullptr && vlan->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/AP_INTERFACE_TEMPLATE/switchport/port-security/maximum/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range" <<"[range='" <<range <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vlan != nullptr)
    {
        children["vlan"] = vlan;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan" || name == "range")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::Vlan()
    :
    access{YType::empty, "access"}
{

    yang_name = "vlan"; yang_parent_name = "range"; is_top_level_class = false; has_list_ancestor = true;
}

Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::~Vlan()
{
}

bool Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::has_data() const
{
    return access.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access.is_set || is_set(access.yfilter)) leaf_name_data.push_back(access.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access")
    {
        access = value;
        access.value_namespace = name_space;
        access.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access")
    {
        access.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Violation::Violation()
    :
    restrict{YType::empty, "restrict"},
    shutdown{YType::empty, "shutdown"}
{

    yang_name = "violation"; yang_parent_name = "port-security"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Violation::~Violation()
{
}

bool Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Violation::has_data() const
{
    return restrict.is_set
	|| shutdown.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Violation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(restrict.yfilter)
	|| ydk::is_set(shutdown.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Violation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/AP_INTERFACE_TEMPLATE/switchport/port-security/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Violation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Violation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (restrict.is_set || is_set(restrict.yfilter)) leaf_name_data.push_back(restrict.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Violation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Violation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Violation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "restrict")
    {
        restrict = value;
        restrict.value_namespace = name_space;
        restrict.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Violation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "restrict")
    {
        restrict.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::PortSecurity::Violation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "restrict" || name == "shutdown")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::Access::Access()
    :
    vlan{YType::uint16, "vlan"}
{

    yang_name = "access"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::Access::~Access()
{
}

bool Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::Access::has_data() const
{
    return vlan.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::Access::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::Access::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/AP_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::Access::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::Access::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::Access::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::Access::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::Access::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::Access::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::Access::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::Voice::Voice()
    :
    vlan{YType::uint16, "vlan"}
{

    yang_name = "voice"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::Voice::~Voice()
{
}

bool Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::Voice::has_data() const
{
    return vlan.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::Voice::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::Voice::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/AP_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::Voice::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "voice";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::Voice::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::Voice::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::Voice::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::Voice::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::Voice::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Switchport::Voice::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::SpanningTree::SpanningTree()
    :
    service_policy{YType::empty, "service-policy"}
    	,
    bpduguard(std::make_shared<Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::SpanningTree::Bpduguard>())
	,portfast(std::make_shared<Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::SpanningTree::Portfast>())
{
    bpduguard->parent = this;
    portfast->parent = this;

    yang_name = "spanning-tree"; yang_parent_name = "AP_INTERFACE_TEMPLATE"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::SpanningTree::~SpanningTree()
{
}

bool Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::SpanningTree::has_data() const
{
    return service_policy.is_set
	|| (bpduguard !=  nullptr && bpduguard->has_data())
	|| (portfast !=  nullptr && portfast->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::SpanningTree::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_policy.yfilter)
	|| (bpduguard !=  nullptr && bpduguard->has_operation())
	|| (portfast !=  nullptr && portfast->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::SpanningTree::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/AP_INTERFACE_TEMPLATE/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::SpanningTree::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spanning-tree";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::SpanningTree::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy.is_set || is_set(service_policy.yfilter)) leaf_name_data.push_back(service_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::SpanningTree::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bpduguard")
    {
        if(bpduguard == nullptr)
        {
            bpduguard = std::make_shared<Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::SpanningTree::Bpduguard>();
        }
        return bpduguard;
    }

    if(child_yang_name == "portfast")
    {
        if(portfast == nullptr)
        {
            portfast = std::make_shared<Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::SpanningTree::Portfast>();
        }
        return portfast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::SpanningTree::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bpduguard != nullptr)
    {
        children["bpduguard"] = bpduguard;
    }

    if(portfast != nullptr)
    {
        children["portfast"] = portfast;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::SpanningTree::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-policy")
    {
        service_policy = value;
        service_policy.value_namespace = name_space;
        service_policy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::SpanningTree::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-policy")
    {
        service_policy.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::SpanningTree::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bpduguard" || name == "portfast" || name == "service-policy")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::SpanningTree::Bpduguard::Bpduguard()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "bpduguard"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::SpanningTree::Bpduguard::~Bpduguard()
{
}

bool Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::SpanningTree::Bpduguard::has_data() const
{
    return enable.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::SpanningTree::Bpduguard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::SpanningTree::Bpduguard::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/AP_INTERFACE_TEMPLATE/spanning-tree/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::SpanningTree::Bpduguard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bpduguard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::SpanningTree::Bpduguard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::SpanningTree::Bpduguard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::SpanningTree::Bpduguard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::SpanningTree::Bpduguard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::SpanningTree::Bpduguard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::SpanningTree::Bpduguard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::SpanningTree::Portfast::Portfast()
    :
    disable{YType::empty, "disable"},
    edge{YType::empty, "edge"},
    network{YType::empty, "network"}
{

    yang_name = "portfast"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::SpanningTree::Portfast::~Portfast()
{
}

bool Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::SpanningTree::Portfast::has_data() const
{
    return disable.is_set
	|| edge.is_set
	|| network.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::SpanningTree::Portfast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(edge.yfilter)
	|| ydk::is_set(network.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::SpanningTree::Portfast::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/AP_INTERFACE_TEMPLATE/spanning-tree/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::SpanningTree::Portfast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "portfast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::SpanningTree::Portfast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (edge.is_set || is_set(edge.yfilter)) leaf_name_data.push_back(edge.get_name_leafdata());
    if (network.is_set || is_set(network.yfilter)) leaf_name_data.push_back(network.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::SpanningTree::Portfast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::SpanningTree::Portfast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::SpanningTree::Portfast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "edge")
    {
        edge = value;
        edge.value_namespace = name_space;
        edge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network")
    {
        network = value;
        network.value_namespace = name_space;
        network.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::SpanningTree::Portfast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "edge")
    {
        edge.yfilter = yfilter;
    }
    if(value_path == "network")
    {
        network.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::SpanningTree::Portfast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "edge" || name == "network")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::StormControl()
    :
    broadcast(std::make_shared<Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::Broadcast>())
	,action(std::make_shared<Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::Action>())
{
    broadcast->parent = this;
    action->parent = this;

    yang_name = "storm-control"; yang_parent_name = "AP_INTERFACE_TEMPLATE"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::~StormControl()
{
}

bool Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::has_data() const
{
    return (broadcast !=  nullptr && broadcast->has_data())
	|| (action !=  nullptr && action->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::has_operation() const
{
    return is_set(yfilter)
	|| (broadcast !=  nullptr && broadcast->has_operation())
	|| (action !=  nullptr && action->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/AP_INTERFACE_TEMPLATE/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "storm-control";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "broadcast")
    {
        if(broadcast == nullptr)
        {
            broadcast = std::make_shared<Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::Broadcast>();
        }
        return broadcast;
    }

    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::Action>();
        }
        return action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(broadcast != nullptr)
    {
        children["broadcast"] = broadcast;
    }

    if(action != nullptr)
    {
        children["action"] = action;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "broadcast" || name == "action")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::Broadcast::Broadcast()
    :
    level(std::make_shared<Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::Broadcast::Level>())
{
    level->parent = this;

    yang_name = "broadcast"; yang_parent_name = "storm-control"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::Broadcast::~Broadcast()
{
}

bool Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::Broadcast::has_data() const
{
    return (level !=  nullptr && level->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::Broadcast::has_operation() const
{
    return is_set(yfilter)
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::Broadcast::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/AP_INTERFACE_TEMPLATE/storm-control/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::Broadcast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::Broadcast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::Broadcast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::Broadcast::Level>();
        }
        return level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::Broadcast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(level != nullptr)
    {
        children["level"] = level;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::Broadcast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::Broadcast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::Broadcast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::Broadcast::Level::Level()
    :
    threshold{YType::str, "threshold"}
    	,
    pps(std::make_shared<Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps>())
	,bps(std::make_shared<Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps>())
{
    pps->parent = this;
    bps->parent = this;

    yang_name = "level"; yang_parent_name = "broadcast"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::Broadcast::Level::~Level()
{
}

bool Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::Broadcast::Level::has_data() const
{
    return threshold.is_set
	|| (pps !=  nullptr && pps->has_data())
	|| (bps !=  nullptr && bps->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::Broadcast::Level::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| (pps !=  nullptr && pps->has_operation())
	|| (bps !=  nullptr && bps->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::Broadcast::Level::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/AP_INTERFACE_TEMPLATE/storm-control/broadcast/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::Broadcast::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::Broadcast::Level::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::Broadcast::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pps")
    {
        if(pps == nullptr)
        {
            pps = std::make_shared<Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps>();
        }
        return pps;
    }

    if(child_yang_name == "bps")
    {
        if(bps == nullptr)
        {
            bps = std::make_shared<Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps>();
        }
        return bps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::Broadcast::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pps != nullptr)
    {
        children["pps"] = pps;
    }

    if(bps != nullptr)
    {
        children["bps"] = bps;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::Broadcast::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::Broadcast::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::Broadcast::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pps" || name == "bps" || name == "threshold")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::Pps()
    :
    threshold{YType::str, "threshold"}
{

    yang_name = "pps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::~Pps()
{
}

bool Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::has_data() const
{
    return threshold.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/AP_INTERFACE_TEMPLATE/storm-control/broadcast/level/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::Bps()
    :
    threshold{YType::str, "threshold"},
    b_unit{YType::str, "b-unit"}
{

    yang_name = "bps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::~Bps()
{
}

bool Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::has_data() const
{
    return threshold.is_set
	|| b_unit.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(b_unit.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/AP_INTERFACE_TEMPLATE/storm-control/broadcast/level/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (b_unit.is_set || is_set(b_unit.yfilter)) leaf_name_data.push_back(b_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "b-unit")
    {
        b_unit = value;
        b_unit.value_namespace = name_space;
        b_unit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "b-unit")
    {
        b_unit.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "b-unit")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::Action::Action()
    :
    shutdown{YType::empty, "shutdown"},
    trap{YType::empty, "trap"}
{

    yang_name = "action"; yang_parent_name = "storm-control"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::Action::~Action()
{
}

bool Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::Action::has_data() const
{
    return shutdown.is_set
	|| trap.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::Action::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(trap.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::Action::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/AP_INTERFACE_TEMPLATE/storm-control/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::Action::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (trap.is_set || is_set(trap.yfilter)) leaf_name_data.push_back(trap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trap")
    {
        trap = value;
        trap.value_namespace = name_space;
        trap.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "trap")
    {
        trap.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::StormControl::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "shutdown" || name == "trap")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Ip::Ip()
    :
    dhcp(std::make_shared<Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Ip::Dhcp>())
{
    dhcp->parent = this;

    yang_name = "ip"; yang_parent_name = "AP_INTERFACE_TEMPLATE"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Ip::~Ip()
{
}

bool Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Ip::has_data() const
{
    return (dhcp !=  nullptr && dhcp->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (dhcp !=  nullptr && dhcp->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Ip::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/AP_INTERFACE_TEMPLATE/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Ip::Dhcp>();
        }
        return dhcp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dhcp != nullptr)
    {
        children["dhcp"] = dhcp;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dhcp")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Ip::Dhcp::Dhcp()
    :
    snooping(std::make_shared<Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Ip::Dhcp::Snooping>())
{
    snooping->parent = this;

    yang_name = "dhcp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Ip::Dhcp::~Dhcp()
{
}

bool Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Ip::Dhcp::has_data() const
{
    return (snooping !=  nullptr && snooping->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Ip::Dhcp::has_operation() const
{
    return is_set(yfilter)
	|| (snooping !=  nullptr && snooping->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Ip::Dhcp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/AP_INTERFACE_TEMPLATE/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Ip::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Ip::Dhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Ip::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "snooping")
    {
        if(snooping == nullptr)
        {
            snooping = std::make_shared<Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Ip::Dhcp::Snooping>();
        }
        return snooping;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Ip::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(snooping != nullptr)
    {
        children["snooping"] = snooping;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Ip::Dhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Ip::Dhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Ip::Dhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snooping")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Ip::Dhcp::Snooping::Snooping()
    :
    limit(std::make_shared<Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit>())
{
    limit->parent = this;

    yang_name = "snooping"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Ip::Dhcp::Snooping::~Snooping()
{
}

bool Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Ip::Dhcp::Snooping::has_data() const
{
    return (limit !=  nullptr && limit->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Ip::Dhcp::Snooping::has_operation() const
{
    return is_set(yfilter)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Ip::Dhcp::Snooping::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/AP_INTERFACE_TEMPLATE/ip/dhcp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Ip::Dhcp::Snooping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snooping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Ip::Dhcp::Snooping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Ip::Dhcp::Snooping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit>();
        }
        return limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Ip::Dhcp::Snooping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Ip::Dhcp::Snooping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Ip::Dhcp::Snooping::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Ip::Dhcp::Snooping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::Limit()
    :
    rate{YType::uint16, "rate"}
{

    yang_name = "limit"; yang_parent_name = "snooping"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::~Limit()
{
}

bool Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::has_data() const
{
    return rate.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rate.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/AP_INTERFACE_TEMPLATE/ip/dhcp/snooping/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rate.is_set || is_set(rate.yfilter)) leaf_name_data.push_back(rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rate")
    {
        rate = value;
        rate.value_namespace = name_space;
        rate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rate")
    {
        rate.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::DMPINTERFACETEMPLATE()
    :
    load_interval{YType::uint16, "load-interval"}
    	,
    service_policy(std::make_shared<Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::ServicePolicy>())
	,switchport(std::make_shared<Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport>())
	,spanning_tree(nullptr) // presence node
	,storm_control(std::make_shared<Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl>())
	,ip(std::make_shared<Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Ip>())
{
    service_policy->parent = this;
    switchport->parent = this;
    storm_control->parent = this;
    ip->parent = this;

    yang_name = "DMP_INTERFACE_TEMPLATE"; yang_parent_name = "Cisco-IOS-XE-switch_template"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::~DMPINTERFACETEMPLATE()
{
}

bool Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::has_data() const
{
    return load_interval.is_set
	|| (service_policy !=  nullptr && service_policy->has_data())
	|| (switchport !=  nullptr && switchport->has_data())
	|| (spanning_tree !=  nullptr && spanning_tree->has_data())
	|| (storm_control !=  nullptr && storm_control->has_data())
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(load_interval.yfilter)
	|| (service_policy !=  nullptr && service_policy->has_operation())
	|| (switchport !=  nullptr && switchport->has_operation())
	|| (spanning_tree !=  nullptr && spanning_tree->has_operation())
	|| (storm_control !=  nullptr && storm_control->has_operation())
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DMP_INTERFACE_TEMPLATE";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (load_interval.is_set || is_set(load_interval.yfilter)) leaf_name_data.push_back(load_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy")
    {
        if(service_policy == nullptr)
        {
            service_policy = std::make_shared<Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::ServicePolicy>();
        }
        return service_policy;
    }

    if(child_yang_name == "switchport")
    {
        if(switchport == nullptr)
        {
            switchport = std::make_shared<Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport>();
        }
        return switchport;
    }

    if(child_yang_name == "spanning-tree")
    {
        if(spanning_tree == nullptr)
        {
            spanning_tree = std::make_shared<Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::SpanningTree>();
        }
        return spanning_tree;
    }

    if(child_yang_name == "storm-control")
    {
        if(storm_control == nullptr)
        {
            storm_control = std::make_shared<Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl>();
        }
        return storm_control;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(service_policy != nullptr)
    {
        children["service-policy"] = service_policy;
    }

    if(switchport != nullptr)
    {
        children["switchport"] = switchport;
    }

    if(spanning_tree != nullptr)
    {
        children["spanning-tree"] = spanning_tree;
    }

    if(storm_control != nullptr)
    {
        children["storm-control"] = storm_control;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "load-interval")
    {
        load_interval = value;
        load_interval.value_namespace = name_space;
        load_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "load-interval")
    {
        load_interval.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy" || name == "switchport" || name == "spanning-tree" || name == "storm-control" || name == "ip" || name == "load-interval")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::ServicePolicy::ServicePolicy()
    :
    input(std::make_shared<Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::ServicePolicy::Input>())
	,output(std::make_shared<Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::ServicePolicy::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "service-policy"; yang_parent_name = "DMP_INTERFACE_TEMPLATE"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::ServicePolicy::~ServicePolicy()
{
}

bool Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::ServicePolicy::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::ServicePolicy::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::ServicePolicy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/DMP_INTERFACE_TEMPLATE/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::ServicePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::ServicePolicy::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::ServicePolicy::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    if(output != nullptr)
    {
        children["output"] = output;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::ServicePolicy::Input::Input()
    :
    policy_map_name{YType::str, "policy-map-name"}
{

    yang_name = "input"; yang_parent_name = "service-policy"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::ServicePolicy::Input::~Input()
{
}

bool Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::ServicePolicy::Input::has_data() const
{
    return policy_map_name.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::ServicePolicy::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_map_name.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::ServicePolicy::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/DMP_INTERFACE_TEMPLATE/service-policy/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::ServicePolicy::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::ServicePolicy::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_map_name.is_set || is_set(policy_map_name.yfilter)) leaf_name_data.push_back(policy_map_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::ServicePolicy::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::ServicePolicy::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::ServicePolicy::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name = value;
        policy_map_name.value_namespace = name_space;
        policy_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::ServicePolicy::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::ServicePolicy::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-map-name")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::ServicePolicy::Output::Output()
    :
    policy_map_name{YType::str, "policy-map-name"}
{

    yang_name = "output"; yang_parent_name = "service-policy"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::ServicePolicy::Output::~Output()
{
}

bool Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::ServicePolicy::Output::has_data() const
{
    return policy_map_name.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::ServicePolicy::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_map_name.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::ServicePolicy::Output::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/DMP_INTERFACE_TEMPLATE/service-policy/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::ServicePolicy::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::ServicePolicy::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_map_name.is_set || is_set(policy_map_name.yfilter)) leaf_name_data.push_back(policy_map_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::ServicePolicy::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::ServicePolicy::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::ServicePolicy::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name = value;
        policy_map_name.value_namespace = name_space;
        policy_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::ServicePolicy::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::ServicePolicy::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-map-name")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::Switchport()
    :
    nonegotiate{YType::empty, "nonegotiate"}
    	,
    mode(std::make_shared<Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::Mode>())
	,block(std::make_shared<Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::Block>())
	,port_security(nullptr) // presence node
	,access(std::make_shared<Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::Access>())
	,voice(std::make_shared<Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::Voice>())
{
    mode->parent = this;
    block->parent = this;
    access->parent = this;
    voice->parent = this;

    yang_name = "switchport"; yang_parent_name = "DMP_INTERFACE_TEMPLATE"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::~Switchport()
{
}

bool Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::has_data() const
{
    return nonegotiate.is_set
	|| (mode !=  nullptr && mode->has_data())
	|| (block !=  nullptr && block->has_data())
	|| (port_security !=  nullptr && port_security->has_data())
	|| (access !=  nullptr && access->has_data())
	|| (voice !=  nullptr && voice->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nonegotiate.yfilter)
	|| (mode !=  nullptr && mode->has_operation())
	|| (block !=  nullptr && block->has_operation())
	|| (port_security !=  nullptr && port_security->has_operation())
	|| (access !=  nullptr && access->has_operation())
	|| (voice !=  nullptr && voice->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/DMP_INTERFACE_TEMPLATE/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switchport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nonegotiate.is_set || is_set(nonegotiate.yfilter)) leaf_name_data.push_back(nonegotiate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::Mode>();
        }
        return mode;
    }

    if(child_yang_name == "block")
    {
        if(block == nullptr)
        {
            block = std::make_shared<Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::Block>();
        }
        return block;
    }

    if(child_yang_name == "port-security")
    {
        if(port_security == nullptr)
        {
            port_security = std::make_shared<Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity>();
        }
        return port_security;
    }

    if(child_yang_name == "access")
    {
        if(access == nullptr)
        {
            access = std::make_shared<Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::Access>();
        }
        return access;
    }

    if(child_yang_name == "voice")
    {
        if(voice == nullptr)
        {
            voice = std::make_shared<Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::Voice>();
        }
        return voice;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mode != nullptr)
    {
        children["mode"] = mode;
    }

    if(block != nullptr)
    {
        children["block"] = block;
    }

    if(port_security != nullptr)
    {
        children["port-security"] = port_security;
    }

    if(access != nullptr)
    {
        children["access"] = access;
    }

    if(voice != nullptr)
    {
        children["voice"] = voice;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nonegotiate")
    {
        nonegotiate = value;
        nonegotiate.value_namespace = name_space;
        nonegotiate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nonegotiate")
    {
        nonegotiate.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode" || name == "block" || name == "port-security" || name == "access" || name == "voice" || name == "nonegotiate")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::Mode::Mode()
    :
    trunk{YType::empty, "trunk"},
    access{YType::empty, "access"}
{

    yang_name = "mode"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::Mode::~Mode()
{
}

bool Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::Mode::has_data() const
{
    return trunk.is_set
	|| access.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::Mode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trunk.yfilter)
	|| ydk::is_set(access.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::Mode::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/DMP_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trunk.is_set || is_set(trunk.yfilter)) leaf_name_data.push_back(trunk.get_name_leafdata());
    if (access.is_set || is_set(access.yfilter)) leaf_name_data.push_back(access.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trunk")
    {
        trunk = value;
        trunk.value_namespace = name_space;
        trunk.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access")
    {
        access = value;
        access.value_namespace = name_space;
        access.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trunk")
    {
        trunk.yfilter = yfilter;
    }
    if(value_path == "access")
    {
        access.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trunk" || name == "access")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::Block::Block()
    :
    unicast{YType::empty, "unicast"}
{

    yang_name = "block"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::Block::~Block()
{
}

bool Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::Block::has_data() const
{
    return unicast.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::Block::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unicast.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::Block::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/DMP_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::Block::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "block";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::Block::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unicast.is_set || is_set(unicast.yfilter)) leaf_name_data.push_back(unicast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::Block::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::Block::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::Block::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unicast")
    {
        unicast = value;
        unicast.value_namespace = name_space;
        unicast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::Block::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unicast")
    {
        unicast.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::Block::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unicast")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::PortSecurity()
    :
    aging(std::make_shared<Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Aging>())
	,maximum(std::make_shared<Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum>())
	,violation(std::make_shared<Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Violation>())
{
    aging->parent = this;
    maximum->parent = this;
    violation->parent = this;

    yang_name = "port-security"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::~PortSecurity()
{
}

bool Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::has_data() const
{
    return (aging !=  nullptr && aging->has_data())
	|| (maximum !=  nullptr && maximum->has_data())
	|| (violation !=  nullptr && violation->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::has_operation() const
{
    return is_set(yfilter)
	|| (aging !=  nullptr && aging->has_operation())
	|| (maximum !=  nullptr && maximum->has_operation())
	|| (violation !=  nullptr && violation->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/DMP_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-security";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aging")
    {
        if(aging == nullptr)
        {
            aging = std::make_shared<Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Aging>();
        }
        return aging;
    }

    if(child_yang_name == "maximum")
    {
        if(maximum == nullptr)
        {
            maximum = std::make_shared<Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum>();
        }
        return maximum;
    }

    if(child_yang_name == "violation")
    {
        if(violation == nullptr)
        {
            violation = std::make_shared<Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Violation>();
        }
        return violation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aging != nullptr)
    {
        children["aging"] = aging;
    }

    if(maximum != nullptr)
    {
        children["maximum"] = maximum;
    }

    if(violation != nullptr)
    {
        children["violation"] = violation;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aging" || name == "maximum" || name == "violation")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Aging()
    :
    static_{YType::empty, "static"},
    time{YType::uint16, "time"}
    	,
    type(nullptr) // presence node
{

    yang_name = "aging"; yang_parent_name = "port-security"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::~Aging()
{
}

bool Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::has_data() const
{
    return static_.is_set
	|| time.is_set
	|| (type !=  nullptr && type->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(static_.yfilter)
	|| ydk::is_set(time.yfilter)
	|| (type !=  nullptr && type->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/DMP_INTERFACE_TEMPLATE/switchport/port-security/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (static_.is_set || is_set(static_.yfilter)) leaf_name_data.push_back(static_.get_name_leafdata());
    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "type")
    {
        if(type == nullptr)
        {
            type = std::make_shared<Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type>();
        }
        return type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(type != nullptr)
    {
        children["type"] = type;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "static")
    {
        static_ = value;
        static_.value_namespace = name_space;
        static_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "static")
    {
        static_.yfilter = yfilter;
    }
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "static" || name == "time")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::Type()
    :
    inactivity{YType::empty, "inactivity"}
{

    yang_name = "type"; yang_parent_name = "aging"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::~Type()
{
}

bool Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::has_data() const
{
    return inactivity.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inactivity.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/DMP_INTERFACE_TEMPLATE/switchport/port-security/aging/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inactivity.is_set || is_set(inactivity.yfilter)) leaf_name_data.push_back(inactivity.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inactivity")
    {
        inactivity = value;
        inactivity.value_namespace = name_space;
        inactivity.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inactivity")
    {
        inactivity.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inactivity")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Maximum()
{

    yang_name = "maximum"; yang_parent_name = "port-security"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::~Maximum()
{
}

bool Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::has_data() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::has_operation() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/DMP_INTERFACE_TEMPLATE/switchport/port-security/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        for(auto const & c : range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range>();
        c->parent = this;
        range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Range()
    :
    range{YType::uint16, "range"}
    	,
    vlan(nullptr) // presence node
{

    yang_name = "range"; yang_parent_name = "maximum"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::~Range()
{
}

bool Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::has_data() const
{
    return range.is_set
	|| (vlan !=  nullptr && vlan->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/DMP_INTERFACE_TEMPLATE/switchport/port-security/maximum/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range" <<"[range='" <<range <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vlan != nullptr)
    {
        children["vlan"] = vlan;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan" || name == "range")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::Vlan()
    :
    access{YType::empty, "access"}
{

    yang_name = "vlan"; yang_parent_name = "range"; is_top_level_class = false; has_list_ancestor = true;
}

Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::~Vlan()
{
}

bool Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::has_data() const
{
    return access.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access.is_set || is_set(access.yfilter)) leaf_name_data.push_back(access.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access")
    {
        access = value;
        access.value_namespace = name_space;
        access.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access")
    {
        access.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Violation::Violation()
    :
    restrict{YType::empty, "restrict"},
    shutdown{YType::empty, "shutdown"}
{

    yang_name = "violation"; yang_parent_name = "port-security"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Violation::~Violation()
{
}

bool Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Violation::has_data() const
{
    return restrict.is_set
	|| shutdown.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Violation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(restrict.yfilter)
	|| ydk::is_set(shutdown.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Violation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/DMP_INTERFACE_TEMPLATE/switchport/port-security/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Violation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Violation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (restrict.is_set || is_set(restrict.yfilter)) leaf_name_data.push_back(restrict.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Violation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Violation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Violation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "restrict")
    {
        restrict = value;
        restrict.value_namespace = name_space;
        restrict.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Violation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "restrict")
    {
        restrict.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::PortSecurity::Violation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "restrict" || name == "shutdown")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::Access::Access()
    :
    vlan{YType::uint16, "vlan"}
{

    yang_name = "access"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::Access::~Access()
{
}

bool Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::Access::has_data() const
{
    return vlan.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::Access::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::Access::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/DMP_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::Access::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::Access::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::Access::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::Access::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::Access::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::Access::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::Access::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::Voice::Voice()
    :
    vlan{YType::uint16, "vlan"}
{

    yang_name = "voice"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::Voice::~Voice()
{
}

bool Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::Voice::has_data() const
{
    return vlan.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::Voice::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::Voice::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/DMP_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::Voice::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "voice";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::Voice::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::Voice::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::Voice::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::Voice::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::Voice::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Switchport::Voice::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::SpanningTree::SpanningTree()
    :
    service_policy{YType::empty, "service-policy"}
    	,
    bpduguard(std::make_shared<Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::SpanningTree::Bpduguard>())
	,portfast(std::make_shared<Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::SpanningTree::Portfast>())
{
    bpduguard->parent = this;
    portfast->parent = this;

    yang_name = "spanning-tree"; yang_parent_name = "DMP_INTERFACE_TEMPLATE"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::SpanningTree::~SpanningTree()
{
}

bool Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::SpanningTree::has_data() const
{
    return service_policy.is_set
	|| (bpduguard !=  nullptr && bpduguard->has_data())
	|| (portfast !=  nullptr && portfast->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::SpanningTree::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_policy.yfilter)
	|| (bpduguard !=  nullptr && bpduguard->has_operation())
	|| (portfast !=  nullptr && portfast->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::SpanningTree::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/DMP_INTERFACE_TEMPLATE/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::SpanningTree::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spanning-tree";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::SpanningTree::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy.is_set || is_set(service_policy.yfilter)) leaf_name_data.push_back(service_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::SpanningTree::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bpduguard")
    {
        if(bpduguard == nullptr)
        {
            bpduguard = std::make_shared<Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::SpanningTree::Bpduguard>();
        }
        return bpduguard;
    }

    if(child_yang_name == "portfast")
    {
        if(portfast == nullptr)
        {
            portfast = std::make_shared<Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::SpanningTree::Portfast>();
        }
        return portfast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::SpanningTree::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bpduguard != nullptr)
    {
        children["bpduguard"] = bpduguard;
    }

    if(portfast != nullptr)
    {
        children["portfast"] = portfast;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::SpanningTree::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-policy")
    {
        service_policy = value;
        service_policy.value_namespace = name_space;
        service_policy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::SpanningTree::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-policy")
    {
        service_policy.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::SpanningTree::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bpduguard" || name == "portfast" || name == "service-policy")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::SpanningTree::Bpduguard::Bpduguard()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "bpduguard"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::SpanningTree::Bpduguard::~Bpduguard()
{
}

bool Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::SpanningTree::Bpduguard::has_data() const
{
    return enable.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::SpanningTree::Bpduguard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::SpanningTree::Bpduguard::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/DMP_INTERFACE_TEMPLATE/spanning-tree/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::SpanningTree::Bpduguard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bpduguard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::SpanningTree::Bpduguard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::SpanningTree::Bpduguard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::SpanningTree::Bpduguard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::SpanningTree::Bpduguard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::SpanningTree::Bpduguard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::SpanningTree::Bpduguard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::SpanningTree::Portfast::Portfast()
    :
    disable{YType::empty, "disable"},
    edge{YType::empty, "edge"},
    network{YType::empty, "network"}
{

    yang_name = "portfast"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::SpanningTree::Portfast::~Portfast()
{
}

bool Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::SpanningTree::Portfast::has_data() const
{
    return disable.is_set
	|| edge.is_set
	|| network.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::SpanningTree::Portfast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(edge.yfilter)
	|| ydk::is_set(network.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::SpanningTree::Portfast::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/DMP_INTERFACE_TEMPLATE/spanning-tree/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::SpanningTree::Portfast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "portfast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::SpanningTree::Portfast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (edge.is_set || is_set(edge.yfilter)) leaf_name_data.push_back(edge.get_name_leafdata());
    if (network.is_set || is_set(network.yfilter)) leaf_name_data.push_back(network.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::SpanningTree::Portfast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::SpanningTree::Portfast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::SpanningTree::Portfast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "edge")
    {
        edge = value;
        edge.value_namespace = name_space;
        edge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network")
    {
        network = value;
        network.value_namespace = name_space;
        network.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::SpanningTree::Portfast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "edge")
    {
        edge.yfilter = yfilter;
    }
    if(value_path == "network")
    {
        network.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::SpanningTree::Portfast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "edge" || name == "network")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::StormControl()
    :
    broadcast(std::make_shared<Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::Broadcast>())
	,action(std::make_shared<Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::Action>())
{
    broadcast->parent = this;
    action->parent = this;

    yang_name = "storm-control"; yang_parent_name = "DMP_INTERFACE_TEMPLATE"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::~StormControl()
{
}

bool Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::has_data() const
{
    return (broadcast !=  nullptr && broadcast->has_data())
	|| (action !=  nullptr && action->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::has_operation() const
{
    return is_set(yfilter)
	|| (broadcast !=  nullptr && broadcast->has_operation())
	|| (action !=  nullptr && action->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/DMP_INTERFACE_TEMPLATE/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "storm-control";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "broadcast")
    {
        if(broadcast == nullptr)
        {
            broadcast = std::make_shared<Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::Broadcast>();
        }
        return broadcast;
    }

    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::Action>();
        }
        return action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(broadcast != nullptr)
    {
        children["broadcast"] = broadcast;
    }

    if(action != nullptr)
    {
        children["action"] = action;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "broadcast" || name == "action")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::Broadcast::Broadcast()
    :
    level(std::make_shared<Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::Broadcast::Level>())
{
    level->parent = this;

    yang_name = "broadcast"; yang_parent_name = "storm-control"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::Broadcast::~Broadcast()
{
}

bool Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::Broadcast::has_data() const
{
    return (level !=  nullptr && level->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::Broadcast::has_operation() const
{
    return is_set(yfilter)
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::Broadcast::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/DMP_INTERFACE_TEMPLATE/storm-control/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::Broadcast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::Broadcast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::Broadcast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::Broadcast::Level>();
        }
        return level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::Broadcast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(level != nullptr)
    {
        children["level"] = level;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::Broadcast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::Broadcast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::Broadcast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::Broadcast::Level::Level()
    :
    threshold{YType::str, "threshold"}
    	,
    pps(std::make_shared<Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps>())
	,bps(std::make_shared<Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps>())
{
    pps->parent = this;
    bps->parent = this;

    yang_name = "level"; yang_parent_name = "broadcast"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::Broadcast::Level::~Level()
{
}

bool Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::Broadcast::Level::has_data() const
{
    return threshold.is_set
	|| (pps !=  nullptr && pps->has_data())
	|| (bps !=  nullptr && bps->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::Broadcast::Level::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| (pps !=  nullptr && pps->has_operation())
	|| (bps !=  nullptr && bps->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::Broadcast::Level::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/DMP_INTERFACE_TEMPLATE/storm-control/broadcast/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::Broadcast::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::Broadcast::Level::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::Broadcast::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pps")
    {
        if(pps == nullptr)
        {
            pps = std::make_shared<Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps>();
        }
        return pps;
    }

    if(child_yang_name == "bps")
    {
        if(bps == nullptr)
        {
            bps = std::make_shared<Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps>();
        }
        return bps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::Broadcast::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pps != nullptr)
    {
        children["pps"] = pps;
    }

    if(bps != nullptr)
    {
        children["bps"] = bps;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::Broadcast::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::Broadcast::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::Broadcast::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pps" || name == "bps" || name == "threshold")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::Pps()
    :
    threshold{YType::str, "threshold"}
{

    yang_name = "pps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::~Pps()
{
}

bool Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::has_data() const
{
    return threshold.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/DMP_INTERFACE_TEMPLATE/storm-control/broadcast/level/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::Bps()
    :
    threshold{YType::str, "threshold"},
    b_unit{YType::str, "b-unit"}
{

    yang_name = "bps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::~Bps()
{
}

bool Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::has_data() const
{
    return threshold.is_set
	|| b_unit.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(b_unit.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/DMP_INTERFACE_TEMPLATE/storm-control/broadcast/level/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (b_unit.is_set || is_set(b_unit.yfilter)) leaf_name_data.push_back(b_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "b-unit")
    {
        b_unit = value;
        b_unit.value_namespace = name_space;
        b_unit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "b-unit")
    {
        b_unit.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "b-unit")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::Action::Action()
    :
    shutdown{YType::empty, "shutdown"},
    trap{YType::empty, "trap"}
{

    yang_name = "action"; yang_parent_name = "storm-control"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::Action::~Action()
{
}

bool Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::Action::has_data() const
{
    return shutdown.is_set
	|| trap.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::Action::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(trap.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::Action::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/DMP_INTERFACE_TEMPLATE/storm-control/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::Action::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (trap.is_set || is_set(trap.yfilter)) leaf_name_data.push_back(trap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trap")
    {
        trap = value;
        trap.value_namespace = name_space;
        trap.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "trap")
    {
        trap.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::StormControl::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "shutdown" || name == "trap")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Ip::Ip()
    :
    dhcp(std::make_shared<Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Ip::Dhcp>())
{
    dhcp->parent = this;

    yang_name = "ip"; yang_parent_name = "DMP_INTERFACE_TEMPLATE"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Ip::~Ip()
{
}

bool Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Ip::has_data() const
{
    return (dhcp !=  nullptr && dhcp->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (dhcp !=  nullptr && dhcp->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Ip::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/DMP_INTERFACE_TEMPLATE/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Ip::Dhcp>();
        }
        return dhcp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dhcp != nullptr)
    {
        children["dhcp"] = dhcp;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dhcp")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Ip::Dhcp::Dhcp()
    :
    snooping(std::make_shared<Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Ip::Dhcp::Snooping>())
{
    snooping->parent = this;

    yang_name = "dhcp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Ip::Dhcp::~Dhcp()
{
}

bool Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Ip::Dhcp::has_data() const
{
    return (snooping !=  nullptr && snooping->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Ip::Dhcp::has_operation() const
{
    return is_set(yfilter)
	|| (snooping !=  nullptr && snooping->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Ip::Dhcp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/DMP_INTERFACE_TEMPLATE/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Ip::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Ip::Dhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Ip::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "snooping")
    {
        if(snooping == nullptr)
        {
            snooping = std::make_shared<Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Ip::Dhcp::Snooping>();
        }
        return snooping;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Ip::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(snooping != nullptr)
    {
        children["snooping"] = snooping;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Ip::Dhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Ip::Dhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Ip::Dhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snooping")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Ip::Dhcp::Snooping::Snooping()
    :
    limit(std::make_shared<Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit>())
{
    limit->parent = this;

    yang_name = "snooping"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Ip::Dhcp::Snooping::~Snooping()
{
}

bool Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Ip::Dhcp::Snooping::has_data() const
{
    return (limit !=  nullptr && limit->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Ip::Dhcp::Snooping::has_operation() const
{
    return is_set(yfilter)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Ip::Dhcp::Snooping::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/DMP_INTERFACE_TEMPLATE/ip/dhcp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Ip::Dhcp::Snooping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snooping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Ip::Dhcp::Snooping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Ip::Dhcp::Snooping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit>();
        }
        return limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Ip::Dhcp::Snooping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Ip::Dhcp::Snooping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Ip::Dhcp::Snooping::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Ip::Dhcp::Snooping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::Limit()
    :
    rate{YType::uint16, "rate"}
{

    yang_name = "limit"; yang_parent_name = "snooping"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::~Limit()
{
}

bool Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::has_data() const
{
    return rate.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rate.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/DMP_INTERFACE_TEMPLATE/ip/dhcp/snooping/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rate.is_set || is_set(rate.yfilter)) leaf_name_data.push_back(rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rate")
    {
        rate = value;
        rate.value_namespace = name_space;
        rate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rate")
    {
        rate.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::IPPHONEINTERFACETEMPLATE()
    :
    load_interval{YType::uint16, "load-interval"}
    	,
    service_policy(std::make_shared<Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::ServicePolicy>())
	,switchport(std::make_shared<Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport>())
	,spanning_tree(nullptr) // presence node
	,storm_control(std::make_shared<Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl>())
	,ip(std::make_shared<Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Ip>())
{
    service_policy->parent = this;
    switchport->parent = this;
    storm_control->parent = this;
    ip->parent = this;

    yang_name = "IP_PHONE_INTERFACE_TEMPLATE"; yang_parent_name = "Cisco-IOS-XE-switch_template"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::~IPPHONEINTERFACETEMPLATE()
{
}

bool Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::has_data() const
{
    return load_interval.is_set
	|| (service_policy !=  nullptr && service_policy->has_data())
	|| (switchport !=  nullptr && switchport->has_data())
	|| (spanning_tree !=  nullptr && spanning_tree->has_data())
	|| (storm_control !=  nullptr && storm_control->has_data())
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(load_interval.yfilter)
	|| (service_policy !=  nullptr && service_policy->has_operation())
	|| (switchport !=  nullptr && switchport->has_operation())
	|| (spanning_tree !=  nullptr && spanning_tree->has_operation())
	|| (storm_control !=  nullptr && storm_control->has_operation())
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IP_PHONE_INTERFACE_TEMPLATE";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (load_interval.is_set || is_set(load_interval.yfilter)) leaf_name_data.push_back(load_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy")
    {
        if(service_policy == nullptr)
        {
            service_policy = std::make_shared<Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::ServicePolicy>();
        }
        return service_policy;
    }

    if(child_yang_name == "switchport")
    {
        if(switchport == nullptr)
        {
            switchport = std::make_shared<Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport>();
        }
        return switchport;
    }

    if(child_yang_name == "spanning-tree")
    {
        if(spanning_tree == nullptr)
        {
            spanning_tree = std::make_shared<Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::SpanningTree>();
        }
        return spanning_tree;
    }

    if(child_yang_name == "storm-control")
    {
        if(storm_control == nullptr)
        {
            storm_control = std::make_shared<Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl>();
        }
        return storm_control;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(service_policy != nullptr)
    {
        children["service-policy"] = service_policy;
    }

    if(switchport != nullptr)
    {
        children["switchport"] = switchport;
    }

    if(spanning_tree != nullptr)
    {
        children["spanning-tree"] = spanning_tree;
    }

    if(storm_control != nullptr)
    {
        children["storm-control"] = storm_control;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "load-interval")
    {
        load_interval = value;
        load_interval.value_namespace = name_space;
        load_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "load-interval")
    {
        load_interval.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy" || name == "switchport" || name == "spanning-tree" || name == "storm-control" || name == "ip" || name == "load-interval")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::ServicePolicy::ServicePolicy()
    :
    input(std::make_shared<Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::ServicePolicy::Input>())
	,output(std::make_shared<Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::ServicePolicy::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "service-policy"; yang_parent_name = "IP_PHONE_INTERFACE_TEMPLATE"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::ServicePolicy::~ServicePolicy()
{
}

bool Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::ServicePolicy::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::ServicePolicy::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::ServicePolicy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/IP_PHONE_INTERFACE_TEMPLATE/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::ServicePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::ServicePolicy::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::ServicePolicy::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    if(output != nullptr)
    {
        children["output"] = output;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::ServicePolicy::Input::Input()
    :
    policy_map_name{YType::str, "policy-map-name"}
{

    yang_name = "input"; yang_parent_name = "service-policy"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::ServicePolicy::Input::~Input()
{
}

bool Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::ServicePolicy::Input::has_data() const
{
    return policy_map_name.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::ServicePolicy::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_map_name.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::ServicePolicy::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/IP_PHONE_INTERFACE_TEMPLATE/service-policy/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::ServicePolicy::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::ServicePolicy::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_map_name.is_set || is_set(policy_map_name.yfilter)) leaf_name_data.push_back(policy_map_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::ServicePolicy::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::ServicePolicy::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::ServicePolicy::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name = value;
        policy_map_name.value_namespace = name_space;
        policy_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::ServicePolicy::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::ServicePolicy::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-map-name")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::ServicePolicy::Output::Output()
    :
    policy_map_name{YType::str, "policy-map-name"}
{

    yang_name = "output"; yang_parent_name = "service-policy"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::ServicePolicy::Output::~Output()
{
}

bool Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::ServicePolicy::Output::has_data() const
{
    return policy_map_name.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::ServicePolicy::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_map_name.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::ServicePolicy::Output::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/IP_PHONE_INTERFACE_TEMPLATE/service-policy/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::ServicePolicy::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::ServicePolicy::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_map_name.is_set || is_set(policy_map_name.yfilter)) leaf_name_data.push_back(policy_map_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::ServicePolicy::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::ServicePolicy::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::ServicePolicy::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name = value;
        policy_map_name.value_namespace = name_space;
        policy_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::ServicePolicy::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::ServicePolicy::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-map-name")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::Switchport()
    :
    nonegotiate{YType::empty, "nonegotiate"}
    	,
    mode(std::make_shared<Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::Mode>())
	,block(std::make_shared<Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::Block>())
	,port_security(nullptr) // presence node
	,access(std::make_shared<Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::Access>())
	,voice(std::make_shared<Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::Voice>())
{
    mode->parent = this;
    block->parent = this;
    access->parent = this;
    voice->parent = this;

    yang_name = "switchport"; yang_parent_name = "IP_PHONE_INTERFACE_TEMPLATE"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::~Switchport()
{
}

bool Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::has_data() const
{
    return nonegotiate.is_set
	|| (mode !=  nullptr && mode->has_data())
	|| (block !=  nullptr && block->has_data())
	|| (port_security !=  nullptr && port_security->has_data())
	|| (access !=  nullptr && access->has_data())
	|| (voice !=  nullptr && voice->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nonegotiate.yfilter)
	|| (mode !=  nullptr && mode->has_operation())
	|| (block !=  nullptr && block->has_operation())
	|| (port_security !=  nullptr && port_security->has_operation())
	|| (access !=  nullptr && access->has_operation())
	|| (voice !=  nullptr && voice->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/IP_PHONE_INTERFACE_TEMPLATE/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switchport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nonegotiate.is_set || is_set(nonegotiate.yfilter)) leaf_name_data.push_back(nonegotiate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::Mode>();
        }
        return mode;
    }

    if(child_yang_name == "block")
    {
        if(block == nullptr)
        {
            block = std::make_shared<Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::Block>();
        }
        return block;
    }

    if(child_yang_name == "port-security")
    {
        if(port_security == nullptr)
        {
            port_security = std::make_shared<Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity>();
        }
        return port_security;
    }

    if(child_yang_name == "access")
    {
        if(access == nullptr)
        {
            access = std::make_shared<Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::Access>();
        }
        return access;
    }

    if(child_yang_name == "voice")
    {
        if(voice == nullptr)
        {
            voice = std::make_shared<Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::Voice>();
        }
        return voice;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mode != nullptr)
    {
        children["mode"] = mode;
    }

    if(block != nullptr)
    {
        children["block"] = block;
    }

    if(port_security != nullptr)
    {
        children["port-security"] = port_security;
    }

    if(access != nullptr)
    {
        children["access"] = access;
    }

    if(voice != nullptr)
    {
        children["voice"] = voice;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nonegotiate")
    {
        nonegotiate = value;
        nonegotiate.value_namespace = name_space;
        nonegotiate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nonegotiate")
    {
        nonegotiate.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode" || name == "block" || name == "port-security" || name == "access" || name == "voice" || name == "nonegotiate")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::Mode::Mode()
    :
    trunk{YType::empty, "trunk"},
    access{YType::empty, "access"}
{

    yang_name = "mode"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::Mode::~Mode()
{
}

bool Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::Mode::has_data() const
{
    return trunk.is_set
	|| access.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::Mode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trunk.yfilter)
	|| ydk::is_set(access.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::Mode::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/IP_PHONE_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trunk.is_set || is_set(trunk.yfilter)) leaf_name_data.push_back(trunk.get_name_leafdata());
    if (access.is_set || is_set(access.yfilter)) leaf_name_data.push_back(access.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trunk")
    {
        trunk = value;
        trunk.value_namespace = name_space;
        trunk.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access")
    {
        access = value;
        access.value_namespace = name_space;
        access.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trunk")
    {
        trunk.yfilter = yfilter;
    }
    if(value_path == "access")
    {
        access.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trunk" || name == "access")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::Block::Block()
    :
    unicast{YType::empty, "unicast"}
{

    yang_name = "block"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::Block::~Block()
{
}

bool Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::Block::has_data() const
{
    return unicast.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::Block::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unicast.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::Block::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/IP_PHONE_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::Block::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "block";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::Block::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unicast.is_set || is_set(unicast.yfilter)) leaf_name_data.push_back(unicast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::Block::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::Block::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::Block::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unicast")
    {
        unicast = value;
        unicast.value_namespace = name_space;
        unicast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::Block::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unicast")
    {
        unicast.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::Block::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unicast")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::PortSecurity()
    :
    aging(std::make_shared<Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Aging>())
	,maximum(std::make_shared<Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Maximum>())
	,violation(std::make_shared<Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Violation>())
{
    aging->parent = this;
    maximum->parent = this;
    violation->parent = this;

    yang_name = "port-security"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::~PortSecurity()
{
}

bool Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::has_data() const
{
    return (aging !=  nullptr && aging->has_data())
	|| (maximum !=  nullptr && maximum->has_data())
	|| (violation !=  nullptr && violation->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::has_operation() const
{
    return is_set(yfilter)
	|| (aging !=  nullptr && aging->has_operation())
	|| (maximum !=  nullptr && maximum->has_operation())
	|| (violation !=  nullptr && violation->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/IP_PHONE_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-security";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aging")
    {
        if(aging == nullptr)
        {
            aging = std::make_shared<Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Aging>();
        }
        return aging;
    }

    if(child_yang_name == "maximum")
    {
        if(maximum == nullptr)
        {
            maximum = std::make_shared<Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Maximum>();
        }
        return maximum;
    }

    if(child_yang_name == "violation")
    {
        if(violation == nullptr)
        {
            violation = std::make_shared<Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Violation>();
        }
        return violation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aging != nullptr)
    {
        children["aging"] = aging;
    }

    if(maximum != nullptr)
    {
        children["maximum"] = maximum;
    }

    if(violation != nullptr)
    {
        children["violation"] = violation;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aging" || name == "maximum" || name == "violation")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Aging()
    :
    static_{YType::empty, "static"},
    time{YType::uint16, "time"}
    	,
    type(nullptr) // presence node
{

    yang_name = "aging"; yang_parent_name = "port-security"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Aging::~Aging()
{
}

bool Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Aging::has_data() const
{
    return static_.is_set
	|| time.is_set
	|| (type !=  nullptr && type->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Aging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(static_.yfilter)
	|| ydk::is_set(time.yfilter)
	|| (type !=  nullptr && type->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Aging::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/IP_PHONE_INTERFACE_TEMPLATE/switchport/port-security/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Aging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Aging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (static_.is_set || is_set(static_.yfilter)) leaf_name_data.push_back(static_.get_name_leafdata());
    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Aging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "type")
    {
        if(type == nullptr)
        {
            type = std::make_shared<Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type>();
        }
        return type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Aging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(type != nullptr)
    {
        children["type"] = type;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Aging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "static")
    {
        static_ = value;
        static_.value_namespace = name_space;
        static_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Aging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "static")
    {
        static_.yfilter = yfilter;
    }
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Aging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "static" || name == "time")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::Type()
    :
    inactivity{YType::empty, "inactivity"}
{

    yang_name = "type"; yang_parent_name = "aging"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::~Type()
{
}

bool Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::has_data() const
{
    return inactivity.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inactivity.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/IP_PHONE_INTERFACE_TEMPLATE/switchport/port-security/aging/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inactivity.is_set || is_set(inactivity.yfilter)) leaf_name_data.push_back(inactivity.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inactivity")
    {
        inactivity = value;
        inactivity.value_namespace = name_space;
        inactivity.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inactivity")
    {
        inactivity.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inactivity")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Maximum()
{

    yang_name = "maximum"; yang_parent_name = "port-security"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::~Maximum()
{
}

bool Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::has_data() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::has_operation() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/IP_PHONE_INTERFACE_TEMPLATE/switchport/port-security/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        for(auto const & c : range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range>();
        c->parent = this;
        range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Range()
    :
    range{YType::uint16, "range"}
    	,
    vlan(nullptr) // presence node
{

    yang_name = "range"; yang_parent_name = "maximum"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::~Range()
{
}

bool Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::has_data() const
{
    return range.is_set
	|| (vlan !=  nullptr && vlan->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/IP_PHONE_INTERFACE_TEMPLATE/switchport/port-security/maximum/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range" <<"[range='" <<range <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vlan != nullptr)
    {
        children["vlan"] = vlan;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan" || name == "range")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::Vlan()
    :
    access{YType::empty, "access"}
{

    yang_name = "vlan"; yang_parent_name = "range"; is_top_level_class = false; has_list_ancestor = true;
}

Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::~Vlan()
{
}

bool Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::has_data() const
{
    return access.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access.is_set || is_set(access.yfilter)) leaf_name_data.push_back(access.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access")
    {
        access = value;
        access.value_namespace = name_space;
        access.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access")
    {
        access.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Violation::Violation()
    :
    restrict{YType::empty, "restrict"},
    shutdown{YType::empty, "shutdown"}
{

    yang_name = "violation"; yang_parent_name = "port-security"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Violation::~Violation()
{
}

bool Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Violation::has_data() const
{
    return restrict.is_set
	|| shutdown.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Violation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(restrict.yfilter)
	|| ydk::is_set(shutdown.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Violation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/IP_PHONE_INTERFACE_TEMPLATE/switchport/port-security/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Violation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Violation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (restrict.is_set || is_set(restrict.yfilter)) leaf_name_data.push_back(restrict.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Violation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Violation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Violation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "restrict")
    {
        restrict = value;
        restrict.value_namespace = name_space;
        restrict.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Violation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "restrict")
    {
        restrict.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::PortSecurity::Violation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "restrict" || name == "shutdown")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::Access::Access()
    :
    vlan{YType::uint16, "vlan"}
{

    yang_name = "access"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::Access::~Access()
{
}

bool Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::Access::has_data() const
{
    return vlan.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::Access::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::Access::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/IP_PHONE_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::Access::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::Access::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::Access::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::Access::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::Access::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::Access::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::Access::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::Voice::Voice()
    :
    vlan{YType::uint16, "vlan"}
{

    yang_name = "voice"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::Voice::~Voice()
{
}

bool Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::Voice::has_data() const
{
    return vlan.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::Voice::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::Voice::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/IP_PHONE_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::Voice::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "voice";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::Voice::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::Voice::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::Voice::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::Voice::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::Voice::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Switchport::Voice::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::SpanningTree::SpanningTree()
    :
    service_policy{YType::empty, "service-policy"}
    	,
    bpduguard(std::make_shared<Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::SpanningTree::Bpduguard>())
	,portfast(std::make_shared<Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::SpanningTree::Portfast>())
{
    bpduguard->parent = this;
    portfast->parent = this;

    yang_name = "spanning-tree"; yang_parent_name = "IP_PHONE_INTERFACE_TEMPLATE"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::SpanningTree::~SpanningTree()
{
}

bool Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::SpanningTree::has_data() const
{
    return service_policy.is_set
	|| (bpduguard !=  nullptr && bpduguard->has_data())
	|| (portfast !=  nullptr && portfast->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::SpanningTree::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_policy.yfilter)
	|| (bpduguard !=  nullptr && bpduguard->has_operation())
	|| (portfast !=  nullptr && portfast->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::SpanningTree::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/IP_PHONE_INTERFACE_TEMPLATE/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::SpanningTree::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spanning-tree";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::SpanningTree::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy.is_set || is_set(service_policy.yfilter)) leaf_name_data.push_back(service_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::SpanningTree::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bpduguard")
    {
        if(bpduguard == nullptr)
        {
            bpduguard = std::make_shared<Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::SpanningTree::Bpduguard>();
        }
        return bpduguard;
    }

    if(child_yang_name == "portfast")
    {
        if(portfast == nullptr)
        {
            portfast = std::make_shared<Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::SpanningTree::Portfast>();
        }
        return portfast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::SpanningTree::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bpduguard != nullptr)
    {
        children["bpduguard"] = bpduguard;
    }

    if(portfast != nullptr)
    {
        children["portfast"] = portfast;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::SpanningTree::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-policy")
    {
        service_policy = value;
        service_policy.value_namespace = name_space;
        service_policy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::SpanningTree::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-policy")
    {
        service_policy.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::SpanningTree::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bpduguard" || name == "portfast" || name == "service-policy")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::SpanningTree::Bpduguard::Bpduguard()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "bpduguard"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::SpanningTree::Bpduguard::~Bpduguard()
{
}

bool Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::SpanningTree::Bpduguard::has_data() const
{
    return enable.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::SpanningTree::Bpduguard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::SpanningTree::Bpduguard::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/IP_PHONE_INTERFACE_TEMPLATE/spanning-tree/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::SpanningTree::Bpduguard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bpduguard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::SpanningTree::Bpduguard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::SpanningTree::Bpduguard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::SpanningTree::Bpduguard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::SpanningTree::Bpduguard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::SpanningTree::Bpduguard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::SpanningTree::Bpduguard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::SpanningTree::Portfast::Portfast()
    :
    disable{YType::empty, "disable"},
    edge{YType::empty, "edge"},
    network{YType::empty, "network"}
{

    yang_name = "portfast"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::SpanningTree::Portfast::~Portfast()
{
}

bool Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::SpanningTree::Portfast::has_data() const
{
    return disable.is_set
	|| edge.is_set
	|| network.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::SpanningTree::Portfast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(edge.yfilter)
	|| ydk::is_set(network.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::SpanningTree::Portfast::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/IP_PHONE_INTERFACE_TEMPLATE/spanning-tree/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::SpanningTree::Portfast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "portfast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::SpanningTree::Portfast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (edge.is_set || is_set(edge.yfilter)) leaf_name_data.push_back(edge.get_name_leafdata());
    if (network.is_set || is_set(network.yfilter)) leaf_name_data.push_back(network.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::SpanningTree::Portfast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::SpanningTree::Portfast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::SpanningTree::Portfast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "edge")
    {
        edge = value;
        edge.value_namespace = name_space;
        edge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network")
    {
        network = value;
        network.value_namespace = name_space;
        network.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::SpanningTree::Portfast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "edge")
    {
        edge.yfilter = yfilter;
    }
    if(value_path == "network")
    {
        network.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::SpanningTree::Portfast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "edge" || name == "network")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::StormControl()
    :
    broadcast(std::make_shared<Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::Broadcast>())
	,action(std::make_shared<Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::Action>())
{
    broadcast->parent = this;
    action->parent = this;

    yang_name = "storm-control"; yang_parent_name = "IP_PHONE_INTERFACE_TEMPLATE"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::~StormControl()
{
}

bool Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::has_data() const
{
    return (broadcast !=  nullptr && broadcast->has_data())
	|| (action !=  nullptr && action->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::has_operation() const
{
    return is_set(yfilter)
	|| (broadcast !=  nullptr && broadcast->has_operation())
	|| (action !=  nullptr && action->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/IP_PHONE_INTERFACE_TEMPLATE/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "storm-control";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "broadcast")
    {
        if(broadcast == nullptr)
        {
            broadcast = std::make_shared<Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::Broadcast>();
        }
        return broadcast;
    }

    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::Action>();
        }
        return action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(broadcast != nullptr)
    {
        children["broadcast"] = broadcast;
    }

    if(action != nullptr)
    {
        children["action"] = action;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "broadcast" || name == "action")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::Broadcast::Broadcast()
    :
    level(std::make_shared<Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::Broadcast::Level>())
{
    level->parent = this;

    yang_name = "broadcast"; yang_parent_name = "storm-control"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::Broadcast::~Broadcast()
{
}

bool Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::Broadcast::has_data() const
{
    return (level !=  nullptr && level->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::Broadcast::has_operation() const
{
    return is_set(yfilter)
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::Broadcast::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/IP_PHONE_INTERFACE_TEMPLATE/storm-control/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::Broadcast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::Broadcast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::Broadcast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::Broadcast::Level>();
        }
        return level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::Broadcast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(level != nullptr)
    {
        children["level"] = level;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::Broadcast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::Broadcast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::Broadcast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::Broadcast::Level::Level()
    :
    threshold{YType::str, "threshold"}
    	,
    pps(std::make_shared<Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps>())
	,bps(std::make_shared<Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps>())
{
    pps->parent = this;
    bps->parent = this;

    yang_name = "level"; yang_parent_name = "broadcast"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::Broadcast::Level::~Level()
{
}

bool Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::Broadcast::Level::has_data() const
{
    return threshold.is_set
	|| (pps !=  nullptr && pps->has_data())
	|| (bps !=  nullptr && bps->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::Broadcast::Level::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| (pps !=  nullptr && pps->has_operation())
	|| (bps !=  nullptr && bps->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::Broadcast::Level::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/IP_PHONE_INTERFACE_TEMPLATE/storm-control/broadcast/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::Broadcast::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::Broadcast::Level::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::Broadcast::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pps")
    {
        if(pps == nullptr)
        {
            pps = std::make_shared<Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps>();
        }
        return pps;
    }

    if(child_yang_name == "bps")
    {
        if(bps == nullptr)
        {
            bps = std::make_shared<Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps>();
        }
        return bps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::Broadcast::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pps != nullptr)
    {
        children["pps"] = pps;
    }

    if(bps != nullptr)
    {
        children["bps"] = bps;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::Broadcast::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::Broadcast::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::Broadcast::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pps" || name == "bps" || name == "threshold")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::Pps()
    :
    threshold{YType::str, "threshold"}
{

    yang_name = "pps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::~Pps()
{
}

bool Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::has_data() const
{
    return threshold.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/IP_PHONE_INTERFACE_TEMPLATE/storm-control/broadcast/level/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::Bps()
    :
    threshold{YType::str, "threshold"},
    b_unit{YType::str, "b-unit"}
{

    yang_name = "bps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::~Bps()
{
}

bool Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::has_data() const
{
    return threshold.is_set
	|| b_unit.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(b_unit.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/IP_PHONE_INTERFACE_TEMPLATE/storm-control/broadcast/level/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (b_unit.is_set || is_set(b_unit.yfilter)) leaf_name_data.push_back(b_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "b-unit")
    {
        b_unit = value;
        b_unit.value_namespace = name_space;
        b_unit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "b-unit")
    {
        b_unit.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "b-unit")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::Action::Action()
    :
    shutdown{YType::empty, "shutdown"},
    trap{YType::empty, "trap"}
{

    yang_name = "action"; yang_parent_name = "storm-control"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::Action::~Action()
{
}

bool Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::Action::has_data() const
{
    return shutdown.is_set
	|| trap.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::Action::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(trap.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::Action::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/IP_PHONE_INTERFACE_TEMPLATE/storm-control/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::Action::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (trap.is_set || is_set(trap.yfilter)) leaf_name_data.push_back(trap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trap")
    {
        trap = value;
        trap.value_namespace = name_space;
        trap.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "trap")
    {
        trap.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::StormControl::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "shutdown" || name == "trap")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Ip::Ip()
    :
    dhcp(std::make_shared<Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Ip::Dhcp>())
{
    dhcp->parent = this;

    yang_name = "ip"; yang_parent_name = "IP_PHONE_INTERFACE_TEMPLATE"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Ip::~Ip()
{
}

bool Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Ip::has_data() const
{
    return (dhcp !=  nullptr && dhcp->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (dhcp !=  nullptr && dhcp->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Ip::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/IP_PHONE_INTERFACE_TEMPLATE/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Ip::Dhcp>();
        }
        return dhcp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dhcp != nullptr)
    {
        children["dhcp"] = dhcp;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dhcp")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Ip::Dhcp::Dhcp()
    :
    snooping(std::make_shared<Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Ip::Dhcp::Snooping>())
{
    snooping->parent = this;

    yang_name = "dhcp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Ip::Dhcp::~Dhcp()
{
}

bool Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Ip::Dhcp::has_data() const
{
    return (snooping !=  nullptr && snooping->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Ip::Dhcp::has_operation() const
{
    return is_set(yfilter)
	|| (snooping !=  nullptr && snooping->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Ip::Dhcp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/IP_PHONE_INTERFACE_TEMPLATE/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Ip::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Ip::Dhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Ip::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "snooping")
    {
        if(snooping == nullptr)
        {
            snooping = std::make_shared<Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Ip::Dhcp::Snooping>();
        }
        return snooping;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Ip::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(snooping != nullptr)
    {
        children["snooping"] = snooping;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Ip::Dhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Ip::Dhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Ip::Dhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snooping")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Ip::Dhcp::Snooping::Snooping()
    :
    limit(std::make_shared<Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit>())
{
    limit->parent = this;

    yang_name = "snooping"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Ip::Dhcp::Snooping::~Snooping()
{
}

bool Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Ip::Dhcp::Snooping::has_data() const
{
    return (limit !=  nullptr && limit->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Ip::Dhcp::Snooping::has_operation() const
{
    return is_set(yfilter)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Ip::Dhcp::Snooping::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/IP_PHONE_INTERFACE_TEMPLATE/ip/dhcp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Ip::Dhcp::Snooping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snooping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Ip::Dhcp::Snooping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Ip::Dhcp::Snooping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit>();
        }
        return limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Ip::Dhcp::Snooping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Ip::Dhcp::Snooping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Ip::Dhcp::Snooping::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Ip::Dhcp::Snooping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::Limit()
    :
    rate{YType::uint16, "rate"}
{

    yang_name = "limit"; yang_parent_name = "snooping"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::~Limit()
{
}

bool Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::has_data() const
{
    return rate.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rate.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/IP_PHONE_INTERFACE_TEMPLATE/ip/dhcp/snooping/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rate.is_set || is_set(rate.yfilter)) leaf_name_data.push_back(rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rate")
    {
        rate = value;
        rate.value_namespace = name_space;
        rate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rate")
    {
        rate.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::MSPCAMERAINTERFACETEMPLATE()
    :
    load_interval{YType::uint16, "load-interval"}
    	,
    service_policy(std::make_shared<Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::ServicePolicy>())
	,switchport(std::make_shared<Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport>())
	,spanning_tree(nullptr) // presence node
	,storm_control(std::make_shared<Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl>())
	,ip(std::make_shared<Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Ip>())
{
    service_policy->parent = this;
    switchport->parent = this;
    storm_control->parent = this;
    ip->parent = this;

    yang_name = "MSP_CAMERA_INTERFACE_TEMPLATE"; yang_parent_name = "Cisco-IOS-XE-switch_template"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::~MSPCAMERAINTERFACETEMPLATE()
{
}

bool Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::has_data() const
{
    return load_interval.is_set
	|| (service_policy !=  nullptr && service_policy->has_data())
	|| (switchport !=  nullptr && switchport->has_data())
	|| (spanning_tree !=  nullptr && spanning_tree->has_data())
	|| (storm_control !=  nullptr && storm_control->has_data())
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(load_interval.yfilter)
	|| (service_policy !=  nullptr && service_policy->has_operation())
	|| (switchport !=  nullptr && switchport->has_operation())
	|| (spanning_tree !=  nullptr && spanning_tree->has_operation())
	|| (storm_control !=  nullptr && storm_control->has_operation())
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MSP_CAMERA_INTERFACE_TEMPLATE";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (load_interval.is_set || is_set(load_interval.yfilter)) leaf_name_data.push_back(load_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy")
    {
        if(service_policy == nullptr)
        {
            service_policy = std::make_shared<Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::ServicePolicy>();
        }
        return service_policy;
    }

    if(child_yang_name == "switchport")
    {
        if(switchport == nullptr)
        {
            switchport = std::make_shared<Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport>();
        }
        return switchport;
    }

    if(child_yang_name == "spanning-tree")
    {
        if(spanning_tree == nullptr)
        {
            spanning_tree = std::make_shared<Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::SpanningTree>();
        }
        return spanning_tree;
    }

    if(child_yang_name == "storm-control")
    {
        if(storm_control == nullptr)
        {
            storm_control = std::make_shared<Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl>();
        }
        return storm_control;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(service_policy != nullptr)
    {
        children["service-policy"] = service_policy;
    }

    if(switchport != nullptr)
    {
        children["switchport"] = switchport;
    }

    if(spanning_tree != nullptr)
    {
        children["spanning-tree"] = spanning_tree;
    }

    if(storm_control != nullptr)
    {
        children["storm-control"] = storm_control;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "load-interval")
    {
        load_interval = value;
        load_interval.value_namespace = name_space;
        load_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "load-interval")
    {
        load_interval.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy" || name == "switchport" || name == "spanning-tree" || name == "storm-control" || name == "ip" || name == "load-interval")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::ServicePolicy::ServicePolicy()
    :
    input(std::make_shared<Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::ServicePolicy::Input>())
	,output(std::make_shared<Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::ServicePolicy::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "service-policy"; yang_parent_name = "MSP_CAMERA_INTERFACE_TEMPLATE"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::ServicePolicy::~ServicePolicy()
{
}

bool Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::ServicePolicy::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::ServicePolicy::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::ServicePolicy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_CAMERA_INTERFACE_TEMPLATE/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::ServicePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::ServicePolicy::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::ServicePolicy::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    if(output != nullptr)
    {
        children["output"] = output;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::ServicePolicy::Input::Input()
    :
    policy_map_name{YType::str, "policy-map-name"}
{

    yang_name = "input"; yang_parent_name = "service-policy"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::ServicePolicy::Input::~Input()
{
}

bool Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::ServicePolicy::Input::has_data() const
{
    return policy_map_name.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::ServicePolicy::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_map_name.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::ServicePolicy::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_CAMERA_INTERFACE_TEMPLATE/service-policy/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::ServicePolicy::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::ServicePolicy::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_map_name.is_set || is_set(policy_map_name.yfilter)) leaf_name_data.push_back(policy_map_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::ServicePolicy::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::ServicePolicy::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::ServicePolicy::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name = value;
        policy_map_name.value_namespace = name_space;
        policy_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::ServicePolicy::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::ServicePolicy::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-map-name")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::ServicePolicy::Output::Output()
    :
    policy_map_name{YType::str, "policy-map-name"}
{

    yang_name = "output"; yang_parent_name = "service-policy"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::ServicePolicy::Output::~Output()
{
}

bool Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::ServicePolicy::Output::has_data() const
{
    return policy_map_name.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::ServicePolicy::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_map_name.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::ServicePolicy::Output::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_CAMERA_INTERFACE_TEMPLATE/service-policy/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::ServicePolicy::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::ServicePolicy::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_map_name.is_set || is_set(policy_map_name.yfilter)) leaf_name_data.push_back(policy_map_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::ServicePolicy::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::ServicePolicy::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::ServicePolicy::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name = value;
        policy_map_name.value_namespace = name_space;
        policy_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::ServicePolicy::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::ServicePolicy::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-map-name")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::Switchport()
    :
    nonegotiate{YType::empty, "nonegotiate"}
    	,
    mode(std::make_shared<Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::Mode>())
	,block(std::make_shared<Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::Block>())
	,port_security(nullptr) // presence node
	,access(std::make_shared<Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::Access>())
	,voice(std::make_shared<Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::Voice>())
{
    mode->parent = this;
    block->parent = this;
    access->parent = this;
    voice->parent = this;

    yang_name = "switchport"; yang_parent_name = "MSP_CAMERA_INTERFACE_TEMPLATE"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::~Switchport()
{
}

bool Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::has_data() const
{
    return nonegotiate.is_set
	|| (mode !=  nullptr && mode->has_data())
	|| (block !=  nullptr && block->has_data())
	|| (port_security !=  nullptr && port_security->has_data())
	|| (access !=  nullptr && access->has_data())
	|| (voice !=  nullptr && voice->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nonegotiate.yfilter)
	|| (mode !=  nullptr && mode->has_operation())
	|| (block !=  nullptr && block->has_operation())
	|| (port_security !=  nullptr && port_security->has_operation())
	|| (access !=  nullptr && access->has_operation())
	|| (voice !=  nullptr && voice->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_CAMERA_INTERFACE_TEMPLATE/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switchport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nonegotiate.is_set || is_set(nonegotiate.yfilter)) leaf_name_data.push_back(nonegotiate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::Mode>();
        }
        return mode;
    }

    if(child_yang_name == "block")
    {
        if(block == nullptr)
        {
            block = std::make_shared<Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::Block>();
        }
        return block;
    }

    if(child_yang_name == "port-security")
    {
        if(port_security == nullptr)
        {
            port_security = std::make_shared<Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity>();
        }
        return port_security;
    }

    if(child_yang_name == "access")
    {
        if(access == nullptr)
        {
            access = std::make_shared<Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::Access>();
        }
        return access;
    }

    if(child_yang_name == "voice")
    {
        if(voice == nullptr)
        {
            voice = std::make_shared<Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::Voice>();
        }
        return voice;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mode != nullptr)
    {
        children["mode"] = mode;
    }

    if(block != nullptr)
    {
        children["block"] = block;
    }

    if(port_security != nullptr)
    {
        children["port-security"] = port_security;
    }

    if(access != nullptr)
    {
        children["access"] = access;
    }

    if(voice != nullptr)
    {
        children["voice"] = voice;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nonegotiate")
    {
        nonegotiate = value;
        nonegotiate.value_namespace = name_space;
        nonegotiate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nonegotiate")
    {
        nonegotiate.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode" || name == "block" || name == "port-security" || name == "access" || name == "voice" || name == "nonegotiate")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::Mode::Mode()
    :
    trunk{YType::empty, "trunk"},
    access{YType::empty, "access"}
{

    yang_name = "mode"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::Mode::~Mode()
{
}

bool Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::Mode::has_data() const
{
    return trunk.is_set
	|| access.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::Mode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trunk.yfilter)
	|| ydk::is_set(access.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::Mode::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_CAMERA_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trunk.is_set || is_set(trunk.yfilter)) leaf_name_data.push_back(trunk.get_name_leafdata());
    if (access.is_set || is_set(access.yfilter)) leaf_name_data.push_back(access.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trunk")
    {
        trunk = value;
        trunk.value_namespace = name_space;
        trunk.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access")
    {
        access = value;
        access.value_namespace = name_space;
        access.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trunk")
    {
        trunk.yfilter = yfilter;
    }
    if(value_path == "access")
    {
        access.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trunk" || name == "access")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::Block::Block()
    :
    unicast{YType::empty, "unicast"}
{

    yang_name = "block"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::Block::~Block()
{
}

bool Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::Block::has_data() const
{
    return unicast.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::Block::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unicast.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::Block::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_CAMERA_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::Block::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "block";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::Block::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unicast.is_set || is_set(unicast.yfilter)) leaf_name_data.push_back(unicast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::Block::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::Block::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::Block::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unicast")
    {
        unicast = value;
        unicast.value_namespace = name_space;
        unicast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::Block::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unicast")
    {
        unicast.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::Block::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unicast")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::PortSecurity()
    :
    aging(std::make_shared<Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging>())
	,maximum(std::make_shared<Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum>())
	,violation(std::make_shared<Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Violation>())
{
    aging->parent = this;
    maximum->parent = this;
    violation->parent = this;

    yang_name = "port-security"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::~PortSecurity()
{
}

bool Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::has_data() const
{
    return (aging !=  nullptr && aging->has_data())
	|| (maximum !=  nullptr && maximum->has_data())
	|| (violation !=  nullptr && violation->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::has_operation() const
{
    return is_set(yfilter)
	|| (aging !=  nullptr && aging->has_operation())
	|| (maximum !=  nullptr && maximum->has_operation())
	|| (violation !=  nullptr && violation->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_CAMERA_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-security";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aging")
    {
        if(aging == nullptr)
        {
            aging = std::make_shared<Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging>();
        }
        return aging;
    }

    if(child_yang_name == "maximum")
    {
        if(maximum == nullptr)
        {
            maximum = std::make_shared<Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum>();
        }
        return maximum;
    }

    if(child_yang_name == "violation")
    {
        if(violation == nullptr)
        {
            violation = std::make_shared<Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Violation>();
        }
        return violation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aging != nullptr)
    {
        children["aging"] = aging;
    }

    if(maximum != nullptr)
    {
        children["maximum"] = maximum;
    }

    if(violation != nullptr)
    {
        children["violation"] = violation;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aging" || name == "maximum" || name == "violation")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Aging()
    :
    static_{YType::empty, "static"},
    time{YType::uint16, "time"}
    	,
    type(nullptr) // presence node
{

    yang_name = "aging"; yang_parent_name = "port-security"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging::~Aging()
{
}

bool Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging::has_data() const
{
    return static_.is_set
	|| time.is_set
	|| (type !=  nullptr && type->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(static_.yfilter)
	|| ydk::is_set(time.yfilter)
	|| (type !=  nullptr && type->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_CAMERA_INTERFACE_TEMPLATE/switchport/port-security/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (static_.is_set || is_set(static_.yfilter)) leaf_name_data.push_back(static_.get_name_leafdata());
    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "type")
    {
        if(type == nullptr)
        {
            type = std::make_shared<Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type>();
        }
        return type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(type != nullptr)
    {
        children["type"] = type;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "static")
    {
        static_ = value;
        static_.value_namespace = name_space;
        static_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "static")
    {
        static_.yfilter = yfilter;
    }
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "static" || name == "time")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::Type()
    :
    inactivity{YType::empty, "inactivity"}
{

    yang_name = "type"; yang_parent_name = "aging"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::~Type()
{
}

bool Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::has_data() const
{
    return inactivity.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inactivity.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_CAMERA_INTERFACE_TEMPLATE/switchport/port-security/aging/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inactivity.is_set || is_set(inactivity.yfilter)) leaf_name_data.push_back(inactivity.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inactivity")
    {
        inactivity = value;
        inactivity.value_namespace = name_space;
        inactivity.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inactivity")
    {
        inactivity.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inactivity")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Maximum()
{

    yang_name = "maximum"; yang_parent_name = "port-security"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::~Maximum()
{
}

bool Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::has_data() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::has_operation() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_CAMERA_INTERFACE_TEMPLATE/switchport/port-security/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        for(auto const & c : range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range>();
        c->parent = this;
        range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Range()
    :
    range{YType::uint16, "range"}
    	,
    vlan(nullptr) // presence node
{

    yang_name = "range"; yang_parent_name = "maximum"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::~Range()
{
}

bool Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::has_data() const
{
    return range.is_set
	|| (vlan !=  nullptr && vlan->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_CAMERA_INTERFACE_TEMPLATE/switchport/port-security/maximum/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range" <<"[range='" <<range <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vlan != nullptr)
    {
        children["vlan"] = vlan;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan" || name == "range")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::Vlan()
    :
    access{YType::empty, "access"}
{

    yang_name = "vlan"; yang_parent_name = "range"; is_top_level_class = false; has_list_ancestor = true;
}

Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::~Vlan()
{
}

bool Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::has_data() const
{
    return access.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access.is_set || is_set(access.yfilter)) leaf_name_data.push_back(access.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access")
    {
        access = value;
        access.value_namespace = name_space;
        access.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access")
    {
        access.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Violation::Violation()
    :
    restrict{YType::empty, "restrict"},
    shutdown{YType::empty, "shutdown"}
{

    yang_name = "violation"; yang_parent_name = "port-security"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Violation::~Violation()
{
}

bool Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Violation::has_data() const
{
    return restrict.is_set
	|| shutdown.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Violation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(restrict.yfilter)
	|| ydk::is_set(shutdown.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Violation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_CAMERA_INTERFACE_TEMPLATE/switchport/port-security/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Violation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Violation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (restrict.is_set || is_set(restrict.yfilter)) leaf_name_data.push_back(restrict.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Violation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Violation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Violation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "restrict")
    {
        restrict = value;
        restrict.value_namespace = name_space;
        restrict.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Violation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "restrict")
    {
        restrict.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Violation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "restrict" || name == "shutdown")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::Access::Access()
    :
    vlan{YType::uint16, "vlan"}
{

    yang_name = "access"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::Access::~Access()
{
}

bool Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::Access::has_data() const
{
    return vlan.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::Access::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::Access::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_CAMERA_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::Access::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::Access::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::Access::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::Access::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::Access::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::Access::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::Access::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::Voice::Voice()
    :
    vlan{YType::uint16, "vlan"}
{

    yang_name = "voice"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::Voice::~Voice()
{
}

bool Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::Voice::has_data() const
{
    return vlan.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::Voice::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::Voice::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_CAMERA_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::Voice::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "voice";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::Voice::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::Voice::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::Voice::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::Voice::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::Voice::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Switchport::Voice::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::SpanningTree::SpanningTree()
    :
    service_policy{YType::empty, "service-policy"}
    	,
    bpduguard(std::make_shared<Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::SpanningTree::Bpduguard>())
	,portfast(std::make_shared<Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::SpanningTree::Portfast>())
{
    bpduguard->parent = this;
    portfast->parent = this;

    yang_name = "spanning-tree"; yang_parent_name = "MSP_CAMERA_INTERFACE_TEMPLATE"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::SpanningTree::~SpanningTree()
{
}

bool Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::SpanningTree::has_data() const
{
    return service_policy.is_set
	|| (bpduguard !=  nullptr && bpduguard->has_data())
	|| (portfast !=  nullptr && portfast->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::SpanningTree::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_policy.yfilter)
	|| (bpduguard !=  nullptr && bpduguard->has_operation())
	|| (portfast !=  nullptr && portfast->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::SpanningTree::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_CAMERA_INTERFACE_TEMPLATE/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::SpanningTree::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spanning-tree";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::SpanningTree::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy.is_set || is_set(service_policy.yfilter)) leaf_name_data.push_back(service_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::SpanningTree::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bpduguard")
    {
        if(bpduguard == nullptr)
        {
            bpduguard = std::make_shared<Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::SpanningTree::Bpduguard>();
        }
        return bpduguard;
    }

    if(child_yang_name == "portfast")
    {
        if(portfast == nullptr)
        {
            portfast = std::make_shared<Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::SpanningTree::Portfast>();
        }
        return portfast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::SpanningTree::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bpduguard != nullptr)
    {
        children["bpduguard"] = bpduguard;
    }

    if(portfast != nullptr)
    {
        children["portfast"] = portfast;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::SpanningTree::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-policy")
    {
        service_policy = value;
        service_policy.value_namespace = name_space;
        service_policy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::SpanningTree::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-policy")
    {
        service_policy.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::SpanningTree::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bpduguard" || name == "portfast" || name == "service-policy")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::SpanningTree::Bpduguard::Bpduguard()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "bpduguard"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::SpanningTree::Bpduguard::~Bpduguard()
{
}

bool Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::SpanningTree::Bpduguard::has_data() const
{
    return enable.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::SpanningTree::Bpduguard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::SpanningTree::Bpduguard::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_CAMERA_INTERFACE_TEMPLATE/spanning-tree/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::SpanningTree::Bpduguard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bpduguard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::SpanningTree::Bpduguard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::SpanningTree::Bpduguard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::SpanningTree::Bpduguard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::SpanningTree::Bpduguard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::SpanningTree::Bpduguard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::SpanningTree::Bpduguard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::SpanningTree::Portfast::Portfast()
    :
    disable{YType::empty, "disable"},
    edge{YType::empty, "edge"},
    network{YType::empty, "network"}
{

    yang_name = "portfast"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::SpanningTree::Portfast::~Portfast()
{
}

bool Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::SpanningTree::Portfast::has_data() const
{
    return disable.is_set
	|| edge.is_set
	|| network.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::SpanningTree::Portfast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(edge.yfilter)
	|| ydk::is_set(network.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::SpanningTree::Portfast::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_CAMERA_INTERFACE_TEMPLATE/spanning-tree/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::SpanningTree::Portfast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "portfast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::SpanningTree::Portfast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (edge.is_set || is_set(edge.yfilter)) leaf_name_data.push_back(edge.get_name_leafdata());
    if (network.is_set || is_set(network.yfilter)) leaf_name_data.push_back(network.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::SpanningTree::Portfast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::SpanningTree::Portfast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::SpanningTree::Portfast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "edge")
    {
        edge = value;
        edge.value_namespace = name_space;
        edge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network")
    {
        network = value;
        network.value_namespace = name_space;
        network.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::SpanningTree::Portfast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "edge")
    {
        edge.yfilter = yfilter;
    }
    if(value_path == "network")
    {
        network.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::SpanningTree::Portfast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "edge" || name == "network")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::StormControl()
    :
    broadcast(std::make_shared<Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Broadcast>())
	,action(std::make_shared<Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Action>())
{
    broadcast->parent = this;
    action->parent = this;

    yang_name = "storm-control"; yang_parent_name = "MSP_CAMERA_INTERFACE_TEMPLATE"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::~StormControl()
{
}

bool Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::has_data() const
{
    return (broadcast !=  nullptr && broadcast->has_data())
	|| (action !=  nullptr && action->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::has_operation() const
{
    return is_set(yfilter)
	|| (broadcast !=  nullptr && broadcast->has_operation())
	|| (action !=  nullptr && action->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_CAMERA_INTERFACE_TEMPLATE/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "storm-control";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "broadcast")
    {
        if(broadcast == nullptr)
        {
            broadcast = std::make_shared<Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Broadcast>();
        }
        return broadcast;
    }

    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Action>();
        }
        return action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(broadcast != nullptr)
    {
        children["broadcast"] = broadcast;
    }

    if(action != nullptr)
    {
        children["action"] = action;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "broadcast" || name == "action")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Broadcast()
    :
    level(std::make_shared<Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level>())
{
    level->parent = this;

    yang_name = "broadcast"; yang_parent_name = "storm-control"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::~Broadcast()
{
}

bool Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::has_data() const
{
    return (level !=  nullptr && level->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::has_operation() const
{
    return is_set(yfilter)
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_CAMERA_INTERFACE_TEMPLATE/storm-control/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level>();
        }
        return level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(level != nullptr)
    {
        children["level"] = level;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Level()
    :
    threshold{YType::str, "threshold"}
    	,
    pps(std::make_shared<Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps>())
	,bps(std::make_shared<Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps>())
{
    pps->parent = this;
    bps->parent = this;

    yang_name = "level"; yang_parent_name = "broadcast"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::~Level()
{
}

bool Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::has_data() const
{
    return threshold.is_set
	|| (pps !=  nullptr && pps->has_data())
	|| (bps !=  nullptr && bps->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| (pps !=  nullptr && pps->has_operation())
	|| (bps !=  nullptr && bps->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_CAMERA_INTERFACE_TEMPLATE/storm-control/broadcast/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pps")
    {
        if(pps == nullptr)
        {
            pps = std::make_shared<Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps>();
        }
        return pps;
    }

    if(child_yang_name == "bps")
    {
        if(bps == nullptr)
        {
            bps = std::make_shared<Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps>();
        }
        return bps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pps != nullptr)
    {
        children["pps"] = pps;
    }

    if(bps != nullptr)
    {
        children["bps"] = bps;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pps" || name == "bps" || name == "threshold")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::Pps()
    :
    threshold{YType::str, "threshold"}
{

    yang_name = "pps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::~Pps()
{
}

bool Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::has_data() const
{
    return threshold.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_CAMERA_INTERFACE_TEMPLATE/storm-control/broadcast/level/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::Bps()
    :
    threshold{YType::str, "threshold"},
    b_unit{YType::str, "b-unit"}
{

    yang_name = "bps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::~Bps()
{
}

bool Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::has_data() const
{
    return threshold.is_set
	|| b_unit.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(b_unit.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_CAMERA_INTERFACE_TEMPLATE/storm-control/broadcast/level/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (b_unit.is_set || is_set(b_unit.yfilter)) leaf_name_data.push_back(b_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "b-unit")
    {
        b_unit = value;
        b_unit.value_namespace = name_space;
        b_unit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "b-unit")
    {
        b_unit.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "b-unit")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Action::Action()
    :
    shutdown{YType::empty, "shutdown"},
    trap{YType::empty, "trap"}
{

    yang_name = "action"; yang_parent_name = "storm-control"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Action::~Action()
{
}

bool Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Action::has_data() const
{
    return shutdown.is_set
	|| trap.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Action::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(trap.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Action::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_CAMERA_INTERFACE_TEMPLATE/storm-control/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Action::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (trap.is_set || is_set(trap.yfilter)) leaf_name_data.push_back(trap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trap")
    {
        trap = value;
        trap.value_namespace = name_space;
        trap.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "trap")
    {
        trap.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::StormControl::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "shutdown" || name == "trap")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Ip::Ip()
    :
    dhcp(std::make_shared<Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Ip::Dhcp>())
{
    dhcp->parent = this;

    yang_name = "ip"; yang_parent_name = "MSP_CAMERA_INTERFACE_TEMPLATE"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Ip::~Ip()
{
}

bool Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Ip::has_data() const
{
    return (dhcp !=  nullptr && dhcp->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (dhcp !=  nullptr && dhcp->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Ip::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_CAMERA_INTERFACE_TEMPLATE/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Ip::Dhcp>();
        }
        return dhcp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dhcp != nullptr)
    {
        children["dhcp"] = dhcp;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dhcp")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Dhcp()
    :
    snooping(std::make_shared<Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping>())
{
    snooping->parent = this;

    yang_name = "dhcp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Ip::Dhcp::~Dhcp()
{
}

bool Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Ip::Dhcp::has_data() const
{
    return (snooping !=  nullptr && snooping->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Ip::Dhcp::has_operation() const
{
    return is_set(yfilter)
	|| (snooping !=  nullptr && snooping->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Ip::Dhcp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_CAMERA_INTERFACE_TEMPLATE/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Ip::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Ip::Dhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Ip::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "snooping")
    {
        if(snooping == nullptr)
        {
            snooping = std::make_shared<Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping>();
        }
        return snooping;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Ip::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(snooping != nullptr)
    {
        children["snooping"] = snooping;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Ip::Dhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Ip::Dhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Ip::Dhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snooping")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping::Snooping()
    :
    limit(std::make_shared<Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit>())
{
    limit->parent = this;

    yang_name = "snooping"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping::~Snooping()
{
}

bool Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping::has_data() const
{
    return (limit !=  nullptr && limit->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping::has_operation() const
{
    return is_set(yfilter)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_CAMERA_INTERFACE_TEMPLATE/ip/dhcp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snooping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit>();
        }
        return limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::Limit()
    :
    rate{YType::uint16, "rate"}
{

    yang_name = "limit"; yang_parent_name = "snooping"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::~Limit()
{
}

bool Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::has_data() const
{
    return rate.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rate.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_CAMERA_INTERFACE_TEMPLATE/ip/dhcp/snooping/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rate.is_set || is_set(rate.yfilter)) leaf_name_data.push_back(rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rate")
    {
        rate = value;
        rate.value_namespace = name_space;
        rate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rate")
    {
        rate.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::MSPVCINTERFACETEMPLATE()
    :
    load_interval{YType::uint16, "load-interval"}
    	,
    service_policy(std::make_shared<Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::ServicePolicy>())
	,switchport(std::make_shared<Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport>())
	,spanning_tree(nullptr) // presence node
	,storm_control(std::make_shared<Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::StormControl>())
	,ip(std::make_shared<Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Ip>())
{
    service_policy->parent = this;
    switchport->parent = this;
    storm_control->parent = this;
    ip->parent = this;

    yang_name = "MSP_VC_INTERFACE_TEMPLATE"; yang_parent_name = "Cisco-IOS-XE-switch_template"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::~MSPVCINTERFACETEMPLATE()
{
}

bool Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::has_data() const
{
    return load_interval.is_set
	|| (service_policy !=  nullptr && service_policy->has_data())
	|| (switchport !=  nullptr && switchport->has_data())
	|| (spanning_tree !=  nullptr && spanning_tree->has_data())
	|| (storm_control !=  nullptr && storm_control->has_data())
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(load_interval.yfilter)
	|| (service_policy !=  nullptr && service_policy->has_operation())
	|| (switchport !=  nullptr && switchport->has_operation())
	|| (spanning_tree !=  nullptr && spanning_tree->has_operation())
	|| (storm_control !=  nullptr && storm_control->has_operation())
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MSP_VC_INTERFACE_TEMPLATE";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (load_interval.is_set || is_set(load_interval.yfilter)) leaf_name_data.push_back(load_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy")
    {
        if(service_policy == nullptr)
        {
            service_policy = std::make_shared<Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::ServicePolicy>();
        }
        return service_policy;
    }

    if(child_yang_name == "switchport")
    {
        if(switchport == nullptr)
        {
            switchport = std::make_shared<Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport>();
        }
        return switchport;
    }

    if(child_yang_name == "spanning-tree")
    {
        if(spanning_tree == nullptr)
        {
            spanning_tree = std::make_shared<Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::SpanningTree>();
        }
        return spanning_tree;
    }

    if(child_yang_name == "storm-control")
    {
        if(storm_control == nullptr)
        {
            storm_control = std::make_shared<Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::StormControl>();
        }
        return storm_control;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(service_policy != nullptr)
    {
        children["service-policy"] = service_policy;
    }

    if(switchport != nullptr)
    {
        children["switchport"] = switchport;
    }

    if(spanning_tree != nullptr)
    {
        children["spanning-tree"] = spanning_tree;
    }

    if(storm_control != nullptr)
    {
        children["storm-control"] = storm_control;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "load-interval")
    {
        load_interval = value;
        load_interval.value_namespace = name_space;
        load_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "load-interval")
    {
        load_interval.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy" || name == "switchport" || name == "spanning-tree" || name == "storm-control" || name == "ip" || name == "load-interval")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::ServicePolicy::ServicePolicy()
    :
    input(std::make_shared<Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::ServicePolicy::Input>())
	,output(std::make_shared<Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::ServicePolicy::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "service-policy"; yang_parent_name = "MSP_VC_INTERFACE_TEMPLATE"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::ServicePolicy::~ServicePolicy()
{
}

bool Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::ServicePolicy::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::ServicePolicy::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::ServicePolicy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_VC_INTERFACE_TEMPLATE/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::ServicePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::ServicePolicy::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::ServicePolicy::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    if(output != nullptr)
    {
        children["output"] = output;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::ServicePolicy::Input::Input()
    :
    policy_map_name{YType::str, "policy-map-name"}
{

    yang_name = "input"; yang_parent_name = "service-policy"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::ServicePolicy::Input::~Input()
{
}

bool Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::ServicePolicy::Input::has_data() const
{
    return policy_map_name.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::ServicePolicy::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_map_name.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::ServicePolicy::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_VC_INTERFACE_TEMPLATE/service-policy/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::ServicePolicy::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::ServicePolicy::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_map_name.is_set || is_set(policy_map_name.yfilter)) leaf_name_data.push_back(policy_map_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::ServicePolicy::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::ServicePolicy::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::ServicePolicy::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name = value;
        policy_map_name.value_namespace = name_space;
        policy_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::ServicePolicy::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::ServicePolicy::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-map-name")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::ServicePolicy::Output::Output()
    :
    policy_map_name{YType::str, "policy-map-name"}
{

    yang_name = "output"; yang_parent_name = "service-policy"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::ServicePolicy::Output::~Output()
{
}

bool Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::ServicePolicy::Output::has_data() const
{
    return policy_map_name.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::ServicePolicy::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_map_name.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::ServicePolicy::Output::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_VC_INTERFACE_TEMPLATE/service-policy/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::ServicePolicy::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::ServicePolicy::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_map_name.is_set || is_set(policy_map_name.yfilter)) leaf_name_data.push_back(policy_map_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::ServicePolicy::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::ServicePolicy::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::ServicePolicy::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name = value;
        policy_map_name.value_namespace = name_space;
        policy_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::ServicePolicy::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::ServicePolicy::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-map-name")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::Switchport()
    :
    nonegotiate{YType::empty, "nonegotiate"}
    	,
    mode(std::make_shared<Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::Mode>())
	,block(std::make_shared<Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::Block>())
	,port_security(nullptr) // presence node
	,access(std::make_shared<Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::Access>())
	,voice(std::make_shared<Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::Voice>())
{
    mode->parent = this;
    block->parent = this;
    access->parent = this;
    voice->parent = this;

    yang_name = "switchport"; yang_parent_name = "MSP_VC_INTERFACE_TEMPLATE"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::~Switchport()
{
}

bool Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::has_data() const
{
    return nonegotiate.is_set
	|| (mode !=  nullptr && mode->has_data())
	|| (block !=  nullptr && block->has_data())
	|| (port_security !=  nullptr && port_security->has_data())
	|| (access !=  nullptr && access->has_data())
	|| (voice !=  nullptr && voice->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nonegotiate.yfilter)
	|| (mode !=  nullptr && mode->has_operation())
	|| (block !=  nullptr && block->has_operation())
	|| (port_security !=  nullptr && port_security->has_operation())
	|| (access !=  nullptr && access->has_operation())
	|| (voice !=  nullptr && voice->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_VC_INTERFACE_TEMPLATE/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switchport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nonegotiate.is_set || is_set(nonegotiate.yfilter)) leaf_name_data.push_back(nonegotiate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::Mode>();
        }
        return mode;
    }

    if(child_yang_name == "block")
    {
        if(block == nullptr)
        {
            block = std::make_shared<Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::Block>();
        }
        return block;
    }

    if(child_yang_name == "port-security")
    {
        if(port_security == nullptr)
        {
            port_security = std::make_shared<Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity>();
        }
        return port_security;
    }

    if(child_yang_name == "access")
    {
        if(access == nullptr)
        {
            access = std::make_shared<Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::Access>();
        }
        return access;
    }

    if(child_yang_name == "voice")
    {
        if(voice == nullptr)
        {
            voice = std::make_shared<Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::Voice>();
        }
        return voice;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mode != nullptr)
    {
        children["mode"] = mode;
    }

    if(block != nullptr)
    {
        children["block"] = block;
    }

    if(port_security != nullptr)
    {
        children["port-security"] = port_security;
    }

    if(access != nullptr)
    {
        children["access"] = access;
    }

    if(voice != nullptr)
    {
        children["voice"] = voice;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nonegotiate")
    {
        nonegotiate = value;
        nonegotiate.value_namespace = name_space;
        nonegotiate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nonegotiate")
    {
        nonegotiate.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode" || name == "block" || name == "port-security" || name == "access" || name == "voice" || name == "nonegotiate")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::Mode::Mode()
    :
    trunk{YType::empty, "trunk"},
    access{YType::empty, "access"}
{

    yang_name = "mode"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::Mode::~Mode()
{
}

bool Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::Mode::has_data() const
{
    return trunk.is_set
	|| access.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::Mode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trunk.yfilter)
	|| ydk::is_set(access.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::Mode::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_VC_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trunk.is_set || is_set(trunk.yfilter)) leaf_name_data.push_back(trunk.get_name_leafdata());
    if (access.is_set || is_set(access.yfilter)) leaf_name_data.push_back(access.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trunk")
    {
        trunk = value;
        trunk.value_namespace = name_space;
        trunk.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access")
    {
        access = value;
        access.value_namespace = name_space;
        access.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trunk")
    {
        trunk.yfilter = yfilter;
    }
    if(value_path == "access")
    {
        access.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trunk" || name == "access")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::Block::Block()
    :
    unicast{YType::empty, "unicast"}
{

    yang_name = "block"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::Block::~Block()
{
}

bool Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::Block::has_data() const
{
    return unicast.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::Block::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unicast.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::Block::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_VC_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::Block::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "block";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::Block::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unicast.is_set || is_set(unicast.yfilter)) leaf_name_data.push_back(unicast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::Block::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::Block::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::Block::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unicast")
    {
        unicast = value;
        unicast.value_namespace = name_space;
        unicast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::Block::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unicast")
    {
        unicast.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::Block::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unicast")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::PortSecurity()
    :
    aging(std::make_shared<Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Aging>())
	,maximum(std::make_shared<Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Maximum>())
	,violation(std::make_shared<Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Violation>())
{
    aging->parent = this;
    maximum->parent = this;
    violation->parent = this;

    yang_name = "port-security"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::~PortSecurity()
{
}

bool Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::has_data() const
{
    return (aging !=  nullptr && aging->has_data())
	|| (maximum !=  nullptr && maximum->has_data())
	|| (violation !=  nullptr && violation->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::has_operation() const
{
    return is_set(yfilter)
	|| (aging !=  nullptr && aging->has_operation())
	|| (maximum !=  nullptr && maximum->has_operation())
	|| (violation !=  nullptr && violation->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_VC_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-security";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aging")
    {
        if(aging == nullptr)
        {
            aging = std::make_shared<Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Aging>();
        }
        return aging;
    }

    if(child_yang_name == "maximum")
    {
        if(maximum == nullptr)
        {
            maximum = std::make_shared<Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Maximum>();
        }
        return maximum;
    }

    if(child_yang_name == "violation")
    {
        if(violation == nullptr)
        {
            violation = std::make_shared<Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Violation>();
        }
        return violation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aging != nullptr)
    {
        children["aging"] = aging;
    }

    if(maximum != nullptr)
    {
        children["maximum"] = maximum;
    }

    if(violation != nullptr)
    {
        children["violation"] = violation;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aging" || name == "maximum" || name == "violation")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Aging()
    :
    static_{YType::empty, "static"},
    time{YType::uint16, "time"}
    	,
    type(nullptr) // presence node
{

    yang_name = "aging"; yang_parent_name = "port-security"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Aging::~Aging()
{
}

bool Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Aging::has_data() const
{
    return static_.is_set
	|| time.is_set
	|| (type !=  nullptr && type->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Aging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(static_.yfilter)
	|| ydk::is_set(time.yfilter)
	|| (type !=  nullptr && type->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Aging::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_VC_INTERFACE_TEMPLATE/switchport/port-security/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Aging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Aging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (static_.is_set || is_set(static_.yfilter)) leaf_name_data.push_back(static_.get_name_leafdata());
    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Aging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "type")
    {
        if(type == nullptr)
        {
            type = std::make_shared<Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type>();
        }
        return type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Aging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(type != nullptr)
    {
        children["type"] = type;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Aging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "static")
    {
        static_ = value;
        static_.value_namespace = name_space;
        static_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Aging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "static")
    {
        static_.yfilter = yfilter;
    }
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Aging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "static" || name == "time")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::Type()
    :
    inactivity{YType::empty, "inactivity"}
{

    yang_name = "type"; yang_parent_name = "aging"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::~Type()
{
}

bool Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::has_data() const
{
    return inactivity.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inactivity.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_VC_INTERFACE_TEMPLATE/switchport/port-security/aging/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inactivity.is_set || is_set(inactivity.yfilter)) leaf_name_data.push_back(inactivity.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inactivity")
    {
        inactivity = value;
        inactivity.value_namespace = name_space;
        inactivity.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inactivity")
    {
        inactivity.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inactivity")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Maximum()
{

    yang_name = "maximum"; yang_parent_name = "port-security"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::~Maximum()
{
}

bool Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::has_data() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::has_operation() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_VC_INTERFACE_TEMPLATE/switchport/port-security/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        for(auto const & c : range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range>();
        c->parent = this;
        range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Range()
    :
    range{YType::uint16, "range"}
    	,
    vlan(nullptr) // presence node
{

    yang_name = "range"; yang_parent_name = "maximum"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::~Range()
{
}

bool Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::has_data() const
{
    return range.is_set
	|| (vlan !=  nullptr && vlan->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_VC_INTERFACE_TEMPLATE/switchport/port-security/maximum/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range" <<"[range='" <<range <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vlan != nullptr)
    {
        children["vlan"] = vlan;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan" || name == "range")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::Vlan()
    :
    access{YType::empty, "access"}
{

    yang_name = "vlan"; yang_parent_name = "range"; is_top_level_class = false; has_list_ancestor = true;
}

Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::~Vlan()
{
}

bool Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::has_data() const
{
    return access.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access.is_set || is_set(access.yfilter)) leaf_name_data.push_back(access.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access")
    {
        access = value;
        access.value_namespace = name_space;
        access.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access")
    {
        access.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Violation::Violation()
    :
    restrict{YType::empty, "restrict"},
    shutdown{YType::empty, "shutdown"}
{

    yang_name = "violation"; yang_parent_name = "port-security"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Violation::~Violation()
{
}

bool Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Violation::has_data() const
{
    return restrict.is_set
	|| shutdown.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Violation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(restrict.yfilter)
	|| ydk::is_set(shutdown.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Violation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_VC_INTERFACE_TEMPLATE/switchport/port-security/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Violation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Violation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (restrict.is_set || is_set(restrict.yfilter)) leaf_name_data.push_back(restrict.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Violation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Violation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Violation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "restrict")
    {
        restrict = value;
        restrict.value_namespace = name_space;
        restrict.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Violation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "restrict")
    {
        restrict.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::PortSecurity::Violation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "restrict" || name == "shutdown")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::Access::Access()
    :
    vlan{YType::uint16, "vlan"}
{

    yang_name = "access"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::Access::~Access()
{
}

bool Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::Access::has_data() const
{
    return vlan.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::Access::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::Access::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_VC_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::Access::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::Access::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::Access::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::Access::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::Access::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::Access::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::Access::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::Voice::Voice()
    :
    vlan{YType::uint16, "vlan"}
{

    yang_name = "voice"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::Voice::~Voice()
{
}

bool Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::Voice::has_data() const
{
    return vlan.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::Voice::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::Voice::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_VC_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::Voice::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "voice";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::Voice::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::Voice::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::Voice::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::Voice::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::Voice::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::Switchport::Voice::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::SpanningTree::SpanningTree()
    :
    service_policy{YType::empty, "service-policy"}
    	,
    bpduguard(std::make_shared<Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::SpanningTree::Bpduguard>())
	,portfast(std::make_shared<Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::SpanningTree::Portfast>())
{
    bpduguard->parent = this;
    portfast->parent = this;

    yang_name = "spanning-tree"; yang_parent_name = "MSP_VC_INTERFACE_TEMPLATE"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::SpanningTree::~SpanningTree()
{
}

bool Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::SpanningTree::has_data() const
{
    return service_policy.is_set
	|| (bpduguard !=  nullptr && bpduguard->has_data())
	|| (portfast !=  nullptr && portfast->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::SpanningTree::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_policy.yfilter)
	|| (bpduguard !=  nullptr && bpduguard->has_operation())
	|| (portfast !=  nullptr && portfast->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::SpanningTree::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_VC_INTERFACE_TEMPLATE/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::SpanningTree::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spanning-tree";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::SpanningTree::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy.is_set || is_set(service_policy.yfilter)) leaf_name_data.push_back(service_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::SpanningTree::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bpduguard")
    {
        if(bpduguard == nullptr)
        {
            bpduguard = std::make_shared<Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::SpanningTree::Bpduguard>();
        }
        return bpduguard;
    }

    if(child_yang_name == "portfast")
    {
        if(portfast == nullptr)
        {
            portfast = std::make_shared<Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::SpanningTree::Portfast>();
        }
        return portfast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::SpanningTree::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bpduguard != nullptr)
    {
        children["bpduguard"] = bpduguard;
    }

    if(portfast != nullptr)
    {
        children["portfast"] = portfast;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::SpanningTree::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-policy")
    {
        service_policy = value;
        service_policy.value_namespace = name_space;
        service_policy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::SpanningTree::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-policy")
    {
        service_policy.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE::SpanningTree::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bpduguard" || name == "portfast" || name == "service-policy")
        return true;
    return false;
}


}
}

