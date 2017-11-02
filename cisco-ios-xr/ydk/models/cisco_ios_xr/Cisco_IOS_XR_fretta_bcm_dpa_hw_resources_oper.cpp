
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_fretta_bcm_dpa_hw_resources_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_fretta_bcm_dpa_hw_resources_oper {

Dpa::Dpa()
    :
    stats(std::make_shared<Dpa::Stats>())
{
    stats->parent = this;

    yang_name = "dpa"; yang_parent_name = "Cisco-IOS-XR-fretta-bcm-dpa-hw-resources-oper"; is_top_level_class = true; has_list_ancestor = false;
}

Dpa::~Dpa()
{
}

bool Dpa::has_data() const
{
    return (stats !=  nullptr && stats->has_data());
}

bool Dpa::has_operation() const
{
    return is_set(yfilter)
	|| (stats !=  nullptr && stats->has_operation());
}

std::string Dpa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fretta-bcm-dpa-hw-resources-oper:dpa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dpa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Dpa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stats")
    {
        if(stats == nullptr)
        {
            stats = std::make_shared<Dpa::Stats>();
        }
        return stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dpa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(stats != nullptr)
    {
        children["stats"] = stats;
    }

    return children;
}

void Dpa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dpa::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Dpa::clone_ptr() const
{
    return std::make_shared<Dpa>();
}

std::string Dpa::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Dpa::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Dpa::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Dpa::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Dpa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stats")
        return true;
    return false;
}

Dpa::Stats::Stats()
    :
    nodes(std::make_shared<Dpa::Stats::Nodes>())
{
    nodes->parent = this;

    yang_name = "stats"; yang_parent_name = "dpa"; is_top_level_class = false; has_list_ancestor = false;
}

Dpa::Stats::~Stats()
{
}

bool Dpa::Stats::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool Dpa::Stats::has_operation() const
{
    return is_set(yfilter)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string Dpa::Stats::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fretta-bcm-dpa-hw-resources-oper:dpa/" << get_segment_path();
    return path_buffer.str();
}

std::string Dpa::Stats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dpa::Stats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Dpa::Stats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<Dpa::Stats::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dpa::Stats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void Dpa::Stats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dpa::Stats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dpa::Stats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes")
        return true;
    return false;
}

Dpa::Stats::Nodes::Nodes()
{

    yang_name = "nodes"; yang_parent_name = "stats"; is_top_level_class = false; has_list_ancestor = false;
}

Dpa::Stats::Nodes::~Nodes()
{
}

bool Dpa::Stats::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool Dpa::Stats::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Dpa::Stats::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fretta-bcm-dpa-hw-resources-oper:dpa/stats/" << get_segment_path();
    return path_buffer.str();
}

std::string Dpa::Stats::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dpa::Stats::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Dpa::Stats::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Dpa::Stats::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dpa::Stats::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Dpa::Stats::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dpa::Stats::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dpa::Stats::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

Dpa::Stats::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
    	,
    hw_resources_datas(std::make_shared<Dpa::Stats::Nodes::Node::HwResourcesDatas>())
	,asic_statistics(std::make_shared<Dpa::Stats::Nodes::Node::AsicStatistics>())
	,npu_numbers(std::make_shared<Dpa::Stats::Nodes::Node::NpuNumbers>())
	,npu_ids(std::make_shared<Dpa::Stats::Nodes::Node::NpuIds>())
{
    hw_resources_datas->parent = this;
    asic_statistics->parent = this;
    npu_numbers->parent = this;
    npu_ids->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false;
}

Dpa::Stats::Nodes::Node::~Node()
{
}

bool Dpa::Stats::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (hw_resources_datas !=  nullptr && hw_resources_datas->has_data())
	|| (asic_statistics !=  nullptr && asic_statistics->has_data())
	|| (npu_numbers !=  nullptr && npu_numbers->has_data())
	|| (npu_ids !=  nullptr && npu_ids->has_data());
}

bool Dpa::Stats::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (hw_resources_datas !=  nullptr && hw_resources_datas->has_operation())
	|| (asic_statistics !=  nullptr && asic_statistics->has_operation())
	|| (npu_numbers !=  nullptr && npu_numbers->has_operation())
	|| (npu_ids !=  nullptr && npu_ids->has_operation());
}

std::string Dpa::Stats::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fretta-bcm-dpa-hw-resources-oper:dpa/stats/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string Dpa::Stats::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dpa::Stats::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dpa::Stats::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hw-resources-datas")
    {
        if(hw_resources_datas == nullptr)
        {
            hw_resources_datas = std::make_shared<Dpa::Stats::Nodes::Node::HwResourcesDatas>();
        }
        return hw_resources_datas;
    }

    if(child_yang_name == "asic-statistics")
    {
        if(asic_statistics == nullptr)
        {
            asic_statistics = std::make_shared<Dpa::Stats::Nodes::Node::AsicStatistics>();
        }
        return asic_statistics;
    }

    if(child_yang_name == "npu-numbers")
    {
        if(npu_numbers == nullptr)
        {
            npu_numbers = std::make_shared<Dpa::Stats::Nodes::Node::NpuNumbers>();
        }
        return npu_numbers;
    }

    if(child_yang_name == "npu-ids")
    {
        if(npu_ids == nullptr)
        {
            npu_ids = std::make_shared<Dpa::Stats::Nodes::Node::NpuIds>();
        }
        return npu_ids;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dpa::Stats::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(hw_resources_datas != nullptr)
    {
        children["hw-resources-datas"] = hw_resources_datas;
    }

    if(asic_statistics != nullptr)
    {
        children["asic-statistics"] = asic_statistics;
    }

    if(npu_numbers != nullptr)
    {
        children["npu-numbers"] = npu_numbers;
    }

    if(npu_ids != nullptr)
    {
        children["npu-ids"] = npu_ids;
    }

    return children;
}

void Dpa::Stats::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Dpa::Stats::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool Dpa::Stats::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hw-resources-datas" || name == "asic-statistics" || name == "npu-numbers" || name == "npu-ids" || name == "node-name")
        return true;
    return false;
}

