
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_60.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_61.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_bgp_oper {

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::SegmentList()
    :
    weight{YType::uint8, "weight"}
{

    yang_name = "segment-list"; yang_parent_name = "sr-policy"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::~SegmentList()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::has_data() const
{
    for (std::size_t index=0; index<segment.size(); index++)
    {
        if(segment[index]->has_data())
            return true;
    }
    return weight.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::has_operation() const
{
    for (std::size_t index=0; index<segment.size(); index++)
    {
        if(segment[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "segment")
    {
        for(auto const & c : segment)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment>();
        c->parent = this;
        segment.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : segment)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "segment" || name == "weight")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::Segment()
    :
    type{YType::enumeration, "type"},
    label{YType::uint32, "label"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "segment"; yang_parent_name = "segment-list"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::~Segment()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::has_data() const
{
    return type.is_set
	|| label.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
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

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
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

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "label" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::Community::Community()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "community"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::Community::~Community()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::Community::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::Community::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::Community::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::Community::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::Community::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::Community::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::Community::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::Community::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::Community::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::ExtendedCommunity::ExtendedCommunity()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "extended-community"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::ExtendedCommunity::~ExtendedCommunity()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::ExtendedCommunity::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::ExtendedCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::ExtendedCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::ExtendedCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::ExtendedCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::ExtendedCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::ExtendedCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::ExtendedCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::ExtendedCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::UnknownAttribute::UnknownAttribute()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "unknown-attribute"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::UnknownAttribute::~UnknownAttribute()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::UnknownAttribute::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::UnknownAttribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::UnknownAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-attribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::UnknownAttribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::UnknownAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::UnknownAttribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::UnknownAttribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::UnknownAttribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::UnknownAttribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::Cluster::Cluster()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "cluster"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::Cluster::~Cluster()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::Cluster::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::Cluster::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::Cluster::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cluster";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::Cluster::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::Cluster::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::Cluster::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::Cluster::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::Cluster::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::Cluster::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::L2Tpv3Cookie::L2Tpv3Cookie()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "l2tpv3-cookie"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::L2Tpv3Cookie::~L2Tpv3Cookie()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::L2Tpv3Cookie::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::L2Tpv3Cookie::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::L2Tpv3Cookie::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tpv3-cookie";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::L2Tpv3Cookie::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::L2Tpv3Cookie::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::L2Tpv3Cookie::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::L2Tpv3Cookie::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::L2Tpv3Cookie::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::L2Tpv3Cookie::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::ConnectorValue::ConnectorValue()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "connector-value"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::ConnectorValue::~ConnectorValue()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::ConnectorValue::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::ConnectorValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::ConnectorValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connector-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::ConnectorValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::ConnectorValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::ConnectorValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::ConnectorValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::ConnectorValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::ConnectorValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::PmsiValue::PmsiValue()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "pmsi-value"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::PmsiValue::~PmsiValue()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::PmsiValue::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::PmsiValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::PmsiValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmsi-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::PmsiValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::PmsiValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::PmsiValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::PmsiValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::PmsiValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::PmsiValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::LsAttr::LsAttr()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "ls-attr"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::LsAttr::~LsAttr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::LsAttr::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::LsAttr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::LsAttr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ls-attr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::LsAttr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::LsAttr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::LsAttr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::LsAttr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::LsAttr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::LsAttr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::LabelIndexAttr::LabelIndexAttr()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "label-index-attr"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::LabelIndexAttr::~LabelIndexAttr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::LabelIndexAttr::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::LabelIndexAttr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::LabelIndexAttr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-index-attr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::LabelIndexAttr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::LabelIndexAttr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::LabelIndexAttr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::LabelIndexAttr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::LabelIndexAttr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::LabelIndexAttr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::PeDistinguisherLabel::PeDistinguisherLabel()
    :
    pe_address{YType::str, "pe-address"},
    label{YType::uint32, "label"}
{

    yang_name = "pe-distinguisher-label"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::PeDistinguisherLabel::~PeDistinguisherLabel()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::PeDistinguisherLabel::has_data() const
{
    return pe_address.is_set
	|| label.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::PeDistinguisherLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pe_address.yfilter)
	|| ydk::is_set(label.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::PeDistinguisherLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pe-distinguisher-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::PeDistinguisherLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pe_address.is_set || is_set(pe_address.yfilter)) leaf_name_data.push_back(pe_address.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::PeDistinguisherLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::PeDistinguisherLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::PeDistinguisherLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pe-address")
    {
        pe_address = value;
        pe_address.value_namespace = name_space;
        pe_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::PeDistinguisherLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pe-address")
    {
        pe_address.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::PeDistinguisherLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pe-address" || name == "label")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::LargeCommunity::LargeCommunity()
    :
    global_admin{YType::uint32, "global-admin"},
    local_data1{YType::uint32, "local-data1"},
    local_data2{YType::uint32, "local-data2"}
{

    yang_name = "large-community"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::LargeCommunity::~LargeCommunity()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::LargeCommunity::has_data() const
{
    return global_admin.is_set
	|| local_data1.is_set
	|| local_data2.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::LargeCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(global_admin.yfilter)
	|| ydk::is_set(local_data1.yfilter)
	|| ydk::is_set(local_data2.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::LargeCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "large-community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::LargeCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (global_admin.is_set || is_set(global_admin.yfilter)) leaf_name_data.push_back(global_admin.get_name_leafdata());
    if (local_data1.is_set || is_set(local_data1.yfilter)) leaf_name_data.push_back(local_data1.get_name_leafdata());
    if (local_data2.is_set || is_set(local_data2.yfilter)) leaf_name_data.push_back(local_data2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::LargeCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::LargeCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::LargeCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "global-admin")
    {
        global_admin = value;
        global_admin.value_namespace = name_space;
        global_admin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-data1")
    {
        local_data1 = value;
        local_data1.value_namespace = name_space;
        local_data1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-data2")
    {
        local_data2 = value;
        local_data2.value_namespace = name_space;
        local_data2.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::LargeCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "global-admin")
    {
        global_admin.yfilter = yfilter;
    }
    if(value_path == "local-data1")
    {
        local_data1.yfilter = yfilter;
    }
    if(value_path == "local-data2")
    {
        local_data2.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::LargeCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global-admin" || name == "local-data1" || name == "local-data2")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::AttrSet()
    :
    is_metric_present{YType::boolean, "is-metric-present"},
    is_local_pref_present{YType::boolean, "is-local-pref-present"},
    is_atomic_aggregate_present{YType::boolean, "is-atomic-aggregate-present"},
    is_aggregator_present{YType::boolean, "is-aggregator-present"},
    is_origin_present{YType::boolean, "is-origin-present"},
    is_as_path_present{YType::boolean, "is-as-path-present"},
    is_community_present{YType::boolean, "is-community-present"},
    is_extended_community_present{YType::boolean, "is-extended-community-present"},
    is_ssa_present{YType::boolean, "is-ssa-present"},
    is_connector_present{YType::boolean, "is-connector-present"},
    is_pmsi_present{YType::boolean, "is-pmsi-present"},
    is_pppmp_present{YType::boolean, "is-pppmp-present"},
    is_aigp_present{YType::boolean, "is-aigp-present"},
    is_pe_distinguisher_label_present{YType::boolean, "is-pe-distinguisher-label-present"},
    is_ls_attribute_present{YType::boolean, "is-ls-attribute-present"},
    is_label_index_present{YType::boolean, "is-label-index-present"},
    neighbor_as{YType::uint32, "neighbor-as"},
    aggregator_as{YType::uint32, "aggregator-as"},
    aggregator_address{YType::str, "aggregator-address"},
    metric{YType::uint32, "metric"},
    local_preference{YType::uint32, "local-preference"},
    origin{YType::uint16, "origin"},
    as_path{YType::str, "as-path"},
    extended_community_flags{YType::uint8, "extended-community-flags"},
    originator{YType::str, "originator"},
    l2tpv3_session_id{YType::uint32, "l2tpv3-session-id"},
    connector_type{YType::uint16, "connector-type"},
    aigp_metric_value{YType::uint64, "aigp-metric-value"},
    pmsi_type{YType::uint16, "pmsi-type"},
    pmsi_flags{YType::uint8, "pmsi-flags"},
    pmsi_label{YType::uint32, "pmsi-label"},
    ppm_pvalue{YType::uint32, "ppm-pvalue"},
    is_large_community_present{YType::boolean, "is-large-community-present"}
    	,
    tunnel_encap(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap>())
{
    tunnel_encap->parent = this;

    yang_name = "attr-set"; yang_parent_name = "attributes-after-policy-in"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::~AttrSet()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::has_data() const
{
    for (std::size_t index=0; index<community.size(); index++)
    {
        if(community[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<extended_community.size(); index++)
    {
        if(extended_community[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<unknown_attribute.size(); index++)
    {
        if(unknown_attribute[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<cluster.size(); index++)
    {
        if(cluster[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<l2tpv3_cookie.size(); index++)
    {
        if(l2tpv3_cookie[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<connector_value.size(); index++)
    {
        if(connector_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pmsi_value.size(); index++)
    {
        if(pmsi_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ls_attr.size(); index++)
    {
        if(ls_attr[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<label_index_attr.size(); index++)
    {
        if(label_index_attr[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pe_distinguisher_label.size(); index++)
    {
        if(pe_distinguisher_label[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<large_community.size(); index++)
    {
        if(large_community[index]->has_data())
            return true;
    }
    return is_metric_present.is_set
	|| is_local_pref_present.is_set
	|| is_atomic_aggregate_present.is_set
	|| is_aggregator_present.is_set
	|| is_origin_present.is_set
	|| is_as_path_present.is_set
	|| is_community_present.is_set
	|| is_extended_community_present.is_set
	|| is_ssa_present.is_set
	|| is_connector_present.is_set
	|| is_pmsi_present.is_set
	|| is_pppmp_present.is_set
	|| is_aigp_present.is_set
	|| is_pe_distinguisher_label_present.is_set
	|| is_ls_attribute_present.is_set
	|| is_label_index_present.is_set
	|| neighbor_as.is_set
	|| aggregator_as.is_set
	|| aggregator_address.is_set
	|| metric.is_set
	|| local_preference.is_set
	|| origin.is_set
	|| as_path.is_set
	|| extended_community_flags.is_set
	|| originator.is_set
	|| l2tpv3_session_id.is_set
	|| connector_type.is_set
	|| aigp_metric_value.is_set
	|| pmsi_type.is_set
	|| pmsi_flags.is_set
	|| pmsi_label.is_set
	|| ppm_pvalue.is_set
	|| is_large_community_present.is_set
	|| (tunnel_encap !=  nullptr && tunnel_encap->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::has_operation() const
{
    for (std::size_t index=0; index<community.size(); index++)
    {
        if(community[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<extended_community.size(); index++)
    {
        if(extended_community[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<unknown_attribute.size(); index++)
    {
        if(unknown_attribute[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<cluster.size(); index++)
    {
        if(cluster[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<l2tpv3_cookie.size(); index++)
    {
        if(l2tpv3_cookie[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<connector_value.size(); index++)
    {
        if(connector_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pmsi_value.size(); index++)
    {
        if(pmsi_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ls_attr.size(); index++)
    {
        if(ls_attr[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<label_index_attr.size(); index++)
    {
        if(label_index_attr[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pe_distinguisher_label.size(); index++)
    {
        if(pe_distinguisher_label[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<large_community.size(); index++)
    {
        if(large_community[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(is_metric_present.yfilter)
	|| ydk::is_set(is_local_pref_present.yfilter)
	|| ydk::is_set(is_atomic_aggregate_present.yfilter)
	|| ydk::is_set(is_aggregator_present.yfilter)
	|| ydk::is_set(is_origin_present.yfilter)
	|| ydk::is_set(is_as_path_present.yfilter)
	|| ydk::is_set(is_community_present.yfilter)
	|| ydk::is_set(is_extended_community_present.yfilter)
	|| ydk::is_set(is_ssa_present.yfilter)
	|| ydk::is_set(is_connector_present.yfilter)
	|| ydk::is_set(is_pmsi_present.yfilter)
	|| ydk::is_set(is_pppmp_present.yfilter)
	|| ydk::is_set(is_aigp_present.yfilter)
	|| ydk::is_set(is_pe_distinguisher_label_present.yfilter)
	|| ydk::is_set(is_ls_attribute_present.yfilter)
	|| ydk::is_set(is_label_index_present.yfilter)
	|| ydk::is_set(neighbor_as.yfilter)
	|| ydk::is_set(aggregator_as.yfilter)
	|| ydk::is_set(aggregator_address.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(local_preference.yfilter)
	|| ydk::is_set(origin.yfilter)
	|| ydk::is_set(as_path.yfilter)
	|| ydk::is_set(extended_community_flags.yfilter)
	|| ydk::is_set(originator.yfilter)
	|| ydk::is_set(l2tpv3_session_id.yfilter)
	|| ydk::is_set(connector_type.yfilter)
	|| ydk::is_set(aigp_metric_value.yfilter)
	|| ydk::is_set(pmsi_type.yfilter)
	|| ydk::is_set(pmsi_flags.yfilter)
	|| ydk::is_set(pmsi_label.yfilter)
	|| ydk::is_set(ppm_pvalue.yfilter)
	|| ydk::is_set(is_large_community_present.yfilter)
	|| (tunnel_encap !=  nullptr && tunnel_encap->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attr-set";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_metric_present.is_set || is_set(is_metric_present.yfilter)) leaf_name_data.push_back(is_metric_present.get_name_leafdata());
    if (is_local_pref_present.is_set || is_set(is_local_pref_present.yfilter)) leaf_name_data.push_back(is_local_pref_present.get_name_leafdata());
    if (is_atomic_aggregate_present.is_set || is_set(is_atomic_aggregate_present.yfilter)) leaf_name_data.push_back(is_atomic_aggregate_present.get_name_leafdata());
    if (is_aggregator_present.is_set || is_set(is_aggregator_present.yfilter)) leaf_name_data.push_back(is_aggregator_present.get_name_leafdata());
    if (is_origin_present.is_set || is_set(is_origin_present.yfilter)) leaf_name_data.push_back(is_origin_present.get_name_leafdata());
    if (is_as_path_present.is_set || is_set(is_as_path_present.yfilter)) leaf_name_data.push_back(is_as_path_present.get_name_leafdata());
    if (is_community_present.is_set || is_set(is_community_present.yfilter)) leaf_name_data.push_back(is_community_present.get_name_leafdata());
    if (is_extended_community_present.is_set || is_set(is_extended_community_present.yfilter)) leaf_name_data.push_back(is_extended_community_present.get_name_leafdata());
    if (is_ssa_present.is_set || is_set(is_ssa_present.yfilter)) leaf_name_data.push_back(is_ssa_present.get_name_leafdata());
    if (is_connector_present.is_set || is_set(is_connector_present.yfilter)) leaf_name_data.push_back(is_connector_present.get_name_leafdata());
    if (is_pmsi_present.is_set || is_set(is_pmsi_present.yfilter)) leaf_name_data.push_back(is_pmsi_present.get_name_leafdata());
    if (is_pppmp_present.is_set || is_set(is_pppmp_present.yfilter)) leaf_name_data.push_back(is_pppmp_present.get_name_leafdata());
    if (is_aigp_present.is_set || is_set(is_aigp_present.yfilter)) leaf_name_data.push_back(is_aigp_present.get_name_leafdata());
    if (is_pe_distinguisher_label_present.is_set || is_set(is_pe_distinguisher_label_present.yfilter)) leaf_name_data.push_back(is_pe_distinguisher_label_present.get_name_leafdata());
    if (is_ls_attribute_present.is_set || is_set(is_ls_attribute_present.yfilter)) leaf_name_data.push_back(is_ls_attribute_present.get_name_leafdata());
    if (is_label_index_present.is_set || is_set(is_label_index_present.yfilter)) leaf_name_data.push_back(is_label_index_present.get_name_leafdata());
    if (neighbor_as.is_set || is_set(neighbor_as.yfilter)) leaf_name_data.push_back(neighbor_as.get_name_leafdata());
    if (aggregator_as.is_set || is_set(aggregator_as.yfilter)) leaf_name_data.push_back(aggregator_as.get_name_leafdata());
    if (aggregator_address.is_set || is_set(aggregator_address.yfilter)) leaf_name_data.push_back(aggregator_address.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (local_preference.is_set || is_set(local_preference.yfilter)) leaf_name_data.push_back(local_preference.get_name_leafdata());
    if (origin.is_set || is_set(origin.yfilter)) leaf_name_data.push_back(origin.get_name_leafdata());
    if (as_path.is_set || is_set(as_path.yfilter)) leaf_name_data.push_back(as_path.get_name_leafdata());
    if (extended_community_flags.is_set || is_set(extended_community_flags.yfilter)) leaf_name_data.push_back(extended_community_flags.get_name_leafdata());
    if (originator.is_set || is_set(originator.yfilter)) leaf_name_data.push_back(originator.get_name_leafdata());
    if (l2tpv3_session_id.is_set || is_set(l2tpv3_session_id.yfilter)) leaf_name_data.push_back(l2tpv3_session_id.get_name_leafdata());
    if (connector_type.is_set || is_set(connector_type.yfilter)) leaf_name_data.push_back(connector_type.get_name_leafdata());
    if (aigp_metric_value.is_set || is_set(aigp_metric_value.yfilter)) leaf_name_data.push_back(aigp_metric_value.get_name_leafdata());
    if (pmsi_type.is_set || is_set(pmsi_type.yfilter)) leaf_name_data.push_back(pmsi_type.get_name_leafdata());
    if (pmsi_flags.is_set || is_set(pmsi_flags.yfilter)) leaf_name_data.push_back(pmsi_flags.get_name_leafdata());
    if (pmsi_label.is_set || is_set(pmsi_label.yfilter)) leaf_name_data.push_back(pmsi_label.get_name_leafdata());
    if (ppm_pvalue.is_set || is_set(ppm_pvalue.yfilter)) leaf_name_data.push_back(ppm_pvalue.get_name_leafdata());
    if (is_large_community_present.is_set || is_set(is_large_community_present.yfilter)) leaf_name_data.push_back(is_large_community_present.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel-encap")
    {
        if(tunnel_encap == nullptr)
        {
            tunnel_encap = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap>();
        }
        return tunnel_encap;
    }

    if(child_yang_name == "community")
    {
        for(auto const & c : community)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::Community>();
        c->parent = this;
        community.push_back(c);
        return c;
    }

    if(child_yang_name == "extended-community")
    {
        for(auto const & c : extended_community)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity>();
        c->parent = this;
        extended_community.push_back(c);
        return c;
    }

    if(child_yang_name == "unknown-attribute")
    {
        for(auto const & c : unknown_attribute)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::UnknownAttribute>();
        c->parent = this;
        unknown_attribute.push_back(c);
        return c;
    }

    if(child_yang_name == "cluster")
    {
        for(auto const & c : cluster)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::Cluster>();
        c->parent = this;
        cluster.push_back(c);
        return c;
    }

    if(child_yang_name == "l2tpv3-cookie")
    {
        for(auto const & c : l2tpv3_cookie)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::L2Tpv3Cookie>();
        c->parent = this;
        l2tpv3_cookie.push_back(c);
        return c;
    }

    if(child_yang_name == "connector-value")
    {
        for(auto const & c : connector_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::ConnectorValue>();
        c->parent = this;
        connector_value.push_back(c);
        return c;
    }

    if(child_yang_name == "pmsi-value")
    {
        for(auto const & c : pmsi_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::PmsiValue>();
        c->parent = this;
        pmsi_value.push_back(c);
        return c;
    }

    if(child_yang_name == "ls-attr")
    {
        for(auto const & c : ls_attr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::LsAttr>();
        c->parent = this;
        ls_attr.push_back(c);
        return c;
    }

    if(child_yang_name == "label-index-attr")
    {
        for(auto const & c : label_index_attr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::LabelIndexAttr>();
        c->parent = this;
        label_index_attr.push_back(c);
        return c;
    }

    if(child_yang_name == "pe-distinguisher-label")
    {
        for(auto const & c : pe_distinguisher_label)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel>();
        c->parent = this;
        pe_distinguisher_label.push_back(c);
        return c;
    }

    if(child_yang_name == "large-community")
    {
        for(auto const & c : large_community)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::LargeCommunity>();
        c->parent = this;
        large_community.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tunnel_encap != nullptr)
    {
        children["tunnel-encap"] = tunnel_encap;
    }

    for (auto const & c : community)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : extended_community)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : unknown_attribute)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : cluster)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : l2tpv3_cookie)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : connector_value)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : pmsi_value)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ls_attr)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : label_index_attr)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : pe_distinguisher_label)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : large_community)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-metric-present")
    {
        is_metric_present = value;
        is_metric_present.value_namespace = name_space;
        is_metric_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-local-pref-present")
    {
        is_local_pref_present = value;
        is_local_pref_present.value_namespace = name_space;
        is_local_pref_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-atomic-aggregate-present")
    {
        is_atomic_aggregate_present = value;
        is_atomic_aggregate_present.value_namespace = name_space;
        is_atomic_aggregate_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-aggregator-present")
    {
        is_aggregator_present = value;
        is_aggregator_present.value_namespace = name_space;
        is_aggregator_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-origin-present")
    {
        is_origin_present = value;
        is_origin_present.value_namespace = name_space;
        is_origin_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-as-path-present")
    {
        is_as_path_present = value;
        is_as_path_present.value_namespace = name_space;
        is_as_path_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-community-present")
    {
        is_community_present = value;
        is_community_present.value_namespace = name_space;
        is_community_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-extended-community-present")
    {
        is_extended_community_present = value;
        is_extended_community_present.value_namespace = name_space;
        is_extended_community_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ssa-present")
    {
        is_ssa_present = value;
        is_ssa_present.value_namespace = name_space;
        is_ssa_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-connector-present")
    {
        is_connector_present = value;
        is_connector_present.value_namespace = name_space;
        is_connector_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pmsi-present")
    {
        is_pmsi_present = value;
        is_pmsi_present.value_namespace = name_space;
        is_pmsi_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pppmp-present")
    {
        is_pppmp_present = value;
        is_pppmp_present.value_namespace = name_space;
        is_pppmp_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-aigp-present")
    {
        is_aigp_present = value;
        is_aigp_present.value_namespace = name_space;
        is_aigp_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pe-distinguisher-label-present")
    {
        is_pe_distinguisher_label_present = value;
        is_pe_distinguisher_label_present.value_namespace = name_space;
        is_pe_distinguisher_label_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ls-attribute-present")
    {
        is_ls_attribute_present = value;
        is_ls_attribute_present.value_namespace = name_space;
        is_ls_attribute_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-label-index-present")
    {
        is_label_index_present = value;
        is_label_index_present.value_namespace = name_space;
        is_label_index_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-as")
    {
        neighbor_as = value;
        neighbor_as.value_namespace = name_space;
        neighbor_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggregator-as")
    {
        aggregator_as = value;
        aggregator_as.value_namespace = name_space;
        aggregator_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggregator-address")
    {
        aggregator_address = value;
        aggregator_address.value_namespace = name_space;
        aggregator_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-preference")
    {
        local_preference = value;
        local_preference.value_namespace = name_space;
        local_preference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin")
    {
        origin = value;
        origin.value_namespace = name_space;
        origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-path")
    {
        as_path = value;
        as_path.value_namespace = name_space;
        as_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-community-flags")
    {
        extended_community_flags = value;
        extended_community_flags.value_namespace = name_space;
        extended_community_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "originator")
    {
        originator = value;
        originator.value_namespace = name_space;
        originator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2tpv3-session-id")
    {
        l2tpv3_session_id = value;
        l2tpv3_session_id.value_namespace = name_space;
        l2tpv3_session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connector-type")
    {
        connector_type = value;
        connector_type.value_namespace = name_space;
        connector_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aigp-metric-value")
    {
        aigp_metric_value = value;
        aigp_metric_value.value_namespace = name_space;
        aigp_metric_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pmsi-type")
    {
        pmsi_type = value;
        pmsi_type.value_namespace = name_space;
        pmsi_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pmsi-flags")
    {
        pmsi_flags = value;
        pmsi_flags.value_namespace = name_space;
        pmsi_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pmsi-label")
    {
        pmsi_label = value;
        pmsi_label.value_namespace = name_space;
        pmsi_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ppm-pvalue")
    {
        ppm_pvalue = value;
        ppm_pvalue.value_namespace = name_space;
        ppm_pvalue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-large-community-present")
    {
        is_large_community_present = value;
        is_large_community_present.value_namespace = name_space;
        is_large_community_present.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-metric-present")
    {
        is_metric_present.yfilter = yfilter;
    }
    if(value_path == "is-local-pref-present")
    {
        is_local_pref_present.yfilter = yfilter;
    }
    if(value_path == "is-atomic-aggregate-present")
    {
        is_atomic_aggregate_present.yfilter = yfilter;
    }
    if(value_path == "is-aggregator-present")
    {
        is_aggregator_present.yfilter = yfilter;
    }
    if(value_path == "is-origin-present")
    {
        is_origin_present.yfilter = yfilter;
    }
    if(value_path == "is-as-path-present")
    {
        is_as_path_present.yfilter = yfilter;
    }
    if(value_path == "is-community-present")
    {
        is_community_present.yfilter = yfilter;
    }
    if(value_path == "is-extended-community-present")
    {
        is_extended_community_present.yfilter = yfilter;
    }
    if(value_path == "is-ssa-present")
    {
        is_ssa_present.yfilter = yfilter;
    }
    if(value_path == "is-connector-present")
    {
        is_connector_present.yfilter = yfilter;
    }
    if(value_path == "is-pmsi-present")
    {
        is_pmsi_present.yfilter = yfilter;
    }
    if(value_path == "is-pppmp-present")
    {
        is_pppmp_present.yfilter = yfilter;
    }
    if(value_path == "is-aigp-present")
    {
        is_aigp_present.yfilter = yfilter;
    }
    if(value_path == "is-pe-distinguisher-label-present")
    {
        is_pe_distinguisher_label_present.yfilter = yfilter;
    }
    if(value_path == "is-ls-attribute-present")
    {
        is_ls_attribute_present.yfilter = yfilter;
    }
    if(value_path == "is-label-index-present")
    {
        is_label_index_present.yfilter = yfilter;
    }
    if(value_path == "neighbor-as")
    {
        neighbor_as.yfilter = yfilter;
    }
    if(value_path == "aggregator-as")
    {
        aggregator_as.yfilter = yfilter;
    }
    if(value_path == "aggregator-address")
    {
        aggregator_address.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "local-preference")
    {
        local_preference.yfilter = yfilter;
    }
    if(value_path == "origin")
    {
        origin.yfilter = yfilter;
    }
    if(value_path == "as-path")
    {
        as_path.yfilter = yfilter;
    }
    if(value_path == "extended-community-flags")
    {
        extended_community_flags.yfilter = yfilter;
    }
    if(value_path == "originator")
    {
        originator.yfilter = yfilter;
    }
    if(value_path == "l2tpv3-session-id")
    {
        l2tpv3_session_id.yfilter = yfilter;
    }
    if(value_path == "connector-type")
    {
        connector_type.yfilter = yfilter;
    }
    if(value_path == "aigp-metric-value")
    {
        aigp_metric_value.yfilter = yfilter;
    }
    if(value_path == "pmsi-type")
    {
        pmsi_type.yfilter = yfilter;
    }
    if(value_path == "pmsi-flags")
    {
        pmsi_flags.yfilter = yfilter;
    }
    if(value_path == "pmsi-label")
    {
        pmsi_label.yfilter = yfilter;
    }
    if(value_path == "ppm-pvalue")
    {
        ppm_pvalue.yfilter = yfilter;
    }
    if(value_path == "is-large-community-present")
    {
        is_large_community_present.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-encap" || name == "community" || name == "extended-community" || name == "unknown-attribute" || name == "cluster" || name == "l2tpv3-cookie" || name == "connector-value" || name == "pmsi-value" || name == "ls-attr" || name == "label-index-attr" || name == "pe-distinguisher-label" || name == "large-community" || name == "is-metric-present" || name == "is-local-pref-present" || name == "is-atomic-aggregate-present" || name == "is-aggregator-present" || name == "is-origin-present" || name == "is-as-path-present" || name == "is-community-present" || name == "is-extended-community-present" || name == "is-ssa-present" || name == "is-connector-present" || name == "is-pmsi-present" || name == "is-pppmp-present" || name == "is-aigp-present" || name == "is-pe-distinguisher-label-present" || name == "is-ls-attribute-present" || name == "is-label-index-present" || name == "neighbor-as" || name == "aggregator-as" || name == "aggregator-address" || name == "metric" || name == "local-preference" || name == "origin" || name == "as-path" || name == "extended-community-flags" || name == "originator" || name == "l2tpv3-session-id" || name == "connector-type" || name == "aigp-metric-value" || name == "pmsi-type" || name == "pmsi-flags" || name == "pmsi-label" || name == "ppm-pvalue" || name == "is-large-community-present")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::TunnelEncap()
    :
    sr_policy(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy>())
{
    sr_policy->parent = this;

    yang_name = "tunnel-encap"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::~TunnelEncap()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::has_data() const
{
    return (sr_policy !=  nullptr && sr_policy->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::has_operation() const
{
    return is_set(yfilter)
	|| (sr_policy !=  nullptr && sr_policy->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-encap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-policy")
    {
        if(sr_policy == nullptr)
        {
            sr_policy = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy>();
        }
        return sr_policy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sr_policy != nullptr)
    {
        children["sr-policy"] = sr_policy;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-policy")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SrPolicy()
    :
    tunnel_encap_type{YType::uint16, "tunnel-encap-type"},
    preference{YType::uint32, "preference"},
    state{YType::boolean, "state"},
    request_state{YType::enumeration, "request-state"}
    	,
    binding_sid(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::BindingSid>())
	,allocated_binding_sid(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid>())
{
    binding_sid->parent = this;
    allocated_binding_sid->parent = this;

    yang_name = "sr-policy"; yang_parent_name = "tunnel-encap"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::~SrPolicy()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::has_data() const
{
    for (std::size_t index=0; index<segment_list.size(); index++)
    {
        if(segment_list[index]->has_data())
            return true;
    }
    return tunnel_encap_type.is_set
	|| preference.is_set
	|| state.is_set
	|| request_state.is_set
	|| (binding_sid !=  nullptr && binding_sid->has_data())
	|| (allocated_binding_sid !=  nullptr && allocated_binding_sid->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::has_operation() const
{
    for (std::size_t index=0; index<segment_list.size(); index++)
    {
        if(segment_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(tunnel_encap_type.yfilter)
	|| ydk::is_set(preference.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(request_state.yfilter)
	|| (binding_sid !=  nullptr && binding_sid->has_operation())
	|| (allocated_binding_sid !=  nullptr && allocated_binding_sid->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_encap_type.is_set || is_set(tunnel_encap_type.yfilter)) leaf_name_data.push_back(tunnel_encap_type.get_name_leafdata());
    if (preference.is_set || is_set(preference.yfilter)) leaf_name_data.push_back(preference.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (request_state.is_set || is_set(request_state.yfilter)) leaf_name_data.push_back(request_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "binding-sid")
    {
        if(binding_sid == nullptr)
        {
            binding_sid = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::BindingSid>();
        }
        return binding_sid;
    }

    if(child_yang_name == "allocated-binding-sid")
    {
        if(allocated_binding_sid == nullptr)
        {
            allocated_binding_sid = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid>();
        }
        return allocated_binding_sid;
    }

    if(child_yang_name == "segment-list")
    {
        for(auto const & c : segment_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList>();
        c->parent = this;
        segment_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(binding_sid != nullptr)
    {
        children["binding-sid"] = binding_sid;
    }

    if(allocated_binding_sid != nullptr)
    {
        children["allocated-binding-sid"] = allocated_binding_sid;
    }

    for (auto const & c : segment_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-encap-type")
    {
        tunnel_encap_type = value;
        tunnel_encap_type.value_namespace = name_space;
        tunnel_encap_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preference")
    {
        preference = value;
        preference.value_namespace = name_space;
        preference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-state")
    {
        request_state = value;
        request_state.value_namespace = name_space;
        request_state.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-encap-type")
    {
        tunnel_encap_type.yfilter = yfilter;
    }
    if(value_path == "preference")
    {
        preference.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "request-state")
    {
        request_state.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "binding-sid" || name == "allocated-binding-sid" || name == "segment-list" || name == "tunnel-encap-type" || name == "preference" || name == "state" || name == "request-state")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::BindingSid::BindingSid()
    :
    type{YType::enumeration, "type"},
    label{YType::uint32, "label"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "binding-sid"; yang_parent_name = "sr-policy"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::BindingSid::~BindingSid()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::BindingSid::has_data() const
{
    return type.is_set
	|| label.is_set
	|| ipv6_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::BindingSid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::BindingSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::BindingSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::BindingSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::BindingSid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::BindingSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::BindingSid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::BindingSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "label" || name == "ipv6-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::AllocatedBindingSid()
    :
    type{YType::enumeration, "type"},
    label{YType::uint32, "label"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "allocated-binding-sid"; yang_parent_name = "sr-policy"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::~AllocatedBindingSid()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::has_data() const
{
    return type.is_set
	|| label.is_set
	|| ipv6_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allocated-binding-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "label" || name == "ipv6-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::SegmentList()
    :
    weight{YType::uint8, "weight"}
{

    yang_name = "segment-list"; yang_parent_name = "sr-policy"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::~SegmentList()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::has_data() const
{
    for (std::size_t index=0; index<segment.size(); index++)
    {
        if(segment[index]->has_data())
            return true;
    }
    return weight.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::has_operation() const
{
    for (std::size_t index=0; index<segment.size(); index++)
    {
        if(segment[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "segment")
    {
        for(auto const & c : segment)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment>();
        c->parent = this;
        segment.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : segment)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "segment" || name == "weight")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::Segment()
    :
    type{YType::enumeration, "type"},
    label{YType::uint32, "label"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "segment"; yang_parent_name = "segment-list"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::~Segment()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::has_data() const
{
    return type.is_set
	|| label.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
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

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
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

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "label" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::Community::Community()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "community"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::Community::~Community()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::Community::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::Community::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::Community::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::Community::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::Community::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::Community::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::Community::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::Community::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::Community::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity::ExtendedCommunity()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "extended-community"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity::~ExtendedCommunity()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::UnknownAttribute::UnknownAttribute()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "unknown-attribute"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::UnknownAttribute::~UnknownAttribute()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::UnknownAttribute::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::UnknownAttribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::UnknownAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-attribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::UnknownAttribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::UnknownAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::UnknownAttribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::UnknownAttribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::UnknownAttribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::UnknownAttribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::Cluster::Cluster()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "cluster"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::Cluster::~Cluster()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::Cluster::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::Cluster::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::Cluster::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cluster";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::Cluster::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::Cluster::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::Cluster::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::Cluster::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::Cluster::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::Cluster::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::L2Tpv3Cookie::L2Tpv3Cookie()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "l2tpv3-cookie"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::L2Tpv3Cookie::~L2Tpv3Cookie()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::L2Tpv3Cookie::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::L2Tpv3Cookie::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::L2Tpv3Cookie::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tpv3-cookie";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::L2Tpv3Cookie::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::L2Tpv3Cookie::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::L2Tpv3Cookie::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::L2Tpv3Cookie::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::L2Tpv3Cookie::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::L2Tpv3Cookie::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::ConnectorValue::ConnectorValue()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "connector-value"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::ConnectorValue::~ConnectorValue()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::ConnectorValue::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::ConnectorValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::ConnectorValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connector-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::ConnectorValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::ConnectorValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::ConnectorValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::ConnectorValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::ConnectorValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::ConnectorValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::PmsiValue::PmsiValue()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "pmsi-value"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::PmsiValue::~PmsiValue()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::PmsiValue::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::PmsiValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::PmsiValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmsi-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::PmsiValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::PmsiValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::PmsiValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::PmsiValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::PmsiValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::PmsiValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::LsAttr::LsAttr()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "ls-attr"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::LsAttr::~LsAttr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::LsAttr::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::LsAttr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::LsAttr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ls-attr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::LsAttr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::LsAttr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::LsAttr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::LsAttr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::LsAttr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::LsAttr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::LabelIndexAttr::LabelIndexAttr()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "label-index-attr"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::LabelIndexAttr::~LabelIndexAttr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::LabelIndexAttr::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::LabelIndexAttr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::LabelIndexAttr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-index-attr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::LabelIndexAttr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::LabelIndexAttr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::LabelIndexAttr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::LabelIndexAttr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::LabelIndexAttr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::LabelIndexAttr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel::PeDistinguisherLabel()
    :
    pe_address{YType::str, "pe-address"},
    label{YType::uint32, "label"}
{

    yang_name = "pe-distinguisher-label"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel::~PeDistinguisherLabel()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel::has_data() const
{
    return pe_address.is_set
	|| label.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pe_address.yfilter)
	|| ydk::is_set(label.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pe-distinguisher-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pe_address.is_set || is_set(pe_address.yfilter)) leaf_name_data.push_back(pe_address.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pe-address")
    {
        pe_address = value;
        pe_address.value_namespace = name_space;
        pe_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pe-address")
    {
        pe_address.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pe-address" || name == "label")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::LargeCommunity::LargeCommunity()
    :
    global_admin{YType::uint32, "global-admin"},
    local_data1{YType::uint32, "local-data1"},
    local_data2{YType::uint32, "local-data2"}
{

    yang_name = "large-community"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::LargeCommunity::~LargeCommunity()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::LargeCommunity::has_data() const
{
    return global_admin.is_set
	|| local_data1.is_set
	|| local_data2.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::LargeCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(global_admin.yfilter)
	|| ydk::is_set(local_data1.yfilter)
	|| ydk::is_set(local_data2.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::LargeCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "large-community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::LargeCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (global_admin.is_set || is_set(global_admin.yfilter)) leaf_name_data.push_back(global_admin.get_name_leafdata());
    if (local_data1.is_set || is_set(local_data1.yfilter)) leaf_name_data.push_back(local_data1.get_name_leafdata());
    if (local_data2.is_set || is_set(local_data2.yfilter)) leaf_name_data.push_back(local_data2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::LargeCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::LargeCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::LargeCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "global-admin")
    {
        global_admin = value;
        global_admin.value_namespace = name_space;
        global_admin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-data1")
    {
        local_data1 = value;
        local_data1.value_namespace = name_space;
        local_data1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-data2")
    {
        local_data2 = value;
        local_data2.value_namespace = name_space;
        local_data2.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::LargeCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "global-admin")
    {
        global_admin.yfilter = yfilter;
    }
    if(value_path == "local-data1")
    {
        local_data1.yfilter = yfilter;
    }
    if(value_path == "local-data2")
    {
        local_data2.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::LargeCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global-admin" || name == "local-data1" || name == "local-data2")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RnhAddr::RnhAddr()
    :
    len{YType::enumeration, "len"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"},
    mac_address{YType::str, "mac-address"}
{

    yang_name = "rnh-addr"; yang_parent_name = "attributes-after-policy-in"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RnhAddr::~RnhAddr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RnhAddr::has_data() const
{
    return len.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set
	|| mac_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RnhAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(len.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(mac_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RnhAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rnh-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RnhAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (len.is_set || is_set(len.yfilter)) leaf_name_data.push_back(len.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RnhAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RnhAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RnhAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "len")
    {
        len = value;
        len.value_namespace = name_space;
        len.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RnhAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "len")
    {
        len.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RnhAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "len" || name == "ipv4-address" || name == "ipv6-address" || name == "mac-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::RibrnhIp()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4_mdt_address{YType::str, "ipv4-mdt-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"}
    	,
    l2vpn_vpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::L2VpnVplsAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::L2VpnMspwAddress>())
	,ipv4_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress>())
{
    l2vpn_vpls_address->parent = this;
    l2vpn_mspw_address->parent = this;
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;

    yang_name = "ribrnh-ip"; yang_parent_name = "attributes-after-policy-in"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::~RibrnhIp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4_mdt_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| rt_constraint_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv4mvpn_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_data())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_mcast_address.yfilter)
	|| ydk::is_set(ipv4_label_address.yfilter)
	|| ydk::is_set(ipv4_tunnel_address.yfilter)
	|| ydk::is_set(ipv4_mdt_address.yfilter)
	|| ydk::is_set(ipv4vpn_address.yfilter)
	|| ydk::is_set(ipv4vpna_mcastddress.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(ipv6_mcast_address.yfilter)
	|| ydk::is_set(ipv6_label_address.yfilter)
	|| ydk::is_set(ipv6vpn_address.yfilter)
	|| ydk::is_set(ipv6vpn_mcast_address.yfilter)
	|| ydk::is_set(rt_constraint_address.yfilter)
	|| ydk::is_set(ipv6mvpn_address.yfilter)
	|| ydk::is_set(ipv4mvpn_address.yfilter)
	|| ydk::is_set(l2vpn_evpn_address.yfilter)
	|| ydk::is_set(ls_ls_address.yfilter)
	|| ydk::is_set(ipv4_flowspec_address.yfilter)
	|| ydk::is_set(ipv6_flowspec_address.yfilter)
	|| ydk::is_set(ipv4vpn_flowspec_address.yfilter)
	|| ydk::is_set(ipv6vpn_flowspec_address.yfilter)
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_operation())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ribrnh-ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.yfilter)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.yfilter)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.yfilter)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4_mdt_address.is_set || is_set(ipv4_mdt_address.yfilter)) leaf_name_data.push_back(ipv4_mdt_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.yfilter)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.yfilter)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.yfilter)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.yfilter)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.yfilter)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.yfilter)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.yfilter)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.yfilter)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.yfilter)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.yfilter)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.yfilter)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(l2vpn_vpls_address != nullptr)
    {
        children["l2vpn-vpls-address"] = l2vpn_vpls_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(ipv4_sr_policy_address != nullptr)
    {
        children["ipv4-sr-policy-address"] = ipv4_sr_policy_address;
    }

    if(ipv6_sr_policy_address != nullptr)
    {
        children["ipv6-sr-policy-address"] = ipv6_sr_policy_address;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
        ipv4_mcast_address.value_namespace = name_space;
        ipv4_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
        ipv4_label_address.value_namespace = name_space;
        ipv4_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
        ipv4_tunnel_address.value_namespace = name_space;
        ipv4_tunnel_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address = value;
        ipv4_mdt_address.value_namespace = name_space;
        ipv4_mdt_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
        ipv4vpn_address.value_namespace = name_space;
        ipv4vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
        ipv4vpna_mcastddress.value_namespace = name_space;
        ipv4vpna_mcastddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
        ipv6_mcast_address.value_namespace = name_space;
        ipv6_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
        ipv6_label_address.value_namespace = name_space;
        ipv6_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
        ipv6vpn_address.value_namespace = name_space;
        ipv6vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
        ipv6vpn_mcast_address.value_namespace = name_space;
        ipv6vpn_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
        rt_constraint_address.value_namespace = name_space;
        rt_constraint_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
        ipv6mvpn_address.value_namespace = name_space;
        ipv6mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
        ipv4mvpn_address.value_namespace = name_space;
        ipv4mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
        l2vpn_evpn_address.value_namespace = name_space;
        l2vpn_evpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
        ls_ls_address.value_namespace = name_space;
        ls_ls_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
        ipv4_flowspec_address.value_namespace = name_space;
        ipv4_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
        ipv6_flowspec_address.value_namespace = name_space;
        ipv6_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
        ipv4vpn_flowspec_address.value_namespace = name_space;
        ipv4vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
        ipv6vpn_flowspec_address.value_namespace = name_space;
        ipv6vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address.yfilter = yfilter;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address.yfilter = yfilter;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address.yfilter = yfilter;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address.yfilter = yfilter;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-vpls-address" || name == "l2vpn-mspw-address" || name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-mcast-address" || name == "ipv4-label-address" || name == "ipv4-tunnel-address" || name == "ipv4-mdt-address" || name == "ipv4vpn-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-mcast-address" || name == "ipv6-label-address" || name == "ipv6vpn-address" || name == "ipv6vpn-mcast-address" || name == "rt-constraint-address" || name == "ipv6mvpn-address" || name == "ipv4mvpn-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "ipv4-flowspec-address" || name == "ipv6-flowspec-address" || name == "ipv4vpn-flowspec-address" || name == "ipv6vpn-flowspec-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "ribrnh-ip"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "ribrnh-ip"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "ribrnh-ip"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "ribrnh-ip"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetworks()
{

    yang_name = "sourced-networks"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::~SourcedNetworks()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::has_data() const
{
    for (std::size_t index=0; index<sourced_network.size(); index++)
    {
        if(sourced_network[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::has_operation() const
{
    for (std::size_t index=0; index<sourced_network.size(); index++)
    {
        if(sourced_network[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sourced-networks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sourced-network")
    {
        for(auto const & c : sourced_network)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork>();
        c->parent = this;
        sourced_network.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sourced_network)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sourced-network")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedNetwork()
    :
    network{YType::str, "network"},
    af_name{YType::enumeration, "af-name"},
    is_backdoor{YType::boolean, "is-backdoor"}
    	,
    sourced_prefix(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix>())
{
    sourced_prefix->parent = this;

    yang_name = "sourced-network"; yang_parent_name = "sourced-networks"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::~SourcedNetwork()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::has_data() const
{
    return network.is_set
	|| af_name.is_set
	|| is_backdoor.is_set
	|| (sourced_prefix !=  nullptr && sourced_prefix->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(network.yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(is_backdoor.yfilter)
	|| (sourced_prefix !=  nullptr && sourced_prefix->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sourced-network" <<"[network='" <<network <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (network.is_set || is_set(network.yfilter)) leaf_name_data.push_back(network.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (is_backdoor.is_set || is_set(is_backdoor.yfilter)) leaf_name_data.push_back(is_backdoor.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sourced-prefix")
    {
        if(sourced_prefix == nullptr)
        {
            sourced_prefix = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix>();
        }
        return sourced_prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sourced_prefix != nullptr)
    {
        children["sourced-prefix"] = sourced_prefix;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "network")
    {
        network = value;
        network.value_namespace = name_space;
        network.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-backdoor")
    {
        is_backdoor = value;
        is_backdoor.value_namespace = name_space;
        is_backdoor.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "network")
    {
        network.yfilter = yfilter;
    }
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "is-backdoor")
    {
        is_backdoor.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sourced-prefix" || name == "network" || name == "af-name" || name == "is-backdoor")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::SourcedPrefix()
    :
    prefix_length{YType::uint16, "prefix-length"}
    	,
    prefix(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix>())
{
    prefix->parent = this;

    yang_name = "sourced-prefix"; yang_parent_name = "sourced-network"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::~SourcedPrefix()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::has_data() const
{
    return prefix_length.is_set
	|| (prefix !=  nullptr && prefix->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| (prefix !=  nullptr && prefix->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sourced-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix>();
        }
        return prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(prefix != nullptr)
    {
        children["prefix"] = prefix;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::Prefix()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4_mdt_address{YType::str, "ipv4-mdt-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"}
    	,
    l2vpn_vpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::L2VpnVplsAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::L2VpnMspwAddress>())
	,ipv4_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::Ipv6SrPolicyAddress>())
{
    l2vpn_vpls_address->parent = this;
    l2vpn_mspw_address->parent = this;
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;

    yang_name = "prefix"; yang_parent_name = "sourced-prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::~Prefix()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4_mdt_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| rt_constraint_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv4mvpn_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_data())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_mcast_address.yfilter)
	|| ydk::is_set(ipv4_label_address.yfilter)
	|| ydk::is_set(ipv4_tunnel_address.yfilter)
	|| ydk::is_set(ipv4_mdt_address.yfilter)
	|| ydk::is_set(ipv4vpn_address.yfilter)
	|| ydk::is_set(ipv4vpna_mcastddress.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(ipv6_mcast_address.yfilter)
	|| ydk::is_set(ipv6_label_address.yfilter)
	|| ydk::is_set(ipv6vpn_address.yfilter)
	|| ydk::is_set(ipv6vpn_mcast_address.yfilter)
	|| ydk::is_set(rt_constraint_address.yfilter)
	|| ydk::is_set(ipv6mvpn_address.yfilter)
	|| ydk::is_set(ipv4mvpn_address.yfilter)
	|| ydk::is_set(l2vpn_evpn_address.yfilter)
	|| ydk::is_set(ls_ls_address.yfilter)
	|| ydk::is_set(ipv4_flowspec_address.yfilter)
	|| ydk::is_set(ipv6_flowspec_address.yfilter)
	|| ydk::is_set(ipv4vpn_flowspec_address.yfilter)
	|| ydk::is_set(ipv6vpn_flowspec_address.yfilter)
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_operation())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.yfilter)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.yfilter)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.yfilter)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4_mdt_address.is_set || is_set(ipv4_mdt_address.yfilter)) leaf_name_data.push_back(ipv4_mdt_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.yfilter)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.yfilter)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.yfilter)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.yfilter)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.yfilter)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.yfilter)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.yfilter)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.yfilter)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.yfilter)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.yfilter)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.yfilter)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(l2vpn_vpls_address != nullptr)
    {
        children["l2vpn-vpls-address"] = l2vpn_vpls_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(ipv4_sr_policy_address != nullptr)
    {
        children["ipv4-sr-policy-address"] = ipv4_sr_policy_address;
    }

    if(ipv6_sr_policy_address != nullptr)
    {
        children["ipv6-sr-policy-address"] = ipv6_sr_policy_address;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
        ipv4_mcast_address.value_namespace = name_space;
        ipv4_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
        ipv4_label_address.value_namespace = name_space;
        ipv4_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
        ipv4_tunnel_address.value_namespace = name_space;
        ipv4_tunnel_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address = value;
        ipv4_mdt_address.value_namespace = name_space;
        ipv4_mdt_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
        ipv4vpn_address.value_namespace = name_space;
        ipv4vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
        ipv4vpna_mcastddress.value_namespace = name_space;
        ipv4vpna_mcastddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
        ipv6_mcast_address.value_namespace = name_space;
        ipv6_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
        ipv6_label_address.value_namespace = name_space;
        ipv6_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
        ipv6vpn_address.value_namespace = name_space;
        ipv6vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
        ipv6vpn_mcast_address.value_namespace = name_space;
        ipv6vpn_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
        rt_constraint_address.value_namespace = name_space;
        rt_constraint_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
        ipv6mvpn_address.value_namespace = name_space;
        ipv6mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
        ipv4mvpn_address.value_namespace = name_space;
        ipv4mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
        l2vpn_evpn_address.value_namespace = name_space;
        l2vpn_evpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
        ls_ls_address.value_namespace = name_space;
        ls_ls_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
        ipv4_flowspec_address.value_namespace = name_space;
        ipv4_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
        ipv6_flowspec_address.value_namespace = name_space;
        ipv6_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
        ipv4vpn_flowspec_address.value_namespace = name_space;
        ipv4vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
        ipv6vpn_flowspec_address.value_namespace = name_space;
        ipv6vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address.yfilter = yfilter;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address.yfilter = yfilter;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address.yfilter = yfilter;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address.yfilter = yfilter;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-vpls-address" || name == "l2vpn-mspw-address" || name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-mcast-address" || name == "ipv4-label-address" || name == "ipv4-tunnel-address" || name == "ipv4-mdt-address" || name == "ipv4vpn-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-mcast-address" || name == "ipv6-label-address" || name == "ipv6vpn-address" || name == "ipv6vpn-mcast-address" || name == "rt-constraint-address" || name == "ipv6mvpn-address" || name == "ipv4mvpn-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "ipv4-flowspec-address" || name == "ipv6-flowspec-address" || name == "ipv4vpn-flowspec-address" || name == "ipv6vpn-flowspec-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroups()
{

    yang_name = "update-groups"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::~UpdateGroups()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::has_data() const
{
    for (std::size_t index=0; index<update_group.size(); index++)
    {
        if(update_group[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::has_operation() const
{
    for (std::size_t index=0; index<update_group.size(); index++)
    {
        if(update_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "update-group")
    {
        for(auto const & c : update_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup>();
        c->parent = this;
        update_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : update_group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "update-group")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateGroup()
    :
    update_group_id{YType::int32, "update-group-id"},
    filter_group_id{YType::int32, "filter-group-id"},
    process_instance_id{YType::uint8, "process-instance-id"},
    session_af_name{YType::uint8, "session-af-name"},
    update_group_number{YType::uint32, "update-group-number"},
    update_group_af_name{YType::enumeration, "update-group-af-name"},
    should_send_communities{YType::boolean, "should-send-communities"},
    should_send_ext_communities{YType::boolean, "should-send-ext-communities"},
    should_send_stitching_rt{YType::boolean, "should-send-stitching-rt"},
    has_orf_receive_capability{YType::boolean, "has-orf-receive-capability"},
    is_route_reflector_client{YType::boolean, "is-route-reflector-client"},
    is_client_reflection_disabled{YType::boolean, "is-client-reflection-disabled"},
    accepts_legacy_pe_rt_route{YType::boolean, "accepts-legacy-pe-rt-route"},
    updgrp_cluster_id{YType::uint32, "updgrp-cluster-id"},
    updgrp_cluster_type{YType::uint8, "updgrp-cluster-type"},
    orr_group_name{YType::str, "orr-group-name"},
    orr_group_index{YType::uint32, "orr-group-index"},
    is_orr_root_address_configured{YType::boolean, "is-orr-root-address-configured"},
    should_remove_private_a_ss{YType::boolean, "should-remove-private-a-ss"},
    should_remove_private_as_ent_path{YType::boolean, "should-remove-private-as-ent-path"},
    use_next_hop_self{YType::boolean, "use-next-hop-self"},
    use_next_hop_unchanged_mpath{YType::boolean, "use-next-hop-unchanged-mpath"},
    is_internal_peers{YType::boolean, "is-internal-peers"},
    is_common_admin_peers{YType::boolean, "is-common-admin-peers"},
    is4_byte_as_peer{YType::boolean, "is4-byte-as-peer"},
    is_addpath_capable{YType::boolean, "is-addpath-capable"},
    is_send_mcast_attr_enabled{YType::boolean, "is-send-mcast-attr-enabled"},
    is_aigp_capable{YType::boolean, "is-aigp-capable"},
    is_aigp_cost_community_capable{YType::boolean, "is-aigp-cost-community-capable"},
    is_aigp_med_capable{YType::boolean, "is-aigp-med-capable"},
    is_llgr_capable{YType::boolean, "is-llgr-capable"},
    is_adv_capable{YType::boolean, "is-adv-capable"},
    is_adv_reorg_capable{YType::boolean, "is-adv-reorg-capable"},
    disable_native_advertisement{YType::boolean, "disable-native-advertisement"},
    disable_def_vrf_imp_advertisement{YType::boolean, "disable-def-vrf-imp-advertisement"},
    disable_vrf_re_imp_advertisement{YType::boolean, "disable-vrf-re-imp-advertisement"},
    encapsulation_type{YType::uint32, "encapsulation-type"},
    advertise_rt_type{YType::uint8, "advertise-rt-type"},
    is_directly_connected_ebgp_v6_peers{YType::boolean, "is-directly-connected-ebgp-v6-peers"},
    minimum_advertisement_interval{YType::uint32, "minimum-advertisement-interval"},
    minimum_advertisement_interval_msecs{YType::uint32, "minimum-advertisement-interval-msecs"},
    local_as{YType::uint32, "local-as"},
    route_policy_out{YType::str, "route-policy-out"},
    desync_count{YType::uint32, "desync-count"},
    subgrp_merge_count{YType::uint32, "subgrp-merge-count"},
    refresh_subgrp_count{YType::uint32, "refresh-subgrp-count"},
    updates_formatted{YType::uint32, "updates-formatted"},
    updates_replicated{YType::uint32, "updates-replicated"},
    local_as_replace_as{YType::boolean, "local-as-replace-as"},
    as_override{YType::boolean, "as-override"},
    soo_value{YType::str, "soo-value"},
    split_horizon{YType::boolean, "split-horizon"},
    is_labeled_afi_enabled{YType::boolean, "is-labeled-afi-enabled"},
    is_unlabeled_afi_enabled{YType::boolean, "is-unlabeled-afi-enabled"},
    ext_nh_encoding{YType::boolean, "ext-nh-encoding"},
    remote_as{YType::uint32, "remote-as"},
    is_adv_perm_net_capable{YType::boolean, "is-adv-perm-net-capable"},
    should_send_gshut_community{YType::boolean, "should-send-gshut-community"},
    gshut_active{YType::boolean, "gshut-active"},
    gshut_locpref_set{YType::boolean, "gshut-locpref-set"},
    gshut_locpref{YType::uint32, "gshut-locpref"},
    gshut_prepends{YType::uint8, "gshut-prepends"},
    advertise_local_labeled_route_unicast{YType::boolean, "advertise-local-labeled-route-unicast"},
    enable_label_stack{YType::boolean, "enable-label-stack"}
    	,
    performance_statistics(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::PerformanceStatistics>())
{
    performance_statistics->parent = this;

    yang_name = "update-group"; yang_parent_name = "update-groups"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::~UpdateGroup()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<update_sub_group.size(); index++)
    {
        if(update_sub_group[index]->has_data())
            return true;
    }
    return update_group_id.is_set
	|| filter_group_id.is_set
	|| process_instance_id.is_set
	|| session_af_name.is_set
	|| update_group_number.is_set
	|| update_group_af_name.is_set
	|| should_send_communities.is_set
	|| should_send_ext_communities.is_set
	|| should_send_stitching_rt.is_set
	|| has_orf_receive_capability.is_set
	|| is_route_reflector_client.is_set
	|| is_client_reflection_disabled.is_set
	|| accepts_legacy_pe_rt_route.is_set
	|| updgrp_cluster_id.is_set
	|| updgrp_cluster_type.is_set
	|| orr_group_name.is_set
	|| orr_group_index.is_set
	|| is_orr_root_address_configured.is_set
	|| should_remove_private_a_ss.is_set
	|| should_remove_private_as_ent_path.is_set
	|| use_next_hop_self.is_set
	|| use_next_hop_unchanged_mpath.is_set
	|| is_internal_peers.is_set
	|| is_common_admin_peers.is_set
	|| is4_byte_as_peer.is_set
	|| is_addpath_capable.is_set
	|| is_send_mcast_attr_enabled.is_set
	|| is_aigp_capable.is_set
	|| is_aigp_cost_community_capable.is_set
	|| is_aigp_med_capable.is_set
	|| is_llgr_capable.is_set
	|| is_adv_capable.is_set
	|| is_adv_reorg_capable.is_set
	|| disable_native_advertisement.is_set
	|| disable_def_vrf_imp_advertisement.is_set
	|| disable_vrf_re_imp_advertisement.is_set
	|| encapsulation_type.is_set
	|| advertise_rt_type.is_set
	|| is_directly_connected_ebgp_v6_peers.is_set
	|| minimum_advertisement_interval.is_set
	|| minimum_advertisement_interval_msecs.is_set
	|| local_as.is_set
	|| route_policy_out.is_set
	|| desync_count.is_set
	|| subgrp_merge_count.is_set
	|| refresh_subgrp_count.is_set
	|| updates_formatted.is_set
	|| updates_replicated.is_set
	|| local_as_replace_as.is_set
	|| as_override.is_set
	|| soo_value.is_set
	|| split_horizon.is_set
	|| is_labeled_afi_enabled.is_set
	|| is_unlabeled_afi_enabled.is_set
	|| ext_nh_encoding.is_set
	|| remote_as.is_set
	|| is_adv_perm_net_capable.is_set
	|| should_send_gshut_community.is_set
	|| gshut_active.is_set
	|| gshut_locpref_set.is_set
	|| gshut_locpref.is_set
	|| gshut_prepends.is_set
	|| advertise_local_labeled_route_unicast.is_set
	|| enable_label_stack.is_set
	|| (performance_statistics !=  nullptr && performance_statistics->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<update_sub_group.size(); index++)
    {
        if(update_sub_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(update_group_id.yfilter)
	|| ydk::is_set(filter_group_id.yfilter)
	|| ydk::is_set(process_instance_id.yfilter)
	|| ydk::is_set(session_af_name.yfilter)
	|| ydk::is_set(update_group_number.yfilter)
	|| ydk::is_set(update_group_af_name.yfilter)
	|| ydk::is_set(should_send_communities.yfilter)
	|| ydk::is_set(should_send_ext_communities.yfilter)
	|| ydk::is_set(should_send_stitching_rt.yfilter)
	|| ydk::is_set(has_orf_receive_capability.yfilter)
	|| ydk::is_set(is_route_reflector_client.yfilter)
	|| ydk::is_set(is_client_reflection_disabled.yfilter)
	|| ydk::is_set(accepts_legacy_pe_rt_route.yfilter)
	|| ydk::is_set(updgrp_cluster_id.yfilter)
	|| ydk::is_set(updgrp_cluster_type.yfilter)
	|| ydk::is_set(orr_group_name.yfilter)
	|| ydk::is_set(orr_group_index.yfilter)
	|| ydk::is_set(is_orr_root_address_configured.yfilter)
	|| ydk::is_set(should_remove_private_a_ss.yfilter)
	|| ydk::is_set(should_remove_private_as_ent_path.yfilter)
	|| ydk::is_set(use_next_hop_self.yfilter)
	|| ydk::is_set(use_next_hop_unchanged_mpath.yfilter)
	|| ydk::is_set(is_internal_peers.yfilter)
	|| ydk::is_set(is_common_admin_peers.yfilter)
	|| ydk::is_set(is4_byte_as_peer.yfilter)
	|| ydk::is_set(is_addpath_capable.yfilter)
	|| ydk::is_set(is_send_mcast_attr_enabled.yfilter)
	|| ydk::is_set(is_aigp_capable.yfilter)
	|| ydk::is_set(is_aigp_cost_community_capable.yfilter)
	|| ydk::is_set(is_aigp_med_capable.yfilter)
	|| ydk::is_set(is_llgr_capable.yfilter)
	|| ydk::is_set(is_adv_capable.yfilter)
	|| ydk::is_set(is_adv_reorg_capable.yfilter)
	|| ydk::is_set(disable_native_advertisement.yfilter)
	|| ydk::is_set(disable_def_vrf_imp_advertisement.yfilter)
	|| ydk::is_set(disable_vrf_re_imp_advertisement.yfilter)
	|| ydk::is_set(encapsulation_type.yfilter)
	|| ydk::is_set(advertise_rt_type.yfilter)
	|| ydk::is_set(is_directly_connected_ebgp_v6_peers.yfilter)
	|| ydk::is_set(minimum_advertisement_interval.yfilter)
	|| ydk::is_set(minimum_advertisement_interval_msecs.yfilter)
	|| ydk::is_set(local_as.yfilter)
	|| ydk::is_set(route_policy_out.yfilter)
	|| ydk::is_set(desync_count.yfilter)
	|| ydk::is_set(subgrp_merge_count.yfilter)
	|| ydk::is_set(refresh_subgrp_count.yfilter)
	|| ydk::is_set(updates_formatted.yfilter)
	|| ydk::is_set(updates_replicated.yfilter)
	|| ydk::is_set(local_as_replace_as.yfilter)
	|| ydk::is_set(as_override.yfilter)
	|| ydk::is_set(soo_value.yfilter)
	|| ydk::is_set(split_horizon.yfilter)
	|| ydk::is_set(is_labeled_afi_enabled.yfilter)
	|| ydk::is_set(is_unlabeled_afi_enabled.yfilter)
	|| ydk::is_set(ext_nh_encoding.yfilter)
	|| ydk::is_set(remote_as.yfilter)
	|| ydk::is_set(is_adv_perm_net_capable.yfilter)
	|| ydk::is_set(should_send_gshut_community.yfilter)
	|| ydk::is_set(gshut_active.yfilter)
	|| ydk::is_set(gshut_locpref_set.yfilter)
	|| ydk::is_set(gshut_locpref.yfilter)
	|| ydk::is_set(gshut_prepends.yfilter)
	|| ydk::is_set(advertise_local_labeled_route_unicast.yfilter)
	|| ydk::is_set(enable_label_stack.yfilter)
	|| (performance_statistics !=  nullptr && performance_statistics->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (update_group_id.is_set || is_set(update_group_id.yfilter)) leaf_name_data.push_back(update_group_id.get_name_leafdata());
    if (filter_group_id.is_set || is_set(filter_group_id.yfilter)) leaf_name_data.push_back(filter_group_id.get_name_leafdata());
    if (process_instance_id.is_set || is_set(process_instance_id.yfilter)) leaf_name_data.push_back(process_instance_id.get_name_leafdata());
    if (session_af_name.is_set || is_set(session_af_name.yfilter)) leaf_name_data.push_back(session_af_name.get_name_leafdata());
    if (update_group_number.is_set || is_set(update_group_number.yfilter)) leaf_name_data.push_back(update_group_number.get_name_leafdata());
    if (update_group_af_name.is_set || is_set(update_group_af_name.yfilter)) leaf_name_data.push_back(update_group_af_name.get_name_leafdata());
    if (should_send_communities.is_set || is_set(should_send_communities.yfilter)) leaf_name_data.push_back(should_send_communities.get_name_leafdata());
    if (should_send_ext_communities.is_set || is_set(should_send_ext_communities.yfilter)) leaf_name_data.push_back(should_send_ext_communities.get_name_leafdata());
    if (should_send_stitching_rt.is_set || is_set(should_send_stitching_rt.yfilter)) leaf_name_data.push_back(should_send_stitching_rt.get_name_leafdata());
    if (has_orf_receive_capability.is_set || is_set(has_orf_receive_capability.yfilter)) leaf_name_data.push_back(has_orf_receive_capability.get_name_leafdata());
    if (is_route_reflector_client.is_set || is_set(is_route_reflector_client.yfilter)) leaf_name_data.push_back(is_route_reflector_client.get_name_leafdata());
    if (is_client_reflection_disabled.is_set || is_set(is_client_reflection_disabled.yfilter)) leaf_name_data.push_back(is_client_reflection_disabled.get_name_leafdata());
    if (accepts_legacy_pe_rt_route.is_set || is_set(accepts_legacy_pe_rt_route.yfilter)) leaf_name_data.push_back(accepts_legacy_pe_rt_route.get_name_leafdata());
    if (updgrp_cluster_id.is_set || is_set(updgrp_cluster_id.yfilter)) leaf_name_data.push_back(updgrp_cluster_id.get_name_leafdata());
    if (updgrp_cluster_type.is_set || is_set(updgrp_cluster_type.yfilter)) leaf_name_data.push_back(updgrp_cluster_type.get_name_leafdata());
    if (orr_group_name.is_set || is_set(orr_group_name.yfilter)) leaf_name_data.push_back(orr_group_name.get_name_leafdata());
    if (orr_group_index.is_set || is_set(orr_group_index.yfilter)) leaf_name_data.push_back(orr_group_index.get_name_leafdata());
    if (is_orr_root_address_configured.is_set || is_set(is_orr_root_address_configured.yfilter)) leaf_name_data.push_back(is_orr_root_address_configured.get_name_leafdata());
    if (should_remove_private_a_ss.is_set || is_set(should_remove_private_a_ss.yfilter)) leaf_name_data.push_back(should_remove_private_a_ss.get_name_leafdata());
    if (should_remove_private_as_ent_path.is_set || is_set(should_remove_private_as_ent_path.yfilter)) leaf_name_data.push_back(should_remove_private_as_ent_path.get_name_leafdata());
    if (use_next_hop_self.is_set || is_set(use_next_hop_self.yfilter)) leaf_name_data.push_back(use_next_hop_self.get_name_leafdata());
    if (use_next_hop_unchanged_mpath.is_set || is_set(use_next_hop_unchanged_mpath.yfilter)) leaf_name_data.push_back(use_next_hop_unchanged_mpath.get_name_leafdata());
    if (is_internal_peers.is_set || is_set(is_internal_peers.yfilter)) leaf_name_data.push_back(is_internal_peers.get_name_leafdata());
    if (is_common_admin_peers.is_set || is_set(is_common_admin_peers.yfilter)) leaf_name_data.push_back(is_common_admin_peers.get_name_leafdata());
    if (is4_byte_as_peer.is_set || is_set(is4_byte_as_peer.yfilter)) leaf_name_data.push_back(is4_byte_as_peer.get_name_leafdata());
    if (is_addpath_capable.is_set || is_set(is_addpath_capable.yfilter)) leaf_name_data.push_back(is_addpath_capable.get_name_leafdata());
    if (is_send_mcast_attr_enabled.is_set || is_set(is_send_mcast_attr_enabled.yfilter)) leaf_name_data.push_back(is_send_mcast_attr_enabled.get_name_leafdata());
    if (is_aigp_capable.is_set || is_set(is_aigp_capable.yfilter)) leaf_name_data.push_back(is_aigp_capable.get_name_leafdata());
    if (is_aigp_cost_community_capable.is_set || is_set(is_aigp_cost_community_capable.yfilter)) leaf_name_data.push_back(is_aigp_cost_community_capable.get_name_leafdata());
    if (is_aigp_med_capable.is_set || is_set(is_aigp_med_capable.yfilter)) leaf_name_data.push_back(is_aigp_med_capable.get_name_leafdata());
    if (is_llgr_capable.is_set || is_set(is_llgr_capable.yfilter)) leaf_name_data.push_back(is_llgr_capable.get_name_leafdata());
    if (is_adv_capable.is_set || is_set(is_adv_capable.yfilter)) leaf_name_data.push_back(is_adv_capable.get_name_leafdata());
    if (is_adv_reorg_capable.is_set || is_set(is_adv_reorg_capable.yfilter)) leaf_name_data.push_back(is_adv_reorg_capable.get_name_leafdata());
    if (disable_native_advertisement.is_set || is_set(disable_native_advertisement.yfilter)) leaf_name_data.push_back(disable_native_advertisement.get_name_leafdata());
    if (disable_def_vrf_imp_advertisement.is_set || is_set(disable_def_vrf_imp_advertisement.yfilter)) leaf_name_data.push_back(disable_def_vrf_imp_advertisement.get_name_leafdata());
    if (disable_vrf_re_imp_advertisement.is_set || is_set(disable_vrf_re_imp_advertisement.yfilter)) leaf_name_data.push_back(disable_vrf_re_imp_advertisement.get_name_leafdata());
    if (encapsulation_type.is_set || is_set(encapsulation_type.yfilter)) leaf_name_data.push_back(encapsulation_type.get_name_leafdata());
    if (advertise_rt_type.is_set || is_set(advertise_rt_type.yfilter)) leaf_name_data.push_back(advertise_rt_type.get_name_leafdata());
    if (is_directly_connected_ebgp_v6_peers.is_set || is_set(is_directly_connected_ebgp_v6_peers.yfilter)) leaf_name_data.push_back(is_directly_connected_ebgp_v6_peers.get_name_leafdata());
    if (minimum_advertisement_interval.is_set || is_set(minimum_advertisement_interval.yfilter)) leaf_name_data.push_back(minimum_advertisement_interval.get_name_leafdata());
    if (minimum_advertisement_interval_msecs.is_set || is_set(minimum_advertisement_interval_msecs.yfilter)) leaf_name_data.push_back(minimum_advertisement_interval_msecs.get_name_leafdata());
    if (local_as.is_set || is_set(local_as.yfilter)) leaf_name_data.push_back(local_as.get_name_leafdata());
    if (route_policy_out.is_set || is_set(route_policy_out.yfilter)) leaf_name_data.push_back(route_policy_out.get_name_leafdata());
    if (desync_count.is_set || is_set(desync_count.yfilter)) leaf_name_data.push_back(desync_count.get_name_leafdata());
    if (subgrp_merge_count.is_set || is_set(subgrp_merge_count.yfilter)) leaf_name_data.push_back(subgrp_merge_count.get_name_leafdata());
    if (refresh_subgrp_count.is_set || is_set(refresh_subgrp_count.yfilter)) leaf_name_data.push_back(refresh_subgrp_count.get_name_leafdata());
    if (updates_formatted.is_set || is_set(updates_formatted.yfilter)) leaf_name_data.push_back(updates_formatted.get_name_leafdata());
    if (updates_replicated.is_set || is_set(updates_replicated.yfilter)) leaf_name_data.push_back(updates_replicated.get_name_leafdata());
    if (local_as_replace_as.is_set || is_set(local_as_replace_as.yfilter)) leaf_name_data.push_back(local_as_replace_as.get_name_leafdata());
    if (as_override.is_set || is_set(as_override.yfilter)) leaf_name_data.push_back(as_override.get_name_leafdata());
    if (soo_value.is_set || is_set(soo_value.yfilter)) leaf_name_data.push_back(soo_value.get_name_leafdata());
    if (split_horizon.is_set || is_set(split_horizon.yfilter)) leaf_name_data.push_back(split_horizon.get_name_leafdata());
    if (is_labeled_afi_enabled.is_set || is_set(is_labeled_afi_enabled.yfilter)) leaf_name_data.push_back(is_labeled_afi_enabled.get_name_leafdata());
    if (is_unlabeled_afi_enabled.is_set || is_set(is_unlabeled_afi_enabled.yfilter)) leaf_name_data.push_back(is_unlabeled_afi_enabled.get_name_leafdata());
    if (ext_nh_encoding.is_set || is_set(ext_nh_encoding.yfilter)) leaf_name_data.push_back(ext_nh_encoding.get_name_leafdata());
    if (remote_as.is_set || is_set(remote_as.yfilter)) leaf_name_data.push_back(remote_as.get_name_leafdata());
    if (is_adv_perm_net_capable.is_set || is_set(is_adv_perm_net_capable.yfilter)) leaf_name_data.push_back(is_adv_perm_net_capable.get_name_leafdata());
    if (should_send_gshut_community.is_set || is_set(should_send_gshut_community.yfilter)) leaf_name_data.push_back(should_send_gshut_community.get_name_leafdata());
    if (gshut_active.is_set || is_set(gshut_active.yfilter)) leaf_name_data.push_back(gshut_active.get_name_leafdata());
    if (gshut_locpref_set.is_set || is_set(gshut_locpref_set.yfilter)) leaf_name_data.push_back(gshut_locpref_set.get_name_leafdata());
    if (gshut_locpref.is_set || is_set(gshut_locpref.yfilter)) leaf_name_data.push_back(gshut_locpref.get_name_leafdata());
    if (gshut_prepends.is_set || is_set(gshut_prepends.yfilter)) leaf_name_data.push_back(gshut_prepends.get_name_leafdata());
    if (advertise_local_labeled_route_unicast.is_set || is_set(advertise_local_labeled_route_unicast.yfilter)) leaf_name_data.push_back(advertise_local_labeled_route_unicast.get_name_leafdata());
    if (enable_label_stack.is_set || is_set(enable_label_stack.yfilter)) leaf_name_data.push_back(enable_label_stack.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "performance-statistics")
    {
        if(performance_statistics == nullptr)
        {
            performance_statistics = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::PerformanceStatistics>();
        }
        return performance_statistics;
    }

    if(child_yang_name == "neighbor")
    {
        for(auto const & c : neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    if(child_yang_name == "update-sub-group")
    {
        for(auto const & c : update_sub_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup>();
        c->parent = this;
        update_sub_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(performance_statistics != nullptr)
    {
        children["performance-statistics"] = performance_statistics;
    }

    for (auto const & c : neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : update_sub_group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "update-group-id")
    {
        update_group_id = value;
        update_group_id.value_namespace = name_space;
        update_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filter-group-id")
    {
        filter_group_id = value;
        filter_group_id.value_namespace = name_space;
        filter_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-instance-id")
    {
        process_instance_id = value;
        process_instance_id.value_namespace = name_space;
        process_instance_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-af-name")
    {
        session_af_name = value;
        session_af_name.value_namespace = name_space;
        session_af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-group-number")
    {
        update_group_number = value;
        update_group_number.value_namespace = name_space;
        update_group_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-group-af-name")
    {
        update_group_af_name = value;
        update_group_af_name.value_namespace = name_space;
        update_group_af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "should-send-communities")
    {
        should_send_communities = value;
        should_send_communities.value_namespace = name_space;
        should_send_communities.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "should-send-ext-communities")
    {
        should_send_ext_communities = value;
        should_send_ext_communities.value_namespace = name_space;
        should_send_ext_communities.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "should-send-stitching-rt")
    {
        should_send_stitching_rt = value;
        should_send_stitching_rt.value_namespace = name_space;
        should_send_stitching_rt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-orf-receive-capability")
    {
        has_orf_receive_capability = value;
        has_orf_receive_capability.value_namespace = name_space;
        has_orf_receive_capability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-route-reflector-client")
    {
        is_route_reflector_client = value;
        is_route_reflector_client.value_namespace = name_space;
        is_route_reflector_client.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-client-reflection-disabled")
    {
        is_client_reflection_disabled = value;
        is_client_reflection_disabled.value_namespace = name_space;
        is_client_reflection_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accepts-legacy-pe-rt-route")
    {
        accepts_legacy_pe_rt_route = value;
        accepts_legacy_pe_rt_route.value_namespace = name_space;
        accepts_legacy_pe_rt_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "updgrp-cluster-id")
    {
        updgrp_cluster_id = value;
        updgrp_cluster_id.value_namespace = name_space;
        updgrp_cluster_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "updgrp-cluster-type")
    {
        updgrp_cluster_type = value;
        updgrp_cluster_type.value_namespace = name_space;
        updgrp_cluster_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "orr-group-name")
    {
        orr_group_name = value;
        orr_group_name.value_namespace = name_space;
        orr_group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "orr-group-index")
    {
        orr_group_index = value;
        orr_group_index.value_namespace = name_space;
        orr_group_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-orr-root-address-configured")
    {
        is_orr_root_address_configured = value;
        is_orr_root_address_configured.value_namespace = name_space;
        is_orr_root_address_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "should-remove-private-a-ss")
    {
        should_remove_private_a_ss = value;
        should_remove_private_a_ss.value_namespace = name_space;
        should_remove_private_a_ss.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "should-remove-private-as-ent-path")
    {
        should_remove_private_as_ent_path = value;
        should_remove_private_as_ent_path.value_namespace = name_space;
        should_remove_private_as_ent_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "use-next-hop-self")
    {
        use_next_hop_self = value;
        use_next_hop_self.value_namespace = name_space;
        use_next_hop_self.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "use-next-hop-unchanged-mpath")
    {
        use_next_hop_unchanged_mpath = value;
        use_next_hop_unchanged_mpath.value_namespace = name_space;
        use_next_hop_unchanged_mpath.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-internal-peers")
    {
        is_internal_peers = value;
        is_internal_peers.value_namespace = name_space;
        is_internal_peers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-common-admin-peers")
    {
        is_common_admin_peers = value;
        is_common_admin_peers.value_namespace = name_space;
        is_common_admin_peers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is4-byte-as-peer")
    {
        is4_byte_as_peer = value;
        is4_byte_as_peer.value_namespace = name_space;
        is4_byte_as_peer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-addpath-capable")
    {
        is_addpath_capable = value;
        is_addpath_capable.value_namespace = name_space;
        is_addpath_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-send-mcast-attr-enabled")
    {
        is_send_mcast_attr_enabled = value;
        is_send_mcast_attr_enabled.value_namespace = name_space;
        is_send_mcast_attr_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-aigp-capable")
    {
        is_aigp_capable = value;
        is_aigp_capable.value_namespace = name_space;
        is_aigp_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-aigp-cost-community-capable")
    {
        is_aigp_cost_community_capable = value;
        is_aigp_cost_community_capable.value_namespace = name_space;
        is_aigp_cost_community_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-aigp-med-capable")
    {
        is_aigp_med_capable = value;
        is_aigp_med_capable.value_namespace = name_space;
        is_aigp_med_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-llgr-capable")
    {
        is_llgr_capable = value;
        is_llgr_capable.value_namespace = name_space;
        is_llgr_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-adv-capable")
    {
        is_adv_capable = value;
        is_adv_capable.value_namespace = name_space;
        is_adv_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-adv-reorg-capable")
    {
        is_adv_reorg_capable = value;
        is_adv_reorg_capable.value_namespace = name_space;
        is_adv_reorg_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable-native-advertisement")
    {
        disable_native_advertisement = value;
        disable_native_advertisement.value_namespace = name_space;
        disable_native_advertisement.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable-def-vrf-imp-advertisement")
    {
        disable_def_vrf_imp_advertisement = value;
        disable_def_vrf_imp_advertisement.value_namespace = name_space;
        disable_def_vrf_imp_advertisement.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable-vrf-re-imp-advertisement")
    {
        disable_vrf_re_imp_advertisement = value;
        disable_vrf_re_imp_advertisement.value_namespace = name_space;
        disable_vrf_re_imp_advertisement.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation-type")
    {
        encapsulation_type = value;
        encapsulation_type.value_namespace = name_space;
        encapsulation_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise-rt-type")
    {
        advertise_rt_type = value;
        advertise_rt_type.value_namespace = name_space;
        advertise_rt_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-directly-connected-ebgp-v6-peers")
    {
        is_directly_connected_ebgp_v6_peers = value;
        is_directly_connected_ebgp_v6_peers.value_namespace = name_space;
        is_directly_connected_ebgp_v6_peers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-advertisement-interval")
    {
        minimum_advertisement_interval = value;
        minimum_advertisement_interval.value_namespace = name_space;
        minimum_advertisement_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-advertisement-interval-msecs")
    {
        minimum_advertisement_interval_msecs = value;
        minimum_advertisement_interval_msecs.value_namespace = name_space;
        minimum_advertisement_interval_msecs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-as")
    {
        local_as = value;
        local_as.value_namespace = name_space;
        local_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-out")
    {
        route_policy_out = value;
        route_policy_out.value_namespace = name_space;
        route_policy_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "desync-count")
    {
        desync_count = value;
        desync_count.value_namespace = name_space;
        desync_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subgrp-merge-count")
    {
        subgrp_merge_count = value;
        subgrp_merge_count.value_namespace = name_space;
        subgrp_merge_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refresh-subgrp-count")
    {
        refresh_subgrp_count = value;
        refresh_subgrp_count.value_namespace = name_space;
        refresh_subgrp_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "updates-formatted")
    {
        updates_formatted = value;
        updates_formatted.value_namespace = name_space;
        updates_formatted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "updates-replicated")
    {
        updates_replicated = value;
        updates_replicated.value_namespace = name_space;
        updates_replicated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-as-replace-as")
    {
        local_as_replace_as = value;
        local_as_replace_as.value_namespace = name_space;
        local_as_replace_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-override")
    {
        as_override = value;
        as_override.value_namespace = name_space;
        as_override.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soo-value")
    {
        soo_value = value;
        soo_value.value_namespace = name_space;
        soo_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "split-horizon")
    {
        split_horizon = value;
        split_horizon.value_namespace = name_space;
        split_horizon.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-labeled-afi-enabled")
    {
        is_labeled_afi_enabled = value;
        is_labeled_afi_enabled.value_namespace = name_space;
        is_labeled_afi_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-unlabeled-afi-enabled")
    {
        is_unlabeled_afi_enabled = value;
        is_unlabeled_afi_enabled.value_namespace = name_space;
        is_unlabeled_afi_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ext-nh-encoding")
    {
        ext_nh_encoding = value;
        ext_nh_encoding.value_namespace = name_space;
        ext_nh_encoding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-as")
    {
        remote_as = value;
        remote_as.value_namespace = name_space;
        remote_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-adv-perm-net-capable")
    {
        is_adv_perm_net_capable = value;
        is_adv_perm_net_capable.value_namespace = name_space;
        is_adv_perm_net_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "should-send-gshut-community")
    {
        should_send_gshut_community = value;
        should_send_gshut_community.value_namespace = name_space;
        should_send_gshut_community.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gshut-active")
    {
        gshut_active = value;
        gshut_active.value_namespace = name_space;
        gshut_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gshut-locpref-set")
    {
        gshut_locpref_set = value;
        gshut_locpref_set.value_namespace = name_space;
        gshut_locpref_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gshut-locpref")
    {
        gshut_locpref = value;
        gshut_locpref.value_namespace = name_space;
        gshut_locpref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gshut-prepends")
    {
        gshut_prepends = value;
        gshut_prepends.value_namespace = name_space;
        gshut_prepends.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise-local-labeled-route-unicast")
    {
        advertise_local_labeled_route_unicast = value;
        advertise_local_labeled_route_unicast.value_namespace = name_space;
        advertise_local_labeled_route_unicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable-label-stack")
    {
        enable_label_stack = value;
        enable_label_stack.value_namespace = name_space;
        enable_label_stack.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "update-group-id")
    {
        update_group_id.yfilter = yfilter;
    }
    if(value_path == "filter-group-id")
    {
        filter_group_id.yfilter = yfilter;
    }
    if(value_path == "process-instance-id")
    {
        process_instance_id.yfilter = yfilter;
    }
    if(value_path == "session-af-name")
    {
        session_af_name.yfilter = yfilter;
    }
    if(value_path == "update-group-number")
    {
        update_group_number.yfilter = yfilter;
    }
    if(value_path == "update-group-af-name")
    {
        update_group_af_name.yfilter = yfilter;
    }
    if(value_path == "should-send-communities")
    {
        should_send_communities.yfilter = yfilter;
    }
    if(value_path == "should-send-ext-communities")
    {
        should_send_ext_communities.yfilter = yfilter;
    }
    if(value_path == "should-send-stitching-rt")
    {
        should_send_stitching_rt.yfilter = yfilter;
    }
    if(value_path == "has-orf-receive-capability")
    {
        has_orf_receive_capability.yfilter = yfilter;
    }
    if(value_path == "is-route-reflector-client")
    {
        is_route_reflector_client.yfilter = yfilter;
    }
    if(value_path == "is-client-reflection-disabled")
    {
        is_client_reflection_disabled.yfilter = yfilter;
    }
    if(value_path == "accepts-legacy-pe-rt-route")
    {
        accepts_legacy_pe_rt_route.yfilter = yfilter;
    }
    if(value_path == "updgrp-cluster-id")
    {
        updgrp_cluster_id.yfilter = yfilter;
    }
    if(value_path == "updgrp-cluster-type")
    {
        updgrp_cluster_type.yfilter = yfilter;
    }
    if(value_path == "orr-group-name")
    {
        orr_group_name.yfilter = yfilter;
    }
    if(value_path == "orr-group-index")
    {
        orr_group_index.yfilter = yfilter;
    }
    if(value_path == "is-orr-root-address-configured")
    {
        is_orr_root_address_configured.yfilter = yfilter;
    }
    if(value_path == "should-remove-private-a-ss")
    {
        should_remove_private_a_ss.yfilter = yfilter;
    }
    if(value_path == "should-remove-private-as-ent-path")
    {
        should_remove_private_as_ent_path.yfilter = yfilter;
    }
    if(value_path == "use-next-hop-self")
    {
        use_next_hop_self.yfilter = yfilter;
    }
    if(value_path == "use-next-hop-unchanged-mpath")
    {
        use_next_hop_unchanged_mpath.yfilter = yfilter;
    }
    if(value_path == "is-internal-peers")
    {
        is_internal_peers.yfilter = yfilter;
    }
    if(value_path == "is-common-admin-peers")
    {
        is_common_admin_peers.yfilter = yfilter;
    }
    if(value_path == "is4-byte-as-peer")
    {
        is4_byte_as_peer.yfilter = yfilter;
    }
    if(value_path == "is-addpath-capable")
    {
        is_addpath_capable.yfilter = yfilter;
    }
    if(value_path == "is-send-mcast-attr-enabled")
    {
        is_send_mcast_attr_enabled.yfilter = yfilter;
    }
    if(value_path == "is-aigp-capable")
    {
        is_aigp_capable.yfilter = yfilter;
    }
    if(value_path == "is-aigp-cost-community-capable")
    {
        is_aigp_cost_community_capable.yfilter = yfilter;
    }
    if(value_path == "is-aigp-med-capable")
    {
        is_aigp_med_capable.yfilter = yfilter;
    }
    if(value_path == "is-llgr-capable")
    {
        is_llgr_capable.yfilter = yfilter;
    }
    if(value_path == "is-adv-capable")
    {
        is_adv_capable.yfilter = yfilter;
    }
    if(value_path == "is-adv-reorg-capable")
    {
        is_adv_reorg_capable.yfilter = yfilter;
    }
    if(value_path == "disable-native-advertisement")
    {
        disable_native_advertisement.yfilter = yfilter;
    }
    if(value_path == "disable-def-vrf-imp-advertisement")
    {
        disable_def_vrf_imp_advertisement.yfilter = yfilter;
    }
    if(value_path == "disable-vrf-re-imp-advertisement")
    {
        disable_vrf_re_imp_advertisement.yfilter = yfilter;
    }
    if(value_path == "encapsulation-type")
    {
        encapsulation_type.yfilter = yfilter;
    }
    if(value_path == "advertise-rt-type")
    {
        advertise_rt_type.yfilter = yfilter;
    }
    if(value_path == "is-directly-connected-ebgp-v6-peers")
    {
        is_directly_connected_ebgp_v6_peers.yfilter = yfilter;
    }
    if(value_path == "minimum-advertisement-interval")
    {
        minimum_advertisement_interval.yfilter = yfilter;
    }
    if(value_path == "minimum-advertisement-interval-msecs")
    {
        minimum_advertisement_interval_msecs.yfilter = yfilter;
    }
    if(value_path == "local-as")
    {
        local_as.yfilter = yfilter;
    }
    if(value_path == "route-policy-out")
    {
        route_policy_out.yfilter = yfilter;
    }
    if(value_path == "desync-count")
    {
        desync_count.yfilter = yfilter;
    }
    if(value_path == "subgrp-merge-count")
    {
        subgrp_merge_count.yfilter = yfilter;
    }
    if(value_path == "refresh-subgrp-count")
    {
        refresh_subgrp_count.yfilter = yfilter;
    }
    if(value_path == "updates-formatted")
    {
        updates_formatted.yfilter = yfilter;
    }
    if(value_path == "updates-replicated")
    {
        updates_replicated.yfilter = yfilter;
    }
    if(value_path == "local-as-replace-as")
    {
        local_as_replace_as.yfilter = yfilter;
    }
    if(value_path == "as-override")
    {
        as_override.yfilter = yfilter;
    }
    if(value_path == "soo-value")
    {
        soo_value.yfilter = yfilter;
    }
    if(value_path == "split-horizon")
    {
        split_horizon.yfilter = yfilter;
    }
    if(value_path == "is-labeled-afi-enabled")
    {
        is_labeled_afi_enabled.yfilter = yfilter;
    }
    if(value_path == "is-unlabeled-afi-enabled")
    {
        is_unlabeled_afi_enabled.yfilter = yfilter;
    }
    if(value_path == "ext-nh-encoding")
    {
        ext_nh_encoding.yfilter = yfilter;
    }
    if(value_path == "remote-as")
    {
        remote_as.yfilter = yfilter;
    }
    if(value_path == "is-adv-perm-net-capable")
    {
        is_adv_perm_net_capable.yfilter = yfilter;
    }
    if(value_path == "should-send-gshut-community")
    {
        should_send_gshut_community.yfilter = yfilter;
    }
    if(value_path == "gshut-active")
    {
        gshut_active.yfilter = yfilter;
    }
    if(value_path == "gshut-locpref-set")
    {
        gshut_locpref_set.yfilter = yfilter;
    }
    if(value_path == "gshut-locpref")
    {
        gshut_locpref.yfilter = yfilter;
    }
    if(value_path == "gshut-prepends")
    {
        gshut_prepends.yfilter = yfilter;
    }
    if(value_path == "advertise-local-labeled-route-unicast")
    {
        advertise_local_labeled_route_unicast.yfilter = yfilter;
    }
    if(value_path == "enable-label-stack")
    {
        enable_label_stack.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "performance-statistics" || name == "neighbor" || name == "update-sub-group" || name == "update-group-id" || name == "filter-group-id" || name == "process-instance-id" || name == "session-af-name" || name == "update-group-number" || name == "update-group-af-name" || name == "should-send-communities" || name == "should-send-ext-communities" || name == "should-send-stitching-rt" || name == "has-orf-receive-capability" || name == "is-route-reflector-client" || name == "is-client-reflection-disabled" || name == "accepts-legacy-pe-rt-route" || name == "updgrp-cluster-id" || name == "updgrp-cluster-type" || name == "orr-group-name" || name == "orr-group-index" || name == "is-orr-root-address-configured" || name == "should-remove-private-a-ss" || name == "should-remove-private-as-ent-path" || name == "use-next-hop-self" || name == "use-next-hop-unchanged-mpath" || name == "is-internal-peers" || name == "is-common-admin-peers" || name == "is4-byte-as-peer" || name == "is-addpath-capable" || name == "is-send-mcast-attr-enabled" || name == "is-aigp-capable" || name == "is-aigp-cost-community-capable" || name == "is-aigp-med-capable" || name == "is-llgr-capable" || name == "is-adv-capable" || name == "is-adv-reorg-capable" || name == "disable-native-advertisement" || name == "disable-def-vrf-imp-advertisement" || name == "disable-vrf-re-imp-advertisement" || name == "encapsulation-type" || name == "advertise-rt-type" || name == "is-directly-connected-ebgp-v6-peers" || name == "minimum-advertisement-interval" || name == "minimum-advertisement-interval-msecs" || name == "local-as" || name == "route-policy-out" || name == "desync-count" || name == "subgrp-merge-count" || name == "refresh-subgrp-count" || name == "updates-formatted" || name == "updates-replicated" || name == "local-as-replace-as" || name == "as-override" || name == "soo-value" || name == "split-horizon" || name == "is-labeled-afi-enabled" || name == "is-unlabeled-afi-enabled" || name == "ext-nh-encoding" || name == "remote-as" || name == "is-adv-perm-net-capable" || name == "should-send-gshut-community" || name == "gshut-active" || name == "gshut-locpref-set" || name == "gshut-locpref" || name == "gshut-prepends" || name == "advertise-local-labeled-route-unicast" || name == "enable-label-stack")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::PerformanceStatistics::PerformanceStatistics()
    :
    update_generation_calls{YType::uint32, "update-generation-calls"},
    update_generation_prefixes_count{YType::uint32, "update-generation-prefixes-count"},
    update_generation_be_prefixes_count{YType::uint32, "update-generation-be-prefixes-count"},
    update_generation_messages_count{YType::uint32, "update-generation-messages-count"},
    update_generation_time{YType::uint32, "update-generation-time"},
    updgen_timer_start_time{YType::uint64, "updgen-timer-start-time"},
    updgen_timer_stop_time{YType::uint64, "updgen-timer-stop-time"},
    updgen_timer_process_time{YType::uint64, "updgen-timer-process-time"}
{

    yang_name = "performance-statistics"; yang_parent_name = "update-group"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::PerformanceStatistics::~PerformanceStatistics()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::PerformanceStatistics::has_data() const
{
    return update_generation_calls.is_set
	|| update_generation_prefixes_count.is_set
	|| update_generation_be_prefixes_count.is_set
	|| update_generation_messages_count.is_set
	|| update_generation_time.is_set
	|| updgen_timer_start_time.is_set
	|| updgen_timer_stop_time.is_set
	|| updgen_timer_process_time.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::PerformanceStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(update_generation_calls.yfilter)
	|| ydk::is_set(update_generation_prefixes_count.yfilter)
	|| ydk::is_set(update_generation_be_prefixes_count.yfilter)
	|| ydk::is_set(update_generation_messages_count.yfilter)
	|| ydk::is_set(update_generation_time.yfilter)
	|| ydk::is_set(updgen_timer_start_time.yfilter)
	|| ydk::is_set(updgen_timer_stop_time.yfilter)
	|| ydk::is_set(updgen_timer_process_time.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::PerformanceStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "performance-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::PerformanceStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (update_generation_calls.is_set || is_set(update_generation_calls.yfilter)) leaf_name_data.push_back(update_generation_calls.get_name_leafdata());
    if (update_generation_prefixes_count.is_set || is_set(update_generation_prefixes_count.yfilter)) leaf_name_data.push_back(update_generation_prefixes_count.get_name_leafdata());
    if (update_generation_be_prefixes_count.is_set || is_set(update_generation_be_prefixes_count.yfilter)) leaf_name_data.push_back(update_generation_be_prefixes_count.get_name_leafdata());
    if (update_generation_messages_count.is_set || is_set(update_generation_messages_count.yfilter)) leaf_name_data.push_back(update_generation_messages_count.get_name_leafdata());
    if (update_generation_time.is_set || is_set(update_generation_time.yfilter)) leaf_name_data.push_back(update_generation_time.get_name_leafdata());
    if (updgen_timer_start_time.is_set || is_set(updgen_timer_start_time.yfilter)) leaf_name_data.push_back(updgen_timer_start_time.get_name_leafdata());
    if (updgen_timer_stop_time.is_set || is_set(updgen_timer_stop_time.yfilter)) leaf_name_data.push_back(updgen_timer_stop_time.get_name_leafdata());
    if (updgen_timer_process_time.is_set || is_set(updgen_timer_process_time.yfilter)) leaf_name_data.push_back(updgen_timer_process_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::PerformanceStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::PerformanceStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::PerformanceStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "update-generation-calls")
    {
        update_generation_calls = value;
        update_generation_calls.value_namespace = name_space;
        update_generation_calls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-generation-prefixes-count")
    {
        update_generation_prefixes_count = value;
        update_generation_prefixes_count.value_namespace = name_space;
        update_generation_prefixes_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-generation-be-prefixes-count")
    {
        update_generation_be_prefixes_count = value;
        update_generation_be_prefixes_count.value_namespace = name_space;
        update_generation_be_prefixes_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-generation-messages-count")
    {
        update_generation_messages_count = value;
        update_generation_messages_count.value_namespace = name_space;
        update_generation_messages_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-generation-time")
    {
        update_generation_time = value;
        update_generation_time.value_namespace = name_space;
        update_generation_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "updgen-timer-start-time")
    {
        updgen_timer_start_time = value;
        updgen_timer_start_time.value_namespace = name_space;
        updgen_timer_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "updgen-timer-stop-time")
    {
        updgen_timer_stop_time = value;
        updgen_timer_stop_time.value_namespace = name_space;
        updgen_timer_stop_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "updgen-timer-process-time")
    {
        updgen_timer_process_time = value;
        updgen_timer_process_time.value_namespace = name_space;
        updgen_timer_process_time.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::PerformanceStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "update-generation-calls")
    {
        update_generation_calls.yfilter = yfilter;
    }
    if(value_path == "update-generation-prefixes-count")
    {
        update_generation_prefixes_count.yfilter = yfilter;
    }
    if(value_path == "update-generation-be-prefixes-count")
    {
        update_generation_be_prefixes_count.yfilter = yfilter;
    }
    if(value_path == "update-generation-messages-count")
    {
        update_generation_messages_count.yfilter = yfilter;
    }
    if(value_path == "update-generation-time")
    {
        update_generation_time.yfilter = yfilter;
    }
    if(value_path == "updgen-timer-start-time")
    {
        updgen_timer_start_time.yfilter = yfilter;
    }
    if(value_path == "updgen-timer-stop-time")
    {
        updgen_timer_stop_time.yfilter = yfilter;
    }
    if(value_path == "updgen-timer-process-time")
    {
        updgen_timer_process_time.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::PerformanceStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "update-generation-calls" || name == "update-generation-prefixes-count" || name == "update-generation-be-prefixes-count" || name == "update-generation-messages-count" || name == "update-generation-time" || name == "updgen-timer-start-time" || name == "updgen-timer-stop-time" || name == "updgen-timer-process-time")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::Neighbor()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4_mdt_address{YType::str, "ipv4-mdt-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"}
    	,
    l2vpn_vpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::L2VpnVplsAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::L2VpnMspwAddress>())
	,ipv4_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::Ipv6SrPolicyAddress>())
{
    l2vpn_vpls_address->parent = this;
    l2vpn_mspw_address->parent = this;
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;

    yang_name = "neighbor"; yang_parent_name = "update-group"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::~Neighbor()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4_mdt_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| rt_constraint_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv4mvpn_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_data())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_mcast_address.yfilter)
	|| ydk::is_set(ipv4_label_address.yfilter)
	|| ydk::is_set(ipv4_tunnel_address.yfilter)
	|| ydk::is_set(ipv4_mdt_address.yfilter)
	|| ydk::is_set(ipv4vpn_address.yfilter)
	|| ydk::is_set(ipv4vpna_mcastddress.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(ipv6_mcast_address.yfilter)
	|| ydk::is_set(ipv6_label_address.yfilter)
	|| ydk::is_set(ipv6vpn_address.yfilter)
	|| ydk::is_set(ipv6vpn_mcast_address.yfilter)
	|| ydk::is_set(rt_constraint_address.yfilter)
	|| ydk::is_set(ipv6mvpn_address.yfilter)
	|| ydk::is_set(ipv4mvpn_address.yfilter)
	|| ydk::is_set(l2vpn_evpn_address.yfilter)
	|| ydk::is_set(ls_ls_address.yfilter)
	|| ydk::is_set(ipv4_flowspec_address.yfilter)
	|| ydk::is_set(ipv6_flowspec_address.yfilter)
	|| ydk::is_set(ipv4vpn_flowspec_address.yfilter)
	|| ydk::is_set(ipv6vpn_flowspec_address.yfilter)
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_operation())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.yfilter)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.yfilter)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.yfilter)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4_mdt_address.is_set || is_set(ipv4_mdt_address.yfilter)) leaf_name_data.push_back(ipv4_mdt_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.yfilter)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.yfilter)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.yfilter)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.yfilter)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.yfilter)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.yfilter)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.yfilter)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.yfilter)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.yfilter)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.yfilter)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.yfilter)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(l2vpn_vpls_address != nullptr)
    {
        children["l2vpn-vpls-address"] = l2vpn_vpls_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(ipv4_sr_policy_address != nullptr)
    {
        children["ipv4-sr-policy-address"] = ipv4_sr_policy_address;
    }

    if(ipv6_sr_policy_address != nullptr)
    {
        children["ipv6-sr-policy-address"] = ipv6_sr_policy_address;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
        ipv4_mcast_address.value_namespace = name_space;
        ipv4_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
        ipv4_label_address.value_namespace = name_space;
        ipv4_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
        ipv4_tunnel_address.value_namespace = name_space;
        ipv4_tunnel_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address = value;
        ipv4_mdt_address.value_namespace = name_space;
        ipv4_mdt_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
        ipv4vpn_address.value_namespace = name_space;
        ipv4vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
        ipv4vpna_mcastddress.value_namespace = name_space;
        ipv4vpna_mcastddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
        ipv6_mcast_address.value_namespace = name_space;
        ipv6_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
        ipv6_label_address.value_namespace = name_space;
        ipv6_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
        ipv6vpn_address.value_namespace = name_space;
        ipv6vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
        ipv6vpn_mcast_address.value_namespace = name_space;
        ipv6vpn_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
        rt_constraint_address.value_namespace = name_space;
        rt_constraint_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
        ipv6mvpn_address.value_namespace = name_space;
        ipv6mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
        ipv4mvpn_address.value_namespace = name_space;
        ipv4mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
        l2vpn_evpn_address.value_namespace = name_space;
        l2vpn_evpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
        ls_ls_address.value_namespace = name_space;
        ls_ls_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
        ipv4_flowspec_address.value_namespace = name_space;
        ipv4_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
        ipv6_flowspec_address.value_namespace = name_space;
        ipv6_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
        ipv4vpn_flowspec_address.value_namespace = name_space;
        ipv4vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
        ipv6vpn_flowspec_address.value_namespace = name_space;
        ipv6vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address.yfilter = yfilter;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address.yfilter = yfilter;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address.yfilter = yfilter;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address.yfilter = yfilter;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-vpls-address" || name == "l2vpn-mspw-address" || name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-mcast-address" || name == "ipv4-label-address" || name == "ipv4-tunnel-address" || name == "ipv4-mdt-address" || name == "ipv4vpn-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-mcast-address" || name == "ipv6-label-address" || name == "ipv6vpn-address" || name == "ipv6vpn-mcast-address" || name == "rt-constraint-address" || name == "ipv6mvpn-address" || name == "ipv4mvpn-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "ipv4-flowspec-address" || name == "ipv6-flowspec-address" || name == "ipv4vpn-flowspec-address" || name == "ipv6vpn-flowspec-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateSubGroup()
    :
    update_sub_group_number{YType::uint32, "update-sub-group-number"},
    filter_group{YType::uint16, "filter-group"},
    wait_for_eo_rs{YType::boolean, "wait-for-eo-rs"}
{

    yang_name = "update-sub-group"; yang_parent_name = "update-group"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::~UpdateSubGroup()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::has_data() const
{
    for (std::size_t index=0; index<update_filter_group.size(); index++)
    {
        if(update_filter_group[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return update_sub_group_number.is_set
	|| filter_group.is_set
	|| wait_for_eo_rs.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::has_operation() const
{
    for (std::size_t index=0; index<update_filter_group.size(); index++)
    {
        if(update_filter_group[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(update_sub_group_number.yfilter)
	|| ydk::is_set(filter_group.yfilter)
	|| ydk::is_set(wait_for_eo_rs.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-sub-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (update_sub_group_number.is_set || is_set(update_sub_group_number.yfilter)) leaf_name_data.push_back(update_sub_group_number.get_name_leafdata());
    if (filter_group.is_set || is_set(filter_group.yfilter)) leaf_name_data.push_back(filter_group.get_name_leafdata());
    if (wait_for_eo_rs.is_set || is_set(wait_for_eo_rs.yfilter)) leaf_name_data.push_back(wait_for_eo_rs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "update-filter-group")
    {
        for(auto const & c : update_filter_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup>();
        c->parent = this;
        update_filter_group.push_back(c);
        return c;
    }

    if(child_yang_name == "neighbor")
    {
        for(auto const & c : neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : update_filter_group)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "update-sub-group-number")
    {
        update_sub_group_number = value;
        update_sub_group_number.value_namespace = name_space;
        update_sub_group_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filter-group")
    {
        filter_group = value;
        filter_group.value_namespace = name_space;
        filter_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-for-eo-rs")
    {
        wait_for_eo_rs = value;
        wait_for_eo_rs.value_namespace = name_space;
        wait_for_eo_rs.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "update-sub-group-number")
    {
        update_sub_group_number.yfilter = yfilter;
    }
    if(value_path == "filter-group")
    {
        filter_group.yfilter = yfilter;
    }
    if(value_path == "wait-for-eo-rs")
    {
        wait_for_eo_rs.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "update-filter-group" || name == "neighbor" || name == "update-sub-group-number" || name == "filter-group" || name == "wait-for-eo-rs")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::UpdateFilterGroup()
    :
    update_filter_group_number{YType::uint32, "update-filter-group-number"},
    rts{YType::uint32, "rts"},
    fgroup_flags{YType::uint8, "fgroup-flags"},
    fgroup_neighbors{YType::uint16, "fgroup-neighbors"},
    fgroup_created_message_elements{YType::uint32, "fgroup-created-message-elements"},
    fgroup_deleted_message_elements{YType::uint32, "fgroup-deleted-message-elements"},
    fgroup_queued_message_elements{YType::uint32, "fgroup-queued-message-elements"},
    fgroup_advertised_prefixes{YType::uint32, "fgroup-advertised-prefixes"},
    fgroup_total_advertised_prefixes{YType::uint32, "fgroup-total-advertised-prefixes"},
    fgroup_withdrawn_prefixes{YType::uint32, "fgroup-withdrawn-prefixes"},
    fgroup_total_withdrawn_prefixes{YType::uint32, "fgroup-total-withdrawn-prefixes"},
    fgroup_total_non_optimised_prefixes{YType::uint32, "fgroup-total-non-optimised-prefixes"},
    fgroup_skipped_prefixes{YType::uint32, "fgroup-skipped-prefixes"},
    fgroup_suppressed_prefixes{YType::uint32, "fgroup-suppressed-prefixes"},
    is_rt_present{YType::boolean, "is-rt-present"}
{

    yang_name = "update-filter-group"; yang_parent_name = "update-sub-group"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::~UpdateFilterGroup()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::has_data() const
{
    for (std::size_t index=0; index<extended_community.size(); index++)
    {
        if(extended_community[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return update_filter_group_number.is_set
	|| rts.is_set
	|| fgroup_flags.is_set
	|| fgroup_neighbors.is_set
	|| fgroup_created_message_elements.is_set
	|| fgroup_deleted_message_elements.is_set
	|| fgroup_queued_message_elements.is_set
	|| fgroup_advertised_prefixes.is_set
	|| fgroup_total_advertised_prefixes.is_set
	|| fgroup_withdrawn_prefixes.is_set
	|| fgroup_total_withdrawn_prefixes.is_set
	|| fgroup_total_non_optimised_prefixes.is_set
	|| fgroup_skipped_prefixes.is_set
	|| fgroup_suppressed_prefixes.is_set
	|| is_rt_present.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::has_operation() const
{
    for (std::size_t index=0; index<extended_community.size(); index++)
    {
        if(extended_community[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(update_filter_group_number.yfilter)
	|| ydk::is_set(rts.yfilter)
	|| ydk::is_set(fgroup_flags.yfilter)
	|| ydk::is_set(fgroup_neighbors.yfilter)
	|| ydk::is_set(fgroup_created_message_elements.yfilter)
	|| ydk::is_set(fgroup_deleted_message_elements.yfilter)
	|| ydk::is_set(fgroup_queued_message_elements.yfilter)
	|| ydk::is_set(fgroup_advertised_prefixes.yfilter)
	|| ydk::is_set(fgroup_total_advertised_prefixes.yfilter)
	|| ydk::is_set(fgroup_withdrawn_prefixes.yfilter)
	|| ydk::is_set(fgroup_total_withdrawn_prefixes.yfilter)
	|| ydk::is_set(fgroup_total_non_optimised_prefixes.yfilter)
	|| ydk::is_set(fgroup_skipped_prefixes.yfilter)
	|| ydk::is_set(fgroup_suppressed_prefixes.yfilter)
	|| ydk::is_set(is_rt_present.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-filter-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (update_filter_group_number.is_set || is_set(update_filter_group_number.yfilter)) leaf_name_data.push_back(update_filter_group_number.get_name_leafdata());
    if (rts.is_set || is_set(rts.yfilter)) leaf_name_data.push_back(rts.get_name_leafdata());
    if (fgroup_flags.is_set || is_set(fgroup_flags.yfilter)) leaf_name_data.push_back(fgroup_flags.get_name_leafdata());
    if (fgroup_neighbors.is_set || is_set(fgroup_neighbors.yfilter)) leaf_name_data.push_back(fgroup_neighbors.get_name_leafdata());
    if (fgroup_created_message_elements.is_set || is_set(fgroup_created_message_elements.yfilter)) leaf_name_data.push_back(fgroup_created_message_elements.get_name_leafdata());
    if (fgroup_deleted_message_elements.is_set || is_set(fgroup_deleted_message_elements.yfilter)) leaf_name_data.push_back(fgroup_deleted_message_elements.get_name_leafdata());
    if (fgroup_queued_message_elements.is_set || is_set(fgroup_queued_message_elements.yfilter)) leaf_name_data.push_back(fgroup_queued_message_elements.get_name_leafdata());
    if (fgroup_advertised_prefixes.is_set || is_set(fgroup_advertised_prefixes.yfilter)) leaf_name_data.push_back(fgroup_advertised_prefixes.get_name_leafdata());
    if (fgroup_total_advertised_prefixes.is_set || is_set(fgroup_total_advertised_prefixes.yfilter)) leaf_name_data.push_back(fgroup_total_advertised_prefixes.get_name_leafdata());
    if (fgroup_withdrawn_prefixes.is_set || is_set(fgroup_withdrawn_prefixes.yfilter)) leaf_name_data.push_back(fgroup_withdrawn_prefixes.get_name_leafdata());
    if (fgroup_total_withdrawn_prefixes.is_set || is_set(fgroup_total_withdrawn_prefixes.yfilter)) leaf_name_data.push_back(fgroup_total_withdrawn_prefixes.get_name_leafdata());
    if (fgroup_total_non_optimised_prefixes.is_set || is_set(fgroup_total_non_optimised_prefixes.yfilter)) leaf_name_data.push_back(fgroup_total_non_optimised_prefixes.get_name_leafdata());
    if (fgroup_skipped_prefixes.is_set || is_set(fgroup_skipped_prefixes.yfilter)) leaf_name_data.push_back(fgroup_skipped_prefixes.get_name_leafdata());
    if (fgroup_suppressed_prefixes.is_set || is_set(fgroup_suppressed_prefixes.yfilter)) leaf_name_data.push_back(fgroup_suppressed_prefixes.get_name_leafdata());
    if (is_rt_present.is_set || is_set(is_rt_present.yfilter)) leaf_name_data.push_back(is_rt_present.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "extended-community")
    {
        for(auto const & c : extended_community)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::ExtendedCommunity>();
        c->parent = this;
        extended_community.push_back(c);
        return c;
    }

    if(child_yang_name == "neighbor")
    {
        for(auto const & c : neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : extended_community)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "update-filter-group-number")
    {
        update_filter_group_number = value;
        update_filter_group_number.value_namespace = name_space;
        update_filter_group_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rts")
    {
        rts = value;
        rts.value_namespace = name_space;
        rts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fgroup-flags")
    {
        fgroup_flags = value;
        fgroup_flags.value_namespace = name_space;
        fgroup_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fgroup-neighbors")
    {
        fgroup_neighbors = value;
        fgroup_neighbors.value_namespace = name_space;
        fgroup_neighbors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fgroup-created-message-elements")
    {
        fgroup_created_message_elements = value;
        fgroup_created_message_elements.value_namespace = name_space;
        fgroup_created_message_elements.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fgroup-deleted-message-elements")
    {
        fgroup_deleted_message_elements = value;
        fgroup_deleted_message_elements.value_namespace = name_space;
        fgroup_deleted_message_elements.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fgroup-queued-message-elements")
    {
        fgroup_queued_message_elements = value;
        fgroup_queued_message_elements.value_namespace = name_space;
        fgroup_queued_message_elements.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fgroup-advertised-prefixes")
    {
        fgroup_advertised_prefixes = value;
        fgroup_advertised_prefixes.value_namespace = name_space;
        fgroup_advertised_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fgroup-total-advertised-prefixes")
    {
        fgroup_total_advertised_prefixes = value;
        fgroup_total_advertised_prefixes.value_namespace = name_space;
        fgroup_total_advertised_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fgroup-withdrawn-prefixes")
    {
        fgroup_withdrawn_prefixes = value;
        fgroup_withdrawn_prefixes.value_namespace = name_space;
        fgroup_withdrawn_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fgroup-total-withdrawn-prefixes")
    {
        fgroup_total_withdrawn_prefixes = value;
        fgroup_total_withdrawn_prefixes.value_namespace = name_space;
        fgroup_total_withdrawn_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fgroup-total-non-optimised-prefixes")
    {
        fgroup_total_non_optimised_prefixes = value;
        fgroup_total_non_optimised_prefixes.value_namespace = name_space;
        fgroup_total_non_optimised_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fgroup-skipped-prefixes")
    {
        fgroup_skipped_prefixes = value;
        fgroup_skipped_prefixes.value_namespace = name_space;
        fgroup_skipped_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fgroup-suppressed-prefixes")
    {
        fgroup_suppressed_prefixes = value;
        fgroup_suppressed_prefixes.value_namespace = name_space;
        fgroup_suppressed_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-rt-present")
    {
        is_rt_present = value;
        is_rt_present.value_namespace = name_space;
        is_rt_present.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "update-filter-group-number")
    {
        update_filter_group_number.yfilter = yfilter;
    }
    if(value_path == "rts")
    {
        rts.yfilter = yfilter;
    }
    if(value_path == "fgroup-flags")
    {
        fgroup_flags.yfilter = yfilter;
    }
    if(value_path == "fgroup-neighbors")
    {
        fgroup_neighbors.yfilter = yfilter;
    }
    if(value_path == "fgroup-created-message-elements")
    {
        fgroup_created_message_elements.yfilter = yfilter;
    }
    if(value_path == "fgroup-deleted-message-elements")
    {
        fgroup_deleted_message_elements.yfilter = yfilter;
    }
    if(value_path == "fgroup-queued-message-elements")
    {
        fgroup_queued_message_elements.yfilter = yfilter;
    }
    if(value_path == "fgroup-advertised-prefixes")
    {
        fgroup_advertised_prefixes.yfilter = yfilter;
    }
    if(value_path == "fgroup-total-advertised-prefixes")
    {
        fgroup_total_advertised_prefixes.yfilter = yfilter;
    }
    if(value_path == "fgroup-withdrawn-prefixes")
    {
        fgroup_withdrawn_prefixes.yfilter = yfilter;
    }
    if(value_path == "fgroup-total-withdrawn-prefixes")
    {
        fgroup_total_withdrawn_prefixes.yfilter = yfilter;
    }
    if(value_path == "fgroup-total-non-optimised-prefixes")
    {
        fgroup_total_non_optimised_prefixes.yfilter = yfilter;
    }
    if(value_path == "fgroup-skipped-prefixes")
    {
        fgroup_skipped_prefixes.yfilter = yfilter;
    }
    if(value_path == "fgroup-suppressed-prefixes")
    {
        fgroup_suppressed_prefixes.yfilter = yfilter;
    }
    if(value_path == "is-rt-present")
    {
        is_rt_present.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extended-community" || name == "neighbor" || name == "update-filter-group-number" || name == "rts" || name == "fgroup-flags" || name == "fgroup-neighbors" || name == "fgroup-created-message-elements" || name == "fgroup-deleted-message-elements" || name == "fgroup-queued-message-elements" || name == "fgroup-advertised-prefixes" || name == "fgroup-total-advertised-prefixes" || name == "fgroup-withdrawn-prefixes" || name == "fgroup-total-withdrawn-prefixes" || name == "fgroup-total-non-optimised-prefixes" || name == "fgroup-skipped-prefixes" || name == "fgroup-suppressed-prefixes" || name == "is-rt-present")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::ExtendedCommunity::ExtendedCommunity()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "extended-community"; yang_parent_name = "update-filter-group"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::ExtendedCommunity::~ExtendedCommunity()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::ExtendedCommunity::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::ExtendedCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::ExtendedCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::ExtendedCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::ExtendedCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::ExtendedCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::ExtendedCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::ExtendedCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::ExtendedCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::Neighbor()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4_mdt_address{YType::str, "ipv4-mdt-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"}
    	,
    l2vpn_vpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::L2VpnVplsAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::L2VpnMspwAddress>())
	,ipv4_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::Ipv6SrPolicyAddress>())
{
    l2vpn_vpls_address->parent = this;
    l2vpn_mspw_address->parent = this;
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;

    yang_name = "neighbor"; yang_parent_name = "update-filter-group"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::~Neighbor()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4_mdt_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| rt_constraint_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv4mvpn_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_data())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_mcast_address.yfilter)
	|| ydk::is_set(ipv4_label_address.yfilter)
	|| ydk::is_set(ipv4_tunnel_address.yfilter)
	|| ydk::is_set(ipv4_mdt_address.yfilter)
	|| ydk::is_set(ipv4vpn_address.yfilter)
	|| ydk::is_set(ipv4vpna_mcastddress.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(ipv6_mcast_address.yfilter)
	|| ydk::is_set(ipv6_label_address.yfilter)
	|| ydk::is_set(ipv6vpn_address.yfilter)
	|| ydk::is_set(ipv6vpn_mcast_address.yfilter)
	|| ydk::is_set(rt_constraint_address.yfilter)
	|| ydk::is_set(ipv6mvpn_address.yfilter)
	|| ydk::is_set(ipv4mvpn_address.yfilter)
	|| ydk::is_set(l2vpn_evpn_address.yfilter)
	|| ydk::is_set(ls_ls_address.yfilter)
	|| ydk::is_set(ipv4_flowspec_address.yfilter)
	|| ydk::is_set(ipv6_flowspec_address.yfilter)
	|| ydk::is_set(ipv4vpn_flowspec_address.yfilter)
	|| ydk::is_set(ipv6vpn_flowspec_address.yfilter)
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_operation())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.yfilter)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.yfilter)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.yfilter)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4_mdt_address.is_set || is_set(ipv4_mdt_address.yfilter)) leaf_name_data.push_back(ipv4_mdt_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.yfilter)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.yfilter)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.yfilter)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.yfilter)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.yfilter)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.yfilter)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.yfilter)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.yfilter)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.yfilter)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.yfilter)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.yfilter)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(l2vpn_vpls_address != nullptr)
    {
        children["l2vpn-vpls-address"] = l2vpn_vpls_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(ipv4_sr_policy_address != nullptr)
    {
        children["ipv4-sr-policy-address"] = ipv4_sr_policy_address;
    }

    if(ipv6_sr_policy_address != nullptr)
    {
        children["ipv6-sr-policy-address"] = ipv6_sr_policy_address;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
        ipv4_mcast_address.value_namespace = name_space;
        ipv4_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
        ipv4_label_address.value_namespace = name_space;
        ipv4_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
        ipv4_tunnel_address.value_namespace = name_space;
        ipv4_tunnel_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address = value;
        ipv4_mdt_address.value_namespace = name_space;
        ipv4_mdt_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
        ipv4vpn_address.value_namespace = name_space;
        ipv4vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
        ipv4vpna_mcastddress.value_namespace = name_space;
        ipv4vpna_mcastddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
        ipv6_mcast_address.value_namespace = name_space;
        ipv6_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
        ipv6_label_address.value_namespace = name_space;
        ipv6_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
        ipv6vpn_address.value_namespace = name_space;
        ipv6vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
        ipv6vpn_mcast_address.value_namespace = name_space;
        ipv6vpn_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
        rt_constraint_address.value_namespace = name_space;
        rt_constraint_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
        ipv6mvpn_address.value_namespace = name_space;
        ipv6mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
        ipv4mvpn_address.value_namespace = name_space;
        ipv4mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
        l2vpn_evpn_address.value_namespace = name_space;
        l2vpn_evpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
        ls_ls_address.value_namespace = name_space;
        ls_ls_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
        ipv4_flowspec_address.value_namespace = name_space;
        ipv4_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
        ipv6_flowspec_address.value_namespace = name_space;
        ipv6_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
        ipv4vpn_flowspec_address.value_namespace = name_space;
        ipv4vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
        ipv6vpn_flowspec_address.value_namespace = name_space;
        ipv6vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address.yfilter = yfilter;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address.yfilter = yfilter;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address.yfilter = yfilter;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address.yfilter = yfilter;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-vpls-address" || name == "l2vpn-mspw-address" || name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-mcast-address" || name == "ipv4-label-address" || name == "ipv4-tunnel-address" || name == "ipv4-mdt-address" || name == "ipv4vpn-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-mcast-address" || name == "ipv6-label-address" || name == "ipv6vpn-address" || name == "ipv6vpn-mcast-address" || name == "rt-constraint-address" || name == "ipv6mvpn-address" || name == "ipv4mvpn-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "ipv4-flowspec-address" || name == "ipv6-flowspec-address" || name == "ipv4vpn-flowspec-address" || name == "ipv6vpn-flowspec-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::Neighbor()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4_mdt_address{YType::str, "ipv4-mdt-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"}
    	,
    l2vpn_vpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::L2VpnVplsAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::L2VpnMspwAddress>())
	,ipv4_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::Ipv6SrPolicyAddress>())
{
    l2vpn_vpls_address->parent = this;
    l2vpn_mspw_address->parent = this;
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;

    yang_name = "neighbor"; yang_parent_name = "update-sub-group"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::~Neighbor()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4_mdt_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| rt_constraint_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv4mvpn_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_data())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_mcast_address.yfilter)
	|| ydk::is_set(ipv4_label_address.yfilter)
	|| ydk::is_set(ipv4_tunnel_address.yfilter)
	|| ydk::is_set(ipv4_mdt_address.yfilter)
	|| ydk::is_set(ipv4vpn_address.yfilter)
	|| ydk::is_set(ipv4vpna_mcastddress.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(ipv6_mcast_address.yfilter)
	|| ydk::is_set(ipv6_label_address.yfilter)
	|| ydk::is_set(ipv6vpn_address.yfilter)
	|| ydk::is_set(ipv6vpn_mcast_address.yfilter)
	|| ydk::is_set(rt_constraint_address.yfilter)
	|| ydk::is_set(ipv6mvpn_address.yfilter)
	|| ydk::is_set(ipv4mvpn_address.yfilter)
	|| ydk::is_set(l2vpn_evpn_address.yfilter)
	|| ydk::is_set(ls_ls_address.yfilter)
	|| ydk::is_set(ipv4_flowspec_address.yfilter)
	|| ydk::is_set(ipv6_flowspec_address.yfilter)
	|| ydk::is_set(ipv4vpn_flowspec_address.yfilter)
	|| ydk::is_set(ipv6vpn_flowspec_address.yfilter)
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_operation())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.yfilter)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.yfilter)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.yfilter)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4_mdt_address.is_set || is_set(ipv4_mdt_address.yfilter)) leaf_name_data.push_back(ipv4_mdt_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.yfilter)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.yfilter)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.yfilter)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.yfilter)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.yfilter)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.yfilter)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.yfilter)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.yfilter)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.yfilter)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.yfilter)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.yfilter)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(l2vpn_vpls_address != nullptr)
    {
        children["l2vpn-vpls-address"] = l2vpn_vpls_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(ipv4_sr_policy_address != nullptr)
    {
        children["ipv4-sr-policy-address"] = ipv4_sr_policy_address;
    }

    if(ipv6_sr_policy_address != nullptr)
    {
        children["ipv6-sr-policy-address"] = ipv6_sr_policy_address;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
        ipv4_mcast_address.value_namespace = name_space;
        ipv4_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
        ipv4_label_address.value_namespace = name_space;
        ipv4_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
        ipv4_tunnel_address.value_namespace = name_space;
        ipv4_tunnel_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address = value;
        ipv4_mdt_address.value_namespace = name_space;
        ipv4_mdt_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
        ipv4vpn_address.value_namespace = name_space;
        ipv4vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
        ipv4vpna_mcastddress.value_namespace = name_space;
        ipv4vpna_mcastddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
        ipv6_mcast_address.value_namespace = name_space;
        ipv6_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
        ipv6_label_address.value_namespace = name_space;
        ipv6_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
        ipv6vpn_address.value_namespace = name_space;
        ipv6vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
        ipv6vpn_mcast_address.value_namespace = name_space;
        ipv6vpn_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
        rt_constraint_address.value_namespace = name_space;
        rt_constraint_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
        ipv6mvpn_address.value_namespace = name_space;
        ipv6mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
        ipv4mvpn_address.value_namespace = name_space;
        ipv4mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
        l2vpn_evpn_address.value_namespace = name_space;
        l2vpn_evpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
        ls_ls_address.value_namespace = name_space;
        ls_ls_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
        ipv4_flowspec_address.value_namespace = name_space;
        ipv4_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
        ipv6_flowspec_address.value_namespace = name_space;
        ipv6_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
        ipv4vpn_flowspec_address.value_namespace = name_space;
        ipv4vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
        ipv6vpn_flowspec_address.value_namespace = name_space;
        ipv6vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address.yfilter = yfilter;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address.yfilter = yfilter;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address.yfilter = yfilter;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address.yfilter = yfilter;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-vpls-address" || name == "l2vpn-mspw-address" || name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-mcast-address" || name == "ipv4-label-address" || name == "ipv4-tunnel-address" || name == "ipv4-mdt-address" || name == "ipv4vpn-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-mcast-address" || name == "ipv6-label-address" || name == "ipv6vpn-address" || name == "ipv6vpn-mcast-address" || name == "rt-constraint-address" || name == "ipv6mvpn-address" || name == "ipv4mvpn-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "ipv4-flowspec-address" || name == "ipv6-flowspec-address" || name == "ipv4vpn-flowspec-address" || name == "ipv6vpn-flowspec-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroups()
{

    yang_name = "update-generation-sub-groups"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::~UpdateGenerationSubGroups()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::has_data() const
{
    for (std::size_t index=0; index<update_generation_sub_group.size(); index++)
    {
        if(update_generation_sub_group[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::has_operation() const
{
    for (std::size_t index=0; index<update_generation_sub_group.size(); index++)
    {
        if(update_generation_sub_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-generation-sub-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "update-generation-sub-group")
    {
        for(auto const & c : update_generation_sub_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup>();
        c->parent = this;
        update_generation_sub_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : update_generation_sub_group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "update-generation-sub-group")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateGenerationSubGroup()
    :
    update_group_index{YType::int32, "update-group-index"},
    sub_group_index{YType::int32, "sub-group-index"},
    sub_group_id{YType::int32, "sub-group-id"},
    process_id{YType::uint32, "process-id"},
    update_vrf_name{YType::str, "update-vrf-name"},
    update_group_af_name{YType::enumeration, "update-group-af-name"},
    sub_group_index_xr{YType::uint32, "sub-group-index-xr"},
    sub_group_id_xr{YType::uint32, "sub-group-id-xr"},
    parent_sub_group_index{YType::uint32, "parent-sub-group-index"},
    parent_sub_group_id{YType::uint32, "parent-sub-group-id"},
    update_group_index_xr{YType::uint32, "update-group-index-xr"},
    update_main_table_version{YType::uint32, "update-main-table-version"},
    update_vrf_table_rib_version{YType::uint32, "update-vrf-table-rib-version"},
    current_update_limit_sub_group{YType::uint32, "current-update-limit-sub-group"},
    configured_update_limit_sub_group{YType::uint32, "configured-update-limit-sub-group"},
    update_out_queue_messages{YType::uint32, "update-out-queue-messages"},
    update_out_queue_size{YType::uint32, "update-out-queue-size"},
    update_throttled{YType::boolean, "update-throttled"},
    refresh_sub_group_count{YType::uint32, "refresh-sub-group-count"},
    filter_group_count{YType::uint32, "filter-group-count"},
    neighbor_count{YType::uint32, "neighbor-count"},
    version{YType::uint32, "version"},
    nsr_version{YType::uint32, "nsr-version"},
    pending_target_version{YType::uint32, "pending-target-version"},
    next_resume_version{YType::uint32, "next-resume-version"},
    update_refresh_target_version{YType::uint32, "update-refresh-target-version"},
    io_write_event_pending{YType::boolean, "io-write-event-pending"},
    update_default_route_sent{YType::boolean, "update-default-route-sent"},
    merge_count{YType::uint32, "merge-count"},
    last_merged_sub_group_index{YType::uint32, "last-merged-sub-group-index"},
    eo_r_attempted{YType::boolean, "eo-r-attempted"},
    last_update_walk_end_age{YType::uint32, "last-update-walk-end-age"},
    last_update_queued_age{YType::uint32, "last-update-queued-age"}
    	,
    creation_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::CreationTimestamp>())
	,last_merge_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastMergeTimestamp>())
	,first_update_walk_start_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::FirstUpdateWalkStartTimestamp>())
	,first_update_walk_end_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::FirstUpdateWalkEndTimestamp>())
	,last_update_walk_start_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastUpdateWalkStartTimestamp>())
	,last_update_walk_end_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastUpdateWalkEndTimestamp>())
	,last_update_queued_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastUpdateQueuedTimestamp>())
	,update_statistics(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics>())
{
    creation_timestamp->parent = this;
    last_merge_timestamp->parent = this;
    first_update_walk_start_timestamp->parent = this;
    first_update_walk_end_timestamp->parent = this;
    last_update_walk_start_timestamp->parent = this;
    last_update_walk_end_timestamp->parent = this;
    last_update_queued_timestamp->parent = this;
    update_statistics->parent = this;

    yang_name = "update-generation-sub-group"; yang_parent_name = "update-generation-sub-groups"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::~UpdateGenerationSubGroup()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::has_data() const
{
    return update_group_index.is_set
	|| sub_group_index.is_set
	|| sub_group_id.is_set
	|| process_id.is_set
	|| update_vrf_name.is_set
	|| update_group_af_name.is_set
	|| sub_group_index_xr.is_set
	|| sub_group_id_xr.is_set
	|| parent_sub_group_index.is_set
	|| parent_sub_group_id.is_set
	|| update_group_index_xr.is_set
	|| update_main_table_version.is_set
	|| update_vrf_table_rib_version.is_set
	|| current_update_limit_sub_group.is_set
	|| configured_update_limit_sub_group.is_set
	|| update_out_queue_messages.is_set
	|| update_out_queue_size.is_set
	|| update_throttled.is_set
	|| refresh_sub_group_count.is_set
	|| filter_group_count.is_set
	|| neighbor_count.is_set
	|| version.is_set
	|| nsr_version.is_set
	|| pending_target_version.is_set
	|| next_resume_version.is_set
	|| update_refresh_target_version.is_set
	|| io_write_event_pending.is_set
	|| update_default_route_sent.is_set
	|| merge_count.is_set
	|| last_merged_sub_group_index.is_set
	|| eo_r_attempted.is_set
	|| last_update_walk_end_age.is_set
	|| last_update_queued_age.is_set
	|| (creation_timestamp !=  nullptr && creation_timestamp->has_data())
	|| (last_merge_timestamp !=  nullptr && last_merge_timestamp->has_data())
	|| (first_update_walk_start_timestamp !=  nullptr && first_update_walk_start_timestamp->has_data())
	|| (first_update_walk_end_timestamp !=  nullptr && first_update_walk_end_timestamp->has_data())
	|| (last_update_walk_start_timestamp !=  nullptr && last_update_walk_start_timestamp->has_data())
	|| (last_update_walk_end_timestamp !=  nullptr && last_update_walk_end_timestamp->has_data())
	|| (last_update_queued_timestamp !=  nullptr && last_update_queued_timestamp->has_data())
	|| (update_statistics !=  nullptr && update_statistics->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(update_group_index.yfilter)
	|| ydk::is_set(sub_group_index.yfilter)
	|| ydk::is_set(sub_group_id.yfilter)
	|| ydk::is_set(process_id.yfilter)
	|| ydk::is_set(update_vrf_name.yfilter)
	|| ydk::is_set(update_group_af_name.yfilter)
	|| ydk::is_set(sub_group_index_xr.yfilter)
	|| ydk::is_set(sub_group_id_xr.yfilter)
	|| ydk::is_set(parent_sub_group_index.yfilter)
	|| ydk::is_set(parent_sub_group_id.yfilter)
	|| ydk::is_set(update_group_index_xr.yfilter)
	|| ydk::is_set(update_main_table_version.yfilter)
	|| ydk::is_set(update_vrf_table_rib_version.yfilter)
	|| ydk::is_set(current_update_limit_sub_group.yfilter)
	|| ydk::is_set(configured_update_limit_sub_group.yfilter)
	|| ydk::is_set(update_out_queue_messages.yfilter)
	|| ydk::is_set(update_out_queue_size.yfilter)
	|| ydk::is_set(update_throttled.yfilter)
	|| ydk::is_set(refresh_sub_group_count.yfilter)
	|| ydk::is_set(filter_group_count.yfilter)
	|| ydk::is_set(neighbor_count.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(nsr_version.yfilter)
	|| ydk::is_set(pending_target_version.yfilter)
	|| ydk::is_set(next_resume_version.yfilter)
	|| ydk::is_set(update_refresh_target_version.yfilter)
	|| ydk::is_set(io_write_event_pending.yfilter)
	|| ydk::is_set(update_default_route_sent.yfilter)
	|| ydk::is_set(merge_count.yfilter)
	|| ydk::is_set(last_merged_sub_group_index.yfilter)
	|| ydk::is_set(eo_r_attempted.yfilter)
	|| ydk::is_set(last_update_walk_end_age.yfilter)
	|| ydk::is_set(last_update_queued_age.yfilter)
	|| (creation_timestamp !=  nullptr && creation_timestamp->has_operation())
	|| (last_merge_timestamp !=  nullptr && last_merge_timestamp->has_operation())
	|| (first_update_walk_start_timestamp !=  nullptr && first_update_walk_start_timestamp->has_operation())
	|| (first_update_walk_end_timestamp !=  nullptr && first_update_walk_end_timestamp->has_operation())
	|| (last_update_walk_start_timestamp !=  nullptr && last_update_walk_start_timestamp->has_operation())
	|| (last_update_walk_end_timestamp !=  nullptr && last_update_walk_end_timestamp->has_operation())
	|| (last_update_queued_timestamp !=  nullptr && last_update_queued_timestamp->has_operation())
	|| (update_statistics !=  nullptr && update_statistics->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-generation-sub-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (update_group_index.is_set || is_set(update_group_index.yfilter)) leaf_name_data.push_back(update_group_index.get_name_leafdata());
    if (sub_group_index.is_set || is_set(sub_group_index.yfilter)) leaf_name_data.push_back(sub_group_index.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.yfilter)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());
    if (process_id.is_set || is_set(process_id.yfilter)) leaf_name_data.push_back(process_id.get_name_leafdata());
    if (update_vrf_name.is_set || is_set(update_vrf_name.yfilter)) leaf_name_data.push_back(update_vrf_name.get_name_leafdata());
    if (update_group_af_name.is_set || is_set(update_group_af_name.yfilter)) leaf_name_data.push_back(update_group_af_name.get_name_leafdata());
    if (sub_group_index_xr.is_set || is_set(sub_group_index_xr.yfilter)) leaf_name_data.push_back(sub_group_index_xr.get_name_leafdata());
    if (sub_group_id_xr.is_set || is_set(sub_group_id_xr.yfilter)) leaf_name_data.push_back(sub_group_id_xr.get_name_leafdata());
    if (parent_sub_group_index.is_set || is_set(parent_sub_group_index.yfilter)) leaf_name_data.push_back(parent_sub_group_index.get_name_leafdata());
    if (parent_sub_group_id.is_set || is_set(parent_sub_group_id.yfilter)) leaf_name_data.push_back(parent_sub_group_id.get_name_leafdata());
    if (update_group_index_xr.is_set || is_set(update_group_index_xr.yfilter)) leaf_name_data.push_back(update_group_index_xr.get_name_leafdata());
    if (update_main_table_version.is_set || is_set(update_main_table_version.yfilter)) leaf_name_data.push_back(update_main_table_version.get_name_leafdata());
    if (update_vrf_table_rib_version.is_set || is_set(update_vrf_table_rib_version.yfilter)) leaf_name_data.push_back(update_vrf_table_rib_version.get_name_leafdata());
    if (current_update_limit_sub_group.is_set || is_set(current_update_limit_sub_group.yfilter)) leaf_name_data.push_back(current_update_limit_sub_group.get_name_leafdata());
    if (configured_update_limit_sub_group.is_set || is_set(configured_update_limit_sub_group.yfilter)) leaf_name_data.push_back(configured_update_limit_sub_group.get_name_leafdata());
    if (update_out_queue_messages.is_set || is_set(update_out_queue_messages.yfilter)) leaf_name_data.push_back(update_out_queue_messages.get_name_leafdata());
    if (update_out_queue_size.is_set || is_set(update_out_queue_size.yfilter)) leaf_name_data.push_back(update_out_queue_size.get_name_leafdata());
    if (update_throttled.is_set || is_set(update_throttled.yfilter)) leaf_name_data.push_back(update_throttled.get_name_leafdata());
    if (refresh_sub_group_count.is_set || is_set(refresh_sub_group_count.yfilter)) leaf_name_data.push_back(refresh_sub_group_count.get_name_leafdata());
    if (filter_group_count.is_set || is_set(filter_group_count.yfilter)) leaf_name_data.push_back(filter_group_count.get_name_leafdata());
    if (neighbor_count.is_set || is_set(neighbor_count.yfilter)) leaf_name_data.push_back(neighbor_count.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (nsr_version.is_set || is_set(nsr_version.yfilter)) leaf_name_data.push_back(nsr_version.get_name_leafdata());
    if (pending_target_version.is_set || is_set(pending_target_version.yfilter)) leaf_name_data.push_back(pending_target_version.get_name_leafdata());
    if (next_resume_version.is_set || is_set(next_resume_version.yfilter)) leaf_name_data.push_back(next_resume_version.get_name_leafdata());
    if (update_refresh_target_version.is_set || is_set(update_refresh_target_version.yfilter)) leaf_name_data.push_back(update_refresh_target_version.get_name_leafdata());
    if (io_write_event_pending.is_set || is_set(io_write_event_pending.yfilter)) leaf_name_data.push_back(io_write_event_pending.get_name_leafdata());
    if (update_default_route_sent.is_set || is_set(update_default_route_sent.yfilter)) leaf_name_data.push_back(update_default_route_sent.get_name_leafdata());
    if (merge_count.is_set || is_set(merge_count.yfilter)) leaf_name_data.push_back(merge_count.get_name_leafdata());
    if (last_merged_sub_group_index.is_set || is_set(last_merged_sub_group_index.yfilter)) leaf_name_data.push_back(last_merged_sub_group_index.get_name_leafdata());
    if (eo_r_attempted.is_set || is_set(eo_r_attempted.yfilter)) leaf_name_data.push_back(eo_r_attempted.get_name_leafdata());
    if (last_update_walk_end_age.is_set || is_set(last_update_walk_end_age.yfilter)) leaf_name_data.push_back(last_update_walk_end_age.get_name_leafdata());
    if (last_update_queued_age.is_set || is_set(last_update_queued_age.yfilter)) leaf_name_data.push_back(last_update_queued_age.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "creation-timestamp")
    {
        if(creation_timestamp == nullptr)
        {
            creation_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::CreationTimestamp>();
        }
        return creation_timestamp;
    }

    if(child_yang_name == "last-merge-timestamp")
    {
        if(last_merge_timestamp == nullptr)
        {
            last_merge_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastMergeTimestamp>();
        }
        return last_merge_timestamp;
    }

    if(child_yang_name == "first-update-walk-start-timestamp")
    {
        if(first_update_walk_start_timestamp == nullptr)
        {
            first_update_walk_start_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::FirstUpdateWalkStartTimestamp>();
        }
        return first_update_walk_start_timestamp;
    }

    if(child_yang_name == "first-update-walk-end-timestamp")
    {
        if(first_update_walk_end_timestamp == nullptr)
        {
            first_update_walk_end_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::FirstUpdateWalkEndTimestamp>();
        }
        return first_update_walk_end_timestamp;
    }

    if(child_yang_name == "last-update-walk-start-timestamp")
    {
        if(last_update_walk_start_timestamp == nullptr)
        {
            last_update_walk_start_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastUpdateWalkStartTimestamp>();
        }
        return last_update_walk_start_timestamp;
    }

    if(child_yang_name == "last-update-walk-end-timestamp")
    {
        if(last_update_walk_end_timestamp == nullptr)
        {
            last_update_walk_end_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastUpdateWalkEndTimestamp>();
        }
        return last_update_walk_end_timestamp;
    }

    if(child_yang_name == "last-update-queued-timestamp")
    {
        if(last_update_queued_timestamp == nullptr)
        {
            last_update_queued_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastUpdateQueuedTimestamp>();
        }
        return last_update_queued_timestamp;
    }

    if(child_yang_name == "update-statistics")
    {
        if(update_statistics == nullptr)
        {
            update_statistics = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics>();
        }
        return update_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(creation_timestamp != nullptr)
    {
        children["creation-timestamp"] = creation_timestamp;
    }

    if(last_merge_timestamp != nullptr)
    {
        children["last-merge-timestamp"] = last_merge_timestamp;
    }

    if(first_update_walk_start_timestamp != nullptr)
    {
        children["first-update-walk-start-timestamp"] = first_update_walk_start_timestamp;
    }

    if(first_update_walk_end_timestamp != nullptr)
    {
        children["first-update-walk-end-timestamp"] = first_update_walk_end_timestamp;
    }

    if(last_update_walk_start_timestamp != nullptr)
    {
        children["last-update-walk-start-timestamp"] = last_update_walk_start_timestamp;
    }

    if(last_update_walk_end_timestamp != nullptr)
    {
        children["last-update-walk-end-timestamp"] = last_update_walk_end_timestamp;
    }

    if(last_update_queued_timestamp != nullptr)
    {
        children["last-update-queued-timestamp"] = last_update_queued_timestamp;
    }

    if(update_statistics != nullptr)
    {
        children["update-statistics"] = update_statistics;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "update-group-index")
    {
        update_group_index = value;
        update_group_index.value_namespace = name_space;
        update_group_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-index")
    {
        sub_group_index = value;
        sub_group_index.value_namespace = name_space;
        sub_group_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
        sub_group_id.value_namespace = name_space;
        sub_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-id")
    {
        process_id = value;
        process_id.value_namespace = name_space;
        process_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-vrf-name")
    {
        update_vrf_name = value;
        update_vrf_name.value_namespace = name_space;
        update_vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-group-af-name")
    {
        update_group_af_name = value;
        update_group_af_name.value_namespace = name_space;
        update_group_af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-index-xr")
    {
        sub_group_index_xr = value;
        sub_group_index_xr.value_namespace = name_space;
        sub_group_index_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-id-xr")
    {
        sub_group_id_xr = value;
        sub_group_id_xr.value_namespace = name_space;
        sub_group_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parent-sub-group-index")
    {
        parent_sub_group_index = value;
        parent_sub_group_index.value_namespace = name_space;
        parent_sub_group_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parent-sub-group-id")
    {
        parent_sub_group_id = value;
        parent_sub_group_id.value_namespace = name_space;
        parent_sub_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-group-index-xr")
    {
        update_group_index_xr = value;
        update_group_index_xr.value_namespace = name_space;
        update_group_index_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-main-table-version")
    {
        update_main_table_version = value;
        update_main_table_version.value_namespace = name_space;
        update_main_table_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-vrf-table-rib-version")
    {
        update_vrf_table_rib_version = value;
        update_vrf_table_rib_version.value_namespace = name_space;
        update_vrf_table_rib_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-update-limit-sub-group")
    {
        current_update_limit_sub_group = value;
        current_update_limit_sub_group.value_namespace = name_space;
        current_update_limit_sub_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-update-limit-sub-group")
    {
        configured_update_limit_sub_group = value;
        configured_update_limit_sub_group.value_namespace = name_space;
        configured_update_limit_sub_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-out-queue-messages")
    {
        update_out_queue_messages = value;
        update_out_queue_messages.value_namespace = name_space;
        update_out_queue_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-out-queue-size")
    {
        update_out_queue_size = value;
        update_out_queue_size.value_namespace = name_space;
        update_out_queue_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-throttled")
    {
        update_throttled = value;
        update_throttled.value_namespace = name_space;
        update_throttled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refresh-sub-group-count")
    {
        refresh_sub_group_count = value;
        refresh_sub_group_count.value_namespace = name_space;
        refresh_sub_group_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filter-group-count")
    {
        filter_group_count = value;
        filter_group_count.value_namespace = name_space;
        filter_group_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-count")
    {
        neighbor_count = value;
        neighbor_count.value_namespace = name_space;
        neighbor_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-version")
    {
        nsr_version = value;
        nsr_version.value_namespace = name_space;
        nsr_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pending-target-version")
    {
        pending_target_version = value;
        pending_target_version.value_namespace = name_space;
        pending_target_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-resume-version")
    {
        next_resume_version = value;
        next_resume_version.value_namespace = name_space;
        next_resume_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-refresh-target-version")
    {
        update_refresh_target_version = value;
        update_refresh_target_version.value_namespace = name_space;
        update_refresh_target_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "io-write-event-pending")
    {
        io_write_event_pending = value;
        io_write_event_pending.value_namespace = name_space;
        io_write_event_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-default-route-sent")
    {
        update_default_route_sent = value;
        update_default_route_sent.value_namespace = name_space;
        update_default_route_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "merge-count")
    {
        merge_count = value;
        merge_count.value_namespace = name_space;
        merge_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-merged-sub-group-index")
    {
        last_merged_sub_group_index = value;
        last_merged_sub_group_index.value_namespace = name_space;
        last_merged_sub_group_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eo-r-attempted")
    {
        eo_r_attempted = value;
        eo_r_attempted.value_namespace = name_space;
        eo_r_attempted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-update-walk-end-age")
    {
        last_update_walk_end_age = value;
        last_update_walk_end_age.value_namespace = name_space;
        last_update_walk_end_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-update-queued-age")
    {
        last_update_queued_age = value;
        last_update_queued_age.value_namespace = name_space;
        last_update_queued_age.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "update-group-index")
    {
        update_group_index.yfilter = yfilter;
    }
    if(value_path == "sub-group-index")
    {
        sub_group_index.yfilter = yfilter;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id.yfilter = yfilter;
    }
    if(value_path == "process-id")
    {
        process_id.yfilter = yfilter;
    }
    if(value_path == "update-vrf-name")
    {
        update_vrf_name.yfilter = yfilter;
    }
    if(value_path == "update-group-af-name")
    {
        update_group_af_name.yfilter = yfilter;
    }
    if(value_path == "sub-group-index-xr")
    {
        sub_group_index_xr.yfilter = yfilter;
    }
    if(value_path == "sub-group-id-xr")
    {
        sub_group_id_xr.yfilter = yfilter;
    }
    if(value_path == "parent-sub-group-index")
    {
        parent_sub_group_index.yfilter = yfilter;
    }
    if(value_path == "parent-sub-group-id")
    {
        parent_sub_group_id.yfilter = yfilter;
    }
    if(value_path == "update-group-index-xr")
    {
        update_group_index_xr.yfilter = yfilter;
    }
    if(value_path == "update-main-table-version")
    {
        update_main_table_version.yfilter = yfilter;
    }
    if(value_path == "update-vrf-table-rib-version")
    {
        update_vrf_table_rib_version.yfilter = yfilter;
    }
    if(value_path == "current-update-limit-sub-group")
    {
        current_update_limit_sub_group.yfilter = yfilter;
    }
    if(value_path == "configured-update-limit-sub-group")
    {
        configured_update_limit_sub_group.yfilter = yfilter;
    }
    if(value_path == "update-out-queue-messages")
    {
        update_out_queue_messages.yfilter = yfilter;
    }
    if(value_path == "update-out-queue-size")
    {
        update_out_queue_size.yfilter = yfilter;
    }
    if(value_path == "update-throttled")
    {
        update_throttled.yfilter = yfilter;
    }
    if(value_path == "refresh-sub-group-count")
    {
        refresh_sub_group_count.yfilter = yfilter;
    }
    if(value_path == "filter-group-count")
    {
        filter_group_count.yfilter = yfilter;
    }
    if(value_path == "neighbor-count")
    {
        neighbor_count.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "nsr-version")
    {
        nsr_version.yfilter = yfilter;
    }
    if(value_path == "pending-target-version")
    {
        pending_target_version.yfilter = yfilter;
    }
    if(value_path == "next-resume-version")
    {
        next_resume_version.yfilter = yfilter;
    }
    if(value_path == "update-refresh-target-version")
    {
        update_refresh_target_version.yfilter = yfilter;
    }
    if(value_path == "io-write-event-pending")
    {
        io_write_event_pending.yfilter = yfilter;
    }
    if(value_path == "update-default-route-sent")
    {
        update_default_route_sent.yfilter = yfilter;
    }
    if(value_path == "merge-count")
    {
        merge_count.yfilter = yfilter;
    }
    if(value_path == "last-merged-sub-group-index")
    {
        last_merged_sub_group_index.yfilter = yfilter;
    }
    if(value_path == "eo-r-attempted")
    {
        eo_r_attempted.yfilter = yfilter;
    }
    if(value_path == "last-update-walk-end-age")
    {
        last_update_walk_end_age.yfilter = yfilter;
    }
    if(value_path == "last-update-queued-age")
    {
        last_update_queued_age.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "creation-timestamp" || name == "last-merge-timestamp" || name == "first-update-walk-start-timestamp" || name == "first-update-walk-end-timestamp" || name == "last-update-walk-start-timestamp" || name == "last-update-walk-end-timestamp" || name == "last-update-queued-timestamp" || name == "update-statistics" || name == "update-group-index" || name == "sub-group-index" || name == "sub-group-id" || name == "process-id" || name == "update-vrf-name" || name == "update-group-af-name" || name == "sub-group-index-xr" || name == "sub-group-id-xr" || name == "parent-sub-group-index" || name == "parent-sub-group-id" || name == "update-group-index-xr" || name == "update-main-table-version" || name == "update-vrf-table-rib-version" || name == "current-update-limit-sub-group" || name == "configured-update-limit-sub-group" || name == "update-out-queue-messages" || name == "update-out-queue-size" || name == "update-throttled" || name == "refresh-sub-group-count" || name == "filter-group-count" || name == "neighbor-count" || name == "version" || name == "nsr-version" || name == "pending-target-version" || name == "next-resume-version" || name == "update-refresh-target-version" || name == "io-write-event-pending" || name == "update-default-route-sent" || name == "merge-count" || name == "last-merged-sub-group-index" || name == "eo-r-attempted" || name == "last-update-walk-end-age" || name == "last-update-queued-age")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::CreationTimestamp::CreationTimestamp()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "creation-timestamp"; yang_parent_name = "update-generation-sub-group"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::CreationTimestamp::~CreationTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::CreationTimestamp::has_data() const
{
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::CreationTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::CreationTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "creation-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::CreationTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::CreationTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::CreationTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::CreationTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::CreationTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::CreationTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastMergeTimestamp::LastMergeTimestamp()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "last-merge-timestamp"; yang_parent_name = "update-generation-sub-group"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastMergeTimestamp::~LastMergeTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastMergeTimestamp::has_data() const
{
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastMergeTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastMergeTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-merge-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastMergeTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastMergeTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastMergeTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastMergeTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastMergeTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastMergeTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::FirstUpdateWalkStartTimestamp::FirstUpdateWalkStartTimestamp()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "first-update-walk-start-timestamp"; yang_parent_name = "update-generation-sub-group"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::FirstUpdateWalkStartTimestamp::~FirstUpdateWalkStartTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::FirstUpdateWalkStartTimestamp::has_data() const
{
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::FirstUpdateWalkStartTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::FirstUpdateWalkStartTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "first-update-walk-start-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::FirstUpdateWalkStartTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::FirstUpdateWalkStartTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::FirstUpdateWalkStartTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::FirstUpdateWalkStartTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::FirstUpdateWalkStartTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::FirstUpdateWalkStartTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::FirstUpdateWalkEndTimestamp::FirstUpdateWalkEndTimestamp()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "first-update-walk-end-timestamp"; yang_parent_name = "update-generation-sub-group"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::FirstUpdateWalkEndTimestamp::~FirstUpdateWalkEndTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::FirstUpdateWalkEndTimestamp::has_data() const
{
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::FirstUpdateWalkEndTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::FirstUpdateWalkEndTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "first-update-walk-end-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::FirstUpdateWalkEndTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::FirstUpdateWalkEndTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::FirstUpdateWalkEndTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::FirstUpdateWalkEndTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::FirstUpdateWalkEndTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::FirstUpdateWalkEndTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastUpdateWalkStartTimestamp::LastUpdateWalkStartTimestamp()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "last-update-walk-start-timestamp"; yang_parent_name = "update-generation-sub-group"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastUpdateWalkStartTimestamp::~LastUpdateWalkStartTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastUpdateWalkStartTimestamp::has_data() const
{
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastUpdateWalkStartTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastUpdateWalkStartTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-update-walk-start-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastUpdateWalkStartTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastUpdateWalkStartTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastUpdateWalkStartTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastUpdateWalkStartTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastUpdateWalkStartTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastUpdateWalkStartTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastUpdateWalkEndTimestamp::LastUpdateWalkEndTimestamp()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "last-update-walk-end-timestamp"; yang_parent_name = "update-generation-sub-group"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastUpdateWalkEndTimestamp::~LastUpdateWalkEndTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastUpdateWalkEndTimestamp::has_data() const
{
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastUpdateWalkEndTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastUpdateWalkEndTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-update-walk-end-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastUpdateWalkEndTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastUpdateWalkEndTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastUpdateWalkEndTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastUpdateWalkEndTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastUpdateWalkEndTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastUpdateWalkEndTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastUpdateQueuedTimestamp::LastUpdateQueuedTimestamp()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "last-update-queued-timestamp"; yang_parent_name = "update-generation-sub-group"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastUpdateQueuedTimestamp::~LastUpdateQueuedTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastUpdateQueuedTimestamp::has_data() const
{
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastUpdateQueuedTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastUpdateQueuedTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-update-queued-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastUpdateQueuedTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastUpdateQueuedTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastUpdateQueuedTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastUpdateQueuedTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastUpdateQueuedTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::LastUpdateQueuedTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::UpdateStatistics()
    :
    update_out_queue_messages_high{YType::uint32, "update-out-queue-messages-high"},
    update_out_queue_messages_cumulative{YType::uint32, "update-out-queue-messages-cumulative"},
    update_out_queue_messages_discarded{YType::uint32, "update-out-queue-messages-discarded"},
    update_out_queue_messages_cleared{YType::uint32, "update-out-queue-messages-cleared"},
    update_out_queue_size_high{YType::uint32, "update-out-queue-size-high"},
    update_out_queue_size_cumulative{YType::uint64, "update-out-queue-size-cumulative"},
    update_out_queue_size_discarded{YType::uint64, "update-out-queue-size-discarded"},
    update_out_queue_size_cleared{YType::uint64, "update-out-queue-size-cleared"},
    last_update_discard_age{YType::uint32, "last-update-discard-age"},
    last_update_cleard_age{YType::uint32, "last-update-cleard-age"},
    update_throttle_count{YType::uint32, "update-throttle-count"},
    last_update_throttle_age{YType::uint32, "last-update-throttle-age"},
    update_recovery_count{YType::uint32, "update-recovery-count"},
    last_update_recovery_age{YType::uint32, "last-update-recovery-age"},
    update_memory_allocation_fail_count{YType::uint32, "update-memory-allocation-fail-count"},
    last_update_memory_allocation_fail_age{YType::uint32, "last-update-memory-allocation-fail-age"}
    	,
    last_update_discard_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateDiscardTimestamp>())
	,last_update_cleared_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateClearedTimestamp>())
	,last_update_throttle_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateThrottleTimestamp>())
	,last_update_recovery_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateRecoveryTimestamp>())
	,last_update_memory_allocation_fail_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateMemoryAllocationFailTimestamp>())
{
    last_update_discard_timestamp->parent = this;
    last_update_cleared_timestamp->parent = this;
    last_update_throttle_timestamp->parent = this;
    last_update_recovery_timestamp->parent = this;
    last_update_memory_allocation_fail_timestamp->parent = this;

    yang_name = "update-statistics"; yang_parent_name = "update-generation-sub-group"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::~UpdateStatistics()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::has_data() const
{
    return update_out_queue_messages_high.is_set
	|| update_out_queue_messages_cumulative.is_set
	|| update_out_queue_messages_discarded.is_set
	|| update_out_queue_messages_cleared.is_set
	|| update_out_queue_size_high.is_set
	|| update_out_queue_size_cumulative.is_set
	|| update_out_queue_size_discarded.is_set
	|| update_out_queue_size_cleared.is_set
	|| last_update_discard_age.is_set
	|| last_update_cleard_age.is_set
	|| update_throttle_count.is_set
	|| last_update_throttle_age.is_set
	|| update_recovery_count.is_set
	|| last_update_recovery_age.is_set
	|| update_memory_allocation_fail_count.is_set
	|| last_update_memory_allocation_fail_age.is_set
	|| (last_update_discard_timestamp !=  nullptr && last_update_discard_timestamp->has_data())
	|| (last_update_cleared_timestamp !=  nullptr && last_update_cleared_timestamp->has_data())
	|| (last_update_throttle_timestamp !=  nullptr && last_update_throttle_timestamp->has_data())
	|| (last_update_recovery_timestamp !=  nullptr && last_update_recovery_timestamp->has_data())
	|| (last_update_memory_allocation_fail_timestamp !=  nullptr && last_update_memory_allocation_fail_timestamp->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(update_out_queue_messages_high.yfilter)
	|| ydk::is_set(update_out_queue_messages_cumulative.yfilter)
	|| ydk::is_set(update_out_queue_messages_discarded.yfilter)
	|| ydk::is_set(update_out_queue_messages_cleared.yfilter)
	|| ydk::is_set(update_out_queue_size_high.yfilter)
	|| ydk::is_set(update_out_queue_size_cumulative.yfilter)
	|| ydk::is_set(update_out_queue_size_discarded.yfilter)
	|| ydk::is_set(update_out_queue_size_cleared.yfilter)
	|| ydk::is_set(last_update_discard_age.yfilter)
	|| ydk::is_set(last_update_cleard_age.yfilter)
	|| ydk::is_set(update_throttle_count.yfilter)
	|| ydk::is_set(last_update_throttle_age.yfilter)
	|| ydk::is_set(update_recovery_count.yfilter)
	|| ydk::is_set(last_update_recovery_age.yfilter)
	|| ydk::is_set(update_memory_allocation_fail_count.yfilter)
	|| ydk::is_set(last_update_memory_allocation_fail_age.yfilter)
	|| (last_update_discard_timestamp !=  nullptr && last_update_discard_timestamp->has_operation())
	|| (last_update_cleared_timestamp !=  nullptr && last_update_cleared_timestamp->has_operation())
	|| (last_update_throttle_timestamp !=  nullptr && last_update_throttle_timestamp->has_operation())
	|| (last_update_recovery_timestamp !=  nullptr && last_update_recovery_timestamp->has_operation())
	|| (last_update_memory_allocation_fail_timestamp !=  nullptr && last_update_memory_allocation_fail_timestamp->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (update_out_queue_messages_high.is_set || is_set(update_out_queue_messages_high.yfilter)) leaf_name_data.push_back(update_out_queue_messages_high.get_name_leafdata());
    if (update_out_queue_messages_cumulative.is_set || is_set(update_out_queue_messages_cumulative.yfilter)) leaf_name_data.push_back(update_out_queue_messages_cumulative.get_name_leafdata());
    if (update_out_queue_messages_discarded.is_set || is_set(update_out_queue_messages_discarded.yfilter)) leaf_name_data.push_back(update_out_queue_messages_discarded.get_name_leafdata());
    if (update_out_queue_messages_cleared.is_set || is_set(update_out_queue_messages_cleared.yfilter)) leaf_name_data.push_back(update_out_queue_messages_cleared.get_name_leafdata());
    if (update_out_queue_size_high.is_set || is_set(update_out_queue_size_high.yfilter)) leaf_name_data.push_back(update_out_queue_size_high.get_name_leafdata());
    if (update_out_queue_size_cumulative.is_set || is_set(update_out_queue_size_cumulative.yfilter)) leaf_name_data.push_back(update_out_queue_size_cumulative.get_name_leafdata());
    if (update_out_queue_size_discarded.is_set || is_set(update_out_queue_size_discarded.yfilter)) leaf_name_data.push_back(update_out_queue_size_discarded.get_name_leafdata());
    if (update_out_queue_size_cleared.is_set || is_set(update_out_queue_size_cleared.yfilter)) leaf_name_data.push_back(update_out_queue_size_cleared.get_name_leafdata());
    if (last_update_discard_age.is_set || is_set(last_update_discard_age.yfilter)) leaf_name_data.push_back(last_update_discard_age.get_name_leafdata());
    if (last_update_cleard_age.is_set || is_set(last_update_cleard_age.yfilter)) leaf_name_data.push_back(last_update_cleard_age.get_name_leafdata());
    if (update_throttle_count.is_set || is_set(update_throttle_count.yfilter)) leaf_name_data.push_back(update_throttle_count.get_name_leafdata());
    if (last_update_throttle_age.is_set || is_set(last_update_throttle_age.yfilter)) leaf_name_data.push_back(last_update_throttle_age.get_name_leafdata());
    if (update_recovery_count.is_set || is_set(update_recovery_count.yfilter)) leaf_name_data.push_back(update_recovery_count.get_name_leafdata());
    if (last_update_recovery_age.is_set || is_set(last_update_recovery_age.yfilter)) leaf_name_data.push_back(last_update_recovery_age.get_name_leafdata());
    if (update_memory_allocation_fail_count.is_set || is_set(update_memory_allocation_fail_count.yfilter)) leaf_name_data.push_back(update_memory_allocation_fail_count.get_name_leafdata());
    if (last_update_memory_allocation_fail_age.is_set || is_set(last_update_memory_allocation_fail_age.yfilter)) leaf_name_data.push_back(last_update_memory_allocation_fail_age.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-update-discard-timestamp")
    {
        if(last_update_discard_timestamp == nullptr)
        {
            last_update_discard_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateDiscardTimestamp>();
        }
        return last_update_discard_timestamp;
    }

    if(child_yang_name == "last-update-cleared-timestamp")
    {
        if(last_update_cleared_timestamp == nullptr)
        {
            last_update_cleared_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateClearedTimestamp>();
        }
        return last_update_cleared_timestamp;
    }

    if(child_yang_name == "last-update-throttle-timestamp")
    {
        if(last_update_throttle_timestamp == nullptr)
        {
            last_update_throttle_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateThrottleTimestamp>();
        }
        return last_update_throttle_timestamp;
    }

    if(child_yang_name == "last-update-recovery-timestamp")
    {
        if(last_update_recovery_timestamp == nullptr)
        {
            last_update_recovery_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateRecoveryTimestamp>();
        }
        return last_update_recovery_timestamp;
    }

    if(child_yang_name == "last-update-memory-allocation-fail-timestamp")
    {
        if(last_update_memory_allocation_fail_timestamp == nullptr)
        {
            last_update_memory_allocation_fail_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateMemoryAllocationFailTimestamp>();
        }
        return last_update_memory_allocation_fail_timestamp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(last_update_discard_timestamp != nullptr)
    {
        children["last-update-discard-timestamp"] = last_update_discard_timestamp;
    }

    if(last_update_cleared_timestamp != nullptr)
    {
        children["last-update-cleared-timestamp"] = last_update_cleared_timestamp;
    }

    if(last_update_throttle_timestamp != nullptr)
    {
        children["last-update-throttle-timestamp"] = last_update_throttle_timestamp;
    }

    if(last_update_recovery_timestamp != nullptr)
    {
        children["last-update-recovery-timestamp"] = last_update_recovery_timestamp;
    }

    if(last_update_memory_allocation_fail_timestamp != nullptr)
    {
        children["last-update-memory-allocation-fail-timestamp"] = last_update_memory_allocation_fail_timestamp;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "update-out-queue-messages-high")
    {
        update_out_queue_messages_high = value;
        update_out_queue_messages_high.value_namespace = name_space;
        update_out_queue_messages_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-out-queue-messages-cumulative")
    {
        update_out_queue_messages_cumulative = value;
        update_out_queue_messages_cumulative.value_namespace = name_space;
        update_out_queue_messages_cumulative.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-out-queue-messages-discarded")
    {
        update_out_queue_messages_discarded = value;
        update_out_queue_messages_discarded.value_namespace = name_space;
        update_out_queue_messages_discarded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-out-queue-messages-cleared")
    {
        update_out_queue_messages_cleared = value;
        update_out_queue_messages_cleared.value_namespace = name_space;
        update_out_queue_messages_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-out-queue-size-high")
    {
        update_out_queue_size_high = value;
        update_out_queue_size_high.value_namespace = name_space;
        update_out_queue_size_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-out-queue-size-cumulative")
    {
        update_out_queue_size_cumulative = value;
        update_out_queue_size_cumulative.value_namespace = name_space;
        update_out_queue_size_cumulative.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-out-queue-size-discarded")
    {
        update_out_queue_size_discarded = value;
        update_out_queue_size_discarded.value_namespace = name_space;
        update_out_queue_size_discarded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-out-queue-size-cleared")
    {
        update_out_queue_size_cleared = value;
        update_out_queue_size_cleared.value_namespace = name_space;
        update_out_queue_size_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-update-discard-age")
    {
        last_update_discard_age = value;
        last_update_discard_age.value_namespace = name_space;
        last_update_discard_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-update-cleard-age")
    {
        last_update_cleard_age = value;
        last_update_cleard_age.value_namespace = name_space;
        last_update_cleard_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-throttle-count")
    {
        update_throttle_count = value;
        update_throttle_count.value_namespace = name_space;
        update_throttle_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-update-throttle-age")
    {
        last_update_throttle_age = value;
        last_update_throttle_age.value_namespace = name_space;
        last_update_throttle_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-recovery-count")
    {
        update_recovery_count = value;
        update_recovery_count.value_namespace = name_space;
        update_recovery_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-update-recovery-age")
    {
        last_update_recovery_age = value;
        last_update_recovery_age.value_namespace = name_space;
        last_update_recovery_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-memory-allocation-fail-count")
    {
        update_memory_allocation_fail_count = value;
        update_memory_allocation_fail_count.value_namespace = name_space;
        update_memory_allocation_fail_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-update-memory-allocation-fail-age")
    {
        last_update_memory_allocation_fail_age = value;
        last_update_memory_allocation_fail_age.value_namespace = name_space;
        last_update_memory_allocation_fail_age.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "update-out-queue-messages-high")
    {
        update_out_queue_messages_high.yfilter = yfilter;
    }
    if(value_path == "update-out-queue-messages-cumulative")
    {
        update_out_queue_messages_cumulative.yfilter = yfilter;
    }
    if(value_path == "update-out-queue-messages-discarded")
    {
        update_out_queue_messages_discarded.yfilter = yfilter;
    }
    if(value_path == "update-out-queue-messages-cleared")
    {
        update_out_queue_messages_cleared.yfilter = yfilter;
    }
    if(value_path == "update-out-queue-size-high")
    {
        update_out_queue_size_high.yfilter = yfilter;
    }
    if(value_path == "update-out-queue-size-cumulative")
    {
        update_out_queue_size_cumulative.yfilter = yfilter;
    }
    if(value_path == "update-out-queue-size-discarded")
    {
        update_out_queue_size_discarded.yfilter = yfilter;
    }
    if(value_path == "update-out-queue-size-cleared")
    {
        update_out_queue_size_cleared.yfilter = yfilter;
    }
    if(value_path == "last-update-discard-age")
    {
        last_update_discard_age.yfilter = yfilter;
    }
    if(value_path == "last-update-cleard-age")
    {
        last_update_cleard_age.yfilter = yfilter;
    }
    if(value_path == "update-throttle-count")
    {
        update_throttle_count.yfilter = yfilter;
    }
    if(value_path == "last-update-throttle-age")
    {
        last_update_throttle_age.yfilter = yfilter;
    }
    if(value_path == "update-recovery-count")
    {
        update_recovery_count.yfilter = yfilter;
    }
    if(value_path == "last-update-recovery-age")
    {
        last_update_recovery_age.yfilter = yfilter;
    }
    if(value_path == "update-memory-allocation-fail-count")
    {
        update_memory_allocation_fail_count.yfilter = yfilter;
    }
    if(value_path == "last-update-memory-allocation-fail-age")
    {
        last_update_memory_allocation_fail_age.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-update-discard-timestamp" || name == "last-update-cleared-timestamp" || name == "last-update-throttle-timestamp" || name == "last-update-recovery-timestamp" || name == "last-update-memory-allocation-fail-timestamp" || name == "update-out-queue-messages-high" || name == "update-out-queue-messages-cumulative" || name == "update-out-queue-messages-discarded" || name == "update-out-queue-messages-cleared" || name == "update-out-queue-size-high" || name == "update-out-queue-size-cumulative" || name == "update-out-queue-size-discarded" || name == "update-out-queue-size-cleared" || name == "last-update-discard-age" || name == "last-update-cleard-age" || name == "update-throttle-count" || name == "last-update-throttle-age" || name == "update-recovery-count" || name == "last-update-recovery-age" || name == "update-memory-allocation-fail-count" || name == "last-update-memory-allocation-fail-age")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateDiscardTimestamp::LastUpdateDiscardTimestamp()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "last-update-discard-timestamp"; yang_parent_name = "update-statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateDiscardTimestamp::~LastUpdateDiscardTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateDiscardTimestamp::has_data() const
{
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateDiscardTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateDiscardTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-update-discard-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateDiscardTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateDiscardTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateDiscardTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateDiscardTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateDiscardTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateDiscardTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateClearedTimestamp::LastUpdateClearedTimestamp()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "last-update-cleared-timestamp"; yang_parent_name = "update-statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateClearedTimestamp::~LastUpdateClearedTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateClearedTimestamp::has_data() const
{
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateClearedTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateClearedTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-update-cleared-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateClearedTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateClearedTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateClearedTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateClearedTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateClearedTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateClearedTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateThrottleTimestamp::LastUpdateThrottleTimestamp()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "last-update-throttle-timestamp"; yang_parent_name = "update-statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateThrottleTimestamp::~LastUpdateThrottleTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateThrottleTimestamp::has_data() const
{
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateThrottleTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateThrottleTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-update-throttle-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateThrottleTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateThrottleTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateThrottleTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateThrottleTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateThrottleTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateThrottleTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateRecoveryTimestamp::LastUpdateRecoveryTimestamp()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "last-update-recovery-timestamp"; yang_parent_name = "update-statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateRecoveryTimestamp::~LastUpdateRecoveryTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateRecoveryTimestamp::has_data() const
{
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateRecoveryTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateRecoveryTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-update-recovery-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateRecoveryTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateRecoveryTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateRecoveryTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateRecoveryTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateRecoveryTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateRecoveryTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateMemoryAllocationFailTimestamp::LastUpdateMemoryAllocationFailTimestamp()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "last-update-memory-allocation-fail-timestamp"; yang_parent_name = "update-statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateMemoryAllocationFailTimestamp::~LastUpdateMemoryAllocationFailTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateMemoryAllocationFailTimestamp::has_data() const
{
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateMemoryAllocationFailTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateMemoryAllocationFailTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-update-memory-allocation-fail-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateMemoryAllocationFailTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateMemoryAllocationFailTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateMemoryAllocationFailTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateMemoryAllocationFailTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateMemoryAllocationFailTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups::UpdateGenerationSubGroup::UpdateStatistics::LastUpdateMemoryAllocationFailTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamilies()
{

    yang_name = "next-hop-address-families"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::~NextHopAddressFamilies()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::has_data() const
{
    for (std::size_t index=0; index<next_hop_address_family.size(); index++)
    {
        if(next_hop_address_family[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::has_operation() const
{
    for (std::size_t index=0; index<next_hop_address_family.size(); index++)
    {
        if(next_hop_address_family[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop-address-families";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop-address-family")
    {
        for(auto const & c : next_hop_address_family)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily>();
        c->parent = this;
        next_hop_address_family.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : next_hop_address_family)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop-address-family")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAddressFamily()
    :
    next_hop_af_name{YType::enumeration, "next-hop-af-name"}
    	,
    next_hop_af_vrf_af(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfVrfAf>())
	,next_hop_afs(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs>())
{
    next_hop_af_vrf_af->parent = this;
    next_hop_afs->parent = this;

    yang_name = "next-hop-address-family"; yang_parent_name = "next-hop-address-families"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::~NextHopAddressFamily()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::has_data() const
{
    return next_hop_af_name.is_set
	|| (next_hop_af_vrf_af !=  nullptr && next_hop_af_vrf_af->has_data())
	|| (next_hop_afs !=  nullptr && next_hop_afs->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop_af_name.yfilter)
	|| (next_hop_af_vrf_af !=  nullptr && next_hop_af_vrf_af->has_operation())
	|| (next_hop_afs !=  nullptr && next_hop_afs->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop-address-family" <<"[next-hop-af-name='" <<next_hop_af_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_af_name.is_set || is_set(next_hop_af_name.yfilter)) leaf_name_data.push_back(next_hop_af_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop-af-vrf-af")
    {
        if(next_hop_af_vrf_af == nullptr)
        {
            next_hop_af_vrf_af = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfVrfAf>();
        }
        return next_hop_af_vrf_af;
    }

    if(child_yang_name == "next-hop-afs")
    {
        if(next_hop_afs == nullptr)
        {
            next_hop_afs = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs>();
        }
        return next_hop_afs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(next_hop_af_vrf_af != nullptr)
    {
        children["next-hop-af-vrf-af"] = next_hop_af_vrf_af;
    }

    if(next_hop_afs != nullptr)
    {
        children["next-hop-afs"] = next_hop_afs;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop-af-name")
    {
        next_hop_af_name = value;
        next_hop_af_name.value_namespace = name_space;
        next_hop_af_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop-af-name")
    {
        next_hop_af_name.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop-af-vrf-af" || name == "next-hop-afs" || name == "next-hop-af-name")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfVrfAf::NextHopAfVrfAf()
    :
    af_name{YType::enumeration, "af-name"},
    gwaf_name{YType::enumeration, "gwaf-name"},
    total_nexthops{YType::uint32, "total-nexthops"},
    critical_trigger_delay{YType::uint32, "critical-trigger-delay"},
    non_critical_trigger_delay{YType::uint32, "non-critical-trigger-delay"},
    table_active{YType::boolean, "table-active"},
    nh_rib_up{YType::boolean, "nh-rib-up"},
    nh_rib_version{YType::uint32, "nh-rib-version"},
    nh_nexthop_version{YType::uint32, "nh-nexthop-version"},
    nh_table_id{YType::uint32, "nh-table-id"},
    epe_table_version{YType::uint32, "epe-table-version"},
    epe_label_version{YType::uint32, "epe-label-version"},
    epe_downloaded_version{YType::uint32, "epe-downloaded-version"},
    epe_standby_version{YType::uint32, "epe-standby-version"}
    	,
    performance_statistics(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfVrfAf::PerformanceStatistics>())
{
    performance_statistics->parent = this;

    yang_name = "next-hop-af-vrf-af"; yang_parent_name = "next-hop-address-family"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfVrfAf::~NextHopAfVrfAf()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfVrfAf::has_data() const
{
    return af_name.is_set
	|| gwaf_name.is_set
	|| total_nexthops.is_set
	|| critical_trigger_delay.is_set
	|| non_critical_trigger_delay.is_set
	|| table_active.is_set
	|| nh_rib_up.is_set
	|| nh_rib_version.is_set
	|| nh_nexthop_version.is_set
	|| nh_table_id.is_set
	|| epe_table_version.is_set
	|| epe_label_version.is_set
	|| epe_downloaded_version.is_set
	|| epe_standby_version.is_set
	|| (performance_statistics !=  nullptr && performance_statistics->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfVrfAf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(gwaf_name.yfilter)
	|| ydk::is_set(total_nexthops.yfilter)
	|| ydk::is_set(critical_trigger_delay.yfilter)
	|| ydk::is_set(non_critical_trigger_delay.yfilter)
	|| ydk::is_set(table_active.yfilter)
	|| ydk::is_set(nh_rib_up.yfilter)
	|| ydk::is_set(nh_rib_version.yfilter)
	|| ydk::is_set(nh_nexthop_version.yfilter)
	|| ydk::is_set(nh_table_id.yfilter)
	|| ydk::is_set(epe_table_version.yfilter)
	|| ydk::is_set(epe_label_version.yfilter)
	|| ydk::is_set(epe_downloaded_version.yfilter)
	|| ydk::is_set(epe_standby_version.yfilter)
	|| (performance_statistics !=  nullptr && performance_statistics->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfVrfAf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop-af-vrf-af";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfVrfAf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (gwaf_name.is_set || is_set(gwaf_name.yfilter)) leaf_name_data.push_back(gwaf_name.get_name_leafdata());
    if (total_nexthops.is_set || is_set(total_nexthops.yfilter)) leaf_name_data.push_back(total_nexthops.get_name_leafdata());
    if (critical_trigger_delay.is_set || is_set(critical_trigger_delay.yfilter)) leaf_name_data.push_back(critical_trigger_delay.get_name_leafdata());
    if (non_critical_trigger_delay.is_set || is_set(non_critical_trigger_delay.yfilter)) leaf_name_data.push_back(non_critical_trigger_delay.get_name_leafdata());
    if (table_active.is_set || is_set(table_active.yfilter)) leaf_name_data.push_back(table_active.get_name_leafdata());
    if (nh_rib_up.is_set || is_set(nh_rib_up.yfilter)) leaf_name_data.push_back(nh_rib_up.get_name_leafdata());
    if (nh_rib_version.is_set || is_set(nh_rib_version.yfilter)) leaf_name_data.push_back(nh_rib_version.get_name_leafdata());
    if (nh_nexthop_version.is_set || is_set(nh_nexthop_version.yfilter)) leaf_name_data.push_back(nh_nexthop_version.get_name_leafdata());
    if (nh_table_id.is_set || is_set(nh_table_id.yfilter)) leaf_name_data.push_back(nh_table_id.get_name_leafdata());
    if (epe_table_version.is_set || is_set(epe_table_version.yfilter)) leaf_name_data.push_back(epe_table_version.get_name_leafdata());
    if (epe_label_version.is_set || is_set(epe_label_version.yfilter)) leaf_name_data.push_back(epe_label_version.get_name_leafdata());
    if (epe_downloaded_version.is_set || is_set(epe_downloaded_version.yfilter)) leaf_name_data.push_back(epe_downloaded_version.get_name_leafdata());
    if (epe_standby_version.is_set || is_set(epe_standby_version.yfilter)) leaf_name_data.push_back(epe_standby_version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfVrfAf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "performance-statistics")
    {
        if(performance_statistics == nullptr)
        {
            performance_statistics = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfVrfAf::PerformanceStatistics>();
        }
        return performance_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfVrfAf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(performance_statistics != nullptr)
    {
        children["performance-statistics"] = performance_statistics;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfVrfAf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gwaf-name")
    {
        gwaf_name = value;
        gwaf_name.value_namespace = name_space;
        gwaf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-nexthops")
    {
        total_nexthops = value;
        total_nexthops.value_namespace = name_space;
        total_nexthops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "critical-trigger-delay")
    {
        critical_trigger_delay = value;
        critical_trigger_delay.value_namespace = name_space;
        critical_trigger_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-critical-trigger-delay")
    {
        non_critical_trigger_delay = value;
        non_critical_trigger_delay.value_namespace = name_space;
        non_critical_trigger_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-active")
    {
        table_active = value;
        table_active.value_namespace = name_space;
        table_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nh-rib-up")
    {
        nh_rib_up = value;
        nh_rib_up.value_namespace = name_space;
        nh_rib_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nh-rib-version")
    {
        nh_rib_version = value;
        nh_rib_version.value_namespace = name_space;
        nh_rib_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nh-nexthop-version")
    {
        nh_nexthop_version = value;
        nh_nexthop_version.value_namespace = name_space;
        nh_nexthop_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nh-table-id")
    {
        nh_table_id = value;
        nh_table_id.value_namespace = name_space;
        nh_table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "epe-table-version")
    {
        epe_table_version = value;
        epe_table_version.value_namespace = name_space;
        epe_table_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "epe-label-version")
    {
        epe_label_version = value;
        epe_label_version.value_namespace = name_space;
        epe_label_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "epe-downloaded-version")
    {
        epe_downloaded_version = value;
        epe_downloaded_version.value_namespace = name_space;
        epe_downloaded_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "epe-standby-version")
    {
        epe_standby_version = value;
        epe_standby_version.value_namespace = name_space;
        epe_standby_version.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfVrfAf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "gwaf-name")
    {
        gwaf_name.yfilter = yfilter;
    }
    if(value_path == "total-nexthops")
    {
        total_nexthops.yfilter = yfilter;
    }
    if(value_path == "critical-trigger-delay")
    {
        critical_trigger_delay.yfilter = yfilter;
    }
    if(value_path == "non-critical-trigger-delay")
    {
        non_critical_trigger_delay.yfilter = yfilter;
    }
    if(value_path == "table-active")
    {
        table_active.yfilter = yfilter;
    }
    if(value_path == "nh-rib-up")
    {
        nh_rib_up.yfilter = yfilter;
    }
    if(value_path == "nh-rib-version")
    {
        nh_rib_version.yfilter = yfilter;
    }
    if(value_path == "nh-nexthop-version")
    {
        nh_nexthop_version.yfilter = yfilter;
    }
    if(value_path == "nh-table-id")
    {
        nh_table_id.yfilter = yfilter;
    }
    if(value_path == "epe-table-version")
    {
        epe_table_version.yfilter = yfilter;
    }
    if(value_path == "epe-label-version")
    {
        epe_label_version.yfilter = yfilter;
    }
    if(value_path == "epe-downloaded-version")
    {
        epe_downloaded_version.yfilter = yfilter;
    }
    if(value_path == "epe-standby-version")
    {
        epe_standby_version.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfVrfAf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "performance-statistics" || name == "af-name" || name == "gwaf-name" || name == "total-nexthops" || name == "critical-trigger-delay" || name == "non-critical-trigger-delay" || name == "table-active" || name == "nh-rib-up" || name == "nh-rib-version" || name == "nh-nexthop-version" || name == "nh-table-id" || name == "epe-table-version" || name == "epe-label-version" || name == "epe-downloaded-version" || name == "epe-standby-version")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfVrfAf::PerformanceStatistics::PerformanceStatistics()
    :
    critical_notf_count{YType::uint32, "critical-notf-count"},
    noncritical_notf_count{YType::uint32, "noncritical-notf-count"},
    last_notf_bestpath_deletes{YType::uint32, "last-notf-bestpath-deletes"},
    last_notf_bestpath_changes{YType::uint32, "last-notf-bestpath-changes"},
    nh_sync_reg_calls{YType::uint32, "nh-sync-reg-calls"},
    nha_sync_reg_calls{YType::uint32, "nha-sync-reg-calls"},
    nha_sync_un_reg_calls{YType::uint32, "nha-sync-un-reg-calls"},
    nh_pending_registrations{YType::uint32, "nh-pending-registrations"},
    nh_peak_registrations{YType::uint32, "nh-peak-registrations"},
    nh_batch_finish_calls{YType::uint32, "nh-batch-finish-calls"},
    nh_flush_timer_calls{YType::uint32, "nh-flush-timer-calls"},
    nh_last_sync_reg_ts{YType::uint32, "nh-last-sync-reg-ts"},
    nh_last_a_sync_reg_ts{YType::uint32, "nh-last-a-sync-reg-ts"},
    nh_last_a_sync_un_reg_ts{YType::uint32, "nh-last-a-sync-un-reg-ts"},
    nh_last_batch_finish_ts{YType::uint32, "nh-last-batch-finish-ts"},
    nh_last_flush_timer_ts{YType::uint32, "nh-last-flush-timer-ts"},
    nhrib_update_calls{YType::uint32, "nhrib-update-calls"},
    nhrib_update_time{YType::uint32, "nhrib-update-time"},
    nexthops_sent_to_rib{YType::uint32, "nexthops-sent-to-rib"},
    nexthops_resent_to_rib{YType::uint32, "nexthops-resent-to-rib"},
    nexthops_removed_from_rib{YType::uint32, "nexthops-removed-from-rib"},
    rib_sync_registers_failed{YType::uint32, "rib-sync-registers-failed"},
    riba_sync_registers_failed{YType::uint32, "riba-sync-registers-failed"},
    ribnh_reg_failed_for_no_tbl_id{YType::uint32, "ribnh-reg-failed-for-no-tbl-id"},
    ribnh_reg_failed_for_no_rib_conn{YType::uint32, "ribnh-reg-failed-for-no-rib-conn"},
    tunnel_walk_nh_not_found{YType::uint32, "tunnel-walk-nh-not-found"},
    tunnel_walk_gw_not_found{YType::uint32, "tunnel-walk-gw-not-found"},
    tunnel_walk_backup_creates{YType::uint32, "tunnel-walk-backup-creates"}
{

    yang_name = "performance-statistics"; yang_parent_name = "next-hop-af-vrf-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfVrfAf::PerformanceStatistics::~PerformanceStatistics()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfVrfAf::PerformanceStatistics::has_data() const
{
    return critical_notf_count.is_set
	|| noncritical_notf_count.is_set
	|| last_notf_bestpath_deletes.is_set
	|| last_notf_bestpath_changes.is_set
	|| nh_sync_reg_calls.is_set
	|| nha_sync_reg_calls.is_set
	|| nha_sync_un_reg_calls.is_set
	|| nh_pending_registrations.is_set
	|| nh_peak_registrations.is_set
	|| nh_batch_finish_calls.is_set
	|| nh_flush_timer_calls.is_set
	|| nh_last_sync_reg_ts.is_set
	|| nh_last_a_sync_reg_ts.is_set
	|| nh_last_a_sync_un_reg_ts.is_set
	|| nh_last_batch_finish_ts.is_set
	|| nh_last_flush_timer_ts.is_set
	|| nhrib_update_calls.is_set
	|| nhrib_update_time.is_set
	|| nexthops_sent_to_rib.is_set
	|| nexthops_resent_to_rib.is_set
	|| nexthops_removed_from_rib.is_set
	|| rib_sync_registers_failed.is_set
	|| riba_sync_registers_failed.is_set
	|| ribnh_reg_failed_for_no_tbl_id.is_set
	|| ribnh_reg_failed_for_no_rib_conn.is_set
	|| tunnel_walk_nh_not_found.is_set
	|| tunnel_walk_gw_not_found.is_set
	|| tunnel_walk_backup_creates.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfVrfAf::PerformanceStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(critical_notf_count.yfilter)
	|| ydk::is_set(noncritical_notf_count.yfilter)
	|| ydk::is_set(last_notf_bestpath_deletes.yfilter)
	|| ydk::is_set(last_notf_bestpath_changes.yfilter)
	|| ydk::is_set(nh_sync_reg_calls.yfilter)
	|| ydk::is_set(nha_sync_reg_calls.yfilter)
	|| ydk::is_set(nha_sync_un_reg_calls.yfilter)
	|| ydk::is_set(nh_pending_registrations.yfilter)
	|| ydk::is_set(nh_peak_registrations.yfilter)
	|| ydk::is_set(nh_batch_finish_calls.yfilter)
	|| ydk::is_set(nh_flush_timer_calls.yfilter)
	|| ydk::is_set(nh_last_sync_reg_ts.yfilter)
	|| ydk::is_set(nh_last_a_sync_reg_ts.yfilter)
	|| ydk::is_set(nh_last_a_sync_un_reg_ts.yfilter)
	|| ydk::is_set(nh_last_batch_finish_ts.yfilter)
	|| ydk::is_set(nh_last_flush_timer_ts.yfilter)
	|| ydk::is_set(nhrib_update_calls.yfilter)
	|| ydk::is_set(nhrib_update_time.yfilter)
	|| ydk::is_set(nexthops_sent_to_rib.yfilter)
	|| ydk::is_set(nexthops_resent_to_rib.yfilter)
	|| ydk::is_set(nexthops_removed_from_rib.yfilter)
	|| ydk::is_set(rib_sync_registers_failed.yfilter)
	|| ydk::is_set(riba_sync_registers_failed.yfilter)
	|| ydk::is_set(ribnh_reg_failed_for_no_tbl_id.yfilter)
	|| ydk::is_set(ribnh_reg_failed_for_no_rib_conn.yfilter)
	|| ydk::is_set(tunnel_walk_nh_not_found.yfilter)
	|| ydk::is_set(tunnel_walk_gw_not_found.yfilter)
	|| ydk::is_set(tunnel_walk_backup_creates.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfVrfAf::PerformanceStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "performance-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfVrfAf::PerformanceStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (critical_notf_count.is_set || is_set(critical_notf_count.yfilter)) leaf_name_data.push_back(critical_notf_count.get_name_leafdata());
    if (noncritical_notf_count.is_set || is_set(noncritical_notf_count.yfilter)) leaf_name_data.push_back(noncritical_notf_count.get_name_leafdata());
    if (last_notf_bestpath_deletes.is_set || is_set(last_notf_bestpath_deletes.yfilter)) leaf_name_data.push_back(last_notf_bestpath_deletes.get_name_leafdata());
    if (last_notf_bestpath_changes.is_set || is_set(last_notf_bestpath_changes.yfilter)) leaf_name_data.push_back(last_notf_bestpath_changes.get_name_leafdata());
    if (nh_sync_reg_calls.is_set || is_set(nh_sync_reg_calls.yfilter)) leaf_name_data.push_back(nh_sync_reg_calls.get_name_leafdata());
    if (nha_sync_reg_calls.is_set || is_set(nha_sync_reg_calls.yfilter)) leaf_name_data.push_back(nha_sync_reg_calls.get_name_leafdata());
    if (nha_sync_un_reg_calls.is_set || is_set(nha_sync_un_reg_calls.yfilter)) leaf_name_data.push_back(nha_sync_un_reg_calls.get_name_leafdata());
    if (nh_pending_registrations.is_set || is_set(nh_pending_registrations.yfilter)) leaf_name_data.push_back(nh_pending_registrations.get_name_leafdata());
    if (nh_peak_registrations.is_set || is_set(nh_peak_registrations.yfilter)) leaf_name_data.push_back(nh_peak_registrations.get_name_leafdata());
    if (nh_batch_finish_calls.is_set || is_set(nh_batch_finish_calls.yfilter)) leaf_name_data.push_back(nh_batch_finish_calls.get_name_leafdata());
    if (nh_flush_timer_calls.is_set || is_set(nh_flush_timer_calls.yfilter)) leaf_name_data.push_back(nh_flush_timer_calls.get_name_leafdata());
    if (nh_last_sync_reg_ts.is_set || is_set(nh_last_sync_reg_ts.yfilter)) leaf_name_data.push_back(nh_last_sync_reg_ts.get_name_leafdata());
    if (nh_last_a_sync_reg_ts.is_set || is_set(nh_last_a_sync_reg_ts.yfilter)) leaf_name_data.push_back(nh_last_a_sync_reg_ts.get_name_leafdata());
    if (nh_last_a_sync_un_reg_ts.is_set || is_set(nh_last_a_sync_un_reg_ts.yfilter)) leaf_name_data.push_back(nh_last_a_sync_un_reg_ts.get_name_leafdata());
    if (nh_last_batch_finish_ts.is_set || is_set(nh_last_batch_finish_ts.yfilter)) leaf_name_data.push_back(nh_last_batch_finish_ts.get_name_leafdata());
    if (nh_last_flush_timer_ts.is_set || is_set(nh_last_flush_timer_ts.yfilter)) leaf_name_data.push_back(nh_last_flush_timer_ts.get_name_leafdata());
    if (nhrib_update_calls.is_set || is_set(nhrib_update_calls.yfilter)) leaf_name_data.push_back(nhrib_update_calls.get_name_leafdata());
    if (nhrib_update_time.is_set || is_set(nhrib_update_time.yfilter)) leaf_name_data.push_back(nhrib_update_time.get_name_leafdata());
    if (nexthops_sent_to_rib.is_set || is_set(nexthops_sent_to_rib.yfilter)) leaf_name_data.push_back(nexthops_sent_to_rib.get_name_leafdata());
    if (nexthops_resent_to_rib.is_set || is_set(nexthops_resent_to_rib.yfilter)) leaf_name_data.push_back(nexthops_resent_to_rib.get_name_leafdata());
    if (nexthops_removed_from_rib.is_set || is_set(nexthops_removed_from_rib.yfilter)) leaf_name_data.push_back(nexthops_removed_from_rib.get_name_leafdata());
    if (rib_sync_registers_failed.is_set || is_set(rib_sync_registers_failed.yfilter)) leaf_name_data.push_back(rib_sync_registers_failed.get_name_leafdata());
    if (riba_sync_registers_failed.is_set || is_set(riba_sync_registers_failed.yfilter)) leaf_name_data.push_back(riba_sync_registers_failed.get_name_leafdata());
    if (ribnh_reg_failed_for_no_tbl_id.is_set || is_set(ribnh_reg_failed_for_no_tbl_id.yfilter)) leaf_name_data.push_back(ribnh_reg_failed_for_no_tbl_id.get_name_leafdata());
    if (ribnh_reg_failed_for_no_rib_conn.is_set || is_set(ribnh_reg_failed_for_no_rib_conn.yfilter)) leaf_name_data.push_back(ribnh_reg_failed_for_no_rib_conn.get_name_leafdata());
    if (tunnel_walk_nh_not_found.is_set || is_set(tunnel_walk_nh_not_found.yfilter)) leaf_name_data.push_back(tunnel_walk_nh_not_found.get_name_leafdata());
    if (tunnel_walk_gw_not_found.is_set || is_set(tunnel_walk_gw_not_found.yfilter)) leaf_name_data.push_back(tunnel_walk_gw_not_found.get_name_leafdata());
    if (tunnel_walk_backup_creates.is_set || is_set(tunnel_walk_backup_creates.yfilter)) leaf_name_data.push_back(tunnel_walk_backup_creates.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfVrfAf::PerformanceStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfVrfAf::PerformanceStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfVrfAf::PerformanceStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "critical-notf-count")
    {
        critical_notf_count = value;
        critical_notf_count.value_namespace = name_space;
        critical_notf_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "noncritical-notf-count")
    {
        noncritical_notf_count = value;
        noncritical_notf_count.value_namespace = name_space;
        noncritical_notf_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-notf-bestpath-deletes")
    {
        last_notf_bestpath_deletes = value;
        last_notf_bestpath_deletes.value_namespace = name_space;
        last_notf_bestpath_deletes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-notf-bestpath-changes")
    {
        last_notf_bestpath_changes = value;
        last_notf_bestpath_changes.value_namespace = name_space;
        last_notf_bestpath_changes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nh-sync-reg-calls")
    {
        nh_sync_reg_calls = value;
        nh_sync_reg_calls.value_namespace = name_space;
        nh_sync_reg_calls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nha-sync-reg-calls")
    {
        nha_sync_reg_calls = value;
        nha_sync_reg_calls.value_namespace = name_space;
        nha_sync_reg_calls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nha-sync-un-reg-calls")
    {
        nha_sync_un_reg_calls = value;
        nha_sync_un_reg_calls.value_namespace = name_space;
        nha_sync_un_reg_calls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nh-pending-registrations")
    {
        nh_pending_registrations = value;
        nh_pending_registrations.value_namespace = name_space;
        nh_pending_registrations.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nh-peak-registrations")
    {
        nh_peak_registrations = value;
        nh_peak_registrations.value_namespace = name_space;
        nh_peak_registrations.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nh-batch-finish-calls")
    {
        nh_batch_finish_calls = value;
        nh_batch_finish_calls.value_namespace = name_space;
        nh_batch_finish_calls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nh-flush-timer-calls")
    {
        nh_flush_timer_calls = value;
        nh_flush_timer_calls.value_namespace = name_space;
        nh_flush_timer_calls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nh-last-sync-reg-ts")
    {
        nh_last_sync_reg_ts = value;
        nh_last_sync_reg_ts.value_namespace = name_space;
        nh_last_sync_reg_ts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nh-last-a-sync-reg-ts")
    {
        nh_last_a_sync_reg_ts = value;
        nh_last_a_sync_reg_ts.value_namespace = name_space;
        nh_last_a_sync_reg_ts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nh-last-a-sync-un-reg-ts")
    {
        nh_last_a_sync_un_reg_ts = value;
        nh_last_a_sync_un_reg_ts.value_namespace = name_space;
        nh_last_a_sync_un_reg_ts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nh-last-batch-finish-ts")
    {
        nh_last_batch_finish_ts = value;
        nh_last_batch_finish_ts.value_namespace = name_space;
        nh_last_batch_finish_ts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nh-last-flush-timer-ts")
    {
        nh_last_flush_timer_ts = value;
        nh_last_flush_timer_ts.value_namespace = name_space;
        nh_last_flush_timer_ts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrib-update-calls")
    {
        nhrib_update_calls = value;
        nhrib_update_calls.value_namespace = name_space;
        nhrib_update_calls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrib-update-time")
    {
        nhrib_update_time = value;
        nhrib_update_time.value_namespace = name_space;
        nhrib_update_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nexthops-sent-to-rib")
    {
        nexthops_sent_to_rib = value;
        nexthops_sent_to_rib.value_namespace = name_space;
        nexthops_sent_to_rib.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nexthops-resent-to-rib")
    {
        nexthops_resent_to_rib = value;
        nexthops_resent_to_rib.value_namespace = name_space;
        nexthops_resent_to_rib.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nexthops-removed-from-rib")
    {
        nexthops_removed_from_rib = value;
        nexthops_removed_from_rib.value_namespace = name_space;
        nexthops_removed_from_rib.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-sync-registers-failed")
    {
        rib_sync_registers_failed = value;
        rib_sync_registers_failed.value_namespace = name_space;
        rib_sync_registers_failed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "riba-sync-registers-failed")
    {
        riba_sync_registers_failed = value;
        riba_sync_registers_failed.value_namespace = name_space;
        riba_sync_registers_failed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ribnh-reg-failed-for-no-tbl-id")
    {
        ribnh_reg_failed_for_no_tbl_id = value;
        ribnh_reg_failed_for_no_tbl_id.value_namespace = name_space;
        ribnh_reg_failed_for_no_tbl_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ribnh-reg-failed-for-no-rib-conn")
    {
        ribnh_reg_failed_for_no_rib_conn = value;
        ribnh_reg_failed_for_no_rib_conn.value_namespace = name_space;
        ribnh_reg_failed_for_no_rib_conn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-walk-nh-not-found")
    {
        tunnel_walk_nh_not_found = value;
        tunnel_walk_nh_not_found.value_namespace = name_space;
        tunnel_walk_nh_not_found.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-walk-gw-not-found")
    {
        tunnel_walk_gw_not_found = value;
        tunnel_walk_gw_not_found.value_namespace = name_space;
        tunnel_walk_gw_not_found.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-walk-backup-creates")
    {
        tunnel_walk_backup_creates = value;
        tunnel_walk_backup_creates.value_namespace = name_space;
        tunnel_walk_backup_creates.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfVrfAf::PerformanceStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "critical-notf-count")
    {
        critical_notf_count.yfilter = yfilter;
    }
    if(value_path == "noncritical-notf-count")
    {
        noncritical_notf_count.yfilter = yfilter;
    }
    if(value_path == "last-notf-bestpath-deletes")
    {
        last_notf_bestpath_deletes.yfilter = yfilter;
    }
    if(value_path == "last-notf-bestpath-changes")
    {
        last_notf_bestpath_changes.yfilter = yfilter;
    }
    if(value_path == "nh-sync-reg-calls")
    {
        nh_sync_reg_calls.yfilter = yfilter;
    }
    if(value_path == "nha-sync-reg-calls")
    {
        nha_sync_reg_calls.yfilter = yfilter;
    }
    if(value_path == "nha-sync-un-reg-calls")
    {
        nha_sync_un_reg_calls.yfilter = yfilter;
    }
    if(value_path == "nh-pending-registrations")
    {
        nh_pending_registrations.yfilter = yfilter;
    }
    if(value_path == "nh-peak-registrations")
    {
        nh_peak_registrations.yfilter = yfilter;
    }
    if(value_path == "nh-batch-finish-calls")
    {
        nh_batch_finish_calls.yfilter = yfilter;
    }
    if(value_path == "nh-flush-timer-calls")
    {
        nh_flush_timer_calls.yfilter = yfilter;
    }
    if(value_path == "nh-last-sync-reg-ts")
    {
        nh_last_sync_reg_ts.yfilter = yfilter;
    }
    if(value_path == "nh-last-a-sync-reg-ts")
    {
        nh_last_a_sync_reg_ts.yfilter = yfilter;
    }
    if(value_path == "nh-last-a-sync-un-reg-ts")
    {
        nh_last_a_sync_un_reg_ts.yfilter = yfilter;
    }
    if(value_path == "nh-last-batch-finish-ts")
    {
        nh_last_batch_finish_ts.yfilter = yfilter;
    }
    if(value_path == "nh-last-flush-timer-ts")
    {
        nh_last_flush_timer_ts.yfilter = yfilter;
    }
    if(value_path == "nhrib-update-calls")
    {
        nhrib_update_calls.yfilter = yfilter;
    }
    if(value_path == "nhrib-update-time")
    {
        nhrib_update_time.yfilter = yfilter;
    }
    if(value_path == "nexthops-sent-to-rib")
    {
        nexthops_sent_to_rib.yfilter = yfilter;
    }
    if(value_path == "nexthops-resent-to-rib")
    {
        nexthops_resent_to_rib.yfilter = yfilter;
    }
    if(value_path == "nexthops-removed-from-rib")
    {
        nexthops_removed_from_rib.yfilter = yfilter;
    }
    if(value_path == "rib-sync-registers-failed")
    {
        rib_sync_registers_failed.yfilter = yfilter;
    }
    if(value_path == "riba-sync-registers-failed")
    {
        riba_sync_registers_failed.yfilter = yfilter;
    }
    if(value_path == "ribnh-reg-failed-for-no-tbl-id")
    {
        ribnh_reg_failed_for_no_tbl_id.yfilter = yfilter;
    }
    if(value_path == "ribnh-reg-failed-for-no-rib-conn")
    {
        ribnh_reg_failed_for_no_rib_conn.yfilter = yfilter;
    }
    if(value_path == "tunnel-walk-nh-not-found")
    {
        tunnel_walk_nh_not_found.yfilter = yfilter;
    }
    if(value_path == "tunnel-walk-gw-not-found")
    {
        tunnel_walk_gw_not_found.yfilter = yfilter;
    }
    if(value_path == "tunnel-walk-backup-creates")
    {
        tunnel_walk_backup_creates.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfVrfAf::PerformanceStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "critical-notf-count" || name == "noncritical-notf-count" || name == "last-notf-bestpath-deletes" || name == "last-notf-bestpath-changes" || name == "nh-sync-reg-calls" || name == "nha-sync-reg-calls" || name == "nha-sync-un-reg-calls" || name == "nh-pending-registrations" || name == "nh-peak-registrations" || name == "nh-batch-finish-calls" || name == "nh-flush-timer-calls" || name == "nh-last-sync-reg-ts" || name == "nh-last-a-sync-reg-ts" || name == "nh-last-a-sync-un-reg-ts" || name == "nh-last-batch-finish-ts" || name == "nh-last-flush-timer-ts" || name == "nhrib-update-calls" || name == "nhrib-update-time" || name == "nexthops-sent-to-rib" || name == "nexthops-resent-to-rib" || name == "nexthops-removed-from-rib" || name == "rib-sync-registers-failed" || name == "riba-sync-registers-failed" || name == "ribnh-reg-failed-for-no-tbl-id" || name == "ribnh-reg-failed-for-no-rib-conn" || name == "tunnel-walk-nh-not-found" || name == "tunnel-walk-gw-not-found" || name == "tunnel-walk-backup-creates")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAfs()
{

    yang_name = "next-hop-afs"; yang_parent_name = "next-hop-address-family"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::~NextHopAfs()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::has_data() const
{
    for (std::size_t index=0; index<next_hop_af.size(); index++)
    {
        if(next_hop_af[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::has_operation() const
{
    for (std::size_t index=0; index<next_hop_af.size(); index++)
    {
        if(next_hop_af[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop-afs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop-af")
    {
        for(auto const & c : next_hop_af)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf>();
        c->parent = this;
        next_hop_af.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : next_hop_af)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop-af")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NextHopAf()
    :
    next_hop_address{YType::str, "next-hop-address"},
    attribute_set{YType::str, "attribute-set"},
    af_name{YType::enumeration, "af-name"},
    rib_nexthop_id{YType::uint32, "rib-nexthop-id"},
    nexthop_pending_registration{YType::uint8, "nexthop-pending-registration"},
    nexthop_reference_count{YType::uint32, "nexthop-reference-count"},
    nh_reference_count_total{YType::uint32, "nh-reference-count-total"},
    nh_first_hop_if_handle{YType::str, "nh-first-hop-if-handle"},
    nexthop_aigp_metric{YType::uint32, "nexthop-aigp-metric"},
    nexthop_gateway_reachable{YType::boolean, "nexthop-gateway-reachable"},
    nexthop_gateway_prefix_connected{YType::boolean, "nexthop-gateway-prefix-connected"},
    nexthop_gateway_prefix_length{YType::uint32, "nexthop-gateway-prefix-length"}
    	,
    nexthop_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress>())
	,nh_tunnel(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NhTunnel>())
	,nexthop_internal_info(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo>())
{
    nexthop_address->parent = this;
    nh_tunnel->parent = this;
    nexthop_internal_info->parent = this;

    yang_name = "next-hop-af"; yang_parent_name = "next-hop-afs"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::~NextHopAf()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::has_data() const
{
    for (std::size_t index=0; index<nexthop_gateway_info.size(); index++)
    {
        if(nexthop_gateway_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<neighbor_address.size(); index++)
    {
        if(neighbor_address[index]->has_data())
            return true;
    }
    return next_hop_address.is_set
	|| attribute_set.is_set
	|| af_name.is_set
	|| rib_nexthop_id.is_set
	|| nexthop_pending_registration.is_set
	|| nexthop_reference_count.is_set
	|| nh_reference_count_total.is_set
	|| nh_first_hop_if_handle.is_set
	|| nexthop_aigp_metric.is_set
	|| nexthop_gateway_reachable.is_set
	|| nexthop_gateway_prefix_connected.is_set
	|| nexthop_gateway_prefix_length.is_set
	|| (nexthop_address !=  nullptr && nexthop_address->has_data())
	|| (nh_tunnel !=  nullptr && nh_tunnel->has_data())
	|| (nexthop_internal_info !=  nullptr && nexthop_internal_info->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::has_operation() const
{
    for (std::size_t index=0; index<nexthop_gateway_info.size(); index++)
    {
        if(nexthop_gateway_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<neighbor_address.size(); index++)
    {
        if(neighbor_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(attribute_set.yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(rib_nexthop_id.yfilter)
	|| ydk::is_set(nexthop_pending_registration.yfilter)
	|| ydk::is_set(nexthop_reference_count.yfilter)
	|| ydk::is_set(nh_reference_count_total.yfilter)
	|| ydk::is_set(nh_first_hop_if_handle.yfilter)
	|| ydk::is_set(nexthop_aigp_metric.yfilter)
	|| ydk::is_set(nexthop_gateway_reachable.yfilter)
	|| ydk::is_set(nexthop_gateway_prefix_connected.yfilter)
	|| ydk::is_set(nexthop_gateway_prefix_length.yfilter)
	|| (nexthop_address !=  nullptr && nexthop_address->has_operation())
	|| (nh_tunnel !=  nullptr && nh_tunnel->has_operation())
	|| (nexthop_internal_info !=  nullptr && nexthop_internal_info->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop-af";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (attribute_set.is_set || is_set(attribute_set.yfilter)) leaf_name_data.push_back(attribute_set.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (rib_nexthop_id.is_set || is_set(rib_nexthop_id.yfilter)) leaf_name_data.push_back(rib_nexthop_id.get_name_leafdata());
    if (nexthop_pending_registration.is_set || is_set(nexthop_pending_registration.yfilter)) leaf_name_data.push_back(nexthop_pending_registration.get_name_leafdata());
    if (nexthop_reference_count.is_set || is_set(nexthop_reference_count.yfilter)) leaf_name_data.push_back(nexthop_reference_count.get_name_leafdata());
    if (nh_reference_count_total.is_set || is_set(nh_reference_count_total.yfilter)) leaf_name_data.push_back(nh_reference_count_total.get_name_leafdata());
    if (nh_first_hop_if_handle.is_set || is_set(nh_first_hop_if_handle.yfilter)) leaf_name_data.push_back(nh_first_hop_if_handle.get_name_leafdata());
    if (nexthop_aigp_metric.is_set || is_set(nexthop_aigp_metric.yfilter)) leaf_name_data.push_back(nexthop_aigp_metric.get_name_leafdata());
    if (nexthop_gateway_reachable.is_set || is_set(nexthop_gateway_reachable.yfilter)) leaf_name_data.push_back(nexthop_gateway_reachable.get_name_leafdata());
    if (nexthop_gateway_prefix_connected.is_set || is_set(nexthop_gateway_prefix_connected.yfilter)) leaf_name_data.push_back(nexthop_gateway_prefix_connected.get_name_leafdata());
    if (nexthop_gateway_prefix_length.is_set || is_set(nexthop_gateway_prefix_length.yfilter)) leaf_name_data.push_back(nexthop_gateway_prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nexthop-address")
    {
        if(nexthop_address == nullptr)
        {
            nexthop_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress>();
        }
        return nexthop_address;
    }

    if(child_yang_name == "nh-tunnel")
    {
        if(nh_tunnel == nullptr)
        {
            nh_tunnel = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NhTunnel>();
        }
        return nh_tunnel;
    }

    if(child_yang_name == "nexthop-internal-info")
    {
        if(nexthop_internal_info == nullptr)
        {
            nexthop_internal_info = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo>();
        }
        return nexthop_internal_info;
    }

    if(child_yang_name == "nexthop-gateway-info")
    {
        for(auto const & c : nexthop_gateway_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo>();
        c->parent = this;
        nexthop_gateway_info.push_back(c);
        return c;
    }

    if(child_yang_name == "neighbor-address")
    {
        for(auto const & c : neighbor_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress>();
        c->parent = this;
        neighbor_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nexthop_address != nullptr)
    {
        children["nexthop-address"] = nexthop_address;
    }

    if(nh_tunnel != nullptr)
    {
        children["nh-tunnel"] = nh_tunnel;
    }

    if(nexthop_internal_info != nullptr)
    {
        children["nexthop-internal-info"] = nexthop_internal_info;
    }

    for (auto const & c : nexthop_gateway_info)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : neighbor_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-set")
    {
        attribute_set = value;
        attribute_set.value_namespace = name_space;
        attribute_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-nexthop-id")
    {
        rib_nexthop_id = value;
        rib_nexthop_id.value_namespace = name_space;
        rib_nexthop_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nexthop-pending-registration")
    {
        nexthop_pending_registration = value;
        nexthop_pending_registration.value_namespace = name_space;
        nexthop_pending_registration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nexthop-reference-count")
    {
        nexthop_reference_count = value;
        nexthop_reference_count.value_namespace = name_space;
        nexthop_reference_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nh-reference-count-total")
    {
        nh_reference_count_total = value;
        nh_reference_count_total.value_namespace = name_space;
        nh_reference_count_total.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nh-first-hop-if-handle")
    {
        nh_first_hop_if_handle = value;
        nh_first_hop_if_handle.value_namespace = name_space;
        nh_first_hop_if_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nexthop-aigp-metric")
    {
        nexthop_aigp_metric = value;
        nexthop_aigp_metric.value_namespace = name_space;
        nexthop_aigp_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nexthop-gateway-reachable")
    {
        nexthop_gateway_reachable = value;
        nexthop_gateway_reachable.value_namespace = name_space;
        nexthop_gateway_reachable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nexthop-gateway-prefix-connected")
    {
        nexthop_gateway_prefix_connected = value;
        nexthop_gateway_prefix_connected.value_namespace = name_space;
        nexthop_gateway_prefix_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nexthop-gateway-prefix-length")
    {
        nexthop_gateway_prefix_length = value;
        nexthop_gateway_prefix_length.value_namespace = name_space;
        nexthop_gateway_prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "attribute-set")
    {
        attribute_set.yfilter = yfilter;
    }
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "rib-nexthop-id")
    {
        rib_nexthop_id.yfilter = yfilter;
    }
    if(value_path == "nexthop-pending-registration")
    {
        nexthop_pending_registration.yfilter = yfilter;
    }
    if(value_path == "nexthop-reference-count")
    {
        nexthop_reference_count.yfilter = yfilter;
    }
    if(value_path == "nh-reference-count-total")
    {
        nh_reference_count_total.yfilter = yfilter;
    }
    if(value_path == "nh-first-hop-if-handle")
    {
        nh_first_hop_if_handle.yfilter = yfilter;
    }
    if(value_path == "nexthop-aigp-metric")
    {
        nexthop_aigp_metric.yfilter = yfilter;
    }
    if(value_path == "nexthop-gateway-reachable")
    {
        nexthop_gateway_reachable.yfilter = yfilter;
    }
    if(value_path == "nexthop-gateway-prefix-connected")
    {
        nexthop_gateway_prefix_connected.yfilter = yfilter;
    }
    if(value_path == "nexthop-gateway-prefix-length")
    {
        nexthop_gateway_prefix_length.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nexthop-address" || name == "nh-tunnel" || name == "nexthop-internal-info" || name == "nexthop-gateway-info" || name == "neighbor-address" || name == "next-hop-address" || name == "attribute-set" || name == "af-name" || name == "rib-nexthop-id" || name == "nexthop-pending-registration" || name == "nexthop-reference-count" || name == "nh-reference-count-total" || name == "nh-first-hop-if-handle" || name == "nexthop-aigp-metric" || name == "nexthop-gateway-reachable" || name == "nexthop-gateway-prefix-connected" || name == "nexthop-gateway-prefix-length")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::NexthopAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4_mdt_address{YType::str, "ipv4-mdt-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"}
    	,
    l2vpn_vpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::L2VpnVplsAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::L2VpnMspwAddress>())
	,ipv4_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::Ipv6SrPolicyAddress>())
{
    l2vpn_vpls_address->parent = this;
    l2vpn_mspw_address->parent = this;
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;

    yang_name = "nexthop-address"; yang_parent_name = "next-hop-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::~NexthopAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4_mdt_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| rt_constraint_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv4mvpn_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_data())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_mcast_address.yfilter)
	|| ydk::is_set(ipv4_label_address.yfilter)
	|| ydk::is_set(ipv4_tunnel_address.yfilter)
	|| ydk::is_set(ipv4_mdt_address.yfilter)
	|| ydk::is_set(ipv4vpn_address.yfilter)
	|| ydk::is_set(ipv4vpna_mcastddress.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(ipv6_mcast_address.yfilter)
	|| ydk::is_set(ipv6_label_address.yfilter)
	|| ydk::is_set(ipv6vpn_address.yfilter)
	|| ydk::is_set(ipv6vpn_mcast_address.yfilter)
	|| ydk::is_set(rt_constraint_address.yfilter)
	|| ydk::is_set(ipv6mvpn_address.yfilter)
	|| ydk::is_set(ipv4mvpn_address.yfilter)
	|| ydk::is_set(l2vpn_evpn_address.yfilter)
	|| ydk::is_set(ls_ls_address.yfilter)
	|| ydk::is_set(ipv4_flowspec_address.yfilter)
	|| ydk::is_set(ipv6_flowspec_address.yfilter)
	|| ydk::is_set(ipv4vpn_flowspec_address.yfilter)
	|| ydk::is_set(ipv6vpn_flowspec_address.yfilter)
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_operation())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nexthop-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.yfilter)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.yfilter)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.yfilter)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4_mdt_address.is_set || is_set(ipv4_mdt_address.yfilter)) leaf_name_data.push_back(ipv4_mdt_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.yfilter)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.yfilter)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.yfilter)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.yfilter)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.yfilter)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.yfilter)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.yfilter)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.yfilter)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.yfilter)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.yfilter)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.yfilter)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(l2vpn_vpls_address != nullptr)
    {
        children["l2vpn-vpls-address"] = l2vpn_vpls_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(ipv4_sr_policy_address != nullptr)
    {
        children["ipv4-sr-policy-address"] = ipv4_sr_policy_address;
    }

    if(ipv6_sr_policy_address != nullptr)
    {
        children["ipv6-sr-policy-address"] = ipv6_sr_policy_address;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
        ipv4_mcast_address.value_namespace = name_space;
        ipv4_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
        ipv4_label_address.value_namespace = name_space;
        ipv4_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
        ipv4_tunnel_address.value_namespace = name_space;
        ipv4_tunnel_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address = value;
        ipv4_mdt_address.value_namespace = name_space;
        ipv4_mdt_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
        ipv4vpn_address.value_namespace = name_space;
        ipv4vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
        ipv4vpna_mcastddress.value_namespace = name_space;
        ipv4vpna_mcastddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
        ipv6_mcast_address.value_namespace = name_space;
        ipv6_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
        ipv6_label_address.value_namespace = name_space;
        ipv6_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
        ipv6vpn_address.value_namespace = name_space;
        ipv6vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
        ipv6vpn_mcast_address.value_namespace = name_space;
        ipv6vpn_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
        rt_constraint_address.value_namespace = name_space;
        rt_constraint_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
        ipv6mvpn_address.value_namespace = name_space;
        ipv6mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
        ipv4mvpn_address.value_namespace = name_space;
        ipv4mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
        l2vpn_evpn_address.value_namespace = name_space;
        l2vpn_evpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
        ls_ls_address.value_namespace = name_space;
        ls_ls_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
        ipv4_flowspec_address.value_namespace = name_space;
        ipv4_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
        ipv6_flowspec_address.value_namespace = name_space;
        ipv6_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
        ipv4vpn_flowspec_address.value_namespace = name_space;
        ipv4vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
        ipv6vpn_flowspec_address.value_namespace = name_space;
        ipv6vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address.yfilter = yfilter;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address.yfilter = yfilter;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address.yfilter = yfilter;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address.yfilter = yfilter;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-vpls-address" || name == "l2vpn-mspw-address" || name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-mcast-address" || name == "ipv4-label-address" || name == "ipv4-tunnel-address" || name == "ipv4-mdt-address" || name == "ipv4vpn-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-mcast-address" || name == "ipv6-label-address" || name == "ipv6vpn-address" || name == "ipv6vpn-mcast-address" || name == "rt-constraint-address" || name == "ipv6mvpn-address" || name == "ipv4mvpn-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "ipv4-flowspec-address" || name == "ipv6-flowspec-address" || name == "ipv4vpn-flowspec-address" || name == "ipv6vpn-flowspec-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "nexthop-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "nexthop-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "nexthop-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "nexthop-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NhTunnel::NhTunnel()
    :
    tunnel_type{YType::enumeration, "tunnel-type"},
    tunnel_name{YType::str, "tunnel-name"},
    is_tunnel_up{YType::boolean, "is-tunnel-up"},
    is_tunnel_info_stale{YType::boolean, "is-tunnel-info-stale"},
    is_tunnel_registered{YType::boolean, "is-tunnel-registered"},
    tunnel_v6_required{YType::boolean, "tunnel-v6-required"},
    tunnel_v6_enabled{YType::boolean, "tunnel-v6-enabled"},
    binding_label{YType::uint32, "binding-label"},
    tunnel_if_handle{YType::uint32, "tunnel-if-handle"},
    last_tunnel_update{YType::uint32, "last-tunnel-update"}
{

    yang_name = "nh-tunnel"; yang_parent_name = "next-hop-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NhTunnel::~NhTunnel()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NhTunnel::has_data() const
{
    return tunnel_type.is_set
	|| tunnel_name.is_set
	|| is_tunnel_up.is_set
	|| is_tunnel_info_stale.is_set
	|| is_tunnel_registered.is_set
	|| tunnel_v6_required.is_set
	|| tunnel_v6_enabled.is_set
	|| binding_label.is_set
	|| tunnel_if_handle.is_set
	|| last_tunnel_update.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NhTunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_type.yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| ydk::is_set(is_tunnel_up.yfilter)
	|| ydk::is_set(is_tunnel_info_stale.yfilter)
	|| ydk::is_set(is_tunnel_registered.yfilter)
	|| ydk::is_set(tunnel_v6_required.yfilter)
	|| ydk::is_set(tunnel_v6_enabled.yfilter)
	|| ydk::is_set(binding_label.yfilter)
	|| ydk::is_set(tunnel_if_handle.yfilter)
	|| ydk::is_set(last_tunnel_update.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NhTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nh-tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NhTunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_type.is_set || is_set(tunnel_type.yfilter)) leaf_name_data.push_back(tunnel_type.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (is_tunnel_up.is_set || is_set(is_tunnel_up.yfilter)) leaf_name_data.push_back(is_tunnel_up.get_name_leafdata());
    if (is_tunnel_info_stale.is_set || is_set(is_tunnel_info_stale.yfilter)) leaf_name_data.push_back(is_tunnel_info_stale.get_name_leafdata());
    if (is_tunnel_registered.is_set || is_set(is_tunnel_registered.yfilter)) leaf_name_data.push_back(is_tunnel_registered.get_name_leafdata());
    if (tunnel_v6_required.is_set || is_set(tunnel_v6_required.yfilter)) leaf_name_data.push_back(tunnel_v6_required.get_name_leafdata());
    if (tunnel_v6_enabled.is_set || is_set(tunnel_v6_enabled.yfilter)) leaf_name_data.push_back(tunnel_v6_enabled.get_name_leafdata());
    if (binding_label.is_set || is_set(binding_label.yfilter)) leaf_name_data.push_back(binding_label.get_name_leafdata());
    if (tunnel_if_handle.is_set || is_set(tunnel_if_handle.yfilter)) leaf_name_data.push_back(tunnel_if_handle.get_name_leafdata());
    if (last_tunnel_update.is_set || is_set(last_tunnel_update.yfilter)) leaf_name_data.push_back(last_tunnel_update.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NhTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NhTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NhTunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-type")
    {
        tunnel_type = value;
        tunnel_type.value_namespace = name_space;
        tunnel_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-tunnel-up")
    {
        is_tunnel_up = value;
        is_tunnel_up.value_namespace = name_space;
        is_tunnel_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-tunnel-info-stale")
    {
        is_tunnel_info_stale = value;
        is_tunnel_info_stale.value_namespace = name_space;
        is_tunnel_info_stale.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-tunnel-registered")
    {
        is_tunnel_registered = value;
        is_tunnel_registered.value_namespace = name_space;
        is_tunnel_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-v6-required")
    {
        tunnel_v6_required = value;
        tunnel_v6_required.value_namespace = name_space;
        tunnel_v6_required.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-v6-enabled")
    {
        tunnel_v6_enabled = value;
        tunnel_v6_enabled.value_namespace = name_space;
        tunnel_v6_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-label")
    {
        binding_label = value;
        binding_label.value_namespace = name_space;
        binding_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-if-handle")
    {
        tunnel_if_handle = value;
        tunnel_if_handle.value_namespace = name_space;
        tunnel_if_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-tunnel-update")
    {
        last_tunnel_update = value;
        last_tunnel_update.value_namespace = name_space;
        last_tunnel_update.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NhTunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-type")
    {
        tunnel_type.yfilter = yfilter;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
    if(value_path == "is-tunnel-up")
    {
        is_tunnel_up.yfilter = yfilter;
    }
    if(value_path == "is-tunnel-info-stale")
    {
        is_tunnel_info_stale.yfilter = yfilter;
    }
    if(value_path == "is-tunnel-registered")
    {
        is_tunnel_registered.yfilter = yfilter;
    }
    if(value_path == "tunnel-v6-required")
    {
        tunnel_v6_required.yfilter = yfilter;
    }
    if(value_path == "tunnel-v6-enabled")
    {
        tunnel_v6_enabled.yfilter = yfilter;
    }
    if(value_path == "binding-label")
    {
        binding_label.yfilter = yfilter;
    }
    if(value_path == "tunnel-if-handle")
    {
        tunnel_if_handle.yfilter = yfilter;
    }
    if(value_path == "last-tunnel-update")
    {
        last_tunnel_update.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NhTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-type" || name == "tunnel-name" || name == "is-tunnel-up" || name == "is-tunnel-info-stale" || name == "is-tunnel-registered" || name == "tunnel-v6-required" || name == "tunnel-v6-enabled" || name == "binding-label" || name == "tunnel-if-handle" || name == "last-tunnel-update")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopInternalInfo()
    :
    nexthop_id{YType::uint32, "nexthop-id"},
    nexthop_version{YType::uint32, "nexthop-version"},
    nexthop_flags{YType::uint32, "nexthop-flags"},
    nexthop_if_handle{YType::uint32, "nexthop-if-handle"},
    nexthop_af_user_bits{YType::uint32, "nexthop-af-user-bits"},
    nexthop_label{YType::uint32, "nexthop-label"},
    gateway_flags{YType::uint32, "gateway-flags"}
    	,
    nexthop_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress>())
{
    nexthop_address->parent = this;

    yang_name = "nexthop-internal-info"; yang_parent_name = "next-hop-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::~NexthopInternalInfo()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::has_data() const
{
    for (std::size_t index=0; index<nexthop_metrice.size(); index++)
    {
        if(nexthop_metrice[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<nexthop_refcount.size(); index++)
    {
        if(nexthop_refcount[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<nexthop_gateway_internal_info.size(); index++)
    {
        if(nexthop_gateway_internal_info[index]->has_data())
            return true;
    }
    return nexthop_id.is_set
	|| nexthop_version.is_set
	|| nexthop_flags.is_set
	|| nexthop_if_handle.is_set
	|| nexthop_af_user_bits.is_set
	|| nexthop_label.is_set
	|| gateway_flags.is_set
	|| (nexthop_address !=  nullptr && nexthop_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::has_operation() const
{
    for (std::size_t index=0; index<nexthop_metrice.size(); index++)
    {
        if(nexthop_metrice[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<nexthop_refcount.size(); index++)
    {
        if(nexthop_refcount[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<nexthop_gateway_internal_info.size(); index++)
    {
        if(nexthop_gateway_internal_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(nexthop_id.yfilter)
	|| ydk::is_set(nexthop_version.yfilter)
	|| ydk::is_set(nexthop_flags.yfilter)
	|| ydk::is_set(nexthop_if_handle.yfilter)
	|| ydk::is_set(nexthop_af_user_bits.yfilter)
	|| ydk::is_set(nexthop_label.yfilter)
	|| ydk::is_set(gateway_flags.yfilter)
	|| (nexthop_address !=  nullptr && nexthop_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nexthop-internal-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nexthop_id.is_set || is_set(nexthop_id.yfilter)) leaf_name_data.push_back(nexthop_id.get_name_leafdata());
    if (nexthop_version.is_set || is_set(nexthop_version.yfilter)) leaf_name_data.push_back(nexthop_version.get_name_leafdata());
    if (nexthop_flags.is_set || is_set(nexthop_flags.yfilter)) leaf_name_data.push_back(nexthop_flags.get_name_leafdata());
    if (nexthop_if_handle.is_set || is_set(nexthop_if_handle.yfilter)) leaf_name_data.push_back(nexthop_if_handle.get_name_leafdata());
    if (nexthop_af_user_bits.is_set || is_set(nexthop_af_user_bits.yfilter)) leaf_name_data.push_back(nexthop_af_user_bits.get_name_leafdata());
    if (nexthop_label.is_set || is_set(nexthop_label.yfilter)) leaf_name_data.push_back(nexthop_label.get_name_leafdata());
    if (gateway_flags.is_set || is_set(gateway_flags.yfilter)) leaf_name_data.push_back(gateway_flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nexthop-address")
    {
        if(nexthop_address == nullptr)
        {
            nexthop_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress>();
        }
        return nexthop_address;
    }

    if(child_yang_name == "nexthop-metrice")
    {
        for(auto const & c : nexthop_metrice)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopMetrice>();
        c->parent = this;
        nexthop_metrice.push_back(c);
        return c;
    }

    if(child_yang_name == "nexthop-refcount")
    {
        for(auto const & c : nexthop_refcount)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopRefcount>();
        c->parent = this;
        nexthop_refcount.push_back(c);
        return c;
    }

    if(child_yang_name == "nexthop-gateway-internal-info")
    {
        for(auto const & c : nexthop_gateway_internal_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopGatewayInternalInfo>();
        c->parent = this;
        nexthop_gateway_internal_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nexthop_address != nullptr)
    {
        children["nexthop-address"] = nexthop_address;
    }

    for (auto const & c : nexthop_metrice)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : nexthop_refcount)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : nexthop_gateway_internal_info)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nexthop-id")
    {
        nexthop_id = value;
        nexthop_id.value_namespace = name_space;
        nexthop_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nexthop-version")
    {
        nexthop_version = value;
        nexthop_version.value_namespace = name_space;
        nexthop_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nexthop-flags")
    {
        nexthop_flags = value;
        nexthop_flags.value_namespace = name_space;
        nexthop_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nexthop-if-handle")
    {
        nexthop_if_handle = value;
        nexthop_if_handle.value_namespace = name_space;
        nexthop_if_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nexthop-af-user-bits")
    {
        nexthop_af_user_bits = value;
        nexthop_af_user_bits.value_namespace = name_space;
        nexthop_af_user_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nexthop-label")
    {
        nexthop_label = value;
        nexthop_label.value_namespace = name_space;
        nexthop_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gateway-flags")
    {
        gateway_flags = value;
        gateway_flags.value_namespace = name_space;
        gateway_flags.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nexthop-id")
    {
        nexthop_id.yfilter = yfilter;
    }
    if(value_path == "nexthop-version")
    {
        nexthop_version.yfilter = yfilter;
    }
    if(value_path == "nexthop-flags")
    {
        nexthop_flags.yfilter = yfilter;
    }
    if(value_path == "nexthop-if-handle")
    {
        nexthop_if_handle.yfilter = yfilter;
    }
    if(value_path == "nexthop-af-user-bits")
    {
        nexthop_af_user_bits.yfilter = yfilter;
    }
    if(value_path == "nexthop-label")
    {
        nexthop_label.yfilter = yfilter;
    }
    if(value_path == "gateway-flags")
    {
        gateway_flags.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nexthop-address" || name == "nexthop-metrice" || name == "nexthop-refcount" || name == "nexthop-gateway-internal-info" || name == "nexthop-id" || name == "nexthop-version" || name == "nexthop-flags" || name == "nexthop-if-handle" || name == "nexthop-af-user-bits" || name == "nexthop-label" || name == "gateway-flags")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::NexthopAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4_mdt_address{YType::str, "ipv4-mdt-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"}
    	,
    l2vpn_vpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::L2VpnVplsAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::L2VpnMspwAddress>())
	,ipv4_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::Ipv6SrPolicyAddress>())
{
    l2vpn_vpls_address->parent = this;
    l2vpn_mspw_address->parent = this;
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;

    yang_name = "nexthop-address"; yang_parent_name = "nexthop-internal-info"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::~NexthopAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4_mdt_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| rt_constraint_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv4mvpn_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_data())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_mcast_address.yfilter)
	|| ydk::is_set(ipv4_label_address.yfilter)
	|| ydk::is_set(ipv4_tunnel_address.yfilter)
	|| ydk::is_set(ipv4_mdt_address.yfilter)
	|| ydk::is_set(ipv4vpn_address.yfilter)
	|| ydk::is_set(ipv4vpna_mcastddress.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(ipv6_mcast_address.yfilter)
	|| ydk::is_set(ipv6_label_address.yfilter)
	|| ydk::is_set(ipv6vpn_address.yfilter)
	|| ydk::is_set(ipv6vpn_mcast_address.yfilter)
	|| ydk::is_set(rt_constraint_address.yfilter)
	|| ydk::is_set(ipv6mvpn_address.yfilter)
	|| ydk::is_set(ipv4mvpn_address.yfilter)
	|| ydk::is_set(l2vpn_evpn_address.yfilter)
	|| ydk::is_set(ls_ls_address.yfilter)
	|| ydk::is_set(ipv4_flowspec_address.yfilter)
	|| ydk::is_set(ipv6_flowspec_address.yfilter)
	|| ydk::is_set(ipv4vpn_flowspec_address.yfilter)
	|| ydk::is_set(ipv6vpn_flowspec_address.yfilter)
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_operation())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nexthop-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.yfilter)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.yfilter)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.yfilter)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4_mdt_address.is_set || is_set(ipv4_mdt_address.yfilter)) leaf_name_data.push_back(ipv4_mdt_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.yfilter)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.yfilter)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.yfilter)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.yfilter)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.yfilter)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.yfilter)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.yfilter)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.yfilter)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.yfilter)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.yfilter)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.yfilter)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(l2vpn_vpls_address != nullptr)
    {
        children["l2vpn-vpls-address"] = l2vpn_vpls_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(ipv4_sr_policy_address != nullptr)
    {
        children["ipv4-sr-policy-address"] = ipv4_sr_policy_address;
    }

    if(ipv6_sr_policy_address != nullptr)
    {
        children["ipv6-sr-policy-address"] = ipv6_sr_policy_address;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
        ipv4_mcast_address.value_namespace = name_space;
        ipv4_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
        ipv4_label_address.value_namespace = name_space;
        ipv4_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
        ipv4_tunnel_address.value_namespace = name_space;
        ipv4_tunnel_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address = value;
        ipv4_mdt_address.value_namespace = name_space;
        ipv4_mdt_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
        ipv4vpn_address.value_namespace = name_space;
        ipv4vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
        ipv4vpna_mcastddress.value_namespace = name_space;
        ipv4vpna_mcastddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
        ipv6_mcast_address.value_namespace = name_space;
        ipv6_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
        ipv6_label_address.value_namespace = name_space;
        ipv6_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
        ipv6vpn_address.value_namespace = name_space;
        ipv6vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
        ipv6vpn_mcast_address.value_namespace = name_space;
        ipv6vpn_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
        rt_constraint_address.value_namespace = name_space;
        rt_constraint_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
        ipv6mvpn_address.value_namespace = name_space;
        ipv6mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
        ipv4mvpn_address.value_namespace = name_space;
        ipv4mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
        l2vpn_evpn_address.value_namespace = name_space;
        l2vpn_evpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
        ls_ls_address.value_namespace = name_space;
        ls_ls_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
        ipv4_flowspec_address.value_namespace = name_space;
        ipv4_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
        ipv6_flowspec_address.value_namespace = name_space;
        ipv6_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
        ipv4vpn_flowspec_address.value_namespace = name_space;
        ipv4vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
        ipv6vpn_flowspec_address.value_namespace = name_space;
        ipv6vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address.yfilter = yfilter;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address.yfilter = yfilter;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address.yfilter = yfilter;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address.yfilter = yfilter;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-vpls-address" || name == "l2vpn-mspw-address" || name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-mcast-address" || name == "ipv4-label-address" || name == "ipv4-tunnel-address" || name == "ipv4-mdt-address" || name == "ipv4vpn-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-mcast-address" || name == "ipv6-label-address" || name == "ipv6vpn-address" || name == "ipv6vpn-mcast-address" || name == "rt-constraint-address" || name == "ipv6mvpn-address" || name == "ipv4mvpn-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "ipv4-flowspec-address" || name == "ipv6-flowspec-address" || name == "ipv4vpn-flowspec-address" || name == "ipv6vpn-flowspec-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "nexthop-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "nexthop-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "nexthop-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "nexthop-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopMetrice::NexthopMetrice()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "nexthop-metrice"; yang_parent_name = "nexthop-internal-info"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopMetrice::~NexthopMetrice()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopMetrice::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopMetrice::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopMetrice::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nexthop-metrice";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopMetrice::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopMetrice::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopMetrice::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopMetrice::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopMetrice::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopMetrice::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopRefcount::NexthopRefcount()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "nexthop-refcount"; yang_parent_name = "nexthop-internal-info"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopRefcount::~NexthopRefcount()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopRefcount::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopRefcount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopRefcount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nexthop-refcount";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopRefcount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopRefcount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopRefcount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopRefcount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopRefcount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopRefcount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopGatewayInternalInfo::NexthopGatewayInternalInfo()
    :
    gateway_flags{YType::uint32, "gateway-flags"},
    registration_type{YType::enumeration, "registration-type"},
    registration_since{YType::uint32, "registration-since"}
{

    yang_name = "nexthop-gateway-internal-info"; yang_parent_name = "nexthop-internal-info"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopGatewayInternalInfo::~NexthopGatewayInternalInfo()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopGatewayInternalInfo::has_data() const
{
    return gateway_flags.is_set
	|| registration_type.is_set
	|| registration_since.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopGatewayInternalInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(gateway_flags.yfilter)
	|| ydk::is_set(registration_type.yfilter)
	|| ydk::is_set(registration_since.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopGatewayInternalInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nexthop-gateway-internal-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopGatewayInternalInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gateway_flags.is_set || is_set(gateway_flags.yfilter)) leaf_name_data.push_back(gateway_flags.get_name_leafdata());
    if (registration_type.is_set || is_set(registration_type.yfilter)) leaf_name_data.push_back(registration_type.get_name_leafdata());
    if (registration_since.is_set || is_set(registration_since.yfilter)) leaf_name_data.push_back(registration_since.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopGatewayInternalInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopGatewayInternalInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopGatewayInternalInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "gateway-flags")
    {
        gateway_flags = value;
        gateway_flags.value_namespace = name_space;
        gateway_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "registration-type")
    {
        registration_type = value;
        registration_type.value_namespace = name_space;
        registration_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "registration-since")
    {
        registration_since = value;
        registration_since.value_namespace = name_space;
        registration_since.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopGatewayInternalInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "gateway-flags")
    {
        gateway_flags.yfilter = yfilter;
    }
    if(value_path == "registration-type")
    {
        registration_type.yfilter = yfilter;
    }
    if(value_path == "registration-since")
    {
        registration_since.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopGatewayInternalInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gateway-flags" || name == "registration-type" || name == "registration-since")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopGatewayInfo()
    :
    nexthop_route_prefix_length{YType::uint8, "nexthop-route-prefix-length"},
    nexthop_route_protocol{YType::str, "nexthop-route-protocol"},
    nexthop_route_path_count{YType::uint32, "nexthop-route-path-count"},
    nexthop_af_invalid_bits{YType::uint16, "nexthop-af-invalid-bits"},
    nexthop_status{YType::uint8, "nexthop-status"},
    nexthop_tableid{YType::uint64, "nexthop-tableid"},
    nexthop_metric{YType::uint32, "nexthop-metric"},
    last_event_type{YType::enumeration, "last-event-type"},
    last_update_type{YType::enumeration, "last-update-type"},
    critical_events{YType::uint32, "critical-events"},
    non_critical_events{YType::uint32, "non-critical-events"},
    last_event_since{YType::uint32, "last-event-since"},
    last_rib_update{YType::uint32, "last-rib-update"},
    nexthop_mpls_enabled{YType::boolean, "nexthop-mpls-enabled"},
    nexthop_mpls_interfaces{YType::uint32, "nexthop-mpls-interfaces"},
    nexthop_mpls_label{YType::uint32, "nexthop-mpls-label"}
    	,
    nexthop_route(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute>())
{
    nexthop_route->parent = this;

    yang_name = "nexthop-gateway-info"; yang_parent_name = "next-hop-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::~NexthopGatewayInfo()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::has_data() const
{
    for (std::size_t index=0; index<nexthop_route_path.size(); index++)
    {
        if(nexthop_route_path[index]->has_data())
            return true;
    }
    return nexthop_route_prefix_length.is_set
	|| nexthop_route_protocol.is_set
	|| nexthop_route_path_count.is_set
	|| nexthop_af_invalid_bits.is_set
	|| nexthop_status.is_set
	|| nexthop_tableid.is_set
	|| nexthop_metric.is_set
	|| last_event_type.is_set
	|| last_update_type.is_set
	|| critical_events.is_set
	|| non_critical_events.is_set
	|| last_event_since.is_set
	|| last_rib_update.is_set
	|| nexthop_mpls_enabled.is_set
	|| nexthop_mpls_interfaces.is_set
	|| nexthop_mpls_label.is_set
	|| (nexthop_route !=  nullptr && nexthop_route->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::has_operation() const
{
    for (std::size_t index=0; index<nexthop_route_path.size(); index++)
    {
        if(nexthop_route_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(nexthop_route_prefix_length.yfilter)
	|| ydk::is_set(nexthop_route_protocol.yfilter)
	|| ydk::is_set(nexthop_route_path_count.yfilter)
	|| ydk::is_set(nexthop_af_invalid_bits.yfilter)
	|| ydk::is_set(nexthop_status.yfilter)
	|| ydk::is_set(nexthop_tableid.yfilter)
	|| ydk::is_set(nexthop_metric.yfilter)
	|| ydk::is_set(last_event_type.yfilter)
	|| ydk::is_set(last_update_type.yfilter)
	|| ydk::is_set(critical_events.yfilter)
	|| ydk::is_set(non_critical_events.yfilter)
	|| ydk::is_set(last_event_since.yfilter)
	|| ydk::is_set(last_rib_update.yfilter)
	|| ydk::is_set(nexthop_mpls_enabled.yfilter)
	|| ydk::is_set(nexthop_mpls_interfaces.yfilter)
	|| ydk::is_set(nexthop_mpls_label.yfilter)
	|| (nexthop_route !=  nullptr && nexthop_route->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nexthop-gateway-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nexthop_route_prefix_length.is_set || is_set(nexthop_route_prefix_length.yfilter)) leaf_name_data.push_back(nexthop_route_prefix_length.get_name_leafdata());
    if (nexthop_route_protocol.is_set || is_set(nexthop_route_protocol.yfilter)) leaf_name_data.push_back(nexthop_route_protocol.get_name_leafdata());
    if (nexthop_route_path_count.is_set || is_set(nexthop_route_path_count.yfilter)) leaf_name_data.push_back(nexthop_route_path_count.get_name_leafdata());
    if (nexthop_af_invalid_bits.is_set || is_set(nexthop_af_invalid_bits.yfilter)) leaf_name_data.push_back(nexthop_af_invalid_bits.get_name_leafdata());
    if (nexthop_status.is_set || is_set(nexthop_status.yfilter)) leaf_name_data.push_back(nexthop_status.get_name_leafdata());
    if (nexthop_tableid.is_set || is_set(nexthop_tableid.yfilter)) leaf_name_data.push_back(nexthop_tableid.get_name_leafdata());
    if (nexthop_metric.is_set || is_set(nexthop_metric.yfilter)) leaf_name_data.push_back(nexthop_metric.get_name_leafdata());
    if (last_event_type.is_set || is_set(last_event_type.yfilter)) leaf_name_data.push_back(last_event_type.get_name_leafdata());
    if (last_update_type.is_set || is_set(last_update_type.yfilter)) leaf_name_data.push_back(last_update_type.get_name_leafdata());
    if (critical_events.is_set || is_set(critical_events.yfilter)) leaf_name_data.push_back(critical_events.get_name_leafdata());
    if (non_critical_events.is_set || is_set(non_critical_events.yfilter)) leaf_name_data.push_back(non_critical_events.get_name_leafdata());
    if (last_event_since.is_set || is_set(last_event_since.yfilter)) leaf_name_data.push_back(last_event_since.get_name_leafdata());
    if (last_rib_update.is_set || is_set(last_rib_update.yfilter)) leaf_name_data.push_back(last_rib_update.get_name_leafdata());
    if (nexthop_mpls_enabled.is_set || is_set(nexthop_mpls_enabled.yfilter)) leaf_name_data.push_back(nexthop_mpls_enabled.get_name_leafdata());
    if (nexthop_mpls_interfaces.is_set || is_set(nexthop_mpls_interfaces.yfilter)) leaf_name_data.push_back(nexthop_mpls_interfaces.get_name_leafdata());
    if (nexthop_mpls_label.is_set || is_set(nexthop_mpls_label.yfilter)) leaf_name_data.push_back(nexthop_mpls_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nexthop-route")
    {
        if(nexthop_route == nullptr)
        {
            nexthop_route = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute>();
        }
        return nexthop_route;
    }

    if(child_yang_name == "nexthop-route-path")
    {
        for(auto const & c : nexthop_route_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath>();
        c->parent = this;
        nexthop_route_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nexthop_route != nullptr)
    {
        children["nexthop-route"] = nexthop_route;
    }

    for (auto const & c : nexthop_route_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nexthop-route-prefix-length")
    {
        nexthop_route_prefix_length = value;
        nexthop_route_prefix_length.value_namespace = name_space;
        nexthop_route_prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nexthop-route-protocol")
    {
        nexthop_route_protocol = value;
        nexthop_route_protocol.value_namespace = name_space;
        nexthop_route_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nexthop-route-path-count")
    {
        nexthop_route_path_count = value;
        nexthop_route_path_count.value_namespace = name_space;
        nexthop_route_path_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nexthop-af-invalid-bits")
    {
        nexthop_af_invalid_bits = value;
        nexthop_af_invalid_bits.value_namespace = name_space;
        nexthop_af_invalid_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nexthop-status")
    {
        nexthop_status = value;
        nexthop_status.value_namespace = name_space;
        nexthop_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nexthop-tableid")
    {
        nexthop_tableid = value;
        nexthop_tableid.value_namespace = name_space;
        nexthop_tableid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nexthop-metric")
    {
        nexthop_metric = value;
        nexthop_metric.value_namespace = name_space;
        nexthop_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-event-type")
    {
        last_event_type = value;
        last_event_type.value_namespace = name_space;
        last_event_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-update-type")
    {
        last_update_type = value;
        last_update_type.value_namespace = name_space;
        last_update_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "critical-events")
    {
        critical_events = value;
        critical_events.value_namespace = name_space;
        critical_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-critical-events")
    {
        non_critical_events = value;
        non_critical_events.value_namespace = name_space;
        non_critical_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-event-since")
    {
        last_event_since = value;
        last_event_since.value_namespace = name_space;
        last_event_since.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-rib-update")
    {
        last_rib_update = value;
        last_rib_update.value_namespace = name_space;
        last_rib_update.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nexthop-mpls-enabled")
    {
        nexthop_mpls_enabled = value;
        nexthop_mpls_enabled.value_namespace = name_space;
        nexthop_mpls_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nexthop-mpls-interfaces")
    {
        nexthop_mpls_interfaces = value;
        nexthop_mpls_interfaces.value_namespace = name_space;
        nexthop_mpls_interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nexthop-mpls-label")
    {
        nexthop_mpls_label = value;
        nexthop_mpls_label.value_namespace = name_space;
        nexthop_mpls_label.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nexthop-route-prefix-length")
    {
        nexthop_route_prefix_length.yfilter = yfilter;
    }
    if(value_path == "nexthop-route-protocol")
    {
        nexthop_route_protocol.yfilter = yfilter;
    }
    if(value_path == "nexthop-route-path-count")
    {
        nexthop_route_path_count.yfilter = yfilter;
    }
    if(value_path == "nexthop-af-invalid-bits")
    {
        nexthop_af_invalid_bits.yfilter = yfilter;
    }
    if(value_path == "nexthop-status")
    {
        nexthop_status.yfilter = yfilter;
    }
    if(value_path == "nexthop-tableid")
    {
        nexthop_tableid.yfilter = yfilter;
    }
    if(value_path == "nexthop-metric")
    {
        nexthop_metric.yfilter = yfilter;
    }
    if(value_path == "last-event-type")
    {
        last_event_type.yfilter = yfilter;
    }
    if(value_path == "last-update-type")
    {
        last_update_type.yfilter = yfilter;
    }
    if(value_path == "critical-events")
    {
        critical_events.yfilter = yfilter;
    }
    if(value_path == "non-critical-events")
    {
        non_critical_events.yfilter = yfilter;
    }
    if(value_path == "last-event-since")
    {
        last_event_since.yfilter = yfilter;
    }
    if(value_path == "last-rib-update")
    {
        last_rib_update.yfilter = yfilter;
    }
    if(value_path == "nexthop-mpls-enabled")
    {
        nexthop_mpls_enabled.yfilter = yfilter;
    }
    if(value_path == "nexthop-mpls-interfaces")
    {
        nexthop_mpls_interfaces.yfilter = yfilter;
    }
    if(value_path == "nexthop-mpls-label")
    {
        nexthop_mpls_label.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nexthop-route" || name == "nexthop-route-path" || name == "nexthop-route-prefix-length" || name == "nexthop-route-protocol" || name == "nexthop-route-path-count" || name == "nexthop-af-invalid-bits" || name == "nexthop-status" || name == "nexthop-tableid" || name == "nexthop-metric" || name == "last-event-type" || name == "last-update-type" || name == "critical-events" || name == "non-critical-events" || name == "last-event-since" || name == "last-rib-update" || name == "nexthop-mpls-enabled" || name == "nexthop-mpls-interfaces" || name == "nexthop-mpls-label")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::NexthopRoute()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4_mdt_address{YType::str, "ipv4-mdt-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"}
    	,
    l2vpn_vpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::L2VpnVplsAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::L2VpnMspwAddress>())
	,ipv4_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::Ipv6SrPolicyAddress>())
{
    l2vpn_vpls_address->parent = this;
    l2vpn_mspw_address->parent = this;
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;

    yang_name = "nexthop-route"; yang_parent_name = "nexthop-gateway-info"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::~NexthopRoute()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4_mdt_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| rt_constraint_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv4mvpn_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_data())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_mcast_address.yfilter)
	|| ydk::is_set(ipv4_label_address.yfilter)
	|| ydk::is_set(ipv4_tunnel_address.yfilter)
	|| ydk::is_set(ipv4_mdt_address.yfilter)
	|| ydk::is_set(ipv4vpn_address.yfilter)
	|| ydk::is_set(ipv4vpna_mcastddress.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(ipv6_mcast_address.yfilter)
	|| ydk::is_set(ipv6_label_address.yfilter)
	|| ydk::is_set(ipv6vpn_address.yfilter)
	|| ydk::is_set(ipv6vpn_mcast_address.yfilter)
	|| ydk::is_set(rt_constraint_address.yfilter)
	|| ydk::is_set(ipv6mvpn_address.yfilter)
	|| ydk::is_set(ipv4mvpn_address.yfilter)
	|| ydk::is_set(l2vpn_evpn_address.yfilter)
	|| ydk::is_set(ls_ls_address.yfilter)
	|| ydk::is_set(ipv4_flowspec_address.yfilter)
	|| ydk::is_set(ipv6_flowspec_address.yfilter)
	|| ydk::is_set(ipv4vpn_flowspec_address.yfilter)
	|| ydk::is_set(ipv6vpn_flowspec_address.yfilter)
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_operation())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nexthop-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.yfilter)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.yfilter)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.yfilter)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4_mdt_address.is_set || is_set(ipv4_mdt_address.yfilter)) leaf_name_data.push_back(ipv4_mdt_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.yfilter)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.yfilter)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.yfilter)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.yfilter)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.yfilter)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.yfilter)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.yfilter)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.yfilter)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.yfilter)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.yfilter)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.yfilter)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(l2vpn_vpls_address != nullptr)
    {
        children["l2vpn-vpls-address"] = l2vpn_vpls_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(ipv4_sr_policy_address != nullptr)
    {
        children["ipv4-sr-policy-address"] = ipv4_sr_policy_address;
    }

    if(ipv6_sr_policy_address != nullptr)
    {
        children["ipv6-sr-policy-address"] = ipv6_sr_policy_address;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
        ipv4_mcast_address.value_namespace = name_space;
        ipv4_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
        ipv4_label_address.value_namespace = name_space;
        ipv4_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
        ipv4_tunnel_address.value_namespace = name_space;
        ipv4_tunnel_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address = value;
        ipv4_mdt_address.value_namespace = name_space;
        ipv4_mdt_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
        ipv4vpn_address.value_namespace = name_space;
        ipv4vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
        ipv4vpna_mcastddress.value_namespace = name_space;
        ipv4vpna_mcastddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
        ipv6_mcast_address.value_namespace = name_space;
        ipv6_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
        ipv6_label_address.value_namespace = name_space;
        ipv6_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
        ipv6vpn_address.value_namespace = name_space;
        ipv6vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
        ipv6vpn_mcast_address.value_namespace = name_space;
        ipv6vpn_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
        rt_constraint_address.value_namespace = name_space;
        rt_constraint_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
        ipv6mvpn_address.value_namespace = name_space;
        ipv6mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
        ipv4mvpn_address.value_namespace = name_space;
        ipv4mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
        l2vpn_evpn_address.value_namespace = name_space;
        l2vpn_evpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
        ls_ls_address.value_namespace = name_space;
        ls_ls_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
        ipv4_flowspec_address.value_namespace = name_space;
        ipv4_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
        ipv6_flowspec_address.value_namespace = name_space;
        ipv6_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
        ipv4vpn_flowspec_address.value_namespace = name_space;
        ipv4vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
        ipv6vpn_flowspec_address.value_namespace = name_space;
        ipv6vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address.yfilter = yfilter;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address.yfilter = yfilter;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address.yfilter = yfilter;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address.yfilter = yfilter;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-vpls-address" || name == "l2vpn-mspw-address" || name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-mcast-address" || name == "ipv4-label-address" || name == "ipv4-tunnel-address" || name == "ipv4-mdt-address" || name == "ipv4vpn-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-mcast-address" || name == "ipv6-label-address" || name == "ipv6vpn-address" || name == "ipv6vpn-mcast-address" || name == "rt-constraint-address" || name == "ipv6mvpn-address" || name == "ipv4mvpn-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "ipv4-flowspec-address" || name == "ipv6-flowspec-address" || name == "ipv4vpn-flowspec-address" || name == "ipv6vpn-flowspec-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "nexthop-route"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "nexthop-route"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "nexthop-route"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "nexthop-route"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::NexthopRoutePath()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4_mdt_address{YType::str, "ipv4-mdt-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"}
    	,
    l2vpn_vpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::L2VpnVplsAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::L2VpnMspwAddress>())
	,ipv4_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::Ipv6SrPolicyAddress>())
{
    l2vpn_vpls_address->parent = this;
    l2vpn_mspw_address->parent = this;
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;

    yang_name = "nexthop-route-path"; yang_parent_name = "nexthop-gateway-info"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::~NexthopRoutePath()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4_mdt_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| rt_constraint_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv4mvpn_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_data())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_mcast_address.yfilter)
	|| ydk::is_set(ipv4_label_address.yfilter)
	|| ydk::is_set(ipv4_tunnel_address.yfilter)
	|| ydk::is_set(ipv4_mdt_address.yfilter)
	|| ydk::is_set(ipv4vpn_address.yfilter)
	|| ydk::is_set(ipv4vpna_mcastddress.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(ipv6_mcast_address.yfilter)
	|| ydk::is_set(ipv6_label_address.yfilter)
	|| ydk::is_set(ipv6vpn_address.yfilter)
	|| ydk::is_set(ipv6vpn_mcast_address.yfilter)
	|| ydk::is_set(rt_constraint_address.yfilter)
	|| ydk::is_set(ipv6mvpn_address.yfilter)
	|| ydk::is_set(ipv4mvpn_address.yfilter)
	|| ydk::is_set(l2vpn_evpn_address.yfilter)
	|| ydk::is_set(ls_ls_address.yfilter)
	|| ydk::is_set(ipv4_flowspec_address.yfilter)
	|| ydk::is_set(ipv6_flowspec_address.yfilter)
	|| ydk::is_set(ipv4vpn_flowspec_address.yfilter)
	|| ydk::is_set(ipv6vpn_flowspec_address.yfilter)
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_operation())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nexthop-route-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.yfilter)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.yfilter)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.yfilter)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4_mdt_address.is_set || is_set(ipv4_mdt_address.yfilter)) leaf_name_data.push_back(ipv4_mdt_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.yfilter)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.yfilter)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.yfilter)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.yfilter)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.yfilter)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.yfilter)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.yfilter)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.yfilter)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.yfilter)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.yfilter)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.yfilter)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(l2vpn_vpls_address != nullptr)
    {
        children["l2vpn-vpls-address"] = l2vpn_vpls_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(ipv4_sr_policy_address != nullptr)
    {
        children["ipv4-sr-policy-address"] = ipv4_sr_policy_address;
    }

    if(ipv6_sr_policy_address != nullptr)
    {
        children["ipv6-sr-policy-address"] = ipv6_sr_policy_address;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
        ipv4_mcast_address.value_namespace = name_space;
        ipv4_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
        ipv4_label_address.value_namespace = name_space;
        ipv4_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
        ipv4_tunnel_address.value_namespace = name_space;
        ipv4_tunnel_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address = value;
        ipv4_mdt_address.value_namespace = name_space;
        ipv4_mdt_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
        ipv4vpn_address.value_namespace = name_space;
        ipv4vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
        ipv4vpna_mcastddress.value_namespace = name_space;
        ipv4vpna_mcastddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
        ipv6_mcast_address.value_namespace = name_space;
        ipv6_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
        ipv6_label_address.value_namespace = name_space;
        ipv6_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
        ipv6vpn_address.value_namespace = name_space;
        ipv6vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
        ipv6vpn_mcast_address.value_namespace = name_space;
        ipv6vpn_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
        rt_constraint_address.value_namespace = name_space;
        rt_constraint_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
        ipv6mvpn_address.value_namespace = name_space;
        ipv6mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
        ipv4mvpn_address.value_namespace = name_space;
        ipv4mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
        l2vpn_evpn_address.value_namespace = name_space;
        l2vpn_evpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
        ls_ls_address.value_namespace = name_space;
        ls_ls_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
        ipv4_flowspec_address.value_namespace = name_space;
        ipv4_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
        ipv6_flowspec_address.value_namespace = name_space;
        ipv6_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
        ipv4vpn_flowspec_address.value_namespace = name_space;
        ipv4vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
        ipv6vpn_flowspec_address.value_namespace = name_space;
        ipv6vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address.yfilter = yfilter;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address.yfilter = yfilter;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address.yfilter = yfilter;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address.yfilter = yfilter;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-vpls-address" || name == "l2vpn-mspw-address" || name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-mcast-address" || name == "ipv4-label-address" || name == "ipv4-tunnel-address" || name == "ipv4-mdt-address" || name == "ipv4vpn-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-mcast-address" || name == "ipv6-label-address" || name == "ipv6vpn-address" || name == "ipv6vpn-mcast-address" || name == "rt-constraint-address" || name == "ipv6mvpn-address" || name == "ipv4mvpn-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "ipv4-flowspec-address" || name == "ipv6-flowspec-address" || name == "ipv4vpn-flowspec-address" || name == "ipv6vpn-flowspec-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "nexthop-route-path"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "nexthop-route-path"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "nexthop-route-path"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "nexthop-route-path"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::NeighborAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4_mdt_address{YType::str, "ipv4-mdt-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"}
    	,
    l2vpn_vpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::L2VpnVplsAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::L2VpnMspwAddress>())
	,ipv4_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::Ipv6SrPolicyAddress>())
{
    l2vpn_vpls_address->parent = this;
    l2vpn_mspw_address->parent = this;
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;

    yang_name = "neighbor-address"; yang_parent_name = "next-hop-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4_mdt_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| rt_constraint_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv4mvpn_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_data())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_mcast_address.yfilter)
	|| ydk::is_set(ipv4_label_address.yfilter)
	|| ydk::is_set(ipv4_tunnel_address.yfilter)
	|| ydk::is_set(ipv4_mdt_address.yfilter)
	|| ydk::is_set(ipv4vpn_address.yfilter)
	|| ydk::is_set(ipv4vpna_mcastddress.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(ipv6_mcast_address.yfilter)
	|| ydk::is_set(ipv6_label_address.yfilter)
	|| ydk::is_set(ipv6vpn_address.yfilter)
	|| ydk::is_set(ipv6vpn_mcast_address.yfilter)
	|| ydk::is_set(rt_constraint_address.yfilter)
	|| ydk::is_set(ipv6mvpn_address.yfilter)
	|| ydk::is_set(ipv4mvpn_address.yfilter)
	|| ydk::is_set(l2vpn_evpn_address.yfilter)
	|| ydk::is_set(ls_ls_address.yfilter)
	|| ydk::is_set(ipv4_flowspec_address.yfilter)
	|| ydk::is_set(ipv6_flowspec_address.yfilter)
	|| ydk::is_set(ipv4vpn_flowspec_address.yfilter)
	|| ydk::is_set(ipv6vpn_flowspec_address.yfilter)
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_operation())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.yfilter)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.yfilter)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.yfilter)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4_mdt_address.is_set || is_set(ipv4_mdt_address.yfilter)) leaf_name_data.push_back(ipv4_mdt_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.yfilter)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.yfilter)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.yfilter)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.yfilter)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.yfilter)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.yfilter)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.yfilter)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.yfilter)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.yfilter)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.yfilter)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.yfilter)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(l2vpn_vpls_address != nullptr)
    {
        children["l2vpn-vpls-address"] = l2vpn_vpls_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(ipv4_sr_policy_address != nullptr)
    {
        children["ipv4-sr-policy-address"] = ipv4_sr_policy_address;
    }

    if(ipv6_sr_policy_address != nullptr)
    {
        children["ipv6-sr-policy-address"] = ipv6_sr_policy_address;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
        ipv4_mcast_address.value_namespace = name_space;
        ipv4_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
        ipv4_label_address.value_namespace = name_space;
        ipv4_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
        ipv4_tunnel_address.value_namespace = name_space;
        ipv4_tunnel_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address = value;
        ipv4_mdt_address.value_namespace = name_space;
        ipv4_mdt_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
        ipv4vpn_address.value_namespace = name_space;
        ipv4vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
        ipv4vpna_mcastddress.value_namespace = name_space;
        ipv4vpna_mcastddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
        ipv6_mcast_address.value_namespace = name_space;
        ipv6_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
        ipv6_label_address.value_namespace = name_space;
        ipv6_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
        ipv6vpn_address.value_namespace = name_space;
        ipv6vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
        ipv6vpn_mcast_address.value_namespace = name_space;
        ipv6vpn_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
        rt_constraint_address.value_namespace = name_space;
        rt_constraint_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
        ipv6mvpn_address.value_namespace = name_space;
        ipv6mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
        ipv4mvpn_address.value_namespace = name_space;
        ipv4mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
        l2vpn_evpn_address.value_namespace = name_space;
        l2vpn_evpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
        ls_ls_address.value_namespace = name_space;
        ls_ls_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
        ipv4_flowspec_address.value_namespace = name_space;
        ipv4_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
        ipv6_flowspec_address.value_namespace = name_space;
        ipv6_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
        ipv4vpn_flowspec_address.value_namespace = name_space;
        ipv4vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
        ipv6vpn_flowspec_address.value_namespace = name_space;
        ipv6vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address.yfilter = yfilter;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address.yfilter = yfilter;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address.yfilter = yfilter;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address.yfilter = yfilter;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-vpls-address" || name == "l2vpn-mspw-address" || name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-mcast-address" || name == "ipv4-label-address" || name == "ipv4-tunnel-address" || name == "ipv4-mdt-address" || name == "ipv4vpn-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-mcast-address" || name == "ipv6-label-address" || name == "ipv6vpn-address" || name == "ipv6vpn-mcast-address" || name == "rt-constraint-address" || name == "ipv6mvpn-address" || name == "ipv4mvpn-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "ipv4-flowspec-address" || name == "ipv6-flowspec-address" || name == "ipv4vpn-flowspec-address" || name == "ipv6vpn-flowspec-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RtSetCounters::RtSetCounters()
{

    yang_name = "rt-set-counters"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RtSetCounters::~RtSetCounters()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RtSetCounters::has_data() const
{
    for (std::size_t index=0; index<rt_set_counter.size(); index++)
    {
        if(rt_set_counter[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RtSetCounters::has_operation() const
{
    for (std::size_t index=0; index<rt_set_counter.size(); index++)
    {
        if(rt_set_counter[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RtSetCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rt-set-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RtSetCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RtSetCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rt-set-counter")
    {
        for(auto const & c : rt_set_counter)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RtSetCounters::RtSetCounter>();
        c->parent = this;
        rt_set_counter.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RtSetCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rt_set_counter)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RtSetCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RtSetCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RtSetCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rt-set-counter")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RtSetCounters::RtSetCounter::RtSetCounter()
    :
    rt_set_id{YType::int32, "rt-set-id"}
    	,
    route_target_set(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RtSetCounters::RtSetCounter::RouteTargetSet>())
{
    route_target_set->parent = this;

    yang_name = "rt-set-counter"; yang_parent_name = "rt-set-counters"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RtSetCounters::RtSetCounter::~RtSetCounter()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RtSetCounters::RtSetCounter::has_data() const
{
    return rt_set_id.is_set
	|| (route_target_set !=  nullptr && route_target_set->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RtSetCounters::RtSetCounter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rt_set_id.yfilter)
	|| (route_target_set !=  nullptr && route_target_set->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RtSetCounters::RtSetCounter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rt-set-counter" <<"[rt-set-id='" <<rt_set_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RtSetCounters::RtSetCounter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rt_set_id.is_set || is_set(rt_set_id.yfilter)) leaf_name_data.push_back(rt_set_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RtSetCounters::RtSetCounter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-target-set")
    {
        if(route_target_set == nullptr)
        {
            route_target_set = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RtSetCounters::RtSetCounter::RouteTargetSet>();
        }
        return route_target_set;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RtSetCounters::RtSetCounter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_target_set != nullptr)
    {
        children["route-target-set"] = route_target_set;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RtSetCounters::RtSetCounter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rt-set-id")
    {
        rt_set_id = value;
        rt_set_id.value_namespace = name_space;
        rt_set_id.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RtSetCounters::RtSetCounter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rt-set-id")
    {
        rt_set_id.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RtSetCounters::RtSetCounter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-target-set" || name == "rt-set-id")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RtSetCounters::RtSetCounter::RouteTargetSet::RouteTargetSet()
    :
    rt_set_len{YType::uint8, "rt-set-len"},
    rt_set_id{YType::uint32, "rt-set-id"},
    rt_set_net_count{YType::uint32, "rt-set-net-count"}
{

    yang_name = "route-target-set"; yang_parent_name = "rt-set-counter"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RtSetCounters::RtSetCounter::RouteTargetSet::~RouteTargetSet()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RtSetCounters::RtSetCounter::RouteTargetSet::has_data() const
{
    for (std::size_t index=0; index<rt_set.size(); index++)
    {
        if(rt_set[index]->has_data())
            return true;
    }
    return rt_set_len.is_set
	|| rt_set_id.is_set
	|| rt_set_net_count.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RtSetCounters::RtSetCounter::RouteTargetSet::has_operation() const
{
    for (std::size_t index=0; index<rt_set.size(); index++)
    {
        if(rt_set[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rt_set_len.yfilter)
	|| ydk::is_set(rt_set_id.yfilter)
	|| ydk::is_set(rt_set_net_count.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RtSetCounters::RtSetCounter::RouteTargetSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-target-set";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RtSetCounters::RtSetCounter::RouteTargetSet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rt_set_len.is_set || is_set(rt_set_len.yfilter)) leaf_name_data.push_back(rt_set_len.get_name_leafdata());
    if (rt_set_id.is_set || is_set(rt_set_id.yfilter)) leaf_name_data.push_back(rt_set_id.get_name_leafdata());
    if (rt_set_net_count.is_set || is_set(rt_set_net_count.yfilter)) leaf_name_data.push_back(rt_set_net_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RtSetCounters::RtSetCounter::RouteTargetSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rt-set")
    {
        for(auto const & c : rt_set)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RtSetCounters::RtSetCounter::RouteTargetSet::RtSet>();
        c->parent = this;
        rt_set.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RtSetCounters::RtSetCounter::RouteTargetSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rt_set)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RtSetCounters::RtSetCounter::RouteTargetSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rt-set-len")
    {
        rt_set_len = value;
        rt_set_len.value_namespace = name_space;
        rt_set_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-set-id")
    {
        rt_set_id = value;
        rt_set_id.value_namespace = name_space;
        rt_set_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-set-net-count")
    {
        rt_set_net_count = value;
        rt_set_net_count.value_namespace = name_space;
        rt_set_net_count.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RtSetCounters::RtSetCounter::RouteTargetSet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rt-set-len")
    {
        rt_set_len.yfilter = yfilter;
    }
    if(value_path == "rt-set-id")
    {
        rt_set_id.yfilter = yfilter;
    }
    if(value_path == "rt-set-net-count")
    {
        rt_set_net_count.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RtSetCounters::RtSetCounter::RouteTargetSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rt-set" || name == "rt-set-len" || name == "rt-set-id" || name == "rt-set-net-count")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RtSetCounters::RtSetCounter::RouteTargetSet::RtSet::RtSet()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "rt-set"; yang_parent_name = "route-target-set"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RtSetCounters::RtSetCounter::RouteTargetSet::RtSet::~RtSet()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RtSetCounters::RtSetCounter::RouteTargetSet::RtSet::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RtSetCounters::RtSetCounter::RouteTargetSet::RtSet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RtSetCounters::RtSetCounter::RouteTargetSet::RtSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rt-set";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RtSetCounters::RtSetCounter::RouteTargetSet::RtSet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RtSetCounters::RtSetCounter::RouteTargetSet::RtSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RtSetCounters::RtSetCounter::RouteTargetSet::RtSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RtSetCounters::RtSetCounter::RouteTargetSet::RtSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RtSetCounters::RtSetCounter::RouteTargetSet::RtSet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RtSetCounters::RtSetCounter::RouteTargetSet::RtSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPaths()
{

    yang_name = "bmp-paths"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::~BmpPaths()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::has_data() const
{
    for (std::size_t index=0; index<bmp_path.size(); index++)
    {
        if(bmp_path[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::has_operation() const
{
    for (std::size_t index=0; index<bmp_path.size(); index++)
    {
        if(bmp_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bmp-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bmp-path")
    {
        for(auto const & c : bmp_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath>();
        c->parent = this;
        bmp_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bmp_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bmp-path")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath()
    :
    network{YType::str, "network"},
    prefix_length{YType::int32, "prefix-length"},
    af_name{YType::enumeration, "af-name"},
    bmp_net_flags{YType::uint32, "bmp-net-flags"},
    bmp_net_version{YType::uint32, "bmp-net-version"},
    num_of_path{YType::uint32, "num-of-path"},
    has_local_label{YType::boolean, "has-local-label"},
    net_local_label{YType::uint32, "net-local-label"}
    	,
    bgp_prefix(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix>())
	,version_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::VersionTimestamp>())
	,version_age(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::VersionAge>())
{
    bgp_prefix->parent = this;
    version_timestamp->parent = this;
    version_age->parent = this;

    yang_name = "bmp-path"; yang_parent_name = "bmp-paths"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::~BmpPath()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::has_data() const
{
    for (std::size_t index=0; index<bmp_path.size(); index++)
    {
        if(bmp_path[index]->has_data())
            return true;
    }
    return network.is_set
	|| prefix_length.is_set
	|| af_name.is_set
	|| bmp_net_flags.is_set
	|| bmp_net_version.is_set
	|| num_of_path.is_set
	|| has_local_label.is_set
	|| net_local_label.is_set
	|| (bgp_prefix !=  nullptr && bgp_prefix->has_data())
	|| (version_timestamp !=  nullptr && version_timestamp->has_data())
	|| (version_age !=  nullptr && version_age->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::has_operation() const
{
    for (std::size_t index=0; index<bmp_path.size(); index++)
    {
        if(bmp_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(network.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(bmp_net_flags.yfilter)
	|| ydk::is_set(bmp_net_version.yfilter)
	|| ydk::is_set(num_of_path.yfilter)
	|| ydk::is_set(has_local_label.yfilter)
	|| ydk::is_set(net_local_label.yfilter)
	|| (bgp_prefix !=  nullptr && bgp_prefix->has_operation())
	|| (version_timestamp !=  nullptr && version_timestamp->has_operation())
	|| (version_age !=  nullptr && version_age->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bmp-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (network.is_set || is_set(network.yfilter)) leaf_name_data.push_back(network.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (bmp_net_flags.is_set || is_set(bmp_net_flags.yfilter)) leaf_name_data.push_back(bmp_net_flags.get_name_leafdata());
    if (bmp_net_version.is_set || is_set(bmp_net_version.yfilter)) leaf_name_data.push_back(bmp_net_version.get_name_leafdata());
    if (num_of_path.is_set || is_set(num_of_path.yfilter)) leaf_name_data.push_back(num_of_path.get_name_leafdata());
    if (has_local_label.is_set || is_set(has_local_label.yfilter)) leaf_name_data.push_back(has_local_label.get_name_leafdata());
    if (net_local_label.is_set || is_set(net_local_label.yfilter)) leaf_name_data.push_back(net_local_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-prefix")
    {
        if(bgp_prefix == nullptr)
        {
            bgp_prefix = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix>();
        }
        return bgp_prefix;
    }

    if(child_yang_name == "version-timestamp")
    {
        if(version_timestamp == nullptr)
        {
            version_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::VersionTimestamp>();
        }
        return version_timestamp;
    }

    if(child_yang_name == "version-age")
    {
        if(version_age == nullptr)
        {
            version_age = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::VersionAge>();
        }
        return version_age;
    }

    if(child_yang_name == "bmp-path")
    {
        for(auto const & c : bmp_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_>();
        c->parent = this;
        bmp_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bgp_prefix != nullptr)
    {
        children["bgp-prefix"] = bgp_prefix;
    }

    if(version_timestamp != nullptr)
    {
        children["version-timestamp"] = version_timestamp;
    }

    if(version_age != nullptr)
    {
        children["version-age"] = version_age;
    }

    for (auto const & c : bmp_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "network")
    {
        network = value;
        network.value_namespace = name_space;
        network.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-net-flags")
    {
        bmp_net_flags = value;
        bmp_net_flags.value_namespace = name_space;
        bmp_net_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-net-version")
    {
        bmp_net_version = value;
        bmp_net_version.value_namespace = name_space;
        bmp_net_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-of-path")
    {
        num_of_path = value;
        num_of_path.value_namespace = name_space;
        num_of_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-local-label")
    {
        has_local_label = value;
        has_local_label.value_namespace = name_space;
        has_local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "net-local-label")
    {
        net_local_label = value;
        net_local_label.value_namespace = name_space;
        net_local_label.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "network")
    {
        network.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "bmp-net-flags")
    {
        bmp_net_flags.yfilter = yfilter;
    }
    if(value_path == "bmp-net-version")
    {
        bmp_net_version.yfilter = yfilter;
    }
    if(value_path == "num-of-path")
    {
        num_of_path.yfilter = yfilter;
    }
    if(value_path == "has-local-label")
    {
        has_local_label.yfilter = yfilter;
    }
    if(value_path == "net-local-label")
    {
        net_local_label.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-prefix" || name == "version-timestamp" || name == "version-age" || name == "bmp-path" || name == "network" || name == "prefix-length" || name == "af-name" || name == "bmp-net-flags" || name == "bmp-net-version" || name == "num-of-path" || name == "has-local-label" || name == "net-local-label")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::BgpPrefix()
    :
    prefix_length{YType::uint16, "prefix-length"}
    	,
    prefix(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix>())
{
    prefix->parent = this;

    yang_name = "bgp-prefix"; yang_parent_name = "bmp-path"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::~BgpPrefix()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::has_data() const
{
    return prefix_length.is_set
	|| (prefix !=  nullptr && prefix->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| (prefix !=  nullptr && prefix->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix>();
        }
        return prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(prefix != nullptr)
    {
        children["prefix"] = prefix;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::Prefix()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4_mdt_address{YType::str, "ipv4-mdt-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"}
    	,
    l2vpn_vpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::L2VpnVplsAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::L2VpnMspwAddress>())
	,ipv4_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::Ipv6SrPolicyAddress>())
{
    l2vpn_vpls_address->parent = this;
    l2vpn_mspw_address->parent = this;
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;

    yang_name = "prefix"; yang_parent_name = "bgp-prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::~Prefix()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4_mdt_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| rt_constraint_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv4mvpn_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_data())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_mcast_address.yfilter)
	|| ydk::is_set(ipv4_label_address.yfilter)
	|| ydk::is_set(ipv4_tunnel_address.yfilter)
	|| ydk::is_set(ipv4_mdt_address.yfilter)
	|| ydk::is_set(ipv4vpn_address.yfilter)
	|| ydk::is_set(ipv4vpna_mcastddress.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(ipv6_mcast_address.yfilter)
	|| ydk::is_set(ipv6_label_address.yfilter)
	|| ydk::is_set(ipv6vpn_address.yfilter)
	|| ydk::is_set(ipv6vpn_mcast_address.yfilter)
	|| ydk::is_set(rt_constraint_address.yfilter)
	|| ydk::is_set(ipv6mvpn_address.yfilter)
	|| ydk::is_set(ipv4mvpn_address.yfilter)
	|| ydk::is_set(l2vpn_evpn_address.yfilter)
	|| ydk::is_set(ls_ls_address.yfilter)
	|| ydk::is_set(ipv4_flowspec_address.yfilter)
	|| ydk::is_set(ipv6_flowspec_address.yfilter)
	|| ydk::is_set(ipv4vpn_flowspec_address.yfilter)
	|| ydk::is_set(ipv6vpn_flowspec_address.yfilter)
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_operation())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.yfilter)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.yfilter)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.yfilter)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4_mdt_address.is_set || is_set(ipv4_mdt_address.yfilter)) leaf_name_data.push_back(ipv4_mdt_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.yfilter)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.yfilter)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.yfilter)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.yfilter)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.yfilter)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.yfilter)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.yfilter)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.yfilter)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.yfilter)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.yfilter)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.yfilter)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(l2vpn_vpls_address != nullptr)
    {
        children["l2vpn-vpls-address"] = l2vpn_vpls_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(ipv4_sr_policy_address != nullptr)
    {
        children["ipv4-sr-policy-address"] = ipv4_sr_policy_address;
    }

    if(ipv6_sr_policy_address != nullptr)
    {
        children["ipv6-sr-policy-address"] = ipv6_sr_policy_address;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
        ipv4_mcast_address.value_namespace = name_space;
        ipv4_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
        ipv4_label_address.value_namespace = name_space;
        ipv4_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
        ipv4_tunnel_address.value_namespace = name_space;
        ipv4_tunnel_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address = value;
        ipv4_mdt_address.value_namespace = name_space;
        ipv4_mdt_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
        ipv4vpn_address.value_namespace = name_space;
        ipv4vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
        ipv4vpna_mcastddress.value_namespace = name_space;
        ipv4vpna_mcastddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
        ipv6_mcast_address.value_namespace = name_space;
        ipv6_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
        ipv6_label_address.value_namespace = name_space;
        ipv6_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
        ipv6vpn_address.value_namespace = name_space;
        ipv6vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
        ipv6vpn_mcast_address.value_namespace = name_space;
        ipv6vpn_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
        rt_constraint_address.value_namespace = name_space;
        rt_constraint_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
        ipv6mvpn_address.value_namespace = name_space;
        ipv6mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
        ipv4mvpn_address.value_namespace = name_space;
        ipv4mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
        l2vpn_evpn_address.value_namespace = name_space;
        l2vpn_evpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
        ls_ls_address.value_namespace = name_space;
        ls_ls_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
        ipv4_flowspec_address.value_namespace = name_space;
        ipv4_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
        ipv6_flowspec_address.value_namespace = name_space;
        ipv6_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
        ipv4vpn_flowspec_address.value_namespace = name_space;
        ipv4vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
        ipv6vpn_flowspec_address.value_namespace = name_space;
        ipv6vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address.yfilter = yfilter;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address.yfilter = yfilter;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address.yfilter = yfilter;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address.yfilter = yfilter;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-vpls-address" || name == "l2vpn-mspw-address" || name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-mcast-address" || name == "ipv4-label-address" || name == "ipv4-tunnel-address" || name == "ipv4-mdt-address" || name == "ipv4vpn-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-mcast-address" || name == "ipv6-label-address" || name == "ipv6vpn-address" || name == "ipv6vpn-mcast-address" || name == "rt-constraint-address" || name == "ipv6mvpn-address" || name == "ipv4mvpn-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "ipv4-flowspec-address" || name == "ipv6-flowspec-address" || name == "ipv4vpn-flowspec-address" || name == "ipv6vpn-flowspec-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::VersionTimestamp::VersionTimestamp()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "version-timestamp"; yang_parent_name = "bmp-path"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::VersionTimestamp::~VersionTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::VersionTimestamp::has_data() const
{
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::VersionTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::VersionTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "version-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::VersionTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::VersionTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::VersionTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::VersionTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::VersionTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::VersionTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::VersionAge::VersionAge()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "version-age"; yang_parent_name = "bmp-path"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::VersionAge::~VersionAge()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::VersionAge::has_data() const
{
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::VersionAge::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::VersionAge::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "version-age";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::VersionAge::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::VersionAge::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::VersionAge::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::VersionAge::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::VersionAge::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::VersionAge::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::BmpPath_()
    :
    bmp_path_flags{YType::uint32, "bmp-path-flags"},
    bmp_path_adv_bit_map{YType::uint16, "bmp-path-adv-bit-map"},
    bmp_path_snd_bit_map{YType::uint16, "bmp-path-snd-bit-map"},
    bmp_nbr_bit_map{YType::uint32, "bmp-nbr-bit-map"},
    local_path{YType::boolean, "local-path"},
    received_label{YType::uint32, "received-label"},
    bpath_pointer{YType::uint64, "bpath-pointer"}
    	,
    neighbor_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress>())
{
    neighbor_address->parent = this;

    yang_name = "bmp-path"; yang_parent_name = "bmp-path"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::~BmpPath_()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::has_data() const
{
    return bmp_path_flags.is_set
	|| bmp_path_adv_bit_map.is_set
	|| bmp_path_snd_bit_map.is_set
	|| bmp_nbr_bit_map.is_set
	|| local_path.is_set
	|| received_label.is_set
	|| bpath_pointer.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bmp_path_flags.yfilter)
	|| ydk::is_set(bmp_path_adv_bit_map.yfilter)
	|| ydk::is_set(bmp_path_snd_bit_map.yfilter)
	|| ydk::is_set(bmp_nbr_bit_map.yfilter)
	|| ydk::is_set(local_path.yfilter)
	|| ydk::is_set(received_label.yfilter)
	|| ydk::is_set(bpath_pointer.yfilter)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bmp-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bmp_path_flags.is_set || is_set(bmp_path_flags.yfilter)) leaf_name_data.push_back(bmp_path_flags.get_name_leafdata());
    if (bmp_path_adv_bit_map.is_set || is_set(bmp_path_adv_bit_map.yfilter)) leaf_name_data.push_back(bmp_path_adv_bit_map.get_name_leafdata());
    if (bmp_path_snd_bit_map.is_set || is_set(bmp_path_snd_bit_map.yfilter)) leaf_name_data.push_back(bmp_path_snd_bit_map.get_name_leafdata());
    if (bmp_nbr_bit_map.is_set || is_set(bmp_nbr_bit_map.yfilter)) leaf_name_data.push_back(bmp_nbr_bit_map.get_name_leafdata());
    if (local_path.is_set || is_set(local_path.yfilter)) leaf_name_data.push_back(local_path.get_name_leafdata());
    if (received_label.is_set || is_set(received_label.yfilter)) leaf_name_data.push_back(received_label.get_name_leafdata());
    if (bpath_pointer.is_set || is_set(bpath_pointer.yfilter)) leaf_name_data.push_back(bpath_pointer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address == nullptr)
        {
            neighbor_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress>();
        }
        return neighbor_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(neighbor_address != nullptr)
    {
        children["neighbor-address"] = neighbor_address;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bmp-path-flags")
    {
        bmp_path_flags = value;
        bmp_path_flags.value_namespace = name_space;
        bmp_path_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-path-adv-bit-map")
    {
        bmp_path_adv_bit_map = value;
        bmp_path_adv_bit_map.value_namespace = name_space;
        bmp_path_adv_bit_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-path-snd-bit-map")
    {
        bmp_path_snd_bit_map = value;
        bmp_path_snd_bit_map.value_namespace = name_space;
        bmp_path_snd_bit_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-nbr-bit-map")
    {
        bmp_nbr_bit_map = value;
        bmp_nbr_bit_map.value_namespace = name_space;
        bmp_nbr_bit_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-path")
    {
        local_path = value;
        local_path.value_namespace = name_space;
        local_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-label")
    {
        received_label = value;
        received_label.value_namespace = name_space;
        received_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bpath-pointer")
    {
        bpath_pointer = value;
        bpath_pointer.value_namespace = name_space;
        bpath_pointer.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bmp-path-flags")
    {
        bmp_path_flags.yfilter = yfilter;
    }
    if(value_path == "bmp-path-adv-bit-map")
    {
        bmp_path_adv_bit_map.yfilter = yfilter;
    }
    if(value_path == "bmp-path-snd-bit-map")
    {
        bmp_path_snd_bit_map.yfilter = yfilter;
    }
    if(value_path == "bmp-nbr-bit-map")
    {
        bmp_nbr_bit_map.yfilter = yfilter;
    }
    if(value_path == "local-path")
    {
        local_path.yfilter = yfilter;
    }
    if(value_path == "received-label")
    {
        received_label.yfilter = yfilter;
    }
    if(value_path == "bpath-pointer")
    {
        bpath_pointer.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address" || name == "bmp-path-flags" || name == "bmp-path-adv-bit-map" || name == "bmp-path-snd-bit-map" || name == "bmp-nbr-bit-map" || name == "local-path" || name == "received-label" || name == "bpath-pointer")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::NeighborAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4_mdt_address{YType::str, "ipv4-mdt-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"}
    	,
    l2vpn_vpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::L2VpnVplsAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::L2VpnMspwAddress>())
	,ipv4_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::Ipv6SrPolicyAddress>())
{
    l2vpn_vpls_address->parent = this;
    l2vpn_mspw_address->parent = this;
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;

    yang_name = "neighbor-address"; yang_parent_name = "bmp-path"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4_mdt_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| rt_constraint_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv4mvpn_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_data())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_mcast_address.yfilter)
	|| ydk::is_set(ipv4_label_address.yfilter)
	|| ydk::is_set(ipv4_tunnel_address.yfilter)
	|| ydk::is_set(ipv4_mdt_address.yfilter)
	|| ydk::is_set(ipv4vpn_address.yfilter)
	|| ydk::is_set(ipv4vpna_mcastddress.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(ipv6_mcast_address.yfilter)
	|| ydk::is_set(ipv6_label_address.yfilter)
	|| ydk::is_set(ipv6vpn_address.yfilter)
	|| ydk::is_set(ipv6vpn_mcast_address.yfilter)
	|| ydk::is_set(rt_constraint_address.yfilter)
	|| ydk::is_set(ipv6mvpn_address.yfilter)
	|| ydk::is_set(ipv4mvpn_address.yfilter)
	|| ydk::is_set(l2vpn_evpn_address.yfilter)
	|| ydk::is_set(ls_ls_address.yfilter)
	|| ydk::is_set(ipv4_flowspec_address.yfilter)
	|| ydk::is_set(ipv6_flowspec_address.yfilter)
	|| ydk::is_set(ipv4vpn_flowspec_address.yfilter)
	|| ydk::is_set(ipv6vpn_flowspec_address.yfilter)
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_operation())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.yfilter)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.yfilter)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.yfilter)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4_mdt_address.is_set || is_set(ipv4_mdt_address.yfilter)) leaf_name_data.push_back(ipv4_mdt_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.yfilter)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.yfilter)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.yfilter)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.yfilter)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.yfilter)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.yfilter)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.yfilter)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.yfilter)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.yfilter)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.yfilter)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.yfilter)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(l2vpn_vpls_address != nullptr)
    {
        children["l2vpn-vpls-address"] = l2vpn_vpls_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(ipv4_sr_policy_address != nullptr)
    {
        children["ipv4-sr-policy-address"] = ipv4_sr_policy_address;
    }

    if(ipv6_sr_policy_address != nullptr)
    {
        children["ipv6-sr-policy-address"] = ipv6_sr_policy_address;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
        ipv4_mcast_address.value_namespace = name_space;
        ipv4_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
        ipv4_label_address.value_namespace = name_space;
        ipv4_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
        ipv4_tunnel_address.value_namespace = name_space;
        ipv4_tunnel_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address = value;
        ipv4_mdt_address.value_namespace = name_space;
        ipv4_mdt_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
        ipv4vpn_address.value_namespace = name_space;
        ipv4vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
        ipv4vpna_mcastddress.value_namespace = name_space;
        ipv4vpna_mcastddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
        ipv6_mcast_address.value_namespace = name_space;
        ipv6_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
        ipv6_label_address.value_namespace = name_space;
        ipv6_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
        ipv6vpn_address.value_namespace = name_space;
        ipv6vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
        ipv6vpn_mcast_address.value_namespace = name_space;
        ipv6vpn_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
        rt_constraint_address.value_namespace = name_space;
        rt_constraint_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
        ipv6mvpn_address.value_namespace = name_space;
        ipv6mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
        ipv4mvpn_address.value_namespace = name_space;
        ipv4mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
        l2vpn_evpn_address.value_namespace = name_space;
        l2vpn_evpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
        ls_ls_address.value_namespace = name_space;
        ls_ls_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
        ipv4_flowspec_address.value_namespace = name_space;
        ipv4_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
        ipv6_flowspec_address.value_namespace = name_space;
        ipv6_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
        ipv4vpn_flowspec_address.value_namespace = name_space;
        ipv4vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
        ipv6vpn_flowspec_address.value_namespace = name_space;
        ipv6vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address.yfilter = yfilter;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address.yfilter = yfilter;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address.yfilter = yfilter;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address.yfilter = yfilter;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-vpls-address" || name == "l2vpn-mspw-address" || name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-mcast-address" || name == "ipv4-label-address" || name == "ipv4-tunnel-address" || name == "ipv4-mdt-address" || name == "ipv4vpn-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-mcast-address" || name == "ipv6-label-address" || name == "ipv6vpn-address" || name == "ipv6vpn-mcast-address" || name == "rt-constraint-address" || name == "ipv6mvpn-address" || name == "ipv4mvpn-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "ipv4-flowspec-address" || name == "ipv6-flowspec-address" || name == "ipv4vpn-flowspec-address" || name == "ipv6vpn-flowspec-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroups()
{

    yang_name = "update-generation-update-groups"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::~UpdateGenerationUpdateGroups()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::has_data() const
{
    for (std::size_t index=0; index<update_generation_update_group.size(); index++)
    {
        if(update_generation_update_group[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::has_operation() const
{
    for (std::size_t index=0; index<update_generation_update_group.size(); index++)
    {
        if(update_generation_update_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-generation-update-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "update-generation-update-group")
    {
        for(auto const & c : update_generation_update_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup>();
        c->parent = this;
        update_generation_update_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : update_generation_update_group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "update-generation-update-group")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateGenerationUpdateGroup()
    :
    update_group_index{YType::int32, "update-group-index"},
    process_id{YType::uint32, "process-id"},
    update_vrf_name{YType::str, "update-vrf-name"},
    update_group_af_name{YType::enumeration, "update-group-af-name"},
    neighbor_session_af_name{YType::uint8, "neighbor-session-af-name"},
    update_group_index_xr{YType::uint32, "update-group-index-xr"},
    update_group_flags2{YType::uint32, "update-group-flags2"},
    update_out_queue_messages{YType::uint32, "update-out-queue-messages"},
    update_out_queue_size{YType::uint32, "update-out-queue-size"},
    update_sub_group_count{YType::uint32, "update-sub-group-count"},
    sub_group_throttled_count{YType::uint32, "sub-group-throttled-count"},
    refresh_sub_group_count{YType::uint32, "refresh-sub-group-count"},
    refresh_sub_group_throttled_count{YType::uint32, "refresh-sub-group-throttled-count"},
    filter_group_count{YType::uint32, "filter-group-count"},
    neighbor_count{YType::uint32, "neighbor-count"},
    neighbor_leaving_count{YType::uint32, "neighbor-leaving-count"},
    update_generation_recovery_pending{YType::boolean, "update-generation-recovery-pending"},
    last_update_timer_expiry_age{YType::uint32, "last-update-timer-expiry-age"},
    is_update_timer_running{YType::boolean, "is-update-timer-running"},
    perm_pelem_encountered{YType::uint32, "perm-pelem-encountered"},
    perm_pelem_allowed{YType::uint32, "perm-pelem-allowed"},
    perm_pelem_not_allowed{YType::uint32, "perm-pelem-not-allowed"},
    perm_pelem_exp_wdr{YType::uint32, "perm-pelem-exp-wdr"},
    perm_pelem_spur_wdr{YType::uint32, "perm-pelem-spur-wdr"},
    is_permanent{YType::boolean, "is-permanent"}
    	,
    last_update_timer_start_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerStartTimestamp>())
	,last_update_timer_stop_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerStopTimestamp>())
	,last_update_timer_expiry_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerExpiryTimestamp>())
	,last_update_timer_remaining_value(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerRemainingValue>())
	,last_update_timer_delay_value(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerDelayValue>())
	,update_statistics(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics>())
{
    last_update_timer_start_timestamp->parent = this;
    last_update_timer_stop_timestamp->parent = this;
    last_update_timer_expiry_timestamp->parent = this;
    last_update_timer_remaining_value->parent = this;
    last_update_timer_delay_value->parent = this;
    update_statistics->parent = this;

    yang_name = "update-generation-update-group"; yang_parent_name = "update-generation-update-groups"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::~UpdateGenerationUpdateGroup()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::has_data() const
{
    return update_group_index.is_set
	|| process_id.is_set
	|| update_vrf_name.is_set
	|| update_group_af_name.is_set
	|| neighbor_session_af_name.is_set
	|| update_group_index_xr.is_set
	|| update_group_flags2.is_set
	|| update_out_queue_messages.is_set
	|| update_out_queue_size.is_set
	|| update_sub_group_count.is_set
	|| sub_group_throttled_count.is_set
	|| refresh_sub_group_count.is_set
	|| refresh_sub_group_throttled_count.is_set
	|| filter_group_count.is_set
	|| neighbor_count.is_set
	|| neighbor_leaving_count.is_set
	|| update_generation_recovery_pending.is_set
	|| last_update_timer_expiry_age.is_set
	|| is_update_timer_running.is_set
	|| perm_pelem_encountered.is_set
	|| perm_pelem_allowed.is_set
	|| perm_pelem_not_allowed.is_set
	|| perm_pelem_exp_wdr.is_set
	|| perm_pelem_spur_wdr.is_set
	|| is_permanent.is_set
	|| (last_update_timer_start_timestamp !=  nullptr && last_update_timer_start_timestamp->has_data())
	|| (last_update_timer_stop_timestamp !=  nullptr && last_update_timer_stop_timestamp->has_data())
	|| (last_update_timer_expiry_timestamp !=  nullptr && last_update_timer_expiry_timestamp->has_data())
	|| (last_update_timer_remaining_value !=  nullptr && last_update_timer_remaining_value->has_data())
	|| (last_update_timer_delay_value !=  nullptr && last_update_timer_delay_value->has_data())
	|| (update_statistics !=  nullptr && update_statistics->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(update_group_index.yfilter)
	|| ydk::is_set(process_id.yfilter)
	|| ydk::is_set(update_vrf_name.yfilter)
	|| ydk::is_set(update_group_af_name.yfilter)
	|| ydk::is_set(neighbor_session_af_name.yfilter)
	|| ydk::is_set(update_group_index_xr.yfilter)
	|| ydk::is_set(update_group_flags2.yfilter)
	|| ydk::is_set(update_out_queue_messages.yfilter)
	|| ydk::is_set(update_out_queue_size.yfilter)
	|| ydk::is_set(update_sub_group_count.yfilter)
	|| ydk::is_set(sub_group_throttled_count.yfilter)
	|| ydk::is_set(refresh_sub_group_count.yfilter)
	|| ydk::is_set(refresh_sub_group_throttled_count.yfilter)
	|| ydk::is_set(filter_group_count.yfilter)
	|| ydk::is_set(neighbor_count.yfilter)
	|| ydk::is_set(neighbor_leaving_count.yfilter)
	|| ydk::is_set(update_generation_recovery_pending.yfilter)
	|| ydk::is_set(last_update_timer_expiry_age.yfilter)
	|| ydk::is_set(is_update_timer_running.yfilter)
	|| ydk::is_set(perm_pelem_encountered.yfilter)
	|| ydk::is_set(perm_pelem_allowed.yfilter)
	|| ydk::is_set(perm_pelem_not_allowed.yfilter)
	|| ydk::is_set(perm_pelem_exp_wdr.yfilter)
	|| ydk::is_set(perm_pelem_spur_wdr.yfilter)
	|| ydk::is_set(is_permanent.yfilter)
	|| (last_update_timer_start_timestamp !=  nullptr && last_update_timer_start_timestamp->has_operation())
	|| (last_update_timer_stop_timestamp !=  nullptr && last_update_timer_stop_timestamp->has_operation())
	|| (last_update_timer_expiry_timestamp !=  nullptr && last_update_timer_expiry_timestamp->has_operation())
	|| (last_update_timer_remaining_value !=  nullptr && last_update_timer_remaining_value->has_operation())
	|| (last_update_timer_delay_value !=  nullptr && last_update_timer_delay_value->has_operation())
	|| (update_statistics !=  nullptr && update_statistics->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-generation-update-group" <<"[update-group-index='" <<update_group_index <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (update_group_index.is_set || is_set(update_group_index.yfilter)) leaf_name_data.push_back(update_group_index.get_name_leafdata());
    if (process_id.is_set || is_set(process_id.yfilter)) leaf_name_data.push_back(process_id.get_name_leafdata());
    if (update_vrf_name.is_set || is_set(update_vrf_name.yfilter)) leaf_name_data.push_back(update_vrf_name.get_name_leafdata());
    if (update_group_af_name.is_set || is_set(update_group_af_name.yfilter)) leaf_name_data.push_back(update_group_af_name.get_name_leafdata());
    if (neighbor_session_af_name.is_set || is_set(neighbor_session_af_name.yfilter)) leaf_name_data.push_back(neighbor_session_af_name.get_name_leafdata());
    if (update_group_index_xr.is_set || is_set(update_group_index_xr.yfilter)) leaf_name_data.push_back(update_group_index_xr.get_name_leafdata());
    if (update_group_flags2.is_set || is_set(update_group_flags2.yfilter)) leaf_name_data.push_back(update_group_flags2.get_name_leafdata());
    if (update_out_queue_messages.is_set || is_set(update_out_queue_messages.yfilter)) leaf_name_data.push_back(update_out_queue_messages.get_name_leafdata());
    if (update_out_queue_size.is_set || is_set(update_out_queue_size.yfilter)) leaf_name_data.push_back(update_out_queue_size.get_name_leafdata());
    if (update_sub_group_count.is_set || is_set(update_sub_group_count.yfilter)) leaf_name_data.push_back(update_sub_group_count.get_name_leafdata());
    if (sub_group_throttled_count.is_set || is_set(sub_group_throttled_count.yfilter)) leaf_name_data.push_back(sub_group_throttled_count.get_name_leafdata());
    if (refresh_sub_group_count.is_set || is_set(refresh_sub_group_count.yfilter)) leaf_name_data.push_back(refresh_sub_group_count.get_name_leafdata());
    if (refresh_sub_group_throttled_count.is_set || is_set(refresh_sub_group_throttled_count.yfilter)) leaf_name_data.push_back(refresh_sub_group_throttled_count.get_name_leafdata());
    if (filter_group_count.is_set || is_set(filter_group_count.yfilter)) leaf_name_data.push_back(filter_group_count.get_name_leafdata());
    if (neighbor_count.is_set || is_set(neighbor_count.yfilter)) leaf_name_data.push_back(neighbor_count.get_name_leafdata());
    if (neighbor_leaving_count.is_set || is_set(neighbor_leaving_count.yfilter)) leaf_name_data.push_back(neighbor_leaving_count.get_name_leafdata());
    if (update_generation_recovery_pending.is_set || is_set(update_generation_recovery_pending.yfilter)) leaf_name_data.push_back(update_generation_recovery_pending.get_name_leafdata());
    if (last_update_timer_expiry_age.is_set || is_set(last_update_timer_expiry_age.yfilter)) leaf_name_data.push_back(last_update_timer_expiry_age.get_name_leafdata());
    if (is_update_timer_running.is_set || is_set(is_update_timer_running.yfilter)) leaf_name_data.push_back(is_update_timer_running.get_name_leafdata());
    if (perm_pelem_encountered.is_set || is_set(perm_pelem_encountered.yfilter)) leaf_name_data.push_back(perm_pelem_encountered.get_name_leafdata());
    if (perm_pelem_allowed.is_set || is_set(perm_pelem_allowed.yfilter)) leaf_name_data.push_back(perm_pelem_allowed.get_name_leafdata());
    if (perm_pelem_not_allowed.is_set || is_set(perm_pelem_not_allowed.yfilter)) leaf_name_data.push_back(perm_pelem_not_allowed.get_name_leafdata());
    if (perm_pelem_exp_wdr.is_set || is_set(perm_pelem_exp_wdr.yfilter)) leaf_name_data.push_back(perm_pelem_exp_wdr.get_name_leafdata());
    if (perm_pelem_spur_wdr.is_set || is_set(perm_pelem_spur_wdr.yfilter)) leaf_name_data.push_back(perm_pelem_spur_wdr.get_name_leafdata());
    if (is_permanent.is_set || is_set(is_permanent.yfilter)) leaf_name_data.push_back(is_permanent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-update-timer-start-timestamp")
    {
        if(last_update_timer_start_timestamp == nullptr)
        {
            last_update_timer_start_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerStartTimestamp>();
        }
        return last_update_timer_start_timestamp;
    }

    if(child_yang_name == "last-update-timer-stop-timestamp")
    {
        if(last_update_timer_stop_timestamp == nullptr)
        {
            last_update_timer_stop_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerStopTimestamp>();
        }
        return last_update_timer_stop_timestamp;
    }

    if(child_yang_name == "last-update-timer-expiry-timestamp")
    {
        if(last_update_timer_expiry_timestamp == nullptr)
        {
            last_update_timer_expiry_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerExpiryTimestamp>();
        }
        return last_update_timer_expiry_timestamp;
    }

    if(child_yang_name == "last-update-timer-remaining-value")
    {
        if(last_update_timer_remaining_value == nullptr)
        {
            last_update_timer_remaining_value = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerRemainingValue>();
        }
        return last_update_timer_remaining_value;
    }

    if(child_yang_name == "last-update-timer-delay-value")
    {
        if(last_update_timer_delay_value == nullptr)
        {
            last_update_timer_delay_value = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerDelayValue>();
        }
        return last_update_timer_delay_value;
    }

    if(child_yang_name == "update-statistics")
    {
        if(update_statistics == nullptr)
        {
            update_statistics = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics>();
        }
        return update_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(last_update_timer_start_timestamp != nullptr)
    {
        children["last-update-timer-start-timestamp"] = last_update_timer_start_timestamp;
    }

    if(last_update_timer_stop_timestamp != nullptr)
    {
        children["last-update-timer-stop-timestamp"] = last_update_timer_stop_timestamp;
    }

    if(last_update_timer_expiry_timestamp != nullptr)
    {
        children["last-update-timer-expiry-timestamp"] = last_update_timer_expiry_timestamp;
    }

    if(last_update_timer_remaining_value != nullptr)
    {
        children["last-update-timer-remaining-value"] = last_update_timer_remaining_value;
    }

    if(last_update_timer_delay_value != nullptr)
    {
        children["last-update-timer-delay-value"] = last_update_timer_delay_value;
    }

    if(update_statistics != nullptr)
    {
        children["update-statistics"] = update_statistics;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "update-group-index")
    {
        update_group_index = value;
        update_group_index.value_namespace = name_space;
        update_group_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-id")
    {
        process_id = value;
        process_id.value_namespace = name_space;
        process_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-vrf-name")
    {
        update_vrf_name = value;
        update_vrf_name.value_namespace = name_space;
        update_vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-group-af-name")
    {
        update_group_af_name = value;
        update_group_af_name.value_namespace = name_space;
        update_group_af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-session-af-name")
    {
        neighbor_session_af_name = value;
        neighbor_session_af_name.value_namespace = name_space;
        neighbor_session_af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-group-index-xr")
    {
        update_group_index_xr = value;
        update_group_index_xr.value_namespace = name_space;
        update_group_index_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-group-flags2")
    {
        update_group_flags2 = value;
        update_group_flags2.value_namespace = name_space;
        update_group_flags2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-out-queue-messages")
    {
        update_out_queue_messages = value;
        update_out_queue_messages.value_namespace = name_space;
        update_out_queue_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-out-queue-size")
    {
        update_out_queue_size = value;
        update_out_queue_size.value_namespace = name_space;
        update_out_queue_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-sub-group-count")
    {
        update_sub_group_count = value;
        update_sub_group_count.value_namespace = name_space;
        update_sub_group_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-throttled-count")
    {
        sub_group_throttled_count = value;
        sub_group_throttled_count.value_namespace = name_space;
        sub_group_throttled_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refresh-sub-group-count")
    {
        refresh_sub_group_count = value;
        refresh_sub_group_count.value_namespace = name_space;
        refresh_sub_group_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refresh-sub-group-throttled-count")
    {
        refresh_sub_group_throttled_count = value;
        refresh_sub_group_throttled_count.value_namespace = name_space;
        refresh_sub_group_throttled_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filter-group-count")
    {
        filter_group_count = value;
        filter_group_count.value_namespace = name_space;
        filter_group_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-count")
    {
        neighbor_count = value;
        neighbor_count.value_namespace = name_space;
        neighbor_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-leaving-count")
    {
        neighbor_leaving_count = value;
        neighbor_leaving_count.value_namespace = name_space;
        neighbor_leaving_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-generation-recovery-pending")
    {
        update_generation_recovery_pending = value;
        update_generation_recovery_pending.value_namespace = name_space;
        update_generation_recovery_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-update-timer-expiry-age")
    {
        last_update_timer_expiry_age = value;
        last_update_timer_expiry_age.value_namespace = name_space;
        last_update_timer_expiry_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-update-timer-running")
    {
        is_update_timer_running = value;
        is_update_timer_running.value_namespace = name_space;
        is_update_timer_running.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "perm-pelem-encountered")
    {
        perm_pelem_encountered = value;
        perm_pelem_encountered.value_namespace = name_space;
        perm_pelem_encountered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "perm-pelem-allowed")
    {
        perm_pelem_allowed = value;
        perm_pelem_allowed.value_namespace = name_space;
        perm_pelem_allowed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "perm-pelem-not-allowed")
    {
        perm_pelem_not_allowed = value;
        perm_pelem_not_allowed.value_namespace = name_space;
        perm_pelem_not_allowed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "perm-pelem-exp-wdr")
    {
        perm_pelem_exp_wdr = value;
        perm_pelem_exp_wdr.value_namespace = name_space;
        perm_pelem_exp_wdr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "perm-pelem-spur-wdr")
    {
        perm_pelem_spur_wdr = value;
        perm_pelem_spur_wdr.value_namespace = name_space;
        perm_pelem_spur_wdr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-permanent")
    {
        is_permanent = value;
        is_permanent.value_namespace = name_space;
        is_permanent.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "update-group-index")
    {
        update_group_index.yfilter = yfilter;
    }
    if(value_path == "process-id")
    {
        process_id.yfilter = yfilter;
    }
    if(value_path == "update-vrf-name")
    {
        update_vrf_name.yfilter = yfilter;
    }
    if(value_path == "update-group-af-name")
    {
        update_group_af_name.yfilter = yfilter;
    }
    if(value_path == "neighbor-session-af-name")
    {
        neighbor_session_af_name.yfilter = yfilter;
    }
    if(value_path == "update-group-index-xr")
    {
        update_group_index_xr.yfilter = yfilter;
    }
    if(value_path == "update-group-flags2")
    {
        update_group_flags2.yfilter = yfilter;
    }
    if(value_path == "update-out-queue-messages")
    {
        update_out_queue_messages.yfilter = yfilter;
    }
    if(value_path == "update-out-queue-size")
    {
        update_out_queue_size.yfilter = yfilter;
    }
    if(value_path == "update-sub-group-count")
    {
        update_sub_group_count.yfilter = yfilter;
    }
    if(value_path == "sub-group-throttled-count")
    {
        sub_group_throttled_count.yfilter = yfilter;
    }
    if(value_path == "refresh-sub-group-count")
    {
        refresh_sub_group_count.yfilter = yfilter;
    }
    if(value_path == "refresh-sub-group-throttled-count")
    {
        refresh_sub_group_throttled_count.yfilter = yfilter;
    }
    if(value_path == "filter-group-count")
    {
        filter_group_count.yfilter = yfilter;
    }
    if(value_path == "neighbor-count")
    {
        neighbor_count.yfilter = yfilter;
    }
    if(value_path == "neighbor-leaving-count")
    {
        neighbor_leaving_count.yfilter = yfilter;
    }
    if(value_path == "update-generation-recovery-pending")
    {
        update_generation_recovery_pending.yfilter = yfilter;
    }
    if(value_path == "last-update-timer-expiry-age")
    {
        last_update_timer_expiry_age.yfilter = yfilter;
    }
    if(value_path == "is-update-timer-running")
    {
        is_update_timer_running.yfilter = yfilter;
    }
    if(value_path == "perm-pelem-encountered")
    {
        perm_pelem_encountered.yfilter = yfilter;
    }
    if(value_path == "perm-pelem-allowed")
    {
        perm_pelem_allowed.yfilter = yfilter;
    }
    if(value_path == "perm-pelem-not-allowed")
    {
        perm_pelem_not_allowed.yfilter = yfilter;
    }
    if(value_path == "perm-pelem-exp-wdr")
    {
        perm_pelem_exp_wdr.yfilter = yfilter;
    }
    if(value_path == "perm-pelem-spur-wdr")
    {
        perm_pelem_spur_wdr.yfilter = yfilter;
    }
    if(value_path == "is-permanent")
    {
        is_permanent.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-update-timer-start-timestamp" || name == "last-update-timer-stop-timestamp" || name == "last-update-timer-expiry-timestamp" || name == "last-update-timer-remaining-value" || name == "last-update-timer-delay-value" || name == "update-statistics" || name == "update-group-index" || name == "process-id" || name == "update-vrf-name" || name == "update-group-af-name" || name == "neighbor-session-af-name" || name == "update-group-index-xr" || name == "update-group-flags2" || name == "update-out-queue-messages" || name == "update-out-queue-size" || name == "update-sub-group-count" || name == "sub-group-throttled-count" || name == "refresh-sub-group-count" || name == "refresh-sub-group-throttled-count" || name == "filter-group-count" || name == "neighbor-count" || name == "neighbor-leaving-count" || name == "update-generation-recovery-pending" || name == "last-update-timer-expiry-age" || name == "is-update-timer-running" || name == "perm-pelem-encountered" || name == "perm-pelem-allowed" || name == "perm-pelem-not-allowed" || name == "perm-pelem-exp-wdr" || name == "perm-pelem-spur-wdr" || name == "is-permanent")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerStartTimestamp::LastUpdateTimerStartTimestamp()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "last-update-timer-start-timestamp"; yang_parent_name = "update-generation-update-group"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerStartTimestamp::~LastUpdateTimerStartTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerStartTimestamp::has_data() const
{
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerStartTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerStartTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-update-timer-start-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerStartTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerStartTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerStartTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerStartTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerStartTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerStartTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerStopTimestamp::LastUpdateTimerStopTimestamp()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "last-update-timer-stop-timestamp"; yang_parent_name = "update-generation-update-group"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerStopTimestamp::~LastUpdateTimerStopTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerStopTimestamp::has_data() const
{
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerStopTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerStopTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-update-timer-stop-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerStopTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerStopTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerStopTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerStopTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerStopTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerStopTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerExpiryTimestamp::LastUpdateTimerExpiryTimestamp()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "last-update-timer-expiry-timestamp"; yang_parent_name = "update-generation-update-group"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerExpiryTimestamp::~LastUpdateTimerExpiryTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerExpiryTimestamp::has_data() const
{
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerExpiryTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerExpiryTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-update-timer-expiry-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerExpiryTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerExpiryTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerExpiryTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerExpiryTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerExpiryTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerExpiryTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerRemainingValue::LastUpdateTimerRemainingValue()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "last-update-timer-remaining-value"; yang_parent_name = "update-generation-update-group"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerRemainingValue::~LastUpdateTimerRemainingValue()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerRemainingValue::has_data() const
{
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerRemainingValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerRemainingValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-update-timer-remaining-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerRemainingValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerRemainingValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerRemainingValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerRemainingValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerRemainingValue::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerRemainingValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerDelayValue::LastUpdateTimerDelayValue()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "last-update-timer-delay-value"; yang_parent_name = "update-generation-update-group"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerDelayValue::~LastUpdateTimerDelayValue()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerDelayValue::has_data() const
{
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerDelayValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerDelayValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-update-timer-delay-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerDelayValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerDelayValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerDelayValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerDelayValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerDelayValue::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerDelayValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::UpdateStatistics()
    :
    update_out_queue_messages_high{YType::uint32, "update-out-queue-messages-high"},
    update_out_queue_messages_cumulative{YType::uint32, "update-out-queue-messages-cumulative"},
    update_out_queue_messages_discarded{YType::uint32, "update-out-queue-messages-discarded"},
    update_out_queue_messages_cleared{YType::uint32, "update-out-queue-messages-cleared"},
    update_out_queue_size_high{YType::uint32, "update-out-queue-size-high"},
    update_out_queue_size_cumulative{YType::uint64, "update-out-queue-size-cumulative"},
    update_out_queue_size_discarded{YType::uint64, "update-out-queue-size-discarded"},
    update_out_queue_size_cleared{YType::uint64, "update-out-queue-size-cleared"},
    last_update_discard_age{YType::uint32, "last-update-discard-age"},
    last_update_cleard_age{YType::uint32, "last-update-cleard-age"},
    update_throttle_count{YType::uint32, "update-throttle-count"},
    last_update_throttle_age{YType::uint32, "last-update-throttle-age"},
    update_recovery_count{YType::uint32, "update-recovery-count"},
    last_update_recovery_age{YType::uint32, "last-update-recovery-age"},
    update_memory_allocation_fail_count{YType::uint32, "update-memory-allocation-fail-count"},
    last_update_memory_allocation_fail_age{YType::uint32, "last-update-memory-allocation-fail-age"}
    	,
    last_update_discard_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateDiscardTimestamp>())
	,last_update_cleared_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateClearedTimestamp>())
	,last_update_throttle_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateThrottleTimestamp>())
	,last_update_recovery_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateRecoveryTimestamp>())
	,last_update_memory_allocation_fail_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateMemoryAllocationFailTimestamp>())
{
    last_update_discard_timestamp->parent = this;
    last_update_cleared_timestamp->parent = this;
    last_update_throttle_timestamp->parent = this;
    last_update_recovery_timestamp->parent = this;
    last_update_memory_allocation_fail_timestamp->parent = this;

    yang_name = "update-statistics"; yang_parent_name = "update-generation-update-group"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::~UpdateStatistics()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::has_data() const
{
    return update_out_queue_messages_high.is_set
	|| update_out_queue_messages_cumulative.is_set
	|| update_out_queue_messages_discarded.is_set
	|| update_out_queue_messages_cleared.is_set
	|| update_out_queue_size_high.is_set
	|| update_out_queue_size_cumulative.is_set
	|| update_out_queue_size_discarded.is_set
	|| update_out_queue_size_cleared.is_set
	|| last_update_discard_age.is_set
	|| last_update_cleard_age.is_set
	|| update_throttle_count.is_set
	|| last_update_throttle_age.is_set
	|| update_recovery_count.is_set
	|| last_update_recovery_age.is_set
	|| update_memory_allocation_fail_count.is_set
	|| last_update_memory_allocation_fail_age.is_set
	|| (last_update_discard_timestamp !=  nullptr && last_update_discard_timestamp->has_data())
	|| (last_update_cleared_timestamp !=  nullptr && last_update_cleared_timestamp->has_data())
	|| (last_update_throttle_timestamp !=  nullptr && last_update_throttle_timestamp->has_data())
	|| (last_update_recovery_timestamp !=  nullptr && last_update_recovery_timestamp->has_data())
	|| (last_update_memory_allocation_fail_timestamp !=  nullptr && last_update_memory_allocation_fail_timestamp->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(update_out_queue_messages_high.yfilter)
	|| ydk::is_set(update_out_queue_messages_cumulative.yfilter)
	|| ydk::is_set(update_out_queue_messages_discarded.yfilter)
	|| ydk::is_set(update_out_queue_messages_cleared.yfilter)
	|| ydk::is_set(update_out_queue_size_high.yfilter)
	|| ydk::is_set(update_out_queue_size_cumulative.yfilter)
	|| ydk::is_set(update_out_queue_size_discarded.yfilter)
	|| ydk::is_set(update_out_queue_size_cleared.yfilter)
	|| ydk::is_set(last_update_discard_age.yfilter)
	|| ydk::is_set(last_update_cleard_age.yfilter)
	|| ydk::is_set(update_throttle_count.yfilter)
	|| ydk::is_set(last_update_throttle_age.yfilter)
	|| ydk::is_set(update_recovery_count.yfilter)
	|| ydk::is_set(last_update_recovery_age.yfilter)
	|| ydk::is_set(update_memory_allocation_fail_count.yfilter)
	|| ydk::is_set(last_update_memory_allocation_fail_age.yfilter)
	|| (last_update_discard_timestamp !=  nullptr && last_update_discard_timestamp->has_operation())
	|| (last_update_cleared_timestamp !=  nullptr && last_update_cleared_timestamp->has_operation())
	|| (last_update_throttle_timestamp !=  nullptr && last_update_throttle_timestamp->has_operation())
	|| (last_update_recovery_timestamp !=  nullptr && last_update_recovery_timestamp->has_operation())
	|| (last_update_memory_allocation_fail_timestamp !=  nullptr && last_update_memory_allocation_fail_timestamp->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (update_out_queue_messages_high.is_set || is_set(update_out_queue_messages_high.yfilter)) leaf_name_data.push_back(update_out_queue_messages_high.get_name_leafdata());
    if (update_out_queue_messages_cumulative.is_set || is_set(update_out_queue_messages_cumulative.yfilter)) leaf_name_data.push_back(update_out_queue_messages_cumulative.get_name_leafdata());
    if (update_out_queue_messages_discarded.is_set || is_set(update_out_queue_messages_discarded.yfilter)) leaf_name_data.push_back(update_out_queue_messages_discarded.get_name_leafdata());
    if (update_out_queue_messages_cleared.is_set || is_set(update_out_queue_messages_cleared.yfilter)) leaf_name_data.push_back(update_out_queue_messages_cleared.get_name_leafdata());
    if (update_out_queue_size_high.is_set || is_set(update_out_queue_size_high.yfilter)) leaf_name_data.push_back(update_out_queue_size_high.get_name_leafdata());
    if (update_out_queue_size_cumulative.is_set || is_set(update_out_queue_size_cumulative.yfilter)) leaf_name_data.push_back(update_out_queue_size_cumulative.get_name_leafdata());
    if (update_out_queue_size_discarded.is_set || is_set(update_out_queue_size_discarded.yfilter)) leaf_name_data.push_back(update_out_queue_size_discarded.get_name_leafdata());
    if (update_out_queue_size_cleared.is_set || is_set(update_out_queue_size_cleared.yfilter)) leaf_name_data.push_back(update_out_queue_size_cleared.get_name_leafdata());
    if (last_update_discard_age.is_set || is_set(last_update_discard_age.yfilter)) leaf_name_data.push_back(last_update_discard_age.get_name_leafdata());
    if (last_update_cleard_age.is_set || is_set(last_update_cleard_age.yfilter)) leaf_name_data.push_back(last_update_cleard_age.get_name_leafdata());
    if (update_throttle_count.is_set || is_set(update_throttle_count.yfilter)) leaf_name_data.push_back(update_throttle_count.get_name_leafdata());
    if (last_update_throttle_age.is_set || is_set(last_update_throttle_age.yfilter)) leaf_name_data.push_back(last_update_throttle_age.get_name_leafdata());
    if (update_recovery_count.is_set || is_set(update_recovery_count.yfilter)) leaf_name_data.push_back(update_recovery_count.get_name_leafdata());
    if (last_update_recovery_age.is_set || is_set(last_update_recovery_age.yfilter)) leaf_name_data.push_back(last_update_recovery_age.get_name_leafdata());
    if (update_memory_allocation_fail_count.is_set || is_set(update_memory_allocation_fail_count.yfilter)) leaf_name_data.push_back(update_memory_allocation_fail_count.get_name_leafdata());
    if (last_update_memory_allocation_fail_age.is_set || is_set(last_update_memory_allocation_fail_age.yfilter)) leaf_name_data.push_back(last_update_memory_allocation_fail_age.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-update-discard-timestamp")
    {
        if(last_update_discard_timestamp == nullptr)
        {
            last_update_discard_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateDiscardTimestamp>();
        }
        return last_update_discard_timestamp;
    }

    if(child_yang_name == "last-update-cleared-timestamp")
    {
        if(last_update_cleared_timestamp == nullptr)
        {
            last_update_cleared_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateClearedTimestamp>();
        }
        return last_update_cleared_timestamp;
    }

    if(child_yang_name == "last-update-throttle-timestamp")
    {
        if(last_update_throttle_timestamp == nullptr)
        {
            last_update_throttle_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateThrottleTimestamp>();
        }
        return last_update_throttle_timestamp;
    }

    if(child_yang_name == "last-update-recovery-timestamp")
    {
        if(last_update_recovery_timestamp == nullptr)
        {
            last_update_recovery_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateRecoveryTimestamp>();
        }
        return last_update_recovery_timestamp;
    }

    if(child_yang_name == "last-update-memory-allocation-fail-timestamp")
    {
        if(last_update_memory_allocation_fail_timestamp == nullptr)
        {
            last_update_memory_allocation_fail_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateMemoryAllocationFailTimestamp>();
        }
        return last_update_memory_allocation_fail_timestamp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(last_update_discard_timestamp != nullptr)
    {
        children["last-update-discard-timestamp"] = last_update_discard_timestamp;
    }

    if(last_update_cleared_timestamp != nullptr)
    {
        children["last-update-cleared-timestamp"] = last_update_cleared_timestamp;
    }

    if(last_update_throttle_timestamp != nullptr)
    {
        children["last-update-throttle-timestamp"] = last_update_throttle_timestamp;
    }

    if(last_update_recovery_timestamp != nullptr)
    {
        children["last-update-recovery-timestamp"] = last_update_recovery_timestamp;
    }

    if(last_update_memory_allocation_fail_timestamp != nullptr)
    {
        children["last-update-memory-allocation-fail-timestamp"] = last_update_memory_allocation_fail_timestamp;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "update-out-queue-messages-high")
    {
        update_out_queue_messages_high = value;
        update_out_queue_messages_high.value_namespace = name_space;
        update_out_queue_messages_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-out-queue-messages-cumulative")
    {
        update_out_queue_messages_cumulative = value;
        update_out_queue_messages_cumulative.value_namespace = name_space;
        update_out_queue_messages_cumulative.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-out-queue-messages-discarded")
    {
        update_out_queue_messages_discarded = value;
        update_out_queue_messages_discarded.value_namespace = name_space;
        update_out_queue_messages_discarded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-out-queue-messages-cleared")
    {
        update_out_queue_messages_cleared = value;
        update_out_queue_messages_cleared.value_namespace = name_space;
        update_out_queue_messages_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-out-queue-size-high")
    {
        update_out_queue_size_high = value;
        update_out_queue_size_high.value_namespace = name_space;
        update_out_queue_size_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-out-queue-size-cumulative")
    {
        update_out_queue_size_cumulative = value;
        update_out_queue_size_cumulative.value_namespace = name_space;
        update_out_queue_size_cumulative.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-out-queue-size-discarded")
    {
        update_out_queue_size_discarded = value;
        update_out_queue_size_discarded.value_namespace = name_space;
        update_out_queue_size_discarded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-out-queue-size-cleared")
    {
        update_out_queue_size_cleared = value;
        update_out_queue_size_cleared.value_namespace = name_space;
        update_out_queue_size_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-update-discard-age")
    {
        last_update_discard_age = value;
        last_update_discard_age.value_namespace = name_space;
        last_update_discard_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-update-cleard-age")
    {
        last_update_cleard_age = value;
        last_update_cleard_age.value_namespace = name_space;
        last_update_cleard_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-throttle-count")
    {
        update_throttle_count = value;
        update_throttle_count.value_namespace = name_space;
        update_throttle_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-update-throttle-age")
    {
        last_update_throttle_age = value;
        last_update_throttle_age.value_namespace = name_space;
        last_update_throttle_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-recovery-count")
    {
        update_recovery_count = value;
        update_recovery_count.value_namespace = name_space;
        update_recovery_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-update-recovery-age")
    {
        last_update_recovery_age = value;
        last_update_recovery_age.value_namespace = name_space;
        last_update_recovery_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-memory-allocation-fail-count")
    {
        update_memory_allocation_fail_count = value;
        update_memory_allocation_fail_count.value_namespace = name_space;
        update_memory_allocation_fail_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-update-memory-allocation-fail-age")
    {
        last_update_memory_allocation_fail_age = value;
        last_update_memory_allocation_fail_age.value_namespace = name_space;
        last_update_memory_allocation_fail_age.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "update-out-queue-messages-high")
    {
        update_out_queue_messages_high.yfilter = yfilter;
    }
    if(value_path == "update-out-queue-messages-cumulative")
    {
        update_out_queue_messages_cumulative.yfilter = yfilter;
    }
    if(value_path == "update-out-queue-messages-discarded")
    {
        update_out_queue_messages_discarded.yfilter = yfilter;
    }
    if(value_path == "update-out-queue-messages-cleared")
    {
        update_out_queue_messages_cleared.yfilter = yfilter;
    }
    if(value_path == "update-out-queue-size-high")
    {
        update_out_queue_size_high.yfilter = yfilter;
    }
    if(value_path == "update-out-queue-size-cumulative")
    {
        update_out_queue_size_cumulative.yfilter = yfilter;
    }
    if(value_path == "update-out-queue-size-discarded")
    {
        update_out_queue_size_discarded.yfilter = yfilter;
    }
    if(value_path == "update-out-queue-size-cleared")
    {
        update_out_queue_size_cleared.yfilter = yfilter;
    }
    if(value_path == "last-update-discard-age")
    {
        last_update_discard_age.yfilter = yfilter;
    }
    if(value_path == "last-update-cleard-age")
    {
        last_update_cleard_age.yfilter = yfilter;
    }
    if(value_path == "update-throttle-count")
    {
        update_throttle_count.yfilter = yfilter;
    }
    if(value_path == "last-update-throttle-age")
    {
        last_update_throttle_age.yfilter = yfilter;
    }
    if(value_path == "update-recovery-count")
    {
        update_recovery_count.yfilter = yfilter;
    }
    if(value_path == "last-update-recovery-age")
    {
        last_update_recovery_age.yfilter = yfilter;
    }
    if(value_path == "update-memory-allocation-fail-count")
    {
        update_memory_allocation_fail_count.yfilter = yfilter;
    }
    if(value_path == "last-update-memory-allocation-fail-age")
    {
        last_update_memory_allocation_fail_age.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-update-discard-timestamp" || name == "last-update-cleared-timestamp" || name == "last-update-throttle-timestamp" || name == "last-update-recovery-timestamp" || name == "last-update-memory-allocation-fail-timestamp" || name == "update-out-queue-messages-high" || name == "update-out-queue-messages-cumulative" || name == "update-out-queue-messages-discarded" || name == "update-out-queue-messages-cleared" || name == "update-out-queue-size-high" || name == "update-out-queue-size-cumulative" || name == "update-out-queue-size-discarded" || name == "update-out-queue-size-cleared" || name == "last-update-discard-age" || name == "last-update-cleard-age" || name == "update-throttle-count" || name == "last-update-throttle-age" || name == "update-recovery-count" || name == "last-update-recovery-age" || name == "update-memory-allocation-fail-count" || name == "last-update-memory-allocation-fail-age")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateDiscardTimestamp::LastUpdateDiscardTimestamp()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "last-update-discard-timestamp"; yang_parent_name = "update-statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateDiscardTimestamp::~LastUpdateDiscardTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateDiscardTimestamp::has_data() const
{
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateDiscardTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateDiscardTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-update-discard-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateDiscardTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateDiscardTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateDiscardTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateDiscardTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateDiscardTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateDiscardTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateClearedTimestamp::LastUpdateClearedTimestamp()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "last-update-cleared-timestamp"; yang_parent_name = "update-statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateClearedTimestamp::~LastUpdateClearedTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateClearedTimestamp::has_data() const
{
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateClearedTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateClearedTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-update-cleared-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateClearedTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateClearedTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateClearedTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateClearedTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateClearedTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateClearedTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateThrottleTimestamp::LastUpdateThrottleTimestamp()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "last-update-throttle-timestamp"; yang_parent_name = "update-statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateThrottleTimestamp::~LastUpdateThrottleTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateThrottleTimestamp::has_data() const
{
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateThrottleTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateThrottleTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-update-throttle-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateThrottleTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateThrottleTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateThrottleTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateThrottleTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateThrottleTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateThrottleTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateRecoveryTimestamp::LastUpdateRecoveryTimestamp()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "last-update-recovery-timestamp"; yang_parent_name = "update-statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateRecoveryTimestamp::~LastUpdateRecoveryTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateRecoveryTimestamp::has_data() const
{
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateRecoveryTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateRecoveryTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-update-recovery-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateRecoveryTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateRecoveryTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateRecoveryTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateRecoveryTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateRecoveryTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateRecoveryTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}


}
}

