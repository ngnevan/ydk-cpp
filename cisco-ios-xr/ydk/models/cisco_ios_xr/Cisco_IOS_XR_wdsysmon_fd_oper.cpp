
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_wdsysmon_fd_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_wdsysmon_fd_oper {

SystemMonitoring::SystemMonitoring()
{

    yang_name = "system-monitoring"; yang_parent_name = "Cisco-IOS-XR-wdsysmon-fd-oper"; is_top_level_class = true; has_list_ancestor = false;
}

SystemMonitoring::~SystemMonitoring()
{
}

bool SystemMonitoring::has_data() const
{
    for (std::size_t index=0; index<cpu_utilization.size(); index++)
    {
        if(cpu_utilization[index]->has_data())
            return true;
    }
    return false;
}

bool SystemMonitoring::has_operation() const
{
    for (std::size_t index=0; index<cpu_utilization.size(); index++)
    {
        if(cpu_utilization[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SystemMonitoring::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-wdsysmon-fd-oper:system-monitoring";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SystemMonitoring::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> SystemMonitoring::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpu-utilization")
    {
        auto c = std::make_shared<SystemMonitoring::CpuUtilization>();
        c->parent = this;
        cpu_utilization.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SystemMonitoring::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : cpu_utilization)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void SystemMonitoring::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SystemMonitoring::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> SystemMonitoring::clone_ptr() const
{
    return std::make_shared<SystemMonitoring>();
}

std::string SystemMonitoring::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string SystemMonitoring::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function SystemMonitoring::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> SystemMonitoring::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool SystemMonitoring::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpu-utilization")
        return true;
    return false;
}

SystemMonitoring::CpuUtilization::CpuUtilization()
    :
    node_name{YType::str, "node-name"},
    total_cpu_one_minute{YType::uint32, "total-cpu-one-minute"},
    total_cpu_five_minute{YType::uint32, "total-cpu-five-minute"},
    total_cpu_fifteen_minute{YType::uint32, "total-cpu-fifteen-minute"}
{

    yang_name = "cpu-utilization"; yang_parent_name = "system-monitoring"; is_top_level_class = false; has_list_ancestor = false;
}

SystemMonitoring::CpuUtilization::~CpuUtilization()
{
}

bool SystemMonitoring::CpuUtilization::has_data() const
{
    for (std::size_t index=0; index<process_cpu.size(); index++)
    {
        if(process_cpu[index]->has_data())
            return true;
    }
    return node_name.is_set
	|| total_cpu_one_minute.is_set
	|| total_cpu_five_minute.is_set
	|| total_cpu_fifteen_minute.is_set;
}

bool SystemMonitoring::CpuUtilization::has_operation() const
{
    for (std::size_t index=0; index<process_cpu.size(); index++)
    {
        if(process_cpu[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(total_cpu_one_minute.yfilter)
	|| ydk::is_set(total_cpu_five_minute.yfilter)
	|| ydk::is_set(total_cpu_fifteen_minute.yfilter);
}

std::string SystemMonitoring::CpuUtilization::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-wdsysmon-fd-oper:system-monitoring/" << get_segment_path();
    return path_buffer.str();
}

std::string SystemMonitoring::CpuUtilization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpu-utilization" <<"[node-name='" <<node_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SystemMonitoring::CpuUtilization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (total_cpu_one_minute.is_set || is_set(total_cpu_one_minute.yfilter)) leaf_name_data.push_back(total_cpu_one_minute.get_name_leafdata());
    if (total_cpu_five_minute.is_set || is_set(total_cpu_five_minute.yfilter)) leaf_name_data.push_back(total_cpu_five_minute.get_name_leafdata());
    if (total_cpu_fifteen_minute.is_set || is_set(total_cpu_fifteen_minute.yfilter)) leaf_name_data.push_back(total_cpu_fifteen_minute.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> SystemMonitoring::CpuUtilization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "process-cpu")
    {
        auto c = std::make_shared<SystemMonitoring::CpuUtilization::ProcessCpu>();
        c->parent = this;
        process_cpu.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SystemMonitoring::CpuUtilization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : process_cpu)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void SystemMonitoring::CpuUtilization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-cpu-one-minute")
    {
        total_cpu_one_minute = value;
        total_cpu_one_minute.value_namespace = name_space;
        total_cpu_one_minute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-cpu-five-minute")
    {
        total_cpu_five_minute = value;
        total_cpu_five_minute.value_namespace = name_space;
        total_cpu_five_minute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-cpu-fifteen-minute")
    {
        total_cpu_fifteen_minute = value;
        total_cpu_fifteen_minute.value_namespace = name_space;
        total_cpu_fifteen_minute.value_namespace_prefix = name_space_prefix;
    }
}

void SystemMonitoring::CpuUtilization::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "total-cpu-one-minute")
    {
        total_cpu_one_minute.yfilter = yfilter;
    }
    if(value_path == "total-cpu-five-minute")
    {
        total_cpu_five_minute.yfilter = yfilter;
    }
    if(value_path == "total-cpu-fifteen-minute")
    {
        total_cpu_fifteen_minute.yfilter = yfilter;
    }
}

bool SystemMonitoring::CpuUtilization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "process-cpu" || name == "node-name" || name == "total-cpu-one-minute" || name == "total-cpu-five-minute" || name == "total-cpu-fifteen-minute")
        return true;
    return false;
}

SystemMonitoring::CpuUtilization::ProcessCpu::ProcessCpu()
    :
    process_name{YType::str, "process-name"},
    process_id{YType::uint32, "process-id"},
    process_cpu_one_minute{YType::uint32, "process-cpu-one-minute"},
    process_cpu_five_minute{YType::uint32, "process-cpu-five-minute"},
    process_cpu_fifteen_minute{YType::uint32, "process-cpu-fifteen-minute"}
{

    yang_name = "process-cpu"; yang_parent_name = "cpu-utilization"; is_top_level_class = false; has_list_ancestor = true;
}

SystemMonitoring::CpuUtilization::ProcessCpu::~ProcessCpu()
{
}

bool SystemMonitoring::CpuUtilization::ProcessCpu::has_data() const
{
    return process_name.is_set
	|| process_id.is_set
	|| process_cpu_one_minute.is_set
	|| process_cpu_five_minute.is_set
	|| process_cpu_fifteen_minute.is_set;
}

bool SystemMonitoring::CpuUtilization::ProcessCpu::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(process_name.yfilter)
	|| ydk::is_set(process_id.yfilter)
	|| ydk::is_set(process_cpu_one_minute.yfilter)
	|| ydk::is_set(process_cpu_five_minute.yfilter)
	|| ydk::is_set(process_cpu_fifteen_minute.yfilter);
}

std::string SystemMonitoring::CpuUtilization::ProcessCpu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process-cpu";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SystemMonitoring::CpuUtilization::ProcessCpu::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process_name.is_set || is_set(process_name.yfilter)) leaf_name_data.push_back(process_name.get_name_leafdata());
    if (process_id.is_set || is_set(process_id.yfilter)) leaf_name_data.push_back(process_id.get_name_leafdata());
    if (process_cpu_one_minute.is_set || is_set(process_cpu_one_minute.yfilter)) leaf_name_data.push_back(process_cpu_one_minute.get_name_leafdata());
    if (process_cpu_five_minute.is_set || is_set(process_cpu_five_minute.yfilter)) leaf_name_data.push_back(process_cpu_five_minute.get_name_leafdata());
    if (process_cpu_fifteen_minute.is_set || is_set(process_cpu_fifteen_minute.yfilter)) leaf_name_data.push_back(process_cpu_fifteen_minute.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> SystemMonitoring::CpuUtilization::ProcessCpu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SystemMonitoring::CpuUtilization::ProcessCpu::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void SystemMonitoring::CpuUtilization::ProcessCpu::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "process-name")
    {
        process_name = value;
        process_name.value_namespace = name_space;
        process_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-id")
    {
        process_id = value;
        process_id.value_namespace = name_space;
        process_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-cpu-one-minute")
    {
        process_cpu_one_minute = value;
        process_cpu_one_minute.value_namespace = name_space;
        process_cpu_one_minute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-cpu-five-minute")
    {
        process_cpu_five_minute = value;
        process_cpu_five_minute.value_namespace = name_space;
        process_cpu_five_minute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-cpu-fifteen-minute")
    {
        process_cpu_fifteen_minute = value;
        process_cpu_fifteen_minute.value_namespace = name_space;
        process_cpu_fifteen_minute.value_namespace_prefix = name_space_prefix;
    }
}

void SystemMonitoring::CpuUtilization::ProcessCpu::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "process-name")
    {
        process_name.yfilter = yfilter;
    }
    if(value_path == "process-id")
    {
        process_id.yfilter = yfilter;
    }
    if(value_path == "process-cpu-one-minute")
    {
        process_cpu_one_minute.yfilter = yfilter;
    }
    if(value_path == "process-cpu-five-minute")
    {
        process_cpu_five_minute.yfilter = yfilter;
    }
    if(value_path == "process-cpu-fifteen-minute")
    {
        process_cpu_fifteen_minute.yfilter = yfilter;
    }
}

bool SystemMonitoring::CpuUtilization::ProcessCpu::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "process-name" || name == "process-id" || name == "process-cpu-one-minute" || name == "process-cpu-five-minute" || name == "process-cpu-fifteen-minute")
        return true;
    return false;
}


}
}

