
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ncs4k_freqsync_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ncs4k_freqsync_oper {

FrequencySynchronization::FrequencySynchronization()
    :
    nodes(std::make_shared<FrequencySynchronization::Nodes>())
	,summary(std::make_shared<FrequencySynchronization::Summary>())
	,global_nodes(std::make_shared<FrequencySynchronization::GlobalNodes>())
	,interfaces(std::make_shared<FrequencySynchronization::Interfaces>())
	,clock_interface_selection_forward_traces(std::make_shared<FrequencySynchronization::ClockInterfaceSelectionForwardTraces>())
	,clock_interface_selection_back_traces(std::make_shared<FrequencySynchronization::ClockInterfaceSelectionBackTraces>())
	,global_interfaces(std::make_shared<FrequencySynchronization::GlobalInterfaces>())
	,clocks(std::make_shared<FrequencySynchronization::Clocks>())
{
    nodes->parent = this;
    summary->parent = this;
    global_nodes->parent = this;
    interfaces->parent = this;
    clock_interface_selection_forward_traces->parent = this;
    clock_interface_selection_back_traces->parent = this;
    global_interfaces->parent = this;
    clocks->parent = this;

    yang_name = "frequency-synchronization"; yang_parent_name = "Cisco-IOS-XR-ncs4k-freqsync-oper"; is_top_level_class = true; has_list_ancestor = false;
}

FrequencySynchronization::~FrequencySynchronization()
{
}

bool FrequencySynchronization::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data())
	|| (summary !=  nullptr && summary->has_data())
	|| (global_nodes !=  nullptr && global_nodes->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (clock_interface_selection_forward_traces !=  nullptr && clock_interface_selection_forward_traces->has_data())
	|| (clock_interface_selection_back_traces !=  nullptr && clock_interface_selection_back_traces->has_data())
	|| (global_interfaces !=  nullptr && global_interfaces->has_data())
	|| (clocks !=  nullptr && clocks->has_data());
}

bool FrequencySynchronization::has_operation() const
{
    return is_set(yfilter)
	|| (nodes !=  nullptr && nodes->has_operation())
	|| (summary !=  nullptr && summary->has_operation())
	|| (global_nodes !=  nullptr && global_nodes->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (clock_interface_selection_forward_traces !=  nullptr && clock_interface_selection_forward_traces->has_operation())
	|| (clock_interface_selection_back_traces !=  nullptr && clock_interface_selection_back_traces->has_operation())
	|| (global_interfaces !=  nullptr && global_interfaces->has_operation())
	|| (clocks !=  nullptr && clocks->has_operation());
}

std::string FrequencySynchronization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ncs4k-freqsync-oper:frequency-synchronization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<FrequencySynchronization::Nodes>();
        }
        return nodes;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<FrequencySynchronization::Summary>();
        }
        return summary;
    }

    if(child_yang_name == "global-nodes")
    {
        if(global_nodes == nullptr)
        {
            global_nodes = std::make_shared<FrequencySynchronization::GlobalNodes>();
        }
        return global_nodes;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<FrequencySynchronization::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "clock-interface-selection-forward-traces")
    {
        if(clock_interface_selection_forward_traces == nullptr)
        {
            clock_interface_selection_forward_traces = std::make_shared<FrequencySynchronization::ClockInterfaceSelectionForwardTraces>();
        }
        return clock_interface_selection_forward_traces;
    }

    if(child_yang_name == "clock-interface-selection-back-traces")
    {
        if(clock_interface_selection_back_traces == nullptr)
        {
            clock_interface_selection_back_traces = std::make_shared<FrequencySynchronization::ClockInterfaceSelectionBackTraces>();
        }
        return clock_interface_selection_back_traces;
    }

    if(child_yang_name == "global-interfaces")
    {
        if(global_interfaces == nullptr)
        {
            global_interfaces = std::make_shared<FrequencySynchronization::GlobalInterfaces>();
        }
        return global_interfaces;
    }

    if(child_yang_name == "clocks")
    {
        if(clocks == nullptr)
        {
            clocks = std::make_shared<FrequencySynchronization::Clocks>();
        }
        return clocks;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    if(global_nodes != nullptr)
    {
        children["global-nodes"] = global_nodes;
    }

    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    if(clock_interface_selection_forward_traces != nullptr)
    {
        children["clock-interface-selection-forward-traces"] = clock_interface_selection_forward_traces;
    }

    if(clock_interface_selection_back_traces != nullptr)
    {
        children["clock-interface-selection-back-traces"] = clock_interface_selection_back_traces;
    }

    if(global_interfaces != nullptr)
    {
        children["global-interfaces"] = global_interfaces;
    }

    if(clocks != nullptr)
    {
        children["clocks"] = clocks;
    }

    return children;
}

void FrequencySynchronization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void FrequencySynchronization::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> FrequencySynchronization::clone_ptr() const
{
    return std::make_shared<FrequencySynchronization>();
}

std::string FrequencySynchronization::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string FrequencySynchronization::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function FrequencySynchronization::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> FrequencySynchronization::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool FrequencySynchronization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes" || name == "summary" || name == "global-nodes" || name == "interfaces" || name == "clock-interface-selection-forward-traces" || name == "clock-interface-selection-back-traces" || name == "global-interfaces" || name == "clocks")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Nodes()
{

    yang_name = "nodes"; yang_parent_name = "frequency-synchronization"; is_top_level_class = false; has_list_ancestor = false;
}

FrequencySynchronization::Nodes::~Nodes()
{
}

bool FrequencySynchronization::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool FrequencySynchronization::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string FrequencySynchronization::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ncs4k-freqsync-oper:frequency-synchronization/" << get_segment_path();
    return path_buffer.str();
}

std::string FrequencySynchronization::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        for(auto const & c : node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<FrequencySynchronization::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void FrequencySynchronization::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void FrequencySynchronization::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool FrequencySynchronization::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::Node()
    :
    node{YType::str, "node"}
    	,
    selection_points(std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPoints>())
	,ptp(std::make_shared<FrequencySynchronization::Nodes::Node::Ptp>())
	,selection_point_inputs(std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPointInputs>())
	,ntp(std::make_shared<FrequencySynchronization::Nodes::Node::Ntp>())
	,configuration_errors(std::make_shared<FrequencySynchronization::Nodes::Node::ConfigurationErrors>())
	,ssm_summary(std::make_shared<FrequencySynchronization::Nodes::Node::SsmSummary>())
{
    selection_points->parent = this;
    ptp->parent = this;
    selection_point_inputs->parent = this;
    ntp->parent = this;
    configuration_errors->parent = this;
    ssm_summary->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false;
}

FrequencySynchronization::Nodes::Node::~Node()
{
}

bool FrequencySynchronization::Nodes::Node::has_data() const
{
    return node.is_set
	|| (selection_points !=  nullptr && selection_points->has_data())
	|| (ptp !=  nullptr && ptp->has_data())
	|| (selection_point_inputs !=  nullptr && selection_point_inputs->has_data())
	|| (ntp !=  nullptr && ntp->has_data())
	|| (configuration_errors !=  nullptr && configuration_errors->has_data())
	|| (ssm_summary !=  nullptr && ssm_summary->has_data());
}

bool FrequencySynchronization::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter)
	|| (selection_points !=  nullptr && selection_points->has_operation())
	|| (ptp !=  nullptr && ptp->has_operation())
	|| (selection_point_inputs !=  nullptr && selection_point_inputs->has_operation())
	|| (ntp !=  nullptr && ntp->has_operation())
	|| (configuration_errors !=  nullptr && configuration_errors->has_operation())
	|| (ssm_summary !=  nullptr && ssm_summary->has_operation());
}

std::string FrequencySynchronization::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ncs4k-freqsync-oper:frequency-synchronization/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string FrequencySynchronization::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node='" <<node <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "selection-points")
    {
        if(selection_points == nullptr)
        {
            selection_points = std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPoints>();
        }
        return selection_points;
    }

    if(child_yang_name == "ptp")
    {
        if(ptp == nullptr)
        {
            ptp = std::make_shared<FrequencySynchronization::Nodes::Node::Ptp>();
        }
        return ptp;
    }

    if(child_yang_name == "selection-point-inputs")
    {
        if(selection_point_inputs == nullptr)
        {
            selection_point_inputs = std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPointInputs>();
        }
        return selection_point_inputs;
    }

    if(child_yang_name == "ntp")
    {
        if(ntp == nullptr)
        {
            ntp = std::make_shared<FrequencySynchronization::Nodes::Node::Ntp>();
        }
        return ntp;
    }

    if(child_yang_name == "configuration-errors")
    {
        if(configuration_errors == nullptr)
        {
            configuration_errors = std::make_shared<FrequencySynchronization::Nodes::Node::ConfigurationErrors>();
        }
        return configuration_errors;
    }

    if(child_yang_name == "ssm-summary")
    {
        if(ssm_summary == nullptr)
        {
            ssm_summary = std::make_shared<FrequencySynchronization::Nodes::Node::SsmSummary>();
        }
        return ssm_summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(selection_points != nullptr)
    {
        children["selection-points"] = selection_points;
    }

    if(ptp != nullptr)
    {
        children["ptp"] = ptp;
    }

    if(selection_point_inputs != nullptr)
    {
        children["selection-point-inputs"] = selection_point_inputs;
    }

    if(ntp != nullptr)
    {
        children["ntp"] = ntp;
    }

    if(configuration_errors != nullptr)
    {
        children["configuration-errors"] = configuration_errors;
    }

    if(ssm_summary != nullptr)
    {
        children["ssm-summary"] = ssm_summary;
    }

    return children;
}

void FrequencySynchronization::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "selection-points" || name == "ptp" || name == "selection-point-inputs" || name == "ntp" || name == "configuration-errors" || name == "ssm-summary" || name == "node")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::SelectionPoints::SelectionPoints()
{

    yang_name = "selection-points"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

FrequencySynchronization::Nodes::Node::SelectionPoints::~SelectionPoints()
{
}

bool FrequencySynchronization::Nodes::Node::SelectionPoints::has_data() const
{
    for (std::size_t index=0; index<selection_point.size(); index++)
    {
        if(selection_point[index]->has_data())
            return true;
    }
    return false;
}

bool FrequencySynchronization::Nodes::Node::SelectionPoints::has_operation() const
{
    for (std::size_t index=0; index<selection_point.size(); index++)
    {
        if(selection_point[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string FrequencySynchronization::Nodes::Node::SelectionPoints::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "selection-points";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::SelectionPoints::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::SelectionPoints::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "selection-point")
    {
        for(auto const & c : selection_point)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPoints::SelectionPoint>();
        c->parent = this;
        selection_point.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::SelectionPoints::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : selection_point)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void FrequencySynchronization::Nodes::Node::SelectionPoints::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void FrequencySynchronization::Nodes::Node::SelectionPoints::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool FrequencySynchronization::Nodes::Node::SelectionPoints::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "selection-point")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::SelectionPoints::SelectionPoint::SelectionPoint()
    :
    selection_point{YType::int32, "selection-point"},
    selection_point_type{YType::uint8, "selection-point-type"},
    description{YType::str, "description"},
    inputs{YType::uint32, "inputs"},
    inputs_selected{YType::uint32, "inputs-selected"},
    time_of_day_selection{YType::boolean, "time-of-day-selection"}
    	,
    output(std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPoints::SelectionPoint::Output>())
	,last_programmed(std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPoints::SelectionPoint::LastProgrammed>())
	,last_selection(std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPoints::SelectionPoint::LastSelection>())
{
    output->parent = this;
    last_programmed->parent = this;
    last_selection->parent = this;

    yang_name = "selection-point"; yang_parent_name = "selection-points"; is_top_level_class = false; has_list_ancestor = true;
}

FrequencySynchronization::Nodes::Node::SelectionPoints::SelectionPoint::~SelectionPoint()
{
}

bool FrequencySynchronization::Nodes::Node::SelectionPoints::SelectionPoint::has_data() const
{
    return selection_point.is_set
	|| selection_point_type.is_set
	|| description.is_set
	|| inputs.is_set
	|| inputs_selected.is_set
	|| time_of_day_selection.is_set
	|| (output !=  nullptr && output->has_data())
	|| (last_programmed !=  nullptr && last_programmed->has_data())
	|| (last_selection !=  nullptr && last_selection->has_data());
}

bool FrequencySynchronization::Nodes::Node::SelectionPoints::SelectionPoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(selection_point.yfilter)
	|| ydk::is_set(selection_point_type.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(inputs.yfilter)
	|| ydk::is_set(inputs_selected.yfilter)
	|| ydk::is_set(time_of_day_selection.yfilter)
	|| (output !=  nullptr && output->has_operation())
	|| (last_programmed !=  nullptr && last_programmed->has_operation())
	|| (last_selection !=  nullptr && last_selection->has_operation());
}

std::string FrequencySynchronization::Nodes::Node::SelectionPoints::SelectionPoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "selection-point" <<"[selection-point='" <<selection_point <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::SelectionPoints::SelectionPoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (selection_point.is_set || is_set(selection_point.yfilter)) leaf_name_data.push_back(selection_point.get_name_leafdata());
    if (selection_point_type.is_set || is_set(selection_point_type.yfilter)) leaf_name_data.push_back(selection_point_type.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (inputs.is_set || is_set(inputs.yfilter)) leaf_name_data.push_back(inputs.get_name_leafdata());
    if (inputs_selected.is_set || is_set(inputs_selected.yfilter)) leaf_name_data.push_back(inputs_selected.get_name_leafdata());
    if (time_of_day_selection.is_set || is_set(time_of_day_selection.yfilter)) leaf_name_data.push_back(time_of_day_selection.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::SelectionPoints::SelectionPoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPoints::SelectionPoint::Output>();
        }
        return output;
    }

    if(child_yang_name == "last-programmed")
    {
        if(last_programmed == nullptr)
        {
            last_programmed = std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPoints::SelectionPoint::LastProgrammed>();
        }
        return last_programmed;
    }

    if(child_yang_name == "last-selection")
    {
        if(last_selection == nullptr)
        {
            last_selection = std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPoints::SelectionPoint::LastSelection>();
        }
        return last_selection;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::SelectionPoints::SelectionPoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(output != nullptr)
    {
        children["output"] = output;
    }

    if(last_programmed != nullptr)
    {
        children["last-programmed"] = last_programmed;
    }

    if(last_selection != nullptr)
    {
        children["last-selection"] = last_selection;
    }

    return children;
}

void FrequencySynchronization::Nodes::Node::SelectionPoints::SelectionPoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "selection-point")
    {
        selection_point = value;
        selection_point.value_namespace = name_space;
        selection_point.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selection-point-type")
    {
        selection_point_type = value;
        selection_point_type.value_namespace = name_space;
        selection_point_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inputs")
    {
        inputs = value;
        inputs.value_namespace = name_space;
        inputs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inputs-selected")
    {
        inputs_selected = value;
        inputs_selected.value_namespace = name_space;
        inputs_selected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-of-day-selection")
    {
        time_of_day_selection = value;
        time_of_day_selection.value_namespace = name_space;
        time_of_day_selection.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::SelectionPoints::SelectionPoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "selection-point")
    {
        selection_point.yfilter = yfilter;
    }
    if(value_path == "selection-point-type")
    {
        selection_point_type.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "inputs")
    {
        inputs.yfilter = yfilter;
    }
    if(value_path == "inputs-selected")
    {
        inputs_selected.yfilter = yfilter;
    }
    if(value_path == "time-of-day-selection")
    {
        time_of_day_selection.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::SelectionPoints::SelectionPoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "output" || name == "last-programmed" || name == "last-selection" || name == "selection-point" || name == "selection-point-type" || name == "description" || name == "inputs" || name == "inputs-selected" || name == "time-of-day-selection")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::SelectionPoints::SelectionPoint::Output::Output()
    :
    local_clock_ouput{YType::boolean, "local-clock-ouput"},
    local_line_output{YType::boolean, "local-line-output"},
    local_time_of_day_output{YType::boolean, "local-time-of-day-output"},
    spa_selection_point{YType::uint8, "spa-selection-point"},
    spa_selection_points_description{YType::str, "spa-selection-points-description"},
    node_selection_point{YType::uint8, "node-selection-point"},
    node_selection_points_description{YType::str, "node-selection-points-description"},
    chassis_selection_point{YType::uint8, "chassis-selection-point"},
    chassis_selection_points_description{YType::str, "chassis-selection-points-description"},
    router_selection_point{YType::uint8, "router-selection-point"},
    router_selection_points_description{YType::str, "router-selection-points-description"}
{

    yang_name = "output"; yang_parent_name = "selection-point"; is_top_level_class = false; has_list_ancestor = true;
}

FrequencySynchronization::Nodes::Node::SelectionPoints::SelectionPoint::Output::~Output()
{
}

bool FrequencySynchronization::Nodes::Node::SelectionPoints::SelectionPoint::Output::has_data() const
{
    for (auto const & leaf : spa_selection_point.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : spa_selection_points_description.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : node_selection_point.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : node_selection_points_description.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : chassis_selection_point.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : chassis_selection_points_description.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : router_selection_point.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : router_selection_points_description.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return local_clock_ouput.is_set
	|| local_line_output.is_set
	|| local_time_of_day_output.is_set;
}

bool FrequencySynchronization::Nodes::Node::SelectionPoints::SelectionPoint::Output::has_operation() const
{
    for (auto const & leaf : spa_selection_point.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : spa_selection_points_description.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : node_selection_point.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : node_selection_points_description.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : chassis_selection_point.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : chassis_selection_points_description.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : router_selection_point.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : router_selection_points_description.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(local_clock_ouput.yfilter)
	|| ydk::is_set(local_line_output.yfilter)
	|| ydk::is_set(local_time_of_day_output.yfilter)
	|| ydk::is_set(spa_selection_point.yfilter)
	|| ydk::is_set(spa_selection_points_description.yfilter)
	|| ydk::is_set(node_selection_point.yfilter)
	|| ydk::is_set(node_selection_points_description.yfilter)
	|| ydk::is_set(chassis_selection_point.yfilter)
	|| ydk::is_set(chassis_selection_points_description.yfilter)
	|| ydk::is_set(router_selection_point.yfilter)
	|| ydk::is_set(router_selection_points_description.yfilter);
}

std::string FrequencySynchronization::Nodes::Node::SelectionPoints::SelectionPoint::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::SelectionPoints::SelectionPoint::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_clock_ouput.is_set || is_set(local_clock_ouput.yfilter)) leaf_name_data.push_back(local_clock_ouput.get_name_leafdata());
    if (local_line_output.is_set || is_set(local_line_output.yfilter)) leaf_name_data.push_back(local_line_output.get_name_leafdata());
    if (local_time_of_day_output.is_set || is_set(local_time_of_day_output.yfilter)) leaf_name_data.push_back(local_time_of_day_output.get_name_leafdata());

    auto spa_selection_point_name_datas = spa_selection_point.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), spa_selection_point_name_datas.begin(), spa_selection_point_name_datas.end());
    auto spa_selection_points_description_name_datas = spa_selection_points_description.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), spa_selection_points_description_name_datas.begin(), spa_selection_points_description_name_datas.end());
    auto node_selection_point_name_datas = node_selection_point.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), node_selection_point_name_datas.begin(), node_selection_point_name_datas.end());
    auto node_selection_points_description_name_datas = node_selection_points_description.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), node_selection_points_description_name_datas.begin(), node_selection_points_description_name_datas.end());
    auto chassis_selection_point_name_datas = chassis_selection_point.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), chassis_selection_point_name_datas.begin(), chassis_selection_point_name_datas.end());
    auto chassis_selection_points_description_name_datas = chassis_selection_points_description.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), chassis_selection_points_description_name_datas.begin(), chassis_selection_points_description_name_datas.end());
    auto router_selection_point_name_datas = router_selection_point.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), router_selection_point_name_datas.begin(), router_selection_point_name_datas.end());
    auto router_selection_points_description_name_datas = router_selection_points_description.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), router_selection_points_description_name_datas.begin(), router_selection_points_description_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::SelectionPoints::SelectionPoint::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::SelectionPoints::SelectionPoint::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void FrequencySynchronization::Nodes::Node::SelectionPoints::SelectionPoint::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-clock-ouput")
    {
        local_clock_ouput = value;
        local_clock_ouput.value_namespace = name_space;
        local_clock_ouput.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-line-output")
    {
        local_line_output = value;
        local_line_output.value_namespace = name_space;
        local_line_output.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-time-of-day-output")
    {
        local_time_of_day_output = value;
        local_time_of_day_output.value_namespace = name_space;
        local_time_of_day_output.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spa-selection-point")
    {
        spa_selection_point.append(value);
    }
    if(value_path == "spa-selection-points-description")
    {
        spa_selection_points_description.append(value);
    }
    if(value_path == "node-selection-point")
    {
        node_selection_point.append(value);
    }
    if(value_path == "node-selection-points-description")
    {
        node_selection_points_description.append(value);
    }
    if(value_path == "chassis-selection-point")
    {
        chassis_selection_point.append(value);
    }
    if(value_path == "chassis-selection-points-description")
    {
        chassis_selection_points_description.append(value);
    }
    if(value_path == "router-selection-point")
    {
        router_selection_point.append(value);
    }
    if(value_path == "router-selection-points-description")
    {
        router_selection_points_description.append(value);
    }
}

void FrequencySynchronization::Nodes::Node::SelectionPoints::SelectionPoint::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-clock-ouput")
    {
        local_clock_ouput.yfilter = yfilter;
    }
    if(value_path == "local-line-output")
    {
        local_line_output.yfilter = yfilter;
    }
    if(value_path == "local-time-of-day-output")
    {
        local_time_of_day_output.yfilter = yfilter;
    }
    if(value_path == "spa-selection-point")
    {
        spa_selection_point.yfilter = yfilter;
    }
    if(value_path == "spa-selection-points-description")
    {
        spa_selection_points_description.yfilter = yfilter;
    }
    if(value_path == "node-selection-point")
    {
        node_selection_point.yfilter = yfilter;
    }
    if(value_path == "node-selection-points-description")
    {
        node_selection_points_description.yfilter = yfilter;
    }
    if(value_path == "chassis-selection-point")
    {
        chassis_selection_point.yfilter = yfilter;
    }
    if(value_path == "chassis-selection-points-description")
    {
        chassis_selection_points_description.yfilter = yfilter;
    }
    if(value_path == "router-selection-point")
    {
        router_selection_point.yfilter = yfilter;
    }
    if(value_path == "router-selection-points-description")
    {
        router_selection_points_description.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::SelectionPoints::SelectionPoint::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-clock-ouput" || name == "local-line-output" || name == "local-time-of-day-output" || name == "spa-selection-point" || name == "spa-selection-points-description" || name == "node-selection-point" || name == "node-selection-points-description" || name == "chassis-selection-point" || name == "chassis-selection-points-description" || name == "router-selection-point" || name == "router-selection-points-description")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::SelectionPoints::SelectionPoint::LastProgrammed::LastProgrammed()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "last-programmed"; yang_parent_name = "selection-point"; is_top_level_class = false; has_list_ancestor = true;
}

FrequencySynchronization::Nodes::Node::SelectionPoints::SelectionPoint::LastProgrammed::~LastProgrammed()
{
}

bool FrequencySynchronization::Nodes::Node::SelectionPoints::SelectionPoint::LastProgrammed::has_data() const
{
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool FrequencySynchronization::Nodes::Node::SelectionPoints::SelectionPoint::LastProgrammed::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string FrequencySynchronization::Nodes::Node::SelectionPoints::SelectionPoint::LastProgrammed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-programmed";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::SelectionPoints::SelectionPoint::LastProgrammed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::SelectionPoints::SelectionPoint::LastProgrammed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::SelectionPoints::SelectionPoint::LastProgrammed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void FrequencySynchronization::Nodes::Node::SelectionPoints::SelectionPoint::LastProgrammed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::SelectionPoints::SelectionPoint::LastProgrammed::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::SelectionPoints::SelectionPoint::LastProgrammed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::SelectionPoints::SelectionPoint::LastSelection::LastSelection()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "last-selection"; yang_parent_name = "selection-point"; is_top_level_class = false; has_list_ancestor = true;
}

FrequencySynchronization::Nodes::Node::SelectionPoints::SelectionPoint::LastSelection::~LastSelection()
{
}

bool FrequencySynchronization::Nodes::Node::SelectionPoints::SelectionPoint::LastSelection::has_data() const
{
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool FrequencySynchronization::Nodes::Node::SelectionPoints::SelectionPoint::LastSelection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string FrequencySynchronization::Nodes::Node::SelectionPoints::SelectionPoint::LastSelection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-selection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::SelectionPoints::SelectionPoint::LastSelection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::SelectionPoints::SelectionPoint::LastSelection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::SelectionPoints::SelectionPoint::LastSelection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void FrequencySynchronization::Nodes::Node::SelectionPoints::SelectionPoint::LastSelection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::SelectionPoints::SelectionPoint::LastSelection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::SelectionPoints::SelectionPoint::LastSelection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::Ptp::Ptp()
    :
    state{YType::enumeration, "state"},
    supports_frequency{YType::boolean, "supports-frequency"},
    supports_time_of_day{YType::boolean, "supports-time-of-day"},
    frequency_priority{YType::uint8, "frequency-priority"},
    time_of_day_priority{YType::uint8, "time-of-day-priority"},
    spa_selection_point{YType::uint8, "spa-selection-point"},
    spa_selection_points_description{YType::str, "spa-selection-points-description"},
    node_selection_point{YType::uint8, "node-selection-point"},
    node_selection_points_description{YType::str, "node-selection-points-description"}
    	,
    quality_level_effective_input(std::make_shared<FrequencySynchronization::Nodes::Node::Ptp::QualityLevelEffectiveInput>())
{
    quality_level_effective_input->parent = this;

    yang_name = "ptp"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

FrequencySynchronization::Nodes::Node::Ptp::~Ptp()
{
}

bool FrequencySynchronization::Nodes::Node::Ptp::has_data() const
{
    for (auto const & leaf : spa_selection_point.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : spa_selection_points_description.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : node_selection_point.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : node_selection_points_description.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return state.is_set
	|| supports_frequency.is_set
	|| supports_time_of_day.is_set
	|| frequency_priority.is_set
	|| time_of_day_priority.is_set
	|| (quality_level_effective_input !=  nullptr && quality_level_effective_input->has_data());
}

bool FrequencySynchronization::Nodes::Node::Ptp::has_operation() const
{
    for (auto const & leaf : spa_selection_point.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : spa_selection_points_description.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : node_selection_point.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : node_selection_points_description.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(supports_frequency.yfilter)
	|| ydk::is_set(supports_time_of_day.yfilter)
	|| ydk::is_set(frequency_priority.yfilter)
	|| ydk::is_set(time_of_day_priority.yfilter)
	|| ydk::is_set(spa_selection_point.yfilter)
	|| ydk::is_set(spa_selection_points_description.yfilter)
	|| ydk::is_set(node_selection_point.yfilter)
	|| ydk::is_set(node_selection_points_description.yfilter)
	|| (quality_level_effective_input !=  nullptr && quality_level_effective_input->has_operation());
}

std::string FrequencySynchronization::Nodes::Node::Ptp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ptp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::Ptp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (supports_frequency.is_set || is_set(supports_frequency.yfilter)) leaf_name_data.push_back(supports_frequency.get_name_leafdata());
    if (supports_time_of_day.is_set || is_set(supports_time_of_day.yfilter)) leaf_name_data.push_back(supports_time_of_day.get_name_leafdata());
    if (frequency_priority.is_set || is_set(frequency_priority.yfilter)) leaf_name_data.push_back(frequency_priority.get_name_leafdata());
    if (time_of_day_priority.is_set || is_set(time_of_day_priority.yfilter)) leaf_name_data.push_back(time_of_day_priority.get_name_leafdata());

    auto spa_selection_point_name_datas = spa_selection_point.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), spa_selection_point_name_datas.begin(), spa_selection_point_name_datas.end());
    auto spa_selection_points_description_name_datas = spa_selection_points_description.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), spa_selection_points_description_name_datas.begin(), spa_selection_points_description_name_datas.end());
    auto node_selection_point_name_datas = node_selection_point.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), node_selection_point_name_datas.begin(), node_selection_point_name_datas.end());
    auto node_selection_points_description_name_datas = node_selection_points_description.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), node_selection_points_description_name_datas.begin(), node_selection_points_description_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::Ptp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "quality-level-effective-input")
    {
        if(quality_level_effective_input == nullptr)
        {
            quality_level_effective_input = std::make_shared<FrequencySynchronization::Nodes::Node::Ptp::QualityLevelEffectiveInput>();
        }
        return quality_level_effective_input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::Ptp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(quality_level_effective_input != nullptr)
    {
        children["quality-level-effective-input"] = quality_level_effective_input;
    }

    return children;
}

void FrequencySynchronization::Nodes::Node::Ptp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "supports-frequency")
    {
        supports_frequency = value;
        supports_frequency.value_namespace = name_space;
        supports_frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "supports-time-of-day")
    {
        supports_time_of_day = value;
        supports_time_of_day.value_namespace = name_space;
        supports_time_of_day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frequency-priority")
    {
        frequency_priority = value;
        frequency_priority.value_namespace = name_space;
        frequency_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-of-day-priority")
    {
        time_of_day_priority = value;
        time_of_day_priority.value_namespace = name_space;
        time_of_day_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spa-selection-point")
    {
        spa_selection_point.append(value);
    }
    if(value_path == "spa-selection-points-description")
    {
        spa_selection_points_description.append(value);
    }
    if(value_path == "node-selection-point")
    {
        node_selection_point.append(value);
    }
    if(value_path == "node-selection-points-description")
    {
        node_selection_points_description.append(value);
    }
}

void FrequencySynchronization::Nodes::Node::Ptp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "supports-frequency")
    {
        supports_frequency.yfilter = yfilter;
    }
    if(value_path == "supports-time-of-day")
    {
        supports_time_of_day.yfilter = yfilter;
    }
    if(value_path == "frequency-priority")
    {
        frequency_priority.yfilter = yfilter;
    }
    if(value_path == "time-of-day-priority")
    {
        time_of_day_priority.yfilter = yfilter;
    }
    if(value_path == "spa-selection-point")
    {
        spa_selection_point.yfilter = yfilter;
    }
    if(value_path == "spa-selection-points-description")
    {
        spa_selection_points_description.yfilter = yfilter;
    }
    if(value_path == "node-selection-point")
    {
        node_selection_point.yfilter = yfilter;
    }
    if(value_path == "node-selection-points-description")
    {
        node_selection_points_description.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::Ptp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "quality-level-effective-input" || name == "state" || name == "supports-frequency" || name == "supports-time-of-day" || name == "frequency-priority" || name == "time-of-day-priority" || name == "spa-selection-point" || name == "spa-selection-points-description" || name == "node-selection-point" || name == "node-selection-points-description")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::Ptp::QualityLevelEffectiveInput::QualityLevelEffectiveInput()
    :
    quality_level_option{YType::enumeration, "quality-level-option"},
    option1_value{YType::enumeration, "option1-value"},
    option2_generation1_value{YType::enumeration, "option2-generation1-value"},
    option2_generation2_value{YType::enumeration, "option2-generation2-value"}
{

    yang_name = "quality-level-effective-input"; yang_parent_name = "ptp"; is_top_level_class = false; has_list_ancestor = true;
}

FrequencySynchronization::Nodes::Node::Ptp::QualityLevelEffectiveInput::~QualityLevelEffectiveInput()
{
}

bool FrequencySynchronization::Nodes::Node::Ptp::QualityLevelEffectiveInput::has_data() const
{
    return quality_level_option.is_set
	|| option1_value.is_set
	|| option2_generation1_value.is_set
	|| option2_generation2_value.is_set;
}

bool FrequencySynchronization::Nodes::Node::Ptp::QualityLevelEffectiveInput::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(quality_level_option.yfilter)
	|| ydk::is_set(option1_value.yfilter)
	|| ydk::is_set(option2_generation1_value.yfilter)
	|| ydk::is_set(option2_generation2_value.yfilter);
}