Dpa::Stats::Nodes::Node::HwResourcesDatas::HwResourcesDatas()
{

    yang_name = "hw-resources-datas"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

Dpa::Stats::Nodes::Node::HwResourcesDatas::~HwResourcesDatas()
{
}

bool Dpa::Stats::Nodes::Node::HwResourcesDatas::has_data() const
{
    for (std::size_t index=0; index<hw_resources_data.size(); index++)
    {
        if(hw_resources_data[index]->has_data())
            return true;
    }
    return false;
}

bool Dpa::Stats::Nodes::Node::HwResourcesDatas::has_operation() const
{
    for (std::size_t index=0; index<hw_resources_data.size(); index++)
    {
        if(hw_resources_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Dpa::Stats::Nodes::Node::HwResourcesDatas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hw-resources-datas";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dpa::Stats::Nodes::Node::HwResourcesDatas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Dpa::Stats::Nodes::Node::HwResourcesDatas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hw-resources-data")
    {
        for(auto const & c : hw_resources_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Dpa::Stats::Nodes::Node::HwResourcesDatas::HwResourcesData>();
        c->parent = this;
        hw_resources_data.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dpa::Stats::Nodes::Node::HwResourcesDatas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hw_resources_data)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Dpa::Stats::Nodes::Node::HwResourcesDatas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dpa::Stats::Nodes::Node::HwResourcesDatas::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dpa::Stats::Nodes::Node::HwResourcesDatas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hw-resources-data")
        return true;
    return false;
}

Dpa::Stats::Nodes::Node::HwResourcesDatas::HwResourcesData::HwResourcesData()
    :
    resource{YType::enumeration, "resource"},
    resource_id{YType::uint32, "resource-id"},
    name{YType::str, "name"},
    num_npus{YType::uint32, "num-npus"}
{

    yang_name = "hw-resources-data"; yang_parent_name = "hw-resources-datas"; is_top_level_class = false; has_list_ancestor = true;
}

Dpa::Stats::Nodes::Node::HwResourcesDatas::HwResourcesData::~HwResourcesData()
{
}

bool Dpa::Stats::Nodes::Node::HwResourcesDatas::HwResourcesData::has_data() const
{
    for (std::size_t index=0; index<npu_hwr.size(); index++)
    {
        if(npu_hwr[index]->has_data())
            return true;
    }
    return resource.is_set
	|| resource_id.is_set
	|| name.is_set
	|| num_npus.is_set;
}

bool Dpa::Stats::Nodes::Node::HwResourcesDatas::HwResourcesData::has_operation() const
{
    for (std::size_t index=0; index<npu_hwr.size(); index++)
    {
        if(npu_hwr[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(resource.yfilter)
	|| ydk::is_set(resource_id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(num_npus.yfilter);
}

std::string Dpa::Stats::Nodes::Node::HwResourcesDatas::HwResourcesData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hw-resources-data" <<"[resource='" <<resource <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dpa::Stats::Nodes::Node::HwResourcesDatas::HwResourcesData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (resource.is_set || is_set(resource.yfilter)) leaf_name_data.push_back(resource.get_name_leafdata());
    if (resource_id.is_set || is_set(resource_id.yfilter)) leaf_name_data.push_back(resource_id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (num_npus.is_set || is_set(num_npus.yfilter)) leaf_name_data.push_back(num_npus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dpa::Stats::Nodes::Node::HwResourcesDatas::HwResourcesData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "npu-hwr")
    {
        for(auto const & c : npu_hwr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Dpa::Stats::Nodes::Node::HwResourcesDatas::HwResourcesData::NpuHwr>();
        c->parent = this;
        npu_hwr.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dpa::Stats::Nodes::Node::HwResourcesDatas::HwResourcesData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : npu_hwr)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Dpa::Stats::Nodes::Node::HwResourcesDatas::HwResourcesData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "resource")
    {
        resource = value;
        resource.value_namespace = name_space;
        resource.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resource-id")
    {
        resource_id = value;
        resource_id.value_namespace = name_space;
        resource_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-npus")
    {
        num_npus = value;
        num_npus.value_namespace = name_space;
        num_npus.value_namespace_prefix = name_space_prefix;
    }
}

void Dpa::Stats::Nodes::Node::HwResourcesDatas::HwResourcesData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "resource")
    {
        resource.yfilter = yfilter;
    }
    if(value_path == "resource-id")
    {
        resource_id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "num-npus")
    {
        num_npus.yfilter = yfilter;
    }
}

bool Dpa::Stats::Nodes::Node::HwResourcesDatas::HwResourcesData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "npu-hwr" || name == "resource" || name == "resource-id" || name == "name" || name == "num-npus")
        return true;
    return false;
}

Dpa::Stats::Nodes::Node::HwResourcesDatas::HwResourcesData::NpuHwr::NpuHwr()
    :
    max_allowed{YType::uint32, "max-allowed"},
    npu_id{YType::uint32, "npu-id"},
    max_entries{YType::uint32, "max-entries"},
    red_oor_threshold{YType::uint32, "red-oor-threshold"},
    red_oor_threshold_percent{YType::uint32, "red-oor-threshold-percent"},
    yellow_oor_threshold{YType::uint32, "yellow-oor-threshold"},
    yellow_oor_threshold_percent{YType::uint32, "yellow-oor-threshold-percent"},
    inuse_objects{YType::uint32, "inuse-objects"},
    num_lt{YType::uint32, "num-lt"},
    oor_change_count{YType::uint32, "oor-change-count"},
    oor_state_change_time1{YType::str, "oor-state-change-time1"},
    oor_state_change_time2{YType::str, "oor-state-change-time2"},
    oor_state{YType::str, "oor-state"}
{

    yang_name = "npu-hwr"; yang_parent_name = "hw-resources-data"; is_top_level_class = false; has_list_ancestor = true;
}

Dpa::Stats::Nodes::Node::HwResourcesDatas::HwResourcesData::NpuHwr::~NpuHwr()
{
}

bool Dpa::Stats::Nodes::Node::HwResourcesDatas::HwResourcesData::NpuHwr::has_data() const
{
    for (std::size_t index=0; index<lt_hwr.size(); index++)
    {
        if(lt_hwr[index]->has_data())
            return true;
    }
    return max_allowed.is_set
	|| npu_id.is_set
	|| max_entries.is_set
	|| red_oor_threshold.is_set
	|| red_oor_threshold_percent.is_set
	|| yellow_oor_threshold.is_set
	|| yellow_oor_threshold_percent.is_set
	|| inuse_objects.is_set
	|| num_lt.is_set
	|| oor_change_count.is_set
	|| oor_state_change_time1.is_set
	|| oor_state_change_time2.is_set
	|| oor_state.is_set;
}

bool Dpa::Stats::Nodes::Node::HwResourcesDatas::HwResourcesData::NpuHwr::has_operation() const
{
    for (std::size_t index=0; index<lt_hwr.size(); index++)
    {
        if(lt_hwr[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(max_allowed.yfilter)
	|| ydk::is_set(npu_id.yfilter)
	|| ydk::is_set(max_entries.yfilter)
	|| ydk::is_set(red_oor_threshold.yfilter)
	|| ydk::is_set(red_oor_threshold_percent.yfilter)
	|| ydk::is_set(yellow_oor_threshold.yfilter)
	|| ydk::is_set(yellow_oor_threshold_percent.yfilter)
	|| ydk::is_set(inuse_objects.yfilter)
	|| ydk::is_set(num_lt.yfilter)
	|| ydk::is_set(oor_change_count.yfilter)
	|| ydk::is_set(oor_state_change_time1.yfilter)
	|| ydk::is_set(oor_state_change_time2.yfilter)
	|| ydk::is_set(oor_state.yfilter);
}

std::string Dpa::Stats::Nodes::Node::HwResourcesDatas::HwResourcesData::NpuHwr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "npu-hwr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dpa::Stats::Nodes::Node::HwResourcesDatas::HwResourcesData::NpuHwr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_allowed.is_set || is_set(max_allowed.yfilter)) leaf_name_data.push_back(max_allowed.get_name_leafdata());
    if (npu_id.is_set || is_set(npu_id.yfilter)) leaf_name_data.push_back(npu_id.get_name_leafdata());
    if (max_entries.is_set || is_set(max_entries.yfilter)) leaf_name_data.push_back(max_entries.get_name_leafdata());
    if (red_oor_threshold.is_set || is_set(red_oor_threshold.yfilter)) leaf_name_data.push_back(red_oor_threshold.get_name_leafdata());
    if (red_oor_threshold_percent.is_set || is_set(red_oor_threshold_percent.yfilter)) leaf_name_data.push_back(red_oor_threshold_percent.get_name_leafdata());
    if (yellow_oor_threshold.is_set || is_set(yellow_oor_threshold.yfilter)) leaf_name_data.push_back(yellow_oor_threshold.get_name_leafdata());
    if (yellow_oor_threshold_percent.is_set || is_set(yellow_oor_threshold_percent.yfilter)) leaf_name_data.push_back(yellow_oor_threshold_percent.get_name_leafdata());
    if (inuse_objects.is_set || is_set(inuse_objects.yfilter)) leaf_name_data.push_back(inuse_objects.get_name_leafdata());
    if (num_lt.is_set || is_set(num_lt.yfilter)) leaf_name_data.push_back(num_lt.get_name_leafdata());
    if (oor_change_count.is_set || is_set(oor_change_count.yfilter)) leaf_name_data.push_back(oor_change_count.get_name_leafdata());
    if (oor_state_change_time1.is_set || is_set(oor_state_change_time1.yfilter)) leaf_name_data.push_back(oor_state_change_time1.get_name_leafdata());
    if (oor_state_change_time2.is_set || is_set(oor_state_change_time2.yfilter)) leaf_name_data.push_back(oor_state_change_time2.get_name_leafdata());
    if (oor_state.is_set || is_set(oor_state.yfilter)) leaf_name_data.push_back(oor_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dpa::Stats::Nodes::Node::HwResourcesDatas::HwResourcesData::NpuHwr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lt-hwr")
    {
        for(auto const & c : lt_hwr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Dpa::Stats::Nodes::Node::HwResourcesDatas::HwResourcesData::NpuHwr::LtHwr>();
        c->parent = this;
        lt_hwr.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dpa::Stats::Nodes::Node::HwResourcesDatas::HwResourcesData::NpuHwr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lt_hwr)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Dpa::Stats::Nodes::Node::HwResourcesDatas::HwResourcesData::NpuHwr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-allowed")
    {
        max_allowed = value;
        max_allowed.value_namespace = name_space;
        max_allowed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "npu-id")
    {
        npu_id = value;
        npu_id.value_namespace = name_space;
        npu_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-entries")
    {
        max_entries = value;
        max_entries.value_namespace = name_space;
        max_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "red-oor-threshold")
    {
        red_oor_threshold = value;
        red_oor_threshold.value_namespace = name_space;
        red_oor_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "red-oor-threshold-percent")
    {
        red_oor_threshold_percent = value;
        red_oor_threshold_percent.value_namespace = name_space;
        red_oor_threshold_percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "yellow-oor-threshold")
    {
        yellow_oor_threshold = value;
        yellow_oor_threshold.value_namespace = name_space;
        yellow_oor_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "yellow-oor-threshold-percent")
    {
        yellow_oor_threshold_percent = value;
        yellow_oor_threshold_percent.value_namespace = name_space;
        yellow_oor_threshold_percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inuse-objects")
    {
        inuse_objects = value;
        inuse_objects.value_namespace = name_space;
        inuse_objects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-lt")
    {
        num_lt = value;
        num_lt.value_namespace = name_space;
        num_lt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oor-change-count")
    {
        oor_change_count = value;
        oor_change_count.value_namespace = name_space;
        oor_change_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oor-state-change-time1")
    {
        oor_state_change_time1 = value;
        oor_state_change_time1.value_namespace = name_space;
        oor_state_change_time1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oor-state-change-time2")
    {
        oor_state_change_time2 = value;
        oor_state_change_time2.value_namespace = name_space;
        oor_state_change_time2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oor-state")
    {
        oor_state = value;
        oor_state.value_namespace = name_space;
        oor_state.value_namespace_prefix = name_space_prefix;
    }
}

void Dpa::Stats::Nodes::Node::HwResourcesDatas::HwResourcesData::NpuHwr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-allowed")
    {
        max_allowed.yfilter = yfilter;
    }
    if(value_path == "npu-id")
    {
        npu_id.yfilter = yfilter;
    }
    if(value_path == "max-entries")
    {
        max_entries.yfilter = yfilter;
    }
    if(value_path == "red-oor-threshold")
    {
        red_oor_threshold.yfilter = yfilter;
    }
    if(value_path == "red-oor-threshold-percent")
    {
        red_oor_threshold_percent.yfilter = yfilter;
    }
    if(value_path == "yellow-oor-threshold")
    {
        yellow_oor_threshold.yfilter = yfilter;
    }
    if(value_path == "yellow-oor-threshold-percent")
    {
        yellow_oor_threshold_percent.yfilter = yfilter;
    }
    if(value_path == "inuse-objects")
    {
        inuse_objects.yfilter = yfilter;
    }
    if(value_path == "num-lt")
    {
        num_lt.yfilter = yfilter;
    }
    if(value_path == "oor-change-count")
    {
        oor_change_count.yfilter = yfilter;
    }
    if(value_path == "oor-state-change-time1")
    {
        oor_state_change_time1.yfilter = yfilter;
    }
    if(value_path == "oor-state-change-time2")
    {
        oor_state_change_time2.yfilter = yfilter;
    }
    if(value_path == "oor-state")
    {
        oor_state.yfilter = yfilter;
    }
}

bool Dpa::Stats::Nodes::Node::HwResourcesDatas::HwResourcesData::NpuHwr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lt-hwr" || name == "max-allowed" || name == "npu-id" || name == "max-entries" || name == "red-oor-threshold" || name == "red-oor-threshold-percent" || name == "yellow-oor-threshold" || name == "yellow-oor-threshold-percent" || name == "inuse-objects" || name == "num-lt" || name == "oor-change-count" || name == "oor-state-change-time1" || name == "oor-state-change-time2" || name == "oor-state")
        return true;
    return false;
}

Dpa::Stats::Nodes::Node::HwResourcesDatas::HwResourcesData::NpuHwr::LtHwr::LtHwr()
    :
    lt_id{YType::uint32, "lt-id"},
    name{YType::str, "name"},
    hw_entries{YType::uint32, "hw-entries"},
    sw_entries{YType::uint32, "sw-entries"}
{

    yang_name = "lt-hwr"; yang_parent_name = "npu-hwr"; is_top_level_class = false; has_list_ancestor = true;
}

Dpa::Stats::Nodes::Node::HwResourcesDatas::HwResourcesData::NpuHwr::LtHwr::~LtHwr()
{
}

bool Dpa::Stats::Nodes::Node::HwResourcesDatas::HwResourcesData::NpuHwr::LtHwr::has_data() const
{
    return lt_id.is_set
	|| name.is_set
	|| hw_entries.is_set
	|| sw_entries.is_set;
}

bool Dpa::Stats::Nodes::Node::HwResourcesDatas::HwResourcesData::NpuHwr::LtHwr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lt_id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(hw_entries.yfilter)
	|| ydk::is_set(sw_entries.yfilter);
}

std::string Dpa::Stats::Nodes::Node::HwResourcesDatas::HwResourcesData::NpuHwr::LtHwr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lt-hwr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dpa::Stats::Nodes::Node::HwResourcesDatas::HwResourcesData::NpuHwr::LtHwr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lt_id.is_set || is_set(lt_id.yfilter)) leaf_name_data.push_back(lt_id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (hw_entries.is_set || is_set(hw_entries.yfilter)) leaf_name_data.push_back(hw_entries.get_name_leafdata());
    if (sw_entries.is_set || is_set(sw_entries.yfilter)) leaf_name_data.push_back(sw_entries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dpa::Stats::Nodes::Node::HwResourcesDatas::HwResourcesData::NpuHwr::LtHwr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dpa::Stats::Nodes::Node::HwResourcesDatas::HwResourcesData::NpuHwr::LtHwr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dpa::Stats::Nodes::Node::HwResourcesDatas::HwResourcesData::NpuHwr::LtHwr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lt-id")
    {
        lt_id = value;
        lt_id.value_namespace = name_space;
        lt_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hw-entries")
    {
        hw_entries = value;
        hw_entries.value_namespace = name_space;
        hw_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-entries")
    {
        sw_entries = value;
        sw_entries.value_namespace = name_space;
        sw_entries.value_namespace_prefix = name_space_prefix;
    }
}

void Dpa::Stats::Nodes::Node::HwResourcesDatas::HwResourcesData::NpuHwr::LtHwr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lt-id")
    {
        lt_id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "hw-entries")
    {
        hw_entries.yfilter = yfilter;
    }
    if(value_path == "sw-entries")
    {
        sw_entries.yfilter = yfilter;
    }
}

bool Dpa::Stats::Nodes::Node::HwResourcesDatas::HwResourcesData::NpuHwr::LtHwr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lt-id" || name == "name" || name == "hw-entries" || name == "sw-entries")
        return true;
    return false;
}

Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatistics()
    :
    asic_statistics_for_npu_ids(std::make_shared<Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsForNpuIds>())
	,asic_statistics_detail_for_npu_ids(std::make_shared<Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds>())
{
    asic_statistics_for_npu_ids->parent = this;
    asic_statistics_detail_for_npu_ids->parent = this;

    yang_name = "asic-statistics"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

Dpa::Stats::Nodes::Node::AsicStatistics::~AsicStatistics()
{
}

bool Dpa::Stats::Nodes::Node::AsicStatistics::has_data() const
{
    return (asic_statistics_for_npu_ids !=  nullptr && asic_statistics_for_npu_ids->has_data())
	|| (asic_statistics_detail_for_npu_ids !=  nullptr && asic_statistics_detail_for_npu_ids->has_data());
}

bool Dpa::Stats::Nodes::Node::AsicStatistics::has_operation() const
{
    return is_set(yfilter)
	|| (asic_statistics_for_npu_ids !=  nullptr && asic_statistics_for_npu_ids->has_operation())
	|| (asic_statistics_detail_for_npu_ids !=  nullptr && asic_statistics_detail_for_npu_ids->has_operation());
}

std::string Dpa::Stats::Nodes::Node::AsicStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asic-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dpa::Stats::Nodes::Node::AsicStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Dpa::Stats::Nodes::Node::AsicStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "asic-statistics-for-npu-ids")
    {
        if(asic_statistics_for_npu_ids == nullptr)
        {
            asic_statistics_for_npu_ids = std::make_shared<Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsForNpuIds>();
        }
        return asic_statistics_for_npu_ids;
    }

    if(child_yang_name == "asic-statistics-detail-for-npu-ids")
    {
        if(asic_statistics_detail_for_npu_ids == nullptr)
        {
            asic_statistics_detail_for_npu_ids = std::make_shared<Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds>();
        }
        return asic_statistics_detail_for_npu_ids;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dpa::Stats::Nodes::Node::AsicStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(asic_statistics_for_npu_ids != nullptr)
    {
        children["asic-statistics-for-npu-ids"] = asic_statistics_for_npu_ids;
    }

    if(asic_statistics_detail_for_npu_ids != nullptr)
    {
        children["asic-statistics-detail-for-npu-ids"] = asic_statistics_detail_for_npu_ids;
    }

    return children;
}

void Dpa::Stats::Nodes::Node::AsicStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dpa::Stats::Nodes::Node::AsicStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dpa::Stats::Nodes::Node::AsicStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asic-statistics-for-npu-ids" || name == "asic-statistics-detail-for-npu-ids")
        return true;
    return false;
}

Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsForNpuIds::AsicStatisticsForNpuIds()
{

    yang_name = "asic-statistics-for-npu-ids"; yang_parent_name = "asic-statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsForNpuIds::~AsicStatisticsForNpuIds()
{
}

bool Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsForNpuIds::has_data() const
{
    for (std::size_t index=0; index<asic_statistics_for_npu_id.size(); index++)
    {
        if(asic_statistics_for_npu_id[index]->has_data())
            return true;
    }
    return false;
}

bool Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsForNpuIds::has_operation() const
{
    for (std::size_t index=0; index<asic_statistics_for_npu_id.size(); index++)
    {
        if(asic_statistics_for_npu_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsForNpuIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asic-statistics-for-npu-ids";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsForNpuIds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsForNpuIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "asic-statistics-for-npu-id")
    {
        for(auto const & c : asic_statistics_for_npu_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsForNpuIds::AsicStatisticsForNpuId>();
        c->parent = this;
        asic_statistics_for_npu_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsForNpuIds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : asic_statistics_for_npu_id)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsForNpuIds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsForNpuIds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsForNpuIds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asic-statistics-for-npu-id")
        return true;
    return false;
}

Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsForNpuIds::AsicStatisticsForNpuId::AsicStatisticsForNpuId()
    :
    npu_id{YType::int32, "npu-id"},
    valid{YType::boolean, "valid"},
    rack_number{YType::uint32, "rack-number"},
    slot_number{YType::uint32, "slot-number"},
    asic_instance{YType::uint32, "asic-instance"},
    chip_version{YType::uint16, "chip-version"}
    	,
    statistics(std::make_shared<Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsForNpuIds::AsicStatisticsForNpuId::Statistics>())
{
    statistics->parent = this;

    yang_name = "asic-statistics-for-npu-id"; yang_parent_name = "asic-statistics-for-npu-ids"; is_top_level_class = false; has_list_ancestor = true;
}

Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsForNpuIds::AsicStatisticsForNpuId::~AsicStatisticsForNpuId()
{
}

bool Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsForNpuIds::AsicStatisticsForNpuId::has_data() const
{
    return npu_id.is_set
	|| valid.is_set
	|| rack_number.is_set
	|| slot_number.is_set
	|| asic_instance.is_set
	|| chip_version.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsForNpuIds::AsicStatisticsForNpuId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(npu_id.yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(rack_number.yfilter)
	|| ydk::is_set(slot_number.yfilter)
	|| ydk::is_set(asic_instance.yfilter)
	|| ydk::is_set(chip_version.yfilter)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsForNpuIds::AsicStatisticsForNpuId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asic-statistics-for-npu-id" <<"[npu-id='" <<npu_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsForNpuIds::AsicStatisticsForNpuId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (npu_id.is_set || is_set(npu_id.yfilter)) leaf_name_data.push_back(npu_id.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (rack_number.is_set || is_set(rack_number.yfilter)) leaf_name_data.push_back(rack_number.get_name_leafdata());
    if (slot_number.is_set || is_set(slot_number.yfilter)) leaf_name_data.push_back(slot_number.get_name_leafdata());
    if (asic_instance.is_set || is_set(asic_instance.yfilter)) leaf_name_data.push_back(asic_instance.get_name_leafdata());
    if (chip_version.is_set || is_set(chip_version.yfilter)) leaf_name_data.push_back(chip_version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsForNpuIds::AsicStatisticsForNpuId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsForNpuIds::AsicStatisticsForNpuId::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsForNpuIds::AsicStatisticsForNpuId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsForNpuIds::AsicStatisticsForNpuId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "npu-id")
    {
        npu_id = value;
        npu_id.value_namespace = name_space;
        npu_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rack-number")
    {
        rack_number = value;
        rack_number.value_namespace = name_space;
        rack_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slot-number")
    {
        slot_number = value;
        slot_number.value_namespace = name_space;
        slot_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic-instance")
    {
        asic_instance = value;
        asic_instance.value_namespace = name_space;
        asic_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "chip-version")
    {
        chip_version = value;
        chip_version.value_namespace = name_space;
        chip_version.value_namespace_prefix = name_space_prefix;
    }
}

void Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsForNpuIds::AsicStatisticsForNpuId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "npu-id")
    {
        npu_id.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "rack-number")
    {
        rack_number.yfilter = yfilter;
    }
    if(value_path == "slot-number")
    {
        slot_number.yfilter = yfilter;
    }
    if(value_path == "asic-instance")
    {
        asic_instance.yfilter = yfilter;
    }
    if(value_path == "chip-version")
    {
        chip_version.yfilter = yfilter;
    }
}

bool Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsForNpuIds::AsicStatisticsForNpuId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics" || name == "npu-id" || name == "valid" || name == "rack-number" || name == "slot-number" || name == "asic-instance" || name == "chip-version")
        return true;
    return false;
}

Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsForNpuIds::AsicStatisticsForNpuId::Statistics::Statistics()
    :
    nbi_rx_total_byte_cnt{YType::uint64, "nbi-rx-total-byte-cnt"},
    nbi_rx_total_pkt_cnt{YType::uint64, "nbi-rx-total-pkt-cnt"},
    ire_cpu_pkt_cnt{YType::uint64, "ire-cpu-pkt-cnt"},
    ire_nif_pkt_cnt{YType::uint64, "ire-nif-pkt-cnt"},
    ire_oamp_pkt_cnt{YType::uint64, "ire-oamp-pkt-cnt"},
    ire_olp_pkt_cnt{YType::uint64, "ire-olp-pkt-cnt"},
    ire_rcy_pkt_cnt{YType::uint64, "ire-rcy-pkt-cnt"},
    ire_fdt_if_cnt{YType::uint64, "ire-fdt-if-cnt"},
    idr_mmu_if_cnt{YType::uint64, "idr-mmu-if-cnt"},
    idr_ocb_if_cnt{YType::uint64, "idr-ocb-if-cnt"},
    iqm_enqueue_pkt_cnt{YType::uint64, "iqm-enqueue-pkt-cnt"},
    iqm_dequeue_pkt_cnt{YType::uint64, "iqm-dequeue-pkt-cnt"},
    iqm_deleted_pkt_cnt{YType::uint64, "iqm-deleted-pkt-cnt"},
    iqm_enq_discarded_pkt_cnt{YType::uint64, "iqm-enq-discarded-pkt-cnt"},
    ipt_egq_pkt_cnt{YType::uint64, "ipt-egq-pkt-cnt"},
    ipt_enq_pkt_cnt{YType::uint64, "ipt-enq-pkt-cnt"},
    ipt_fdt_pkt_cnt{YType::uint64, "ipt-fdt-pkt-cnt"},
    ipt_cfg_event_cnt{YType::uint64, "ipt-cfg-event-cnt"},
    ipt_cfg_byte_cnt{YType::uint64, "ipt-cfg-byte-cnt"},
    fdt_ipt_desc_cell_cnt{YType::uint64, "fdt-ipt-desc-cell-cnt"},
    fdt_ire_desc_cell_cnt{YType::uint64, "fdt-ire-desc-cell-cnt"},
    fdt_transmitted_data_cells_cnt{YType::uint64, "fdt-transmitted-data-cells-cnt"},
    fdr_p1_cell_in_cnt{YType::uint64, "fdr-p1-cell-in-cnt"},
    fdr_p2_cell_in_cnt{YType::uint64, "fdr-p2-cell-in-cnt"},
    fdr_p3_cell_in_cnt{YType::uint64, "fdr-p3-cell-in-cnt"},
    fdr_cell_in_cnt_total{YType::uint64, "fdr-cell-in-cnt-total"},
    fda_cells_in_cnt_p1{YType::uint64, "fda-cells-in-cnt-p1"},
    fda_cells_in_cnt_p2{YType::uint64, "fda-cells-in-cnt-p2"},
    fda_cells_in_cnt_p3{YType::uint64, "fda-cells-in-cnt-p3"},
    fda_cells_in_tdm_cnt{YType::uint64, "fda-cells-in-tdm-cnt"},
    fda_cells_in_meshmc_cnt{YType::uint64, "fda-cells-in-meshmc-cnt"},
    fda_cells_in_ipt_cnt{YType::uint64, "fda-cells-in-ipt-cnt"},
    fda_cells_out_cnt_p1{YType::uint64, "fda-cells-out-cnt-p1"},
    fda_cells_out_cnt_p2{YType::uint64, "fda-cells-out-cnt-p2"},
    fda_cells_out_cnt_p3{YType::uint64, "fda-cells-out-cnt-p3"},
    fda_cells_out_tdm_cnt{YType::uint64, "fda-cells-out-tdm-cnt"},
    fda_cells_out_meshmc_cnt{YType::uint64, "fda-cells-out-meshmc-cnt"},
    fda_cells_out_ipt_cnt{YType::uint64, "fda-cells-out-ipt-cnt"},
    fda_egq_drop_cnt{YType::uint64, "fda-egq-drop-cnt"},
    fda_egq_meshmc_drop_cnt{YType::uint64, "fda-egq-meshmc-drop-cnt"},
    egq_fqp_pkt_cnt{YType::uint64, "egq-fqp-pkt-cnt"},
    egq_pqp_uc_pkt_cnt{YType::uint64, "egq-pqp-uc-pkt-cnt"},
    egq_pqp_discard_uc_pkt_cnt{YType::uint64, "egq-pqp-discard-uc-pkt-cnt"},
    egq_pqp_uc_bytes_cnt{YType::uint64, "egq-pqp-uc-bytes-cnt"},
    egq_pqp_mc_pkt_cnt{YType::uint64, "egq-pqp-mc-pkt-cnt"},
    egq_pqp_discard_mc_pkt_cnt{YType::uint64, "egq-pqp-discard-mc-pkt-cnt"},
    egq_pqp_mc_bytes_cnt{YType::uint64, "egq-pqp-mc-bytes-cnt"},
    egq_ehp_uc_pkt_cnt{YType::uint64, "egq-ehp-uc-pkt-cnt"},
    egq_ehp_mc_high_pkt_cnt{YType::uint64, "egq-ehp-mc-high-pkt-cnt"},
    egq_ehp_mc_low_pkt_cnt{YType::uint64, "egq-ehp-mc-low-pkt-cnt"},
    egq_deleted_pkt_cnt{YType::uint64, "egq-deleted-pkt-cnt"},
    egq_ehp_mc_high_discard_cnt{YType::uint64, "egq-ehp-mc-high-discard-cnt"},
    egq_ehp_mc_low_discard_cnt{YType::uint64, "egq-ehp-mc-low-discard-cnt"},
    egq_erpp_lag_pruning_discard_cnt{YType::uint64, "egq-erpp-lag-pruning-discard-cnt"},
    egq_erpp_pmf_discard_cnt{YType::uint64, "egq-erpp-pmf-discard-cnt"},
    egq_erpp_vlan_mbr_discard_cnt{YType::uint64, "egq-erpp-vlan-mbr-discard-cnt"},
    epni_epe_byte_cnt{YType::uint64, "epni-epe-byte-cnt"},
    epni_epe_pkt_cnt{YType::uint64, "epni-epe-pkt-cnt"},
    epni_epe_discard_cnt{YType::uint64, "epni-epe-discard-cnt"},
    nbi_tx_total_byte_cnt{YType::uint64, "nbi-tx-total-byte-cnt"},
    nbi_tx_total_pkt_cnt{YType::uint64, "nbi-tx-total-pkt-cnt"}
{

    yang_name = "statistics"; yang_parent_name = "asic-statistics-for-npu-id"; is_top_level_class = false; has_list_ancestor = true;
}

Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsForNpuIds::AsicStatisticsForNpuId::Statistics::~Statistics()
{
}

bool Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsForNpuIds::AsicStatisticsForNpuId::Statistics::has_data() const
{
    return nbi_rx_total_byte_cnt.is_set
	|| nbi_rx_total_pkt_cnt.is_set
	|| ire_cpu_pkt_cnt.is_set
	|| ire_nif_pkt_cnt.is_set
	|| ire_oamp_pkt_cnt.is_set
	|| ire_olp_pkt_cnt.is_set
	|| ire_rcy_pkt_cnt.is_set
	|| ire_fdt_if_cnt.is_set
	|| idr_mmu_if_cnt.is_set
	|| idr_ocb_if_cnt.is_set
	|| iqm_enqueue_pkt_cnt.is_set
	|| iqm_dequeue_pkt_cnt.is_set
	|| iqm_deleted_pkt_cnt.is_set
	|| iqm_enq_discarded_pkt_cnt.is_set
	|| ipt_egq_pkt_cnt.is_set
	|| ipt_enq_pkt_cnt.is_set
	|| ipt_fdt_pkt_cnt.is_set
	|| ipt_cfg_event_cnt.is_set
	|| ipt_cfg_byte_cnt.is_set
	|| fdt_ipt_desc_cell_cnt.is_set
	|| fdt_ire_desc_cell_cnt.is_set
	|| fdt_transmitted_data_cells_cnt.is_set
	|| fdr_p1_cell_in_cnt.is_set
	|| fdr_p2_cell_in_cnt.is_set
	|| fdr_p3_cell_in_cnt.is_set
	|| fdr_cell_in_cnt_total.is_set
	|| fda_cells_in_cnt_p1.is_set
	|| fda_cells_in_cnt_p2.is_set
	|| fda_cells_in_cnt_p3.is_set
	|| fda_cells_in_tdm_cnt.is_set
	|| fda_cells_in_meshmc_cnt.is_set
	|| fda_cells_in_ipt_cnt.is_set
	|| fda_cells_out_cnt_p1.is_set
	|| fda_cells_out_cnt_p2.is_set
	|| fda_cells_out_cnt_p3.is_set
	|| fda_cells_out_tdm_cnt.is_set
	|| fda_cells_out_meshmc_cnt.is_set
	|| fda_cells_out_ipt_cnt.is_set
	|| fda_egq_drop_cnt.is_set
	|| fda_egq_meshmc_drop_cnt.is_set
	|| egq_fqp_pkt_cnt.is_set
	|| egq_pqp_uc_pkt_cnt.is_set
	|| egq_pqp_discard_uc_pkt_cnt.is_set
	|| egq_pqp_uc_bytes_cnt.is_set
	|| egq_pqp_mc_pkt_cnt.is_set
	|| egq_pqp_discard_mc_pkt_cnt.is_set
	|| egq_pqp_mc_bytes_cnt.is_set
	|| egq_ehp_uc_pkt_cnt.is_set
	|| egq_ehp_mc_high_pkt_cnt.is_set
	|| egq_ehp_mc_low_pkt_cnt.is_set
	|| egq_deleted_pkt_cnt.is_set
	|| egq_ehp_mc_high_discard_cnt.is_set
	|| egq_ehp_mc_low_discard_cnt.is_set
	|| egq_erpp_lag_pruning_discard_cnt.is_set
	|| egq_erpp_pmf_discard_cnt.is_set
	|| egq_erpp_vlan_mbr_discard_cnt.is_set
	|| epni_epe_byte_cnt.is_set
	|| epni_epe_pkt_cnt.is_set
	|| epni_epe_discard_cnt.is_set
	|| nbi_tx_total_byte_cnt.is_set
	|| nbi_tx_total_pkt_cnt.is_set;
}

bool Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsForNpuIds::AsicStatisticsForNpuId::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nbi_rx_total_byte_cnt.yfilter)
	|| ydk::is_set(nbi_rx_total_pkt_cnt.yfilter)
	|| ydk::is_set(ire_cpu_pkt_cnt.yfilter)
	|| ydk::is_set(ire_nif_pkt_cnt.yfilter)
	|| ydk::is_set(ire_oamp_pkt_cnt.yfilter)
	|| ydk::is_set(ire_olp_pkt_cnt.yfilter)
	|| ydk::is_set(ire_rcy_pkt_cnt.yfilter)
	|| ydk::is_set(ire_fdt_if_cnt.yfilter)
	|| ydk::is_set(idr_mmu_if_cnt.yfilter)
	|| ydk::is_set(idr_ocb_if_cnt.yfilter)
	|| ydk::is_set(iqm_enqueue_pkt_cnt.yfilter)
	|| ydk::is_set(iqm_dequeue_pkt_cnt.yfilter)
	|| ydk::is_set(iqm_deleted_pkt_cnt.yfilter)
	|| ydk::is_set(iqm_enq_discarded_pkt_cnt.yfilter)
	|| ydk::is_set(ipt_egq_pkt_cnt.yfilter)
	|| ydk::is_set(ipt_enq_pkt_cnt.yfilter)
	|| ydk::is_set(ipt_fdt_pkt_cnt.yfilter)
	|| ydk::is_set(ipt_cfg_event_cnt.yfilter)
	|| ydk::is_set(ipt_cfg_byte_cnt.yfilter)
	|| ydk::is_set(fdt_ipt_desc_cell_cnt.yfilter)
	|| ydk::is_set(fdt_ire_desc_cell_cnt.yfilter)
	|| ydk::is_set(fdt_transmitted_data_cells_cnt.yfilter)
	|| ydk::is_set(fdr_p1_cell_in_cnt.yfilter)
	|| ydk::is_set(fdr_p2_cell_in_cnt.yfilter)
	|| ydk::is_set(fdr_p3_cell_in_cnt.yfilter)
	|| ydk::is_set(fdr_cell_in_cnt_total.yfilter)
	|| ydk::is_set(fda_cells_in_cnt_p1.yfilter)
	|| ydk::is_set(fda_cells_in_cnt_p2.yfilter)
	|| ydk::is_set(fda_cells_in_cnt_p3.yfilter)
	|| ydk::is_set(fda_cells_in_tdm_cnt.yfilter)
	|| ydk::is_set(fda_cells_in_meshmc_cnt.yfilter)
	|| ydk::is_set(fda_cells_in_ipt_cnt.yfilter)
	|| ydk::is_set(fda_cells_out_cnt_p1.yfilter)
	|| ydk::is_set(fda_cells_out_cnt_p2.yfilter)
	|| ydk::is_set(fda_cells_out_cnt_p3.yfilter)
	|| ydk::is_set(fda_cells_out_tdm_cnt.yfilter)
	|| ydk::is_set(fda_cells_out_meshmc_cnt.yfilter)
	|| ydk::is_set(fda_cells_out_ipt_cnt.yfilter)
	|| ydk::is_set(fda_egq_drop_cnt.yfilter)
	|| ydk::is_set(fda_egq_meshmc_drop_cnt.yfilter)
	|| ydk::is_set(egq_fqp_pkt_cnt.yfilter)
	|| ydk::is_set(egq_pqp_uc_pkt_cnt.yfilter)
	|| ydk::is_set(egq_pqp_discard_uc_pkt_cnt.yfilter)
	|| ydk::is_set(egq_pqp_uc_bytes_cnt.yfilter)
	|| ydk::is_set(egq_pqp_mc_pkt_cnt.yfilter)
	|| ydk::is_set(egq_pqp_discard_mc_pkt_cnt.yfilter)
	|| ydk::is_set(egq_pqp_mc_bytes_cnt.yfilter)
	|| ydk::is_set(egq_ehp_uc_pkt_cnt.yfilter)
	|| ydk::is_set(egq_ehp_mc_high_pkt_cnt.yfilter)
	|| ydk::is_set(egq_ehp_mc_low_pkt_cnt.yfilter)
	|| ydk::is_set(egq_deleted_pkt_cnt.yfilter)
	|| ydk::is_set(egq_ehp_mc_high_discard_cnt.yfilter)
	|| ydk::is_set(egq_ehp_mc_low_discard_cnt.yfilter)
	|| ydk::is_set(egq_erpp_lag_pruning_discard_cnt.yfilter)
	|| ydk::is_set(egq_erpp_pmf_discard_cnt.yfilter)
	|| ydk::is_set(egq_erpp_vlan_mbr_discard_cnt.yfilter)
	|| ydk::is_set(epni_epe_byte_cnt.yfilter)
	|| ydk::is_set(epni_epe_pkt_cnt.yfilter)
	|| ydk::is_set(epni_epe_discard_cnt.yfilter)
	|| ydk::is_set(nbi_tx_total_byte_cnt.yfilter)
	|| ydk::is_set(nbi_tx_total_pkt_cnt.yfilter);
}

std::string Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsForNpuIds::AsicStatisticsForNpuId::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsForNpuIds::AsicStatisticsForNpuId::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nbi_rx_total_byte_cnt.is_set || is_set(nbi_rx_total_byte_cnt.yfilter)) leaf_name_data.push_back(nbi_rx_total_byte_cnt.get_name_leafdata());
    if (nbi_rx_total_pkt_cnt.is_set || is_set(nbi_rx_total_pkt_cnt.yfilter)) leaf_name_data.push_back(nbi_rx_total_pkt_cnt.get_name_leafdata());
    if (ire_cpu_pkt_cnt.is_set || is_set(ire_cpu_pkt_cnt.yfilter)) leaf_name_data.push_back(ire_cpu_pkt_cnt.get_name_leafdata());
    if (ire_nif_pkt_cnt.is_set || is_set(ire_nif_pkt_cnt.yfilter)) leaf_name_data.push_back(ire_nif_pkt_cnt.get_name_leafdata());
    if (ire_oamp_pkt_cnt.is_set || is_set(ire_oamp_pkt_cnt.yfilter)) leaf_name_data.push_back(ire_oamp_pkt_cnt.get_name_leafdata());
    if (ire_olp_pkt_cnt.is_set || is_set(ire_olp_pkt_cnt.yfilter)) leaf_name_data.push_back(ire_olp_pkt_cnt.get_name_leafdata());
    if (ire_rcy_pkt_cnt.is_set || is_set(ire_rcy_pkt_cnt.yfilter)) leaf_name_data.push_back(ire_rcy_pkt_cnt.get_name_leafdata());
    if (ire_fdt_if_cnt.is_set || is_set(ire_fdt_if_cnt.yfilter)) leaf_name_data.push_back(ire_fdt_if_cnt.get_name_leafdata());
    if (idr_mmu_if_cnt.is_set || is_set(idr_mmu_if_cnt.yfilter)) leaf_name_data.push_back(idr_mmu_if_cnt.get_name_leafdata());
    if (idr_ocb_if_cnt.is_set || is_set(idr_ocb_if_cnt.yfilter)) leaf_name_data.push_back(idr_ocb_if_cnt.get_name_leafdata());
    if (iqm_enqueue_pkt_cnt.is_set || is_set(iqm_enqueue_pkt_cnt.yfilter)) leaf_name_data.push_back(iqm_enqueue_pkt_cnt.get_name_leafdata());
    if (iqm_dequeue_pkt_cnt.is_set || is_set(iqm_dequeue_pkt_cnt.yfilter)) leaf_name_data.push_back(iqm_dequeue_pkt_cnt.get_name_leafdata());
    if (iqm_deleted_pkt_cnt.is_set || is_set(iqm_deleted_pkt_cnt.yfilter)) leaf_name_data.push_back(iqm_deleted_pkt_cnt.get_name_leafdata());
    if (iqm_enq_discarded_pkt_cnt.is_set || is_set(iqm_enq_discarded_pkt_cnt.yfilter)) leaf_name_data.push_back(iqm_enq_discarded_pkt_cnt.get_name_leafdata());
    if (ipt_egq_pkt_cnt.is_set || is_set(ipt_egq_pkt_cnt.yfilter)) leaf_name_data.push_back(ipt_egq_pkt_cnt.get_name_leafdata());
    if (ipt_enq_pkt_cnt.is_set || is_set(ipt_enq_pkt_cnt.yfilter)) leaf_name_data.push_back(ipt_enq_pkt_cnt.get_name_leafdata());
    if (ipt_fdt_pkt_cnt.is_set || is_set(ipt_fdt_pkt_cnt.yfilter)) leaf_name_data.push_back(ipt_fdt_pkt_cnt.get_name_leafdata());
    if (ipt_cfg_event_cnt.is_set || is_set(ipt_cfg_event_cnt.yfilter)) leaf_name_data.push_back(ipt_cfg_event_cnt.get_name_leafdata());
    if (ipt_cfg_byte_cnt.is_set || is_set(ipt_cfg_byte_cnt.yfilter)) leaf_name_data.push_back(ipt_cfg_byte_cnt.get_name_leafdata());
    if (fdt_ipt_desc_cell_cnt.is_set || is_set(fdt_ipt_desc_cell_cnt.yfilter)) leaf_name_data.push_back(fdt_ipt_desc_cell_cnt.get_name_leafdata());
    if (fdt_ire_desc_cell_cnt.is_set || is_set(fdt_ire_desc_cell_cnt.yfilter)) leaf_name_data.push_back(fdt_ire_desc_cell_cnt.get_name_leafdata());
    if (fdt_transmitted_data_cells_cnt.is_set || is_set(fdt_transmitted_data_cells_cnt.yfilter)) leaf_name_data.push_back(fdt_transmitted_data_cells_cnt.get_name_leafdata());
    if (fdr_p1_cell_in_cnt.is_set || is_set(fdr_p1_cell_in_cnt.yfilter)) leaf_name_data.push_back(fdr_p1_cell_in_cnt.get_name_leafdata());
    if (fdr_p2_cell_in_cnt.is_set || is_set(fdr_p2_cell_in_cnt.yfilter)) leaf_name_data.push_back(fdr_p2_cell_in_cnt.get_name_leafdata());
    if (fdr_p3_cell_in_cnt.is_set || is_set(fdr_p3_cell_in_cnt.yfilter)) leaf_name_data.push_back(fdr_p3_cell_in_cnt.get_name_leafdata());
    if (fdr_cell_in_cnt_total.is_set || is_set(fdr_cell_in_cnt_total.yfilter)) leaf_name_data.push_back(fdr_cell_in_cnt_total.get_name_leafdata());
    if (fda_cells_in_cnt_p1.is_set || is_set(fda_cells_in_cnt_p1.yfilter)) leaf_name_data.push_back(fda_cells_in_cnt_p1.get_name_leafdata());
    if (fda_cells_in_cnt_p2.is_set || is_set(fda_cells_in_cnt_p2.yfilter)) leaf_name_data.push_back(fda_cells_in_cnt_p2.get_name_leafdata());
    if (fda_cells_in_cnt_p3.is_set || is_set(fda_cells_in_cnt_p3.yfilter)) leaf_name_data.push_back(fda_cells_in_cnt_p3.get_name_leafdata());
    if (fda_cells_in_tdm_cnt.is_set || is_set(fda_cells_in_tdm_cnt.yfilter)) leaf_name_data.push_back(fda_cells_in_tdm_cnt.get_name_leafdata());
    if (fda_cells_in_meshmc_cnt.is_set || is_set(fda_cells_in_meshmc_cnt.yfilter)) leaf_name_data.push_back(fda_cells_in_meshmc_cnt.get_name_leafdata());
    if (fda_cells_in_ipt_cnt.is_set || is_set(fda_cells_in_ipt_cnt.yfilter)) leaf_name_data.push_back(fda_cells_in_ipt_cnt.get_name_leafdata());
    if (fda_cells_out_cnt_p1.is_set || is_set(fda_cells_out_cnt_p1.yfilter)) leaf_name_data.push_back(fda_cells_out_cnt_p1.get_name_leafdata());
    if (fda_cells_out_cnt_p2.is_set || is_set(fda_cells_out_cnt_p2.yfilter)) leaf_name_data.push_back(fda_cells_out_cnt_p2.get_name_leafdata());
    if (fda_cells_out_cnt_p3.is_set || is_set(fda_cells_out_cnt_p3.yfilter)) leaf_name_data.push_back(fda_cells_out_cnt_p3.get_name_leafdata());
    if (fda_cells_out_tdm_cnt.is_set || is_set(fda_cells_out_tdm_cnt.yfilter)) leaf_name_data.push_back(fda_cells_out_tdm_cnt.get_name_leafdata());
    if (fda_cells_out_meshmc_cnt.is_set || is_set(fda_cells_out_meshmc_cnt.yfilter)) leaf_name_data.push_back(fda_cells_out_meshmc_cnt.get_name_leafdata());
    if (fda_cells_out_ipt_cnt.is_set || is_set(fda_cells_out_ipt_cnt.yfilter)) leaf_name_data.push_back(fda_cells_out_ipt_cnt.get_name_leafdata());
    if (fda_egq_drop_cnt.is_set || is_set(fda_egq_drop_cnt.yfilter)) leaf_name_data.push_back(fda_egq_drop_cnt.get_name_leafdata());
    if (fda_egq_meshmc_drop_cnt.is_set || is_set(fda_egq_meshmc_drop_cnt.yfilter)) leaf_name_data.push_back(fda_egq_meshmc_drop_cnt.get_name_leafdata());
    if (egq_fqp_pkt_cnt.is_set || is_set(egq_fqp_pkt_cnt.yfilter)) leaf_name_data.push_back(egq_fqp_pkt_cnt.get_name_leafdata());
    if (egq_pqp_uc_pkt_cnt.is_set || is_set(egq_pqp_uc_pkt_cnt.yfilter)) leaf_name_data.push_back(egq_pqp_uc_pkt_cnt.get_name_leafdata());
    if (egq_pqp_discard_uc_pkt_cnt.is_set || is_set(egq_pqp_discard_uc_pkt_cnt.yfilter)) leaf_name_data.push_back(egq_pqp_discard_uc_pkt_cnt.get_name_leafdata());
    if (egq_pqp_uc_bytes_cnt.is_set || is_set(egq_pqp_uc_bytes_cnt.yfilter)) leaf_name_data.push_back(egq_pqp_uc_bytes_cnt.get_name_leafdata());
    if (egq_pqp_mc_pkt_cnt.is_set || is_set(egq_pqp_mc_pkt_cnt.yfilter)) leaf_name_data.push_back(egq_pqp_mc_pkt_cnt.get_name_leafdata());
    if (egq_pqp_discard_mc_pkt_cnt.is_set || is_set(egq_pqp_discard_mc_pkt_cnt.yfilter)) leaf_name_data.push_back(egq_pqp_discard_mc_pkt_cnt.get_name_leafdata());
    if (egq_pqp_mc_bytes_cnt.is_set || is_set(egq_pqp_mc_bytes_cnt.yfilter)) leaf_name_data.push_back(egq_pqp_mc_bytes_cnt.get_name_leafdata());
    if (egq_ehp_uc_pkt_cnt.is_set || is_set(egq_ehp_uc_pkt_cnt.yfilter)) leaf_name_data.push_back(egq_ehp_uc_pkt_cnt.get_name_leafdata());
    if (egq_ehp_mc_high_pkt_cnt.is_set || is_set(egq_ehp_mc_high_pkt_cnt.yfilter)) leaf_name_data.push_back(egq_ehp_mc_high_pkt_cnt.get_name_leafdata());
    if (egq_ehp_mc_low_pkt_cnt.is_set || is_set(egq_ehp_mc_low_pkt_cnt.yfilter)) leaf_name_data.push_back(egq_ehp_mc_low_pkt_cnt.get_name_leafdata());
    if (egq_deleted_pkt_cnt.is_set || is_set(egq_deleted_pkt_cnt.yfilter)) leaf_name_data.push_back(egq_deleted_pkt_cnt.get_name_leafdata());
    if (egq_ehp_mc_high_discard_cnt.is_set || is_set(egq_ehp_mc_high_discard_cnt.yfilter)) leaf_name_data.push_back(egq_ehp_mc_high_discard_cnt.get_name_leafdata());
    if (egq_ehp_mc_low_discard_cnt.is_set || is_set(egq_ehp_mc_low_discard_cnt.yfilter)) leaf_name_data.push_back(egq_ehp_mc_low_discard_cnt.get_name_leafdata());
    if (egq_erpp_lag_pruning_discard_cnt.is_set || is_set(egq_erpp_lag_pruning_discard_cnt.yfilter)) leaf_name_data.push_back(egq_erpp_lag_pruning_discard_cnt.get_name_leafdata());
    if (egq_erpp_pmf_discard_cnt.is_set || is_set(egq_erpp_pmf_discard_cnt.yfilter)) leaf_name_data.push_back(egq_erpp_pmf_discard_cnt.get_name_leafdata());
    if (egq_erpp_vlan_mbr_discard_cnt.is_set || is_set(egq_erpp_vlan_mbr_discard_cnt.yfilter)) leaf_name_data.push_back(egq_erpp_vlan_mbr_discard_cnt.get_name_leafdata());
    if (epni_epe_byte_cnt.is_set || is_set(epni_epe_byte_cnt.yfilter)) leaf_name_data.push_back(epni_epe_byte_cnt.get_name_leafdata());
    if (epni_epe_pkt_cnt.is_set || is_set(epni_epe_pkt_cnt.yfilter)) leaf_name_data.push_back(epni_epe_pkt_cnt.get_name_leafdata());
    if (epni_epe_discard_cnt.is_set || is_set(epni_epe_discard_cnt.yfilter)) leaf_name_data.push_back(epni_epe_discard_cnt.get_name_leafdata());
    if (nbi_tx_total_byte_cnt.is_set || is_set(nbi_tx_total_byte_cnt.yfilter)) leaf_name_data.push_back(nbi_tx_total_byte_cnt.get_name_leafdata());
    if (nbi_tx_total_pkt_cnt.is_set || is_set(nbi_tx_total_pkt_cnt.yfilter)) leaf_name_data.push_back(nbi_tx_total_pkt_cnt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsForNpuIds::AsicStatisticsForNpuId::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsForNpuIds::AsicStatisticsForNpuId::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsForNpuIds::AsicStatisticsForNpuId::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nbi-rx-total-byte-cnt")
    {
        nbi_rx_total_byte_cnt = value;
        nbi_rx_total_byte_cnt.value_namespace = name_space;
        nbi_rx_total_byte_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nbi-rx-total-pkt-cnt")
    {
        nbi_rx_total_pkt_cnt = value;
        nbi_rx_total_pkt_cnt.value_namespace = name_space;
        nbi_rx_total_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ire-cpu-pkt-cnt")
    {
        ire_cpu_pkt_cnt = value;
        ire_cpu_pkt_cnt.value_namespace = name_space;
        ire_cpu_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ire-nif-pkt-cnt")
    {
        ire_nif_pkt_cnt = value;
        ire_nif_pkt_cnt.value_namespace = name_space;
        ire_nif_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ire-oamp-pkt-cnt")
    {
        ire_oamp_pkt_cnt = value;
        ire_oamp_pkt_cnt.value_namespace = name_space;
        ire_oamp_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ire-olp-pkt-cnt")
    {
        ire_olp_pkt_cnt = value;
        ire_olp_pkt_cnt.value_namespace = name_space;
        ire_olp_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ire-rcy-pkt-cnt")
    {
        ire_rcy_pkt_cnt = value;
        ire_rcy_pkt_cnt.value_namespace = name_space;
        ire_rcy_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ire-fdt-if-cnt")
    {
        ire_fdt_if_cnt = value;
        ire_fdt_if_cnt.value_namespace = name_space;
        ire_fdt_if_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idr-mmu-if-cnt")
    {
        idr_mmu_if_cnt = value;
        idr_mmu_if_cnt.value_namespace = name_space;
        idr_mmu_if_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idr-ocb-if-cnt")
    {
        idr_ocb_if_cnt = value;
        idr_ocb_if_cnt.value_namespace = name_space;
        idr_ocb_if_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iqm-enqueue-pkt-cnt")
    {
        iqm_enqueue_pkt_cnt = value;
        iqm_enqueue_pkt_cnt.value_namespace = name_space;
        iqm_enqueue_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iqm-dequeue-pkt-cnt")
    {
        iqm_dequeue_pkt_cnt = value;
        iqm_dequeue_pkt_cnt.value_namespace = name_space;
        iqm_dequeue_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iqm-deleted-pkt-cnt")
    {
        iqm_deleted_pkt_cnt = value;
        iqm_deleted_pkt_cnt.value_namespace = name_space;
        iqm_deleted_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iqm-enq-discarded-pkt-cnt")
    {
        iqm_enq_discarded_pkt_cnt = value;
        iqm_enq_discarded_pkt_cnt.value_namespace = name_space;
        iqm_enq_discarded_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipt-egq-pkt-cnt")
    {
        ipt_egq_pkt_cnt = value;
        ipt_egq_pkt_cnt.value_namespace = name_space;
        ipt_egq_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipt-enq-pkt-cnt")
    {
        ipt_enq_pkt_cnt = value;
        ipt_enq_pkt_cnt.value_namespace = name_space;
        ipt_enq_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipt-fdt-pkt-cnt")
    {
        ipt_fdt_pkt_cnt = value;
        ipt_fdt_pkt_cnt.value_namespace = name_space;
        ipt_fdt_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipt-cfg-event-cnt")
    {
        ipt_cfg_event_cnt = value;
        ipt_cfg_event_cnt.value_namespace = name_space;
        ipt_cfg_event_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipt-cfg-byte-cnt")
    {
        ipt_cfg_byte_cnt = value;
        ipt_cfg_byte_cnt.value_namespace = name_space;
        ipt_cfg_byte_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdt-ipt-desc-cell-cnt")
    {
        fdt_ipt_desc_cell_cnt = value;
        fdt_ipt_desc_cell_cnt.value_namespace = name_space;
        fdt_ipt_desc_cell_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdt-ire-desc-cell-cnt")
    {
        fdt_ire_desc_cell_cnt = value;
        fdt_ire_desc_cell_cnt.value_namespace = name_space;
        fdt_ire_desc_cell_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdt-transmitted-data-cells-cnt")
    {
        fdt_transmitted_data_cells_cnt = value;
        fdt_transmitted_data_cells_cnt.value_namespace = name_space;
        fdt_transmitted_data_cells_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdr-p1-cell-in-cnt")
    {
        fdr_p1_cell_in_cnt = value;
        fdr_p1_cell_in_cnt.value_namespace = name_space;
        fdr_p1_cell_in_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdr-p2-cell-in-cnt")
    {
        fdr_p2_cell_in_cnt = value;
        fdr_p2_cell_in_cnt.value_namespace = name_space;
        fdr_p2_cell_in_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdr-p3-cell-in-cnt")
    {
        fdr_p3_cell_in_cnt = value;
        fdr_p3_cell_in_cnt.value_namespace = name_space;
        fdr_p3_cell_in_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdr-cell-in-cnt-total")
    {
        fdr_cell_in_cnt_total = value;
        fdr_cell_in_cnt_total.value_namespace = name_space;
        fdr_cell_in_cnt_total.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fda-cells-in-cnt-p1")
    {
        fda_cells_in_cnt_p1 = value;
        fda_cells_in_cnt_p1.value_namespace = name_space;
        fda_cells_in_cnt_p1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fda-cells-in-cnt-p2")
    {
        fda_cells_in_cnt_p2 = value;
        fda_cells_in_cnt_p2.value_namespace = name_space;
        fda_cells_in_cnt_p2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fda-cells-in-cnt-p3")
    {
        fda_cells_in_cnt_p3 = value;
        fda_cells_in_cnt_p3.value_namespace = name_space;
        fda_cells_in_cnt_p3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fda-cells-in-tdm-cnt")
    {
        fda_cells_in_tdm_cnt = value;
        fda_cells_in_tdm_cnt.value_namespace = name_space;
        fda_cells_in_tdm_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fda-cells-in-meshmc-cnt")
    {
        fda_cells_in_meshmc_cnt = value;
        fda_cells_in_meshmc_cnt.value_namespace = name_space;
        fda_cells_in_meshmc_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fda-cells-in-ipt-cnt")
    {
        fda_cells_in_ipt_cnt = value;
        fda_cells_in_ipt_cnt.value_namespace = name_space;
        fda_cells_in_ipt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fda-cells-out-cnt-p1")
    {
        fda_cells_out_cnt_p1 = value;
        fda_cells_out_cnt_p1.value_namespace = name_space;
        fda_cells_out_cnt_p1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fda-cells-out-cnt-p2")
    {
        fda_cells_out_cnt_p2 = value;
        fda_cells_out_cnt_p2.value_namespace = name_space;
        fda_cells_out_cnt_p2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fda-cells-out-cnt-p3")
    {
        fda_cells_out_cnt_p3 = value;
        fda_cells_out_cnt_p3.value_namespace = name_space;
        fda_cells_out_cnt_p3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fda-cells-out-tdm-cnt")
    {
        fda_cells_out_tdm_cnt = value;
        fda_cells_out_tdm_cnt.value_namespace = name_space;
        fda_cells_out_tdm_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fda-cells-out-meshmc-cnt")
    {
        fda_cells_out_meshmc_cnt = value;
        fda_cells_out_meshmc_cnt.value_namespace = name_space;
        fda_cells_out_meshmc_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fda-cells-out-ipt-cnt")
    {
        fda_cells_out_ipt_cnt = value;
        fda_cells_out_ipt_cnt.value_namespace = name_space;
        fda_cells_out_ipt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fda-egq-drop-cnt")
    {
        fda_egq_drop_cnt = value;
        fda_egq_drop_cnt.value_namespace = name_space;
        fda_egq_drop_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fda-egq-meshmc-drop-cnt")
    {
        fda_egq_meshmc_drop_cnt = value;
        fda_egq_meshmc_drop_cnt.value_namespace = name_space;
        fda_egq_meshmc_drop_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egq-fqp-pkt-cnt")
    {
        egq_fqp_pkt_cnt = value;
        egq_fqp_pkt_cnt.value_namespace = name_space;
        egq_fqp_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egq-pqp-uc-pkt-cnt")
    {
        egq_pqp_uc_pkt_cnt = value;
        egq_pqp_uc_pkt_cnt.value_namespace = name_space;
        egq_pqp_uc_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egq-pqp-discard-uc-pkt-cnt")
    {
        egq_pqp_discard_uc_pkt_cnt = value;
        egq_pqp_discard_uc_pkt_cnt.value_namespace = name_space;
        egq_pqp_discard_uc_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egq-pqp-uc-bytes-cnt")
    {
        egq_pqp_uc_bytes_cnt = value;
        egq_pqp_uc_bytes_cnt.value_namespace = name_space;
        egq_pqp_uc_bytes_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egq-pqp-mc-pkt-cnt")
    {
        egq_pqp_mc_pkt_cnt = value;
        egq_pqp_mc_pkt_cnt.value_namespace = name_space;
        egq_pqp_mc_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egq-pqp-discard-mc-pkt-cnt")
    {
        egq_pqp_discard_mc_pkt_cnt = value;
        egq_pqp_discard_mc_pkt_cnt.value_namespace = name_space;
        egq_pqp_discard_mc_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egq-pqp-mc-bytes-cnt")
    {
        egq_pqp_mc_bytes_cnt = value;
        egq_pqp_mc_bytes_cnt.value_namespace = name_space;
        egq_pqp_mc_bytes_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egq-ehp-uc-pkt-cnt")
    {
        egq_ehp_uc_pkt_cnt = value;
        egq_ehp_uc_pkt_cnt.value_namespace = name_space;
        egq_ehp_uc_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egq-ehp-mc-high-pkt-cnt")
    {
        egq_ehp_mc_high_pkt_cnt = value;
        egq_ehp_mc_high_pkt_cnt.value_namespace = name_space;
        egq_ehp_mc_high_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egq-ehp-mc-low-pkt-cnt")
    {
        egq_ehp_mc_low_pkt_cnt = value;
        egq_ehp_mc_low_pkt_cnt.value_namespace = name_space;
        egq_ehp_mc_low_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egq-deleted-pkt-cnt")
    {
        egq_deleted_pkt_cnt = value;
        egq_deleted_pkt_cnt.value_namespace = name_space;
        egq_deleted_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egq-ehp-mc-high-discard-cnt")
    {
        egq_ehp_mc_high_discard_cnt = value;
        egq_ehp_mc_high_discard_cnt.value_namespace = name_space;
        egq_ehp_mc_high_discard_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egq-ehp-mc-low-discard-cnt")
    {
        egq_ehp_mc_low_discard_cnt = value;
        egq_ehp_mc_low_discard_cnt.value_namespace = name_space;
        egq_ehp_mc_low_discard_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egq-erpp-lag-pruning-discard-cnt")
    {
        egq_erpp_lag_pruning_discard_cnt = value;
        egq_erpp_lag_pruning_discard_cnt.value_namespace = name_space;
        egq_erpp_lag_pruning_discard_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egq-erpp-pmf-discard-cnt")
    {
        egq_erpp_pmf_discard_cnt = value;
        egq_erpp_pmf_discard_cnt.value_namespace = name_space;
        egq_erpp_pmf_discard_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egq-erpp-vlan-mbr-discard-cnt")
    {
        egq_erpp_vlan_mbr_discard_cnt = value;
        egq_erpp_vlan_mbr_discard_cnt.value_namespace = name_space;
        egq_erpp_vlan_mbr_discard_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "epni-epe-byte-cnt")
    {
        epni_epe_byte_cnt = value;
        epni_epe_byte_cnt.value_namespace = name_space;
        epni_epe_byte_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "epni-epe-pkt-cnt")
    {
        epni_epe_pkt_cnt = value;
        epni_epe_pkt_cnt.value_namespace = name_space;
        epni_epe_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "epni-epe-discard-cnt")
    {
        epni_epe_discard_cnt = value;
        epni_epe_discard_cnt.value_namespace = name_space;
        epni_epe_discard_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nbi-tx-total-byte-cnt")
    {
        nbi_tx_total_byte_cnt = value;
        nbi_tx_total_byte_cnt.value_namespace = name_space;
        nbi_tx_total_byte_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nbi-tx-total-pkt-cnt")
    {
        nbi_tx_total_pkt_cnt = value;
        nbi_tx_total_pkt_cnt.value_namespace = name_space;
        nbi_tx_total_pkt_cnt.value_namespace_prefix = name_space_prefix;
    }
}

void Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsForNpuIds::AsicStatisticsForNpuId::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nbi-rx-total-byte-cnt")
    {
        nbi_rx_total_byte_cnt.yfilter = yfilter;
    }
    if(value_path == "nbi-rx-total-pkt-cnt")
    {
        nbi_rx_total_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "ire-cpu-pkt-cnt")
    {
        ire_cpu_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "ire-nif-pkt-cnt")
    {
        ire_nif_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "ire-oamp-pkt-cnt")
    {
        ire_oamp_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "ire-olp-pkt-cnt")
    {
        ire_olp_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "ire-rcy-pkt-cnt")
    {
        ire_rcy_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "ire-fdt-if-cnt")
    {
        ire_fdt_if_cnt.yfilter = yfilter;
    }
    if(value_path == "idr-mmu-if-cnt")
    {
        idr_mmu_if_cnt.yfilter = yfilter;
    }
    if(value_path == "idr-ocb-if-cnt")
    {
        idr_ocb_if_cnt.yfilter = yfilter;
    }
    if(value_path == "iqm-enqueue-pkt-cnt")
    {
        iqm_enqueue_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "iqm-dequeue-pkt-cnt")
    {
        iqm_dequeue_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "iqm-deleted-pkt-cnt")
    {
        iqm_deleted_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "iqm-enq-discarded-pkt-cnt")
    {
        iqm_enq_discarded_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "ipt-egq-pkt-cnt")
    {
        ipt_egq_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "ipt-enq-pkt-cnt")
    {
        ipt_enq_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "ipt-fdt-pkt-cnt")
    {
        ipt_fdt_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "ipt-cfg-event-cnt")
    {
        ipt_cfg_event_cnt.yfilter = yfilter;
    }
    if(value_path == "ipt-cfg-byte-cnt")
    {
        ipt_cfg_byte_cnt.yfilter = yfilter;
    }
    if(value_path == "fdt-ipt-desc-cell-cnt")
    {
        fdt_ipt_desc_cell_cnt.yfilter = yfilter;
    }
    if(value_path == "fdt-ire-desc-cell-cnt")
    {
        fdt_ire_desc_cell_cnt.yfilter = yfilter;
    }
    if(value_path == "fdt-transmitted-data-cells-cnt")
    {
        fdt_transmitted_data_cells_cnt.yfilter = yfilter;
    }
    if(value_path == "fdr-p1-cell-in-cnt")
    {
        fdr_p1_cell_in_cnt.yfilter = yfilter;
    }
    if(value_path == "fdr-p2-cell-in-cnt")
    {
        fdr_p2_cell_in_cnt.yfilter = yfilter;
    }
    if(value_path == "fdr-p3-cell-in-cnt")
    {
        fdr_p3_cell_in_cnt.yfilter = yfilter;
    }
    if(value_path == "fdr-cell-in-cnt-total")
    {
        fdr_cell_in_cnt_total.yfilter = yfilter;
    }
    if(value_path == "fda-cells-in-cnt-p1")
    {
        fda_cells_in_cnt_p1.yfilter = yfilter;
    }
    if(value_path == "fda-cells-in-cnt-p2")
    {
        fda_cells_in_cnt_p2.yfilter = yfilter;
    }
    if(value_path == "fda-cells-in-cnt-p3")
    {
        fda_cells_in_cnt_p3.yfilter = yfilter;
    }
    if(value_path == "fda-cells-in-tdm-cnt")
    {
        fda_cells_in_tdm_cnt.yfilter = yfilter;
    }
    if(value_path == "fda-cells-in-meshmc-cnt")
    {
        fda_cells_in_meshmc_cnt.yfilter = yfilter;
    }
    if(value_path == "fda-cells-in-ipt-cnt")
    {
        fda_cells_in_ipt_cnt.yfilter = yfilter;
    }
    if(value_path == "fda-cells-out-cnt-p1")
    {
        fda_cells_out_cnt_p1.yfilter = yfilter;
    }
    if(value_path == "fda-cells-out-cnt-p2")
    {
        fda_cells_out_cnt_p2.yfilter = yfilter;
    }
    if(value_path == "fda-cells-out-cnt-p3")
    {
        fda_cells_out_cnt_p3.yfilter = yfilter;
    }
    if(value_path == "fda-cells-out-tdm-cnt")
    {
        fda_cells_out_tdm_cnt.yfilter = yfilter;
    }
    if(value_path == "fda-cells-out-meshmc-cnt")
    {
        fda_cells_out_meshmc_cnt.yfilter = yfilter;
    }
    if(value_path == "fda-cells-out-ipt-cnt")
    {
        fda_cells_out_ipt_cnt.yfilter = yfilter;
    }
    if(value_path == "fda-egq-drop-cnt")
    {
        fda_egq_drop_cnt.yfilter = yfilter;
    }
    if(value_path == "fda-egq-meshmc-drop-cnt")
    {
        fda_egq_meshmc_drop_cnt.yfilter = yfilter;
    }
    if(value_path == "egq-fqp-pkt-cnt")
    {
        egq_fqp_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "egq-pqp-uc-pkt-cnt")
    {
        egq_pqp_uc_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "egq-pqp-discard-uc-pkt-cnt")
    {
        egq_pqp_discard_uc_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "egq-pqp-uc-bytes-cnt")
    {
        egq_pqp_uc_bytes_cnt.yfilter = yfilter;
    }
    if(value_path == "egq-pqp-mc-pkt-cnt")
    {
        egq_pqp_mc_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "egq-pqp-discard-mc-pkt-cnt")
    {
        egq_pqp_discard_mc_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "egq-pqp-mc-bytes-cnt")
    {
        egq_pqp_mc_bytes_cnt.yfilter = yfilter;
    }
    if(value_path == "egq-ehp-uc-pkt-cnt")
    {
        egq_ehp_uc_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "egq-ehp-mc-high-pkt-cnt")
    {
        egq_ehp_mc_high_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "egq-ehp-mc-low-pkt-cnt")
    {
        egq_ehp_mc_low_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "egq-deleted-pkt-cnt")
    {
        egq_deleted_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "egq-ehp-mc-high-discard-cnt")
    {
        egq_ehp_mc_high_discard_cnt.yfilter = yfilter;
    }
    if(value_path == "egq-ehp-mc-low-discard-cnt")
    {
        egq_ehp_mc_low_discard_cnt.yfilter = yfilter;
    }
    if(value_path == "egq-erpp-lag-pruning-discard-cnt")
    {
        egq_erpp_lag_pruning_discard_cnt.yfilter = yfilter;
    }
    if(value_path == "egq-erpp-pmf-discard-cnt")
    {
        egq_erpp_pmf_discard_cnt.yfilter = yfilter;
    }
    if(value_path == "egq-erpp-vlan-mbr-discard-cnt")
    {
        egq_erpp_vlan_mbr_discard_cnt.yfilter = yfilter;
    }
    if(value_path == "epni-epe-byte-cnt")
    {
        epni_epe_byte_cnt.yfilter = yfilter;
    }
    if(value_path == "epni-epe-pkt-cnt")
    {
        epni_epe_pkt_cnt.yfilter = yfilter;
    }
    if(value_path == "epni-epe-discard-cnt")
    {
        epni_epe_discard_cnt.yfilter = yfilter;
    }
    if(value_path == "nbi-tx-total-byte-cnt")
    {
        nbi_tx_total_byte_cnt.yfilter = yfilter;
    }
    if(value_path == "nbi-tx-total-pkt-cnt")
    {
        nbi_tx_total_pkt_cnt.yfilter = yfilter;
    }
}

bool Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsForNpuIds::AsicStatisticsForNpuId::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nbi-rx-total-byte-cnt" || name == "nbi-rx-total-pkt-cnt" || name == "ire-cpu-pkt-cnt" || name == "ire-nif-pkt-cnt" || name == "ire-oamp-pkt-cnt" || name == "ire-olp-pkt-cnt" || name == "ire-rcy-pkt-cnt" || name == "ire-fdt-if-cnt" || name == "idr-mmu-if-cnt" || name == "idr-ocb-if-cnt" || name == "iqm-enqueue-pkt-cnt" || name == "iqm-dequeue-pkt-cnt" || name == "iqm-deleted-pkt-cnt" || name == "iqm-enq-discarded-pkt-cnt" || name == "ipt-egq-pkt-cnt" || name == "ipt-enq-pkt-cnt" || name == "ipt-fdt-pkt-cnt" || name == "ipt-cfg-event-cnt" || name == "ipt-cfg-byte-cnt" || name == "fdt-ipt-desc-cell-cnt" || name == "fdt-ire-desc-cell-cnt" || name == "fdt-transmitted-data-cells-cnt" || name == "fdr-p1-cell-in-cnt" || name == "fdr-p2-cell-in-cnt" || name == "fdr-p3-cell-in-cnt" || name == "fdr-cell-in-cnt-total" || name == "fda-cells-in-cnt-p1" || name == "fda-cells-in-cnt-p2" || name == "fda-cells-in-cnt-p3" || name == "fda-cells-in-tdm-cnt" || name == "fda-cells-in-meshmc-cnt" || name == "fda-cells-in-ipt-cnt" || name == "fda-cells-out-cnt-p1" || name == "fda-cells-out-cnt-p2" || name == "fda-cells-out-cnt-p3" || name == "fda-cells-out-tdm-cnt" || name == "fda-cells-out-meshmc-cnt" || name == "fda-cells-out-ipt-cnt" || name == "fda-egq-drop-cnt" || name == "fda-egq-meshmc-drop-cnt" || name == "egq-fqp-pkt-cnt" || name == "egq-pqp-uc-pkt-cnt" || name == "egq-pqp-discard-uc-pkt-cnt" || name == "egq-pqp-uc-bytes-cnt" || name == "egq-pqp-mc-pkt-cnt" || name == "egq-pqp-discard-mc-pkt-cnt" || name == "egq-pqp-mc-bytes-cnt" || name == "egq-ehp-uc-pkt-cnt" || name == "egq-ehp-mc-high-pkt-cnt" || name == "egq-ehp-mc-low-pkt-cnt" || name == "egq-deleted-pkt-cnt" || name == "egq-ehp-mc-high-discard-cnt" || name == "egq-ehp-mc-low-discard-cnt" || name == "egq-erpp-lag-pruning-discard-cnt" || name == "egq-erpp-pmf-discard-cnt" || name == "egq-erpp-vlan-mbr-discard-cnt" || name == "epni-epe-byte-cnt" || name == "epni-epe-pkt-cnt" || name == "epni-epe-discard-cnt" || name == "nbi-tx-total-byte-cnt" || name == "nbi-tx-total-pkt-cnt")
        return true;
    return false;
}

Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuIds()
{

    yang_name = "asic-statistics-detail-for-npu-ids"; yang_parent_name = "asic-statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::~AsicStatisticsDetailForNpuIds()
{
}

bool Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::has_data() const
{
    for (std::size_t index=0; index<asic_statistics_detail_for_npu_id.size(); index++)
    {
        if(asic_statistics_detail_for_npu_id[index]->has_data())
            return true;
    }
    return false;
}

bool Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::has_operation() const
{
    for (std::size_t index=0; index<asic_statistics_detail_for_npu_id.size(); index++)
    {
        if(asic_statistics_detail_for_npu_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asic-statistics-detail-for-npu-ids";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "asic-statistics-detail-for-npu-id")
    {
        for(auto const & c : asic_statistics_detail_for_npu_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId>();
        c->parent = this;
        asic_statistics_detail_for_npu_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : asic_statistics_detail_for_npu_id)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asic-statistics-detail-for-npu-id")
        return true;
    return false;
}

Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::AsicStatisticsDetailForNpuId()
    :
    npu_id{YType::int32, "npu-id"},
    valid{YType::boolean, "valid"},
    rack_number{YType::uint32, "rack-number"},
    slot_number{YType::uint32, "slot-number"},
    asic_instance{YType::uint32, "asic-instance"},
    chip_version{YType::uint16, "chip-version"}
    	,
    statistics(std::make_shared<Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::Statistics>())
{
    statistics->parent = this;

    yang_name = "asic-statistics-detail-for-npu-id"; yang_parent_name = "asic-statistics-detail-for-npu-ids"; is_top_level_class = false; has_list_ancestor = true;
}

Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::~AsicStatisticsDetailForNpuId()
{
}

bool Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::has_data() const
{
    return npu_id.is_set
	|| valid.is_set
	|| rack_number.is_set
	|| slot_number.is_set
	|| asic_instance.is_set
	|| chip_version.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(npu_id.yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(rack_number.yfilter)
	|| ydk::is_set(slot_number.yfilter)
	|| ydk::is_set(asic_instance.yfilter)
	|| ydk::is_set(chip_version.yfilter)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asic-statistics-detail-for-npu-id" <<"[npu-id='" <<npu_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (npu_id.is_set || is_set(npu_id.yfilter)) leaf_name_data.push_back(npu_id.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (rack_number.is_set || is_set(rack_number.yfilter)) leaf_name_data.push_back(rack_number.get_name_leafdata());
    if (slot_number.is_set || is_set(slot_number.yfilter)) leaf_name_data.push_back(slot_number.get_name_leafdata());
    if (asic_instance.is_set || is_set(asic_instance.yfilter)) leaf_name_data.push_back(asic_instance.get_name_leafdata());
    if (chip_version.is_set || is_set(chip_version.yfilter)) leaf_name_data.push_back(chip_version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "npu-id")
    {
        npu_id = value;
        npu_id.value_namespace = name_space;
        npu_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rack-number")
    {
        rack_number = value;
        rack_number.value_namespace = name_space;
        rack_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slot-number")
    {
        slot_number = value;
        slot_number.value_namespace = name_space;
        slot_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic-instance")
    {
        asic_instance = value;
        asic_instance.value_namespace = name_space;
        asic_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "chip-version")
    {
        chip_version = value;
        chip_version.value_namespace = name_space;
        chip_version.value_namespace_prefix = name_space_prefix;
    }
}

void Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "npu-id")
    {
        npu_id.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "rack-number")
    {
        rack_number.yfilter = yfilter;
    }
    if(value_path == "slot-number")
    {
        slot_number.yfilter = yfilter;
    }
    if(value_path == "asic-instance")
    {
        asic_instance.yfilter = yfilter;
    }
    if(value_path == "chip-version")
    {
        chip_version.yfilter = yfilter;
    }
}

bool Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics" || name == "npu-id" || name == "valid" || name == "rack-number" || name == "slot-number" || name == "asic-instance" || name == "chip-version")
        return true;
    return false;
}

Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::Statistics::Statistics()
    :
    num_blocks{YType::uint8, "num-blocks"}
{

    yang_name = "statistics"; yang_parent_name = "asic-statistics-detail-for-npu-id"; is_top_level_class = false; has_list_ancestor = true;
}

Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::Statistics::~Statistics()
{
}

bool Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::Statistics::has_data() const
{
    for (std::size_t index=0; index<block_info.size(); index++)
    {
        if(block_info[index]->has_data())
            return true;
    }
    return num_blocks.is_set;
}

bool Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::Statistics::has_operation() const
{
    for (std::size_t index=0; index<block_info.size(); index++)
    {
        if(block_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(num_blocks.yfilter);
}

std::string Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_blocks.is_set || is_set(num_blocks.yfilter)) leaf_name_data.push_back(num_blocks.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "block-info")
    {
        for(auto const & c : block_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::Statistics::BlockInfo>();
        c->parent = this;
        block_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : block_info)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-blocks")
    {
        num_blocks = value;
        num_blocks.value_namespace = name_space;
        num_blocks.value_namespace_prefix = name_space_prefix;
    }
}

void Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-blocks")
    {
        num_blocks.yfilter = yfilter;
    }
}

bool Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "block-info" || name == "num-blocks")
        return true;
    return false;
}

Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::Statistics::BlockInfo::BlockInfo()
    :
    block_name{YType::str, "block-name"},
    num_fields{YType::uint8, "num-fields"}
{

    yang_name = "block-info"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::Statistics::BlockInfo::~BlockInfo()
{
}

bool Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::Statistics::BlockInfo::has_data() const
{
    for (std::size_t index=0; index<field_info.size(); index++)
    {
        if(field_info[index]->has_data())
            return true;
    }
    return block_name.is_set
	|| num_fields.is_set;
}

bool Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::Statistics::BlockInfo::has_operation() const
{
    for (std::size_t index=0; index<field_info.size(); index++)
    {
        if(field_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(block_name.yfilter)
	|| ydk::is_set(num_fields.yfilter);
}

std::string Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::Statistics::BlockInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "block-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::Statistics::BlockInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (block_name.is_set || is_set(block_name.yfilter)) leaf_name_data.push_back(block_name.get_name_leafdata());
    if (num_fields.is_set || is_set(num_fields.yfilter)) leaf_name_data.push_back(num_fields.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::Statistics::BlockInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "field-info")
    {
        for(auto const & c : field_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::Statistics::BlockInfo::FieldInfo>();
        c->parent = this;
        field_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::Statistics::BlockInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : field_info)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::Statistics::BlockInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "block-name")
    {
        block_name = value;
        block_name.value_namespace = name_space;
        block_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-fields")
    {
        num_fields = value;
        num_fields.value_namespace = name_space;
        num_fields.value_namespace_prefix = name_space_prefix;
    }
}

void Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::Statistics::BlockInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "block-name")
    {
        block_name.yfilter = yfilter;
    }
    if(value_path == "num-fields")
    {
        num_fields.yfilter = yfilter;
    }
}

bool Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::Statistics::BlockInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "field-info" || name == "block-name" || name == "num-fields")
        return true;
    return false;
}

Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::Statistics::BlockInfo::FieldInfo::FieldInfo()
    :
    field_name{YType::str, "field-name"},
    field_value{YType::uint64, "field-value"},
    is_overflow{YType::boolean, "is-overflow"}
{

    yang_name = "field-info"; yang_parent_name = "block-info"; is_top_level_class = false; has_list_ancestor = true;
}

Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::Statistics::BlockInfo::FieldInfo::~FieldInfo()
{
}

bool Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::Statistics::BlockInfo::FieldInfo::has_data() const
{
    return field_name.is_set
	|| field_value.is_set
	|| is_overflow.is_set;
}

bool Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::Statistics::BlockInfo::FieldInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(field_name.yfilter)
	|| ydk::is_set(field_value.yfilter)
	|| ydk::is_set(is_overflow.yfilter);
}

std::string Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::Statistics::BlockInfo::FieldInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "field-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::Statistics::BlockInfo::FieldInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (field_name.is_set || is_set(field_name.yfilter)) leaf_name_data.push_back(field_name.get_name_leafdata());
    if (field_value.is_set || is_set(field_value.yfilter)) leaf_name_data.push_back(field_value.get_name_leafdata());
    if (is_overflow.is_set || is_set(is_overflow.yfilter)) leaf_name_data.push_back(is_overflow.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::Statistics::BlockInfo::FieldInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::Statistics::BlockInfo::FieldInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::Statistics::BlockInfo::FieldInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "field-name")
    {
        field_name = value;
        field_name.value_namespace = name_space;
        field_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "field-value")
    {
        field_value = value;
        field_value.value_namespace = name_space;
        field_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-overflow")
    {
        is_overflow = value;
        is_overflow.value_namespace = name_space;
        is_overflow.value_namespace_prefix = name_space_prefix;
    }
}

void Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::Statistics::BlockInfo::FieldInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "field-name")
    {
        field_name.yfilter = yfilter;
    }
    if(value_path == "field-value")
    {
        field_value.yfilter = yfilter;
    }
    if(value_path == "is-overflow")
    {
        is_overflow.yfilter = yfilter;
    }
}

bool Dpa::Stats::Nodes::Node::AsicStatistics::AsicStatisticsDetailForNpuIds::AsicStatisticsDetailForNpuId::Statistics::BlockInfo::FieldInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "field-name" || name == "field-value" || name == "is-overflow")
        return true;
    return false;
}

Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumbers()
{

    yang_name = "npu-numbers"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

Dpa::Stats::Nodes::Node::NpuNumbers::~NpuNumbers()
{
}

bool Dpa::Stats::Nodes::Node::NpuNumbers::has_data() const
{
    for (std::size_t index=0; index<npu_number.size(); index++)
    {
        if(npu_number[index]->has_data())
            return true;
    }
    return false;
}

bool Dpa::Stats::Nodes::Node::NpuNumbers::has_operation() const
{
    for (std::size_t index=0; index<npu_number.size(); index++)
    {
        if(npu_number[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Dpa::Stats::Nodes::Node::NpuNumbers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "npu-numbers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dpa::Stats::Nodes::Node::NpuNumbers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Dpa::Stats::Nodes::Node::NpuNumbers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "npu-number")
    {
        for(auto const & c : npu_number)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber>();
        c->parent = this;
        npu_number.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dpa::Stats::Nodes::Node::NpuNumbers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : npu_number)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Dpa::Stats::Nodes::Node::NpuNumbers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dpa::Stats::Nodes::Node::NpuNumbers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dpa::Stats::Nodes::Node::NpuNumbers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "npu-number")
        return true;
    return false;
}

Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::NpuNumber()
    :
    npu_id{YType::int32, "npu-id"}
    	,
    display(std::make_shared<Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display>())
{
    display->parent = this;

    yang_name = "npu-number"; yang_parent_name = "npu-numbers"; is_top_level_class = false; has_list_ancestor = true;
}

Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::~NpuNumber()
{
}

bool Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::has_data() const
{
    return npu_id.is_set
	|| (display !=  nullptr && display->has_data());
}

bool Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(npu_id.yfilter)
	|| (display !=  nullptr && display->has_operation());
}

std::string Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "npu-number" <<"[npu-id='" <<npu_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (npu_id.is_set || is_set(npu_id.yfilter)) leaf_name_data.push_back(npu_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "display")
    {
        if(display == nullptr)
        {
            display = std::make_shared<Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display>();
        }
        return display;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(display != nullptr)
    {
        children["display"] = display;
    }

    return children;
}

void Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "npu-id")
    {
        npu_id = value;
        npu_id.value_namespace = name_space;
        npu_id.value_namespace_prefix = name_space_prefix;
    }
}

void Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "npu-id")
    {
        npu_id.yfilter = yfilter;
    }
}

bool Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "display" || name == "npu-id")
        return true;
    return false;
}

Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::Display()
    :
    base_numbers(std::make_shared<Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::BaseNumbers>())
	,trap_ids(std::make_shared<Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::TrapIds>())
	,interface_handles(std::make_shared<Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::InterfaceHandles>())
{
    base_numbers->parent = this;
    trap_ids->parent = this;
    interface_handles->parent = this;

    yang_name = "display"; yang_parent_name = "npu-number"; is_top_level_class = false; has_list_ancestor = true;
}

Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::~Display()
{
}

bool Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::has_data() const
{
    return (base_numbers !=  nullptr && base_numbers->has_data())
	|| (trap_ids !=  nullptr && trap_ids->has_data())
	|| (interface_handles !=  nullptr && interface_handles->has_data());
}

bool Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::has_operation() const
{
    return is_set(yfilter)
	|| (base_numbers !=  nullptr && base_numbers->has_operation())
	|| (trap_ids !=  nullptr && trap_ids->has_operation())
	|| (interface_handles !=  nullptr && interface_handles->has_operation());
}

std::string Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "display";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base-numbers")
    {
        if(base_numbers == nullptr)
        {
            base_numbers = std::make_shared<Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::BaseNumbers>();
        }
        return base_numbers;
    }

    if(child_yang_name == "trap-ids")
    {
        if(trap_ids == nullptr)
        {
            trap_ids = std::make_shared<Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::TrapIds>();
        }
        return trap_ids;
    }

    if(child_yang_name == "interface-handles")
    {
        if(interface_handles == nullptr)
        {
            interface_handles = std::make_shared<Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::InterfaceHandles>();
        }
        return interface_handles;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(base_numbers != nullptr)
    {
        children["base-numbers"] = base_numbers;
    }

    if(trap_ids != nullptr)
    {
        children["trap-ids"] = trap_ids;
    }

    if(interface_handles != nullptr)
    {
        children["interface-handles"] = interface_handles;
    }

    return children;
}

void Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base-numbers" || name == "trap-ids" || name == "interface-handles")
        return true;
    return false;
}

Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::BaseNumbers::BaseNumbers()
{

    yang_name = "base-numbers"; yang_parent_name = "display"; is_top_level_class = false; has_list_ancestor = true;
}

Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::BaseNumbers::~BaseNumbers()
{
}

bool Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::BaseNumbers::has_data() const
{
    for (std::size_t index=0; index<base_number.size(); index++)
    {
        if(base_number[index]->has_data())
            return true;
    }
    return false;
}

bool Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::BaseNumbers::has_operation() const
{
    for (std::size_t index=0; index<base_number.size(); index++)
    {
        if(base_number[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::BaseNumbers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base-numbers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::BaseNumbers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::BaseNumbers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base-number")
    {
        for(auto const & c : base_number)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::BaseNumbers::BaseNumber>();
        c->parent = this;
        base_number.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::BaseNumbers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : base_number)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::BaseNumbers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::BaseNumbers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::BaseNumbers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base-number")
        return true;
    return false;
}

Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::BaseNumbers::BaseNumber::BaseNumber()
    :
    base_number{YType::uint32, "base-number"},
    in_use{YType::boolean, "in-use"},
    rack_num{YType::uint8, "rack-num"},
    slot_num{YType::uint8, "slot-num"},
    npu_num{YType::uint8, "npu-num"},
    npu_core{YType::uint8, "npu-core"},
    port_num{YType::uint8, "port-num"},
    if_handle{YType::uint32, "if-handle"},
    sys_port{YType::uint32, "sys-port"},
    pp_port{YType::uint32, "pp-port"},
    port_speed{YType::uint32, "port-speed"},
    voq_base{YType::uint32, "voq-base"},
    connector_id{YType::uint32, "connector-id"},
    is_local_port{YType::boolean, "is-local-port"}
{

    yang_name = "base-number"; yang_parent_name = "base-numbers"; is_top_level_class = false; has_list_ancestor = true;
}

Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::BaseNumbers::BaseNumber::~BaseNumber()
{
}

bool Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::BaseNumbers::BaseNumber::has_data() const
{
    for (std::size_t index=0; index<voq_stat.size(); index++)
    {
        if(voq_stat[index]->has_data())
            return true;
    }
    return base_number.is_set
	|| in_use.is_set
	|| rack_num.is_set
	|| slot_num.is_set
	|| npu_num.is_set
	|| npu_core.is_set
	|| port_num.is_set
	|| if_handle.is_set
	|| sys_port.is_set
	|| pp_port.is_set
	|| port_speed.is_set
	|| voq_base.is_set
	|| connector_id.is_set
	|| is_local_port.is_set;
}

bool Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::BaseNumbers::BaseNumber::has_operation() const
{
    for (std::size_t index=0; index<voq_stat.size(); index++)
    {
        if(voq_stat[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(base_number.yfilter)
	|| ydk::is_set(in_use.yfilter)
	|| ydk::is_set(rack_num.yfilter)
	|| ydk::is_set(slot_num.yfilter)
	|| ydk::is_set(npu_num.yfilter)
	|| ydk::is_set(npu_core.yfilter)
	|| ydk::is_set(port_num.yfilter)
	|| ydk::is_set(if_handle.yfilter)
	|| ydk::is_set(sys_port.yfilter)
	|| ydk::is_set(pp_port.yfilter)
	|| ydk::is_set(port_speed.yfilter)
	|| ydk::is_set(voq_base.yfilter)
	|| ydk::is_set(connector_id.yfilter)
	|| ydk::is_set(is_local_port.yfilter);
}

std::string Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::BaseNumbers::BaseNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base-number" <<"[base-number='" <<base_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::BaseNumbers::BaseNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (base_number.is_set || is_set(base_number.yfilter)) leaf_name_data.push_back(base_number.get_name_leafdata());
    if (in_use.is_set || is_set(in_use.yfilter)) leaf_name_data.push_back(in_use.get_name_leafdata());
    if (rack_num.is_set || is_set(rack_num.yfilter)) leaf_name_data.push_back(rack_num.get_name_leafdata());
    if (slot_num.is_set || is_set(slot_num.yfilter)) leaf_name_data.push_back(slot_num.get_name_leafdata());
    if (npu_num.is_set || is_set(npu_num.yfilter)) leaf_name_data.push_back(npu_num.get_name_leafdata());
    if (npu_core.is_set || is_set(npu_core.yfilter)) leaf_name_data.push_back(npu_core.get_name_leafdata());
    if (port_num.is_set || is_set(port_num.yfilter)) leaf_name_data.push_back(port_num.get_name_leafdata());
    if (if_handle.is_set || is_set(if_handle.yfilter)) leaf_name_data.push_back(if_handle.get_name_leafdata());
    if (sys_port.is_set || is_set(sys_port.yfilter)) leaf_name_data.push_back(sys_port.get_name_leafdata());
    if (pp_port.is_set || is_set(pp_port.yfilter)) leaf_name_data.push_back(pp_port.get_name_leafdata());
    if (port_speed.is_set || is_set(port_speed.yfilter)) leaf_name_data.push_back(port_speed.get_name_leafdata());
    if (voq_base.is_set || is_set(voq_base.yfilter)) leaf_name_data.push_back(voq_base.get_name_leafdata());
    if (connector_id.is_set || is_set(connector_id.yfilter)) leaf_name_data.push_back(connector_id.get_name_leafdata());
    if (is_local_port.is_set || is_set(is_local_port.yfilter)) leaf_name_data.push_back(is_local_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::BaseNumbers::BaseNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "voq-stat")
    {
        for(auto const & c : voq_stat)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::BaseNumbers::BaseNumber::VoqStat>();
        c->parent = this;
        voq_stat.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::BaseNumbers::BaseNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : voq_stat)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::BaseNumbers::BaseNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "base-number")
    {
        base_number = value;
        base_number.value_namespace = name_space;
        base_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-use")
    {
        in_use = value;
        in_use.value_namespace = name_space;
        in_use.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rack-num")
    {
        rack_num = value;
        rack_num.value_namespace = name_space;
        rack_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slot-num")
    {
        slot_num = value;
        slot_num.value_namespace = name_space;
        slot_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "npu-num")
    {
        npu_num = value;
        npu_num.value_namespace = name_space;
        npu_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "npu-core")
    {
        npu_core = value;
        npu_core.value_namespace = name_space;
        npu_core.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-num")
    {
        port_num = value;
        port_num.value_namespace = name_space;
        port_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if-handle")
    {
        if_handle = value;
        if_handle.value_namespace = name_space;
        if_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sys-port")
    {
        sys_port = value;
        sys_port.value_namespace = name_space;
        sys_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pp-port")
    {
        pp_port = value;
        pp_port.value_namespace = name_space;
        pp_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-speed")
    {
        port_speed = value;
        port_speed.value_namespace = name_space;
        port_speed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "voq-base")
    {
        voq_base = value;
        voq_base.value_namespace = name_space;
        voq_base.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connector-id")
    {
        connector_id = value;
        connector_id.value_namespace = name_space;
        connector_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-local-port")
    {
        is_local_port = value;
        is_local_port.value_namespace = name_space;
        is_local_port.value_namespace_prefix = name_space_prefix;
    }
}

void Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::BaseNumbers::BaseNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "base-number")
    {
        base_number.yfilter = yfilter;
    }
    if(value_path == "in-use")
    {
        in_use.yfilter = yfilter;
    }
    if(value_path == "rack-num")
    {
        rack_num.yfilter = yfilter;
    }
    if(value_path == "slot-num")
    {
        slot_num.yfilter = yfilter;
    }
    if(value_path == "npu-num")
    {
        npu_num.yfilter = yfilter;
    }
    if(value_path == "npu-core")
    {
        npu_core.yfilter = yfilter;
    }
    if(value_path == "port-num")
    {
        port_num.yfilter = yfilter;
    }
    if(value_path == "if-handle")
    {
        if_handle.yfilter = yfilter;
    }
    if(value_path == "sys-port")
    {
        sys_port.yfilter = yfilter;
    }
    if(value_path == "pp-port")
    {
        pp_port.yfilter = yfilter;
    }
    if(value_path == "port-speed")
    {
        port_speed.yfilter = yfilter;
    }
    if(value_path == "voq-base")
    {
        voq_base.yfilter = yfilter;
    }
    if(value_path == "connector-id")
    {
        connector_id.yfilter = yfilter;
    }
    if(value_path == "is-local-port")
    {
        is_local_port.yfilter = yfilter;
    }
}

bool Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::BaseNumbers::BaseNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "voq-stat" || name == "base-number" || name == "in-use" || name == "rack-num" || name == "slot-num" || name == "npu-num" || name == "npu-core" || name == "port-num" || name == "if-handle" || name == "sys-port" || name == "pp-port" || name == "port-speed" || name == "voq-base" || name == "connector-id" || name == "is-local-port")
        return true;
    return false;
}

Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::BaseNumbers::BaseNumber::VoqStat::VoqStat()
    :
    received_bytes{YType::uint64, "received-bytes"},
    received_packets{YType::uint64, "received-packets"},
    dropped_bytes{YType::uint64, "dropped-bytes"},
    dropped_packets{YType::uint64, "dropped-packets"}
{

    yang_name = "voq-stat"; yang_parent_name = "base-number"; is_top_level_class = false; has_list_ancestor = true;
}

Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::BaseNumbers::BaseNumber::VoqStat::~VoqStat()
{
}

bool Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::BaseNumbers::BaseNumber::VoqStat::has_data() const
{
    return received_bytes.is_set
	|| received_packets.is_set
	|| dropped_bytes.is_set
	|| dropped_packets.is_set;
}

bool Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::BaseNumbers::BaseNumber::VoqStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(received_bytes.yfilter)
	|| ydk::is_set(received_packets.yfilter)
	|| ydk::is_set(dropped_bytes.yfilter)
	|| ydk::is_set(dropped_packets.yfilter);
}

std::string Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::BaseNumbers::BaseNumber::VoqStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "voq-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::BaseNumbers::BaseNumber::VoqStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (received_bytes.is_set || is_set(received_bytes.yfilter)) leaf_name_data.push_back(received_bytes.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.yfilter)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (dropped_bytes.is_set || is_set(dropped_bytes.yfilter)) leaf_name_data.push_back(dropped_bytes.get_name_leafdata());
    if (dropped_packets.is_set || is_set(dropped_packets.yfilter)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::BaseNumbers::BaseNumber::VoqStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::BaseNumbers::BaseNumber::VoqStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::BaseNumbers::BaseNumber::VoqStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "received-bytes")
    {
        received_bytes = value;
        received_bytes.value_namespace = name_space;
        received_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
        received_packets.value_namespace = name_space;
        received_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped-bytes")
    {
        dropped_bytes = value;
        dropped_bytes.value_namespace = name_space;
        dropped_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
        dropped_packets.value_namespace = name_space;
        dropped_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::BaseNumbers::BaseNumber::VoqStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "received-bytes")
    {
        received_bytes.yfilter = yfilter;
    }
    if(value_path == "received-packets")
    {
        received_packets.yfilter = yfilter;
    }
    if(value_path == "dropped-bytes")
    {
        dropped_bytes.yfilter = yfilter;
    }
    if(value_path == "dropped-packets")
    {
        dropped_packets.yfilter = yfilter;
    }
}

bool Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::BaseNumbers::BaseNumber::VoqStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-bytes" || name == "received-packets" || name == "dropped-bytes" || name == "dropped-packets")
        return true;
    return false;
}

Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::TrapIds::TrapIds()
{

    yang_name = "trap-ids"; yang_parent_name = "display"; is_top_level_class = false; has_list_ancestor = true;
}

Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::TrapIds::~TrapIds()
{
}

bool Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::TrapIds::has_data() const
{
    for (std::size_t index=0; index<trap_id.size(); index++)
    {
        if(trap_id[index]->has_data())
            return true;
    }
    return false;
}

bool Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::TrapIds::has_operation() const
{
    for (std::size_t index=0; index<trap_id.size(); index++)
    {
        if(trap_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::TrapIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trap-ids";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::TrapIds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::TrapIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trap-id")
    {
        for(auto const & c : trap_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::TrapIds::TrapId>();
        c->parent = this;
        trap_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::TrapIds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : trap_id)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::TrapIds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::TrapIds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::TrapIds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trap-id")
        return true;
    return false;
}

Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::TrapIds::TrapId::TrapId()
    :
    trap_id{YType::uint32, "trap-id"},
    trap_strength{YType::uint32, "trap-strength"},
    priority{YType::uint32, "priority"},
    trap_id_xr{YType::uint32, "trap-id-xr"},
    gport{YType::uint32, "gport"},
    fec_id{YType::uint32, "fec-id"},
    policer_id{YType::uint32, "policer-id"},
    stats_id{YType::uint32, "stats-id"},
    encap_id{YType::uint32, "encap-id"},
    mc_group{YType::uint32, "mc-group"},
    trap_string{YType::str, "trap-string"},
    id{YType::uint32, "id"},
    offset{YType::uint64, "offset"},
    npu_id{YType::uint64, "npu-id"},
    packet_dropped{YType::uint64, "packet-dropped"},
    packet_accepted{YType::uint64, "packet-accepted"}
{

    yang_name = "trap-id"; yang_parent_name = "trap-ids"; is_top_level_class = false; has_list_ancestor = true;
}

Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::TrapIds::TrapId::~TrapId()
{
}

bool Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::TrapIds::TrapId::has_data() const
{
    return trap_id.is_set
	|| trap_strength.is_set
	|| priority.is_set
	|| trap_id_xr.is_set
	|| gport.is_set
	|| fec_id.is_set
	|| policer_id.is_set
	|| stats_id.is_set
	|| encap_id.is_set
	|| mc_group.is_set
	|| trap_string.is_set
	|| id.is_set
	|| offset.is_set
	|| npu_id.is_set
	|| packet_dropped.is_set
	|| packet_accepted.is_set;
}

bool Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::TrapIds::TrapId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trap_id.yfilter)
	|| ydk::is_set(trap_strength.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(trap_id_xr.yfilter)
	|| ydk::is_set(gport.yfilter)
	|| ydk::is_set(fec_id.yfilter)
	|| ydk::is_set(policer_id.yfilter)
	|| ydk::is_set(stats_id.yfilter)
	|| ydk::is_set(encap_id.yfilter)
	|| ydk::is_set(mc_group.yfilter)
	|| ydk::is_set(trap_string.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(offset.yfilter)
	|| ydk::is_set(npu_id.yfilter)
	|| ydk::is_set(packet_dropped.yfilter)
	|| ydk::is_set(packet_accepted.yfilter);
}

std::string Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::TrapIds::TrapId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trap-id" <<"[trap-id='" <<trap_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::TrapIds::TrapId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trap_id.is_set || is_set(trap_id.yfilter)) leaf_name_data.push_back(trap_id.get_name_leafdata());
    if (trap_strength.is_set || is_set(trap_strength.yfilter)) leaf_name_data.push_back(trap_strength.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (trap_id_xr.is_set || is_set(trap_id_xr.yfilter)) leaf_name_data.push_back(trap_id_xr.get_name_leafdata());
    if (gport.is_set || is_set(gport.yfilter)) leaf_name_data.push_back(gport.get_name_leafdata());
    if (fec_id.is_set || is_set(fec_id.yfilter)) leaf_name_data.push_back(fec_id.get_name_leafdata());
    if (policer_id.is_set || is_set(policer_id.yfilter)) leaf_name_data.push_back(policer_id.get_name_leafdata());
    if (stats_id.is_set || is_set(stats_id.yfilter)) leaf_name_data.push_back(stats_id.get_name_leafdata());
    if (encap_id.is_set || is_set(encap_id.yfilter)) leaf_name_data.push_back(encap_id.get_name_leafdata());
    if (mc_group.is_set || is_set(mc_group.yfilter)) leaf_name_data.push_back(mc_group.get_name_leafdata());
    if (trap_string.is_set || is_set(trap_string.yfilter)) leaf_name_data.push_back(trap_string.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (offset.is_set || is_set(offset.yfilter)) leaf_name_data.push_back(offset.get_name_leafdata());
    if (npu_id.is_set || is_set(npu_id.yfilter)) leaf_name_data.push_back(npu_id.get_name_leafdata());
    if (packet_dropped.is_set || is_set(packet_dropped.yfilter)) leaf_name_data.push_back(packet_dropped.get_name_leafdata());
    if (packet_accepted.is_set || is_set(packet_accepted.yfilter)) leaf_name_data.push_back(packet_accepted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::TrapIds::TrapId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::TrapIds::TrapId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::TrapIds::TrapId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trap-id")
    {
        trap_id = value;
        trap_id.value_namespace = name_space;
        trap_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trap-strength")
    {
        trap_strength = value;
        trap_strength.value_namespace = name_space;
        trap_strength.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trap-id-xr")
    {
        trap_id_xr = value;
        trap_id_xr.value_namespace = name_space;
        trap_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gport")
    {
        gport = value;
        gport.value_namespace = name_space;
        gport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-id")
    {
        fec_id = value;
        fec_id.value_namespace = name_space;
        fec_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policer-id")
    {
        policer_id = value;
        policer_id.value_namespace = name_space;
        policer_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stats-id")
    {
        stats_id = value;
        stats_id.value_namespace = name_space;
        stats_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encap-id")
    {
        encap_id = value;
        encap_id.value_namespace = name_space;
        encap_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mc-group")
    {
        mc_group = value;
        mc_group.value_namespace = name_space;
        mc_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trap-string")
    {
        trap_string = value;
        trap_string.value_namespace = name_space;
        trap_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offset")
    {
        offset = value;
        offset.value_namespace = name_space;
        offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "npu-id")
    {
        npu_id = value;
        npu_id.value_namespace = name_space;
        npu_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-dropped")
    {
        packet_dropped = value;
        packet_dropped.value_namespace = name_space;
        packet_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-accepted")
    {
        packet_accepted = value;
        packet_accepted.value_namespace = name_space;
        packet_accepted.value_namespace_prefix = name_space_prefix;
    }
}

void Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::TrapIds::TrapId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trap-id")
    {
        trap_id.yfilter = yfilter;
    }
    if(value_path == "trap-strength")
    {
        trap_strength.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "trap-id-xr")
    {
        trap_id_xr.yfilter = yfilter;
    }
    if(value_path == "gport")
    {
        gport.yfilter = yfilter;
    }
    if(value_path == "fec-id")
    {
        fec_id.yfilter = yfilter;
    }
    if(value_path == "policer-id")
    {
        policer_id.yfilter = yfilter;
    }
    if(value_path == "stats-id")
    {
        stats_id.yfilter = yfilter;
    }
    if(value_path == "encap-id")
    {
        encap_id.yfilter = yfilter;
    }
    if(value_path == "mc-group")
    {
        mc_group.yfilter = yfilter;
    }
    if(value_path == "trap-string")
    {
        trap_string.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "offset")
    {
        offset.yfilter = yfilter;
    }
    if(value_path == "npu-id")
    {
        npu_id.yfilter = yfilter;
    }
    if(value_path == "packet-dropped")
    {
        packet_dropped.yfilter = yfilter;
    }
    if(value_path == "packet-accepted")
    {
        packet_accepted.yfilter = yfilter;
    }
}

bool Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::TrapIds::TrapId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trap-id" || name == "trap-strength" || name == "priority" || name == "trap-id-xr" || name == "gport" || name == "fec-id" || name == "policer-id" || name == "stats-id" || name == "encap-id" || name == "mc-group" || name == "trap-string" || name == "id" || name == "offset" || name == "npu-id" || name == "packet-dropped" || name == "packet-accepted")
        return true;
    return false;
}

Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::InterfaceHandles::InterfaceHandles()
{

    yang_name = "interface-handles"; yang_parent_name = "display"; is_top_level_class = false; has_list_ancestor = true;
}

Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::InterfaceHandles::~InterfaceHandles()
{
}

bool Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::InterfaceHandles::has_data() const
{
    for (std::size_t index=0; index<interface_handle.size(); index++)
    {
        if(interface_handle[index]->has_data())
            return true;
    }
    return false;
}

bool Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::InterfaceHandles::has_operation() const
{
    for (std::size_t index=0; index<interface_handle.size(); index++)
    {
        if(interface_handle[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::InterfaceHandles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-handles";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::InterfaceHandles::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::InterfaceHandles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-handle")
    {
        for(auto const & c : interface_handle)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::InterfaceHandles::InterfaceHandle>();
        c->parent = this;
        interface_handle.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::InterfaceHandles::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_handle)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::InterfaceHandles::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::InterfaceHandles::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::InterfaceHandles::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-handle")
        return true;
    return false;
}

Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::InterfaceHandles::InterfaceHandle::InterfaceHandle()
    :
    interface_handle{YType::uint32, "interface-handle"},
    in_use{YType::boolean, "in-use"},
    rack_num{YType::uint8, "rack-num"},
    slot_num{YType::uint8, "slot-num"},
    npu_num{YType::uint8, "npu-num"},
    npu_core{YType::uint8, "npu-core"},
    port_num{YType::uint8, "port-num"},
    if_handle{YType::uint32, "if-handle"},
    sys_port{YType::uint32, "sys-port"},
    pp_port{YType::uint32, "pp-port"},
    port_speed{YType::uint32, "port-speed"},
    voq_base{YType::uint32, "voq-base"},
    connector_id{YType::uint32, "connector-id"},
    is_local_port{YType::boolean, "is-local-port"}
{

    yang_name = "interface-handle"; yang_parent_name = "interface-handles"; is_top_level_class = false; has_list_ancestor = true;
}

Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::InterfaceHandles::InterfaceHandle::~InterfaceHandle()
{
}

bool Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::InterfaceHandles::InterfaceHandle::has_data() const
{
    for (std::size_t index=0; index<voq_stat.size(); index++)
    {
        if(voq_stat[index]->has_data())
            return true;
    }
    return interface_handle.is_set
	|| in_use.is_set
	|| rack_num.is_set
	|| slot_num.is_set
	|| npu_num.is_set
	|| npu_core.is_set
	|| port_num.is_set
	|| if_handle.is_set
	|| sys_port.is_set
	|| pp_port.is_set
	|| port_speed.is_set
	|| voq_base.is_set
	|| connector_id.is_set
	|| is_local_port.is_set;
}

bool Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::InterfaceHandles::InterfaceHandle::has_operation() const
{
    for (std::size_t index=0; index<voq_stat.size(); index++)
    {
        if(voq_stat[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(in_use.yfilter)
	|| ydk::is_set(rack_num.yfilter)
	|| ydk::is_set(slot_num.yfilter)
	|| ydk::is_set(npu_num.yfilter)
	|| ydk::is_set(npu_core.yfilter)
	|| ydk::is_set(port_num.yfilter)
	|| ydk::is_set(if_handle.yfilter)
	|| ydk::is_set(sys_port.yfilter)
	|| ydk::is_set(pp_port.yfilter)
	|| ydk::is_set(port_speed.yfilter)
	|| ydk::is_set(voq_base.yfilter)
	|| ydk::is_set(connector_id.yfilter)
	|| ydk::is_set(is_local_port.yfilter);
}

std::string Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::InterfaceHandles::InterfaceHandle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-handle" <<"[interface-handle='" <<interface_handle <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::InterfaceHandles::InterfaceHandle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (in_use.is_set || is_set(in_use.yfilter)) leaf_name_data.push_back(in_use.get_name_leafdata());
    if (rack_num.is_set || is_set(rack_num.yfilter)) leaf_name_data.push_back(rack_num.get_name_leafdata());
    if (slot_num.is_set || is_set(slot_num.yfilter)) leaf_name_data.push_back(slot_num.get_name_leafdata());
    if (npu_num.is_set || is_set(npu_num.yfilter)) leaf_name_data.push_back(npu_num.get_name_leafdata());
    if (npu_core.is_set || is_set(npu_core.yfilter)) leaf_name_data.push_back(npu_core.get_name_leafdata());
    if (port_num.is_set || is_set(port_num.yfilter)) leaf_name_data.push_back(port_num.get_name_leafdata());
    if (if_handle.is_set || is_set(if_handle.yfilter)) leaf_name_data.push_back(if_handle.get_name_leafdata());
    if (sys_port.is_set || is_set(sys_port.yfilter)) leaf_name_data.push_back(sys_port.get_name_leafdata());
    if (pp_port.is_set || is_set(pp_port.yfilter)) leaf_name_data.push_back(pp_port.get_name_leafdata());
    if (port_speed.is_set || is_set(port_speed.yfilter)) leaf_name_data.push_back(port_speed.get_name_leafdata());
    if (voq_base.is_set || is_set(voq_base.yfilter)) leaf_name_data.push_back(voq_base.get_name_leafdata());
    if (connector_id.is_set || is_set(connector_id.yfilter)) leaf_name_data.push_back(connector_id.get_name_leafdata());
    if (is_local_port.is_set || is_set(is_local_port.yfilter)) leaf_name_data.push_back(is_local_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::InterfaceHandles::InterfaceHandle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "voq-stat")
    {
        for(auto const & c : voq_stat)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::InterfaceHandles::InterfaceHandle::VoqStat>();
        c->parent = this;
        voq_stat.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::InterfaceHandles::InterfaceHandle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : voq_stat)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::InterfaceHandles::InterfaceHandle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-use")
    {
        in_use = value;
        in_use.value_namespace = name_space;
        in_use.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rack-num")
    {
        rack_num = value;
        rack_num.value_namespace = name_space;
        rack_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slot-num")
    {
        slot_num = value;
        slot_num.value_namespace = name_space;
        slot_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "npu-num")
    {
        npu_num = value;
        npu_num.value_namespace = name_space;
        npu_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "npu-core")
    {
        npu_core = value;
        npu_core.value_namespace = name_space;
        npu_core.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-num")
    {
        port_num = value;
        port_num.value_namespace = name_space;
        port_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if-handle")
    {
        if_handle = value;
        if_handle.value_namespace = name_space;
        if_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sys-port")
    {
        sys_port = value;
        sys_port.value_namespace = name_space;
        sys_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pp-port")
    {
        pp_port = value;
        pp_port.value_namespace = name_space;
        pp_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-speed")
    {
        port_speed = value;
        port_speed.value_namespace = name_space;
        port_speed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "voq-base")
    {
        voq_base = value;
        voq_base.value_namespace = name_space;
        voq_base.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connector-id")
    {
        connector_id = value;
        connector_id.value_namespace = name_space;
        connector_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-local-port")
    {
        is_local_port = value;
        is_local_port.value_namespace = name_space;
        is_local_port.value_namespace_prefix = name_space_prefix;
    }
}

void Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::InterfaceHandles::InterfaceHandle::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "in-use")
    {
        in_use.yfilter = yfilter;
    }
    if(value_path == "rack-num")
    {
        rack_num.yfilter = yfilter;
    }
    if(value_path == "slot-num")
    {
        slot_num.yfilter = yfilter;
    }
    if(value_path == "npu-num")
    {
        npu_num.yfilter = yfilter;
    }
    if(value_path == "npu-core")
    {
        npu_core.yfilter = yfilter;
    }
    if(value_path == "port-num")
    {
        port_num.yfilter = yfilter;
    }
    if(value_path == "if-handle")
    {
        if_handle.yfilter = yfilter;
    }
    if(value_path == "sys-port")
    {
        sys_port.yfilter = yfilter;
    }
    if(value_path == "pp-port")
    {
        pp_port.yfilter = yfilter;
    }
    if(value_path == "port-speed")
    {
        port_speed.yfilter = yfilter;
    }
    if(value_path == "voq-base")
    {
        voq_base.yfilter = yfilter;
    }
    if(value_path == "connector-id")
    {
        connector_id.yfilter = yfilter;
    }
    if(value_path == "is-local-port")
    {
        is_local_port.yfilter = yfilter;
    }
}

bool Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::InterfaceHandles::InterfaceHandle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "voq-stat" || name == "interface-handle" || name == "in-use" || name == "rack-num" || name == "slot-num" || name == "npu-num" || name == "npu-core" || name == "port-num" || name == "if-handle" || name == "sys-port" || name == "pp-port" || name == "port-speed" || name == "voq-base" || name == "connector-id" || name == "is-local-port")
        return true;
    return false;
}

Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::InterfaceHandles::InterfaceHandle::VoqStat::VoqStat()
    :
    received_bytes{YType::uint64, "received-bytes"},
    received_packets{YType::uint64, "received-packets"},
    dropped_bytes{YType::uint64, "dropped-bytes"},
    dropped_packets{YType::uint64, "dropped-packets"}
{

    yang_name = "voq-stat"; yang_parent_name = "interface-handle"; is_top_level_class = false; has_list_ancestor = true;
}

Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::InterfaceHandles::InterfaceHandle::VoqStat::~VoqStat()
{
}

bool Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::InterfaceHandles::InterfaceHandle::VoqStat::has_data() const
{
    return received_bytes.is_set
	|| received_packets.is_set
	|| dropped_bytes.is_set
	|| dropped_packets.is_set;
}

bool Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::InterfaceHandles::InterfaceHandle::VoqStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(received_bytes.yfilter)
	|| ydk::is_set(received_packets.yfilter)
	|| ydk::is_set(dropped_bytes.yfilter)
	|| ydk::is_set(dropped_packets.yfilter);
}

std::string Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::InterfaceHandles::InterfaceHandle::VoqStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "voq-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::InterfaceHandles::InterfaceHandle::VoqStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (received_bytes.is_set || is_set(received_bytes.yfilter)) leaf_name_data.push_back(received_bytes.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.yfilter)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (dropped_bytes.is_set || is_set(dropped_bytes.yfilter)) leaf_name_data.push_back(dropped_bytes.get_name_leafdata());
    if (dropped_packets.is_set || is_set(dropped_packets.yfilter)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::InterfaceHandles::InterfaceHandle::VoqStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::InterfaceHandles::InterfaceHandle::VoqStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::InterfaceHandles::InterfaceHandle::VoqStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "received-bytes")
    {
        received_bytes = value;
        received_bytes.value_namespace = name_space;
        received_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
        received_packets.value_namespace = name_space;
        received_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped-bytes")
    {
        dropped_bytes = value;
        dropped_bytes.value_namespace = name_space;
        dropped_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
        dropped_packets.value_namespace = name_space;
        dropped_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::InterfaceHandles::InterfaceHandle::VoqStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "received-bytes")
    {
        received_bytes.yfilter = yfilter;
    }
    if(value_path == "received-packets")
    {
        received_packets.yfilter = yfilter;
    }
    if(value_path == "dropped-bytes")
    {
        dropped_bytes.yfilter = yfilter;
    }
    if(value_path == "dropped-packets")
    {
        dropped_packets.yfilter = yfilter;
    }
}

bool Dpa::Stats::Nodes::Node::NpuNumbers::NpuNumber::Display::InterfaceHandles::InterfaceHandle::VoqStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-bytes" || name == "received-packets" || name == "dropped-bytes" || name == "dropped-packets")
        return true;
    return false;
}

Dpa::Stats::Nodes::Node::NpuIds::NpuIds()
{

    yang_name = "npu-ids"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

Dpa::Stats::Nodes::Node::NpuIds::~NpuIds()
{
}

bool Dpa::Stats::Nodes::Node::NpuIds::has_data() const
{
    for (std::size_t index=0; index<npu_id.size(); index++)
    {
        if(npu_id[index]->has_data())
            return true;
    }
    return false;
}

bool Dpa::Stats::Nodes::Node::NpuIds::has_operation() const
{
    for (std::size_t index=0; index<npu_id.size(); index++)
    {
        if(npu_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Dpa::Stats::Nodes::Node::NpuIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "npu-ids";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dpa::Stats::Nodes::Node::NpuIds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Dpa::Stats::Nodes::Node::NpuIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "npu-id")
    {
        for(auto const & c : npu_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Dpa::Stats::Nodes::Node::NpuIds::NpuId>();
        c->parent = this;
        npu_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dpa::Stats::Nodes::Node::NpuIds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : npu_id)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Dpa::Stats::Nodes::Node::NpuIds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dpa::Stats::Nodes::Node::NpuIds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Dpa::Stats::Nodes::Node::NpuIds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "npu-id")
        return true;
    return false;
}

Dpa::Stats::Nodes::Node::NpuIds::NpuId::NpuId()
    :
    npu_id{YType::int32, "npu-id"},
    sys_cp_cnfg_prof{YType::uint32, "sys-cp-cnfg-prof"},
    next_avail_cp_id{YType::uint32, "next-avail-cp-id"},
    num_cntr_engines{YType::uint32, "num-cntr-engines"}
{

    yang_name = "npu-id"; yang_parent_name = "npu-ids"; is_top_level_class = false; has_list_ancestor = true;
}

Dpa::Stats::Nodes::Node::NpuIds::NpuId::~NpuId()
{
}

bool Dpa::Stats::Nodes::Node::NpuIds::NpuId::has_data() const
{
    for (std::size_t index=0; index<cntr_engine.size(); index++)
    {
        if(cntr_engine[index]->has_data())
            return true;
    }
    return npu_id.is_set
	|| sys_cp_cnfg_prof.is_set
	|| next_avail_cp_id.is_set
	|| num_cntr_engines.is_set;
}

bool Dpa::Stats::Nodes::Node::NpuIds::NpuId::has_operation() const
{
    for (std::size_t index=0; index<cntr_engine.size(); index++)
    {
        if(cntr_engine[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(npu_id.yfilter)
	|| ydk::is_set(sys_cp_cnfg_prof.yfilter)
	|| ydk::is_set(next_avail_cp_id.yfilter)
	|| ydk::is_set(num_cntr_engines.yfilter);
}

std::string Dpa::Stats::Nodes::Node::NpuIds::NpuId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "npu-id" <<"[npu-id='" <<npu_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dpa::Stats::Nodes::Node::NpuIds::NpuId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (npu_id.is_set || is_set(npu_id.yfilter)) leaf_name_data.push_back(npu_id.get_name_leafdata());
    if (sys_cp_cnfg_prof.is_set || is_set(sys_cp_cnfg_prof.yfilter)) leaf_name_data.push_back(sys_cp_cnfg_prof.get_name_leafdata());
    if (next_avail_cp_id.is_set || is_set(next_avail_cp_id.yfilter)) leaf_name_data.push_back(next_avail_cp_id.get_name_leafdata());
    if (num_cntr_engines.is_set || is_set(num_cntr_engines.yfilter)) leaf_name_data.push_back(num_cntr_engines.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dpa::Stats::Nodes::Node::NpuIds::NpuId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cntr-engine")
    {
        for(auto const & c : cntr_engine)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Dpa::Stats::Nodes::Node::NpuIds::NpuId::CntrEngine>();
        c->parent = this;
        cntr_engine.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dpa::Stats::Nodes::Node::NpuIds::NpuId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cntr_engine)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Dpa::Stats::Nodes::Node::NpuIds::NpuId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "npu-id")
    {
        npu_id = value;
        npu_id.value_namespace = name_space;
        npu_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sys-cp-cnfg-prof")
    {
        sys_cp_cnfg_prof = value;
        sys_cp_cnfg_prof.value_namespace = name_space;
        sys_cp_cnfg_prof.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-avail-cp-id")
    {
        next_avail_cp_id = value;
        next_avail_cp_id.value_namespace = name_space;
        next_avail_cp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-cntr-engines")
    {
        num_cntr_engines = value;
        num_cntr_engines.value_namespace = name_space;
        num_cntr_engines.value_namespace_prefix = name_space_prefix;
    }
}

void Dpa::Stats::Nodes::Node::NpuIds::NpuId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "npu-id")
    {
        npu_id.yfilter = yfilter;
    }
    if(value_path == "sys-cp-cnfg-prof")
    {
        sys_cp_cnfg_prof.yfilter = yfilter;
    }
    if(value_path == "next-avail-cp-id")
    {
        next_avail_cp_id.yfilter = yfilter;
    }
    if(value_path == "num-cntr-engines")
    {
        num_cntr_engines.yfilter = yfilter;
    }
}

bool Dpa::Stats::Nodes::Node::NpuIds::NpuId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cntr-engine" || name == "npu-id" || name == "sys-cp-cnfg-prof" || name == "next-avail-cp-id" || name == "num-cntr-engines")
        return true;
    return false;
}

Dpa::Stats::Nodes::Node::NpuIds::NpuId::CntrEngine::CntrEngine()
    :
    state{YType::str, "state"},
    core_id{YType::uint32, "core-id"}
{

    yang_name = "cntr-engine"; yang_parent_name = "npu-id"; is_top_level_class = false; has_list_ancestor = true;
}

Dpa::Stats::Nodes::Node::NpuIds::NpuId::CntrEngine::~CntrEngine()
{
}

bool Dpa::Stats::Nodes::Node::NpuIds::NpuId::CntrEngine::has_data() const
{
    for (std::size_t index=0; index<apps_info.size(); index++)
    {
        if(apps_info[index]->has_data())
            return true;
    }
    return state.is_set
	|| core_id.is_set;
}

bool Dpa::Stats::Nodes::Node::NpuIds::NpuId::CntrEngine::has_operation() const
{
    for (std::size_t index=0; index<apps_info.size(); index++)
    {
        if(apps_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(core_id.yfilter);
}

std::string Dpa::Stats::Nodes::Node::NpuIds::NpuId::CntrEngine::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cntr-engine";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dpa::Stats::Nodes::Node::NpuIds::NpuId::CntrEngine::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (core_id.is_set || is_set(core_id.yfilter)) leaf_name_data.push_back(core_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dpa::Stats::Nodes::Node::NpuIds::NpuId::CntrEngine::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "apps-info")
    {
        for(auto const & c : apps_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Dpa::Stats::Nodes::Node::NpuIds::NpuId::CntrEngine::AppsInfo>();
        c->parent = this;
        apps_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dpa::Stats::Nodes::Node::NpuIds::NpuId::CntrEngine::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : apps_info)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Dpa::Stats::Nodes::Node::NpuIds::NpuId::CntrEngine::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "core-id")
    {
        core_id = value;
        core_id.value_namespace = name_space;
        core_id.value_namespace_prefix = name_space_prefix;
    }
}

void Dpa::Stats::Nodes::Node::NpuIds::NpuId::CntrEngine::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "core-id")
    {
        core_id.yfilter = yfilter;
    }
}

bool Dpa::Stats::Nodes::Node::NpuIds::NpuId::CntrEngine::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "apps-info" || name == "state" || name == "core-id")
        return true;
    return false;
}

Dpa::Stats::Nodes::Node::NpuIds::NpuId::CntrEngine::AppsInfo::AppsInfo()
    :
    app_type{YType::str, "app-type"},
    num_cntrs_for_app{YType::uint32, "num-cntrs-for-app"},
    num_cntrs_used{YType::uint32, "num-cntrs-used"}
{

    yang_name = "apps-info"; yang_parent_name = "cntr-engine"; is_top_level_class = false; has_list_ancestor = true;
}

Dpa::Stats::Nodes::Node::NpuIds::NpuId::CntrEngine::AppsInfo::~AppsInfo()
{
}

bool Dpa::Stats::Nodes::Node::NpuIds::NpuId::CntrEngine::AppsInfo::has_data() const
{
    return app_type.is_set
	|| num_cntrs_for_app.is_set
	|| num_cntrs_used.is_set;
}

bool Dpa::Stats::Nodes::Node::NpuIds::NpuId::CntrEngine::AppsInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(app_type.yfilter)
	|| ydk::is_set(num_cntrs_for_app.yfilter)
	|| ydk::is_set(num_cntrs_used.yfilter);
}

std::string Dpa::Stats::Nodes::Node::NpuIds::NpuId::CntrEngine::AppsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "apps-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dpa::Stats::Nodes::Node::NpuIds::NpuId::CntrEngine::AppsInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (app_type.is_set || is_set(app_type.yfilter)) leaf_name_data.push_back(app_type.get_name_leafdata());
    if (num_cntrs_for_app.is_set || is_set(num_cntrs_for_app.yfilter)) leaf_name_data.push_back(num_cntrs_for_app.get_name_leafdata());
    if (num_cntrs_used.is_set || is_set(num_cntrs_used.yfilter)) leaf_name_data.push_back(num_cntrs_used.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dpa::Stats::Nodes::Node::NpuIds::NpuId::CntrEngine::AppsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dpa::Stats::Nodes::Node::NpuIds::NpuId::CntrEngine::AppsInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Dpa::Stats::Nodes::Node::NpuIds::NpuId::CntrEngine::AppsInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "app-type")
    {
        app_type = value;
        app_type.value_namespace = name_space;
        app_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-cntrs-for-app")
    {
        num_cntrs_for_app = value;
        num_cntrs_for_app.value_namespace = name_space;
        num_cntrs_for_app.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-cntrs-used")
    {
        num_cntrs_used = value;
        num_cntrs_used.value_namespace = name_space;
        num_cntrs_used.value_namespace_prefix = name_space_prefix;
    }
}

void Dpa::Stats::Nodes::Node::NpuIds::NpuId::CntrEngine::AppsInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "app-type")
    {
        app_type.yfilter = yfilter;
    }
    if(value_path == "num-cntrs-for-app")
    {
        num_cntrs_for_app.yfilter = yfilter;
    }
    if(value_path == "num-cntrs-used")
    {
        num_cntrs_used.yfilter = yfilter;
    }
}

bool Dpa::Stats::Nodes::Node::NpuIds::NpuId::CntrEngine::AppsInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "app-type" || name == "num-cntrs-for-app" || name == "num-cntrs-used")
        return true;
    return false;
}

const Enum::YLeaf Resource::lem {0, "lem"};
const Enum::YLeaf Resource::lpm {1, "lpm"};
const Enum::YLeaf Resource::encap {2, "encap"};
const Enum::YLeaf Resource::ext_tcam_ipv4 {3, "ext-tcam-ipv4"};
const Enum::YLeaf Resource::ext_tcam_ipv6_short {4, "ext-tcam-ipv6-short"};
const Enum::YLeaf Resource::ext_tcam_ipv6_long {5, "ext-tcam-ipv6-long"};
const Enum::YLeaf Resource::fec {6, "fec"};
const Enum::YLeaf Resource::ecmpfec {7, "ecmpfec"};


}
}