std::string FrequencySynchronization::Nodes::Node::Ptp::QualityLevelEffectiveInput::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "quality-level-effective-input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::Ptp::QualityLevelEffectiveInput::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (quality_level_option.is_set || is_set(quality_level_option.yfilter)) leaf_name_data.push_back(quality_level_option.get_name_leafdata());
    if (option1_value.is_set || is_set(option1_value.yfilter)) leaf_name_data.push_back(option1_value.get_name_leafdata());
    if (option2_generation1_value.is_set || is_set(option2_generation1_value.yfilter)) leaf_name_data.push_back(option2_generation1_value.get_name_leafdata());
    if (option2_generation2_value.is_set || is_set(option2_generation2_value.yfilter)) leaf_name_data.push_back(option2_generation2_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::Ptp::QualityLevelEffectiveInput::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::Ptp::QualityLevelEffectiveInput::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void FrequencySynchronization::Nodes::Node::Ptp::QualityLevelEffectiveInput::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option = value;
        quality_level_option.value_namespace = name_space;
        quality_level_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option1-value")
    {
        option1_value = value;
        option1_value.value_namespace = name_space;
        option1_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option2-generation1-value")
    {
        option2_generation1_value = value;
        option2_generation1_value.value_namespace = name_space;
        option2_generation1_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option2-generation2-value")
    {
        option2_generation2_value = value;
        option2_generation2_value.value_namespace = name_space;
        option2_generation2_value.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::Ptp::QualityLevelEffectiveInput::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option.yfilter = yfilter;
    }
    if(value_path == "option1-value")
    {
        option1_value.yfilter = yfilter;
    }
    if(value_path == "option2-generation1-value")
    {
        option2_generation1_value.yfilter = yfilter;
    }
    if(value_path == "option2-generation2-value")
    {
        option2_generation2_value.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::Ptp::QualityLevelEffectiveInput::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "quality-level-option" || name == "option1-value" || name == "option2-generation1-value" || name == "option2-generation2-value")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInputs()
{

    yang_name = "selection-point-inputs"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

FrequencySynchronization::Nodes::Node::SelectionPointInputs::~SelectionPointInputs()
{
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::has_data() const
{
    for (std::size_t index=0; index<selection_point_input.size(); index++)
    {
        if(selection_point_input[index]->has_data())
            return true;
    }
    return false;
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::has_operation() const
{
    for (std::size_t index=0; index<selection_point_input.size(); index++)
    {
        if(selection_point_input[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string FrequencySynchronization::Nodes::Node::SelectionPointInputs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "selection-point-inputs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::SelectionPointInputs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::SelectionPointInputs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "selection-point-input")
    {
        for(auto const & c : selection_point_input)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput>();
        c->parent = this;
        selection_point_input.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::SelectionPointInputs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : selection_point_input)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void FrequencySynchronization::Nodes::Node::SelectionPointInputs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void FrequencySynchronization::Nodes::Node::SelectionPointInputs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "selection-point-input")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::SelectionPointInput()
    :
    selection_point{YType::int32, "selection-point"},
    stream_type{YType::enumeration, "stream-type"},
    source_type{YType::enumeration, "source-type"},
    interface{YType::str, "interface"},
    clock_port{YType::int32, "clock-port"},
    last_node{YType::str, "last-node"},
    last_selection_point{YType::int32, "last-selection-point"},
    output_id{YType::int32, "output-id"},
    supports_frequency{YType::boolean, "supports-frequency"},
    supports_time_of_day{YType::boolean, "supports-time-of-day"},
    priority{YType::uint8, "priority"},
    time_of_day_priority{YType::uint8, "time-of-day-priority"},
    selected{YType::boolean, "selected"},
    output_id_xr{YType::uint8, "output-id-xr"},
    platform_status{YType::enumeration, "platform-status"},
    platform_failed_reason{YType::str, "platform-failed-reason"}
    	,
    input_selection_point(std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::InputSelectionPoint>())
	,stream(std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream>())
	,original_source(std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource>())
	,quality_level(std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::QualityLevel>())
{
    input_selection_point->parent = this;
    stream->parent = this;
    original_source->parent = this;
    quality_level->parent = this;

    yang_name = "selection-point-input"; yang_parent_name = "selection-point-inputs"; is_top_level_class = false; has_list_ancestor = true;
}

FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::~SelectionPointInput()
{
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::has_data() const
{
    return selection_point.is_set
	|| stream_type.is_set
	|| source_type.is_set
	|| interface.is_set
	|| clock_port.is_set
	|| last_node.is_set
	|| last_selection_point.is_set
	|| output_id.is_set
	|| supports_frequency.is_set
	|| supports_time_of_day.is_set
	|| priority.is_set
	|| time_of_day_priority.is_set
	|| selected.is_set
	|| output_id_xr.is_set
	|| platform_status.is_set
	|| platform_failed_reason.is_set
	|| (input_selection_point !=  nullptr && input_selection_point->has_data())
	|| (stream !=  nullptr && stream->has_data())
	|| (original_source !=  nullptr && original_source->has_data())
	|| (quality_level !=  nullptr && quality_level->has_data());
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(selection_point.yfilter)
	|| ydk::is_set(stream_type.yfilter)
	|| ydk::is_set(source_type.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(clock_port.yfilter)
	|| ydk::is_set(last_node.yfilter)
	|| ydk::is_set(last_selection_point.yfilter)
	|| ydk::is_set(output_id.yfilter)
	|| ydk::is_set(supports_frequency.yfilter)
	|| ydk::is_set(supports_time_of_day.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(time_of_day_priority.yfilter)
	|| ydk::is_set(selected.yfilter)
	|| ydk::is_set(output_id_xr.yfilter)
	|| ydk::is_set(platform_status.yfilter)
	|| ydk::is_set(platform_failed_reason.yfilter)
	|| (input_selection_point !=  nullptr && input_selection_point->has_operation())
	|| (stream !=  nullptr && stream->has_operation())
	|| (original_source !=  nullptr && original_source->has_operation())
	|| (quality_level !=  nullptr && quality_level->has_operation());
}

std::string FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "selection-point-input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (selection_point.is_set || is_set(selection_point.yfilter)) leaf_name_data.push_back(selection_point.get_name_leafdata());
    if (stream_type.is_set || is_set(stream_type.yfilter)) leaf_name_data.push_back(stream_type.get_name_leafdata());
    if (source_type.is_set || is_set(source_type.yfilter)) leaf_name_data.push_back(source_type.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (clock_port.is_set || is_set(clock_port.yfilter)) leaf_name_data.push_back(clock_port.get_name_leafdata());
    if (last_node.is_set || is_set(last_node.yfilter)) leaf_name_data.push_back(last_node.get_name_leafdata());
    if (last_selection_point.is_set || is_set(last_selection_point.yfilter)) leaf_name_data.push_back(last_selection_point.get_name_leafdata());
    if (output_id.is_set || is_set(output_id.yfilter)) leaf_name_data.push_back(output_id.get_name_leafdata());
    if (supports_frequency.is_set || is_set(supports_frequency.yfilter)) leaf_name_data.push_back(supports_frequency.get_name_leafdata());
    if (supports_time_of_day.is_set || is_set(supports_time_of_day.yfilter)) leaf_name_data.push_back(supports_time_of_day.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (time_of_day_priority.is_set || is_set(time_of_day_priority.yfilter)) leaf_name_data.push_back(time_of_day_priority.get_name_leafdata());
    if (selected.is_set || is_set(selected.yfilter)) leaf_name_data.push_back(selected.get_name_leafdata());
    if (output_id_xr.is_set || is_set(output_id_xr.yfilter)) leaf_name_data.push_back(output_id_xr.get_name_leafdata());
    if (platform_status.is_set || is_set(platform_status.yfilter)) leaf_name_data.push_back(platform_status.get_name_leafdata());
    if (platform_failed_reason.is_set || is_set(platform_failed_reason.yfilter)) leaf_name_data.push_back(platform_failed_reason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input-selection-point")
    {
        if(input_selection_point == nullptr)
        {
            input_selection_point = std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::InputSelectionPoint>();
        }
        return input_selection_point;
    }

    if(child_yang_name == "stream")
    {
        if(stream == nullptr)
        {
            stream = std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream>();
        }
        return stream;
    }

    if(child_yang_name == "original-source")
    {
        if(original_source == nullptr)
        {
            original_source = std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource>();
        }
        return original_source;
    }

    if(child_yang_name == "quality-level")
    {
        if(quality_level == nullptr)
        {
            quality_level = std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::QualityLevel>();
        }
        return quality_level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input_selection_point != nullptr)
    {
        children["input-selection-point"] = input_selection_point;
    }

    if(stream != nullptr)
    {
        children["stream"] = stream;
    }

    if(original_source != nullptr)
    {
        children["original-source"] = original_source;
    }

    if(quality_level != nullptr)
    {
        children["quality-level"] = quality_level;
    }

    return children;
}

void FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "selection-point")
    {
        selection_point = value;
        selection_point.value_namespace = name_space;
        selection_point.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stream-type")
    {
        stream_type = value;
        stream_type.value_namespace = name_space;
        stream_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-type")
    {
        source_type = value;
        source_type.value_namespace = name_space;
        source_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock-port")
    {
        clock_port = value;
        clock_port.value_namespace = name_space;
        clock_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-node")
    {
        last_node = value;
        last_node.value_namespace = name_space;
        last_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-selection-point")
    {
        last_selection_point = value;
        last_selection_point.value_namespace = name_space;
        last_selection_point.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-id")
    {
        output_id = value;
        output_id.value_namespace = name_space;
        output_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "supports-frequency")
    {
        supports_frequency = value;
        supports_frequency.value_namespace = name_space;
        supports_frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "supports-time-of-day")
    {
        supports_time_of_day = value;
        supports_time_of_day.value_namespace = name_space;
        supports_time_of_day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-of-day-priority")
    {
        time_of_day_priority = value;
        time_of_day_priority.value_namespace = name_space;
        time_of_day_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selected")
    {
        selected = value;
        selected.value_namespace = name_space;
        selected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-id-xr")
    {
        output_id_xr = value;
        output_id_xr.value_namespace = name_space;
        output_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "platform-status")
    {
        platform_status = value;
        platform_status.value_namespace = name_space;
        platform_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "platform-failed-reason")
    {
        platform_failed_reason = value;
        platform_failed_reason.value_namespace = name_space;
        platform_failed_reason.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "selection-point")
    {
        selection_point.yfilter = yfilter;
    }
    if(value_path == "stream-type")
    {
        stream_type.yfilter = yfilter;
    }
    if(value_path == "source-type")
    {
        source_type.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "clock-port")
    {
        clock_port.yfilter = yfilter;
    }
    if(value_path == "last-node")
    {
        last_node.yfilter = yfilter;
    }
    if(value_path == "last-selection-point")
    {
        last_selection_point.yfilter = yfilter;
    }
    if(value_path == "output-id")
    {
        output_id.yfilter = yfilter;
    }
    if(value_path == "supports-frequency")
    {
        supports_frequency.yfilter = yfilter;
    }
    if(value_path == "supports-time-of-day")
    {
        supports_time_of_day.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "time-of-day-priority")
    {
        time_of_day_priority.yfilter = yfilter;
    }
    if(value_path == "selected")
    {
        selected.yfilter = yfilter;
    }
    if(value_path == "output-id-xr")
    {
        output_id_xr.yfilter = yfilter;
    }
    if(value_path == "platform-status")
    {
        platform_status.yfilter = yfilter;
    }
    if(value_path == "platform-failed-reason")
    {
        platform_failed_reason.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input-selection-point" || name == "stream" || name == "original-source" || name == "quality-level" || name == "selection-point" || name == "stream-type" || name == "source-type" || name == "interface" || name == "clock-port" || name == "last-node" || name == "last-selection-point" || name == "output-id" || name == "supports-frequency" || name == "supports-time-of-day" || name == "priority" || name == "time-of-day-priority" || name == "selected" || name == "output-id-xr" || name == "platform-status" || name == "platform-failed-reason")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::InputSelectionPoint::InputSelectionPoint()
    :
    selection_point_type{YType::uint8, "selection-point-type"},
    selection_point_description{YType::str, "selection-point-description"},
    node{YType::str, "node"}
{

    yang_name = "input-selection-point"; yang_parent_name = "selection-point-input"; is_top_level_class = false; has_list_ancestor = true;
}

FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::InputSelectionPoint::~InputSelectionPoint()
{
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::InputSelectionPoint::has_data() const
{
    return selection_point_type.is_set
	|| selection_point_description.is_set
	|| node.is_set;
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::InputSelectionPoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(selection_point_type.yfilter)
	|| ydk::is_set(selection_point_description.yfilter)
	|| ydk::is_set(node.yfilter);
}

std::string FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::InputSelectionPoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-selection-point";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::InputSelectionPoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (selection_point_type.is_set || is_set(selection_point_type.yfilter)) leaf_name_data.push_back(selection_point_type.get_name_leafdata());
    if (selection_point_description.is_set || is_set(selection_point_description.yfilter)) leaf_name_data.push_back(selection_point_description.get_name_leafdata());
    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::InputSelectionPoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::InputSelectionPoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::InputSelectionPoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "selection-point-type")
    {
        selection_point_type = value;
        selection_point_type.value_namespace = name_space;
        selection_point_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selection-point-description")
    {
        selection_point_description = value;
        selection_point_description.value_namespace = name_space;
        selection_point_description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::InputSelectionPoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "selection-point-type")
    {
        selection_point_type.yfilter = yfilter;
    }
    if(value_path == "selection-point-description")
    {
        selection_point_description.yfilter = yfilter;
    }
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::InputSelectionPoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "selection-point-type" || name == "selection-point-description" || name == "node")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::Stream()
    :
    stream_input{YType::enumeration, "stream-input"}
    	,
    source_id(std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId>())
	,selection_point_id(std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SelectionPointId>())
{
    source_id->parent = this;
    selection_point_id->parent = this;

    yang_name = "stream"; yang_parent_name = "selection-point-input"; is_top_level_class = false; has_list_ancestor = true;
}

FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::~Stream()
{
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::has_data() const
{
    return stream_input.is_set
	|| (source_id !=  nullptr && source_id->has_data())
	|| (selection_point_id !=  nullptr && selection_point_id->has_data());
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stream_input.yfilter)
	|| (source_id !=  nullptr && source_id->has_operation())
	|| (selection_point_id !=  nullptr && selection_point_id->has_operation());
}

std::string FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stream";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stream_input.is_set || is_set(stream_input.yfilter)) leaf_name_data.push_back(stream_input.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source-id")
    {
        if(source_id == nullptr)
        {
            source_id = std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId>();
        }
        return source_id;
    }

    if(child_yang_name == "selection-point-id")
    {
        if(selection_point_id == nullptr)
        {
            selection_point_id = std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SelectionPointId>();
        }
        return selection_point_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(source_id != nullptr)
    {
        children["source-id"] = source_id;
    }

    if(selection_point_id != nullptr)
    {
        children["selection-point-id"] = selection_point_id;
    }

    return children;
}

void FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stream-input")
    {
        stream_input = value;
        stream_input.value_namespace = name_space;
        stream_input.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stream-input")
    {
        stream_input.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-id" || name == "selection-point-id" || name == "stream-input")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::SourceId()
    :
    source_class{YType::enumeration, "source-class"},
    ethernet_interface{YType::str, "ethernet-interface"},
    sonet_interface{YType::str, "sonet-interface"},
    node{YType::str, "node"},
    ptp_node{YType::str, "ptp-node"},
    satellite_access_interface{YType::str, "satellite-access-interface"},
    ntp_node{YType::str, "ntp-node"}
    	,
    clock_id(std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::ClockId>())
{
    clock_id->parent = this;

    yang_name = "source-id"; yang_parent_name = "stream"; is_top_level_class = false; has_list_ancestor = true;
}

FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::~SourceId()
{
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::has_data() const
{
    return source_class.is_set
	|| ethernet_interface.is_set
	|| sonet_interface.is_set
	|| node.is_set
	|| ptp_node.is_set
	|| satellite_access_interface.is_set
	|| ntp_node.is_set
	|| (clock_id !=  nullptr && clock_id->has_data());
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_class.yfilter)
	|| ydk::is_set(ethernet_interface.yfilter)
	|| ydk::is_set(sonet_interface.yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(ptp_node.yfilter)
	|| ydk::is_set(satellite_access_interface.yfilter)
	|| ydk::is_set(ntp_node.yfilter)
	|| (clock_id !=  nullptr && clock_id->has_operation());
}

std::string FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_class.is_set || is_set(source_class.yfilter)) leaf_name_data.push_back(source_class.get_name_leafdata());
    if (ethernet_interface.is_set || is_set(ethernet_interface.yfilter)) leaf_name_data.push_back(ethernet_interface.get_name_leafdata());
    if (sonet_interface.is_set || is_set(sonet_interface.yfilter)) leaf_name_data.push_back(sonet_interface.get_name_leafdata());
    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (ptp_node.is_set || is_set(ptp_node.yfilter)) leaf_name_data.push_back(ptp_node.get_name_leafdata());
    if (satellite_access_interface.is_set || is_set(satellite_access_interface.yfilter)) leaf_name_data.push_back(satellite_access_interface.get_name_leafdata());
    if (ntp_node.is_set || is_set(ntp_node.yfilter)) leaf_name_data.push_back(ntp_node.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clock-id")
    {
        if(clock_id == nullptr)
        {
            clock_id = std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::ClockId>();
        }
        return clock_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(clock_id != nullptr)
    {
        children["clock-id"] = clock_id;
    }

    return children;
}

void FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-class")
    {
        source_class = value;
        source_class.value_namespace = name_space;
        source_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-interface")
    {
        ethernet_interface = value;
        ethernet_interface.value_namespace = name_space;
        ethernet_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonet-interface")
    {
        sonet_interface = value;
        sonet_interface.value_namespace = name_space;
        sonet_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ptp-node")
    {
        ptp_node = value;
        ptp_node.value_namespace = name_space;
        ptp_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "satellite-access-interface")
    {
        satellite_access_interface = value;
        satellite_access_interface.value_namespace = name_space;
        satellite_access_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ntp-node")
    {
        ntp_node = value;
        ntp_node.value_namespace = name_space;
        ntp_node.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-class")
    {
        source_class.yfilter = yfilter;
    }
    if(value_path == "ethernet-interface")
    {
        ethernet_interface.yfilter = yfilter;
    }
    if(value_path == "sonet-interface")
    {
        sonet_interface.yfilter = yfilter;
    }
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "ptp-node")
    {
        ptp_node.yfilter = yfilter;
    }
    if(value_path == "satellite-access-interface")
    {
        satellite_access_interface.yfilter = yfilter;
    }
    if(value_path == "ntp-node")
    {
        ntp_node.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-id" || name == "source-class" || name == "ethernet-interface" || name == "sonet-interface" || name == "node" || name == "ptp-node" || name == "satellite-access-interface" || name == "ntp-node")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::ClockId::ClockId()
    :
    node{YType::str, "node"},
    port{YType::uint32, "port"}
{

    yang_name = "clock-id"; yang_parent_name = "source-id"; is_top_level_class = false; has_list_ancestor = true;
}

FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::ClockId::~ClockId()
{
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::ClockId::has_data() const
{
    return node.is_set
	|| port.is_set;
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::ClockId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::ClockId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::ClockId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::ClockId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::ClockId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::ClockId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::ClockId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::ClockId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node" || name == "port")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SelectionPointId::SelectionPointId()
    :
    output_id{YType::uint8, "output-id"}
    	,
    selection_point(std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SelectionPointId::SelectionPoint>())
{
    selection_point->parent = this;

    yang_name = "selection-point-id"; yang_parent_name = "stream"; is_top_level_class = false; has_list_ancestor = true;
}

FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SelectionPointId::~SelectionPointId()
{
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SelectionPointId::has_data() const
{
    return output_id.is_set
	|| (selection_point !=  nullptr && selection_point->has_data());
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SelectionPointId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(output_id.yfilter)
	|| (selection_point !=  nullptr && selection_point->has_operation());
}

std::string FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SelectionPointId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "selection-point-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SelectionPointId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (output_id.is_set || is_set(output_id.yfilter)) leaf_name_data.push_back(output_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SelectionPointId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "selection-point")
    {
        if(selection_point == nullptr)
        {
            selection_point = std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SelectionPointId::SelectionPoint>();
        }
        return selection_point;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SelectionPointId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(selection_point != nullptr)
    {
        children["selection-point"] = selection_point;
    }

    return children;
}

void FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SelectionPointId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "output-id")
    {
        output_id = value;
        output_id.value_namespace = name_space;
        output_id.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SelectionPointId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "output-id")
    {
        output_id.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SelectionPointId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "selection-point" || name == "output-id")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SelectionPointId::SelectionPoint::SelectionPoint()
    :
    selection_point_type{YType::uint8, "selection-point-type"},
    selection_point_description{YType::str, "selection-point-description"},
    node{YType::str, "node"}
{

    yang_name = "selection-point"; yang_parent_name = "selection-point-id"; is_top_level_class = false; has_list_ancestor = true;
}

FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SelectionPointId::SelectionPoint::~SelectionPoint()
{
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SelectionPointId::SelectionPoint::has_data() const
{
    return selection_point_type.is_set
	|| selection_point_description.is_set
	|| node.is_set;
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SelectionPointId::SelectionPoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(selection_point_type.yfilter)
	|| ydk::is_set(selection_point_description.yfilter)
	|| ydk::is_set(node.yfilter);
}

std::string FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SelectionPointId::SelectionPoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "selection-point";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SelectionPointId::SelectionPoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (selection_point_type.is_set || is_set(selection_point_type.yfilter)) leaf_name_data.push_back(selection_point_type.get_name_leafdata());
    if (selection_point_description.is_set || is_set(selection_point_description.yfilter)) leaf_name_data.push_back(selection_point_description.get_name_leafdata());
    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SelectionPointId::SelectionPoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SelectionPointId::SelectionPoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SelectionPointId::SelectionPoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "selection-point-type")
    {
        selection_point_type = value;
        selection_point_type.value_namespace = name_space;
        selection_point_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selection-point-description")
    {
        selection_point_description = value;
        selection_point_description.value_namespace = name_space;
        selection_point_description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SelectionPointId::SelectionPoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "selection-point-type")
    {
        selection_point_type.yfilter = yfilter;
    }
    if(value_path == "selection-point-description")
    {
        selection_point_description.yfilter = yfilter;
    }
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SelectionPointId::SelectionPoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "selection-point-type" || name == "selection-point-description" || name == "node")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::OriginalSource()
    :
    source_class{YType::enumeration, "source-class"},
    ethernet_interface{YType::str, "ethernet-interface"},
    sonet_interface{YType::str, "sonet-interface"},
    node{YType::str, "node"},
    ptp_node{YType::str, "ptp-node"},
    satellite_access_interface{YType::str, "satellite-access-interface"},
    ntp_node{YType::str, "ntp-node"}
    	,
    clock_id(std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::ClockId>())
{
    clock_id->parent = this;

    yang_name = "original-source"; yang_parent_name = "selection-point-input"; is_top_level_class = false; has_list_ancestor = true;
}

FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::~OriginalSource()
{
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::has_data() const
{
    return source_class.is_set
	|| ethernet_interface.is_set
	|| sonet_interface.is_set
	|| node.is_set
	|| ptp_node.is_set
	|| satellite_access_interface.is_set
	|| ntp_node.is_set
	|| (clock_id !=  nullptr && clock_id->has_data());
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_class.yfilter)
	|| ydk::is_set(ethernet_interface.yfilter)
	|| ydk::is_set(sonet_interface.yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(ptp_node.yfilter)
	|| ydk::is_set(satellite_access_interface.yfilter)
	|| ydk::is_set(ntp_node.yfilter)
	|| (clock_id !=  nullptr && clock_id->has_operation());
}

std::string FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "original-source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_class.is_set || is_set(source_class.yfilter)) leaf_name_data.push_back(source_class.get_name_leafdata());
    if (ethernet_interface.is_set || is_set(ethernet_interface.yfilter)) leaf_name_data.push_back(ethernet_interface.get_name_leafdata());
    if (sonet_interface.is_set || is_set(sonet_interface.yfilter)) leaf_name_data.push_back(sonet_interface.get_name_leafdata());
    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (ptp_node.is_set || is_set(ptp_node.yfilter)) leaf_name_data.push_back(ptp_node.get_name_leafdata());
    if (satellite_access_interface.is_set || is_set(satellite_access_interface.yfilter)) leaf_name_data.push_back(satellite_access_interface.get_name_leafdata());
    if (ntp_node.is_set || is_set(ntp_node.yfilter)) leaf_name_data.push_back(ntp_node.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clock-id")
    {
        if(clock_id == nullptr)
        {
            clock_id = std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::ClockId>();
        }
        return clock_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(clock_id != nullptr)
    {
        children["clock-id"] = clock_id;
    }

    return children;
}

void FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-class")
    {
        source_class = value;
        source_class.value_namespace = name_space;
        source_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-interface")
    {
        ethernet_interface = value;
        ethernet_interface.value_namespace = name_space;
        ethernet_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonet-interface")
    {
        sonet_interface = value;
        sonet_interface.value_namespace = name_space;
        sonet_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ptp-node")
    {
        ptp_node = value;
        ptp_node.value_namespace = name_space;
        ptp_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "satellite-access-interface")
    {
        satellite_access_interface = value;
        satellite_access_interface.value_namespace = name_space;
        satellite_access_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ntp-node")
    {
        ntp_node = value;
        ntp_node.value_namespace = name_space;
        ntp_node.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-class")
    {
        source_class.yfilter = yfilter;
    }
    if(value_path == "ethernet-interface")
    {
        ethernet_interface.yfilter = yfilter;
    }
    if(value_path == "sonet-interface")
    {
        sonet_interface.yfilter = yfilter;
    }
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "ptp-node")
    {
        ptp_node.yfilter = yfilter;
    }
    if(value_path == "satellite-access-interface")
    {
        satellite_access_interface.yfilter = yfilter;
    }
    if(value_path == "ntp-node")
    {
        ntp_node.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-id" || name == "source-class" || name == "ethernet-interface" || name == "sonet-interface" || name == "node" || name == "ptp-node" || name == "satellite-access-interface" || name == "ntp-node")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::ClockId::ClockId()
    :
    node{YType::str, "node"},
    port{YType::uint32, "port"}
{

    yang_name = "clock-id"; yang_parent_name = "original-source"; is_top_level_class = false; has_list_ancestor = true;
}

FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::ClockId::~ClockId()
{
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::ClockId::has_data() const
{
    return node.is_set
	|| port.is_set;
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::ClockId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::ClockId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::ClockId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::ClockId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::ClockId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::ClockId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::ClockId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::ClockId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node" || name == "port")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::QualityLevel::QualityLevel()
    :
    quality_level_option{YType::enumeration, "quality-level-option"},
    option1_value{YType::enumeration, "option1-value"},
    option2_generation1_value{YType::enumeration, "option2-generation1-value"},
    option2_generation2_value{YType::enumeration, "option2-generation2-value"}
{

    yang_name = "quality-level"; yang_parent_name = "selection-point-input"; is_top_level_class = false; has_list_ancestor = true;
}

FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::QualityLevel::~QualityLevel()
{
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::QualityLevel::has_data() const
{
    return quality_level_option.is_set
	|| option1_value.is_set
	|| option2_generation1_value.is_set
	|| option2_generation2_value.is_set;
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::QualityLevel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(quality_level_option.yfilter)
	|| ydk::is_set(option1_value.yfilter)
	|| ydk::is_set(option2_generation1_value.yfilter)
	|| ydk::is_set(option2_generation2_value.yfilter);
}

std::string FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::QualityLevel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "quality-level";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::QualityLevel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (quality_level_option.is_set || is_set(quality_level_option.yfilter)) leaf_name_data.push_back(quality_level_option.get_name_leafdata());
    if (option1_value.is_set || is_set(option1_value.yfilter)) leaf_name_data.push_back(option1_value.get_name_leafdata());
    if (option2_generation1_value.is_set || is_set(option2_generation1_value.yfilter)) leaf_name_data.push_back(option2_generation1_value.get_name_leafdata());
    if (option2_generation2_value.is_set || is_set(option2_generation2_value.yfilter)) leaf_name_data.push_back(option2_generation2_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::QualityLevel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::QualityLevel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::QualityLevel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option = value;
        quality_level_option.value_namespace = name_space;
        quality_level_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option1-value")
    {
        option1_value = value;
        option1_value.value_namespace = name_space;
        option1_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option2-generation1-value")
    {
        option2_generation1_value = value;
        option2_generation1_value.value_namespace = name_space;
        option2_generation1_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option2-generation2-value")
    {
        option2_generation2_value = value;
        option2_generation2_value.value_namespace = name_space;
        option2_generation2_value.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::QualityLevel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option.yfilter = yfilter;
    }
    if(value_path == "option1-value")
    {
        option1_value.yfilter = yfilter;
    }
    if(value_path == "option2-generation1-value")
    {
        option2_generation1_value.yfilter = yfilter;
    }
    if(value_path == "option2-generation2-value")
    {
        option2_generation2_value.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::QualityLevel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "quality-level-option" || name == "option1-value" || name == "option2-generation1-value" || name == "option2-generation2-value")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::Ntp::Ntp()
    :
    state{YType::enumeration, "state"},
    supports_frequency{YType::boolean, "supports-frequency"},
    supports_time_of_day{YType::boolean, "supports-time-of-day"},
    frequency_priority{YType::uint8, "frequency-priority"},
    time_of_day_priority{YType::uint8, "time-of-day-priority"},
    spa_selection_point{YType::uint8, "spa-selection-point"},
    spa_selection_points_description{YType::str, "spa-selection-points-description"},
    node_selection_point{YType::uint8, "node-selection-point"},
    node_selection_points_description{YType::str, "node-selection-points-description"}
    	,
    quality_level_effective_input(std::make_shared<FrequencySynchronization::Nodes::Node::Ntp::QualityLevelEffectiveInput>())
{
    quality_level_effective_input->parent = this;

    yang_name = "ntp"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

FrequencySynchronization::Nodes::Node::Ntp::~Ntp()
{
}

bool FrequencySynchronization::Nodes::Node::Ntp::has_data() const
{
    for (auto const & leaf : spa_selection_point.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : spa_selection_points_description.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : node_selection_point.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : node_selection_points_description.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return state.is_set
	|| supports_frequency.is_set
	|| supports_time_of_day.is_set
	|| frequency_priority.is_set
	|| time_of_day_priority.is_set
	|| (quality_level_effective_input !=  nullptr && quality_level_effective_input->has_data());
}

bool FrequencySynchronization::Nodes::Node::Ntp::has_operation() const
{
    for (auto const & leaf : spa_selection_point.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : spa_selection_points_description.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : node_selection_point.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : node_selection_points_description.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(supports_frequency.yfilter)
	|| ydk::is_set(supports_time_of_day.yfilter)
	|| ydk::is_set(frequency_priority.yfilter)
	|| ydk::is_set(time_of_day_priority.yfilter)
	|| ydk::is_set(spa_selection_point.yfilter)
	|| ydk::is_set(spa_selection_points_description.yfilter)
	|| ydk::is_set(node_selection_point.yfilter)
	|| ydk::is_set(node_selection_points_description.yfilter)
	|| (quality_level_effective_input !=  nullptr && quality_level_effective_input->has_operation());
}

std::string FrequencySynchronization::Nodes::Node::Ntp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ntp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::Ntp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (supports_frequency.is_set || is_set(supports_frequency.yfilter)) leaf_name_data.push_back(supports_frequency.get_name_leafdata());
    if (supports_time_of_day.is_set || is_set(supports_time_of_day.yfilter)) leaf_name_data.push_back(supports_time_of_day.get_name_leafdata());
    if (frequency_priority.is_set || is_set(frequency_priority.yfilter)) leaf_name_data.push_back(frequency_priority.get_name_leafdata());
    if (time_of_day_priority.is_set || is_set(time_of_day_priority.yfilter)) leaf_name_data.push_back(time_of_day_priority.get_name_leafdata());

    auto spa_selection_point_name_datas = spa_selection_point.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), spa_selection_point_name_datas.begin(), spa_selection_point_name_datas.end());
    auto spa_selection_points_description_name_datas = spa_selection_points_description.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), spa_selection_points_description_name_datas.begin(), spa_selection_points_description_name_datas.end());
    auto node_selection_point_name_datas = node_selection_point.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), node_selection_point_name_datas.begin(), node_selection_point_name_datas.end());
    auto node_selection_points_description_name_datas = node_selection_points_description.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), node_selection_points_description_name_datas.begin(), node_selection_points_description_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::Ntp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "quality-level-effective-input")
    {
        if(quality_level_effective_input == nullptr)
        {
            quality_level_effective_input = std::make_shared<FrequencySynchronization::Nodes::Node::Ntp::QualityLevelEffectiveInput>();
        }
        return quality_level_effective_input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::Ntp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(quality_level_effective_input != nullptr)
    {
        children["quality-level-effective-input"] = quality_level_effective_input;
    }

    return children;
}

void FrequencySynchronization::Nodes::Node::Ntp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "supports-frequency")
    {
        supports_frequency = value;
        supports_frequency.value_namespace = name_space;
        supports_frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "supports-time-of-day")
    {
        supports_time_of_day = value;
        supports_time_of_day.value_namespace = name_space;
        supports_time_of_day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frequency-priority")
    {
        frequency_priority = value;
        frequency_priority.value_namespace = name_space;
        frequency_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-of-day-priority")
    {
        time_of_day_priority = value;
        time_of_day_priority.value_namespace = name_space;
        time_of_day_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spa-selection-point")
    {
        spa_selection_point.append(value);
    }
    if(value_path == "spa-selection-points-description")
    {
        spa_selection_points_description.append(value);
    }
    if(value_path == "node-selection-point")
    {
        node_selection_point.append(value);
    }
    if(value_path == "node-selection-points-description")
    {
        node_selection_points_description.append(value);
    }
}

void FrequencySynchronization::Nodes::Node::Ntp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "supports-frequency")
    {
        supports_frequency.yfilter = yfilter;
    }
    if(value_path == "supports-time-of-day")
    {
        supports_time_of_day.yfilter = yfilter;
    }
    if(value_path == "frequency-priority")
    {
        frequency_priority.yfilter = yfilter;
    }
    if(value_path == "time-of-day-priority")
    {
        time_of_day_priority.yfilter = yfilter;
    }
    if(value_path == "spa-selection-point")
    {
        spa_selection_point.yfilter = yfilter;
    }
    if(value_path == "spa-selection-points-description")
    {
        spa_selection_points_description.yfilter = yfilter;
    }
    if(value_path == "node-selection-point")
    {
        node_selection_point.yfilter = yfilter;
    }
    if(value_path == "node-selection-points-description")
    {
        node_selection_points_description.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::Ntp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "quality-level-effective-input" || name == "state" || name == "supports-frequency" || name == "supports-time-of-day" || name == "frequency-priority" || name == "time-of-day-priority" || name == "spa-selection-point" || name == "spa-selection-points-description" || name == "node-selection-point" || name == "node-selection-points-description")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::Ntp::QualityLevelEffectiveInput::QualityLevelEffectiveInput()
    :
    quality_level_option{YType::enumeration, "quality-level-option"},
    option1_value{YType::enumeration, "option1-value"},
    option2_generation1_value{YType::enumeration, "option2-generation1-value"},
    option2_generation2_value{YType::enumeration, "option2-generation2-value"}
{

    yang_name = "quality-level-effective-input"; yang_parent_name = "ntp"; is_top_level_class = false; has_list_ancestor = true;
}

FrequencySynchronization::Nodes::Node::Ntp::QualityLevelEffectiveInput::~QualityLevelEffectiveInput()
{
}

bool FrequencySynchronization::Nodes::Node::Ntp::QualityLevelEffectiveInput::has_data() const
{
    return quality_level_option.is_set
	|| option1_value.is_set
	|| option2_generation1_value.is_set
	|| option2_generation2_value.is_set;
}

bool FrequencySynchronization::Nodes::Node::Ntp::QualityLevelEffectiveInput::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(quality_level_option.yfilter)
	|| ydk::is_set(option1_value.yfilter)
	|| ydk::is_set(option2_generation1_value.yfilter)
	|| ydk::is_set(option2_generation2_value.yfilter);
}

std::string FrequencySynchronization::Nodes::Node::Ntp::QualityLevelEffectiveInput::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "quality-level-effective-input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::Ntp::QualityLevelEffectiveInput::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (quality_level_option.is_set || is_set(quality_level_option.yfilter)) leaf_name_data.push_back(quality_level_option.get_name_leafdata());
    if (option1_value.is_set || is_set(option1_value.yfilter)) leaf_name_data.push_back(option1_value.get_name_leafdata());
    if (option2_generation1_value.is_set || is_set(option2_generation1_value.yfilter)) leaf_name_data.push_back(option2_generation1_value.get_name_leafdata());
    if (option2_generation2_value.is_set || is_set(option2_generation2_value.yfilter)) leaf_name_data.push_back(option2_generation2_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::Ntp::QualityLevelEffectiveInput::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::Ntp::QualityLevelEffectiveInput::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void FrequencySynchronization::Nodes::Node::Ntp::QualityLevelEffectiveInput::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option = value;
        quality_level_option.value_namespace = name_space;
        quality_level_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option1-value")
    {
        option1_value = value;
        option1_value.value_namespace = name_space;
        option1_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option2-generation1-value")
    {
        option2_generation1_value = value;
        option2_generation1_value.value_namespace = name_space;
        option2_generation1_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option2-generation2-value")
    {
        option2_generation2_value = value;
        option2_generation2_value.value_namespace = name_space;
        option2_generation2_value.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::Ntp::QualityLevelEffectiveInput::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option.yfilter = yfilter;
    }
    if(value_path == "option1-value")
    {
        option1_value.yfilter = yfilter;
    }
    if(value_path == "option2-generation1-value")
    {
        option2_generation1_value.yfilter = yfilter;
    }
    if(value_path == "option2-generation2-value")
    {
        option2_generation2_value.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::Ntp::QualityLevelEffectiveInput::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "quality-level-option" || name == "option1-value" || name == "option2-generation1-value" || name == "option2-generation2-value")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::ConfigurationErrors::ConfigurationErrors()
{

    yang_name = "configuration-errors"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

FrequencySynchronization::Nodes::Node::ConfigurationErrors::~ConfigurationErrors()
{
}

bool FrequencySynchronization::Nodes::Node::ConfigurationErrors::has_data() const
{
    for (std::size_t index=0; index<error_source.size(); index++)
    {
        if(error_source[index]->has_data())
            return true;
    }
    return false;
}

bool FrequencySynchronization::Nodes::Node::ConfigurationErrors::has_operation() const
{
    for (std::size_t index=0; index<error_source.size(); index++)
    {
        if(error_source[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string FrequencySynchronization::Nodes::Node::ConfigurationErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configuration-errors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::ConfigurationErrors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::ConfigurationErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "error-source")
    {
        for(auto const & c : error_source)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource>();
        c->parent = this;
        error_source.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::ConfigurationErrors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : error_source)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void FrequencySynchronization::Nodes::Node::ConfigurationErrors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void FrequencySynchronization::Nodes::Node::ConfigurationErrors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool FrequencySynchronization::Nodes::Node::ConfigurationErrors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error-source")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::ErrorSource()
    :
    enable_error{YType::boolean, "enable-error"},
    input_min_error{YType::boolean, "input-min-error"},
    input_exact_error{YType::boolean, "input-exact-error"},
    input_max_error{YType::boolean, "input-max-error"},
    ouput_min_error{YType::boolean, "ouput-min-error"},
    output_exact_error{YType::boolean, "output-exact-error"},
    output_max_error{YType::boolean, "output-max-error"},
    input_output_mismatch{YType::boolean, "input-output-mismatch"}
    	,
    source(std::make_shared<FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::Source>())
	,input_min_ql(std::make_shared<FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::InputMinQl>())
	,input_exact_ql(std::make_shared<FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::InputExactQl>())
	,input_max_ql(std::make_shared<FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::InputMaxQl>())
	,output_min_ql(std::make_shared<FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::OutputMinQl>())
	,output_exact_ql(std::make_shared<FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::OutputExactQl>())
	,output_max_ql(std::make_shared<FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::OutputMaxQl>())
{
    source->parent = this;
    input_min_ql->parent = this;
    input_exact_ql->parent = this;
    input_max_ql->parent = this;
    output_min_ql->parent = this;
    output_exact_ql->parent = this;
    output_max_ql->parent = this;

    yang_name = "error-source"; yang_parent_name = "configuration-errors"; is_top_level_class = false; has_list_ancestor = true;
}

FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::~ErrorSource()
{
}

bool FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::has_data() const
{
    return enable_error.is_set
	|| input_min_error.is_set
	|| input_exact_error.is_set
	|| input_max_error.is_set
	|| ouput_min_error.is_set
	|| output_exact_error.is_set
	|| output_max_error.is_set
	|| input_output_mismatch.is_set
	|| (source !=  nullptr && source->has_data())
	|| (input_min_ql !=  nullptr && input_min_ql->has_data())
	|| (input_exact_ql !=  nullptr && input_exact_ql->has_data())
	|| (input_max_ql !=  nullptr && input_max_ql->has_data())
	|| (output_min_ql !=  nullptr && output_min_ql->has_data())
	|| (output_exact_ql !=  nullptr && output_exact_ql->has_data())
	|| (output_max_ql !=  nullptr && output_max_ql->has_data());
}

bool FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable_error.yfilter)
	|| ydk::is_set(input_min_error.yfilter)
	|| ydk::is_set(input_exact_error.yfilter)
	|| ydk::is_set(input_max_error.yfilter)
	|| ydk::is_set(ouput_min_error.yfilter)
	|| ydk::is_set(output_exact_error.yfilter)
	|| ydk::is_set(output_max_error.yfilter)
	|| ydk::is_set(input_output_mismatch.yfilter)
	|| (source !=  nullptr && source->has_operation())
	|| (input_min_ql !=  nullptr && input_min_ql->has_operation())
	|| (input_exact_ql !=  nullptr && input_exact_ql->has_operation())
	|| (input_max_ql !=  nullptr && input_max_ql->has_operation())
	|| (output_min_ql !=  nullptr && output_min_ql->has_operation())
	|| (output_exact_ql !=  nullptr && output_exact_ql->has_operation())
	|| (output_max_ql !=  nullptr && output_max_ql->has_operation());
}

std::string FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error-source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable_error.is_set || is_set(enable_error.yfilter)) leaf_name_data.push_back(enable_error.get_name_leafdata());
    if (input_min_error.is_set || is_set(input_min_error.yfilter)) leaf_name_data.push_back(input_min_error.get_name_leafdata());
    if (input_exact_error.is_set || is_set(input_exact_error.yfilter)) leaf_name_data.push_back(input_exact_error.get_name_leafdata());
    if (input_max_error.is_set || is_set(input_max_error.yfilter)) leaf_name_data.push_back(input_max_error.get_name_leafdata());
    if (ouput_min_error.is_set || is_set(ouput_min_error.yfilter)) leaf_name_data.push_back(ouput_min_error.get_name_leafdata());
    if (output_exact_error.is_set || is_set(output_exact_error.yfilter)) leaf_name_data.push_back(output_exact_error.get_name_leafdata());
    if (output_max_error.is_set || is_set(output_max_error.yfilter)) leaf_name_data.push_back(output_max_error.get_name_leafdata());
    if (input_output_mismatch.is_set || is_set(input_output_mismatch.yfilter)) leaf_name_data.push_back(input_output_mismatch.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::Source>();
        }
        return source;
    }

    if(child_yang_name == "input-min-ql")
    {
        if(input_min_ql == nullptr)
        {
            input_min_ql = std::make_shared<FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::InputMinQl>();
        }
        return input_min_ql;
    }

    if(child_yang_name == "input-exact-ql")
    {
        if(input_exact_ql == nullptr)
        {
            input_exact_ql = std::make_shared<FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::InputExactQl>();
        }
        return input_exact_ql;
    }

    if(child_yang_name == "input-max-ql")
    {
        if(input_max_ql == nullptr)
        {
            input_max_ql = std::make_shared<FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::InputMaxQl>();
        }
        return input_max_ql;
    }

    if(child_yang_name == "output-min-ql")
    {
        if(output_min_ql == nullptr)
        {
            output_min_ql = std::make_shared<FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::OutputMinQl>();
        }
        return output_min_ql;
    }

    if(child_yang_name == "output-exact-ql")
    {
        if(output_exact_ql == nullptr)
        {
            output_exact_ql = std::make_shared<FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::OutputExactQl>();
        }
        return output_exact_ql;
    }

    if(child_yang_name == "output-max-ql")
    {
        if(output_max_ql == nullptr)
        {
            output_max_ql = std::make_shared<FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::OutputMaxQl>();
        }
        return output_max_ql;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(source != nullptr)
    {
        children["source"] = source;
    }

    if(input_min_ql != nullptr)
    {
        children["input-min-ql"] = input_min_ql;
    }

    if(input_exact_ql != nullptr)
    {
        children["input-exact-ql"] = input_exact_ql;
    }

    if(input_max_ql != nullptr)
    {
        children["input-max-ql"] = input_max_ql;
    }

    if(output_min_ql != nullptr)
    {
        children["output-min-ql"] = output_min_ql;
    }

    if(output_exact_ql != nullptr)
    {
        children["output-exact-ql"] = output_exact_ql;
    }

    if(output_max_ql != nullptr)
    {
        children["output-max-ql"] = output_max_ql;
    }

    return children;
}

void FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable-error")
    {
        enable_error = value;
        enable_error.value_namespace = name_space;
        enable_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-min-error")
    {
        input_min_error = value;
        input_min_error.value_namespace = name_space;
        input_min_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-exact-error")
    {
        input_exact_error = value;
        input_exact_error.value_namespace = name_space;
        input_exact_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-max-error")
    {
        input_max_error = value;
        input_max_error.value_namespace = name_space;
        input_max_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ouput-min-error")
    {
        ouput_min_error = value;
        ouput_min_error.value_namespace = name_space;
        ouput_min_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-exact-error")
    {
        output_exact_error = value;
        output_exact_error.value_namespace = name_space;
        output_exact_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-max-error")
    {
        output_max_error = value;
        output_max_error.value_namespace = name_space;
        output_max_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-output-mismatch")
    {
        input_output_mismatch = value;
        input_output_mismatch.value_namespace = name_space;
        input_output_mismatch.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable-error")
    {
        enable_error.yfilter = yfilter;
    }
    if(value_path == "input-min-error")
    {
        input_min_error.yfilter = yfilter;
    }
    if(value_path == "input-exact-error")
    {
        input_exact_error.yfilter = yfilter;
    }
    if(value_path == "input-max-error")
    {
        input_max_error.yfilter = yfilter;
    }
    if(value_path == "ouput-min-error")
    {
        ouput_min_error.yfilter = yfilter;
    }
    if(value_path == "output-exact-error")
    {
        output_exact_error.yfilter = yfilter;
    }
    if(value_path == "output-max-error")
    {
        output_max_error.yfilter = yfilter;
    }
    if(value_path == "input-output-mismatch")
    {
        input_output_mismatch.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source" || name == "input-min-ql" || name == "input-exact-ql" || name == "input-max-ql" || name == "output-min-ql" || name == "output-exact-ql" || name == "output-max-ql" || name == "enable-error" || name == "input-min-error" || name == "input-exact-error" || name == "input-max-error" || name == "ouput-min-error" || name == "output-exact-error" || name == "output-max-error" || name == "input-output-mismatch")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::Source::Source()
    :
    source_class{YType::enumeration, "source-class"},
    ethernet_interface{YType::str, "ethernet-interface"},
    sonet_interface{YType::str, "sonet-interface"},
    node{YType::str, "node"},
    ptp_node{YType::str, "ptp-node"},
    satellite_access_interface{YType::str, "satellite-access-interface"},
    ntp_node{YType::str, "ntp-node"}
    	,
    clock_id(std::make_shared<FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::Source::ClockId>())
{
    clock_id->parent = this;

    yang_name = "source"; yang_parent_name = "error-source"; is_top_level_class = false; has_list_ancestor = true;
}

FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::Source::~Source()
{
}

bool FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::Source::has_data() const
{
    return source_class.is_set
	|| ethernet_interface.is_set
	|| sonet_interface.is_set
	|| node.is_set
	|| ptp_node.is_set
	|| satellite_access_interface.is_set
	|| ntp_node.is_set
	|| (clock_id !=  nullptr && clock_id->has_data());
}

bool FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_class.yfilter)
	|| ydk::is_set(ethernet_interface.yfilter)
	|| ydk::is_set(sonet_interface.yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(ptp_node.yfilter)
	|| ydk::is_set(satellite_access_interface.yfilter)
	|| ydk::is_set(ntp_node.yfilter)
	|| (clock_id !=  nullptr && clock_id->has_operation());
}

std::string FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_class.is_set || is_set(source_class.yfilter)) leaf_name_data.push_back(source_class.get_name_leafdata());
    if (ethernet_interface.is_set || is_set(ethernet_interface.yfilter)) leaf_name_data.push_back(ethernet_interface.get_name_leafdata());
    if (sonet_interface.is_set || is_set(sonet_interface.yfilter)) leaf_name_data.push_back(sonet_interface.get_name_leafdata());
    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (ptp_node.is_set || is_set(ptp_node.yfilter)) leaf_name_data.push_back(ptp_node.get_name_leafdata());
    if (satellite_access_interface.is_set || is_set(satellite_access_interface.yfilter)) leaf_name_data.push_back(satellite_access_interface.get_name_leafdata());
    if (ntp_node.is_set || is_set(ntp_node.yfilter)) leaf_name_data.push_back(ntp_node.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clock-id")
    {
        if(clock_id == nullptr)
        {
            clock_id = std::make_shared<FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::Source::ClockId>();
        }
        return clock_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(clock_id != nullptr)
    {
        children["clock-id"] = clock_id;
    }

    return children;
}

void FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-class")
    {
        source_class = value;
        source_class.value_namespace = name_space;
        source_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-interface")
    {
        ethernet_interface = value;
        ethernet_interface.value_namespace = name_space;
        ethernet_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonet-interface")
    {
        sonet_interface = value;
        sonet_interface.value_namespace = name_space;
        sonet_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ptp-node")
    {
        ptp_node = value;
        ptp_node.value_namespace = name_space;
        ptp_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "satellite-access-interface")
    {
        satellite_access_interface = value;
        satellite_access_interface.value_namespace = name_space;
        satellite_access_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ntp-node")
    {
        ntp_node = value;
        ntp_node.value_namespace = name_space;
        ntp_node.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-class")
    {
        source_class.yfilter = yfilter;
    }
    if(value_path == "ethernet-interface")
    {
        ethernet_interface.yfilter = yfilter;
    }
    if(value_path == "sonet-interface")
    {
        sonet_interface.yfilter = yfilter;
    }
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "ptp-node")
    {
        ptp_node.yfilter = yfilter;
    }
    if(value_path == "satellite-access-interface")
    {
        satellite_access_interface.yfilter = yfilter;
    }
    if(value_path == "ntp-node")
    {
        ntp_node.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-id" || name == "source-class" || name == "ethernet-interface" || name == "sonet-interface" || name == "node" || name == "ptp-node" || name == "satellite-access-interface" || name == "ntp-node")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::Source::ClockId::ClockId()
    :
    node{YType::str, "node"},
    port{YType::uint32, "port"}
{

    yang_name = "clock-id"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true;
}

FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::Source::ClockId::~ClockId()
{
}

bool FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::Source::ClockId::has_data() const
{
    return node.is_set
	|| port.is_set;
}

bool FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::Source::ClockId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::Source::ClockId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::Source::ClockId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::Source::ClockId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::Source::ClockId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::Source::ClockId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::Source::ClockId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::Source::ClockId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node" || name == "port")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::InputMinQl::InputMinQl()
    :
    quality_level_option{YType::enumeration, "quality-level-option"},
    option1_value{YType::enumeration, "option1-value"},
    option2_generation1_value{YType::enumeration, "option2-generation1-value"},
    option2_generation2_value{YType::enumeration, "option2-generation2-value"}
{

    yang_name = "input-min-ql"; yang_parent_name = "error-source"; is_top_level_class = false; has_list_ancestor = true;
}

FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::InputMinQl::~InputMinQl()
{
}

bool FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::InputMinQl::has_data() const
{
    return quality_level_option.is_set
	|| option1_value.is_set
	|| option2_generation1_value.is_set
	|| option2_generation2_value.is_set;
}

bool FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::InputMinQl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(quality_level_option.yfilter)
	|| ydk::is_set(option1_value.yfilter)
	|| ydk::is_set(option2_generation1_value.yfilter)
	|| ydk::is_set(option2_generation2_value.yfilter);
}

std::string FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::InputMinQl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-min-ql";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::InputMinQl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (quality_level_option.is_set || is_set(quality_level_option.yfilter)) leaf_name_data.push_back(quality_level_option.get_name_leafdata());
    if (option1_value.is_set || is_set(option1_value.yfilter)) leaf_name_data.push_back(option1_value.get_name_leafdata());
    if (option2_generation1_value.is_set || is_set(option2_generation1_value.yfilter)) leaf_name_data.push_back(option2_generation1_value.get_name_leafdata());
    if (option2_generation2_value.is_set || is_set(option2_generation2_value.yfilter)) leaf_name_data.push_back(option2_generation2_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::InputMinQl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::InputMinQl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::InputMinQl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option = value;
        quality_level_option.value_namespace = name_space;
        quality_level_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option1-value")
    {
        option1_value = value;
        option1_value.value_namespace = name_space;
        option1_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option2-generation1-value")
    {
        option2_generation1_value = value;
        option2_generation1_value.value_namespace = name_space;
        option2_generation1_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option2-generation2-value")
    {
        option2_generation2_value = value;
        option2_generation2_value.value_namespace = name_space;
        option2_generation2_value.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::InputMinQl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option.yfilter = yfilter;
    }
    if(value_path == "option1-value")
    {
        option1_value.yfilter = yfilter;
    }
    if(value_path == "option2-generation1-value")
    {
        option2_generation1_value.yfilter = yfilter;
    }
    if(value_path == "option2-generation2-value")
    {
        option2_generation2_value.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::InputMinQl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "quality-level-option" || name == "option1-value" || name == "option2-generation1-value" || name == "option2-generation2-value")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::InputExactQl::InputExactQl()
    :
    quality_level_option{YType::enumeration, "quality-level-option"},
    option1_value{YType::enumeration, "option1-value"},
    option2_generation1_value{YType::enumeration, "option2-generation1-value"},
    option2_generation2_value{YType::enumeration, "option2-generation2-value"}
{

    yang_name = "input-exact-ql"; yang_parent_name = "error-source"; is_top_level_class = false; has_list_ancestor = true;
}

FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::InputExactQl::~InputExactQl()
{
}

bool FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::InputExactQl::has_data() const
{
    return quality_level_option.is_set
	|| option1_value.is_set
	|| option2_generation1_value.is_set
	|| option2_generation2_value.is_set;
}

bool FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::InputExactQl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(quality_level_option.yfilter)
	|| ydk::is_set(option1_value.yfilter)
	|| ydk::is_set(option2_generation1_value.yfilter)
	|| ydk::is_set(option2_generation2_value.yfilter);
}

std::string FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::InputExactQl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-exact-ql";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::InputExactQl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (quality_level_option.is_set || is_set(quality_level_option.yfilter)) leaf_name_data.push_back(quality_level_option.get_name_leafdata());
    if (option1_value.is_set || is_set(option1_value.yfilter)) leaf_name_data.push_back(option1_value.get_name_leafdata());
    if (option2_generation1_value.is_set || is_set(option2_generation1_value.yfilter)) leaf_name_data.push_back(option2_generation1_value.get_name_leafdata());
    if (option2_generation2_value.is_set || is_set(option2_generation2_value.yfilter)) leaf_name_data.push_back(option2_generation2_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::InputExactQl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::InputExactQl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::InputExactQl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option = value;
        quality_level_option.value_namespace = name_space;
        quality_level_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option1-value")
    {
        option1_value = value;
        option1_value.value_namespace = name_space;
        option1_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option2-generation1-value")
    {
        option2_generation1_value = value;
        option2_generation1_value.value_namespace = name_space;
        option2_generation1_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option2-generation2-value")
    {
        option2_generation2_value = value;
        option2_generation2_value.value_namespace = name_space;
        option2_generation2_value.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::InputExactQl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option.yfilter = yfilter;
    }
    if(value_path == "option1-value")
    {
        option1_value.yfilter = yfilter;
    }
    if(value_path == "option2-generation1-value")
    {
        option2_generation1_value.yfilter = yfilter;
    }
    if(value_path == "option2-generation2-value")
    {
        option2_generation2_value.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::InputExactQl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "quality-level-option" || name == "option1-value" || name == "option2-generation1-value" || name == "option2-generation2-value")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::InputMaxQl::InputMaxQl()
    :
    quality_level_option{YType::enumeration, "quality-level-option"},
    option1_value{YType::enumeration, "option1-value"},
    option2_generation1_value{YType::enumeration, "option2-generation1-value"},
    option2_generation2_value{YType::enumeration, "option2-generation2-value"}
{

    yang_name = "input-max-ql"; yang_parent_name = "error-source"; is_top_level_class = false; has_list_ancestor = true;
}

FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::InputMaxQl::~InputMaxQl()
{
}

bool FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::InputMaxQl::has_data() const
{
    return quality_level_option.is_set
	|| option1_value.is_set
	|| option2_generation1_value.is_set
	|| option2_generation2_value.is_set;
}

bool FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::InputMaxQl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(quality_level_option.yfilter)
	|| ydk::is_set(option1_value.yfilter)
	|| ydk::is_set(option2_generation1_value.yfilter)
	|| ydk::is_set(option2_generation2_value.yfilter);
}

std::string FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::InputMaxQl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-max-ql";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::InputMaxQl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (quality_level_option.is_set || is_set(quality_level_option.yfilter)) leaf_name_data.push_back(quality_level_option.get_name_leafdata());
    if (option1_value.is_set || is_set(option1_value.yfilter)) leaf_name_data.push_back(option1_value.get_name_leafdata());
    if (option2_generation1_value.is_set || is_set(option2_generation1_value.yfilter)) leaf_name_data.push_back(option2_generation1_value.get_name_leafdata());
    if (option2_generation2_value.is_set || is_set(option2_generation2_value.yfilter)) leaf_name_data.push_back(option2_generation2_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::InputMaxQl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::InputMaxQl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::InputMaxQl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option = value;
        quality_level_option.value_namespace = name_space;
        quality_level_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option1-value")
    {
        option1_value = value;
        option1_value.value_namespace = name_space;
        option1_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option2-generation1-value")
    {
        option2_generation1_value = value;
        option2_generation1_value.value_namespace = name_space;
        option2_generation1_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option2-generation2-value")
    {
        option2_generation2_value = value;
        option2_generation2_value.value_namespace = name_space;
        option2_generation2_value.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::InputMaxQl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option.yfilter = yfilter;
    }
    if(value_path == "option1-value")
    {
        option1_value.yfilter = yfilter;
    }
    if(value_path == "option2-generation1-value")
    {
        option2_generation1_value.yfilter = yfilter;
    }
    if(value_path == "option2-generation2-value")
    {
        option2_generation2_value.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::InputMaxQl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "quality-level-option" || name == "option1-value" || name == "option2-generation1-value" || name == "option2-generation2-value")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::OutputMinQl::OutputMinQl()
    :
    quality_level_option{YType::enumeration, "quality-level-option"},
    option1_value{YType::enumeration, "option1-value"},
    option2_generation1_value{YType::enumeration, "option2-generation1-value"},
    option2_generation2_value{YType::enumeration, "option2-generation2-value"}
{

    yang_name = "output-min-ql"; yang_parent_name = "error-source"; is_top_level_class = false; has_list_ancestor = true;
}

FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::OutputMinQl::~OutputMinQl()
{
}

bool FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::OutputMinQl::has_data() const
{
    return quality_level_option.is_set
	|| option1_value.is_set
	|| option2_generation1_value.is_set
	|| option2_generation2_value.is_set;
}

bool FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::OutputMinQl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(quality_level_option.yfilter)
	|| ydk::is_set(option1_value.yfilter)
	|| ydk::is_set(option2_generation1_value.yfilter)
	|| ydk::is_set(option2_generation2_value.yfilter);
}

std::string FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::OutputMinQl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-min-ql";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::OutputMinQl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (quality_level_option.is_set || is_set(quality_level_option.yfilter)) leaf_name_data.push_back(quality_level_option.get_name_leafdata());
    if (option1_value.is_set || is_set(option1_value.yfilter)) leaf_name_data.push_back(option1_value.get_name_leafdata());
    if (option2_generation1_value.is_set || is_set(option2_generation1_value.yfilter)) leaf_name_data.push_back(option2_generation1_value.get_name_leafdata());
    if (option2_generation2_value.is_set || is_set(option2_generation2_value.yfilter)) leaf_name_data.push_back(option2_generation2_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::OutputMinQl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::OutputMinQl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::OutputMinQl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option = value;
        quality_level_option.value_namespace = name_space;
        quality_level_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option1-value")
    {
        option1_value = value;
        option1_value.value_namespace = name_space;
        option1_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option2-generation1-value")
    {
        option2_generation1_value = value;
        option2_generation1_value.value_namespace = name_space;
        option2_generation1_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option2-generation2-value")
    {
        option2_generation2_value = value;
        option2_generation2_value.value_namespace = name_space;
        option2_generation2_value.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::OutputMinQl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option.yfilter = yfilter;
    }
    if(value_path == "option1-value")
    {
        option1_value.yfilter = yfilter;
    }
    if(value_path == "option2-generation1-value")
    {
        option2_generation1_value.yfilter = yfilter;
    }
    if(value_path == "option2-generation2-value")
    {
        option2_generation2_value.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::OutputMinQl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "quality-level-option" || name == "option1-value" || name == "option2-generation1-value" || name == "option2-generation2-value")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::OutputExactQl::OutputExactQl()
    :
    quality_level_option{YType::enumeration, "quality-level-option"},
    option1_value{YType::enumeration, "option1-value"},
    option2_generation1_value{YType::enumeration, "option2-generation1-value"},
    option2_generation2_value{YType::enumeration, "option2-generation2-value"}
{

    yang_name = "output-exact-ql"; yang_parent_name = "error-source"; is_top_level_class = false; has_list_ancestor = true;
}

FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::OutputExactQl::~OutputExactQl()
{
}

bool FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::OutputExactQl::has_data() const
{
    return quality_level_option.is_set
	|| option1_value.is_set
	|| option2_generation1_value.is_set
	|| option2_generation2_value.is_set;
}

bool FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::OutputExactQl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(quality_level_option.yfilter)
	|| ydk::is_set(option1_value.yfilter)
	|| ydk::is_set(option2_generation1_value.yfilter)
	|| ydk::is_set(option2_generation2_value.yfilter);
}

std::string FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::OutputExactQl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-exact-ql";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::OutputExactQl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (quality_level_option.is_set || is_set(quality_level_option.yfilter)) leaf_name_data.push_back(quality_level_option.get_name_leafdata());
    if (option1_value.is_set || is_set(option1_value.yfilter)) leaf_name_data.push_back(option1_value.get_name_leafdata());
    if (option2_generation1_value.is_set || is_set(option2_generation1_value.yfilter)) leaf_name_data.push_back(option2_generation1_value.get_name_leafdata());
    if (option2_generation2_value.is_set || is_set(option2_generation2_value.yfilter)) leaf_name_data.push_back(option2_generation2_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::OutputExactQl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::OutputExactQl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::OutputExactQl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option = value;
        quality_level_option.value_namespace = name_space;
        quality_level_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option1-value")
    {
        option1_value = value;
        option1_value.value_namespace = name_space;
        option1_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option2-generation1-value")
    {
        option2_generation1_value = value;
        option2_generation1_value.value_namespace = name_space;
        option2_generation1_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option2-generation2-value")
    {
        option2_generation2_value = value;
        option2_generation2_value.value_namespace = name_space;
        option2_generation2_value.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::OutputExactQl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option.yfilter = yfilter;
    }
    if(value_path == "option1-value")
    {
        option1_value.yfilter = yfilter;
    }
    if(value_path == "option2-generation1-value")
    {
        option2_generation1_value.yfilter = yfilter;
    }
    if(value_path == "option2-generation2-value")
    {
        option2_generation2_value.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::OutputExactQl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "quality-level-option" || name == "option1-value" || name == "option2-generation1-value" || name == "option2-generation2-value")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::OutputMaxQl::OutputMaxQl()
    :
    quality_level_option{YType::enumeration, "quality-level-option"},
    option1_value{YType::enumeration, "option1-value"},
    option2_generation1_value{YType::enumeration, "option2-generation1-value"},
    option2_generation2_value{YType::enumeration, "option2-generation2-value"}
{

    yang_name = "output-max-ql"; yang_parent_name = "error-source"; is_top_level_class = false; has_list_ancestor = true;
}

FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::OutputMaxQl::~OutputMaxQl()
{
}

bool FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::OutputMaxQl::has_data() const
{
    return quality_level_option.is_set
	|| option1_value.is_set
	|| option2_generation1_value.is_set
	|| option2_generation2_value.is_set;
}

bool FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::OutputMaxQl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(quality_level_option.yfilter)
	|| ydk::is_set(option1_value.yfilter)
	|| ydk::is_set(option2_generation1_value.yfilter)
	|| ydk::is_set(option2_generation2_value.yfilter);
}

std::string FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::OutputMaxQl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-max-ql";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::OutputMaxQl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (quality_level_option.is_set || is_set(quality_level_option.yfilter)) leaf_name_data.push_back(quality_level_option.get_name_leafdata());
    if (option1_value.is_set || is_set(option1_value.yfilter)) leaf_name_data.push_back(option1_value.get_name_leafdata());
    if (option2_generation1_value.is_set || is_set(option2_generation1_value.yfilter)) leaf_name_data.push_back(option2_generation1_value.get_name_leafdata());
    if (option2_generation2_value.is_set || is_set(option2_generation2_value.yfilter)) leaf_name_data.push_back(option2_generation2_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::OutputMaxQl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::OutputMaxQl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::OutputMaxQl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option = value;
        quality_level_option.value_namespace = name_space;
        quality_level_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option1-value")
    {
        option1_value = value;
        option1_value.value_namespace = name_space;
        option1_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option2-generation1-value")
    {
        option2_generation1_value = value;
        option2_generation1_value.value_namespace = name_space;
        option2_generation1_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option2-generation2-value")
    {
        option2_generation2_value = value;
        option2_generation2_value.value_namespace = name_space;
        option2_generation2_value.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::OutputMaxQl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option.yfilter = yfilter;
    }
    if(value_path == "option1-value")
    {
        option1_value.yfilter = yfilter;
    }
    if(value_path == "option2-generation1-value")
    {
        option2_generation1_value.yfilter = yfilter;
    }
    if(value_path == "option2-generation2-value")
    {
        option2_generation2_value.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::OutputMaxQl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "quality-level-option" || name == "option1-value" || name == "option2-generation1-value" || name == "option2-generation2-value")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::SsmSummary::SsmSummary()
    :
    ethernet_sources{YType::uint32, "ethernet-sources"},
    ethernet_sources_select{YType::uint32, "ethernet-sources-select"},
    ethernet_sources_enabled{YType::uint32, "ethernet-sources-enabled"},
    sonet_sources{YType::uint32, "sonet-sources"},
    sonet_sources_select{YType::uint32, "sonet-sources-select"},
    sonet_sources_enabled{YType::uint32, "sonet-sources-enabled"},
    events_sent{YType::uint32, "events-sent"},
    events_received{YType::uint32, "events-received"},
    infos_sent{YType::uint32, "infos-sent"},
    infos_received{YType::uint32, "infos-received"},
    dn_us_sent{YType::uint32, "dn-us-sent"},
    dn_us_received{YType::uint32, "dn-us-received"}
{

    yang_name = "ssm-summary"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

FrequencySynchronization::Nodes::Node::SsmSummary::~SsmSummary()
{
}

bool FrequencySynchronization::Nodes::Node::SsmSummary::has_data() const
{
    return ethernet_sources.is_set
	|| ethernet_sources_select.is_set
	|| ethernet_sources_enabled.is_set
	|| sonet_sources.is_set
	|| sonet_sources_select.is_set
	|| sonet_sources_enabled.is_set
	|| events_sent.is_set
	|| events_received.is_set
	|| infos_sent.is_set
	|| infos_received.is_set
	|| dn_us_sent.is_set
	|| dn_us_received.is_set;
}

bool FrequencySynchronization::Nodes::Node::SsmSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ethernet_sources.yfilter)
	|| ydk::is_set(ethernet_sources_select.yfilter)
	|| ydk::is_set(ethernet_sources_enabled.yfilter)
	|| ydk::is_set(sonet_sources.yfilter)
	|| ydk::is_set(sonet_sources_select.yfilter)
	|| ydk::is_set(sonet_sources_enabled.yfilter)
	|| ydk::is_set(events_sent.yfilter)
	|| ydk::is_set(events_received.yfilter)
	|| ydk::is_set(infos_sent.yfilter)
	|| ydk::is_set(infos_received.yfilter)
	|| ydk::is_set(dn_us_sent.yfilter)
	|| ydk::is_set(dn_us_received.yfilter);
}

std::string FrequencySynchronization::Nodes::Node::SsmSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssm-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::SsmSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ethernet_sources.is_set || is_set(ethernet_sources.yfilter)) leaf_name_data.push_back(ethernet_sources.get_name_leafdata());
    if (ethernet_sources_select.is_set || is_set(ethernet_sources_select.yfilter)) leaf_name_data.push_back(ethernet_sources_select.get_name_leafdata());
    if (ethernet_sources_enabled.is_set || is_set(ethernet_sources_enabled.yfilter)) leaf_name_data.push_back(ethernet_sources_enabled.get_name_leafdata());
    if (sonet_sources.is_set || is_set(sonet_sources.yfilter)) leaf_name_data.push_back(sonet_sources.get_name_leafdata());
    if (sonet_sources_select.is_set || is_set(sonet_sources_select.yfilter)) leaf_name_data.push_back(sonet_sources_select.get_name_leafdata());
    if (sonet_sources_enabled.is_set || is_set(sonet_sources_enabled.yfilter)) leaf_name_data.push_back(sonet_sources_enabled.get_name_leafdata());
    if (events_sent.is_set || is_set(events_sent.yfilter)) leaf_name_data.push_back(events_sent.get_name_leafdata());
    if (events_received.is_set || is_set(events_received.yfilter)) leaf_name_data.push_back(events_received.get_name_leafdata());
    if (infos_sent.is_set || is_set(infos_sent.yfilter)) leaf_name_data.push_back(infos_sent.get_name_leafdata());
    if (infos_received.is_set || is_set(infos_received.yfilter)) leaf_name_data.push_back(infos_received.get_name_leafdata());
    if (dn_us_sent.is_set || is_set(dn_us_sent.yfilter)) leaf_name_data.push_back(dn_us_sent.get_name_leafdata());
    if (dn_us_received.is_set || is_set(dn_us_received.yfilter)) leaf_name_data.push_back(dn_us_received.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::SsmSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::SsmSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void FrequencySynchronization::Nodes::Node::SsmSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ethernet-sources")
    {
        ethernet_sources = value;
        ethernet_sources.value_namespace = name_space;
        ethernet_sources.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-sources-select")
    {
        ethernet_sources_select = value;
        ethernet_sources_select.value_namespace = name_space;
        ethernet_sources_select.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-sources-enabled")
    {
        ethernet_sources_enabled = value;
        ethernet_sources_enabled.value_namespace = name_space;
        ethernet_sources_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonet-sources")
    {
        sonet_sources = value;
        sonet_sources.value_namespace = name_space;
        sonet_sources.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonet-sources-select")
    {
        sonet_sources_select = value;
        sonet_sources_select.value_namespace = name_space;
        sonet_sources_select.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonet-sources-enabled")
    {
        sonet_sources_enabled = value;
        sonet_sources_enabled.value_namespace = name_space;
        sonet_sources_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "events-sent")
    {
        events_sent = value;
        events_sent.value_namespace = name_space;
        events_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "events-received")
    {
        events_received = value;
        events_received.value_namespace = name_space;
        events_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "infos-sent")
    {
        infos_sent = value;
        infos_sent.value_namespace = name_space;
        infos_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "infos-received")
    {
        infos_received = value;
        infos_received.value_namespace = name_space;
        infos_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dn-us-sent")
    {
        dn_us_sent = value;
        dn_us_sent.value_namespace = name_space;
        dn_us_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dn-us-received")
    {
        dn_us_received = value;
        dn_us_received.value_namespace = name_space;
        dn_us_received.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::SsmSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ethernet-sources")
    {
        ethernet_sources.yfilter = yfilter;
    }
    if(value_path == "ethernet-sources-select")
    {
        ethernet_sources_select.yfilter = yfilter;
    }
    if(value_path == "ethernet-sources-enabled")
    {
        ethernet_sources_enabled.yfilter = yfilter;
    }
    if(value_path == "sonet-sources")
    {
        sonet_sources.yfilter = yfilter;
    }
    if(value_path == "sonet-sources-select")
    {
        sonet_sources_select.yfilter = yfilter;
    }
    if(value_path == "sonet-sources-enabled")
    {
        sonet_sources_enabled.yfilter = yfilter;
    }
    if(value_path == "events-sent")
    {
        events_sent.yfilter = yfilter;
    }
    if(value_path == "events-received")
    {
        events_received.yfilter = yfilter;
    }
    if(value_path == "infos-sent")
    {
        infos_sent.yfilter = yfilter;
    }
    if(value_path == "infos-received")
    {
        infos_received.yfilter = yfilter;
    }
    if(value_path == "dn-us-sent")
    {
        dn_us_sent.yfilter = yfilter;
    }
    if(value_path == "dn-us-received")
    {
        dn_us_received.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::SsmSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet-sources" || name == "ethernet-sources-select" || name == "ethernet-sources-enabled" || name == "sonet-sources" || name == "sonet-sources-select" || name == "sonet-sources-enabled" || name == "events-sent" || name == "events-received" || name == "infos-sent" || name == "infos-received" || name == "dn-us-sent" || name == "dn-us-received")
        return true;
    return false;
}

FrequencySynchronization::Summary::Summary()
{

    yang_name = "summary"; yang_parent_name = "frequency-synchronization"; is_top_level_class = false; has_list_ancestor = false;
}

FrequencySynchronization::Summary::~Summary()
{
}

bool FrequencySynchronization::Summary::has_data() const
{
    for (std::size_t index=0; index<frequency_summary.size(); index++)
    {
        if(frequency_summary[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<time_of_day_summary.size(); index++)
    {
        if(time_of_day_summary[index]->has_data())
            return true;
    }
    return false;
}

bool FrequencySynchronization::Summary::has_operation() const
{
    for (std::size_t index=0; index<frequency_summary.size(); index++)
    {
        if(frequency_summary[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<time_of_day_summary.size(); index++)
    {
        if(time_of_day_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string FrequencySynchronization::Summary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ncs4k-freqsync-oper:frequency-synchronization/" << get_segment_path();
    return path_buffer.str();
}

std::string FrequencySynchronization::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frequency-summary")
    {
        for(auto const & c : frequency_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<FrequencySynchronization::Summary::FrequencySummary>();
        c->parent = this;
        frequency_summary.push_back(c);
        return c;
    }

    if(child_yang_name == "time-of-day-summary")
    {
        for(auto const & c : time_of_day_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<FrequencySynchronization::Summary::TimeOfDaySummary>();
        c->parent = this;
        time_of_day_summary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : frequency_summary)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : time_of_day_summary)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void FrequencySynchronization::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void FrequencySynchronization::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool FrequencySynchronization::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frequency-summary" || name == "time-of-day-summary")
        return true;
    return false;
}

FrequencySynchronization::Summary::FrequencySummary::FrequencySummary()
    :
    clock_count{YType::uint32, "clock-count"},
    ethernet_count{YType::uint32, "ethernet-count"},
    sonet_count{YType::uint32, "sonet-count"}
    	,
    source(std::make_shared<FrequencySynchronization::Summary::FrequencySummary::Source>())
{
    source->parent = this;

    yang_name = "frequency-summary"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false;
}

FrequencySynchronization::Summary::FrequencySummary::~FrequencySummary()
{
}

bool FrequencySynchronization::Summary::FrequencySummary::has_data() const
{
    return clock_count.is_set
	|| ethernet_count.is_set
	|| sonet_count.is_set
	|| (source !=  nullptr && source->has_data());
}

bool FrequencySynchronization::Summary::FrequencySummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clock_count.yfilter)
	|| ydk::is_set(ethernet_count.yfilter)
	|| ydk::is_set(sonet_count.yfilter)
	|| (source !=  nullptr && source->has_operation());
}

std::string FrequencySynchronization::Summary::FrequencySummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ncs4k-freqsync-oper:frequency-synchronization/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string FrequencySynchronization::Summary::FrequencySummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frequency-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Summary::FrequencySummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clock_count.is_set || is_set(clock_count.yfilter)) leaf_name_data.push_back(clock_count.get_name_leafdata());
    if (ethernet_count.is_set || is_set(ethernet_count.yfilter)) leaf_name_data.push_back(ethernet_count.get_name_leafdata());
    if (sonet_count.is_set || is_set(sonet_count.yfilter)) leaf_name_data.push_back(sonet_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Summary::FrequencySummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<FrequencySynchronization::Summary::FrequencySummary::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Summary::FrequencySummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(source != nullptr)
    {
        children["source"] = source;
    }

    return children;
}

void FrequencySynchronization::Summary::FrequencySummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clock-count")
    {
        clock_count = value;
        clock_count.value_namespace = name_space;
        clock_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-count")
    {
        ethernet_count = value;
        ethernet_count.value_namespace = name_space;
        ethernet_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonet-count")
    {
        sonet_count = value;
        sonet_count.value_namespace = name_space;
        sonet_count.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Summary::FrequencySummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clock-count")
    {
        clock_count.yfilter = yfilter;
    }
    if(value_path == "ethernet-count")
    {
        ethernet_count.yfilter = yfilter;
    }
    if(value_path == "sonet-count")
    {
        sonet_count.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Summary::FrequencySummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source" || name == "clock-count" || name == "ethernet-count" || name == "sonet-count")
        return true;
    return false;
}

FrequencySynchronization::Summary::FrequencySummary::Source::Source()
    :
    source_class{YType::enumeration, "source-class"},
    ethernet_interface{YType::str, "ethernet-interface"},
    sonet_interface{YType::str, "sonet-interface"},
    node{YType::str, "node"},
    ptp_node{YType::str, "ptp-node"},
    satellite_access_interface{YType::str, "satellite-access-interface"},
    ntp_node{YType::str, "ntp-node"}
    	,
    clock_id(std::make_shared<FrequencySynchronization::Summary::FrequencySummary::Source::ClockId>())
{
    clock_id->parent = this;

    yang_name = "source"; yang_parent_name = "frequency-summary"; is_top_level_class = false; has_list_ancestor = false;
}

FrequencySynchronization::Summary::FrequencySummary::Source::~Source()
{
}

bool FrequencySynchronization::Summary::FrequencySummary::Source::has_data() const
{
    return source_class.is_set
	|| ethernet_interface.is_set
	|| sonet_interface.is_set
	|| node.is_set
	|| ptp_node.is_set
	|| satellite_access_interface.is_set
	|| ntp_node.is_set
	|| (clock_id !=  nullptr && clock_id->has_data());
}

bool FrequencySynchronization::Summary::FrequencySummary::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_class.yfilter)
	|| ydk::is_set(ethernet_interface.yfilter)
	|| ydk::is_set(sonet_interface.yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(ptp_node.yfilter)
	|| ydk::is_set(satellite_access_interface.yfilter)
	|| ydk::is_set(ntp_node.yfilter)
	|| (clock_id !=  nullptr && clock_id->has_operation());
}

std::string FrequencySynchronization::Summary::FrequencySummary::Source::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ncs4k-freqsync-oper:frequency-synchronization/summary/frequency-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string FrequencySynchronization::Summary::FrequencySummary::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Summary::FrequencySummary::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_class.is_set || is_set(source_class.yfilter)) leaf_name_data.push_back(source_class.get_name_leafdata());
    if (ethernet_interface.is_set || is_set(ethernet_interface.yfilter)) leaf_name_data.push_back(ethernet_interface.get_name_leafdata());
    if (sonet_interface.is_set || is_set(sonet_interface.yfilter)) leaf_name_data.push_back(sonet_interface.get_name_leafdata());
    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (ptp_node.is_set || is_set(ptp_node.yfilter)) leaf_name_data.push_back(ptp_node.get_name_leafdata());
    if (satellite_access_interface.is_set || is_set(satellite_access_interface.yfilter)) leaf_name_data.push_back(satellite_access_interface.get_name_leafdata());
    if (ntp_node.is_set || is_set(ntp_node.yfilter)) leaf_name_data.push_back(ntp_node.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Summary::FrequencySummary::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clock-id")
    {
        if(clock_id == nullptr)
        {
            clock_id = std::make_shared<FrequencySynchronization::Summary::FrequencySummary::Source::ClockId>();
        }
        return clock_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Summary::FrequencySummary::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(clock_id != nullptr)
    {
        children["clock-id"] = clock_id;
    }

    return children;
}

void FrequencySynchronization::Summary::FrequencySummary::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-class")
    {
        source_class = value;
        source_class.value_namespace = name_space;
        source_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-interface")
    {
        ethernet_interface = value;
        ethernet_interface.value_namespace = name_space;
        ethernet_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonet-interface")
    {
        sonet_interface = value;
        sonet_interface.value_namespace = name_space;
        sonet_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ptp-node")
    {
        ptp_node = value;
        ptp_node.value_namespace = name_space;
        ptp_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "satellite-access-interface")
    {
        satellite_access_interface = value;
        satellite_access_interface.value_namespace = name_space;
        satellite_access_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ntp-node")
    {
        ntp_node = value;
        ntp_node.value_namespace = name_space;
        ntp_node.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Summary::FrequencySummary::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-class")
    {
        source_class.yfilter = yfilter;
    }
    if(value_path == "ethernet-interface")
    {
        ethernet_interface.yfilter = yfilter;
    }
    if(value_path == "sonet-interface")
    {
        sonet_interface.yfilter = yfilter;
    }
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "ptp-node")
    {
        ptp_node.yfilter = yfilter;
    }
    if(value_path == "satellite-access-interface")
    {
        satellite_access_interface.yfilter = yfilter;
    }
    if(value_path == "ntp-node")
    {
        ntp_node.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Summary::FrequencySummary::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-id" || name == "source-class" || name == "ethernet-interface" || name == "sonet-interface" || name == "node" || name == "ptp-node" || name == "satellite-access-interface" || name == "ntp-node")
        return true;
    return false;
}

FrequencySynchronization::Summary::FrequencySummary::Source::ClockId::ClockId()
    :
    node{YType::str, "node"},
    port{YType::uint32, "port"}
{

    yang_name = "clock-id"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = false;
}

FrequencySynchronization::Summary::FrequencySummary::Source::ClockId::~ClockId()
{
}

bool FrequencySynchronization::Summary::FrequencySummary::Source::ClockId::has_data() const
{
    return node.is_set
	|| port.is_set;
}

bool FrequencySynchronization::Summary::FrequencySummary::Source::ClockId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string FrequencySynchronization::Summary::FrequencySummary::Source::ClockId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ncs4k-freqsync-oper:frequency-synchronization/summary/frequency-summary/source/" << get_segment_path();
    return path_buffer.str();
}

std::string FrequencySynchronization::Summary::FrequencySummary::Source::ClockId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Summary::FrequencySummary::Source::ClockId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Summary::FrequencySummary::Source::ClockId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Summary::FrequencySummary::Source::ClockId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void FrequencySynchronization::Summary::FrequencySummary::Source::ClockId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Summary::FrequencySummary::Source::ClockId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Summary::FrequencySummary::Source::ClockId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node" || name == "port")
        return true;
    return false;
}

FrequencySynchronization::Summary::TimeOfDaySummary::TimeOfDaySummary()
    :
    node_count{YType::uint32, "node-count"}
    	,
    source(std::make_shared<FrequencySynchronization::Summary::TimeOfDaySummary::Source>())
{
    source->parent = this;

    yang_name = "time-of-day-summary"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false;
}

FrequencySynchronization::Summary::TimeOfDaySummary::~TimeOfDaySummary()
{
}

bool FrequencySynchronization::Summary::TimeOfDaySummary::has_data() const
{
    return node_count.is_set
	|| (source !=  nullptr && source->has_data());
}

bool FrequencySynchronization::Summary::TimeOfDaySummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_count.yfilter)
	|| (source !=  nullptr && source->has_operation());
}

std::string FrequencySynchronization::Summary::TimeOfDaySummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ncs4k-freqsync-oper:frequency-synchronization/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string FrequencySynchronization::Summary::TimeOfDaySummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time-of-day-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Summary::TimeOfDaySummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_count.is_set || is_set(node_count.yfilter)) leaf_name_data.push_back(node_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Summary::TimeOfDaySummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<FrequencySynchronization::Summary::TimeOfDaySummary::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Summary::TimeOfDaySummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(source != nullptr)
    {
        children["source"] = source;
    }

    return children;
}

void FrequencySynchronization::Summary::TimeOfDaySummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-count")
    {
        node_count = value;
        node_count.value_namespace = name_space;
        node_count.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Summary::TimeOfDaySummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-count")
    {
        node_count.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Summary::TimeOfDaySummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source" || name == "node-count")
        return true;
    return false;
}

FrequencySynchronization::Summary::TimeOfDaySummary::Source::Source()
    :
    source_class{YType::enumeration, "source-class"},
    ethernet_interface{YType::str, "ethernet-interface"},
    sonet_interface{YType::str, "sonet-interface"},
    node{YType::str, "node"},
    ptp_node{YType::str, "ptp-node"},
    satellite_access_interface{YType::str, "satellite-access-interface"},
    ntp_node{YType::str, "ntp-node"}
    	,
    clock_id(std::make_shared<FrequencySynchronization::Summary::TimeOfDaySummary::Source::ClockId>())
{
    clock_id->parent = this;

    yang_name = "source"; yang_parent_name = "time-of-day-summary"; is_top_level_class = false; has_list_ancestor = false;
}

FrequencySynchronization::Summary::TimeOfDaySummary::Source::~Source()
{
}

bool FrequencySynchronization::Summary::TimeOfDaySummary::Source::has_data() const
{
    return source_class.is_set
	|| ethernet_interface.is_set
	|| sonet_interface.is_set
	|| node.is_set
	|| ptp_node.is_set
	|| satellite_access_interface.is_set
	|| ntp_node.is_set
	|| (clock_id !=  nullptr && clock_id->has_data());
}

bool FrequencySynchronization::Summary::TimeOfDaySummary::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_class.yfilter)
	|| ydk::is_set(ethernet_interface.yfilter)
	|| ydk::is_set(sonet_interface.yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(ptp_node.yfilter)
	|| ydk::is_set(satellite_access_interface.yfilter)
	|| ydk::is_set(ntp_node.yfilter)
	|| (clock_id !=  nullptr && clock_id->has_operation());
}

std::string FrequencySynchronization::Summary::TimeOfDaySummary::Source::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ncs4k-freqsync-oper:frequency-synchronization/summary/time-of-day-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string FrequencySynchronization::Summary::TimeOfDaySummary::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Summary::TimeOfDaySummary::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_class.is_set || is_set(source_class.yfilter)) leaf_name_data.push_back(source_class.get_name_leafdata());
    if (ethernet_interface.is_set || is_set(ethernet_interface.yfilter)) leaf_name_data.push_back(ethernet_interface.get_name_leafdata());
    if (sonet_interface.is_set || is_set(sonet_interface.yfilter)) leaf_name_data.push_back(sonet_interface.get_name_leafdata());
    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (ptp_node.is_set || is_set(ptp_node.yfilter)) leaf_name_data.push_back(ptp_node.get_name_leafdata());
    if (satellite_access_interface.is_set || is_set(satellite_access_interface.yfilter)) leaf_name_data.push_back(satellite_access_interface.get_name_leafdata());
    if (ntp_node.is_set || is_set(ntp_node.yfilter)) leaf_name_data.push_back(ntp_node.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Summary::TimeOfDaySummary::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clock-id")
    {
        if(clock_id == nullptr)
        {
            clock_id = std::make_shared<FrequencySynchronization::Summary::TimeOfDaySummary::Source::ClockId>();
        }
        return clock_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Summary::TimeOfDaySummary::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(clock_id != nullptr)
    {
        children["clock-id"] = clock_id;
    }

    return children;
}

void FrequencySynchronization::Summary::TimeOfDaySummary::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-class")
    {
        source_class = value;
        source_class.value_namespace = name_space;
        source_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-interface")
    {
        ethernet_interface = value;
        ethernet_interface.value_namespace = name_space;
        ethernet_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonet-interface")
    {
        sonet_interface = value;
        sonet_interface.value_namespace = name_space;
        sonet_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ptp-node")
    {
        ptp_node = value;
        ptp_node.value_namespace = name_space;
        ptp_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "satellite-access-interface")
    {
        satellite_access_interface = value;
        satellite_access_interface.value_namespace = name_space;
        satellite_access_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ntp-node")
    {
        ntp_node = value;
        ntp_node.value_namespace = name_space;
        ntp_node.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Summary::TimeOfDaySummary::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-class")
    {
        source_class.yfilter = yfilter;
    }
    if(value_path == "ethernet-interface")
    {
        ethernet_interface.yfilter = yfilter;
    }
    if(value_path == "sonet-interface")
    {
        sonet_interface.yfilter = yfilter;
    }
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "ptp-node")
    {
        ptp_node.yfilter = yfilter;
    }
    if(value_path == "satellite-access-interface")
    {
        satellite_access_interface.yfilter = yfilter;
    }
    if(value_path == "ntp-node")
    {
        ntp_node.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Summary::TimeOfDaySummary::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-id" || name == "source-class" || name == "ethernet-interface" || name == "sonet-interface" || name == "node" || name == "ptp-node" || name == "satellite-access-interface" || name == "ntp-node")
        return true;
    return false;
}

FrequencySynchronization::Summary::TimeOfDaySummary::Source::ClockId::ClockId()
    :
    node{YType::str, "node"},
    port{YType::uint32, "port"}
{

    yang_name = "clock-id"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = false;
}

FrequencySynchronization::Summary::TimeOfDaySummary::Source::ClockId::~ClockId()
{
}

bool FrequencySynchronization::Summary::TimeOfDaySummary::Source::ClockId::has_data() const
{
    return node.is_set
	|| port.is_set;
}

bool FrequencySynchronization::Summary::TimeOfDaySummary::Source::ClockId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string FrequencySynchronization::Summary::TimeOfDaySummary::Source::ClockId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ncs4k-freqsync-oper:frequency-synchronization/summary/time-of-day-summary/source/" << get_segment_path();
    return path_buffer.str();
}

std::string FrequencySynchronization::Summary::TimeOfDaySummary::Source::ClockId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Summary::TimeOfDaySummary::Source::ClockId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Summary::TimeOfDaySummary::Source::ClockId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Summary::TimeOfDaySummary::Source::ClockId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void FrequencySynchronization::Summary::TimeOfDaySummary::Source::ClockId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Summary::TimeOfDaySummary::Source::ClockId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Summary::TimeOfDaySummary::Source::ClockId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node" || name == "port")
        return true;
    return false;
}

FrequencySynchronization::GlobalNodes::GlobalNodes()
{

    yang_name = "global-nodes"; yang_parent_name = "frequency-synchronization"; is_top_level_class = false; has_list_ancestor = false;
}

FrequencySynchronization::GlobalNodes::~GlobalNodes()
{
}

bool FrequencySynchronization::GlobalNodes::has_data() const
{
    for (std::size_t index=0; index<global_node.size(); index++)
    {
        if(global_node[index]->has_data())
            return true;
    }
    return false;
}

bool FrequencySynchronization::GlobalNodes::has_operation() const
{
    for (std::size_t index=0; index<global_node.size(); index++)
    {
        if(global_node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string FrequencySynchronization::GlobalNodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ncs4k-freqsync-oper:frequency-synchronization/" << get_segment_path();
    return path_buffer.str();
}

std::string FrequencySynchronization::GlobalNodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::GlobalNodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::GlobalNodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global-node")
    {
        for(auto const & c : global_node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<FrequencySynchronization::GlobalNodes::GlobalNode>();
        c->parent = this;
        global_node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::GlobalNodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : global_node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void FrequencySynchronization::GlobalNodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void FrequencySynchronization::GlobalNodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool FrequencySynchronization::GlobalNodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global-node")
        return true;
    return false;
}

FrequencySynchronization::GlobalNodes::GlobalNode::GlobalNode()
    :
    node{YType::str, "node"}
    	,
    time_of_day_back_trace(std::make_shared<FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace>())
	,ntp_selection_forward_trace(std::make_shared<FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace>())
	,ptp_selection_forward_trace(std::make_shared<FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace>())
{
    time_of_day_back_trace->parent = this;
    ntp_selection_forward_trace->parent = this;
    ptp_selection_forward_trace->parent = this;

    yang_name = "global-node"; yang_parent_name = "global-nodes"; is_top_level_class = false; has_list_ancestor = false;
}

FrequencySynchronization::GlobalNodes::GlobalNode::~GlobalNode()
{
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::has_data() const
{
    return node.is_set
	|| (time_of_day_back_trace !=  nullptr && time_of_day_back_trace->has_data())
	|| (ntp_selection_forward_trace !=  nullptr && ntp_selection_forward_trace->has_data())
	|| (ptp_selection_forward_trace !=  nullptr && ptp_selection_forward_trace->has_data());
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter)
	|| (time_of_day_back_trace !=  nullptr && time_of_day_back_trace->has_operation())
	|| (ntp_selection_forward_trace !=  nullptr && ntp_selection_forward_trace->has_operation())
	|| (ptp_selection_forward_trace !=  nullptr && ptp_selection_forward_trace->has_operation());
}

std::string FrequencySynchronization::GlobalNodes::GlobalNode::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ncs4k-freqsync-oper:frequency-synchronization/global-nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string FrequencySynchronization::GlobalNodes::GlobalNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-node" <<"[node='" <<node <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::GlobalNodes::GlobalNode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::GlobalNodes::GlobalNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "time-of-day-back-trace")
    {
        if(time_of_day_back_trace == nullptr)
        {
            time_of_day_back_trace = std::make_shared<FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace>();
        }
        return time_of_day_back_trace;
    }

    if(child_yang_name == "ntp-selection-forward-trace")
    {
        if(ntp_selection_forward_trace == nullptr)
        {
            ntp_selection_forward_trace = std::make_shared<FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace>();
        }
        return ntp_selection_forward_trace;
    }

    if(child_yang_name == "ptp-selection-forward-trace")
    {
        if(ptp_selection_forward_trace == nullptr)
        {
            ptp_selection_forward_trace = std::make_shared<FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace>();
        }
        return ptp_selection_forward_trace;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::GlobalNodes::GlobalNode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(time_of_day_back_trace != nullptr)
    {
        children["time-of-day-back-trace"] = time_of_day_back_trace;
    }

    if(ntp_selection_forward_trace != nullptr)
    {
        children["ntp-selection-forward-trace"] = ntp_selection_forward_trace;
    }

    if(ptp_selection_forward_trace != nullptr)
    {
        children["ptp-selection-forward-trace"] = ptp_selection_forward_trace;
    }

    return children;
}

void FrequencySynchronization::GlobalNodes::GlobalNode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::GlobalNodes::GlobalNode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-of-day-back-trace" || name == "ntp-selection-forward-trace" || name == "ptp-selection-forward-trace" || name == "node")
        return true;
    return false;
}

FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::TimeOfDayBackTrace()
    :
    selected_source(std::make_shared<FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectedSource>())
{
    selected_source->parent = this;

    yang_name = "time-of-day-back-trace"; yang_parent_name = "global-node"; is_top_level_class = false; has_list_ancestor = true;
}

FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::~TimeOfDayBackTrace()
{
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::has_data() const
{
    for (std::size_t index=0; index<selection_point.size(); index++)
    {
        if(selection_point[index]->has_data())
            return true;
    }
    return (selected_source !=  nullptr && selected_source->has_data());
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::has_operation() const
{
    for (std::size_t index=0; index<selection_point.size(); index++)
    {
        if(selection_point[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (selected_source !=  nullptr && selected_source->has_operation());
}

std::string FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time-of-day-back-trace";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "selected-source")
    {
        if(selected_source == nullptr)
        {
            selected_source = std::make_shared<FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectedSource>();
        }
        return selected_source;
    }

    if(child_yang_name == "selection-point")
    {
        for(auto const & c : selection_point)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectionPoint>();
        c->parent = this;
        selection_point.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(selected_source != nullptr)
    {
        children["selected-source"] = selected_source;
    }

    for (auto const & c : selection_point)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "selected-source" || name == "selection-point")
        return true;
    return false;
}

FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectedSource::SelectedSource()
    :
    source_class{YType::enumeration, "source-class"},
    ethernet_interface{YType::str, "ethernet-interface"},
    sonet_interface{YType::str, "sonet-interface"},
    node{YType::str, "node"},
    ptp_node{YType::str, "ptp-node"},
    satellite_access_interface{YType::str, "satellite-access-interface"},
    ntp_node{YType::str, "ntp-node"}
    	,
    clock_id(std::make_shared<FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectedSource::ClockId>())
{
    clock_id->parent = this;

    yang_name = "selected-source"; yang_parent_name = "time-of-day-back-trace"; is_top_level_class = false; has_list_ancestor = true;
}

FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectedSource::~SelectedSource()
{
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectedSource::has_data() const
{
    return source_class.is_set
	|| ethernet_interface.is_set
	|| sonet_interface.is_set
	|| node.is_set
	|| ptp_node.is_set
	|| satellite_access_interface.is_set
	|| ntp_node.is_set
	|| (clock_id !=  nullptr && clock_id->has_data());
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectedSource::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_class.yfilter)
	|| ydk::is_set(ethernet_interface.yfilter)
	|| ydk::is_set(sonet_interface.yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(ptp_node.yfilter)
	|| ydk::is_set(satellite_access_interface.yfilter)
	|| ydk::is_set(ntp_node.yfilter)
	|| (clock_id !=  nullptr && clock_id->has_operation());
}

std::string FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectedSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "selected-source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectedSource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_class.is_set || is_set(source_class.yfilter)) leaf_name_data.push_back(source_class.get_name_leafdata());
    if (ethernet_interface.is_set || is_set(ethernet_interface.yfilter)) leaf_name_data.push_back(ethernet_interface.get_name_leafdata());
    if (sonet_interface.is_set || is_set(sonet_interface.yfilter)) leaf_name_data.push_back(sonet_interface.get_name_leafdata());
    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (ptp_node.is_set || is_set(ptp_node.yfilter)) leaf_name_data.push_back(ptp_node.get_name_leafdata());
    if (satellite_access_interface.is_set || is_set(satellite_access_interface.yfilter)) leaf_name_data.push_back(satellite_access_interface.get_name_leafdata());
    if (ntp_node.is_set || is_set(ntp_node.yfilter)) leaf_name_data.push_back(ntp_node.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectedSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clock-id")
    {
        if(clock_id == nullptr)
        {
            clock_id = std::make_shared<FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectedSource::ClockId>();
        }
        return clock_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectedSource::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(clock_id != nullptr)
    {
        children["clock-id"] = clock_id;
    }

    return children;
}

void FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectedSource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-class")
    {
        source_class = value;
        source_class.value_namespace = name_space;
        source_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-interface")
    {
        ethernet_interface = value;
        ethernet_interface.value_namespace = name_space;
        ethernet_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonet-interface")
    {
        sonet_interface = value;
        sonet_interface.value_namespace = name_space;
        sonet_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ptp-node")
    {
        ptp_node = value;
        ptp_node.value_namespace = name_space;
        ptp_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "satellite-access-interface")
    {
        satellite_access_interface = value;
        satellite_access_interface.value_namespace = name_space;
        satellite_access_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ntp-node")
    {
        ntp_node = value;
        ntp_node.value_namespace = name_space;
        ntp_node.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectedSource::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-class")
    {
        source_class.yfilter = yfilter;
    }
    if(value_path == "ethernet-interface")
    {
        ethernet_interface.yfilter = yfilter;
    }
    if(value_path == "sonet-interface")
    {
        sonet_interface.yfilter = yfilter;
    }
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "ptp-node")
    {
        ptp_node.yfilter = yfilter;
    }
    if(value_path == "satellite-access-interface")
    {
        satellite_access_interface.yfilter = yfilter;
    }
    if(value_path == "ntp-node")
    {
        ntp_node.yfilter = yfilter;
    }
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectedSource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-id" || name == "source-class" || name == "ethernet-interface" || name == "sonet-interface" || name == "node" || name == "ptp-node" || name == "satellite-access-interface" || name == "ntp-node")
        return true;
    return false;
}

FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectedSource::ClockId::ClockId()
    :
    node{YType::str, "node"},
    port{YType::uint32, "port"}
{

    yang_name = "clock-id"; yang_parent_name = "selected-source"; is_top_level_class = false; has_list_ancestor = true;
}

FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectedSource::ClockId::~ClockId()
{
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectedSource::ClockId::has_data() const
{
    return node.is_set
	|| port.is_set;
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectedSource::ClockId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectedSource::ClockId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectedSource::ClockId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectedSource::ClockId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectedSource::ClockId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectedSource::ClockId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectedSource::ClockId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectedSource::ClockId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node" || name == "port")
        return true;
    return false;
}

FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectionPoint::SelectionPoint()
    :
    selection_point_type{YType::uint8, "selection-point-type"},
    selection_point_description{YType::str, "selection-point-description"},
    node{YType::str, "node"}
{

    yang_name = "selection-point"; yang_parent_name = "time-of-day-back-trace"; is_top_level_class = false; has_list_ancestor = true;
}

FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectionPoint::~SelectionPoint()
{
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectionPoint::has_data() const
{
    return selection_point_type.is_set
	|| selection_point_description.is_set
	|| node.is_set;
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectionPoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(selection_point_type.yfilter)
	|| ydk::is_set(selection_point_description.yfilter)
	|| ydk::is_set(node.yfilter);
}

std::string FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectionPoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "selection-point";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectionPoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (selection_point_type.is_set || is_set(selection_point_type.yfilter)) leaf_name_data.push_back(selection_point_type.get_name_leafdata());
    if (selection_point_description.is_set || is_set(selection_point_description.yfilter)) leaf_name_data.push_back(selection_point_description.get_name_leafdata());
    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectionPoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectionPoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectionPoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "selection-point-type")
    {
        selection_point_type = value;
        selection_point_type.value_namespace = name_space;
        selection_point_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selection-point-description")
    {
        selection_point_description = value;
        selection_point_description.value_namespace = name_space;
        selection_point_description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectionPoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "selection-point-type")
    {
        selection_point_type.yfilter = yfilter;
    }
    if(value_path == "selection-point-description")
    {
        selection_point_description.yfilter = yfilter;
    }
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectionPoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "selection-point-type" || name == "selection-point-description" || name == "node")
        return true;
    return false;
}

FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::NtpSelectionForwardTrace()
{

    yang_name = "ntp-selection-forward-trace"; yang_parent_name = "global-node"; is_top_level_class = false; has_list_ancestor = true;
}

FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::~NtpSelectionForwardTrace()
{
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::has_data() const
{
    for (std::size_t index=0; index<forward_trace.size(); index++)
    {
        if(forward_trace[index]->has_data())
            return true;
    }
    return false;
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::has_operation() const
{
    for (std::size_t index=0; index<forward_trace.size(); index++)
    {
        if(forward_trace[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ntp-selection-forward-trace";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "forward-trace")
    {
        for(auto const & c : forward_trace)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace>();
        c->parent = this;
        forward_trace.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : forward_trace)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forward-trace")
        return true;
    return false;
}

FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTrace()
    :
    forward_trace_node(std::make_shared<FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode>())
{
    forward_trace_node->parent = this;

    yang_name = "forward-trace"; yang_parent_name = "ntp-selection-forward-trace"; is_top_level_class = false; has_list_ancestor = true;
}

FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::~ForwardTrace()
{
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::has_data() const
{
    return (forward_trace_node !=  nullptr && forward_trace_node->has_data());
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::has_operation() const
{
    return is_set(yfilter)
	|| (forward_trace_node !=  nullptr && forward_trace_node->has_operation());
}

std::string FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forward-trace";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "forward-trace-node")
    {
        if(forward_trace_node == nullptr)
        {
            forward_trace_node = std::make_shared<FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode>();
        }
        return forward_trace_node;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(forward_trace_node != nullptr)
    {
        children["forward-trace-node"] = forward_trace_node;
    }

    return children;
}

void FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forward-trace-node")
        return true;
    return false;
}

FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::ForwardTraceNode()
    :
    node_type{YType::enumeration, "node-type"}
    	,
    selection_point(std::make_shared<FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint>())
	,source(std::make_shared<FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source>())
{
    selection_point->parent = this;
    source->parent = this;

    yang_name = "forward-trace-node"; yang_parent_name = "forward-trace"; is_top_level_class = false; has_list_ancestor = true;
}

FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::~ForwardTraceNode()
{
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::has_data() const
{
    return node_type.is_set
	|| (selection_point !=  nullptr && selection_point->has_data())
	|| (source !=  nullptr && source->has_data());
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_type.yfilter)
	|| (selection_point !=  nullptr && selection_point->has_operation())
	|| (source !=  nullptr && source->has_operation());
}

std::string FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forward-trace-node";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_type.is_set || is_set(node_type.yfilter)) leaf_name_data.push_back(node_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "selection-point")
    {
        if(selection_point == nullptr)
        {
            selection_point = std::make_shared<FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint>();
        }
        return selection_point;
    }

    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(selection_point != nullptr)
    {
        children["selection-point"] = selection_point;
    }

    if(source != nullptr)
    {
        children["source"] = source;
    }

    return children;
}

void FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-type")
    {
        node_type = value;
        node_type.value_namespace = name_space;
        node_type.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-type")
    {
        node_type.yfilter = yfilter;
    }
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "selection-point" || name == "source" || name == "node-type")
        return true;
    return false;
}

FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint::SelectionPoint()
    :
    selection_point_type{YType::uint8, "selection-point-type"},
    selection_point_description{YType::str, "selection-point-description"},
    node{YType::str, "node"}
{

    yang_name = "selection-point"; yang_parent_name = "forward-trace-node"; is_top_level_class = false; has_list_ancestor = true;
}

FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint::~SelectionPoint()
{
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint::has_data() const
{
    return selection_point_type.is_set
	|| selection_point_description.is_set
	|| node.is_set;
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(selection_point_type.yfilter)
	|| ydk::is_set(selection_point_description.yfilter)
	|| ydk::is_set(node.yfilter);
}

std::string FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "selection-point";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (selection_point_type.is_set || is_set(selection_point_type.yfilter)) leaf_name_data.push_back(selection_point_type.get_name_leafdata());
    if (selection_point_description.is_set || is_set(selection_point_description.yfilter)) leaf_name_data.push_back(selection_point_description.get_name_leafdata());
    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "selection-point-type")
    {
        selection_point_type = value;
        selection_point_type.value_namespace = name_space;
        selection_point_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selection-point-description")
    {
        selection_point_description = value;
        selection_point_description.value_namespace = name_space;
        selection_point_description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "selection-point-type")
    {
        selection_point_type.yfilter = yfilter;
    }
    if(value_path == "selection-point-description")
    {
        selection_point_description.yfilter = yfilter;
    }
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "selection-point-type" || name == "selection-point-description" || name == "node")
        return true;
    return false;
}

FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::Source()
    :
    source_class{YType::enumeration, "source-class"},
    ethernet_interface{YType::str, "ethernet-interface"},
    sonet_interface{YType::str, "sonet-interface"},
    node{YType::str, "node"},
    ptp_node{YType::str, "ptp-node"},
    satellite_access_interface{YType::str, "satellite-access-interface"},
    ntp_node{YType::str, "ntp-node"}
    	,
    clock_id(std::make_shared<FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId>())
{
    clock_id->parent = this;

    yang_name = "source"; yang_parent_name = "forward-trace-node"; is_top_level_class = false; has_list_ancestor = true;
}

FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::~Source()
{
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::has_data() const
{
    return source_class.is_set
	|| ethernet_interface.is_set
	|| sonet_interface.is_set
	|| node.is_set
	|| ptp_node.is_set
	|| satellite_access_interface.is_set
	|| ntp_node.is_set
	|| (clock_id !=  nullptr && clock_id->has_data());
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_class.yfilter)
	|| ydk::is_set(ethernet_interface.yfilter)
	|| ydk::is_set(sonet_interface.yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(ptp_node.yfilter)
	|| ydk::is_set(satellite_access_interface.yfilter)
	|| ydk::is_set(ntp_node.yfilter)
	|| (clock_id !=  nullptr && clock_id->has_operation());
}

std::string FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_class.is_set || is_set(source_class.yfilter)) leaf_name_data.push_back(source_class.get_name_leafdata());
    if (ethernet_interface.is_set || is_set(ethernet_interface.yfilter)) leaf_name_data.push_back(ethernet_interface.get_name_leafdata());
    if (sonet_interface.is_set || is_set(sonet_interface.yfilter)) leaf_name_data.push_back(sonet_interface.get_name_leafdata());
    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (ptp_node.is_set || is_set(ptp_node.yfilter)) leaf_name_data.push_back(ptp_node.get_name_leafdata());
    if (satellite_access_interface.is_set || is_set(satellite_access_interface.yfilter)) leaf_name_data.push_back(satellite_access_interface.get_name_leafdata());
    if (ntp_node.is_set || is_set(ntp_node.yfilter)) leaf_name_data.push_back(ntp_node.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clock-id")
    {
        if(clock_id == nullptr)
        {
            clock_id = std::make_shared<FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId>();
        }
        return clock_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(clock_id != nullptr)
    {
        children["clock-id"] = clock_id;
    }

    return children;
}

void FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-class")
    {
        source_class = value;
        source_class.value_namespace = name_space;
        source_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-interface")
    {
        ethernet_interface = value;
        ethernet_interface.value_namespace = name_space;
        ethernet_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonet-interface")
    {
        sonet_interface = value;
        sonet_interface.value_namespace = name_space;
        sonet_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ptp-node")
    {
        ptp_node = value;
        ptp_node.value_namespace = name_space;
        ptp_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "satellite-access-interface")
    {
        satellite_access_interface = value;
        satellite_access_interface.value_namespace = name_space;
        satellite_access_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ntp-node")
    {
        ntp_node = value;
        ntp_node.value_namespace = name_space;
        ntp_node.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-class")
    {
        source_class.yfilter = yfilter;
    }
    if(value_path == "ethernet-interface")
    {
        ethernet_interface.yfilter = yfilter;
    }
    if(value_path == "sonet-interface")
    {
        sonet_interface.yfilter = yfilter;
    }
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "ptp-node")
    {
        ptp_node.yfilter = yfilter;
    }
    if(value_path == "satellite-access-interface")
    {
        satellite_access_interface.yfilter = yfilter;
    }
    if(value_path == "ntp-node")
    {
        ntp_node.yfilter = yfilter;
    }
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-id" || name == "source-class" || name == "ethernet-interface" || name == "sonet-interface" || name == "node" || name == "ptp-node" || name == "satellite-access-interface" || name == "ntp-node")
        return true;
    return false;
}

FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId::ClockId()
    :
    node{YType::str, "node"},
    port{YType::uint32, "port"}
{

    yang_name = "clock-id"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true;
}

FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId::~ClockId()
{
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId::has_data() const
{
    return node.is_set
	|| port.is_set;
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node" || name == "port")
        return true;
    return false;
}

FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::PtpSelectionForwardTrace()
{

    yang_name = "ptp-selection-forward-trace"; yang_parent_name = "global-node"; is_top_level_class = false; has_list_ancestor = true;
}

FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::~PtpSelectionForwardTrace()
{
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::has_data() const
{
    for (std::size_t index=0; index<forward_trace.size(); index++)
    {
        if(forward_trace[index]->has_data())
            return true;
    }
    return false;
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::has_operation() const
{
    for (std::size_t index=0; index<forward_trace.size(); index++)
    {
        if(forward_trace[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ptp-selection-forward-trace";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "forward-trace")
    {
        for(auto const & c : forward_trace)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace>();
        c->parent = this;
        forward_trace.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : forward_trace)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forward-trace")
        return true;
    return false;
}

FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTrace()
    :
    forward_trace_node(std::make_shared<FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode>())
{
    forward_trace_node->parent = this;

    yang_name = "forward-trace"; yang_parent_name = "ptp-selection-forward-trace"; is_top_level_class = false; has_list_ancestor = true;
}

FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::~ForwardTrace()
{
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::has_data() const
{
    return (forward_trace_node !=  nullptr && forward_trace_node->has_data());
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::has_operation() const
{
    return is_set(yfilter)
	|| (forward_trace_node !=  nullptr && forward_trace_node->has_operation());
}

std::string FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forward-trace";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "forward-trace-node")
    {
        if(forward_trace_node == nullptr)
        {
            forward_trace_node = std::make_shared<FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode>();
        }
        return forward_trace_node;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(forward_trace_node != nullptr)
    {
        children["forward-trace-node"] = forward_trace_node;
    }

    return children;
}

void FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forward-trace-node")
        return true;
    return false;
}

FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::ForwardTraceNode()
    :
    node_type{YType::enumeration, "node-type"}
    	,
    selection_point(std::make_shared<FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint>())
	,source(std::make_shared<FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source>())
{
    selection_point->parent = this;
    source->parent = this;

    yang_name = "forward-trace-node"; yang_parent_name = "forward-trace"; is_top_level_class = false; has_list_ancestor = true;
}

FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::~ForwardTraceNode()
{
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::has_data() const
{
    return node_type.is_set
	|| (selection_point !=  nullptr && selection_point->has_data())
	|| (source !=  nullptr && source->has_data());
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_type.yfilter)
	|| (selection_point !=  nullptr && selection_point->has_operation())
	|| (source !=  nullptr && source->has_operation());
}

std::string FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forward-trace-node";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_type.is_set || is_set(node_type.yfilter)) leaf_name_data.push_back(node_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "selection-point")
    {
        if(selection_point == nullptr)
        {
            selection_point = std::make_shared<FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint>();
        }
        return selection_point;
    }

    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(selection_point != nullptr)
    {
        children["selection-point"] = selection_point;
    }

    if(source != nullptr)
    {
        children["source"] = source;
    }

    return children;
}

void FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-type")
    {
        node_type = value;
        node_type.value_namespace = name_space;
        node_type.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-type")
    {
        node_type.yfilter = yfilter;
    }
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "selection-point" || name == "source" || name == "node-type")
        return true;
    return false;
}

FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint::SelectionPoint()
    :
    selection_point_type{YType::uint8, "selection-point-type"},
    selection_point_description{YType::str, "selection-point-description"},
    node{YType::str, "node"}
{

    yang_name = "selection-point"; yang_parent_name = "forward-trace-node"; is_top_level_class = false; has_list_ancestor = true;
}

FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint::~SelectionPoint()
{
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint::has_data() const
{
    return selection_point_type.is_set
	|| selection_point_description.is_set
	|| node.is_set;
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(selection_point_type.yfilter)
	|| ydk::is_set(selection_point_description.yfilter)
	|| ydk::is_set(node.yfilter);
}

std::string FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "selection-point";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (selection_point_type.is_set || is_set(selection_point_type.yfilter)) leaf_name_data.push_back(selection_point_type.get_name_leafdata());
    if (selection_point_description.is_set || is_set(selection_point_description.yfilter)) leaf_name_data.push_back(selection_point_description.get_name_leafdata());
    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "selection-point-type")
    {
        selection_point_type = value;
        selection_point_type.value_namespace = name_space;
        selection_point_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selection-point-description")
    {
        selection_point_description = value;
        selection_point_description.value_namespace = name_space;
        selection_point_description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "selection-point-type")
    {
        selection_point_type.yfilter = yfilter;
    }
    if(value_path == "selection-point-description")
    {
        selection_point_description.yfilter = yfilter;
    }
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "selection-point-type" || name == "selection-point-description" || name == "node")
        return true;
    return false;
}

FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::Source()
    :
    source_class{YType::enumeration, "source-class"},
    ethernet_interface{YType::str, "ethernet-interface"},
    sonet_interface{YType::str, "sonet-interface"},
    node{YType::str, "node"},
    ptp_node{YType::str, "ptp-node"},
    satellite_access_interface{YType::str, "satellite-access-interface"},
    ntp_node{YType::str, "ntp-node"}
    	,
    clock_id(std::make_shared<FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId>())
{
    clock_id->parent = this;

    yang_name = "source"; yang_parent_name = "forward-trace-node"; is_top_level_class = false; has_list_ancestor = true;
}

FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::~Source()
{
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::has_data() const
{
    return source_class.is_set
	|| ethernet_interface.is_set
	|| sonet_interface.is_set
	|| node.is_set
	|| ptp_node.is_set
	|| satellite_access_interface.is_set
	|| ntp_node.is_set
	|| (clock_id !=  nullptr && clock_id->has_data());
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_class.yfilter)
	|| ydk::is_set(ethernet_interface.yfilter)
	|| ydk::is_set(sonet_interface.yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(ptp_node.yfilter)
	|| ydk::is_set(satellite_access_interface.yfilter)
	|| ydk::is_set(ntp_node.yfilter)
	|| (clock_id !=  nullptr && clock_id->has_operation());
}

std::string FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_class.is_set || is_set(source_class.yfilter)) leaf_name_data.push_back(source_class.get_name_leafdata());
    if (ethernet_interface.is_set || is_set(ethernet_interface.yfilter)) leaf_name_data.push_back(ethernet_interface.get_name_leafdata());
    if (sonet_interface.is_set || is_set(sonet_interface.yfilter)) leaf_name_data.push_back(sonet_interface.get_name_leafdata());
    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (ptp_node.is_set || is_set(ptp_node.yfilter)) leaf_name_data.push_back(ptp_node.get_name_leafdata());
    if (satellite_access_interface.is_set || is_set(satellite_access_interface.yfilter)) leaf_name_data.push_back(satellite_access_interface.get_name_leafdata());
    if (ntp_node.is_set || is_set(ntp_node.yfilter)) leaf_name_data.push_back(ntp_node.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clock-id")
    {
        if(clock_id == nullptr)
        {
            clock_id = std::make_shared<FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId>();
        }
        return clock_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(clock_id != nullptr)
    {
        children["clock-id"] = clock_id;
    }

    return children;
}

void FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-class")
    {
        source_class = value;
        source_class.value_namespace = name_space;
        source_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-interface")
    {
        ethernet_interface = value;
        ethernet_interface.value_namespace = name_space;
        ethernet_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonet-interface")
    {
        sonet_interface = value;
        sonet_interface.value_namespace = name_space;
        sonet_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ptp-node")
    {
        ptp_node = value;
        ptp_node.value_namespace = name_space;
        ptp_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "satellite-access-interface")
    {
        satellite_access_interface = value;
        satellite_access_interface.value_namespace = name_space;
        satellite_access_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ntp-node")
    {
        ntp_node = value;
        ntp_node.value_namespace = name_space;
        ntp_node.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-class")
    {
        source_class.yfilter = yfilter;
    }
    if(value_path == "ethernet-interface")
    {
        ethernet_interface.yfilter = yfilter;
    }
    if(value_path == "sonet-interface")
    {
        sonet_interface.yfilter = yfilter;
    }
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "ptp-node")
    {
        ptp_node.yfilter = yfilter;
    }
    if(value_path == "satellite-access-interface")
    {
        satellite_access_interface.yfilter = yfilter;
    }
    if(value_path == "ntp-node")
    {
        ntp_node.yfilter = yfilter;
    }
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-id" || name == "source-class" || name == "ethernet-interface" || name == "sonet-interface" || name == "node" || name == "ptp-node" || name == "satellite-access-interface" || name == "ntp-node")
        return true;
    return false;
}

FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId::ClockId()
    :
    node{YType::str, "node"},
    port{YType::uint32, "port"}
{

    yang_name = "clock-id"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true;
}

FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId::~ClockId()
{
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId::has_data() const
{
    return node.is_set
	|| port.is_set;
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node" || name == "port")
        return true;
    return false;
}

FrequencySynchronization::Interfaces::Interfaces()
{

    yang_name = "interfaces"; yang_parent_name = "frequency-synchronization"; is_top_level_class = false; has_list_ancestor = false;
}

FrequencySynchronization::Interfaces::~Interfaces()
{
}

bool FrequencySynchronization::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool FrequencySynchronization::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string FrequencySynchronization::Interfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ncs4k-freqsync-oper:frequency-synchronization/" << get_segment_path();
    return path_buffer.str();
}

std::string FrequencySynchronization::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<FrequencySynchronization::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void FrequencySynchronization::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void FrequencySynchronization::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool FrequencySynchronization::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

FrequencySynchronization::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    name{YType::str, "name"},
    state{YType::enumeration, "state"},
    ssm_enabled{YType::boolean, "ssm-enabled"},
    squelched{YType::boolean, "squelched"},
    selection_input{YType::boolean, "selection-input"},
    priority{YType::uint8, "priority"},
    time_of_day_priority{YType::uint8, "time-of-day-priority"},
    damping_state{YType::enumeration, "damping-state"},
    damping_time{YType::uint32, "damping-time"},
    wait_to_restore_time{YType::uint16, "wait-to-restore-time"},
    supports_frequency{YType::boolean, "supports-frequency"},
    supports_time_of_day{YType::boolean, "supports-time-of-day"},
    spa_selection_point{YType::uint8, "spa-selection-point"},
    spa_selection_points_description{YType::str, "spa-selection-points-description"},
    node_selection_point{YType::uint8, "node-selection-point"},
    node_selection_points_description{YType::str, "node-selection-points-description"}
    	,
    source(std::make_shared<FrequencySynchronization::Interfaces::Interface::Source>())
	,selected_source(std::make_shared<FrequencySynchronization::Interfaces::Interface::SelectedSource>())
	,quality_level_received(std::make_shared<FrequencySynchronization::Interfaces::Interface::QualityLevelReceived>())
	,quality_level_damped(std::make_shared<FrequencySynchronization::Interfaces::Interface::QualityLevelDamped>())
	,quality_level_effective_input(std::make_shared<FrequencySynchronization::Interfaces::Interface::QualityLevelEffectiveInput>())
	,quality_level_effective_output(std::make_shared<FrequencySynchronization::Interfaces::Interface::QualityLevelEffectiveOutput>())
	,quality_level_selected_source(std::make_shared<FrequencySynchronization::Interfaces::Interface::QualityLevelSelectedSource>())
	,ethernet_peer_information(std::make_shared<FrequencySynchronization::Interfaces::Interface::EthernetPeerInformation>())
	,esmc_statistics(std::make_shared<FrequencySynchronization::Interfaces::Interface::EsmcStatistics>())
{
    source->parent = this;
    selected_source->parent = this;
    quality_level_received->parent = this;
    quality_level_damped->parent = this;
    quality_level_effective_input->parent = this;
    quality_level_effective_output->parent = this;
    quality_level_selected_source->parent = this;
    ethernet_peer_information->parent = this;
    esmc_statistics->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = false;
}

FrequencySynchronization::Interfaces::Interface::~Interface()
{
}

bool FrequencySynchronization::Interfaces::Interface::has_data() const
{
    for (auto const & leaf : spa_selection_point.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : spa_selection_points_description.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : node_selection_point.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : node_selection_points_description.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return interface_name.is_set
	|| name.is_set
	|| state.is_set
	|| ssm_enabled.is_set
	|| squelched.is_set
	|| selection_input.is_set
	|| priority.is_set
	|| time_of_day_priority.is_set
	|| damping_state.is_set
	|| damping_time.is_set
	|| wait_to_restore_time.is_set
	|| supports_frequency.is_set
	|| supports_time_of_day.is_set
	|| (source !=  nullptr && source->has_data())
	|| (selected_source !=  nullptr && selected_source->has_data())
	|| (quality_level_received !=  nullptr && quality_level_received->has_data())
	|| (quality_level_damped !=  nullptr && quality_level_damped->has_data())
	|| (quality_level_effective_input !=  nullptr && quality_level_effective_input->has_data())
	|| (quality_level_effective_output !=  nullptr && quality_level_effective_output->has_data())
	|| (quality_level_selected_source !=  nullptr && quality_level_selected_source->has_data())
	|| (ethernet_peer_information !=  nullptr && ethernet_peer_information->has_data())
	|| (esmc_statistics !=  nullptr && esmc_statistics->has_data());
}

bool FrequencySynchronization::Interfaces::Interface::has_operation() const
{
    for (auto const & leaf : spa_selection_point.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : spa_selection_points_description.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : node_selection_point.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : node_selection_points_description.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(ssm_enabled.yfilter)
	|| ydk::is_set(squelched.yfilter)
	|| ydk::is_set(selection_input.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(time_of_day_priority.yfilter)
	|| ydk::is_set(damping_state.yfilter)
	|| ydk::is_set(damping_time.yfilter)
	|| ydk::is_set(wait_to_restore_time.yfilter)
	|| ydk::is_set(supports_frequency.yfilter)
	|| ydk::is_set(supports_time_of_day.yfilter)
	|| ydk::is_set(spa_selection_point.yfilter)
	|| ydk::is_set(spa_selection_points_description.yfilter)
	|| ydk::is_set(node_selection_point.yfilter)
	|| ydk::is_set(node_selection_points_description.yfilter)
	|| (source !=  nullptr && source->has_operation())
	|| (selected_source !=  nullptr && selected_source->has_operation())
	|| (quality_level_received !=  nullptr && quality_level_received->has_operation())
	|| (quality_level_damped !=  nullptr && quality_level_damped->has_operation())
	|| (quality_level_effective_input !=  nullptr && quality_level_effective_input->has_operation())
	|| (quality_level_effective_output !=  nullptr && quality_level_effective_output->has_operation())
	|| (quality_level_selected_source !=  nullptr && quality_level_selected_source->has_operation())
	|| (ethernet_peer_information !=  nullptr && ethernet_peer_information->has_operation())
	|| (esmc_statistics !=  nullptr && esmc_statistics->has_operation());
}

std::string FrequencySynchronization::Interfaces::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ncs4k-freqsync-oper:frequency-synchronization/interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string FrequencySynchronization::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (ssm_enabled.is_set || is_set(ssm_enabled.yfilter)) leaf_name_data.push_back(ssm_enabled.get_name_leafdata());
    if (squelched.is_set || is_set(squelched.yfilter)) leaf_name_data.push_back(squelched.get_name_leafdata());
    if (selection_input.is_set || is_set(selection_input.yfilter)) leaf_name_data.push_back(selection_input.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (time_of_day_priority.is_set || is_set(time_of_day_priority.yfilter)) leaf_name_data.push_back(time_of_day_priority.get_name_leafdata());
    if (damping_state.is_set || is_set(damping_state.yfilter)) leaf_name_data.push_back(damping_state.get_name_leafdata());
    if (damping_time.is_set || is_set(damping_time.yfilter)) leaf_name_data.push_back(damping_time.get_name_leafdata());
    if (wait_to_restore_time.is_set || is_set(wait_to_restore_time.yfilter)) leaf_name_data.push_back(wait_to_restore_time.get_name_leafdata());
    if (supports_frequency.is_set || is_set(supports_frequency.yfilter)) leaf_name_data.push_back(supports_frequency.get_name_leafdata());
    if (supports_time_of_day.is_set || is_set(supports_time_of_day.yfilter)) leaf_name_data.push_back(supports_time_of_day.get_name_leafdata());

    auto spa_selection_point_name_datas = spa_selection_point.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), spa_selection_point_name_datas.begin(), spa_selection_point_name_datas.end());
    auto spa_selection_points_description_name_datas = spa_selection_points_description.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), spa_selection_points_description_name_datas.begin(), spa_selection_points_description_name_datas.end());
    auto node_selection_point_name_datas = node_selection_point.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), node_selection_point_name_datas.begin(), node_selection_point_name_datas.end());
    auto node_selection_points_description_name_datas = node_selection_points_description.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), node_selection_points_description_name_datas.begin(), node_selection_points_description_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<FrequencySynchronization::Interfaces::Interface::Source>();
        }
        return source;
    }

    if(child_yang_name == "selected-source")
    {
        if(selected_source == nullptr)
        {
            selected_source = std::make_shared<FrequencySynchronization::Interfaces::Interface::SelectedSource>();
        }
        return selected_source;
    }

    if(child_yang_name == "quality-level-received")
    {
        if(quality_level_received == nullptr)
        {
            quality_level_received = std::make_shared<FrequencySynchronization::Interfaces::Interface::QualityLevelReceived>();
        }
        return quality_level_received;
    }

    if(child_yang_name == "quality-level-damped")
    {
        if(quality_level_damped == nullptr)
        {
            quality_level_damped = std::make_shared<FrequencySynchronization::Interfaces::Interface::QualityLevelDamped>();
        }
        return quality_level_damped;
    }

    if(child_yang_name == "quality-level-effective-input")
    {
        if(quality_level_effective_input == nullptr)
        {
            quality_level_effective_input = std::make_shared<FrequencySynchronization::Interfaces::Interface::QualityLevelEffectiveInput>();
        }
        return quality_level_effective_input;
    }

    if(child_yang_name == "quality-level-effective-output")
    {
        if(quality_level_effective_output == nullptr)
        {
            quality_level_effective_output = std::make_shared<FrequencySynchronization::Interfaces::Interface::QualityLevelEffectiveOutput>();
        }
        return quality_level_effective_output;
    }

    if(child_yang_name == "quality-level-selected-source")
    {
        if(quality_level_selected_source == nullptr)
        {
            quality_level_selected_source = std::make_shared<FrequencySynchronization::Interfaces::Interface::QualityLevelSelectedSource>();
        }
        return quality_level_selected_source;
    }

    if(child_yang_name == "ethernet-peer-information")
    {
        if(ethernet_peer_information == nullptr)
        {
            ethernet_peer_information = std::make_shared<FrequencySynchronization::Interfaces::Interface::EthernetPeerInformation>();
        }
        return ethernet_peer_information;
    }

    if(child_yang_name == "esmc-statistics")
    {
        if(esmc_statistics == nullptr)
        {
            esmc_statistics = std::make_shared<FrequencySynchronization::Interfaces::Interface::EsmcStatistics>();
        }
        return esmc_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(source != nullptr)
    {
        children["source"] = source;
    }

    if(selected_source != nullptr)
    {
        children["selected-source"] = selected_source;
    }

    if(quality_level_received != nullptr)
    {
        children["quality-level-received"] = quality_level_received;
    }

    if(quality_level_damped != nullptr)
    {
        children["quality-level-damped"] = quality_level_damped;
    }

    if(quality_level_effective_input != nullptr)
    {
        children["quality-level-effective-input"] = quality_level_effective_input;
    }

    if(quality_level_effective_output != nullptr)
    {
        children["quality-level-effective-output"] = quality_level_effective_output;
    }

    if(quality_level_selected_source != nullptr)
    {
        children["quality-level-selected-source"] = quality_level_selected_source;
    }

    if(ethernet_peer_information != nullptr)
    {
        children["ethernet-peer-information"] = ethernet_peer_information;
    }

    if(esmc_statistics != nullptr)
    {
        children["esmc-statistics"] = esmc_statistics;
    }

    return children;
}

void FrequencySynchronization::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ssm-enabled")
    {
        ssm_enabled = value;
        ssm_enabled.value_namespace = name_space;
        ssm_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "squelched")
    {
        squelched = value;
        squelched.value_namespace = name_space;
        squelched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selection-input")
    {
        selection_input = value;
        selection_input.value_namespace = name_space;
        selection_input.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-of-day-priority")
    {
        time_of_day_priority = value;
        time_of_day_priority.value_namespace = name_space;
        time_of_day_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "damping-state")
    {
        damping_state = value;
        damping_state.value_namespace = name_space;
        damping_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "damping-time")
    {
        damping_time = value;
        damping_time.value_namespace = name_space;
        damping_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-to-restore-time")
    {
        wait_to_restore_time = value;
        wait_to_restore_time.value_namespace = name_space;
        wait_to_restore_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "supports-frequency")
    {
        supports_frequency = value;
        supports_frequency.value_namespace = name_space;
        supports_frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "supports-time-of-day")
    {
        supports_time_of_day = value;
        supports_time_of_day.value_namespace = name_space;
        supports_time_of_day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spa-selection-point")
    {
        spa_selection_point.append(value);
    }
    if(value_path == "spa-selection-points-description")
    {
        spa_selection_points_description.append(value);
    }
    if(value_path == "node-selection-point")
    {
        node_selection_point.append(value);
    }
    if(value_path == "node-selection-points-description")
    {
        node_selection_points_description.append(value);
    }
}

void FrequencySynchronization::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "ssm-enabled")
    {
        ssm_enabled.yfilter = yfilter;
    }
    if(value_path == "squelched")
    {
        squelched.yfilter = yfilter;
    }
    if(value_path == "selection-input")
    {
        selection_input.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "time-of-day-priority")
    {
        time_of_day_priority.yfilter = yfilter;
    }
    if(value_path == "damping-state")
    {
        damping_state.yfilter = yfilter;
    }
    if(value_path == "damping-time")
    {
        damping_time.yfilter = yfilter;
    }
    if(value_path == "wait-to-restore-time")
    {
        wait_to_restore_time.yfilter = yfilter;
    }
    if(value_path == "supports-frequency")
    {
        supports_frequency.yfilter = yfilter;
    }
    if(value_path == "supports-time-of-day")
    {
        supports_time_of_day.yfilter = yfilter;
    }
    if(value_path == "spa-selection-point")
    {
        spa_selection_point.yfilter = yfilter;
    }
    if(value_path == "spa-selection-points-description")
    {
        spa_selection_points_description.yfilter = yfilter;
    }
    if(value_path == "node-selection-point")
    {
        node_selection_point.yfilter = yfilter;
    }
    if(value_path == "node-selection-points-description")
    {
        node_selection_points_description.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source" || name == "selected-source" || name == "quality-level-received" || name == "quality-level-damped" || name == "quality-level-effective-input" || name == "quality-level-effective-output" || name == "quality-level-selected-source" || name == "ethernet-peer-information" || name == "esmc-statistics" || name == "interface-name" || name == "name" || name == "state" || name == "ssm-enabled" || name == "squelched" || name == "selection-input" || name == "priority" || name == "time-of-day-priority" || name == "damping-state" || name == "damping-time" || name == "wait-to-restore-time" || name == "supports-frequency" || name == "supports-time-of-day" || name == "spa-selection-point" || name == "spa-selection-points-description" || name == "node-selection-point" || name == "node-selection-points-description")
        return true;
    return false;
}

FrequencySynchronization::Interfaces::Interface::Source::Source()
    :
    source_class{YType::enumeration, "source-class"},
    ethernet_interface{YType::str, "ethernet-interface"},
    sonet_interface{YType::str, "sonet-interface"},
    node{YType::str, "node"},
    ptp_node{YType::str, "ptp-node"},
    satellite_access_interface{YType::str, "satellite-access-interface"},
    ntp_node{YType::str, "ntp-node"}
    	,
    clock_id(std::make_shared<FrequencySynchronization::Interfaces::Interface::Source::ClockId>())
{
    clock_id->parent = this;

    yang_name = "source"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

FrequencySynchronization::Interfaces::Interface::Source::~Source()
{
}

bool FrequencySynchronization::Interfaces::Interface::Source::has_data() const
{
    return source_class.is_set
	|| ethernet_interface.is_set
	|| sonet_interface.is_set
	|| node.is_set
	|| ptp_node.is_set
	|| satellite_access_interface.is_set
	|| ntp_node.is_set
	|| (clock_id !=  nullptr && clock_id->has_data());
}

bool FrequencySynchronization::Interfaces::Interface::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_class.yfilter)
	|| ydk::is_set(ethernet_interface.yfilter)
	|| ydk::is_set(sonet_interface.yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(ptp_node.yfilter)
	|| ydk::is_set(satellite_access_interface.yfilter)
	|| ydk::is_set(ntp_node.yfilter)
	|| (clock_id !=  nullptr && clock_id->has_operation());
}

std::string FrequencySynchronization::Interfaces::Interface::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Interfaces::Interface::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_class.is_set || is_set(source_class.yfilter)) leaf_name_data.push_back(source_class.get_name_leafdata());
    if (ethernet_interface.is_set || is_set(ethernet_interface.yfilter)) leaf_name_data.push_back(ethernet_interface.get_name_leafdata());
    if (sonet_interface.is_set || is_set(sonet_interface.yfilter)) leaf_name_data.push_back(sonet_interface.get_name_leafdata());
    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (ptp_node.is_set || is_set(ptp_node.yfilter)) leaf_name_data.push_back(ptp_node.get_name_leafdata());
    if (satellite_access_interface.is_set || is_set(satellite_access_interface.yfilter)) leaf_name_data.push_back(satellite_access_interface.get_name_leafdata());
    if (ntp_node.is_set || is_set(ntp_node.yfilter)) leaf_name_data.push_back(ntp_node.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Interfaces::Interface::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clock-id")
    {
        if(clock_id == nullptr)
        {
            clock_id = std::make_shared<FrequencySynchronization::Interfaces::Interface::Source::ClockId>();
        }
        return clock_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Interfaces::Interface::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(clock_id != nullptr)
    {
        children["clock-id"] = clock_id;
    }

    return children;
}

void FrequencySynchronization::Interfaces::Interface::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-class")
    {
        source_class = value;
        source_class.value_namespace = name_space;
        source_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-interface")
    {
        ethernet_interface = value;
        ethernet_interface.value_namespace = name_space;
        ethernet_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonet-interface")
    {
        sonet_interface = value;
        sonet_interface.value_namespace = name_space;
        sonet_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ptp-node")
    {
        ptp_node = value;
        ptp_node.value_namespace = name_space;
        ptp_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "satellite-access-interface")
    {
        satellite_access_interface = value;
        satellite_access_interface.value_namespace = name_space;
        satellite_access_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ntp-node")
    {
        ntp_node = value;
        ntp_node.value_namespace = name_space;
        ntp_node.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Interfaces::Interface::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-class")
    {
        source_class.yfilter = yfilter;
    }
    if(value_path == "ethernet-interface")
    {
        ethernet_interface.yfilter = yfilter;
    }
    if(value_path == "sonet-interface")
    {
        sonet_interface.yfilter = yfilter;
    }
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "ptp-node")
    {
        ptp_node.yfilter = yfilter;
    }
    if(value_path == "satellite-access-interface")
    {
        satellite_access_interface.yfilter = yfilter;
    }
    if(value_path == "ntp-node")
    {
        ntp_node.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Interfaces::Interface::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-id" || name == "source-class" || name == "ethernet-interface" || name == "sonet-interface" || name == "node" || name == "ptp-node" || name == "satellite-access-interface" || name == "ntp-node")
        return true;
    return false;
}

FrequencySynchronization::Interfaces::Interface::Source::ClockId::ClockId()
    :
    node{YType::str, "node"},
    port{YType::uint32, "port"}
{

    yang_name = "clock-id"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true;
}

FrequencySynchronization::Interfaces::Interface::Source::ClockId::~ClockId()
{
}

bool FrequencySynchronization::Interfaces::Interface::Source::ClockId::has_data() const
{
    return node.is_set
	|| port.is_set;
}

bool FrequencySynchronization::Interfaces::Interface::Source::ClockId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string FrequencySynchronization::Interfaces::Interface::Source::ClockId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Interfaces::Interface::Source::ClockId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Interfaces::Interface::Source::ClockId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Interfaces::Interface::Source::ClockId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void FrequencySynchronization::Interfaces::Interface::Source::ClockId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Interfaces::Interface::Source::ClockId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Interfaces::Interface::Source::ClockId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node" || name == "port")
        return true;
    return false;
}

FrequencySynchronization::Interfaces::Interface::SelectedSource::SelectedSource()
    :
    source_class{YType::enumeration, "source-class"},
    ethernet_interface{YType::str, "ethernet-interface"},
    sonet_interface{YType::str, "sonet-interface"},
    node{YType::str, "node"},
    ptp_node{YType::str, "ptp-node"},
    satellite_access_interface{YType::str, "satellite-access-interface"},
    ntp_node{YType::str, "ntp-node"}
    	,
    clock_id(std::make_shared<FrequencySynchronization::Interfaces::Interface::SelectedSource::ClockId>())
{
    clock_id->parent = this;

    yang_name = "selected-source"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

FrequencySynchronization::Interfaces::Interface::SelectedSource::~SelectedSource()
{
}

bool FrequencySynchronization::Interfaces::Interface::SelectedSource::has_data() const
{
    return source_class.is_set
	|| ethernet_interface.is_set
	|| sonet_interface.is_set
	|| node.is_set
	|| ptp_node.is_set
	|| satellite_access_interface.is_set
	|| ntp_node.is_set
	|| (clock_id !=  nullptr && clock_id->has_data());
}

bool FrequencySynchronization::Interfaces::Interface::SelectedSource::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_class.yfilter)
	|| ydk::is_set(ethernet_interface.yfilter)
	|| ydk::is_set(sonet_interface.yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(ptp_node.yfilter)
	|| ydk::is_set(satellite_access_interface.yfilter)
	|| ydk::is_set(ntp_node.yfilter)
	|| (clock_id !=  nullptr && clock_id->has_operation());
}

std::string FrequencySynchronization::Interfaces::Interface::SelectedSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "selected-source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Interfaces::Interface::SelectedSource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_class.is_set || is_set(source_class.yfilter)) leaf_name_data.push_back(source_class.get_name_leafdata());
    if (ethernet_interface.is_set || is_set(ethernet_interface.yfilter)) leaf_name_data.push_back(ethernet_interface.get_name_leafdata());
    if (sonet_interface.is_set || is_set(sonet_interface.yfilter)) leaf_name_data.push_back(sonet_interface.get_name_leafdata());
    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (ptp_node.is_set || is_set(ptp_node.yfilter)) leaf_name_data.push_back(ptp_node.get_name_leafdata());
    if (satellite_access_interface.is_set || is_set(satellite_access_interface.yfilter)) leaf_name_data.push_back(satellite_access_interface.get_name_leafdata());
    if (ntp_node.is_set || is_set(ntp_node.yfilter)) leaf_name_data.push_back(ntp_node.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Interfaces::Interface::SelectedSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clock-id")
    {
        if(clock_id == nullptr)
        {
            clock_id = std::make_shared<FrequencySynchronization::Interfaces::Interface::SelectedSource::ClockId>();
        }
        return clock_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Interfaces::Interface::SelectedSource::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(clock_id != nullptr)
    {
        children["clock-id"] = clock_id;
    }

    return children;
}

void FrequencySynchronization::Interfaces::Interface::SelectedSource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-class")
    {
        source_class = value;
        source_class.value_namespace = name_space;
        source_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-interface")
    {
        ethernet_interface = value;
        ethernet_interface.value_namespace = name_space;
        ethernet_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonet-interface")
    {
        sonet_interface = value;
        sonet_interface.value_namespace = name_space;
        sonet_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ptp-node")
    {
        ptp_node = value;
        ptp_node.value_namespace = name_space;
        ptp_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "satellite-access-interface")
    {
        satellite_access_interface = value;
        satellite_access_interface.value_namespace = name_space;
        satellite_access_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ntp-node")
    {
        ntp_node = value;
        ntp_node.value_namespace = name_space;
        ntp_node.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Interfaces::Interface::SelectedSource::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-class")
    {
        source_class.yfilter = yfilter;
    }
    if(value_path == "ethernet-interface")
    {
        ethernet_interface.yfilter = yfilter;
    }
    if(value_path == "sonet-interface")
    {
        sonet_interface.yfilter = yfilter;
    }
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "ptp-node")
    {
        ptp_node.yfilter = yfilter;
    }
    if(value_path == "satellite-access-interface")
    {
        satellite_access_interface.yfilter = yfilter;
    }
    if(value_path == "ntp-node")
    {
        ntp_node.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Interfaces::Interface::SelectedSource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-id" || name == "source-class" || name == "ethernet-interface" || name == "sonet-interface" || name == "node" || name == "ptp-node" || name == "satellite-access-interface" || name == "ntp-node")
        return true;
    return false;
}

FrequencySynchronization::Interfaces::Interface::SelectedSource::ClockId::ClockId()
    :
    node{YType::str, "node"},
    port{YType::uint32, "port"}
{

    yang_name = "clock-id"; yang_parent_name = "selected-source"; is_top_level_class = false; has_list_ancestor = true;
}

FrequencySynchronization::Interfaces::Interface::SelectedSource::ClockId::~ClockId()
{
}

bool FrequencySynchronization::Interfaces::Interface::SelectedSource::ClockId::has_data() const
{
    return node.is_set
	|| port.is_set;
}

bool FrequencySynchronization::Interfaces::Interface::SelectedSource::ClockId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string FrequencySynchronization::Interfaces::Interface::SelectedSource::ClockId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Interfaces::Interface::SelectedSource::ClockId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Interfaces::Interface::SelectedSource::ClockId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Interfaces::Interface::SelectedSource::ClockId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void FrequencySynchronization::Interfaces::Interface::SelectedSource::ClockId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Interfaces::Interface::SelectedSource::ClockId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Interfaces::Interface::SelectedSource::ClockId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node" || name == "port")
        return true;
    return false;
}

FrequencySynchronization::Interfaces::Interface::QualityLevelReceived::QualityLevelReceived()
    :
    quality_level_option{YType::enumeration, "quality-level-option"},
    option1_value{YType::enumeration, "option1-value"},
    option2_generation1_value{YType::enumeration, "option2-generation1-value"},
    option2_generation2_value{YType::enumeration, "option2-generation2-value"}
{

    yang_name = "quality-level-received"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

FrequencySynchronization::Interfaces::Interface::QualityLevelReceived::~QualityLevelReceived()
{
}

bool FrequencySynchronization::Interfaces::Interface::QualityLevelReceived::has_data() const
{
    return quality_level_option.is_set
	|| option1_value.is_set
	|| option2_generation1_value.is_set
	|| option2_generation2_value.is_set;
}

bool FrequencySynchronization::Interfaces::Interface::QualityLevelReceived::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(quality_level_option.yfilter)
	|| ydk::is_set(option1_value.yfilter)
	|| ydk::is_set(option2_generation1_value.yfilter)
	|| ydk::is_set(option2_generation2_value.yfilter);
}

std::string FrequencySynchronization::Interfaces::Interface::QualityLevelReceived::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "quality-level-received";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Interfaces::Interface::QualityLevelReceived::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (quality_level_option.is_set || is_set(quality_level_option.yfilter)) leaf_name_data.push_back(quality_level_option.get_name_leafdata());
    if (option1_value.is_set || is_set(option1_value.yfilter)) leaf_name_data.push_back(option1_value.get_name_leafdata());
    if (option2_generation1_value.is_set || is_set(option2_generation1_value.yfilter)) leaf_name_data.push_back(option2_generation1_value.get_name_leafdata());
    if (option2_generation2_value.is_set || is_set(option2_generation2_value.yfilter)) leaf_name_data.push_back(option2_generation2_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Interfaces::Interface::QualityLevelReceived::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Interfaces::Interface::QualityLevelReceived::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void FrequencySynchronization::Interfaces::Interface::QualityLevelReceived::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option = value;
        quality_level_option.value_namespace = name_space;
        quality_level_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option1-value")
    {
        option1_value = value;
        option1_value.value_namespace = name_space;
        option1_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option2-generation1-value")
    {
        option2_generation1_value = value;
        option2_generation1_value.value_namespace = name_space;
        option2_generation1_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option2-generation2-value")
    {
        option2_generation2_value = value;
        option2_generation2_value.value_namespace = name_space;
        option2_generation2_value.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Interfaces::Interface::QualityLevelReceived::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option.yfilter = yfilter;
    }
    if(value_path == "option1-value")
    {
        option1_value.yfilter = yfilter;
    }
    if(value_path == "option2-generation1-value")
    {
        option2_generation1_value.yfilter = yfilter;
    }
    if(value_path == "option2-generation2-value")
    {
        option2_generation2_value.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Interfaces::Interface::QualityLevelReceived::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "quality-level-option" || name == "option1-value" || name == "option2-generation1-value" || name == "option2-generation2-value")
        return true;
    return false;
}

FrequencySynchronization::Interfaces::Interface::QualityLevelDamped::QualityLevelDamped()
    :
    quality_level_option{YType::enumeration, "quality-level-option"},
    option1_value{YType::enumeration, "option1-value"},
    option2_generation1_value{YType::enumeration, "option2-generation1-value"},
    option2_generation2_value{YType::enumeration, "option2-generation2-value"}
{

    yang_name = "quality-level-damped"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

FrequencySynchronization::Interfaces::Interface::QualityLevelDamped::~QualityLevelDamped()
{
}

bool FrequencySynchronization::Interfaces::Interface::QualityLevelDamped::has_data() const
{
    return quality_level_option.is_set
	|| option1_value.is_set
	|| option2_generation1_value.is_set
	|| option2_generation2_value.is_set;
}

bool FrequencySynchronization::Interfaces::Interface::QualityLevelDamped::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(quality_level_option.yfilter)
	|| ydk::is_set(option1_value.yfilter)
	|| ydk::is_set(option2_generation1_value.yfilter)
	|| ydk::is_set(option2_generation2_value.yfilter);
}

std::string FrequencySynchronization::Interfaces::Interface::QualityLevelDamped::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "quality-level-damped";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Interfaces::Interface::QualityLevelDamped::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (quality_level_option.is_set || is_set(quality_level_option.yfilter)) leaf_name_data.push_back(quality_level_option.get_name_leafdata());
    if (option1_value.is_set || is_set(option1_value.yfilter)) leaf_name_data.push_back(option1_value.get_name_leafdata());
    if (option2_generation1_value.is_set || is_set(option2_generation1_value.yfilter)) leaf_name_data.push_back(option2_generation1_value.get_name_leafdata());
    if (option2_generation2_value.is_set || is_set(option2_generation2_value.yfilter)) leaf_name_data.push_back(option2_generation2_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Interfaces::Interface::QualityLevelDamped::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Interfaces::Interface::QualityLevelDamped::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void FrequencySynchronization::Interfaces::Interface::QualityLevelDamped::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option = value;
        quality_level_option.value_namespace = name_space;
        quality_level_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option1-value")
    {
        option1_value = value;
        option1_value.value_namespace = name_space;
        option1_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option2-generation1-value")
    {
        option2_generation1_value = value;
        option2_generation1_value.value_namespace = name_space;
        option2_generation1_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option2-generation2-value")
    {
        option2_generation2_value = value;
        option2_generation2_value.value_namespace = name_space;
        option2_generation2_value.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Interfaces::Interface::QualityLevelDamped::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option.yfilter = yfilter;
    }
    if(value_path == "option1-value")
    {
        option1_value.yfilter = yfilter;
    }
    if(value_path == "option2-generation1-value")
    {
        option2_generation1_value.yfilter = yfilter;
    }
    if(value_path == "option2-generation2-value")
    {
        option2_generation2_value.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Interfaces::Interface::QualityLevelDamped::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "quality-level-option" || name == "option1-value" || name == "option2-generation1-value" || name == "option2-generation2-value")
        return true;
    return false;
}

FrequencySynchronization::Interfaces::Interface::QualityLevelEffectiveInput::QualityLevelEffectiveInput()
    :
    quality_level_option{YType::enumeration, "quality-level-option"},
    option1_value{YType::enumeration, "option1-value"},
    option2_generation1_value{YType::enumeration, "option2-generation1-value"},
    option2_generation2_value{YType::enumeration, "option2-generation2-value"}
{

    yang_name = "quality-level-effective-input"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

FrequencySynchronization::Interfaces::Interface::QualityLevelEffectiveInput::~QualityLevelEffectiveInput()
{
}

bool FrequencySynchronization::Interfaces::Interface::QualityLevelEffectiveInput::has_data() const
{
    return quality_level_option.is_set
	|| option1_value.is_set
	|| option2_generation1_value.is_set
	|| option2_generation2_value.is_set;
}

bool FrequencySynchronization::Interfaces::Interface::QualityLevelEffectiveInput::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(quality_level_option.yfilter)
	|| ydk::is_set(option1_value.yfilter)
	|| ydk::is_set(option2_generation1_value.yfilter)
	|| ydk::is_set(option2_generation2_value.yfilter);
}

std::string FrequencySynchronization::Interfaces::Interface::QualityLevelEffectiveInput::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "quality-level-effective-input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Interfaces::Interface::QualityLevelEffectiveInput::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (quality_level_option.is_set || is_set(quality_level_option.yfilter)) leaf_name_data.push_back(quality_level_option.get_name_leafdata());
    if (option1_value.is_set || is_set(option1_value.yfilter)) leaf_name_data.push_back(option1_value.get_name_leafdata());
    if (option2_generation1_value.is_set || is_set(option2_generation1_value.yfilter)) leaf_name_data.push_back(option2_generation1_value.get_name_leafdata());
    if (option2_generation2_value.is_set || is_set(option2_generation2_value.yfilter)) leaf_name_data.push_back(option2_generation2_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Interfaces::Interface::QualityLevelEffectiveInput::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Interfaces::Interface::QualityLevelEffectiveInput::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void FrequencySynchronization::Interfaces::Interface::QualityLevelEffectiveInput::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option = value;
        quality_level_option.value_namespace = name_space;
        quality_level_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option1-value")
    {
        option1_value = value;
        option1_value.value_namespace = name_space;
        option1_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option2-generation1-value")
    {
        option2_generation1_value = value;
        option2_generation1_value.value_namespace = name_space;
        option2_generation1_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option2-generation2-value")
    {
        option2_generation2_value = value;
        option2_generation2_value.value_namespace = name_space;
        option2_generation2_value.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Interfaces::Interface::QualityLevelEffectiveInput::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option.yfilter = yfilter;
    }
    if(value_path == "option1-value")
    {
        option1_value.yfilter = yfilter;
    }
    if(value_path == "option2-generation1-value")
    {
        option2_generation1_value.yfilter = yfilter;
    }
    if(value_path == "option2-generation2-value")
    {
        option2_generation2_value.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Interfaces::Interface::QualityLevelEffectiveInput::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "quality-level-option" || name == "option1-value" || name == "option2-generation1-value" || name == "option2-generation2-value")
        return true;
    return false;
}

FrequencySynchronization::Interfaces::Interface::QualityLevelEffectiveOutput::QualityLevelEffectiveOutput()
    :
    quality_level_option{YType::enumeration, "quality-level-option"},
    option1_value{YType::enumeration, "option1-value"},
    option2_generation1_value{YType::enumeration, "option2-generation1-value"},
    option2_generation2_value{YType::enumeration, "option2-generation2-value"}
{

    yang_name = "quality-level-effective-output"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

FrequencySynchronization::Interfaces::Interface::QualityLevelEffectiveOutput::~QualityLevelEffectiveOutput()
{
}

bool FrequencySynchronization::Interfaces::Interface::QualityLevelEffectiveOutput::has_data() const
{
    return quality_level_option.is_set
	|| option1_value.is_set
	|| option2_generation1_value.is_set
	|| option2_generation2_value.is_set;
}

bool FrequencySynchronization::Interfaces::Interface::QualityLevelEffectiveOutput::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(quality_level_option.yfilter)
	|| ydk::is_set(option1_value.yfilter)
	|| ydk::is_set(option2_generation1_value.yfilter)
	|| ydk::is_set(option2_generation2_value.yfilter);
}

std::string FrequencySynchronization::Interfaces::Interface::QualityLevelEffectiveOutput::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "quality-level-effective-output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Interfaces::Interface::QualityLevelEffectiveOutput::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (quality_level_option.is_set || is_set(quality_level_option.yfilter)) leaf_name_data.push_back(quality_level_option.get_name_leafdata());
    if (option1_value.is_set || is_set(option1_value.yfilter)) leaf_name_data.push_back(option1_value.get_name_leafdata());
    if (option2_generation1_value.is_set || is_set(option2_generation1_value.yfilter)) leaf_name_data.push_back(option2_generation1_value.get_name_leafdata());
    if (option2_generation2_value.is_set || is_set(option2_generation2_value.yfilter)) leaf_name_data.push_back(option2_generation2_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Interfaces::Interface::QualityLevelEffectiveOutput::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Interfaces::Interface::QualityLevelEffectiveOutput::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void FrequencySynchronization::Interfaces::Interface::QualityLevelEffectiveOutput::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option = value;
        quality_level_option.value_namespace = name_space;
        quality_level_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option1-value")
    {
        option1_value = value;
        option1_value.value_namespace = name_space;
        option1_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option2-generation1-value")
    {
        option2_generation1_value = value;
        option2_generation1_value.value_namespace = name_space;
        option2_generation1_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option2-generation2-value")
    {
        option2_generation2_value = value;
        option2_generation2_value.value_namespace = name_space;
        option2_generation2_value.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Interfaces::Interface::QualityLevelEffectiveOutput::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option.yfilter = yfilter;
    }
    if(value_path == "option1-value")
    {
        option1_value.yfilter = yfilter;
    }
    if(value_path == "option2-generation1-value")
    {
        option2_generation1_value.yfilter = yfilter;
    }
    if(value_path == "option2-generation2-value")
    {
        option2_generation2_value.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Interfaces::Interface::QualityLevelEffectiveOutput::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "quality-level-option" || name == "option1-value" || name == "option2-generation1-value" || name == "option2-generation2-value")
        return true;
    return false;
}

FrequencySynchronization::Interfaces::Interface::QualityLevelSelectedSource::QualityLevelSelectedSource()
    :
    quality_level_option{YType::enumeration, "quality-level-option"},
    option1_value{YType::enumeration, "option1-value"},
    option2_generation1_value{YType::enumeration, "option2-generation1-value"},
    option2_generation2_value{YType::enumeration, "option2-generation2-value"}
{

    yang_name = "quality-level-selected-source"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

FrequencySynchronization::Interfaces::Interface::QualityLevelSelectedSource::~QualityLevelSelectedSource()
{
}

bool FrequencySynchronization::Interfaces::Interface::QualityLevelSelectedSource::has_data() const
{
    return quality_level_option.is_set
	|| option1_value.is_set
	|| option2_generation1_value.is_set
	|| option2_generation2_value.is_set;
}

bool FrequencySynchronization::Interfaces::Interface::QualityLevelSelectedSource::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(quality_level_option.yfilter)
	|| ydk::is_set(option1_value.yfilter)
	|| ydk::is_set(option2_generation1_value.yfilter)
	|| ydk::is_set(option2_generation2_value.yfilter);
}

std::string FrequencySynchronization::Interfaces::Interface::QualityLevelSelectedSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "quality-level-selected-source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Interfaces::Interface::QualityLevelSelectedSource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (quality_level_option.is_set || is_set(quality_level_option.yfilter)) leaf_name_data.push_back(quality_level_option.get_name_leafdata());
    if (option1_value.is_set || is_set(option1_value.yfilter)) leaf_name_data.push_back(option1_value.get_name_leafdata());
    if (option2_generation1_value.is_set || is_set(option2_generation1_value.yfilter)) leaf_name_data.push_back(option2_generation1_value.get_name_leafdata());
    if (option2_generation2_value.is_set || is_set(option2_generation2_value.yfilter)) leaf_name_data.push_back(option2_generation2_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Interfaces::Interface::QualityLevelSelectedSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Interfaces::Interface::QualityLevelSelectedSource::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void FrequencySynchronization::Interfaces::Interface::QualityLevelSelectedSource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option = value;
        quality_level_option.value_namespace = name_space;
        quality_level_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option1-value")
    {
        option1_value = value;
        option1_value.value_namespace = name_space;
        option1_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option2-generation1-value")
    {
        option2_generation1_value = value;
        option2_generation1_value.value_namespace = name_space;
        option2_generation1_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option2-generation2-value")
    {
        option2_generation2_value = value;
        option2_generation2_value.value_namespace = name_space;
        option2_generation2_value.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Interfaces::Interface::QualityLevelSelectedSource::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option.yfilter = yfilter;
    }
    if(value_path == "option1-value")
    {
        option1_value.yfilter = yfilter;
    }
    if(value_path == "option2-generation1-value")
    {
        option2_generation1_value.yfilter = yfilter;
    }
    if(value_path == "option2-generation2-value")
    {
        option2_generation2_value.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Interfaces::Interface::QualityLevelSelectedSource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "quality-level-option" || name == "option1-value" || name == "option2-generation1-value" || name == "option2-generation2-value")
        return true;
    return false;
}

FrequencySynchronization::Interfaces::Interface::EthernetPeerInformation::EthernetPeerInformation()
    :
    peer_state{YType::enumeration, "peer-state"},
    peer_up_count{YType::uint16, "peer-up-count"},
    peer_timeout_count{YType::uint16, "peer-timeout-count"}
    	,
    peer_state_time(std::make_shared<FrequencySynchronization::Interfaces::Interface::EthernetPeerInformation::PeerStateTime>())
	,last_ssm(std::make_shared<FrequencySynchronization::Interfaces::Interface::EthernetPeerInformation::LastSsm>())
{
    peer_state_time->parent = this;
    last_ssm->parent = this;

    yang_name = "ethernet-peer-information"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

FrequencySynchronization::Interfaces::Interface::EthernetPeerInformation::~EthernetPeerInformation()
{
}

bool FrequencySynchronization::Interfaces::Interface::EthernetPeerInformation::has_data() const
{
    return peer_state.is_set
	|| peer_up_count.is_set
	|| peer_timeout_count.is_set
	|| (peer_state_time !=  nullptr && peer_state_time->has_data())
	|| (last_ssm !=  nullptr && last_ssm->has_data());
}

bool FrequencySynchronization::Interfaces::Interface::EthernetPeerInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_state.yfilter)
	|| ydk::is_set(peer_up_count.yfilter)
	|| ydk::is_set(peer_timeout_count.yfilter)
	|| (peer_state_time !=  nullptr && peer_state_time->has_operation())
	|| (last_ssm !=  nullptr && last_ssm->has_operation());
}

std::string FrequencySynchronization::Interfaces::Interface::EthernetPeerInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-peer-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Interfaces::Interface::EthernetPeerInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_state.is_set || is_set(peer_state.yfilter)) leaf_name_data.push_back(peer_state.get_name_leafdata());
    if (peer_up_count.is_set || is_set(peer_up_count.yfilter)) leaf_name_data.push_back(peer_up_count.get_name_leafdata());
    if (peer_timeout_count.is_set || is_set(peer_timeout_count.yfilter)) leaf_name_data.push_back(peer_timeout_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Interfaces::Interface::EthernetPeerInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-state-time")
    {
        if(peer_state_time == nullptr)
        {
            peer_state_time = std::make_shared<FrequencySynchronization::Interfaces::Interface::EthernetPeerInformation::PeerStateTime>();
        }
        return peer_state_time;
    }

    if(child_yang_name == "last-ssm")
    {
        if(last_ssm == nullptr)
        {
            last_ssm = std::make_shared<FrequencySynchronization::Interfaces::Interface::EthernetPeerInformation::LastSsm>();
        }
        return last_ssm;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Interfaces::Interface::EthernetPeerInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer_state_time != nullptr)
    {
        children["peer-state-time"] = peer_state_time;
    }

    if(last_ssm != nullptr)
    {
        children["last-ssm"] = last_ssm;
    }

    return children;
}

void FrequencySynchronization::Interfaces::Interface::EthernetPeerInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-state")
    {
        peer_state = value;
        peer_state.value_namespace = name_space;
        peer_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-up-count")
    {
        peer_up_count = value;
        peer_up_count.value_namespace = name_space;
        peer_up_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-timeout-count")
    {
        peer_timeout_count = value;
        peer_timeout_count.value_namespace = name_space;
        peer_timeout_count.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Interfaces::Interface::EthernetPeerInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-state")
    {
        peer_state.yfilter = yfilter;
    }
    if(value_path == "peer-up-count")
    {
        peer_up_count.yfilter = yfilter;
    }
    if(value_path == "peer-timeout-count")
    {
        peer_timeout_count.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Interfaces::Interface::EthernetPeerInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-state-time" || name == "last-ssm" || name == "peer-state" || name == "peer-up-count" || name == "peer-timeout-count")
        return true;
    return false;
}

FrequencySynchronization::Interfaces::Interface::EthernetPeerInformation::PeerStateTime::PeerStateTime()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "peer-state-time"; yang_parent_name = "ethernet-peer-information"; is_top_level_class = false; has_list_ancestor = true;
}

FrequencySynchronization::Interfaces::Interface::EthernetPeerInformation::PeerStateTime::~PeerStateTime()
{
}

bool FrequencySynchronization::Interfaces::Interface::EthernetPeerInformation::PeerStateTime::has_data() const
{
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool FrequencySynchronization::Interfaces::Interface::EthernetPeerInformation::PeerStateTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string FrequencySynchronization::Interfaces::Interface::EthernetPeerInformation::PeerStateTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-state-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Interfaces::Interface::EthernetPeerInformation::PeerStateTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Interfaces::Interface::EthernetPeerInformation::PeerStateTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Interfaces::Interface::EthernetPeerInformation::PeerStateTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void FrequencySynchronization::Interfaces::Interface::EthernetPeerInformation::PeerStateTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Interfaces::Interface::EthernetPeerInformation::PeerStateTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Interfaces::Interface::EthernetPeerInformation::PeerStateTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

FrequencySynchronization::Interfaces::Interface::EthernetPeerInformation::LastSsm::LastSsm()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "last-ssm"; yang_parent_name = "ethernet-peer-information"; is_top_level_class = false; has_list_ancestor = true;
}

FrequencySynchronization::Interfaces::Interface::EthernetPeerInformation::LastSsm::~LastSsm()
{
}

bool FrequencySynchronization::Interfaces::Interface::EthernetPeerInformation::LastSsm::has_data() const
{
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool FrequencySynchronization::Interfaces::Interface::EthernetPeerInformation::LastSsm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string FrequencySynchronization::Interfaces::Interface::EthernetPeerInformation::LastSsm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-ssm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Interfaces::Interface::EthernetPeerInformation::LastSsm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Interfaces::Interface::EthernetPeerInformation::LastSsm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Interfaces::Interface::EthernetPeerInformation::LastSsm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void FrequencySynchronization::Interfaces::Interface::EthernetPeerInformation::LastSsm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Interfaces::Interface::EthernetPeerInformation::LastSsm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Interfaces::Interface::EthernetPeerInformation::LastSsm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

FrequencySynchronization::Interfaces::Interface::EsmcStatistics::EsmcStatistics()
    :
    esmc_events_sent{YType::uint16, "esmc-events-sent"},
    esmc_events_received{YType::uint16, "esmc-events-received"},
    esmc_infos_sent{YType::uint32, "esmc-infos-sent"},
    esmc_infos_received{YType::uint32, "esmc-infos-received"},
    esmc_dn_us_sent{YType::uint32, "esmc-dn-us-sent"},
    esmc_dn_us_received{YType::uint32, "esmc-dn-us-received"},
    esmc_malformed_received{YType::uint16, "esmc-malformed-received"},
    esmc_received_error{YType::uint16, "esmc-received-error"}
{

    yang_name = "esmc-statistics"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

FrequencySynchronization::Interfaces::Interface::EsmcStatistics::~EsmcStatistics()
{
}

bool FrequencySynchronization::Interfaces::Interface::EsmcStatistics::has_data() const
{
    return esmc_events_sent.is_set
	|| esmc_events_received.is_set
	|| esmc_infos_sent.is_set
	|| esmc_infos_received.is_set
	|| esmc_dn_us_sent.is_set
	|| esmc_dn_us_received.is_set
	|| esmc_malformed_received.is_set
	|| esmc_received_error.is_set;
}

bool FrequencySynchronization::Interfaces::Interface::EsmcStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(esmc_events_sent.yfilter)
	|| ydk::is_set(esmc_events_received.yfilter)
	|| ydk::is_set(esmc_infos_sent.yfilter)
	|| ydk::is_set(esmc_infos_received.yfilter)
	|| ydk::is_set(esmc_dn_us_sent.yfilter)
	|| ydk::is_set(esmc_dn_us_received.yfilter)
	|| ydk::is_set(esmc_malformed_received.yfilter)
	|| ydk::is_set(esmc_received_error.yfilter);
}

std::string FrequencySynchronization::Interfaces::Interface::EsmcStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "esmc-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Interfaces::Interface::EsmcStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (esmc_events_sent.is_set || is_set(esmc_events_sent.yfilter)) leaf_name_data.push_back(esmc_events_sent.get_name_leafdata());
    if (esmc_events_received.is_set || is_set(esmc_events_received.yfilter)) leaf_name_data.push_back(esmc_events_received.get_name_leafdata());
    if (esmc_infos_sent.is_set || is_set(esmc_infos_sent.yfilter)) leaf_name_data.push_back(esmc_infos_sent.get_name_leafdata());
    if (esmc_infos_received.is_set || is_set(esmc_infos_received.yfilter)) leaf_name_data.push_back(esmc_infos_received.get_name_leafdata());
    if (esmc_dn_us_sent.is_set || is_set(esmc_dn_us_sent.yfilter)) leaf_name_data.push_back(esmc_dn_us_sent.get_name_leafdata());
    if (esmc_dn_us_received.is_set || is_set(esmc_dn_us_received.yfilter)) leaf_name_data.push_back(esmc_dn_us_received.get_name_leafdata());
    if (esmc_malformed_received.is_set || is_set(esmc_malformed_received.yfilter)) leaf_name_data.push_back(esmc_malformed_received.get_name_leafdata());
    if (esmc_received_error.is_set || is_set(esmc_received_error.yfilter)) leaf_name_data.push_back(esmc_received_error.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Interfaces::Interface::EsmcStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Interfaces::Interface::EsmcStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void FrequencySynchronization::Interfaces::Interface::EsmcStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "esmc-events-sent")
    {
        esmc_events_sent = value;
        esmc_events_sent.value_namespace = name_space;
        esmc_events_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esmc-events-received")
    {
        esmc_events_received = value;
        esmc_events_received.value_namespace = name_space;
        esmc_events_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esmc-infos-sent")
    {
        esmc_infos_sent = value;
        esmc_infos_sent.value_namespace = name_space;
        esmc_infos_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esmc-infos-received")
    {
        esmc_infos_received = value;
        esmc_infos_received.value_namespace = name_space;
        esmc_infos_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esmc-dn-us-sent")
    {
        esmc_dn_us_sent = value;
        esmc_dn_us_sent.value_namespace = name_space;
        esmc_dn_us_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esmc-dn-us-received")
    {
        esmc_dn_us_received = value;
        esmc_dn_us_received.value_namespace = name_space;
        esmc_dn_us_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esmc-malformed-received")
    {
        esmc_malformed_received = value;
        esmc_malformed_received.value_namespace = name_space;
        esmc_malformed_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esmc-received-error")
    {
        esmc_received_error = value;
        esmc_received_error.value_namespace = name_space;
        esmc_received_error.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Interfaces::Interface::EsmcStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "esmc-events-sent")
    {
        esmc_events_sent.yfilter = yfilter;
    }
    if(value_path == "esmc-events-received")
    {
        esmc_events_received.yfilter = yfilter;
    }
    if(value_path == "esmc-infos-sent")
    {
        esmc_infos_sent.yfilter = yfilter;
    }
    if(value_path == "esmc-infos-received")
    {
        esmc_infos_received.yfilter = yfilter;
    }
    if(value_path == "esmc-dn-us-sent")
    {
        esmc_dn_us_sent.yfilter = yfilter;
    }
    if(value_path == "esmc-dn-us-received")
    {
        esmc_dn_us_received.yfilter = yfilter;
    }
    if(value_path == "esmc-malformed-received")
    {
        esmc_malformed_received.yfilter = yfilter;
    }
    if(value_path == "esmc-received-error")
    {
        esmc_received_error.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Interfaces::Interface::EsmcStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "esmc-events-sent" || name == "esmc-events-received" || name == "esmc-infos-sent" || name == "esmc-infos-received" || name == "esmc-dn-us-sent" || name == "esmc-dn-us-received" || name == "esmc-malformed-received" || name == "esmc-received-error")
        return true;
    return false;
}

FrequencySynchronization::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTraces()
{

    yang_name = "clock-interface-selection-forward-traces"; yang_parent_name = "frequency-synchronization"; is_top_level_class = false; has_list_ancestor = false;
}

FrequencySynchronization::ClockInterfaceSelectionForwardTraces::~ClockInterfaceSelectionForwardTraces()
{
}

bool FrequencySynchronization::ClockInterfaceSelectionForwardTraces::has_data() const
{
    for (std::size_t index=0; index<clock_interface_selection_forward_trace.size(); index++)
    {
        if(clock_interface_selection_forward_trace[index]->has_data())
            return true;
    }
    return false;
}

bool FrequencySynchronization::ClockInterfaceSelectionForwardTraces::has_operation() const
{
    for (std::size_t index=0; index<clock_interface_selection_forward_trace.size(); index++)
    {
        if(clock_interface_selection_forward_trace[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string FrequencySynchronization::ClockInterfaceSelectionForwardTraces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ncs4k-freqsync-oper:frequency-synchronization/" << get_segment_path();
    return path_buffer.str();
}

std::string FrequencySynchronization::ClockInterfaceSelectionForwardTraces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock-interface-selection-forward-traces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::ClockInterfaceSelectionForwardTraces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::ClockInterfaceSelectionForwardTraces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clock-interface-selection-forward-trace")
    {
        for(auto const & c : clock_interface_selection_forward_trace)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<FrequencySynchronization::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace>();
        c->parent = this;
        clock_interface_selection_forward_trace.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::ClockInterfaceSelectionForwardTraces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : clock_interface_selection_forward_trace)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void FrequencySynchronization::ClockInterfaceSelectionForwardTraces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void FrequencySynchronization::ClockInterfaceSelectionForwardTraces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool FrequencySynchronization::ClockInterfaceSelectionForwardTraces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-interface-selection-forward-trace")
        return true;
    return false;
}

FrequencySynchronization::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ClockInterfaceSelectionForwardTrace()
    :
    clock_name{YType::str, "clock-name"}
{

    yang_name = "clock-interface-selection-forward-trace"; yang_parent_name = "clock-interface-selection-forward-traces"; is_top_level_class = false; has_list_ancestor = false;
}

FrequencySynchronization::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::~ClockInterfaceSelectionForwardTrace()
{
}

bool FrequencySynchronization::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::has_data() const
{
    for (std::size_t index=0; index<forward_trace.size(); index++)
    {
        if(forward_trace[index]->has_data())
            return true;
    }
    return clock_name.is_set;
}

bool FrequencySynchronization::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::has_operation() const
{
    for (std::size_t index=0; index<forward_trace.size(); index++)
    {
        if(forward_trace[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(clock_name.yfilter);
}

std::string FrequencySynchronization::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ncs4k-freqsync-oper:frequency-synchronization/clock-interface-selection-forward-traces/" << get_segment_path();
    return path_buffer.str();
}

std::string FrequencySynchronization::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock-interface-selection-forward-trace" <<"[clock-name='" <<clock_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clock_name.is_set || is_set(clock_name.yfilter)) leaf_name_data.push_back(clock_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "forward-trace")
    {
        for(auto const & c : forward_trace)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<FrequencySynchronization::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace>();
        c->parent = this;
        forward_trace.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : forward_trace)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void FrequencySynchronization::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clock-name")
    {
        clock_name = value;
        clock_name.value_namespace = name_space;
        clock_name.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clock-name")
    {
        clock_name.yfilter = yfilter;
    }
}

bool FrequencySynchronization::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forward-trace" || name == "clock-name")
        return true;
    return false;
}

FrequencySynchronization::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTrace()
    :
    forward_trace_node(std::make_shared<FrequencySynchronization::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode>())
{
    forward_trace_node->parent = this;

    yang_name = "forward-trace"; yang_parent_name = "clock-interface-selection-forward-trace"; is_top_level_class = false; has_list_ancestor = true;
}

FrequencySynchronization::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::~ForwardTrace()
{
}

bool FrequencySynchronization::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::has_data() const
{
    return (forward_trace_node !=  nullptr && forward_trace_node->has_data());
}

bool FrequencySynchronization::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::has_operation() const
{
    return is_set(yfilter)
	|| (forward_trace_node !=  nullptr && forward_trace_node->has_operation());
}

std::string FrequencySynchronization::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forward-trace";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "forward-trace-node")
    {
        if(forward_trace_node == nullptr)
        {
            forward_trace_node = std::make_shared<FrequencySynchronization::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode>();
        }
        return forward_trace_node;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(forward_trace_node != nullptr)
    {
        children["forward-trace-node"] = forward_trace_node;
    }

    return children;
}

void FrequencySynchronization::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void FrequencySynchronization::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool FrequencySynchronization::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forward-trace-node")
        return true;
    return false;
}

FrequencySynchronization::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::ForwardTraceNode()
    :
    node_type{YType::enumeration, "node-type"}
    	,
    selection_point(std::make_shared<FrequencySynchronization::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint>())
	,source(std::make_shared<FrequencySynchronization::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source>())
{
    selection_point->parent = this;
    source->parent = this;

    yang_name = "forward-trace-node"; yang_parent_name = "forward-trace"; is_top_level_class = false; has_list_ancestor = true;
}

FrequencySynchronization::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::~ForwardTraceNode()
{
}

bool FrequencySynchronization::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::has_data() const
{
    return node_type.is_set
	|| (selection_point !=  nullptr && selection_point->has_data())
	|| (source !=  nullptr && source->has_data());
}

bool FrequencySynchronization::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_type.yfilter)
	|| (selection_point !=  nullptr && selection_point->has_operation())
	|| (source !=  nullptr && source->has_operation());
}

std::string FrequencySynchronization::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forward-trace-node";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_type.is_set || is_set(node_type.yfilter)) leaf_name_data.push_back(node_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "selection-point")
    {
        if(selection_point == nullptr)
        {
            selection_point = std::make_shared<FrequencySynchronization::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint>();
        }
        return selection_point;
    }

    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<FrequencySynchronization::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(selection_point != nullptr)
    {
        children["selection-point"] = selection_point;
    }

    if(source != nullptr)
    {
        children["source"] = source;
    }

    return children;
}

void FrequencySynchronization::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-type")
    {
        node_type = value;
        node_type.value_namespace = name_space;
        node_type.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-type")
    {
        node_type.yfilter = yfilter;
    }
}

bool FrequencySynchronization::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "selection-point" || name == "source" || name == "node-type")
        return true;
    return false;
}

FrequencySynchronization::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint::SelectionPoint()
    :
    selection_point_type{YType::uint8, "selection-point-type"},
    selection_point_description{YType::str, "selection-point-description"},
    node{YType::str, "node"}
{

    yang_name = "selection-point"; yang_parent_name = "forward-trace-node"; is_top_level_class = false; has_list_ancestor = true;
}

FrequencySynchronization::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint::~SelectionPoint()
{
}

bool FrequencySynchronization::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint::has_data() const
{
    return selection_point_type.is_set
	|| selection_point_description.is_set
	|| node.is_set;
}

bool FrequencySynchronization::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(selection_point_type.yfilter)
	|| ydk::is_set(selection_point_description.yfilter)
	|| ydk::is_set(node.yfilter);
}

std::string FrequencySynchronization::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "selection-point";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (selection_point_type.is_set || is_set(selection_point_type.yfilter)) leaf_name_data.push_back(selection_point_type.get_name_leafdata());
    if (selection_point_description.is_set || is_set(selection_point_description.yfilter)) leaf_name_data.push_back(selection_point_description.get_name_leafdata());
    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void FrequencySynchronization::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "selection-point-type")
    {
        selection_point_type = value;
        selection_point_type.value_namespace = name_space;
        selection_point_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selection-point-description")
    {
        selection_point_description = value;
        selection_point_description.value_namespace = name_space;
        selection_point_description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "selection-point-type")
    {
        selection_point_type.yfilter = yfilter;
    }
    if(value_path == "selection-point-description")
    {
        selection_point_description.yfilter = yfilter;
    }
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
}

bool FrequencySynchronization::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "selection-point-type" || name == "selection-point-description" || name == "node")
        return true;
    return false;
}

FrequencySynchronization::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::Source()
    :
    source_class{YType::enumeration, "source-class"},
    ethernet_interface{YType::str, "ethernet-interface"},
    sonet_interface{YType::str, "sonet-interface"},
    node{YType::str, "node"},
    ptp_node{YType::str, "ptp-node"},
    satellite_access_interface{YType::str, "satellite-access-interface"},
    ntp_node{YType::str, "ntp-node"}
    	,
    clock_id(std::make_shared<FrequencySynchronization::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId>())
{
    clock_id->parent = this;

    yang_name = "source"; yang_parent_name = "forward-trace-node"; is_top_level_class = false; has_list_ancestor = true;
}

FrequencySynchronization::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::~Source()
{
}

bool FrequencySynchronization::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::has_data() const
{
    return source_class.is_set
	|| ethernet_interface.is_set
	|| sonet_interface.is_set
	|| node.is_set
	|| ptp_node.is_set
	|| satellite_access_interface.is_set
	|| ntp_node.is_set
	|| (clock_id !=  nullptr && clock_id->has_data());
}

bool FrequencySynchronization::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_class.yfilter)
	|| ydk::is_set(ethernet_interface.yfilter)
	|| ydk::is_set(sonet_interface.yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(ptp_node.yfilter)
	|| ydk::is_set(satellite_access_interface.yfilter)
	|| ydk::is_set(ntp_node.yfilter)
	|| (clock_id !=  nullptr && clock_id->has_operation());
}

std::string FrequencySynchronization::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_class.is_set || is_set(source_class.yfilter)) leaf_name_data.push_back(source_class.get_name_leafdata());
    if (ethernet_interface.is_set || is_set(ethernet_interface.yfilter)) leaf_name_data.push_back(ethernet_interface.get_name_leafdata());
    if (sonet_interface.is_set || is_set(sonet_interface.yfilter)) leaf_name_data.push_back(sonet_interface.get_name_leafdata());
    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (ptp_node.is_set || is_set(ptp_node.yfilter)) leaf_name_data.push_back(ptp_node.get_name_leafdata());
    if (satellite_access_interface.is_set || is_set(satellite_access_interface.yfilter)) leaf_name_data.push_back(satellite_access_interface.get_name_leafdata());
    if (ntp_node.is_set || is_set(ntp_node.yfilter)) leaf_name_data.push_back(ntp_node.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clock-id")
    {
        if(clock_id == nullptr)
        {
            clock_id = std::make_shared<FrequencySynchronization::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId>();
        }
        return clock_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(clock_id != nullptr)
    {
        children["clock-id"] = clock_id;
    }

    return children;
}

void FrequencySynchronization::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-class")
    {
        source_class = value;
        source_class.value_namespace = name_space;
        source_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-interface")
    {
        ethernet_interface = value;
        ethernet_interface.value_namespace = name_space;
        ethernet_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonet-interface")
    {
        sonet_interface = value;
        sonet_interface.value_namespace = name_space;
        sonet_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ptp-node")
    {
        ptp_node = value;
        ptp_node.value_namespace = name_space;
        ptp_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "satellite-access-interface")
    {
        satellite_access_interface = value;
        satellite_access_interface.value_namespace = name_space;
        satellite_access_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ntp-node")
    {
        ntp_node = value;
        ntp_node.value_namespace = name_space;
        ntp_node.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-class")
    {
        source_class.yfilter = yfilter;
    }
    if(value_path == "ethernet-interface")
    {
        ethernet_interface.yfilter = yfilter;
    }
    if(value_path == "sonet-interface")
    {
        sonet_interface.yfilter = yfilter;
    }
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "ptp-node")
    {
        ptp_node.yfilter = yfilter;
    }
    if(value_path == "satellite-access-interface")
    {
        satellite_access_interface.yfilter = yfilter;
    }
    if(value_path == "ntp-node")
    {
        ntp_node.yfilter = yfilter;
    }
}

bool FrequencySynchronization::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-id" || name == "source-class" || name == "ethernet-interface" || name == "sonet-interface" || name == "node" || name == "ptp-node" || name == "satellite-access-interface" || name == "ntp-node")
        return true;
    return false;
}

FrequencySynchronization::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId::ClockId()
    :
    node{YType::str, "node"},
    port{YType::uint32, "port"}
{

    yang_name = "clock-id"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true;
}

FrequencySynchronization::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId::~ClockId()
{
}

bool FrequencySynchronization::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId::has_data() const
{
    return node.is_set
	|| port.is_set;
}

bool FrequencySynchronization::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string FrequencySynchronization::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void FrequencySynchronization::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool FrequencySynchronization::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node" || name == "port")
        return true;
    return false;
}

FrequencySynchronization::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTraces()
{

    yang_name = "clock-interface-selection-back-traces"; yang_parent_name = "frequency-synchronization"; is_top_level_class = false; has_list_ancestor = false;
}

FrequencySynchronization::ClockInterfaceSelectionBackTraces::~ClockInterfaceSelectionBackTraces()
{
}

bool FrequencySynchronization::ClockInterfaceSelectionBackTraces::has_data() const
{
    for (std::size_t index=0; index<clock_interface_selection_back_trace.size(); index++)
    {
        if(clock_interface_selection_back_trace[index]->has_data())
            return true;
    }
    return false;
}

bool FrequencySynchronization::ClockInterfaceSelectionBackTraces::has_operation() const
{
    for (std::size_t index=0; index<clock_interface_selection_back_trace.size(); index++)
    {
        if(clock_interface_selection_back_trace[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string FrequencySynchronization::ClockInterfaceSelectionBackTraces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ncs4k-freqsync-oper:frequency-synchronization/" << get_segment_path();
    return path_buffer.str();
}

std::string FrequencySynchronization::ClockInterfaceSelectionBackTraces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock-interface-selection-back-traces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::ClockInterfaceSelectionBackTraces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::ClockInterfaceSelectionBackTraces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clock-interface-selection-back-trace")
    {
        for(auto const & c : clock_interface_selection_back_trace)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<FrequencySynchronization::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace>();
        c->parent = this;
        clock_interface_selection_back_trace.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::ClockInterfaceSelectionBackTraces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : clock_interface_selection_back_trace)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void FrequencySynchronization::ClockInterfaceSelectionBackTraces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void FrequencySynchronization::ClockInterfaceSelectionBackTraces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool FrequencySynchronization::ClockInterfaceSelectionBackTraces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-interface-selection-back-trace")
        return true;
    return false;
}

FrequencySynchronization::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::ClockInterfaceSelectionBackTrace()
    :
    clock_name{YType::str, "clock-name"}
    	,
    selected_source(std::make_shared<FrequencySynchronization::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectedSource>())
{
    selected_source->parent = this;

    yang_name = "clock-interface-selection-back-trace"; yang_parent_name = "clock-interface-selection-back-traces"; is_top_level_class = false; has_list_ancestor = false;
}

FrequencySynchronization::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::~ClockInterfaceSelectionBackTrace()
{
}

bool FrequencySynchronization::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::has_data() const
{
    for (std::size_t index=0; index<selection_point.size(); index++)
    {
        if(selection_point[index]->has_data())
            return true;
    }
    return clock_name.is_set
	|| (selected_source !=  nullptr && selected_source->has_data());
}

bool FrequencySynchronization::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::has_operation() const
{
    for (std::size_t index=0; index<selection_point.size(); index++)
    {
        if(selection_point[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(clock_name.yfilter)
	|| (selected_source !=  nullptr && selected_source->has_operation());
}

std::string FrequencySynchronization::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ncs4k-freqsync-oper:frequency-synchronization/clock-interface-selection-back-traces/" << get_segment_path();
    return path_buffer.str();
}

std::string FrequencySynchronization::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock-interface-selection-back-trace" <<"[clock-name='" <<clock_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clock_name.is_set || is_set(clock_name.yfilter)) leaf_name_data.push_back(clock_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "selected-source")
    {
        if(selected_source == nullptr)
        {
            selected_source = std::make_shared<FrequencySynchronization::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectedSource>();
        }
        return selected_source;
    }

    if(child_yang_name == "selection-point")
    {
        for(auto const & c : selection_point)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<FrequencySynchronization::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectionPoint>();
        c->parent = this;
        selection_point.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(selected_source != nullptr)
    {
        children["selected-source"] = selected_source;
    }

    for (auto const & c : selection_point)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void FrequencySynchronization::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clock-name")
    {
        clock_name = value;
        clock_name.value_namespace = name_space;
        clock_name.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clock-name")
    {
        clock_name.yfilter = yfilter;
    }
}

bool FrequencySynchronization::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "selected-source" || name == "selection-point" || name == "clock-name")
        return true;
    return false;
}

FrequencySynchronization::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectedSource::SelectedSource()
    :
    source_class{YType::enumeration, "source-class"},
    ethernet_interface{YType::str, "ethernet-interface"},
    sonet_interface{YType::str, "sonet-interface"},
    node{YType::str, "node"},
    ptp_node{YType::str, "ptp-node"},
    satellite_access_interface{YType::str, "satellite-access-interface"},
    ntp_node{YType::str, "ntp-node"}
    	,
    clock_id(std::make_shared<FrequencySynchronization::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectedSource::ClockId>())
{
    clock_id->parent = this;

    yang_name = "selected-source"; yang_parent_name = "clock-interface-selection-back-trace"; is_top_level_class = false; has_list_ancestor = true;
}

FrequencySynchronization::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectedSource::~SelectedSource()
{
}

bool FrequencySynchronization::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectedSource::has_data() const
{
    return source_class.is_set
	|| ethernet_interface.is_set
	|| sonet_interface.is_set
	|| node.is_set
	|| ptp_node.is_set
	|| satellite_access_interface.is_set
	|| ntp_node.is_set
	|| (clock_id !=  nullptr && clock_id->has_data());
}

bool FrequencySynchronization::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectedSource::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_class.yfilter)
	|| ydk::is_set(ethernet_interface.yfilter)
	|| ydk::is_set(sonet_interface.yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(ptp_node.yfilter)
	|| ydk::is_set(satellite_access_interface.yfilter)
	|| ydk::is_set(ntp_node.yfilter)
	|| (clock_id !=  nullptr && clock_id->has_operation());
}

std::string FrequencySynchronization::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectedSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "selected-source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectedSource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_class.is_set || is_set(source_class.yfilter)) leaf_name_data.push_back(source_class.get_name_leafdata());
    if (ethernet_interface.is_set || is_set(ethernet_interface.yfilter)) leaf_name_data.push_back(ethernet_interface.get_name_leafdata());
    if (sonet_interface.is_set || is_set(sonet_interface.yfilter)) leaf_name_data.push_back(sonet_interface.get_name_leafdata());
    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (ptp_node.is_set || is_set(ptp_node.yfilter)) leaf_name_data.push_back(ptp_node.get_name_leafdata());
    if (satellite_access_interface.is_set || is_set(satellite_access_interface.yfilter)) leaf_name_data.push_back(satellite_access_interface.get_name_leafdata());
    if (ntp_node.is_set || is_set(ntp_node.yfilter)) leaf_name_data.push_back(ntp_node.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectedSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clock-id")
    {
        if(clock_id == nullptr)
        {
            clock_id = std::make_shared<FrequencySynchronization::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectedSource::ClockId>();
        }
        return clock_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectedSource::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(clock_id != nullptr)
    {
        children["clock-id"] = clock_id;
    }

    return children;
}

void FrequencySynchronization::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectedSource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-class")
    {
        source_class = value;
        source_class.value_namespace = name_space;
        source_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-interface")
    {
        ethernet_interface = value;
        ethernet_interface.value_namespace = name_space;
        ethernet_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonet-interface")
    {
        sonet_interface = value;
        sonet_interface.value_namespace = name_space;
        sonet_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ptp-node")
    {
        ptp_node = value;
        ptp_node.value_namespace = name_space;
        ptp_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "satellite-access-interface")
    {
        satellite_access_interface = value;
        satellite_access_interface.value_namespace = name_space;
        satellite_access_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ntp-node")
    {
        ntp_node = value;
        ntp_node.value_namespace = name_space;
        ntp_node.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectedSource::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-class")
    {
        source_class.yfilter = yfilter;
    }
    if(value_path == "ethernet-interface")
    {
        ethernet_interface.yfilter = yfilter;
    }
    if(value_path == "sonet-interface")
    {
        sonet_interface.yfilter = yfilter;
    }
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "ptp-node")
    {
        ptp_node.yfilter = yfilter;
    }
    if(value_path == "satellite-access-interface")
    {
        satellite_access_interface.yfilter = yfilter;
    }
    if(value_path == "ntp-node")
    {
        ntp_node.yfilter = yfilter;
    }
}

bool FrequencySynchronization::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectedSource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-id" || name == "source-class" || name == "ethernet-interface" || name == "sonet-interface" || name == "node" || name == "ptp-node" || name == "satellite-access-interface" || name == "ntp-node")
        return true;
    return false;
}

FrequencySynchronization::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectedSource::ClockId::ClockId()
    :
    node{YType::str, "node"},
    port{YType::uint32, "port"}
{

    yang_name = "clock-id"; yang_parent_name = "selected-source"; is_top_level_class = false; has_list_ancestor = true;
}

FrequencySynchronization::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectedSource::ClockId::~ClockId()
{
}

bool FrequencySynchronization::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectedSource::ClockId::has_data() const
{
    return node.is_set
	|| port.is_set;
}

bool FrequencySynchronization::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectedSource::ClockId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string FrequencySynchronization::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectedSource::ClockId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectedSource::ClockId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectedSource::ClockId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectedSource::ClockId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void FrequencySynchronization::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectedSource::ClockId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectedSource::ClockId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool FrequencySynchronization::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectedSource::ClockId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node" || name == "port")
        return true;
    return false;
}

FrequencySynchronization::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectionPoint::SelectionPoint()
    :
    selection_point_type{YType::uint8, "selection-point-type"},
    selection_point_description{YType::str, "selection-point-description"},
    node{YType::str, "node"}
{

    yang_name = "selection-point"; yang_parent_name = "clock-interface-selection-back-trace"; is_top_level_class = false; has_list_ancestor = true;
}

FrequencySynchronization::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectionPoint::~SelectionPoint()
{
}

bool FrequencySynchronization::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectionPoint::has_data() const
{
    return selection_point_type.is_set
	|| selection_point_description.is_set
	|| node.is_set;
}

bool FrequencySynchronization::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectionPoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(selection_point_type.yfilter)
	|| ydk::is_set(selection_point_description.yfilter)
	|| ydk::is_set(node.yfilter);
}

std::string FrequencySynchronization::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectionPoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "selection-point";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectionPoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (selection_point_type.is_set || is_set(selection_point_type.yfilter)) leaf_name_data.push_back(selection_point_type.get_name_leafdata());
    if (selection_point_description.is_set || is_set(selection_point_description.yfilter)) leaf_name_data.push_back(selection_point_description.get_name_leafdata());
    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectionPoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectionPoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void FrequencySynchronization::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectionPoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "selection-point-type")
    {
        selection_point_type = value;
        selection_point_type.value_namespace = name_space;
        selection_point_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selection-point-description")
    {
        selection_point_description = value;
        selection_point_description.value_namespace = name_space;
        selection_point_description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectionPoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "selection-point-type")
    {
        selection_point_type.yfilter = yfilter;
    }
    if(value_path == "selection-point-description")
    {
        selection_point_description.yfilter = yfilter;
    }
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
}

bool FrequencySynchronization::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectionPoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "selection-point-type" || name == "selection-point-description" || name == "node")
        return true;
    return false;
}

FrequencySynchronization::GlobalInterfaces::GlobalInterfaces()
{

    yang_name = "global-interfaces"; yang_parent_name = "frequency-synchronization"; is_top_level_class = false; has_list_ancestor = false;
}

FrequencySynchronization::GlobalInterfaces::~GlobalInterfaces()
{
}

bool FrequencySynchronization::GlobalInterfaces::has_data() const
{
    for (std::size_t index=0; index<global_interface.size(); index++)
    {
        if(global_interface[index]->has_data())
            return true;
    }
    return false;
}

bool FrequencySynchronization::GlobalInterfaces::has_operation() const
{
    for (std::size_t index=0; index<global_interface.size(); index++)
    {
        if(global_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string FrequencySynchronization::GlobalInterfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ncs4k-freqsync-oper:frequency-synchronization/" << get_segment_path();
    return path_buffer.str();
}

std::string FrequencySynchronization::GlobalInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::GlobalInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::GlobalInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global-interface")
    {
        for(auto const & c : global_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<FrequencySynchronization::GlobalInterfaces::GlobalInterface>();
        c->parent = this;
        global_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::GlobalInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : global_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void FrequencySynchronization::GlobalInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void FrequencySynchronization::GlobalInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool FrequencySynchronization::GlobalInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global-interface")
        return true;
    return false;
}

FrequencySynchronization::GlobalInterfaces::GlobalInterface::GlobalInterface()
    :
    interface_name{YType::str, "interface-name"}
    	,
    interface_selection_back_trace(std::make_shared<FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace>())
	,interface_selection_forward_trace(std::make_shared<FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace>())
{
    interface_selection_back_trace->parent = this;
    interface_selection_forward_trace->parent = this;

    yang_name = "global-interface"; yang_parent_name = "global-interfaces"; is_top_level_class = false; has_list_ancestor = false;
}

FrequencySynchronization::GlobalInterfaces::GlobalInterface::~GlobalInterface()
{
}

bool FrequencySynchronization::GlobalInterfaces::GlobalInterface::has_data() const
{
    return interface_name.is_set
	|| (interface_selection_back_trace !=  nullptr && interface_selection_back_trace->has_data())
	|| (interface_selection_forward_trace !=  nullptr && interface_selection_forward_trace->has_data());
}

bool FrequencySynchronization::GlobalInterfaces::GlobalInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| (interface_selection_back_trace !=  nullptr && interface_selection_back_trace->has_operation())
	|| (interface_selection_forward_trace !=  nullptr && interface_selection_forward_trace->has_operation());
}

std::string FrequencySynchronization::GlobalInterfaces::GlobalInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ncs4k-freqsync-oper:frequency-synchronization/global-interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string FrequencySynchronization::GlobalInterfaces::GlobalInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::GlobalInterfaces::GlobalInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::GlobalInterfaces::GlobalInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-selection-back-trace")
    {
        if(interface_selection_back_trace == nullptr)
        {
            interface_selection_back_trace = std::make_shared<FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace>();
        }
        return interface_selection_back_trace;
    }

    if(child_yang_name == "interface-selection-forward-trace")
    {
        if(interface_selection_forward_trace == nullptr)
        {
            interface_selection_forward_trace = std::make_shared<FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace>();
        }
        return interface_selection_forward_trace;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::GlobalInterfaces::GlobalInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface_selection_back_trace != nullptr)
    {
        children["interface-selection-back-trace"] = interface_selection_back_trace;
    }

    if(interface_selection_forward_trace != nullptr)
    {
        children["interface-selection-forward-trace"] = interface_selection_forward_trace;
    }

    return children;
}

void FrequencySynchronization::GlobalInterfaces::GlobalInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::GlobalInterfaces::GlobalInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool FrequencySynchronization::GlobalInterfaces::GlobalInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-selection-back-trace" || name == "interface-selection-forward-trace" || name == "interface-name")
        return true;
    return false;
}

FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::InterfaceSelectionBackTrace()
    :
    selected_source(std::make_shared<FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectedSource>())
{
    selected_source->parent = this;

    yang_name = "interface-selection-back-trace"; yang_parent_name = "global-interface"; is_top_level_class = false; has_list_ancestor = true;
}

FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::~InterfaceSelectionBackTrace()
{
}

bool FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::has_data() const
{
    for (std::size_t index=0; index<selection_point.size(); index++)
    {
        if(selection_point[index]->has_data())
            return true;
    }
    return (selected_source !=  nullptr && selected_source->has_data());
}

bool FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::has_operation() const
{
    for (std::size_t index=0; index<selection_point.size(); index++)
    {
        if(selection_point[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (selected_source !=  nullptr && selected_source->has_operation());
}

std::string FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-selection-back-trace";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "selected-source")
    {
        if(selected_source == nullptr)
        {
            selected_source = std::make_shared<FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectedSource>();
        }
        return selected_source;
    }

    if(child_yang_name == "selection-point")
    {
        for(auto const & c : selection_point)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectionPoint>();
        c->parent = this;
        selection_point.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(selected_source != nullptr)
    {
        children["selected-source"] = selected_source;
    }

    for (auto const & c : selection_point)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "selected-source" || name == "selection-point")
        return true;
    return false;
}

FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectedSource::SelectedSource()
    :
    source_class{YType::enumeration, "source-class"},
    ethernet_interface{YType::str, "ethernet-interface"},
    sonet_interface{YType::str, "sonet-interface"},
    node{YType::str, "node"},
    ptp_node{YType::str, "ptp-node"},
    satellite_access_interface{YType::str, "satellite-access-interface"},
    ntp_node{YType::str, "ntp-node"}
    	,
    clock_id(std::make_shared<FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectedSource::ClockId>())
{
    clock_id->parent = this;

    yang_name = "selected-source"; yang_parent_name = "interface-selection-back-trace"; is_top_level_class = false; has_list_ancestor = true;
}

FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectedSource::~SelectedSource()
{
}

bool FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectedSource::has_data() const
{
    return source_class.is_set
	|| ethernet_interface.is_set
	|| sonet_interface.is_set
	|| node.is_set
	|| ptp_node.is_set
	|| satellite_access_interface.is_set
	|| ntp_node.is_set
	|| (clock_id !=  nullptr && clock_id->has_data());
}

bool FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectedSource::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_class.yfilter)
	|| ydk::is_set(ethernet_interface.yfilter)
	|| ydk::is_set(sonet_interface.yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(ptp_node.yfilter)
	|| ydk::is_set(satellite_access_interface.yfilter)
	|| ydk::is_set(ntp_node.yfilter)
	|| (clock_id !=  nullptr && clock_id->has_operation());
}

std::string FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectedSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "selected-source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectedSource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_class.is_set || is_set(source_class.yfilter)) leaf_name_data.push_back(source_class.get_name_leafdata());
    if (ethernet_interface.is_set || is_set(ethernet_interface.yfilter)) leaf_name_data.push_back(ethernet_interface.get_name_leafdata());
    if (sonet_interface.is_set || is_set(sonet_interface.yfilter)) leaf_name_data.push_back(sonet_interface.get_name_leafdata());
    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (ptp_node.is_set || is_set(ptp_node.yfilter)) leaf_name_data.push_back(ptp_node.get_name_leafdata());
    if (satellite_access_interface.is_set || is_set(satellite_access_interface.yfilter)) leaf_name_data.push_back(satellite_access_interface.get_name_leafdata());
    if (ntp_node.is_set || is_set(ntp_node.yfilter)) leaf_name_data.push_back(ntp_node.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectedSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clock-id")
    {
        if(clock_id == nullptr)
        {
            clock_id = std::make_shared<FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectedSource::ClockId>();
        }
        return clock_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectedSource::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(clock_id != nullptr)
    {
        children["clock-id"] = clock_id;
    }

    return children;
}

void FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectedSource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-class")
    {
        source_class = value;
        source_class.value_namespace = name_space;
        source_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-interface")
    {
        ethernet_interface = value;
        ethernet_interface.value_namespace = name_space;
        ethernet_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonet-interface")
    {
        sonet_interface = value;
        sonet_interface.value_namespace = name_space;
        sonet_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ptp-node")
    {
        ptp_node = value;
        ptp_node.value_namespace = name_space;
        ptp_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "satellite-access-interface")
    {
        satellite_access_interface = value;
        satellite_access_interface.value_namespace = name_space;
        satellite_access_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ntp-node")
    {
        ntp_node = value;
        ntp_node.value_namespace = name_space;
        ntp_node.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectedSource::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-class")
    {
        source_class.yfilter = yfilter;
    }
    if(value_path == "ethernet-interface")
    {
        ethernet_interface.yfilter = yfilter;
    }
    if(value_path == "sonet-interface")
    {
        sonet_interface.yfilter = yfilter;
    }
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "ptp-node")
    {
        ptp_node.yfilter = yfilter;
    }
    if(value_path == "satellite-access-interface")
    {
        satellite_access_interface.yfilter = yfilter;
    }
    if(value_path == "ntp-node")
    {
        ntp_node.yfilter = yfilter;
    }
}

bool FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectedSource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-id" || name == "source-class" || name == "ethernet-interface" || name == "sonet-interface" || name == "node" || name == "ptp-node" || name == "satellite-access-interface" || name == "ntp-node")
        return true;
    return false;
}

FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectedSource::ClockId::ClockId()
    :
    node{YType::str, "node"},
    port{YType::uint32, "port"}
{

    yang_name = "clock-id"; yang_parent_name = "selected-source"; is_top_level_class = false; has_list_ancestor = true;
}

FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectedSource::ClockId::~ClockId()
{
}

bool FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectedSource::ClockId::has_data() const
{
    return node.is_set
	|| port.is_set;
}

bool FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectedSource::ClockId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectedSource::ClockId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectedSource::ClockId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectedSource::ClockId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectedSource::ClockId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectedSource::ClockId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectedSource::ClockId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectedSource::ClockId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node" || name == "port")
        return true;
    return false;
}

FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectionPoint::SelectionPoint()
    :
    selection_point_type{YType::uint8, "selection-point-type"},
    selection_point_description{YType::str, "selection-point-description"},
    node{YType::str, "node"}
{

    yang_name = "selection-point"; yang_parent_name = "interface-selection-back-trace"; is_top_level_class = false; has_list_ancestor = true;
}

FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectionPoint::~SelectionPoint()
{
}

bool FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectionPoint::has_data() const
{
    return selection_point_type.is_set
	|| selection_point_description.is_set
	|| node.is_set;
}

bool FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectionPoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(selection_point_type.yfilter)
	|| ydk::is_set(selection_point_description.yfilter)
	|| ydk::is_set(node.yfilter);
}

std::string FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectionPoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "selection-point";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectionPoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (selection_point_type.is_set || is_set(selection_point_type.yfilter)) leaf_name_data.push_back(selection_point_type.get_name_leafdata());
    if (selection_point_description.is_set || is_set(selection_point_description.yfilter)) leaf_name_data.push_back(selection_point_description.get_name_leafdata());
    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectionPoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectionPoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectionPoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "selection-point-type")
    {
        selection_point_type = value;
        selection_point_type.value_namespace = name_space;
        selection_point_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selection-point-description")
    {
        selection_point_description = value;
        selection_point_description.value_namespace = name_space;
        selection_point_description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectionPoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "selection-point-type")
    {
        selection_point_type.yfilter = yfilter;
    }
    if(value_path == "selection-point-description")
    {
        selection_point_description.yfilter = yfilter;
    }
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
}

bool FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectionPoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "selection-point-type" || name == "selection-point-description" || name == "node")
        return true;
    return false;
}

FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::InterfaceSelectionForwardTrace()
{

    yang_name = "interface-selection-forward-trace"; yang_parent_name = "global-interface"; is_top_level_class = false; has_list_ancestor = true;
}

FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::~InterfaceSelectionForwardTrace()
{
}

bool FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::has_data() const
{
    for (std::size_t index=0; index<forward_trace.size(); index++)
    {
        if(forward_trace[index]->has_data())
            return true;
    }
    return false;
}

bool FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::has_operation() const
{
    for (std::size_t index=0; index<forward_trace.size(); index++)
    {
        if(forward_trace[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-selection-forward-trace";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "forward-trace")
    {
        for(auto const & c : forward_trace)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace>();
        c->parent = this;
        forward_trace.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : forward_trace)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forward-trace")
        return true;
    return false;
}

FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTrace()
    :
    forward_trace_node(std::make_shared<FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode>())
{
    forward_trace_node->parent = this;

    yang_name = "forward-trace"; yang_parent_name = "interface-selection-forward-trace"; is_top_level_class = false; has_list_ancestor = true;
}

FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::~ForwardTrace()
{
}

bool FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::has_data() const
{
    return (forward_trace_node !=  nullptr && forward_trace_node->has_data());
}

bool FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::has_operation() const
{
    return is_set(yfilter)
	|| (forward_trace_node !=  nullptr && forward_trace_node->has_operation());
}

std::string FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forward-trace";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "forward-trace-node")
    {
        if(forward_trace_node == nullptr)
        {
            forward_trace_node = std::make_shared<FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode>();
        }
        return forward_trace_node;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(forward_trace_node != nullptr)
    {
        children["forward-trace-node"] = forward_trace_node;
    }

    return children;
}

void FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forward-trace-node")
        return true;
    return false;
}

FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::ForwardTraceNode()
    :
    node_type{YType::enumeration, "node-type"}
    	,
    selection_point(std::make_shared<FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint>())
	,source(std::make_shared<FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source>())
{
    selection_point->parent = this;
    source->parent = this;

    yang_name = "forward-trace-node"; yang_parent_name = "forward-trace"; is_top_level_class = false; has_list_ancestor = true;
}

FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::~ForwardTraceNode()
{
}

bool FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::has_data() const
{
    return node_type.is_set
	|| (selection_point !=  nullptr && selection_point->has_data())
	|| (source !=  nullptr && source->has_data());
}

bool FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_type.yfilter)
	|| (selection_point !=  nullptr && selection_point->has_operation())
	|| (source !=  nullptr && source->has_operation());
}

std::string FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forward-trace-node";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_type.is_set || is_set(node_type.yfilter)) leaf_name_data.push_back(node_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "selection-point")
    {
        if(selection_point == nullptr)
        {
            selection_point = std::make_shared<FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint>();
        }
        return selection_point;
    }

    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(selection_point != nullptr)
    {
        children["selection-point"] = selection_point;
    }

    if(source != nullptr)
    {
        children["source"] = source;
    }

    return children;
}

void FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-type")
    {
        node_type = value;
        node_type.value_namespace = name_space;
        node_type.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-type")
    {
        node_type.yfilter = yfilter;
    }
}

bool FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "selection-point" || name == "source" || name == "node-type")
        return true;
    return false;
}

FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint::SelectionPoint()
    :
    selection_point_type{YType::uint8, "selection-point-type"},
    selection_point_description{YType::str, "selection-point-description"},
    node{YType::str, "node"}
{

    yang_name = "selection-point"; yang_parent_name = "forward-trace-node"; is_top_level_class = false; has_list_ancestor = true;
}

FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint::~SelectionPoint()
{
}

bool FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint::has_data() const
{
    return selection_point_type.is_set
	|| selection_point_description.is_set
	|| node.is_set;
}

bool FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(selection_point_type.yfilter)
	|| ydk::is_set(selection_point_description.yfilter)
	|| ydk::is_set(node.yfilter);
}

std::string FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "selection-point";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (selection_point_type.is_set || is_set(selection_point_type.yfilter)) leaf_name_data.push_back(selection_point_type.get_name_leafdata());
    if (selection_point_description.is_set || is_set(selection_point_description.yfilter)) leaf_name_data.push_back(selection_point_description.get_name_leafdata());
    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "selection-point-type")
    {
        selection_point_type = value;
        selection_point_type.value_namespace = name_space;
        selection_point_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selection-point-description")
    {
        selection_point_description = value;
        selection_point_description.value_namespace = name_space;
        selection_point_description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "selection-point-type")
    {
        selection_point_type.yfilter = yfilter;
    }
    if(value_path == "selection-point-description")
    {
        selection_point_description.yfilter = yfilter;
    }
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
}

bool FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "selection-point-type" || name == "selection-point-description" || name == "node")
        return true;
    return false;
}

FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::Source()
    :
    source_class{YType::enumeration, "source-class"},
    ethernet_interface{YType::str, "ethernet-interface"},
    sonet_interface{YType::str, "sonet-interface"},
    node{YType::str, "node"},
    ptp_node{YType::str, "ptp-node"},
    satellite_access_interface{YType::str, "satellite-access-interface"},
    ntp_node{YType::str, "ntp-node"}
    	,
    clock_id(std::make_shared<FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId>())
{
    clock_id->parent = this;

    yang_name = "source"; yang_parent_name = "forward-trace-node"; is_top_level_class = false; has_list_ancestor = true;
}

FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::~Source()
{
}

bool FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::has_data() const
{
    return source_class.is_set
	|| ethernet_interface.is_set
	|| sonet_interface.is_set
	|| node.is_set
	|| ptp_node.is_set
	|| satellite_access_interface.is_set
	|| ntp_node.is_set
	|| (clock_id !=  nullptr && clock_id->has_data());
}

bool FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_class.yfilter)
	|| ydk::is_set(ethernet_interface.yfilter)
	|| ydk::is_set(sonet_interface.yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(ptp_node.yfilter)
	|| ydk::is_set(satellite_access_interface.yfilter)
	|| ydk::is_set(ntp_node.yfilter)
	|| (clock_id !=  nullptr && clock_id->has_operation());
}

std::string FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_class.is_set || is_set(source_class.yfilter)) leaf_name_data.push_back(source_class.get_name_leafdata());
    if (ethernet_interface.is_set || is_set(ethernet_interface.yfilter)) leaf_name_data.push_back(ethernet_interface.get_name_leafdata());
    if (sonet_interface.is_set || is_set(sonet_interface.yfilter)) leaf_name_data.push_back(sonet_interface.get_name_leafdata());
    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (ptp_node.is_set || is_set(ptp_node.yfilter)) leaf_name_data.push_back(ptp_node.get_name_leafdata());
    if (satellite_access_interface.is_set || is_set(satellite_access_interface.yfilter)) leaf_name_data.push_back(satellite_access_interface.get_name_leafdata());
    if (ntp_node.is_set || is_set(ntp_node.yfilter)) leaf_name_data.push_back(ntp_node.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clock-id")
    {
        if(clock_id == nullptr)
        {
            clock_id = std::make_shared<FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId>();
        }
        return clock_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(clock_id != nullptr)
    {
        children["clock-id"] = clock_id;
    }

    return children;
}

void FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-class")
    {
        source_class = value;
        source_class.value_namespace = name_space;
        source_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-interface")
    {
        ethernet_interface = value;
        ethernet_interface.value_namespace = name_space;
        ethernet_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonet-interface")
    {
        sonet_interface = value;
        sonet_interface.value_namespace = name_space;
        sonet_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ptp-node")
    {
        ptp_node = value;
        ptp_node.value_namespace = name_space;
        ptp_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "satellite-access-interface")
    {
        satellite_access_interface = value;
        satellite_access_interface.value_namespace = name_space;
        satellite_access_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ntp-node")
    {
        ntp_node = value;
        ntp_node.value_namespace = name_space;
        ntp_node.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-class")
    {
        source_class.yfilter = yfilter;
    }
    if(value_path == "ethernet-interface")
    {
        ethernet_interface.yfilter = yfilter;
    }
    if(value_path == "sonet-interface")
    {
        sonet_interface.yfilter = yfilter;
    }
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "ptp-node")
    {
        ptp_node.yfilter = yfilter;
    }
    if(value_path == "satellite-access-interface")
    {
        satellite_access_interface.yfilter = yfilter;
    }
    if(value_path == "ntp-node")
    {
        ntp_node.yfilter = yfilter;
    }
}

bool FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-id" || name == "source-class" || name == "ethernet-interface" || name == "sonet-interface" || name == "node" || name == "ptp-node" || name == "satellite-access-interface" || name == "ntp-node")
        return true;
    return false;
}

FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId::ClockId()
    :
    node{YType::str, "node"},
    port{YType::uint32, "port"}
{

    yang_name = "clock-id"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true;
}

FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId::~ClockId()
{
}

bool FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId::has_data() const
{
    return node.is_set
	|| port.is_set;
}

bool FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node" || name == "port")
        return true;
    return false;
}

FrequencySynchronization::Clocks::Clocks()
{

    yang_name = "clocks"; yang_parent_name = "frequency-synchronization"; is_top_level_class = false; has_list_ancestor = false;
}

FrequencySynchronization::Clocks::~Clocks()
{
}

bool FrequencySynchronization::Clocks::has_data() const
{
    for (std::size_t index=0; index<clock_.size(); index++)
    {
        if(clock_[index]->has_data())
            return true;
    }
    return false;
}

bool FrequencySynchronization::Clocks::has_operation() const
{
    for (std::size_t index=0; index<clock_.size(); index++)
    {
        if(clock_[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string FrequencySynchronization::Clocks::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ncs4k-freqsync-oper:frequency-synchronization/" << get_segment_path();
    return path_buffer.str();
}

std::string FrequencySynchronization::Clocks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clocks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Clocks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Clocks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clock")
    {
        for(auto const & c : clock_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<FrequencySynchronization::Clocks::Clock_>();
        c->parent = this;
        clock_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Clocks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : clock_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void FrequencySynchronization::Clocks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void FrequencySynchronization::Clocks::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool FrequencySynchronization::Clocks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock")
        return true;
    return false;
}

FrequencySynchronization::Clocks::Clock_::Clock_()
    :
    clock_name{YType::str, "clock-name"},
    state{YType::enumeration, "state"},
    down_reason{YType::str, "down-reason"},
    description{YType::str, "description"},
    priority{YType::uint8, "priority"},
    time_of_day_priority{YType::uint8, "time-of-day-priority"},
    ssm_support{YType::boolean, "ssm-support"},
    ssm_enabled{YType::boolean, "ssm-enabled"},
    loopback{YType::boolean, "loopback"},
    selection_input{YType::boolean, "selection-input"},
    squelched{YType::boolean, "squelched"},
    damping_state{YType::enumeration, "damping-state"},
    damping_time{YType::uint32, "damping-time"},
    input_disabled{YType::boolean, "input-disabled"},
    output_disabled{YType::boolean, "output-disabled"},
    wait_to_restore_time{YType::uint16, "wait-to-restore-time"},
    clock_type{YType::enumeration, "clock-type"},
    supports_frequency{YType::boolean, "supports-frequency"},
    supports_time_of_day{YType::boolean, "supports-time-of-day"},
    spa_selection_point{YType::uint8, "spa-selection-point"},
    spa_selection_points_description{YType::str, "spa-selection-points-description"},
    node_selection_point{YType::uint8, "node-selection-point"},
    node_selection_points_description{YType::str, "node-selection-points-description"}
    	,
    source(std::make_shared<FrequencySynchronization::Clocks::Clock_::Source>())
	,selected_source(std::make_shared<FrequencySynchronization::Clocks::Clock_::SelectedSource>())
	,quality_level_received(std::make_shared<FrequencySynchronization::Clocks::Clock_::QualityLevelReceived>())
	,quality_level_damped(std::make_shared<FrequencySynchronization::Clocks::Clock_::QualityLevelDamped>())
	,quality_level_effective_input(std::make_shared<FrequencySynchronization::Clocks::Clock_::QualityLevelEffectiveInput>())
	,quality_level_effective_output(std::make_shared<FrequencySynchronization::Clocks::Clock_::QualityLevelEffectiveOutput>())
	,quality_level_selected_source(std::make_shared<FrequencySynchronization::Clocks::Clock_::QualityLevelSelectedSource>())
{
    source->parent = this;
    selected_source->parent = this;
    quality_level_received->parent = this;
    quality_level_damped->parent = this;
    quality_level_effective_input->parent = this;
    quality_level_effective_output->parent = this;
    quality_level_selected_source->parent = this;

    yang_name = "clock"; yang_parent_name = "clocks"; is_top_level_class = false; has_list_ancestor = false;
}

FrequencySynchronization::Clocks::Clock_::~Clock_()
{
}

bool FrequencySynchronization::Clocks::Clock_::has_data() const
{
    for (auto const & leaf : spa_selection_point.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : spa_selection_points_description.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : node_selection_point.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : node_selection_points_description.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return clock_name.is_set
	|| state.is_set
	|| down_reason.is_set
	|| description.is_set
	|| priority.is_set
	|| time_of_day_priority.is_set
	|| ssm_support.is_set
	|| ssm_enabled.is_set
	|| loopback.is_set
	|| selection_input.is_set
	|| squelched.is_set
	|| damping_state.is_set
	|| damping_time.is_set
	|| input_disabled.is_set
	|| output_disabled.is_set
	|| wait_to_restore_time.is_set
	|| clock_type.is_set
	|| supports_frequency.is_set
	|| supports_time_of_day.is_set
	|| (source !=  nullptr && source->has_data())
	|| (selected_source !=  nullptr && selected_source->has_data())
	|| (quality_level_received !=  nullptr && quality_level_received->has_data())
	|| (quality_level_damped !=  nullptr && quality_level_damped->has_data())
	|| (quality_level_effective_input !=  nullptr && quality_level_effective_input->has_data())
	|| (quality_level_effective_output !=  nullptr && quality_level_effective_output->has_data())
	|| (quality_level_selected_source !=  nullptr && quality_level_selected_source->has_data());
}

bool FrequencySynchronization::Clocks::Clock_::has_operation() const
{
    for (auto const & leaf : spa_selection_point.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : spa_selection_points_description.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : node_selection_point.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : node_selection_points_description.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(clock_name.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(down_reason.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(time_of_day_priority.yfilter)
	|| ydk::is_set(ssm_support.yfilter)
	|| ydk::is_set(ssm_enabled.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| ydk::is_set(selection_input.yfilter)
	|| ydk::is_set(squelched.yfilter)
	|| ydk::is_set(damping_state.yfilter)
	|| ydk::is_set(damping_time.yfilter)
	|| ydk::is_set(input_disabled.yfilter)
	|| ydk::is_set(output_disabled.yfilter)
	|| ydk::is_set(wait_to_restore_time.yfilter)
	|| ydk::is_set(clock_type.yfilter)
	|| ydk::is_set(supports_frequency.yfilter)
	|| ydk::is_set(supports_time_of_day.yfilter)
	|| ydk::is_set(spa_selection_point.yfilter)
	|| ydk::is_set(spa_selection_points_description.yfilter)
	|| ydk::is_set(node_selection_point.yfilter)
	|| ydk::is_set(node_selection_points_description.yfilter)
	|| (source !=  nullptr && source->has_operation())
	|| (selected_source !=  nullptr && selected_source->has_operation())
	|| (quality_level_received !=  nullptr && quality_level_received->has_operation())
	|| (quality_level_damped !=  nullptr && quality_level_damped->has_operation())
	|| (quality_level_effective_input !=  nullptr && quality_level_effective_input->has_operation())
	|| (quality_level_effective_output !=  nullptr && quality_level_effective_output->has_operation())
	|| (quality_level_selected_source !=  nullptr && quality_level_selected_source->has_operation());
}

std::string FrequencySynchronization::Clocks::Clock_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ncs4k-freqsync-oper:frequency-synchronization/clocks/" << get_segment_path();
    return path_buffer.str();
}

std::string FrequencySynchronization::Clocks::Clock_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock" <<"[clock-name='" <<clock_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Clocks::Clock_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clock_name.is_set || is_set(clock_name.yfilter)) leaf_name_data.push_back(clock_name.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (down_reason.is_set || is_set(down_reason.yfilter)) leaf_name_data.push_back(down_reason.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (time_of_day_priority.is_set || is_set(time_of_day_priority.yfilter)) leaf_name_data.push_back(time_of_day_priority.get_name_leafdata());
    if (ssm_support.is_set || is_set(ssm_support.yfilter)) leaf_name_data.push_back(ssm_support.get_name_leafdata());
    if (ssm_enabled.is_set || is_set(ssm_enabled.yfilter)) leaf_name_data.push_back(ssm_enabled.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (selection_input.is_set || is_set(selection_input.yfilter)) leaf_name_data.push_back(selection_input.get_name_leafdata());
    if (squelched.is_set || is_set(squelched.yfilter)) leaf_name_data.push_back(squelched.get_name_leafdata());
    if (damping_state.is_set || is_set(damping_state.yfilter)) leaf_name_data.push_back(damping_state.get_name_leafdata());
    if (damping_time.is_set || is_set(damping_time.yfilter)) leaf_name_data.push_back(damping_time.get_name_leafdata());
    if (input_disabled.is_set || is_set(input_disabled.yfilter)) leaf_name_data.push_back(input_disabled.get_name_leafdata());
    if (output_disabled.is_set || is_set(output_disabled.yfilter)) leaf_name_data.push_back(output_disabled.get_name_leafdata());
    if (wait_to_restore_time.is_set || is_set(wait_to_restore_time.yfilter)) leaf_name_data.push_back(wait_to_restore_time.get_name_leafdata());
    if (clock_type.is_set || is_set(clock_type.yfilter)) leaf_name_data.push_back(clock_type.get_name_leafdata());
    if (supports_frequency.is_set || is_set(supports_frequency.yfilter)) leaf_name_data.push_back(supports_frequency.get_name_leafdata());
    if (supports_time_of_day.is_set || is_set(supports_time_of_day.yfilter)) leaf_name_data.push_back(supports_time_of_day.get_name_leafdata());

    auto spa_selection_point_name_datas = spa_selection_point.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), spa_selection_point_name_datas.begin(), spa_selection_point_name_datas.end());
    auto spa_selection_points_description_name_datas = spa_selection_points_description.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), spa_selection_points_description_name_datas.begin(), spa_selection_points_description_name_datas.end());
    auto node_selection_point_name_datas = node_selection_point.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), node_selection_point_name_datas.begin(), node_selection_point_name_datas.end());
    auto node_selection_points_description_name_datas = node_selection_points_description.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), node_selection_points_description_name_datas.begin(), node_selection_points_description_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Clocks::Clock_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<FrequencySynchronization::Clocks::Clock_::Source>();
        }
        return source;
    }

    if(child_yang_name == "selected-source")
    {
        if(selected_source == nullptr)
        {
            selected_source = std::make_shared<FrequencySynchronization::Clocks::Clock_::SelectedSource>();
        }
        return selected_source;
    }

    if(child_yang_name == "quality-level-received")
    {
        if(quality_level_received == nullptr)
        {
            quality_level_received = std::make_shared<FrequencySynchronization::Clocks::Clock_::QualityLevelReceived>();
        }
        return quality_level_received;
    }

    if(child_yang_name == "quality-level-damped")
    {
        if(quality_level_damped == nullptr)
        {
            quality_level_damped = std::make_shared<FrequencySynchronization::Clocks::Clock_::QualityLevelDamped>();
        }
        return quality_level_damped;
    }

    if(child_yang_name == "quality-level-effective-input")
    {
        if(quality_level_effective_input == nullptr)
        {
            quality_level_effective_input = std::make_shared<FrequencySynchronization::Clocks::Clock_::QualityLevelEffectiveInput>();
        }
        return quality_level_effective_input;
    }

    if(child_yang_name == "quality-level-effective-output")
    {
        if(quality_level_effective_output == nullptr)
        {
            quality_level_effective_output = std::make_shared<FrequencySynchronization::Clocks::Clock_::QualityLevelEffectiveOutput>();
        }
        return quality_level_effective_output;
    }

    if(child_yang_name == "quality-level-selected-source")
    {
        if(quality_level_selected_source == nullptr)
        {
            quality_level_selected_source = std::make_shared<FrequencySynchronization::Clocks::Clock_::QualityLevelSelectedSource>();
        }
        return quality_level_selected_source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Clocks::Clock_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(source != nullptr)
    {
        children["source"] = source;
    }

    if(selected_source != nullptr)
    {
        children["selected-source"] = selected_source;
    }

    if(quality_level_received != nullptr)
    {
        children["quality-level-received"] = quality_level_received;
    }

    if(quality_level_damped != nullptr)
    {
        children["quality-level-damped"] = quality_level_damped;
    }

    if(quality_level_effective_input != nullptr)
    {
        children["quality-level-effective-input"] = quality_level_effective_input;
    }

    if(quality_level_effective_output != nullptr)
    {
        children["quality-level-effective-output"] = quality_level_effective_output;
    }

    if(quality_level_selected_source != nullptr)
    {
        children["quality-level-selected-source"] = quality_level_selected_source;
    }

    return children;
}

void FrequencySynchronization::Clocks::Clock_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clock-name")
    {
        clock_name = value;
        clock_name.value_namespace = name_space;
        clock_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down-reason")
    {
        down_reason = value;
        down_reason.value_namespace = name_space;
        down_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-of-day-priority")
    {
        time_of_day_priority = value;
        time_of_day_priority.value_namespace = name_space;
        time_of_day_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ssm-support")
    {
        ssm_support = value;
        ssm_support.value_namespace = name_space;
        ssm_support.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ssm-enabled")
    {
        ssm_enabled = value;
        ssm_enabled.value_namespace = name_space;
        ssm_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selection-input")
    {
        selection_input = value;
        selection_input.value_namespace = name_space;
        selection_input.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "squelched")
    {
        squelched = value;
        squelched.value_namespace = name_space;
        squelched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "damping-state")
    {
        damping_state = value;
        damping_state.value_namespace = name_space;
        damping_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "damping-time")
    {
        damping_time = value;
        damping_time.value_namespace = name_space;
        damping_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-disabled")
    {
        input_disabled = value;
        input_disabled.value_namespace = name_space;
        input_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-disabled")
    {
        output_disabled = value;
        output_disabled.value_namespace = name_space;
        output_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-to-restore-time")
    {
        wait_to_restore_time = value;
        wait_to_restore_time.value_namespace = name_space;
        wait_to_restore_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock-type")
    {
        clock_type = value;
        clock_type.value_namespace = name_space;
        clock_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "supports-frequency")
    {
        supports_frequency = value;
        supports_frequency.value_namespace = name_space;
        supports_frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "supports-time-of-day")
    {
        supports_time_of_day = value;
        supports_time_of_day.value_namespace = name_space;
        supports_time_of_day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spa-selection-point")
    {
        spa_selection_point.append(value);
    }
    if(value_path == "spa-selection-points-description")
    {
        spa_selection_points_description.append(value);
    }
    if(value_path == "node-selection-point")
    {
        node_selection_point.append(value);
    }
    if(value_path == "node-selection-points-description")
    {
        node_selection_points_description.append(value);
    }
}

void FrequencySynchronization::Clocks::Clock_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clock-name")
    {
        clock_name.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "down-reason")
    {
        down_reason.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "time-of-day-priority")
    {
        time_of_day_priority.yfilter = yfilter;
    }
    if(value_path == "ssm-support")
    {
        ssm_support.yfilter = yfilter;
    }
    if(value_path == "ssm-enabled")
    {
        ssm_enabled.yfilter = yfilter;
    }
    if(value_path == "loopback")
    {
        loopback.yfilter = yfilter;
    }
    if(value_path == "selection-input")
    {
        selection_input.yfilter = yfilter;
    }
    if(value_path == "squelched")
    {
        squelched.yfilter = yfilter;
    }
    if(value_path == "damping-state")
    {
        damping_state.yfilter = yfilter;
    }
    if(value_path == "damping-time")
    {
        damping_time.yfilter = yfilter;
    }
    if(value_path == "input-disabled")
    {
        input_disabled.yfilter = yfilter;
    }
    if(value_path == "output-disabled")
    {
        output_disabled.yfilter = yfilter;
    }
    if(value_path == "wait-to-restore-time")
    {
        wait_to_restore_time.yfilter = yfilter;
    }
    if(value_path == "clock-type")
    {
        clock_type.yfilter = yfilter;
    }
    if(value_path == "supports-frequency")
    {
        supports_frequency.yfilter = yfilter;
    }
    if(value_path == "supports-time-of-day")
    {
        supports_time_of_day.yfilter = yfilter;
    }
    if(value_path == "spa-selection-point")
    {
        spa_selection_point.yfilter = yfilter;
    }
    if(value_path == "spa-selection-points-description")
    {
        spa_selection_points_description.yfilter = yfilter;
    }
    if(value_path == "node-selection-point")
    {
        node_selection_point.yfilter = yfilter;
    }
    if(value_path == "node-selection-points-description")
    {
        node_selection_points_description.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Clocks::Clock_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source" || name == "selected-source" || name == "quality-level-received" || name == "quality-level-damped" || name == "quality-level-effective-input" || name == "quality-level-effective-output" || name == "quality-level-selected-source" || name == "clock-name" || name == "state" || name == "down-reason" || name == "description" || name == "priority" || name == "time-of-day-priority" || name == "ssm-support" || name == "ssm-enabled" || name == "loopback" || name == "selection-input" || name == "squelched" || name == "damping-state" || name == "damping-time" || name == "input-disabled" || name == "output-disabled" || name == "wait-to-restore-time" || name == "clock-type" || name == "supports-frequency" || name == "supports-time-of-day" || name == "spa-selection-point" || name == "spa-selection-points-description" || name == "node-selection-point" || name == "node-selection-points-description")
        return true;
    return false;
}

FrequencySynchronization::Clocks::Clock_::Source::Source()
    :
    source_class{YType::enumeration, "source-class"},
    ethernet_interface{YType::str, "ethernet-interface"},
    sonet_interface{YType::str, "sonet-interface"},
    node{YType::str, "node"},
    ptp_node{YType::str, "ptp-node"},
    satellite_access_interface{YType::str, "satellite-access-interface"},
    ntp_node{YType::str, "ntp-node"}
    	,
    clock_id(std::make_shared<FrequencySynchronization::Clocks::Clock_::Source::ClockId>())
{
    clock_id->parent = this;

    yang_name = "source"; yang_parent_name = "clock"; is_top_level_class = false; has_list_ancestor = true;
}

FrequencySynchronization::Clocks::Clock_::Source::~Source()
{
}

bool FrequencySynchronization::Clocks::Clock_::Source::has_data() const
{
    return source_class.is_set
	|| ethernet_interface.is_set
	|| sonet_interface.is_set
	|| node.is_set
	|| ptp_node.is_set
	|| satellite_access_interface.is_set
	|| ntp_node.is_set
	|| (clock_id !=  nullptr && clock_id->has_data());
}

bool FrequencySynchronization::Clocks::Clock_::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_class.yfilter)
	|| ydk::is_set(ethernet_interface.yfilter)
	|| ydk::is_set(sonet_interface.yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(ptp_node.yfilter)
	|| ydk::is_set(satellite_access_interface.yfilter)
	|| ydk::is_set(ntp_node.yfilter)
	|| (clock_id !=  nullptr && clock_id->has_operation());
}

std::string FrequencySynchronization::Clocks::Clock_::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Clocks::Clock_::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_class.is_set || is_set(source_class.yfilter)) leaf_name_data.push_back(source_class.get_name_leafdata());
    if (ethernet_interface.is_set || is_set(ethernet_interface.yfilter)) leaf_name_data.push_back(ethernet_interface.get_name_leafdata());
    if (sonet_interface.is_set || is_set(sonet_interface.yfilter)) leaf_name_data.push_back(sonet_interface.get_name_leafdata());
    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (ptp_node.is_set || is_set(ptp_node.yfilter)) leaf_name_data.push_back(ptp_node.get_name_leafdata());
    if (satellite_access_interface.is_set || is_set(satellite_access_interface.yfilter)) leaf_name_data.push_back(satellite_access_interface.get_name_leafdata());
    if (ntp_node.is_set || is_set(ntp_node.yfilter)) leaf_name_data.push_back(ntp_node.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Clocks::Clock_::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clock-id")
    {
        if(clock_id == nullptr)
        {
            clock_id = std::make_shared<FrequencySynchronization::Clocks::Clock_::Source::ClockId>();
        }
        return clock_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Clocks::Clock_::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(clock_id != nullptr)
    {
        children["clock-id"] = clock_id;
    }

    return children;
}

void FrequencySynchronization::Clocks::Clock_::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-class")
    {
        source_class = value;
        source_class.value_namespace = name_space;
        source_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-interface")
    {
        ethernet_interface = value;
        ethernet_interface.value_namespace = name_space;
        ethernet_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonet-interface")
    {
        sonet_interface = value;
        sonet_interface.value_namespace = name_space;
        sonet_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ptp-node")
    {
        ptp_node = value;
        ptp_node.value_namespace = name_space;
        ptp_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "satellite-access-interface")
    {
        satellite_access_interface = value;
        satellite_access_interface.value_namespace = name_space;
        satellite_access_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ntp-node")
    {
        ntp_node = value;
        ntp_node.value_namespace = name_space;
        ntp_node.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Clocks::Clock_::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-class")
    {
        source_class.yfilter = yfilter;
    }
    if(value_path == "ethernet-interface")
    {
        ethernet_interface.yfilter = yfilter;
    }
    if(value_path == "sonet-interface")
    {
        sonet_interface.yfilter = yfilter;
    }
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "ptp-node")
    {
        ptp_node.yfilter = yfilter;
    }
    if(value_path == "satellite-access-interface")
    {
        satellite_access_interface.yfilter = yfilter;
    }
    if(value_path == "ntp-node")
    {
        ntp_node.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Clocks::Clock_::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-id" || name == "source-class" || name == "ethernet-interface" || name == "sonet-interface" || name == "node" || name == "ptp-node" || name == "satellite-access-interface" || name == "ntp-node")
        return true;
    return false;
}

FrequencySynchronization::Clocks::Clock_::Source::ClockId::ClockId()
    :
    node{YType::str, "node"},
    port{YType::uint32, "port"}
{

    yang_name = "clock-id"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true;
}

FrequencySynchronization::Clocks::Clock_::Source::ClockId::~ClockId()
{
}

bool FrequencySynchronization::Clocks::Clock_::Source::ClockId::has_data() const
{
    return node.is_set
	|| port.is_set;
}

bool FrequencySynchronization::Clocks::Clock_::Source::ClockId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string FrequencySynchronization::Clocks::Clock_::Source::ClockId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Clocks::Clock_::Source::ClockId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Clocks::Clock_::Source::ClockId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Clocks::Clock_::Source::ClockId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void FrequencySynchronization::Clocks::Clock_::Source::ClockId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Clocks::Clock_::Source::ClockId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Clocks::Clock_::Source::ClockId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node" || name == "port")
        return true;
    return false;
}

FrequencySynchronization::Clocks::Clock_::SelectedSource::SelectedSource()
    :
    source_class{YType::enumeration, "source-class"},
    ethernet_interface{YType::str, "ethernet-interface"},
    sonet_interface{YType::str, "sonet-interface"},
    node{YType::str, "node"},
    ptp_node{YType::str, "ptp-node"},
    satellite_access_interface{YType::str, "satellite-access-interface"},
    ntp_node{YType::str, "ntp-node"}
    	,
    clock_id(std::make_shared<FrequencySynchronization::Clocks::Clock_::SelectedSource::ClockId>())
{
    clock_id->parent = this;

    yang_name = "selected-source"; yang_parent_name = "clock"; is_top_level_class = false; has_list_ancestor = true;
}

FrequencySynchronization::Clocks::Clock_::SelectedSource::~SelectedSource()
{
}

bool FrequencySynchronization::Clocks::Clock_::SelectedSource::has_data() const
{
    return source_class.is_set
	|| ethernet_interface.is_set
	|| sonet_interface.is_set
	|| node.is_set
	|| ptp_node.is_set
	|| satellite_access_interface.is_set
	|| ntp_node.is_set
	|| (clock_id !=  nullptr && clock_id->has_data());
}

bool FrequencySynchronization::Clocks::Clock_::SelectedSource::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_class.yfilter)
	|| ydk::is_set(ethernet_interface.yfilter)
	|| ydk::is_set(sonet_interface.yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(ptp_node.yfilter)
	|| ydk::is_set(satellite_access_interface.yfilter)
	|| ydk::is_set(ntp_node.yfilter)
	|| (clock_id !=  nullptr && clock_id->has_operation());
}

std::string FrequencySynchronization::Clocks::Clock_::SelectedSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "selected-source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Clocks::Clock_::SelectedSource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_class.is_set || is_set(source_class.yfilter)) leaf_name_data.push_back(source_class.get_name_leafdata());
    if (ethernet_interface.is_set || is_set(ethernet_interface.yfilter)) leaf_name_data.push_back(ethernet_interface.get_name_leafdata());
    if (sonet_interface.is_set || is_set(sonet_interface.yfilter)) leaf_name_data.push_back(sonet_interface.get_name_leafdata());
    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (ptp_node.is_set || is_set(ptp_node.yfilter)) leaf_name_data.push_back(ptp_node.get_name_leafdata());
    if (satellite_access_interface.is_set || is_set(satellite_access_interface.yfilter)) leaf_name_data.push_back(satellite_access_interface.get_name_leafdata());
    if (ntp_node.is_set || is_set(ntp_node.yfilter)) leaf_name_data.push_back(ntp_node.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Clocks::Clock_::SelectedSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clock-id")
    {
        if(clock_id == nullptr)
        {
            clock_id = std::make_shared<FrequencySynchronization::Clocks::Clock_::SelectedSource::ClockId>();
        }
        return clock_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Clocks::Clock_::SelectedSource::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(clock_id != nullptr)
    {
        children["clock-id"] = clock_id;
    }

    return children;
}

void FrequencySynchronization::Clocks::Clock_::SelectedSource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-class")
    {
        source_class = value;
        source_class.value_namespace = name_space;
        source_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-interface")
    {
        ethernet_interface = value;
        ethernet_interface.value_namespace = name_space;
        ethernet_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonet-interface")
    {
        sonet_interface = value;
        sonet_interface.value_namespace = name_space;
        sonet_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ptp-node")
    {
        ptp_node = value;
        ptp_node.value_namespace = name_space;
        ptp_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "satellite-access-interface")
    {
        satellite_access_interface = value;
        satellite_access_interface.value_namespace = name_space;
        satellite_access_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ntp-node")
    {
        ntp_node = value;
        ntp_node.value_namespace = name_space;
        ntp_node.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Clocks::Clock_::SelectedSource::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-class")
    {
        source_class.yfilter = yfilter;
    }
    if(value_path == "ethernet-interface")
    {
        ethernet_interface.yfilter = yfilter;
    }
    if(value_path == "sonet-interface")
    {
        sonet_interface.yfilter = yfilter;
    }
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "ptp-node")
    {
        ptp_node.yfilter = yfilter;
    }
    if(value_path == "satellite-access-interface")
    {
        satellite_access_interface.yfilter = yfilter;
    }
    if(value_path == "ntp-node")
    {
        ntp_node.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Clocks::Clock_::SelectedSource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-id" || name == "source-class" || name == "ethernet-interface" || name == "sonet-interface" || name == "node" || name == "ptp-node" || name == "satellite-access-interface" || name == "ntp-node")
        return true;
    return false;
}

FrequencySynchronization::Clocks::Clock_::SelectedSource::ClockId::ClockId()
    :
    node{YType::str, "node"},
    port{YType::uint32, "port"}
{

    yang_name = "clock-id"; yang_parent_name = "selected-source"; is_top_level_class = false; has_list_ancestor = true;
}

FrequencySynchronization::Clocks::Clock_::SelectedSource::ClockId::~ClockId()
{
}

bool FrequencySynchronization::Clocks::Clock_::SelectedSource::ClockId::has_data() const
{
    return node.is_set
	|| port.is_set;
}

bool FrequencySynchronization::Clocks::Clock_::SelectedSource::ClockId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string FrequencySynchronization::Clocks::Clock_::SelectedSource::ClockId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Clocks::Clock_::SelectedSource::ClockId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Clocks::Clock_::SelectedSource::ClockId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Clocks::Clock_::SelectedSource::ClockId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void FrequencySynchronization::Clocks::Clock_::SelectedSource::ClockId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Clocks::Clock_::SelectedSource::ClockId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Clocks::Clock_::SelectedSource::ClockId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node" || name == "port")
        return true;
    return false;
}

FrequencySynchronization::Clocks::Clock_::QualityLevelReceived::QualityLevelReceived()
    :
    quality_level_option{YType::enumeration, "quality-level-option"},
    option1_value{YType::enumeration, "option1-value"},
    option2_generation1_value{YType::enumeration, "option2-generation1-value"},
    option2_generation2_value{YType::enumeration, "option2-generation2-value"}
{

    yang_name = "quality-level-received"; yang_parent_name = "clock"; is_top_level_class = false; has_list_ancestor = true;
}

FrequencySynchronization::Clocks::Clock_::QualityLevelReceived::~QualityLevelReceived()
{
}

bool FrequencySynchronization::Clocks::Clock_::QualityLevelReceived::has_data() const
{
    return quality_level_option.is_set
	|| option1_value.is_set
	|| option2_generation1_value.is_set
	|| option2_generation2_value.is_set;
}

bool FrequencySynchronization::Clocks::Clock_::QualityLevelReceived::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(quality_level_option.yfilter)
	|| ydk::is_set(option1_value.yfilter)
	|| ydk::is_set(option2_generation1_value.yfilter)
	|| ydk::is_set(option2_generation2_value.yfilter);
}

std::string FrequencySynchronization::Clocks::Clock_::QualityLevelReceived::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "quality-level-received";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Clocks::Clock_::QualityLevelReceived::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (quality_level_option.is_set || is_set(quality_level_option.yfilter)) leaf_name_data.push_back(quality_level_option.get_name_leafdata());
    if (option1_value.is_set || is_set(option1_value.yfilter)) leaf_name_data.push_back(option1_value.get_name_leafdata());
    if (option2_generation1_value.is_set || is_set(option2_generation1_value.yfilter)) leaf_name_data.push_back(option2_generation1_value.get_name_leafdata());
    if (option2_generation2_value.is_set || is_set(option2_generation2_value.yfilter)) leaf_name_data.push_back(option2_generation2_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Clocks::Clock_::QualityLevelReceived::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Clocks::Clock_::QualityLevelReceived::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void FrequencySynchronization::Clocks::Clock_::QualityLevelReceived::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option = value;
        quality_level_option.value_namespace = name_space;
        quality_level_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option1-value")
    {
        option1_value = value;
        option1_value.value_namespace = name_space;
        option1_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option2-generation1-value")
    {
        option2_generation1_value = value;
        option2_generation1_value.value_namespace = name_space;
        option2_generation1_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option2-generation2-value")
    {
        option2_generation2_value = value;
        option2_generation2_value.value_namespace = name_space;
        option2_generation2_value.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Clocks::Clock_::QualityLevelReceived::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option.yfilter = yfilter;
    }
    if(value_path == "option1-value")
    {
        option1_value.yfilter = yfilter;
    }
    if(value_path == "option2-generation1-value")
    {
        option2_generation1_value.yfilter = yfilter;
    }
    if(value_path == "option2-generation2-value")
    {
        option2_generation2_value.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Clocks::Clock_::QualityLevelReceived::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "quality-level-option" || name == "option1-value" || name == "option2-generation1-value" || name == "option2-generation2-value")
        return true;
    return false;
}

FrequencySynchronization::Clocks::Clock_::QualityLevelDamped::QualityLevelDamped()
    :
    quality_level_option{YType::enumeration, "quality-level-option"},
    option1_value{YType::enumeration, "option1-value"},
    option2_generation1_value{YType::enumeration, "option2-generation1-value"},
    option2_generation2_value{YType::enumeration, "option2-generation2-value"}
{

    yang_name = "quality-level-damped"; yang_parent_name = "clock"; is_top_level_class = false; has_list_ancestor = true;
}

FrequencySynchronization::Clocks::Clock_::QualityLevelDamped::~QualityLevelDamped()
{
}

bool FrequencySynchronization::Clocks::Clock_::QualityLevelDamped::has_data() const
{
    return quality_level_option.is_set
	|| option1_value.is_set
	|| option2_generation1_value.is_set
	|| option2_generation2_value.is_set;
}

bool FrequencySynchronization::Clocks::Clock_::QualityLevelDamped::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(quality_level_option.yfilter)
	|| ydk::is_set(option1_value.yfilter)
	|| ydk::is_set(option2_generation1_value.yfilter)
	|| ydk::is_set(option2_generation2_value.yfilter);
}

std::string FrequencySynchronization::Clocks::Clock_::QualityLevelDamped::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "quality-level-damped";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Clocks::Clock_::QualityLevelDamped::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (quality_level_option.is_set || is_set(quality_level_option.yfilter)) leaf_name_data.push_back(quality_level_option.get_name_leafdata());
    if (option1_value.is_set || is_set(option1_value.yfilter)) leaf_name_data.push_back(option1_value.get_name_leafdata());
    if (option2_generation1_value.is_set || is_set(option2_generation1_value.yfilter)) leaf_name_data.push_back(option2_generation1_value.get_name_leafdata());
    if (option2_generation2_value.is_set || is_set(option2_generation2_value.yfilter)) leaf_name_data.push_back(option2_generation2_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Clocks::Clock_::QualityLevelDamped::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Clocks::Clock_::QualityLevelDamped::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void FrequencySynchronization::Clocks::Clock_::QualityLevelDamped::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option = value;
        quality_level_option.value_namespace = name_space;
        quality_level_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option1-value")
    {
        option1_value = value;
        option1_value.value_namespace = name_space;
        option1_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option2-generation1-value")
    {
        option2_generation1_value = value;
        option2_generation1_value.value_namespace = name_space;
        option2_generation1_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option2-generation2-value")
    {
        option2_generation2_value = value;
        option2_generation2_value.value_namespace = name_space;
        option2_generation2_value.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Clocks::Clock_::QualityLevelDamped::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option.yfilter = yfilter;
    }
    if(value_path == "option1-value")
    {
        option1_value.yfilter = yfilter;
    }
    if(value_path == "option2-generation1-value")
    {
        option2_generation1_value.yfilter = yfilter;
    }
    if(value_path == "option2-generation2-value")
    {
        option2_generation2_value.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Clocks::Clock_::QualityLevelDamped::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "quality-level-option" || name == "option1-value" || name == "option2-generation1-value" || name == "option2-generation2-value")
        return true;
    return false;
}

FrequencySynchronization::Clocks::Clock_::QualityLevelEffectiveInput::QualityLevelEffectiveInput()
    :
    quality_level_option{YType::enumeration, "quality-level-option"},
    option1_value{YType::enumeration, "option1-value"},
    option2_generation1_value{YType::enumeration, "option2-generation1-value"},
    option2_generation2_value{YType::enumeration, "option2-generation2-value"}
{

    yang_name = "quality-level-effective-input"; yang_parent_name = "clock"; is_top_level_class = false; has_list_ancestor = true;
}

FrequencySynchronization::Clocks::Clock_::QualityLevelEffectiveInput::~QualityLevelEffectiveInput()
{
}

bool FrequencySynchronization::Clocks::Clock_::QualityLevelEffectiveInput::has_data() const
{
    return quality_level_option.is_set
	|| option1_value.is_set
	|| option2_generation1_value.is_set
	|| option2_generation2_value.is_set;
}

bool FrequencySynchronization::Clocks::Clock_::QualityLevelEffectiveInput::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(quality_level_option.yfilter)
	|| ydk::is_set(option1_value.yfilter)
	|| ydk::is_set(option2_generation1_value.yfilter)
	|| ydk::is_set(option2_generation2_value.yfilter);
}

std::string FrequencySynchronization::Clocks::Clock_::QualityLevelEffectiveInput::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "quality-level-effective-input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Clocks::Clock_::QualityLevelEffectiveInput::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (quality_level_option.is_set || is_set(quality_level_option.yfilter)) leaf_name_data.push_back(quality_level_option.get_name_leafdata());
    if (option1_value.is_set || is_set(option1_value.yfilter)) leaf_name_data.push_back(option1_value.get_name_leafdata());
    if (option2_generation1_value.is_set || is_set(option2_generation1_value.yfilter)) leaf_name_data.push_back(option2_generation1_value.get_name_leafdata());
    if (option2_generation2_value.is_set || is_set(option2_generation2_value.yfilter)) leaf_name_data.push_back(option2_generation2_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Clocks::Clock_::QualityLevelEffectiveInput::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Clocks::Clock_::QualityLevelEffectiveInput::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void FrequencySynchronization::Clocks::Clock_::QualityLevelEffectiveInput::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option = value;
        quality_level_option.value_namespace = name_space;
        quality_level_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option1-value")
    {
        option1_value = value;
        option1_value.value_namespace = name_space;
        option1_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option2-generation1-value")
    {
        option2_generation1_value = value;
        option2_generation1_value.value_namespace = name_space;
        option2_generation1_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option2-generation2-value")
    {
        option2_generation2_value = value;
        option2_generation2_value.value_namespace = name_space;
        option2_generation2_value.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Clocks::Clock_::QualityLevelEffectiveInput::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option.yfilter = yfilter;
    }
    if(value_path == "option1-value")
    {
        option1_value.yfilter = yfilter;
    }
    if(value_path == "option2-generation1-value")
    {
        option2_generation1_value.yfilter = yfilter;
    }
    if(value_path == "option2-generation2-value")
    {
        option2_generation2_value.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Clocks::Clock_::QualityLevelEffectiveInput::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "quality-level-option" || name == "option1-value" || name == "option2-generation1-value" || name == "option2-generation2-value")
        return true;
    return false;
}

FrequencySynchronization::Clocks::Clock_::QualityLevelEffectiveOutput::QualityLevelEffectiveOutput()
    :
    quality_level_option{YType::enumeration, "quality-level-option"},
    option1_value{YType::enumeration, "option1-value"},
    option2_generation1_value{YType::enumeration, "option2-generation1-value"},
    option2_generation2_value{YType::enumeration, "option2-generation2-value"}
{

    yang_name = "quality-level-effective-output"; yang_parent_name = "clock"; is_top_level_class = false; has_list_ancestor = true;
}

FrequencySynchronization::Clocks::Clock_::QualityLevelEffectiveOutput::~QualityLevelEffectiveOutput()
{
}

bool FrequencySynchronization::Clocks::Clock_::QualityLevelEffectiveOutput::has_data() const
{
    return quality_level_option.is_set
	|| option1_value.is_set
	|| option2_generation1_value.is_set
	|| option2_generation2_value.is_set;
}

bool FrequencySynchronization::Clocks::Clock_::QualityLevelEffectiveOutput::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(quality_level_option.yfilter)
	|| ydk::is_set(option1_value.yfilter)
	|| ydk::is_set(option2_generation1_value.yfilter)
	|| ydk::is_set(option2_generation2_value.yfilter);
}

std::string FrequencySynchronization::Clocks::Clock_::QualityLevelEffectiveOutput::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "quality-level-effective-output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Clocks::Clock_::QualityLevelEffectiveOutput::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (quality_level_option.is_set || is_set(quality_level_option.yfilter)) leaf_name_data.push_back(quality_level_option.get_name_leafdata());
    if (option1_value.is_set || is_set(option1_value.yfilter)) leaf_name_data.push_back(option1_value.get_name_leafdata());
    if (option2_generation1_value.is_set || is_set(option2_generation1_value.yfilter)) leaf_name_data.push_back(option2_generation1_value.get_name_leafdata());
    if (option2_generation2_value.is_set || is_set(option2_generation2_value.yfilter)) leaf_name_data.push_back(option2_generation2_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Clocks::Clock_::QualityLevelEffectiveOutput::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Clocks::Clock_::QualityLevelEffectiveOutput::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void FrequencySynchronization::Clocks::Clock_::QualityLevelEffectiveOutput::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option = value;
        quality_level_option.value_namespace = name_space;
        quality_level_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option1-value")
    {
        option1_value = value;
        option1_value.value_namespace = name_space;
        option1_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option2-generation1-value")
    {
        option2_generation1_value = value;
        option2_generation1_value.value_namespace = name_space;
        option2_generation1_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option2-generation2-value")
    {
        option2_generation2_value = value;
        option2_generation2_value.value_namespace = name_space;
        option2_generation2_value.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Clocks::Clock_::QualityLevelEffectiveOutput::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option.yfilter = yfilter;
    }
    if(value_path == "option1-value")
    {
        option1_value.yfilter = yfilter;
    }
    if(value_path == "option2-generation1-value")
    {
        option2_generation1_value.yfilter = yfilter;
    }
    if(value_path == "option2-generation2-value")
    {
        option2_generation2_value.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Clocks::Clock_::QualityLevelEffectiveOutput::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "quality-level-option" || name == "option1-value" || name == "option2-generation1-value" || name == "option2-generation2-value")
        return true;
    return false;
}

FrequencySynchronization::Clocks::Clock_::QualityLevelSelectedSource::QualityLevelSelectedSource()
    :
    quality_level_option{YType::enumeration, "quality-level-option"},
    option1_value{YType::enumeration, "option1-value"},
    option2_generation1_value{YType::enumeration, "option2-generation1-value"},
    option2_generation2_value{YType::enumeration, "option2-generation2-value"}
{

    yang_name = "quality-level-selected-source"; yang_parent_name = "clock"; is_top_level_class = false; has_list_ancestor = true;
}

FrequencySynchronization::Clocks::Clock_::QualityLevelSelectedSource::~QualityLevelSelectedSource()
{
}

bool FrequencySynchronization::Clocks::Clock_::QualityLevelSelectedSource::has_data() const
{
    return quality_level_option.is_set
	|| option1_value.is_set
	|| option2_generation1_value.is_set
	|| option2_generation2_value.is_set;
}

bool FrequencySynchronization::Clocks::Clock_::QualityLevelSelectedSource::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(quality_level_option.yfilter)
	|| ydk::is_set(option1_value.yfilter)
	|| ydk::is_set(option2_generation1_value.yfilter)
	|| ydk::is_set(option2_generation2_value.yfilter);
}

std::string FrequencySynchronization::Clocks::Clock_::QualityLevelSelectedSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "quality-level-selected-source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Clocks::Clock_::QualityLevelSelectedSource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (quality_level_option.is_set || is_set(quality_level_option.yfilter)) leaf_name_data.push_back(quality_level_option.get_name_leafdata());
    if (option1_value.is_set || is_set(option1_value.yfilter)) leaf_name_data.push_back(option1_value.get_name_leafdata());
    if (option2_generation1_value.is_set || is_set(option2_generation1_value.yfilter)) leaf_name_data.push_back(option2_generation1_value.get_name_leafdata());
    if (option2_generation2_value.is_set || is_set(option2_generation2_value.yfilter)) leaf_name_data.push_back(option2_generation2_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Clocks::Clock_::QualityLevelSelectedSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Clocks::Clock_::QualityLevelSelectedSource::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void FrequencySynchronization::Clocks::Clock_::QualityLevelSelectedSource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option = value;
        quality_level_option.value_namespace = name_space;
        quality_level_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option1-value")
    {
        option1_value = value;
        option1_value.value_namespace = name_space;
        option1_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option2-generation1-value")
    {
        option2_generation1_value = value;
        option2_generation1_value.value_namespace = name_space;
        option2_generation1_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option2-generation2-value")
    {
        option2_generation2_value = value;
        option2_generation2_value.value_namespace = name_space;
        option2_generation2_value.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Clocks::Clock_::QualityLevelSelectedSource::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option.yfilter = yfilter;
    }
    if(value_path == "option1-value")
    {
        option1_value.yfilter = yfilter;
    }
    if(value_path == "option2-generation1-value")
    {
        option2_generation1_value.yfilter = yfilter;
    }
    if(value_path == "option2-generation2-value")
    {
        option2_generation2_value.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Clocks::Clock_::QualityLevelSelectedSource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "quality-level-option" || name == "option1-value" || name == "option2-generation1-value" || name == "option2-generation2-value")
        return true;
    return false;
}

const Enum::YLeaf FsyncStream::local {1, "local"};
const Enum::YLeaf FsyncStream::selection_point {2, "selection-point"};

const Enum::YLeaf FsyncSource::ethernet {1, "ethernet"};
const Enum::YLeaf FsyncSource::sonet {2, "sonet"};
const Enum::YLeaf FsyncSource::clock_ {3, "clock"};
const Enum::YLeaf FsyncSource::internal {4, "internal"};
const Enum::YLeaf FsyncSource::ptp {5, "ptp"};
const Enum::YLeaf FsyncSource::satellite_access {6, "satellite-access"};
const Enum::YLeaf FsyncSource::ntp {7, "ntp"};

const Enum::YLeaf FsyncBagClockIntfClass::clock_class_bitst1 {0, "clock-class-bitst1"};
const Enum::YLeaf FsyncBagClockIntfClass::clock_class_bitse1 {1, "clock-class-bitse1"};
const Enum::YLeaf FsyncBagClockIntfClass::clock_class_bits2m {2, "clock-class-bits2m"};
const Enum::YLeaf FsyncBagClockIntfClass::clock_class_bits6m {3, "clock-class-bits6m"};
const Enum::YLeaf FsyncBagClockIntfClass::clock_class_bits64k {4, "clock-class-bits64k"};
const Enum::YLeaf FsyncBagClockIntfClass::clock_class_dti {5, "clock-class-dti"};
const Enum::YLeaf FsyncBagClockIntfClass::clock_class_gps {6, "clock-class-gps"};
const Enum::YLeaf FsyncBagClockIntfClass::clock_class_chassis_sync {7, "clock-class-chassis-sync"};
const Enum::YLeaf FsyncBagClockIntfClass::clock_class_bitsj1 {8, "clock-class-bitsj1"};

const Enum::YLeaf FsyncBagEsmcPeerState::peer_down {1808240398, "peer-down"};
const Enum::YLeaf FsyncBagEsmcPeerState::peer_up {1808240399, "peer-up"};
const Enum::YLeaf FsyncBagEsmcPeerState::peer_timed_out {1808240400, "peer-timed-out"};
const Enum::YLeaf FsyncBagEsmcPeerState::peer_unknown {1808240401, "peer-unknown"};

const Enum::YLeaf FsyncBagDampingState::damping_state_down {0, "damping-state-down"};
const Enum::YLeaf FsyncBagDampingState::damping_state_coming_up {1, "damping-state-coming-up"};
const Enum::YLeaf FsyncBagDampingState::damping_state_up {2, "damping-state-up"};
const Enum::YLeaf FsyncBagDampingState::damping_state_going_down {3, "damping-state-going-down"};

const Enum::YLeaf ImStateEnum::im_state_not_ready {0, "im-state-not-ready"};
const Enum::YLeaf ImStateEnum::im_state_admin_down {1, "im-state-admin-down"};
const Enum::YLeaf ImStateEnum::im_state_down {2, "im-state-down"};
const Enum::YLeaf ImStateEnum::im_state_up {3, "im-state-up"};
const Enum::YLeaf ImStateEnum::im_state_shutdown {4, "im-state-shutdown"};
const Enum::YLeaf ImStateEnum::im_state_err_disable {5, "im-state-err-disable"};
const Enum::YLeaf ImStateEnum::im_state_down_immediate {6, "im-state-down-immediate"};
const Enum::YLeaf ImStateEnum::im_state_down_immediate_admin {7, "im-state-down-immediate-admin"};
const Enum::YLeaf ImStateEnum::im_state_down_graceful {8, "im-state-down-graceful"};
const Enum::YLeaf ImStateEnum::im_state_begin_shutdown {9, "im-state-begin-shutdown"};
const Enum::YLeaf ImStateEnum::im_state_end_shutdown {10, "im-state-end-shutdown"};
const Enum::YLeaf ImStateEnum::im_state_begin_error_disable {11, "im-state-begin-error-disable"};
const Enum::YLeaf ImStateEnum::im_state_end_error_disable {12, "im-state-end-error-disable"};
const Enum::YLeaf ImStateEnum::im_state_begin_down_graceful {13, "im-state-begin-down-graceful"};
const Enum::YLeaf ImStateEnum::im_state_reset {14, "im-state-reset"};
const Enum::YLeaf ImStateEnum::im_state_operational {15, "im-state-operational"};
const Enum::YLeaf ImStateEnum::im_state_not_operational {16, "im-state-not-operational"};
const Enum::YLeaf ImStateEnum::im_state_unknown {17, "im-state-unknown"};
const Enum::YLeaf ImStateEnum::im_state_last {18, "im-state-last"};

const Enum::YLeaf FsyncBagForwardtraceNode::forward_trace_node_selection_point {0, "forward-trace-node-selection-point"};
const Enum::YLeaf FsyncBagForwardtraceNode::forward_trace_node_source {1, "forward-trace-node-source"};

const Enum::YLeaf FsyncBagStreamState::stream_invalid {0, "stream-invalid"};
const Enum::YLeaf FsyncBagStreamState::stream_available {2, "stream-available"};
const Enum::YLeaf FsyncBagStreamState::stream_locked {4, "stream-locked"};
const Enum::YLeaf FsyncBagStreamState::stream_holdover {5, "stream-holdover"};
const Enum::YLeaf FsyncBagStreamState::stream_freerun {6, "stream-freerun"};
const Enum::YLeaf FsyncBagStreamState::stream_failed {7, "stream-failed"};
const Enum::YLeaf FsyncBagStreamState::stream_unmonitored {8, "stream-unmonitored"};
const Enum::YLeaf FsyncBagStreamState::stream_error {9, "stream-error"};

const Enum::YLeaf FsyncBagSourceClass::invalid_source {0, "invalid-source"};
const Enum::YLeaf FsyncBagSourceClass::ethernet_interface_source {1, "ethernet-interface-source"};
const Enum::YLeaf FsyncBagSourceClass::sonet_interface_source {2, "sonet-interface-source"};
const Enum::YLeaf FsyncBagSourceClass::clock_interface_source {3, "clock-interface-source"};
const Enum::YLeaf FsyncBagSourceClass::internal_clock_source {4, "internal-clock-source"};
const Enum::YLeaf FsyncBagSourceClass::ptp_source {5, "ptp-source"};
const Enum::YLeaf FsyncBagSourceClass::satellite_access_interface_source {6, "satellite-access-interface-source"};
const Enum::YLeaf FsyncBagSourceClass::ntp_source {7, "ntp-source"};

const Enum::YLeaf FsyncBagStreamInput::invalid_input {0, "invalid-input"};
const Enum::YLeaf FsyncBagStreamInput::source_input {1, "source-input"};
const Enum::YLeaf FsyncBagStreamInput::selection_point_input {2, "selection-point-input"};

const Enum::YLeaf FsyncBagQlO2G2Value::option2_generation2_invalid {0, "option2-generation2-invalid"};
const Enum::YLeaf FsyncBagQlO2G2Value::option2_generation2_do_not_use {1, "option2-generation2-do-not-use"};
const Enum::YLeaf FsyncBagQlO2G2Value::option2_generation2_failed {2, "option2-generation2-failed"};
const Enum::YLeaf FsyncBagQlO2G2Value::option2_generation2_none {3, "option2-generation2-none"};
const Enum::YLeaf FsyncBagQlO2G2Value::option2_generation2prs {30, "option2-generation2prs"};
const Enum::YLeaf FsyncBagQlO2G2Value::option2_generation2stu {31, "option2-generation2stu"};
const Enum::YLeaf FsyncBagQlO2G2Value::option2_generation2_stratum2 {32, "option2-generation2-stratum2"};
const Enum::YLeaf FsyncBagQlO2G2Value::option2_generation2_stratum3 {33, "option2-generation2-stratum3"};
const Enum::YLeaf FsyncBagQlO2G2Value::option2_generation2tnc {34, "option2-generation2tnc"};
const Enum::YLeaf FsyncBagQlO2G2Value::option2_generation2_stratum3e {35, "option2-generation2-stratum3e"};
const Enum::YLeaf FsyncBagQlO2G2Value::option2_generation2smc {36, "option2-generation2smc"};
const Enum::YLeaf FsyncBagQlO2G2Value::option2_generation2_stratum4 {37, "option2-generation2-stratum4"};

const Enum::YLeaf FsyncBagQlO2G1Value::option2_generation1_invalid {0, "option2-generation1-invalid"};
const Enum::YLeaf FsyncBagQlO2G1Value::option2_generation1_do_not_use {1, "option2-generation1-do-not-use"};
const Enum::YLeaf FsyncBagQlO2G1Value::option2_generation1_failed {2, "option2-generation1-failed"};
const Enum::YLeaf FsyncBagQlO2G1Value::option2_generation1_none {3, "option2-generation1-none"};
const Enum::YLeaf FsyncBagQlO2G1Value::option2_generation1prs {20, "option2-generation1prs"};
const Enum::YLeaf FsyncBagQlO2G1Value::option2_generation1stu {21, "option2-generation1stu"};
const Enum::YLeaf FsyncBagQlO2G1Value::option2_generation1_stratum2 {22, "option2-generation1-stratum2"};
const Enum::YLeaf FsyncBagQlO2G1Value::option2_generation1_stratum3 {23, "option2-generation1-stratum3"};
const Enum::YLeaf FsyncBagQlO2G1Value::option2_generation1smc {24, "option2-generation1smc"};
const Enum::YLeaf FsyncBagQlO2G1Value::option2_generation1_stratum4 {25, "option2-generation1-stratum4"};

const Enum::YLeaf FsyncBagQlO1Value::option1_invalid {0, "option1-invalid"};
const Enum::YLeaf FsyncBagQlO1Value::option1_do_not_use {1, "option1-do-not-use"};
const Enum::YLeaf FsyncBagQlO1Value::option1_failed {2, "option1-failed"};
const Enum::YLeaf FsyncBagQlO1Value::option1_none {3, "option1-none"};
const Enum::YLeaf FsyncBagQlO1Value::option1prc {10, "option1prc"};
const Enum::YLeaf FsyncBagQlO1Value::option1ssu_a {11, "option1ssu-a"};
const Enum::YLeaf FsyncBagQlO1Value::option1ssu_b {12, "option1ssu-b"};
const Enum::YLeaf FsyncBagQlO1Value::option1sec {13, "option1sec"};

const Enum::YLeaf FsyncBagQlOption::no_quality_level_option {0, "no-quality-level-option"};
const Enum::YLeaf FsyncBagQlOption::option1 {1, "option1"};
const Enum::YLeaf FsyncBagQlOption::option2_generation1 {2, "option2-generation1"};
const Enum::YLeaf FsyncBagQlOption::option2_generation2 {3, "option2-generation2"};
const Enum::YLeaf FsyncBagQlOption::invalid_quality_level_option {4, "invalid-quality-level-option"};

const Enum::YLeaf FsyncBagSourceState::source_state_unknown {0, "source-state-unknown"};
const Enum::YLeaf FsyncBagSourceState::source_state_up {1, "source-state-up"};
const Enum::YLeaf FsyncBagSourceState::source_state_down {2, "source-state-down"};


}
}

