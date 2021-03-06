
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_11.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_12.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_l2vpn_oper {

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionTailDrop::DispositionTailDrop()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "disposition-tail-drop"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionTailDrop::~DispositionTailDrop()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionTailDrop::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionTailDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionTailDrop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/vni-parameters/statistics/dispostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionTailDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-tail-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionTailDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionTailDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionTailDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionTailDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionTailDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionTailDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::MulticastDrop::MulticastDrop()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "multicast-drop"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::MulticastDrop::~MulticastDrop()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::MulticastDrop::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::MulticastDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::MulticastDrop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/vni-parameters/statistics/dispostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::MulticastDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::MulticastDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::MulticastDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::MulticastDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::MulticastDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::MulticastDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::MulticastDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::UnicastDrop::UnicastDrop()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "unicast-drop"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::UnicastDrop::~UnicastDrop()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::UnicastDrop::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::UnicastDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::UnicastDrop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/vni-parameters/statistics/dispostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::UnicastDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unicast-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::UnicastDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::UnicastDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::UnicastDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::UnicastDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::UnicastDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::UnicastDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::BroadcastDrop::BroadcastDrop()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "broadcast-drop"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::BroadcastDrop::~BroadcastDrop()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::BroadcastDrop::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::BroadcastDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::BroadcastDrop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/vni-parameters/statistics/dispostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::BroadcastDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::BroadcastDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::BroadcastDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::BroadcastDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::BroadcastDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::BroadcastDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::BroadcastDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::ReceivedDrops::ReceivedDrops()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "received-drops"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::ReceivedDrops::~ReceivedDrops()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::ReceivedDrops::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::ReceivedDrops::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::ReceivedDrops::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/vni-parameters/statistics/dispostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::ReceivedDrops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-drops";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::ReceivedDrops::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::ReceivedDrops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::ReceivedDrops::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::ReceivedDrops::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::ReceivedDrops::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::ReceivedDrops::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DaiDrop::DaiDrop()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "dai-drop"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DaiDrop::~DaiDrop()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DaiDrop::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DaiDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DaiDrop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/vni-parameters/statistics/dispostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DaiDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dai-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DaiDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DaiDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DaiDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DaiDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DaiDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DaiDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::IpsgDrop::IpsgDrop()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "ipsg-drop"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::IpsgDrop::~IpsgDrop()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::IpsgDrop::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::IpsgDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::IpsgDrop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/vni-parameters/statistics/dispostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::IpsgDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsg-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::IpsgDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::IpsgDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::IpsgDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::IpsgDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::IpsgDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::IpsgDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionOoODrops::DispositionOoODrops()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "disposition-oo-o-drops"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionOoODrops::~DispositionOoODrops()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionOoODrops::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionOoODrops::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionOoODrops::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/vni-parameters/statistics/dispostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionOoODrops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-oo-o-drops";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionOoODrops::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionOoODrops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionOoODrops::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionOoODrops::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionOoODrops::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionOoODrops::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionP2MpStats::DispositionP2MpStats()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "disposition-p2mp-stats"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionP2MpStats::~DispositionP2MpStats()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionP2MpStats::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionP2MpStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionP2MpStats::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/vni-parameters/statistics/dispostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionP2MpStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-p2mp-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionP2MpStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionP2MpStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionP2MpStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionP2MpStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionP2MpStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionP2MpStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::KnownUnicast::KnownUnicast()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "known-unicast"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::KnownUnicast::~KnownUnicast()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::KnownUnicast::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::KnownUnicast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::KnownUnicast::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/vni-parameters/statistics/dispostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::KnownUnicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "known-unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::KnownUnicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::KnownUnicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::KnownUnicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::KnownUnicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::KnownUnicast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::KnownUnicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::MacMove::MacMove()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "mac-move"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::MacMove::~MacMove()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::MacMove::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::MacMove::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::MacMove::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/vni-parameters/statistics/dispostion-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::MacMove::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-move";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::MacMove::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::MacMove::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::MacMove::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::MacMove::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::MacMove::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::MacMove::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::SequenceNumber::SequenceNumber()
    :
    sequence_number_sent{YType::uint32, "sequence-number-sent"},
    sequence_number_expected{YType::uint32, "sequence-number-expected"},
    bypassed_inbound_sequence_packet{YType::uint64, "bypassed-inbound-sequence-packet"},
    bypassed_out_sequence_packet{YType::uint64, "bypassed-out-sequence-packet"}
{

    yang_name = "sequence-number"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::SequenceNumber::~SequenceNumber()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::SequenceNumber::has_data() const
{
    return sequence_number_sent.is_set
	|| sequence_number_expected.is_set
	|| bypassed_inbound_sequence_packet.is_set
	|| bypassed_out_sequence_packet.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::SequenceNumber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sequence_number_sent.yfilter)
	|| ydk::is_set(sequence_number_expected.yfilter)
	|| ydk::is_set(bypassed_inbound_sequence_packet.yfilter)
	|| ydk::is_set(bypassed_out_sequence_packet.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::SequenceNumber::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/vni-parameters/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::SequenceNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sequence-number";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::SequenceNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence_number_sent.is_set || is_set(sequence_number_sent.yfilter)) leaf_name_data.push_back(sequence_number_sent.get_name_leafdata());
    if (sequence_number_expected.is_set || is_set(sequence_number_expected.yfilter)) leaf_name_data.push_back(sequence_number_expected.get_name_leafdata());
    if (bypassed_inbound_sequence_packet.is_set || is_set(bypassed_inbound_sequence_packet.yfilter)) leaf_name_data.push_back(bypassed_inbound_sequence_packet.get_name_leafdata());
    if (bypassed_out_sequence_packet.is_set || is_set(bypassed_out_sequence_packet.yfilter)) leaf_name_data.push_back(bypassed_out_sequence_packet.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::SequenceNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::SequenceNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::SequenceNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sequence-number-sent")
    {
        sequence_number_sent = value;
        sequence_number_sent.value_namespace = name_space;
        sequence_number_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number-expected")
    {
        sequence_number_expected = value;
        sequence_number_expected.value_namespace = name_space;
        sequence_number_expected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bypassed-inbound-sequence-packet")
    {
        bypassed_inbound_sequence_packet = value;
        bypassed_inbound_sequence_packet.value_namespace = name_space;
        bypassed_inbound_sequence_packet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bypassed-out-sequence-packet")
    {
        bypassed_out_sequence_packet = value;
        bypassed_out_sequence_packet.value_namespace = name_space;
        bypassed_out_sequence_packet.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::SequenceNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sequence-number-sent")
    {
        sequence_number_sent.yfilter = yfilter;
    }
    if(value_path == "sequence-number-expected")
    {
        sequence_number_expected.yfilter = yfilter;
    }
    if(value_path == "bypassed-inbound-sequence-packet")
    {
        bypassed_inbound_sequence_packet.yfilter = yfilter;
    }
    if(value_path == "bypassed-out-sequence-packet")
    {
        bypassed_out_sequence_packet.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::SequenceNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sequence-number-sent" || name == "sequence-number-expected" || name == "bypassed-inbound-sequence-packet" || name == "bypassed-out-sequence-packet")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::StaticMac::StaticMac()
    :
    address{YType::str, "address"},
    bmac{YType::str, "bmac"},
    next_hop_ip{YType::str, "next-hop-ip"}
{

    yang_name = "static-mac"; yang_parent_name = "vni-parameters"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::StaticMac::~StaticMac()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::StaticMac::has_data() const
{
    return address.is_set
	|| bmac.is_set
	|| next_hop_ip.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::StaticMac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(bmac.yfilter)
	|| ydk::is_set(next_hop_ip.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::StaticMac::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/vni-parameters/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::StaticMac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::StaticMac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (bmac.is_set || is_set(bmac.yfilter)) leaf_name_data.push_back(bmac.get_name_leafdata());
    if (next_hop_ip.is_set || is_set(next_hop_ip.yfilter)) leaf_name_data.push_back(next_hop_ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::StaticMac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::StaticMac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::StaticMac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmac")
    {
        bmac = value;
        bmac.value_namespace = name_space;
        bmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-ip")
    {
        next_hop_ip = value;
        next_hop_ip.value_namespace = name_space;
        next_hop_ip.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::StaticMac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "bmac")
    {
        bmac.yfilter = yfilter;
    }
    if(value_path == "next-hop-ip")
    {
        next_hop_ip.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::StaticMac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "bmac" || name == "next-hop-ip")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::Rd()
    :
    rd{YType::enumeration, "rd"}
    	,
    auto_(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::Auto>())
	,two_byte_as(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::TwoByteAs>())
	,four_byte_as(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::FourByteAs>())
	,v4_addr(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::V4Addr>())
{
    auto_->parent = this;
    two_byte_as->parent = this;
    four_byte_as->parent = this;
    v4_addr->parent = this;

    yang_name = "rd"; yang_parent_name = "bridge-domain-info"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::~Rd()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::has_data() const
{
    return rd.is_set
	|| (auto_ !=  nullptr && auto_->has_data())
	|| (two_byte_as !=  nullptr && two_byte_as->has_data())
	|| (four_byte_as !=  nullptr && four_byte_as->has_data())
	|| (v4_addr !=  nullptr && v4_addr->has_data());
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rd.yfilter)
	|| (auto_ !=  nullptr && auto_->has_operation())
	|| (two_byte_as !=  nullptr && two_byte_as->has_operation())
	|| (four_byte_as !=  nullptr && four_byte_as->has_operation())
	|| (v4_addr !=  nullptr && v4_addr->has_operation());
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto")
    {
        if(auto_ == nullptr)
        {
            auto_ = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::Auto>();
        }
        return auto_;
    }

    if(child_yang_name == "two-byte-as")
    {
        if(two_byte_as == nullptr)
        {
            two_byte_as = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::TwoByteAs>();
        }
        return two_byte_as;
    }

    if(child_yang_name == "four-byte-as")
    {
        if(four_byte_as == nullptr)
        {
            four_byte_as = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::FourByteAs>();
        }
        return four_byte_as;
    }

    if(child_yang_name == "v4-addr")
    {
        if(v4_addr == nullptr)
        {
            v4_addr = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::V4Addr>();
        }
        return v4_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(auto_ != nullptr)
    {
        children["auto"] = auto_;
    }

    if(two_byte_as != nullptr)
    {
        children["two-byte-as"] = two_byte_as;
    }

    if(four_byte_as != nullptr)
    {
        children["four-byte-as"] = four_byte_as;
    }

    if(v4_addr != nullptr)
    {
        children["v4-addr"] = v4_addr;
    }

    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rd")
    {
        rd = value;
        rd.value_namespace = name_space;
        rd.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rd")
    {
        rd.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto" || name == "two-byte-as" || name == "four-byte-as" || name == "v4-addr" || name == "rd")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::Auto::Auto()
    :
    router_id{YType::str, "router-id"},
    auto_index{YType::uint16, "auto-index"}
{

    yang_name = "auto"; yang_parent_name = "rd"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::Auto::~Auto()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::Auto::has_data() const
{
    return router_id.is_set
	|| auto_index.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::Auto::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(auto_index.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::Auto::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/rd/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::Auto::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::Auto::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (auto_index.is_set || is_set(auto_index.yfilter)) leaf_name_data.push_back(auto_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::Auto::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::Auto::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::Auto::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-index")
    {
        auto_index = value;
        auto_index.value_namespace = name_space;
        auto_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::Auto::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "auto-index")
    {
        auto_index.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::Auto::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "auto-index")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::TwoByteAs::TwoByteAs()
    :
    two_byte_as{YType::uint16, "two-byte-as"},
    four_byte_index{YType::uint32, "four-byte-index"}
{

    yang_name = "two-byte-as"; yang_parent_name = "rd"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::TwoByteAs::~TwoByteAs()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::TwoByteAs::has_data() const
{
    return two_byte_as.is_set
	|| four_byte_index.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::TwoByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(two_byte_as.yfilter)
	|| ydk::is_set(four_byte_index.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::TwoByteAs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/rd/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::TwoByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::TwoByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (two_byte_as.is_set || is_set(two_byte_as.yfilter)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());
    if (four_byte_index.is_set || is_set(four_byte_index.yfilter)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::TwoByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::TwoByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "two-byte-as")
    {
        two_byte_as = value;
        two_byte_as.value_namespace = name_space;
        two_byte_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "four-byte-index")
    {
        four_byte_index = value;
        four_byte_index.value_namespace = name_space;
        four_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::TwoByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "two-byte-as")
    {
        two_byte_as.yfilter = yfilter;
    }
    if(value_path == "four-byte-index")
    {
        four_byte_index.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::TwoByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "two-byte-as" || name == "four-byte-index")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::FourByteAs::FourByteAs()
    :
    four_byte_as{YType::uint32, "four-byte-as"},
    two_byte_index{YType::uint16, "two-byte-index"}
{

    yang_name = "four-byte-as"; yang_parent_name = "rd"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::FourByteAs::~FourByteAs()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::FourByteAs::has_data() const
{
    return four_byte_as.is_set
	|| two_byte_index.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::FourByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(four_byte_as.yfilter)
	|| ydk::is_set(two_byte_index.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::FourByteAs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/rd/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::FourByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "four-byte-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::FourByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_as.is_set || is_set(four_byte_as.yfilter)) leaf_name_data.push_back(four_byte_as.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.yfilter)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::FourByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::FourByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::FourByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as = value;
        four_byte_as.value_namespace = name_space;
        four_byte_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
        two_byte_index.value_namespace = name_space;
        two_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::FourByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as.yfilter = yfilter;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::FourByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "four-byte-as" || name == "two-byte-index")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::V4Addr::V4Addr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    two_byte_index{YType::uint16, "two-byte-index"}
{

    yang_name = "v4-addr"; yang_parent_name = "rd"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::V4Addr::~V4Addr()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::V4Addr::has_data() const
{
    return ipv4_address.is_set
	|| two_byte_index.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::V4Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(two_byte_index.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::V4Addr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/rd/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::V4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::V4Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.yfilter)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::V4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::V4Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::V4Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
        two_byte_index.value_namespace = name_space;
        two_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::V4Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::V4Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address" || name == "two-byte-index")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::MacFilter::MacFilter()
    :
    address{YType::str, "address"},
    bmac{YType::str, "bmac"},
    next_hop_ip{YType::str, "next-hop-ip"}
{

    yang_name = "mac-filter"; yang_parent_name = "bridge-domain-info"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::MacFilter::~MacFilter()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::MacFilter::has_data() const
{
    return address.is_set
	|| bmac.is_set
	|| next_hop_ip.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::MacFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(bmac.yfilter)
	|| ydk::is_set(next_hop_ip.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::MacFilter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::MacFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::MacFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (bmac.is_set || is_set(bmac.yfilter)) leaf_name_data.push_back(bmac.get_name_leafdata());
    if (next_hop_ip.is_set || is_set(next_hop_ip.yfilter)) leaf_name_data.push_back(next_hop_ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::MacFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::MacFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::MacFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmac")
    {
        bmac = value;
        bmac.value_namespace = name_space;
        bmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-ip")
    {
        next_hop_ip = value;
        next_hop_ip.value_namespace = name_space;
        next_hop_ip.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::MacFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "bmac")
    {
        bmac.yfilter = yfilter;
    }
    if(value_path == "next-hop-ip")
    {
        next_hop_ip.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::MacFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "bmac" || name == "next-hop-ip")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::BridgeVfi()
    :
    vfi_name{YType::str, "vfi-name"},
    shutdown{YType::boolean, "shutdown"},
    access{YType::boolean, "access"},
    vfi_state{YType::enumeration, "vfi-state"},
    number_pseudowires{YType::uint32, "number-pseudowires"}
    	,
    discovery_information(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation>())
{
    discovery_information->parent = this;

    yang_name = "bridge-vfi"; yang_parent_name = "bridge-domain-info"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::~BridgeVfi()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::has_data() const
{
    for (std::size_t index=0; index<p2mp_information.size(); index++)
    {
        if(p2mp_information[index]->has_data())
            return true;
    }
    return vfi_name.is_set
	|| shutdown.is_set
	|| access.is_set
	|| vfi_state.is_set
	|| number_pseudowires.is_set
	|| (discovery_information !=  nullptr && discovery_information->has_data());
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::has_operation() const
{
    for (std::size_t index=0; index<p2mp_information.size(); index++)
    {
        if(p2mp_information[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(vfi_name.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(access.yfilter)
	|| ydk::is_set(vfi_state.yfilter)
	|| ydk::is_set(number_pseudowires.yfilter)
	|| (discovery_information !=  nullptr && discovery_information->has_operation());
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-vfi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vfi_name.is_set || is_set(vfi_name.yfilter)) leaf_name_data.push_back(vfi_name.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (access.is_set || is_set(access.yfilter)) leaf_name_data.push_back(access.get_name_leafdata());
    if (vfi_state.is_set || is_set(vfi_state.yfilter)) leaf_name_data.push_back(vfi_state.get_name_leafdata());
    if (number_pseudowires.is_set || is_set(number_pseudowires.yfilter)) leaf_name_data.push_back(number_pseudowires.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "discovery-information")
    {
        if(discovery_information == nullptr)
        {
            discovery_information = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation>();
        }
        return discovery_information;
    }

    if(child_yang_name == "p2mp-information")
    {
        auto c = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::P2MpInformation>();
        c->parent = this;
        p2mp_information.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(discovery_information != nullptr)
    {
        children["discovery-information"] = discovery_information;
    }

    count = 0;
    for (auto const & c : p2mp_information)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vfi-name")
    {
        vfi_name = value;
        vfi_name.value_namespace = name_space;
        vfi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access")
    {
        access = value;
        access.value_namespace = name_space;
        access.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vfi-state")
    {
        vfi_state = value;
        vfi_state.value_namespace = name_space;
        vfi_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-pseudowires")
    {
        number_pseudowires = value;
        number_pseudowires.value_namespace = name_space;
        number_pseudowires.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vfi-name")
    {
        vfi_name.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "access")
    {
        access.yfilter = yfilter;
    }
    if(value_path == "vfi-state")
    {
        vfi_state.yfilter = yfilter;
    }
    if(value_path == "number-pseudowires")
    {
        number_pseudowires.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "discovery-information" || name == "p2mp-information" || name == "vfi-name" || name == "shutdown" || name == "access" || name == "vfi-state" || name == "number-pseudowires")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::DiscoveryInformation()
    :
    vpn_id{YType::uint32, "vpn-id"},
    ad_signalling_method{YType::uint32, "ad-signalling-method"},
    ad_method{YType::uint32, "ad-method"},
    ve_id{YType::uint32, "ve-id"},
    provisioned_ve_id{YType::uint32, "provisioned-ve-id"},
    ve_range{YType::uint16, "ve-range"},
    as_number{YType::uint32, "as-number"},
    l2vpn_router_id{YType::str, "l2vpn-router-id"},
    vpn_added{YType::boolean, "vpn-added"},
    service_connected{YType::boolean, "service-connected"},
    vpls_id_conflict{YType::boolean, "vpls-id-conflict"},
    export_route_policy{YType::str, "export-route-policy"}
    	,
    rd_value(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue>())
	,vpls_id(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId>())
{
    rd_value->parent = this;
    vpls_id->parent = this;

    yang_name = "discovery-information"; yang_parent_name = "bridge-vfi"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::~DiscoveryInformation()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::has_data() const
{
    for (std::size_t index=0; index<import_rt.size(); index++)
    {
        if(import_rt[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<export_rt.size(); index++)
    {
        if(export_rt[index]->has_data())
            return true;
    }
    return vpn_id.is_set
	|| ad_signalling_method.is_set
	|| ad_method.is_set
	|| ve_id.is_set
	|| provisioned_ve_id.is_set
	|| ve_range.is_set
	|| as_number.is_set
	|| l2vpn_router_id.is_set
	|| vpn_added.is_set
	|| service_connected.is_set
	|| vpls_id_conflict.is_set
	|| export_route_policy.is_set
	|| (rd_value !=  nullptr && rd_value->has_data())
	|| (vpls_id !=  nullptr && vpls_id->has_data());
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::has_operation() const
{
    for (std::size_t index=0; index<import_rt.size(); index++)
    {
        if(import_rt[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<export_rt.size(); index++)
    {
        if(export_rt[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(vpn_id.yfilter)
	|| ydk::is_set(ad_signalling_method.yfilter)
	|| ydk::is_set(ad_method.yfilter)
	|| ydk::is_set(ve_id.yfilter)
	|| ydk::is_set(provisioned_ve_id.yfilter)
	|| ydk::is_set(ve_range.yfilter)
	|| ydk::is_set(as_number.yfilter)
	|| ydk::is_set(l2vpn_router_id.yfilter)
	|| ydk::is_set(vpn_added.yfilter)
	|| ydk::is_set(service_connected.yfilter)
	|| ydk::is_set(vpls_id_conflict.yfilter)
	|| ydk::is_set(export_route_policy.yfilter)
	|| (rd_value !=  nullptr && rd_value->has_operation())
	|| (vpls_id !=  nullptr && vpls_id->has_operation());
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/bridge-vfi/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discovery-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vpn_id.is_set || is_set(vpn_id.yfilter)) leaf_name_data.push_back(vpn_id.get_name_leafdata());
    if (ad_signalling_method.is_set || is_set(ad_signalling_method.yfilter)) leaf_name_data.push_back(ad_signalling_method.get_name_leafdata());
    if (ad_method.is_set || is_set(ad_method.yfilter)) leaf_name_data.push_back(ad_method.get_name_leafdata());
    if (ve_id.is_set || is_set(ve_id.yfilter)) leaf_name_data.push_back(ve_id.get_name_leafdata());
    if (provisioned_ve_id.is_set || is_set(provisioned_ve_id.yfilter)) leaf_name_data.push_back(provisioned_ve_id.get_name_leafdata());
    if (ve_range.is_set || is_set(ve_range.yfilter)) leaf_name_data.push_back(ve_range.get_name_leafdata());
    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());
    if (l2vpn_router_id.is_set || is_set(l2vpn_router_id.yfilter)) leaf_name_data.push_back(l2vpn_router_id.get_name_leafdata());
    if (vpn_added.is_set || is_set(vpn_added.yfilter)) leaf_name_data.push_back(vpn_added.get_name_leafdata());
    if (service_connected.is_set || is_set(service_connected.yfilter)) leaf_name_data.push_back(service_connected.get_name_leafdata());
    if (vpls_id_conflict.is_set || is_set(vpls_id_conflict.yfilter)) leaf_name_data.push_back(vpls_id_conflict.get_name_leafdata());
    if (export_route_policy.is_set || is_set(export_route_policy.yfilter)) leaf_name_data.push_back(export_route_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rd-value")
    {
        if(rd_value == nullptr)
        {
            rd_value = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue>();
        }
        return rd_value;
    }

    if(child_yang_name == "vpls-id")
    {
        if(vpls_id == nullptr)
        {
            vpls_id = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId>();
        }
        return vpls_id;
    }

    if(child_yang_name == "import-rt")
    {
        auto c = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt>();
        c->parent = this;
        import_rt.push_back(c);
        return c;
    }

    if(child_yang_name == "export-rt")
    {
        auto c = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt>();
        c->parent = this;
        export_rt.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rd_value != nullptr)
    {
        children["rd-value"] = rd_value;
    }

    if(vpls_id != nullptr)
    {
        children["vpls-id"] = vpls_id;
    }

    count = 0;
    for (auto const & c : import_rt)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : export_rt)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vpn-id")
    {
        vpn_id = value;
        vpn_id.value_namespace = name_space;
        vpn_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ad-signalling-method")
    {
        ad_signalling_method = value;
        ad_signalling_method.value_namespace = name_space;
        ad_signalling_method.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ad-method")
    {
        ad_method = value;
        ad_method.value_namespace = name_space;
        ad_method.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ve-id")
    {
        ve_id = value;
        ve_id.value_namespace = name_space;
        ve_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "provisioned-ve-id")
    {
        provisioned_ve_id = value;
        provisioned_ve_id.value_namespace = name_space;
        provisioned_ve_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ve-range")
    {
        ve_range = value;
        ve_range.value_namespace = name_space;
        ve_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2vpn-router-id")
    {
        l2vpn_router_id = value;
        l2vpn_router_id.value_namespace = name_space;
        l2vpn_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpn-added")
    {
        vpn_added = value;
        vpn_added.value_namespace = name_space;
        vpn_added.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-connected")
    {
        service_connected = value;
        service_connected.value_namespace = name_space;
        service_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpls-id-conflict")
    {
        vpls_id_conflict = value;
        vpls_id_conflict.value_namespace = name_space;
        vpls_id_conflict.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "export-route-policy")
    {
        export_route_policy = value;
        export_route_policy.value_namespace = name_space;
        export_route_policy.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vpn-id")
    {
        vpn_id.yfilter = yfilter;
    }
    if(value_path == "ad-signalling-method")
    {
        ad_signalling_method.yfilter = yfilter;
    }
    if(value_path == "ad-method")
    {
        ad_method.yfilter = yfilter;
    }
    if(value_path == "ve-id")
    {
        ve_id.yfilter = yfilter;
    }
    if(value_path == "provisioned-ve-id")
    {
        provisioned_ve_id.yfilter = yfilter;
    }
    if(value_path == "ve-range")
    {
        ve_range.yfilter = yfilter;
    }
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
    if(value_path == "l2vpn-router-id")
    {
        l2vpn_router_id.yfilter = yfilter;
    }
    if(value_path == "vpn-added")
    {
        vpn_added.yfilter = yfilter;
    }
    if(value_path == "service-connected")
    {
        service_connected.yfilter = yfilter;
    }
    if(value_path == "vpls-id-conflict")
    {
        vpls_id_conflict.yfilter = yfilter;
    }
    if(value_path == "export-route-policy")
    {
        export_route_policy.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rd-value" || name == "vpls-id" || name == "import-rt" || name == "export-rt" || name == "vpn-id" || name == "ad-signalling-method" || name == "ad-method" || name == "ve-id" || name == "provisioned-ve-id" || name == "ve-range" || name == "as-number" || name == "l2vpn-router-id" || name == "vpn-added" || name == "service-connected" || name == "vpls-id-conflict" || name == "export-route-policy")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::RdValue()
    :
    rd{YType::enumeration, "rd"}
    	,
    auto_(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::Auto>())
	,two_byte_as(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::TwoByteAs>())
	,four_byte_as(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::FourByteAs>())
	,v4_addr(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::V4Addr>())
{
    auto_->parent = this;
    two_byte_as->parent = this;
    four_byte_as->parent = this;
    v4_addr->parent = this;

    yang_name = "rd-value"; yang_parent_name = "discovery-information"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::~RdValue()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::has_data() const
{
    return rd.is_set
	|| (auto_ !=  nullptr && auto_->has_data())
	|| (two_byte_as !=  nullptr && two_byte_as->has_data())
	|| (four_byte_as !=  nullptr && four_byte_as->has_data())
	|| (v4_addr !=  nullptr && v4_addr->has_data());
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rd.yfilter)
	|| (auto_ !=  nullptr && auto_->has_operation())
	|| (two_byte_as !=  nullptr && two_byte_as->has_operation())
	|| (four_byte_as !=  nullptr && four_byte_as->has_operation())
	|| (v4_addr !=  nullptr && v4_addr->has_operation());
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/bridge-vfi/discovery-information/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rd-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto")
    {
        if(auto_ == nullptr)
        {
            auto_ = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::Auto>();
        }
        return auto_;
    }

    if(child_yang_name == "two-byte-as")
    {
        if(two_byte_as == nullptr)
        {
            two_byte_as = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::TwoByteAs>();
        }
        return two_byte_as;
    }

    if(child_yang_name == "four-byte-as")
    {
        if(four_byte_as == nullptr)
        {
            four_byte_as = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::FourByteAs>();
        }
        return four_byte_as;
    }

    if(child_yang_name == "v4-addr")
    {
        if(v4_addr == nullptr)
        {
            v4_addr = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::V4Addr>();
        }
        return v4_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(auto_ != nullptr)
    {
        children["auto"] = auto_;
    }

    if(two_byte_as != nullptr)
    {
        children["two-byte-as"] = two_byte_as;
    }

    if(four_byte_as != nullptr)
    {
        children["four-byte-as"] = four_byte_as;
    }

    if(v4_addr != nullptr)
    {
        children["v4-addr"] = v4_addr;
    }

    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rd")
    {
        rd = value;
        rd.value_namespace = name_space;
        rd.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rd")
    {
        rd.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto" || name == "two-byte-as" || name == "four-byte-as" || name == "v4-addr" || name == "rd")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::Auto::Auto()
    :
    router_id{YType::str, "router-id"},
    auto_index{YType::uint16, "auto-index"}
{

    yang_name = "auto"; yang_parent_name = "rd-value"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::Auto::~Auto()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::Auto::has_data() const
{
    return router_id.is_set
	|| auto_index.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::Auto::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(auto_index.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::Auto::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/bridge-vfi/discovery-information/rd-value/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::Auto::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::Auto::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (auto_index.is_set || is_set(auto_index.yfilter)) leaf_name_data.push_back(auto_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::Auto::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::Auto::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::Auto::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-index")
    {
        auto_index = value;
        auto_index.value_namespace = name_space;
        auto_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::Auto::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "auto-index")
    {
        auto_index.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::Auto::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "auto-index")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::TwoByteAs::TwoByteAs()
    :
    two_byte_as{YType::uint16, "two-byte-as"},
    four_byte_index{YType::uint32, "four-byte-index"}
{

    yang_name = "two-byte-as"; yang_parent_name = "rd-value"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::TwoByteAs::~TwoByteAs()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::TwoByteAs::has_data() const
{
    return two_byte_as.is_set
	|| four_byte_index.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::TwoByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(two_byte_as.yfilter)
	|| ydk::is_set(four_byte_index.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::TwoByteAs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/bridge-vfi/discovery-information/rd-value/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::TwoByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::TwoByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (two_byte_as.is_set || is_set(two_byte_as.yfilter)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());
    if (four_byte_index.is_set || is_set(four_byte_index.yfilter)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::TwoByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::TwoByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "two-byte-as")
    {
        two_byte_as = value;
        two_byte_as.value_namespace = name_space;
        two_byte_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "four-byte-index")
    {
        four_byte_index = value;
        four_byte_index.value_namespace = name_space;
        four_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::TwoByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "two-byte-as")
    {
        two_byte_as.yfilter = yfilter;
    }
    if(value_path == "four-byte-index")
    {
        four_byte_index.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::TwoByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "two-byte-as" || name == "four-byte-index")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::FourByteAs::FourByteAs()
    :
    four_byte_as{YType::uint32, "four-byte-as"},
    two_byte_index{YType::uint16, "two-byte-index"}
{

    yang_name = "four-byte-as"; yang_parent_name = "rd-value"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::FourByteAs::~FourByteAs()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::FourByteAs::has_data() const
{
    return four_byte_as.is_set
	|| two_byte_index.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::FourByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(four_byte_as.yfilter)
	|| ydk::is_set(two_byte_index.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::FourByteAs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/bridge-vfi/discovery-information/rd-value/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::FourByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "four-byte-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::FourByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_as.is_set || is_set(four_byte_as.yfilter)) leaf_name_data.push_back(four_byte_as.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.yfilter)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::FourByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::FourByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::FourByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as = value;
        four_byte_as.value_namespace = name_space;
        four_byte_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
        two_byte_index.value_namespace = name_space;
        two_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::FourByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as.yfilter = yfilter;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::FourByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "four-byte-as" || name == "two-byte-index")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::V4Addr::V4Addr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    two_byte_index{YType::uint16, "two-byte-index"}
{

    yang_name = "v4-addr"; yang_parent_name = "rd-value"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::V4Addr::~V4Addr()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::V4Addr::has_data() const
{
    return ipv4_address.is_set
	|| two_byte_index.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::V4Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(two_byte_index.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::V4Addr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/bridge-vfi/discovery-information/rd-value/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::V4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::V4Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.yfilter)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::V4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::V4Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::V4Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
        two_byte_index.value_namespace = name_space;
        two_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::V4Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::V4Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address" || name == "two-byte-index")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::VplsId()
    :
    vpls_id_type{YType::enumeration, "vpls-id-type"}
    	,
    auto_(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::Auto>())
	,two_byte_as(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::TwoByteAs>())
	,v4_addr(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::V4Addr>())
{
    auto_->parent = this;
    two_byte_as->parent = this;
    v4_addr->parent = this;

    yang_name = "vpls-id"; yang_parent_name = "discovery-information"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::~VplsId()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::has_data() const
{
    return vpls_id_type.is_set
	|| (auto_ !=  nullptr && auto_->has_data())
	|| (two_byte_as !=  nullptr && two_byte_as->has_data())
	|| (v4_addr !=  nullptr && v4_addr->has_data());
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vpls_id_type.yfilter)
	|| (auto_ !=  nullptr && auto_->has_operation())
	|| (two_byte_as !=  nullptr && two_byte_as->has_operation())
	|| (v4_addr !=  nullptr && v4_addr->has_operation());
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/bridge-vfi/discovery-information/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpls-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vpls_id_type.is_set || is_set(vpls_id_type.yfilter)) leaf_name_data.push_back(vpls_id_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto")
    {
        if(auto_ == nullptr)
        {
            auto_ = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::Auto>();
        }
        return auto_;
    }

    if(child_yang_name == "two-byte-as")
    {
        if(two_byte_as == nullptr)
        {
            two_byte_as = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::TwoByteAs>();
        }
        return two_byte_as;
    }

    if(child_yang_name == "v4-addr")
    {
        if(v4_addr == nullptr)
        {
            v4_addr = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::V4Addr>();
        }
        return v4_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(auto_ != nullptr)
    {
        children["auto"] = auto_;
    }

    if(two_byte_as != nullptr)
    {
        children["two-byte-as"] = two_byte_as;
    }

    if(v4_addr != nullptr)
    {
        children["v4-addr"] = v4_addr;
    }

    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vpls-id-type")
    {
        vpls_id_type = value;
        vpls_id_type.value_namespace = name_space;
        vpls_id_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vpls-id-type")
    {
        vpls_id_type.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto" || name == "two-byte-as" || name == "v4-addr" || name == "vpls-id-type")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::Auto::Auto()
    :
    asn{YType::uint16, "asn"},
    vpn_id{YType::uint32, "vpn-id"}
{

    yang_name = "auto"; yang_parent_name = "vpls-id"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::Auto::~Auto()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::Auto::has_data() const
{
    return asn.is_set
	|| vpn_id.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::Auto::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(asn.yfilter)
	|| ydk::is_set(vpn_id.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::Auto::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/bridge-vfi/discovery-information/vpls-id/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::Auto::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::Auto::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asn.is_set || is_set(asn.yfilter)) leaf_name_data.push_back(asn.get_name_leafdata());
    if (vpn_id.is_set || is_set(vpn_id.yfilter)) leaf_name_data.push_back(vpn_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::Auto::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::Auto::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::Auto::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "asn")
    {
        asn = value;
        asn.value_namespace = name_space;
        asn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpn-id")
    {
        vpn_id = value;
        vpn_id.value_namespace = name_space;
        vpn_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::Auto::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "asn")
    {
        asn.yfilter = yfilter;
    }
    if(value_path == "vpn-id")
    {
        vpn_id.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::Auto::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asn" || name == "vpn-id")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::TwoByteAs::TwoByteAs()
    :
    two_byte_as{YType::uint16, "two-byte-as"},
    four_byte_index{YType::uint32, "four-byte-index"}
{

    yang_name = "two-byte-as"; yang_parent_name = "vpls-id"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::TwoByteAs::~TwoByteAs()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::TwoByteAs::has_data() const
{
    return two_byte_as.is_set
	|| four_byte_index.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::TwoByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(two_byte_as.yfilter)
	|| ydk::is_set(four_byte_index.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::TwoByteAs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/bridge-vfi/discovery-information/vpls-id/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::TwoByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::TwoByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (two_byte_as.is_set || is_set(two_byte_as.yfilter)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());
    if (four_byte_index.is_set || is_set(four_byte_index.yfilter)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::TwoByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::TwoByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "two-byte-as")
    {
        two_byte_as = value;
        two_byte_as.value_namespace = name_space;
        two_byte_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "four-byte-index")
    {
        four_byte_index = value;
        four_byte_index.value_namespace = name_space;
        four_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::TwoByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "two-byte-as")
    {
        two_byte_as.yfilter = yfilter;
    }
    if(value_path == "four-byte-index")
    {
        four_byte_index.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::TwoByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "two-byte-as" || name == "four-byte-index")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::V4Addr::V4Addr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    two_byte_index{YType::uint16, "two-byte-index"}
{

    yang_name = "v4-addr"; yang_parent_name = "vpls-id"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::V4Addr::~V4Addr()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::V4Addr::has_data() const
{
    return ipv4_address.is_set
	|| two_byte_index.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::V4Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(two_byte_index.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::V4Addr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/bridge-vfi/discovery-information/vpls-id/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::V4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::V4Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.yfilter)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::V4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::V4Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::V4Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
        two_byte_index.value_namespace = name_space;
        two_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::V4Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::V4Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address" || name == "two-byte-index")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::ImportRt()
    :
    rt{YType::enumeration, "rt"}
    	,
    two_byte_as(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::TwoByteAs>())
	,four_byte_as(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::FourByteAs>())
	,v4_addr(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::V4Addr>())
	,es_import(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::EsImport>())
{
    two_byte_as->parent = this;
    four_byte_as->parent = this;
    v4_addr->parent = this;
    es_import->parent = this;

    yang_name = "import-rt"; yang_parent_name = "discovery-information"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::~ImportRt()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::has_data() const
{
    return rt.is_set
	|| (two_byte_as !=  nullptr && two_byte_as->has_data())
	|| (four_byte_as !=  nullptr && four_byte_as->has_data())
	|| (v4_addr !=  nullptr && v4_addr->has_data())
	|| (es_import !=  nullptr && es_import->has_data());
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rt.yfilter)
	|| (two_byte_as !=  nullptr && two_byte_as->has_operation())
	|| (four_byte_as !=  nullptr && four_byte_as->has_operation())
	|| (v4_addr !=  nullptr && v4_addr->has_operation())
	|| (es_import !=  nullptr && es_import->has_operation());
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/bridge-vfi/discovery-information/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "import-rt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rt.is_set || is_set(rt.yfilter)) leaf_name_data.push_back(rt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "two-byte-as")
    {
        if(two_byte_as == nullptr)
        {
            two_byte_as = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::TwoByteAs>();
        }
        return two_byte_as;
    }

    if(child_yang_name == "four-byte-as")
    {
        if(four_byte_as == nullptr)
        {
            four_byte_as = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::FourByteAs>();
        }
        return four_byte_as;
    }

    if(child_yang_name == "v4-addr")
    {
        if(v4_addr == nullptr)
        {
            v4_addr = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::V4Addr>();
        }
        return v4_addr;
    }

    if(child_yang_name == "es-import")
    {
        if(es_import == nullptr)
        {
            es_import = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::EsImport>();
        }
        return es_import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(two_byte_as != nullptr)
    {
        children["two-byte-as"] = two_byte_as;
    }

    if(four_byte_as != nullptr)
    {
        children["four-byte-as"] = four_byte_as;
    }

    if(v4_addr != nullptr)
    {
        children["v4-addr"] = v4_addr;
    }

    if(es_import != nullptr)
    {
        children["es-import"] = es_import;
    }

    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rt")
    {
        rt = value;
        rt.value_namespace = name_space;
        rt.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rt")
    {
        rt.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "two-byte-as" || name == "four-byte-as" || name == "v4-addr" || name == "es-import" || name == "rt")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::TwoByteAs::TwoByteAs()
    :
    two_byte_as{YType::uint16, "two-byte-as"},
    four_byte_index{YType::uint32, "four-byte-index"}
{

    yang_name = "two-byte-as"; yang_parent_name = "import-rt"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::TwoByteAs::~TwoByteAs()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::TwoByteAs::has_data() const
{
    return two_byte_as.is_set
	|| four_byte_index.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::TwoByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(two_byte_as.yfilter)
	|| ydk::is_set(four_byte_index.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::TwoByteAs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/bridge-vfi/discovery-information/import-rt/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::TwoByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::TwoByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (two_byte_as.is_set || is_set(two_byte_as.yfilter)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());
    if (four_byte_index.is_set || is_set(four_byte_index.yfilter)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::TwoByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::TwoByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "two-byte-as")
    {
        two_byte_as = value;
        two_byte_as.value_namespace = name_space;
        two_byte_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "four-byte-index")
    {
        four_byte_index = value;
        four_byte_index.value_namespace = name_space;
        four_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::TwoByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "two-byte-as")
    {
        two_byte_as.yfilter = yfilter;
    }
    if(value_path == "four-byte-index")
    {
        four_byte_index.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::TwoByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "two-byte-as" || name == "four-byte-index")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::FourByteAs::FourByteAs()
    :
    four_byte_as{YType::uint32, "four-byte-as"},
    two_byte_index{YType::uint16, "two-byte-index"}
{

    yang_name = "four-byte-as"; yang_parent_name = "import-rt"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::FourByteAs::~FourByteAs()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::FourByteAs::has_data() const
{
    return four_byte_as.is_set
	|| two_byte_index.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::FourByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(four_byte_as.yfilter)
	|| ydk::is_set(two_byte_index.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::FourByteAs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/bridge-vfi/discovery-information/import-rt/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::FourByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "four-byte-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::FourByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_as.is_set || is_set(four_byte_as.yfilter)) leaf_name_data.push_back(four_byte_as.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.yfilter)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::FourByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::FourByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::FourByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as = value;
        four_byte_as.value_namespace = name_space;
        four_byte_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
        two_byte_index.value_namespace = name_space;
        two_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::FourByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as.yfilter = yfilter;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::FourByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "four-byte-as" || name == "two-byte-index")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::V4Addr::V4Addr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    two_byte_index{YType::uint16, "two-byte-index"}
{

    yang_name = "v4-addr"; yang_parent_name = "import-rt"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::V4Addr::~V4Addr()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::V4Addr::has_data() const
{
    return ipv4_address.is_set
	|| two_byte_index.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::V4Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(two_byte_index.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::V4Addr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/bridge-vfi/discovery-information/import-rt/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::V4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::V4Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.yfilter)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::V4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::V4Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::V4Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
        two_byte_index.value_namespace = name_space;
        two_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::V4Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::V4Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address" || name == "two-byte-index")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::EsImport::EsImport()
    :
    high_bytes{YType::uint32, "high-bytes"},
    low_bytes{YType::uint16, "low-bytes"}
{

    yang_name = "es-import"; yang_parent_name = "import-rt"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::EsImport::~EsImport()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::EsImport::has_data() const
{
    return high_bytes.is_set
	|| low_bytes.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::EsImport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(high_bytes.yfilter)
	|| ydk::is_set(low_bytes.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::EsImport::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/bridge-vfi/discovery-information/import-rt/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::EsImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es-import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::EsImport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (high_bytes.is_set || is_set(high_bytes.yfilter)) leaf_name_data.push_back(high_bytes.get_name_leafdata());
    if (low_bytes.is_set || is_set(low_bytes.yfilter)) leaf_name_data.push_back(low_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::EsImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::EsImport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::EsImport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "high-bytes")
    {
        high_bytes = value;
        high_bytes.value_namespace = name_space;
        high_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low-bytes")
    {
        low_bytes = value;
        low_bytes.value_namespace = name_space;
        low_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::EsImport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "high-bytes")
    {
        high_bytes.yfilter = yfilter;
    }
    if(value_path == "low-bytes")
    {
        low_bytes.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::EsImport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high-bytes" || name == "low-bytes")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::ExportRt()
    :
    rt{YType::enumeration, "rt"}
    	,
    two_byte_as(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::TwoByteAs>())
	,four_byte_as(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::FourByteAs>())
	,v4_addr(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::V4Addr>())
	,es_import(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::EsImport>())
{
    two_byte_as->parent = this;
    four_byte_as->parent = this;
    v4_addr->parent = this;
    es_import->parent = this;

    yang_name = "export-rt"; yang_parent_name = "discovery-information"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::~ExportRt()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::has_data() const
{
    return rt.is_set
	|| (two_byte_as !=  nullptr && two_byte_as->has_data())
	|| (four_byte_as !=  nullptr && four_byte_as->has_data())
	|| (v4_addr !=  nullptr && v4_addr->has_data())
	|| (es_import !=  nullptr && es_import->has_data());
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rt.yfilter)
	|| (two_byte_as !=  nullptr && two_byte_as->has_operation())
	|| (four_byte_as !=  nullptr && four_byte_as->has_operation())
	|| (v4_addr !=  nullptr && v4_addr->has_operation())
	|| (es_import !=  nullptr && es_import->has_operation());
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/bridge-vfi/discovery-information/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "export-rt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rt.is_set || is_set(rt.yfilter)) leaf_name_data.push_back(rt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "two-byte-as")
    {
        if(two_byte_as == nullptr)
        {
            two_byte_as = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::TwoByteAs>();
        }
        return two_byte_as;
    }

    if(child_yang_name == "four-byte-as")
    {
        if(four_byte_as == nullptr)
        {
            four_byte_as = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::FourByteAs>();
        }
        return four_byte_as;
    }

    if(child_yang_name == "v4-addr")
    {
        if(v4_addr == nullptr)
        {
            v4_addr = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::V4Addr>();
        }
        return v4_addr;
    }

    if(child_yang_name == "es-import")
    {
        if(es_import == nullptr)
        {
            es_import = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::EsImport>();
        }
        return es_import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(two_byte_as != nullptr)
    {
        children["two-byte-as"] = two_byte_as;
    }

    if(four_byte_as != nullptr)
    {
        children["four-byte-as"] = four_byte_as;
    }

    if(v4_addr != nullptr)
    {
        children["v4-addr"] = v4_addr;
    }

    if(es_import != nullptr)
    {
        children["es-import"] = es_import;
    }

    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rt")
    {
        rt = value;
        rt.value_namespace = name_space;
        rt.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rt")
    {
        rt.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "two-byte-as" || name == "four-byte-as" || name == "v4-addr" || name == "es-import" || name == "rt")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::TwoByteAs::TwoByteAs()
    :
    two_byte_as{YType::uint16, "two-byte-as"},
    four_byte_index{YType::uint32, "four-byte-index"}
{

    yang_name = "two-byte-as"; yang_parent_name = "export-rt"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::TwoByteAs::~TwoByteAs()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::TwoByteAs::has_data() const
{
    return two_byte_as.is_set
	|| four_byte_index.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::TwoByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(two_byte_as.yfilter)
	|| ydk::is_set(four_byte_index.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::TwoByteAs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/bridge-vfi/discovery-information/export-rt/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::TwoByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::TwoByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (two_byte_as.is_set || is_set(two_byte_as.yfilter)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());
    if (four_byte_index.is_set || is_set(four_byte_index.yfilter)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::TwoByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::TwoByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "two-byte-as")
    {
        two_byte_as = value;
        two_byte_as.value_namespace = name_space;
        two_byte_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "four-byte-index")
    {
        four_byte_index = value;
        four_byte_index.value_namespace = name_space;
        four_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::TwoByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "two-byte-as")
    {
        two_byte_as.yfilter = yfilter;
    }
    if(value_path == "four-byte-index")
    {
        four_byte_index.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::TwoByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "two-byte-as" || name == "four-byte-index")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::FourByteAs::FourByteAs()
    :
    four_byte_as{YType::uint32, "four-byte-as"},
    two_byte_index{YType::uint16, "two-byte-index"}
{

    yang_name = "four-byte-as"; yang_parent_name = "export-rt"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::FourByteAs::~FourByteAs()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::FourByteAs::has_data() const
{
    return four_byte_as.is_set
	|| two_byte_index.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::FourByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(four_byte_as.yfilter)
	|| ydk::is_set(two_byte_index.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::FourByteAs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/bridge-vfi/discovery-information/export-rt/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::FourByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "four-byte-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::FourByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_as.is_set || is_set(four_byte_as.yfilter)) leaf_name_data.push_back(four_byte_as.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.yfilter)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::FourByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::FourByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::FourByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as = value;
        four_byte_as.value_namespace = name_space;
        four_byte_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
        two_byte_index.value_namespace = name_space;
        two_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::FourByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as.yfilter = yfilter;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::FourByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "four-byte-as" || name == "two-byte-index")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::V4Addr::V4Addr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    two_byte_index{YType::uint16, "two-byte-index"}
{

    yang_name = "v4-addr"; yang_parent_name = "export-rt"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::V4Addr::~V4Addr()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::V4Addr::has_data() const
{
    return ipv4_address.is_set
	|| two_byte_index.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::V4Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(two_byte_index.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::V4Addr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/bridge-vfi/discovery-information/export-rt/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::V4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::V4Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.yfilter)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::V4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::V4Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::V4Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
        two_byte_index.value_namespace = name_space;
        two_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::V4Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::V4Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address" || name == "two-byte-index")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::EsImport::EsImport()
    :
    high_bytes{YType::uint32, "high-bytes"},
    low_bytes{YType::uint16, "low-bytes"}
{

    yang_name = "es-import"; yang_parent_name = "export-rt"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::EsImport::~EsImport()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::EsImport::has_data() const
{
    return high_bytes.is_set
	|| low_bytes.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::EsImport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(high_bytes.yfilter)
	|| ydk::is_set(low_bytes.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::EsImport::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/bridge-vfi/discovery-information/export-rt/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::EsImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es-import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::EsImport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (high_bytes.is_set || is_set(high_bytes.yfilter)) leaf_name_data.push_back(high_bytes.get_name_leafdata());
    if (low_bytes.is_set || is_set(low_bytes.yfilter)) leaf_name_data.push_back(low_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::EsImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::EsImport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::EsImport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "high-bytes")
    {
        high_bytes = value;
        high_bytes.value_namespace = name_space;
        high_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low-bytes")
    {
        low_bytes = value;
        low_bytes.value_namespace = name_space;
        low_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::EsImport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "high-bytes")
    {
        high_bytes.yfilter = yfilter;
    }
    if(value_path == "low-bytes")
    {
        low_bytes.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::EsImport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high-bytes" || name == "low-bytes")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::P2MpInformation::P2MpInformation()
    :
    transport{YType::enumeration, "transport"},
    signaling{YType::enumeration, "signaling"},
    ptree_id{YType::uint32, "ptree-id"},
    attribute_set_name{YType::str, "attribute-set-name"},
    transport_status{YType::enumeration, "transport-status"},
    local_label{YType::uint32, "local-label"},
    tunnel_interface{YType::str, "tunnel-interface"}
{

    yang_name = "p2mp-information"; yang_parent_name = "bridge-vfi"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::P2MpInformation::~P2MpInformation()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::P2MpInformation::has_data() const
{
    return transport.is_set
	|| signaling.is_set
	|| ptree_id.is_set
	|| attribute_set_name.is_set
	|| transport_status.is_set
	|| local_label.is_set
	|| tunnel_interface.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::P2MpInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(transport.yfilter)
	|| ydk::is_set(signaling.yfilter)
	|| ydk::is_set(ptree_id.yfilter)
	|| ydk::is_set(attribute_set_name.yfilter)
	|| ydk::is_set(transport_status.yfilter)
	|| ydk::is_set(local_label.yfilter)
	|| ydk::is_set(tunnel_interface.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::P2MpInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/bridge-vfi/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::P2MpInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2mp-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::P2MpInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transport.is_set || is_set(transport.yfilter)) leaf_name_data.push_back(transport.get_name_leafdata());
    if (signaling.is_set || is_set(signaling.yfilter)) leaf_name_data.push_back(signaling.get_name_leafdata());
    if (ptree_id.is_set || is_set(ptree_id.yfilter)) leaf_name_data.push_back(ptree_id.get_name_leafdata());
    if (attribute_set_name.is_set || is_set(attribute_set_name.yfilter)) leaf_name_data.push_back(attribute_set_name.get_name_leafdata());
    if (transport_status.is_set || is_set(transport_status.yfilter)) leaf_name_data.push_back(transport_status.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.yfilter)) leaf_name_data.push_back(local_label.get_name_leafdata());
    if (tunnel_interface.is_set || is_set(tunnel_interface.yfilter)) leaf_name_data.push_back(tunnel_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::P2MpInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::P2MpInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::P2MpInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transport")
    {
        transport = value;
        transport.value_namespace = name_space;
        transport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signaling")
    {
        signaling = value;
        signaling.value_namespace = name_space;
        signaling.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ptree-id")
    {
        ptree_id = value;
        ptree_id.value_namespace = name_space;
        ptree_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-set-name")
    {
        attribute_set_name = value;
        attribute_set_name.value_namespace = name_space;
        attribute_set_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transport-status")
    {
        transport_status = value;
        transport_status.value_namespace = name_space;
        transport_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-label")
    {
        local_label = value;
        local_label.value_namespace = name_space;
        local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface = value;
        tunnel_interface.value_namespace = name_space;
        tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::P2MpInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transport")
    {
        transport.yfilter = yfilter;
    }
    if(value_path == "signaling")
    {
        signaling.yfilter = yfilter;
    }
    if(value_path == "ptree-id")
    {
        ptree_id.yfilter = yfilter;
    }
    if(value_path == "attribute-set-name")
    {
        attribute_set_name.yfilter = yfilter;
    }
    if(value_path == "transport-status")
    {
        transport_status.yfilter = yfilter;
    }
    if(value_path == "local-label")
    {
        local_label.yfilter = yfilter;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::P2MpInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transport" || name == "signaling" || name == "ptree-id" || name == "attribute-set-name" || name == "transport-status" || name == "local-label" || name == "tunnel-interface")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::BridgeAccessVfi()
    :
    vfi_name{YType::str, "vfi-name"},
    shutdown{YType::boolean, "shutdown"},
    access{YType::boolean, "access"},
    vfi_state{YType::enumeration, "vfi-state"},
    number_pseudowires{YType::uint32, "number-pseudowires"}
    	,
    discovery_information(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation>())
{
    discovery_information->parent = this;

    yang_name = "bridge-access-vfi"; yang_parent_name = "bridge-domain-info"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::~BridgeAccessVfi()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::has_data() const
{
    for (std::size_t index=0; index<p2mp_information.size(); index++)
    {
        if(p2mp_information[index]->has_data())
            return true;
    }
    return vfi_name.is_set
	|| shutdown.is_set
	|| access.is_set
	|| vfi_state.is_set
	|| number_pseudowires.is_set
	|| (discovery_information !=  nullptr && discovery_information->has_data());
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::has_operation() const
{
    for (std::size_t index=0; index<p2mp_information.size(); index++)
    {
        if(p2mp_information[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(vfi_name.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(access.yfilter)
	|| ydk::is_set(vfi_state.yfilter)
	|| ydk::is_set(number_pseudowires.yfilter)
	|| (discovery_information !=  nullptr && discovery_information->has_operation());
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-access-vfi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vfi_name.is_set || is_set(vfi_name.yfilter)) leaf_name_data.push_back(vfi_name.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (access.is_set || is_set(access.yfilter)) leaf_name_data.push_back(access.get_name_leafdata());
    if (vfi_state.is_set || is_set(vfi_state.yfilter)) leaf_name_data.push_back(vfi_state.get_name_leafdata());
    if (number_pseudowires.is_set || is_set(number_pseudowires.yfilter)) leaf_name_data.push_back(number_pseudowires.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "discovery-information")
    {
        if(discovery_information == nullptr)
        {
            discovery_information = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation>();
        }
        return discovery_information;
    }

    if(child_yang_name == "p2mp-information")
    {
        auto c = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::P2MpInformation>();
        c->parent = this;
        p2mp_information.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(discovery_information != nullptr)
    {
        children["discovery-information"] = discovery_information;
    }

    count = 0;
    for (auto const & c : p2mp_information)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vfi-name")
    {
        vfi_name = value;
        vfi_name.value_namespace = name_space;
        vfi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access")
    {
        access = value;
        access.value_namespace = name_space;
        access.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vfi-state")
    {
        vfi_state = value;
        vfi_state.value_namespace = name_space;
        vfi_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-pseudowires")
    {
        number_pseudowires = value;
        number_pseudowires.value_namespace = name_space;
        number_pseudowires.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vfi-name")
    {
        vfi_name.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "access")
    {
        access.yfilter = yfilter;
    }
    if(value_path == "vfi-state")
    {
        vfi_state.yfilter = yfilter;
    }
    if(value_path == "number-pseudowires")
    {
        number_pseudowires.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "discovery-information" || name == "p2mp-information" || name == "vfi-name" || name == "shutdown" || name == "access" || name == "vfi-state" || name == "number-pseudowires")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::DiscoveryInformation()
    :
    vpn_id{YType::uint32, "vpn-id"},
    ad_signalling_method{YType::uint32, "ad-signalling-method"},
    ad_method{YType::uint32, "ad-method"},
    ve_id{YType::uint32, "ve-id"},
    provisioned_ve_id{YType::uint32, "provisioned-ve-id"},
    ve_range{YType::uint16, "ve-range"},
    as_number{YType::uint32, "as-number"},
    l2vpn_router_id{YType::str, "l2vpn-router-id"},
    vpn_added{YType::boolean, "vpn-added"},
    service_connected{YType::boolean, "service-connected"},
    vpls_id_conflict{YType::boolean, "vpls-id-conflict"},
    export_route_policy{YType::str, "export-route-policy"}
    	,
    rd_value(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue>())
	,vpls_id(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId>())
{
    rd_value->parent = this;
    vpls_id->parent = this;

    yang_name = "discovery-information"; yang_parent_name = "bridge-access-vfi"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::~DiscoveryInformation()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::has_data() const
{
    for (std::size_t index=0; index<import_rt.size(); index++)
    {
        if(import_rt[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<export_rt.size(); index++)
    {
        if(export_rt[index]->has_data())
            return true;
    }
    return vpn_id.is_set
	|| ad_signalling_method.is_set
	|| ad_method.is_set
	|| ve_id.is_set
	|| provisioned_ve_id.is_set
	|| ve_range.is_set
	|| as_number.is_set
	|| l2vpn_router_id.is_set
	|| vpn_added.is_set
	|| service_connected.is_set
	|| vpls_id_conflict.is_set
	|| export_route_policy.is_set
	|| (rd_value !=  nullptr && rd_value->has_data())
	|| (vpls_id !=  nullptr && vpls_id->has_data());
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::has_operation() const
{
    for (std::size_t index=0; index<import_rt.size(); index++)
    {
        if(import_rt[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<export_rt.size(); index++)
    {
        if(export_rt[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(vpn_id.yfilter)
	|| ydk::is_set(ad_signalling_method.yfilter)
	|| ydk::is_set(ad_method.yfilter)
	|| ydk::is_set(ve_id.yfilter)
	|| ydk::is_set(provisioned_ve_id.yfilter)
	|| ydk::is_set(ve_range.yfilter)
	|| ydk::is_set(as_number.yfilter)
	|| ydk::is_set(l2vpn_router_id.yfilter)
	|| ydk::is_set(vpn_added.yfilter)
	|| ydk::is_set(service_connected.yfilter)
	|| ydk::is_set(vpls_id_conflict.yfilter)
	|| ydk::is_set(export_route_policy.yfilter)
	|| (rd_value !=  nullptr && rd_value->has_operation())
	|| (vpls_id !=  nullptr && vpls_id->has_operation());
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/bridge-access-vfi/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discovery-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vpn_id.is_set || is_set(vpn_id.yfilter)) leaf_name_data.push_back(vpn_id.get_name_leafdata());
    if (ad_signalling_method.is_set || is_set(ad_signalling_method.yfilter)) leaf_name_data.push_back(ad_signalling_method.get_name_leafdata());
    if (ad_method.is_set || is_set(ad_method.yfilter)) leaf_name_data.push_back(ad_method.get_name_leafdata());
    if (ve_id.is_set || is_set(ve_id.yfilter)) leaf_name_data.push_back(ve_id.get_name_leafdata());
    if (provisioned_ve_id.is_set || is_set(provisioned_ve_id.yfilter)) leaf_name_data.push_back(provisioned_ve_id.get_name_leafdata());
    if (ve_range.is_set || is_set(ve_range.yfilter)) leaf_name_data.push_back(ve_range.get_name_leafdata());
    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());
    if (l2vpn_router_id.is_set || is_set(l2vpn_router_id.yfilter)) leaf_name_data.push_back(l2vpn_router_id.get_name_leafdata());
    if (vpn_added.is_set || is_set(vpn_added.yfilter)) leaf_name_data.push_back(vpn_added.get_name_leafdata());
    if (service_connected.is_set || is_set(service_connected.yfilter)) leaf_name_data.push_back(service_connected.get_name_leafdata());
    if (vpls_id_conflict.is_set || is_set(vpls_id_conflict.yfilter)) leaf_name_data.push_back(vpls_id_conflict.get_name_leafdata());
    if (export_route_policy.is_set || is_set(export_route_policy.yfilter)) leaf_name_data.push_back(export_route_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rd-value")
    {
        if(rd_value == nullptr)
        {
            rd_value = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue>();
        }
        return rd_value;
    }

    if(child_yang_name == "vpls-id")
    {
        if(vpls_id == nullptr)
        {
            vpls_id = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId>();
        }
        return vpls_id;
    }

    if(child_yang_name == "import-rt")
    {
        auto c = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt>();
        c->parent = this;
        import_rt.push_back(c);
        return c;
    }

    if(child_yang_name == "export-rt")
    {
        auto c = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt>();
        c->parent = this;
        export_rt.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rd_value != nullptr)
    {
        children["rd-value"] = rd_value;
    }

    if(vpls_id != nullptr)
    {
        children["vpls-id"] = vpls_id;
    }

    count = 0;
    for (auto const & c : import_rt)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : export_rt)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vpn-id")
    {
        vpn_id = value;
        vpn_id.value_namespace = name_space;
        vpn_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ad-signalling-method")
    {
        ad_signalling_method = value;
        ad_signalling_method.value_namespace = name_space;
        ad_signalling_method.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ad-method")
    {
        ad_method = value;
        ad_method.value_namespace = name_space;
        ad_method.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ve-id")
    {
        ve_id = value;
        ve_id.value_namespace = name_space;
        ve_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "provisioned-ve-id")
    {
        provisioned_ve_id = value;
        provisioned_ve_id.value_namespace = name_space;
        provisioned_ve_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ve-range")
    {
        ve_range = value;
        ve_range.value_namespace = name_space;
        ve_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2vpn-router-id")
    {
        l2vpn_router_id = value;
        l2vpn_router_id.value_namespace = name_space;
        l2vpn_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpn-added")
    {
        vpn_added = value;
        vpn_added.value_namespace = name_space;
        vpn_added.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-connected")
    {
        service_connected = value;
        service_connected.value_namespace = name_space;
        service_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpls-id-conflict")
    {
        vpls_id_conflict = value;
        vpls_id_conflict.value_namespace = name_space;
        vpls_id_conflict.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "export-route-policy")
    {
        export_route_policy = value;
        export_route_policy.value_namespace = name_space;
        export_route_policy.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vpn-id")
    {
        vpn_id.yfilter = yfilter;
    }
    if(value_path == "ad-signalling-method")
    {
        ad_signalling_method.yfilter = yfilter;
    }
    if(value_path == "ad-method")
    {
        ad_method.yfilter = yfilter;
    }
    if(value_path == "ve-id")
    {
        ve_id.yfilter = yfilter;
    }
    if(value_path == "provisioned-ve-id")
    {
        provisioned_ve_id.yfilter = yfilter;
    }
    if(value_path == "ve-range")
    {
        ve_range.yfilter = yfilter;
    }
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
    if(value_path == "l2vpn-router-id")
    {
        l2vpn_router_id.yfilter = yfilter;
    }
    if(value_path == "vpn-added")
    {
        vpn_added.yfilter = yfilter;
    }
    if(value_path == "service-connected")
    {
        service_connected.yfilter = yfilter;
    }
    if(value_path == "vpls-id-conflict")
    {
        vpls_id_conflict.yfilter = yfilter;
    }
    if(value_path == "export-route-policy")
    {
        export_route_policy.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rd-value" || name == "vpls-id" || name == "import-rt" || name == "export-rt" || name == "vpn-id" || name == "ad-signalling-method" || name == "ad-method" || name == "ve-id" || name == "provisioned-ve-id" || name == "ve-range" || name == "as-number" || name == "l2vpn-router-id" || name == "vpn-added" || name == "service-connected" || name == "vpls-id-conflict" || name == "export-route-policy")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::RdValue()
    :
    rd{YType::enumeration, "rd"}
    	,
    auto_(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::Auto>())
	,two_byte_as(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::TwoByteAs>())
	,four_byte_as(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::FourByteAs>())
	,v4_addr(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::V4Addr>())
{
    auto_->parent = this;
    two_byte_as->parent = this;
    four_byte_as->parent = this;
    v4_addr->parent = this;

    yang_name = "rd-value"; yang_parent_name = "discovery-information"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::~RdValue()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::has_data() const
{
    return rd.is_set
	|| (auto_ !=  nullptr && auto_->has_data())
	|| (two_byte_as !=  nullptr && two_byte_as->has_data())
	|| (four_byte_as !=  nullptr && four_byte_as->has_data())
	|| (v4_addr !=  nullptr && v4_addr->has_data());
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rd.yfilter)
	|| (auto_ !=  nullptr && auto_->has_operation())
	|| (two_byte_as !=  nullptr && two_byte_as->has_operation())
	|| (four_byte_as !=  nullptr && four_byte_as->has_operation())
	|| (v4_addr !=  nullptr && v4_addr->has_operation());
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/bridge-access-vfi/discovery-information/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rd-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto")
    {
        if(auto_ == nullptr)
        {
            auto_ = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::Auto>();
        }
        return auto_;
    }

    if(child_yang_name == "two-byte-as")
    {
        if(two_byte_as == nullptr)
        {
            two_byte_as = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::TwoByteAs>();
        }
        return two_byte_as;
    }

    if(child_yang_name == "four-byte-as")
    {
        if(four_byte_as == nullptr)
        {
            four_byte_as = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::FourByteAs>();
        }
        return four_byte_as;
    }

    if(child_yang_name == "v4-addr")
    {
        if(v4_addr == nullptr)
        {
            v4_addr = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::V4Addr>();
        }
        return v4_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(auto_ != nullptr)
    {
        children["auto"] = auto_;
    }

    if(two_byte_as != nullptr)
    {
        children["two-byte-as"] = two_byte_as;
    }

    if(four_byte_as != nullptr)
    {
        children["four-byte-as"] = four_byte_as;
    }

    if(v4_addr != nullptr)
    {
        children["v4-addr"] = v4_addr;
    }

    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rd")
    {
        rd = value;
        rd.value_namespace = name_space;
        rd.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rd")
    {
        rd.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto" || name == "two-byte-as" || name == "four-byte-as" || name == "v4-addr" || name == "rd")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::Auto::Auto()
    :
    router_id{YType::str, "router-id"},
    auto_index{YType::uint16, "auto-index"}
{

    yang_name = "auto"; yang_parent_name = "rd-value"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::Auto::~Auto()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::Auto::has_data() const
{
    return router_id.is_set
	|| auto_index.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::Auto::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(auto_index.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::Auto::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/bridge-access-vfi/discovery-information/rd-value/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::Auto::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::Auto::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (auto_index.is_set || is_set(auto_index.yfilter)) leaf_name_data.push_back(auto_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::Auto::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::Auto::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::Auto::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-index")
    {
        auto_index = value;
        auto_index.value_namespace = name_space;
        auto_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::Auto::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "auto-index")
    {
        auto_index.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::Auto::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "auto-index")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::TwoByteAs::TwoByteAs()
    :
    two_byte_as{YType::uint16, "two-byte-as"},
    four_byte_index{YType::uint32, "four-byte-index"}
{

    yang_name = "two-byte-as"; yang_parent_name = "rd-value"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::TwoByteAs::~TwoByteAs()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::TwoByteAs::has_data() const
{
    return two_byte_as.is_set
	|| four_byte_index.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::TwoByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(two_byte_as.yfilter)
	|| ydk::is_set(four_byte_index.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::TwoByteAs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/bridge-access-vfi/discovery-information/rd-value/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::TwoByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::TwoByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (two_byte_as.is_set || is_set(two_byte_as.yfilter)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());
    if (four_byte_index.is_set || is_set(four_byte_index.yfilter)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::TwoByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::TwoByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "two-byte-as")
    {
        two_byte_as = value;
        two_byte_as.value_namespace = name_space;
        two_byte_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "four-byte-index")
    {
        four_byte_index = value;
        four_byte_index.value_namespace = name_space;
        four_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::TwoByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "two-byte-as")
    {
        two_byte_as.yfilter = yfilter;
    }
    if(value_path == "four-byte-index")
    {
        four_byte_index.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::TwoByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "two-byte-as" || name == "four-byte-index")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::FourByteAs::FourByteAs()
    :
    four_byte_as{YType::uint32, "four-byte-as"},
    two_byte_index{YType::uint16, "two-byte-index"}
{

    yang_name = "four-byte-as"; yang_parent_name = "rd-value"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::FourByteAs::~FourByteAs()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::FourByteAs::has_data() const
{
    return four_byte_as.is_set
	|| two_byte_index.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::FourByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(four_byte_as.yfilter)
	|| ydk::is_set(two_byte_index.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::FourByteAs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/bridge-access-vfi/discovery-information/rd-value/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::FourByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "four-byte-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::FourByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_as.is_set || is_set(four_byte_as.yfilter)) leaf_name_data.push_back(four_byte_as.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.yfilter)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::FourByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::FourByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::FourByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as = value;
        four_byte_as.value_namespace = name_space;
        four_byte_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
        two_byte_index.value_namespace = name_space;
        two_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::FourByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as.yfilter = yfilter;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::FourByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "four-byte-as" || name == "two-byte-index")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::V4Addr::V4Addr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    two_byte_index{YType::uint16, "two-byte-index"}
{

    yang_name = "v4-addr"; yang_parent_name = "rd-value"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::V4Addr::~V4Addr()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::V4Addr::has_data() const
{
    return ipv4_address.is_set
	|| two_byte_index.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::V4Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(two_byte_index.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::V4Addr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/bridge-access-vfi/discovery-information/rd-value/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::V4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::V4Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.yfilter)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::V4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::V4Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::V4Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
        two_byte_index.value_namespace = name_space;
        two_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::V4Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::V4Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address" || name == "two-byte-index")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::VplsId()
    :
    vpls_id_type{YType::enumeration, "vpls-id-type"}
    	,
    auto_(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::Auto>())
	,two_byte_as(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::TwoByteAs>())
	,v4_addr(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::V4Addr>())
{
    auto_->parent = this;
    two_byte_as->parent = this;
    v4_addr->parent = this;

    yang_name = "vpls-id"; yang_parent_name = "discovery-information"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::~VplsId()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::has_data() const
{
    return vpls_id_type.is_set
	|| (auto_ !=  nullptr && auto_->has_data())
	|| (two_byte_as !=  nullptr && two_byte_as->has_data())
	|| (v4_addr !=  nullptr && v4_addr->has_data());
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vpls_id_type.yfilter)
	|| (auto_ !=  nullptr && auto_->has_operation())
	|| (two_byte_as !=  nullptr && two_byte_as->has_operation())
	|| (v4_addr !=  nullptr && v4_addr->has_operation());
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/bridge-access-vfi/discovery-information/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpls-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vpls_id_type.is_set || is_set(vpls_id_type.yfilter)) leaf_name_data.push_back(vpls_id_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto")
    {
        if(auto_ == nullptr)
        {
            auto_ = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::Auto>();
        }
        return auto_;
    }

    if(child_yang_name == "two-byte-as")
    {
        if(two_byte_as == nullptr)
        {
            two_byte_as = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::TwoByteAs>();
        }
        return two_byte_as;
    }

    if(child_yang_name == "v4-addr")
    {
        if(v4_addr == nullptr)
        {
            v4_addr = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::V4Addr>();
        }
        return v4_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(auto_ != nullptr)
    {
        children["auto"] = auto_;
    }

    if(two_byte_as != nullptr)
    {
        children["two-byte-as"] = two_byte_as;
    }

    if(v4_addr != nullptr)
    {
        children["v4-addr"] = v4_addr;
    }

    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vpls-id-type")
    {
        vpls_id_type = value;
        vpls_id_type.value_namespace = name_space;
        vpls_id_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vpls-id-type")
    {
        vpls_id_type.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto" || name == "two-byte-as" || name == "v4-addr" || name == "vpls-id-type")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::Auto::Auto()
    :
    asn{YType::uint16, "asn"},
    vpn_id{YType::uint32, "vpn-id"}
{

    yang_name = "auto"; yang_parent_name = "vpls-id"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::Auto::~Auto()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::Auto::has_data() const
{
    return asn.is_set
	|| vpn_id.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::Auto::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(asn.yfilter)
	|| ydk::is_set(vpn_id.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::Auto::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/bridge-access-vfi/discovery-information/vpls-id/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::Auto::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::Auto::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asn.is_set || is_set(asn.yfilter)) leaf_name_data.push_back(asn.get_name_leafdata());
    if (vpn_id.is_set || is_set(vpn_id.yfilter)) leaf_name_data.push_back(vpn_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::Auto::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::Auto::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::Auto::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "asn")
    {
        asn = value;
        asn.value_namespace = name_space;
        asn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpn-id")
    {
        vpn_id = value;
        vpn_id.value_namespace = name_space;
        vpn_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::Auto::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "asn")
    {
        asn.yfilter = yfilter;
    }
    if(value_path == "vpn-id")
    {
        vpn_id.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::Auto::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asn" || name == "vpn-id")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::TwoByteAs::TwoByteAs()
    :
    two_byte_as{YType::uint16, "two-byte-as"},
    four_byte_index{YType::uint32, "four-byte-index"}
{

    yang_name = "two-byte-as"; yang_parent_name = "vpls-id"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::TwoByteAs::~TwoByteAs()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::TwoByteAs::has_data() const
{
    return two_byte_as.is_set
	|| four_byte_index.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::TwoByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(two_byte_as.yfilter)
	|| ydk::is_set(four_byte_index.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::TwoByteAs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/bridge-access-vfi/discovery-information/vpls-id/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::TwoByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::TwoByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (two_byte_as.is_set || is_set(two_byte_as.yfilter)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());
    if (four_byte_index.is_set || is_set(four_byte_index.yfilter)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::TwoByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::TwoByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "two-byte-as")
    {
        two_byte_as = value;
        two_byte_as.value_namespace = name_space;
        two_byte_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "four-byte-index")
    {
        four_byte_index = value;
        four_byte_index.value_namespace = name_space;
        four_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::TwoByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "two-byte-as")
    {
        two_byte_as.yfilter = yfilter;
    }
    if(value_path == "four-byte-index")
    {
        four_byte_index.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::TwoByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "two-byte-as" || name == "four-byte-index")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::V4Addr::V4Addr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    two_byte_index{YType::uint16, "two-byte-index"}
{

    yang_name = "v4-addr"; yang_parent_name = "vpls-id"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::V4Addr::~V4Addr()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::V4Addr::has_data() const
{
    return ipv4_address.is_set
	|| two_byte_index.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::V4Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(two_byte_index.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::V4Addr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/bridge-access-vfi/discovery-information/vpls-id/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::V4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::V4Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.yfilter)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::V4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::V4Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::V4Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
        two_byte_index.value_namespace = name_space;
        two_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::V4Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::V4Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address" || name == "two-byte-index")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::ImportRt()
    :
    rt{YType::enumeration, "rt"}
    	,
    two_byte_as(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::TwoByteAs>())
	,four_byte_as(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::FourByteAs>())
	,v4_addr(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::V4Addr>())
	,es_import(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::EsImport>())
{
    two_byte_as->parent = this;
    four_byte_as->parent = this;
    v4_addr->parent = this;
    es_import->parent = this;

    yang_name = "import-rt"; yang_parent_name = "discovery-information"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::~ImportRt()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::has_data() const
{
    return rt.is_set
	|| (two_byte_as !=  nullptr && two_byte_as->has_data())
	|| (four_byte_as !=  nullptr && four_byte_as->has_data())
	|| (v4_addr !=  nullptr && v4_addr->has_data())
	|| (es_import !=  nullptr && es_import->has_data());
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rt.yfilter)
	|| (two_byte_as !=  nullptr && two_byte_as->has_operation())
	|| (four_byte_as !=  nullptr && four_byte_as->has_operation())
	|| (v4_addr !=  nullptr && v4_addr->has_operation())
	|| (es_import !=  nullptr && es_import->has_operation());
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/bridge-access-vfi/discovery-information/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "import-rt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rt.is_set || is_set(rt.yfilter)) leaf_name_data.push_back(rt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "two-byte-as")
    {
        if(two_byte_as == nullptr)
        {
            two_byte_as = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::TwoByteAs>();
        }
        return two_byte_as;
    }

    if(child_yang_name == "four-byte-as")
    {
        if(four_byte_as == nullptr)
        {
            four_byte_as = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::FourByteAs>();
        }
        return four_byte_as;
    }

    if(child_yang_name == "v4-addr")
    {
        if(v4_addr == nullptr)
        {
            v4_addr = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::V4Addr>();
        }
        return v4_addr;
    }

    if(child_yang_name == "es-import")
    {
        if(es_import == nullptr)
        {
            es_import = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::EsImport>();
        }
        return es_import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(two_byte_as != nullptr)
    {
        children["two-byte-as"] = two_byte_as;
    }

    if(four_byte_as != nullptr)
    {
        children["four-byte-as"] = four_byte_as;
    }

    if(v4_addr != nullptr)
    {
        children["v4-addr"] = v4_addr;
    }

    if(es_import != nullptr)
    {
        children["es-import"] = es_import;
    }

    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rt")
    {
        rt = value;
        rt.value_namespace = name_space;
        rt.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rt")
    {
        rt.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "two-byte-as" || name == "four-byte-as" || name == "v4-addr" || name == "es-import" || name == "rt")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::TwoByteAs::TwoByteAs()
    :
    two_byte_as{YType::uint16, "two-byte-as"},
    four_byte_index{YType::uint32, "four-byte-index"}
{

    yang_name = "two-byte-as"; yang_parent_name = "import-rt"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::TwoByteAs::~TwoByteAs()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::TwoByteAs::has_data() const
{
    return two_byte_as.is_set
	|| four_byte_index.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::TwoByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(two_byte_as.yfilter)
	|| ydk::is_set(four_byte_index.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::TwoByteAs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/bridge-access-vfi/discovery-information/import-rt/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::TwoByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::TwoByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (two_byte_as.is_set || is_set(two_byte_as.yfilter)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());
    if (four_byte_index.is_set || is_set(four_byte_index.yfilter)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::TwoByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::TwoByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "two-byte-as")
    {
        two_byte_as = value;
        two_byte_as.value_namespace = name_space;
        two_byte_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "four-byte-index")
    {
        four_byte_index = value;
        four_byte_index.value_namespace = name_space;
        four_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::TwoByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "two-byte-as")
    {
        two_byte_as.yfilter = yfilter;
    }
    if(value_path == "four-byte-index")
    {
        four_byte_index.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::TwoByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "two-byte-as" || name == "four-byte-index")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::FourByteAs::FourByteAs()
    :
    four_byte_as{YType::uint32, "four-byte-as"},
    two_byte_index{YType::uint16, "two-byte-index"}
{

    yang_name = "four-byte-as"; yang_parent_name = "import-rt"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::FourByteAs::~FourByteAs()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::FourByteAs::has_data() const
{
    return four_byte_as.is_set
	|| two_byte_index.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::FourByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(four_byte_as.yfilter)
	|| ydk::is_set(two_byte_index.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::FourByteAs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/bridge-access-vfi/discovery-information/import-rt/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::FourByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "four-byte-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::FourByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_as.is_set || is_set(four_byte_as.yfilter)) leaf_name_data.push_back(four_byte_as.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.yfilter)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::FourByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::FourByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::FourByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as = value;
        four_byte_as.value_namespace = name_space;
        four_byte_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
        two_byte_index.value_namespace = name_space;
        two_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::FourByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as.yfilter = yfilter;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::FourByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "four-byte-as" || name == "two-byte-index")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::V4Addr::V4Addr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    two_byte_index{YType::uint16, "two-byte-index"}
{

    yang_name = "v4-addr"; yang_parent_name = "import-rt"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::V4Addr::~V4Addr()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::V4Addr::has_data() const
{
    return ipv4_address.is_set
	|| two_byte_index.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::V4Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(two_byte_index.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::V4Addr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/bridge-access-vfi/discovery-information/import-rt/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::V4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::V4Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.yfilter)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::V4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::V4Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::V4Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
        two_byte_index.value_namespace = name_space;
        two_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::V4Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::V4Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address" || name == "two-byte-index")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::EsImport::EsImport()
    :
    high_bytes{YType::uint32, "high-bytes"},
    low_bytes{YType::uint16, "low-bytes"}
{

    yang_name = "es-import"; yang_parent_name = "import-rt"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::EsImport::~EsImport()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::EsImport::has_data() const
{
    return high_bytes.is_set
	|| low_bytes.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::EsImport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(high_bytes.yfilter)
	|| ydk::is_set(low_bytes.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::EsImport::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/bridge-access-vfi/discovery-information/import-rt/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::EsImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es-import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::EsImport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (high_bytes.is_set || is_set(high_bytes.yfilter)) leaf_name_data.push_back(high_bytes.get_name_leafdata());
    if (low_bytes.is_set || is_set(low_bytes.yfilter)) leaf_name_data.push_back(low_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::EsImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::EsImport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::EsImport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "high-bytes")
    {
        high_bytes = value;
        high_bytes.value_namespace = name_space;
        high_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low-bytes")
    {
        low_bytes = value;
        low_bytes.value_namespace = name_space;
        low_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::EsImport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "high-bytes")
    {
        high_bytes.yfilter = yfilter;
    }
    if(value_path == "low-bytes")
    {
        low_bytes.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::EsImport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high-bytes" || name == "low-bytes")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::ExportRt()
    :
    rt{YType::enumeration, "rt"}
    	,
    two_byte_as(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::TwoByteAs>())
	,four_byte_as(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::FourByteAs>())
	,v4_addr(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::V4Addr>())
	,es_import(std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::EsImport>())
{
    two_byte_as->parent = this;
    four_byte_as->parent = this;
    v4_addr->parent = this;
    es_import->parent = this;

    yang_name = "export-rt"; yang_parent_name = "discovery-information"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::~ExportRt()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::has_data() const
{
    return rt.is_set
	|| (two_byte_as !=  nullptr && two_byte_as->has_data())
	|| (four_byte_as !=  nullptr && four_byte_as->has_data())
	|| (v4_addr !=  nullptr && v4_addr->has_data())
	|| (es_import !=  nullptr && es_import->has_data());
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rt.yfilter)
	|| (two_byte_as !=  nullptr && two_byte_as->has_operation())
	|| (four_byte_as !=  nullptr && four_byte_as->has_operation())
	|| (v4_addr !=  nullptr && v4_addr->has_operation())
	|| (es_import !=  nullptr && es_import->has_operation());
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/bridge-access-vfi/discovery-information/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "export-rt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rt.is_set || is_set(rt.yfilter)) leaf_name_data.push_back(rt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "two-byte-as")
    {
        if(two_byte_as == nullptr)
        {
            two_byte_as = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::TwoByteAs>();
        }
        return two_byte_as;
    }

    if(child_yang_name == "four-byte-as")
    {
        if(four_byte_as == nullptr)
        {
            four_byte_as = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::FourByteAs>();
        }
        return four_byte_as;
    }

    if(child_yang_name == "v4-addr")
    {
        if(v4_addr == nullptr)
        {
            v4_addr = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::V4Addr>();
        }
        return v4_addr;
    }

    if(child_yang_name == "es-import")
    {
        if(es_import == nullptr)
        {
            es_import = std::make_shared<L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::EsImport>();
        }
        return es_import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(two_byte_as != nullptr)
    {
        children["two-byte-as"] = two_byte_as;
    }

    if(four_byte_as != nullptr)
    {
        children["four-byte-as"] = four_byte_as;
    }

    if(v4_addr != nullptr)
    {
        children["v4-addr"] = v4_addr;
    }

    if(es_import != nullptr)
    {
        children["es-import"] = es_import;
    }

    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rt")
    {
        rt = value;
        rt.value_namespace = name_space;
        rt.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rt")
    {
        rt.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "two-byte-as" || name == "four-byte-as" || name == "v4-addr" || name == "es-import" || name == "rt")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::TwoByteAs::TwoByteAs()
    :
    two_byte_as{YType::uint16, "two-byte-as"},
    four_byte_index{YType::uint32, "four-byte-index"}
{

    yang_name = "two-byte-as"; yang_parent_name = "export-rt"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::TwoByteAs::~TwoByteAs()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::TwoByteAs::has_data() const
{
    return two_byte_as.is_set
	|| four_byte_index.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::TwoByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(two_byte_as.yfilter)
	|| ydk::is_set(four_byte_index.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::TwoByteAs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/bridge-access-vfi/discovery-information/export-rt/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::TwoByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::TwoByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (two_byte_as.is_set || is_set(two_byte_as.yfilter)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());
    if (four_byte_index.is_set || is_set(four_byte_index.yfilter)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::TwoByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::TwoByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "two-byte-as")
    {
        two_byte_as = value;
        two_byte_as.value_namespace = name_space;
        two_byte_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "four-byte-index")
    {
        four_byte_index = value;
        four_byte_index.value_namespace = name_space;
        four_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::TwoByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "two-byte-as")
    {
        two_byte_as.yfilter = yfilter;
    }
    if(value_path == "four-byte-index")
    {
        four_byte_index.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::TwoByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "two-byte-as" || name == "four-byte-index")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::FourByteAs::FourByteAs()
    :
    four_byte_as{YType::uint32, "four-byte-as"},
    two_byte_index{YType::uint16, "two-byte-index"}
{

    yang_name = "four-byte-as"; yang_parent_name = "export-rt"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::FourByteAs::~FourByteAs()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::FourByteAs::has_data() const
{
    return four_byte_as.is_set
	|| two_byte_index.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::FourByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(four_byte_as.yfilter)
	|| ydk::is_set(two_byte_index.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::FourByteAs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/bridge-access-vfi/discovery-information/export-rt/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::FourByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "four-byte-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::FourByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_as.is_set || is_set(four_byte_as.yfilter)) leaf_name_data.push_back(four_byte_as.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.yfilter)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::FourByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::FourByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::FourByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as = value;
        four_byte_as.value_namespace = name_space;
        four_byte_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
        two_byte_index.value_namespace = name_space;
        two_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::FourByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as.yfilter = yfilter;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::FourByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "four-byte-as" || name == "two-byte-index")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::V4Addr::V4Addr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    two_byte_index{YType::uint16, "two-byte-index"}
{

    yang_name = "v4-addr"; yang_parent_name = "export-rt"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::V4Addr::~V4Addr()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::V4Addr::has_data() const
{
    return ipv4_address.is_set
	|| two_byte_index.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::V4Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(two_byte_index.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::V4Addr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/bridge-access-vfi/discovery-information/export-rt/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::V4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::V4Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.yfilter)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::V4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::V4Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::V4Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
        two_byte_index.value_namespace = name_space;
        two_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::V4Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::V4Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address" || name == "two-byte-index")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::EsImport::EsImport()
    :
    high_bytes{YType::uint32, "high-bytes"},
    low_bytes{YType::uint16, "low-bytes"}
{

    yang_name = "es-import"; yang_parent_name = "export-rt"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::EsImport::~EsImport()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::EsImport::has_data() const
{
    return high_bytes.is_set
	|| low_bytes.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::EsImport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(high_bytes.yfilter)
	|| ydk::is_set(low_bytes.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::EsImport::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/bridge-access-vfi/discovery-information/export-rt/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::EsImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es-import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::EsImport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (high_bytes.is_set || is_set(high_bytes.yfilter)) leaf_name_data.push_back(high_bytes.get_name_leafdata());
    if (low_bytes.is_set || is_set(low_bytes.yfilter)) leaf_name_data.push_back(low_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::EsImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::EsImport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::EsImport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "high-bytes")
    {
        high_bytes = value;
        high_bytes.value_namespace = name_space;
        high_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low-bytes")
    {
        low_bytes = value;
        low_bytes.value_namespace = name_space;
        low_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::EsImport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "high-bytes")
    {
        high_bytes.yfilter = yfilter;
    }
    if(value_path == "low-bytes")
    {
        low_bytes.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::EsImport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high-bytes" || name == "low-bytes")
        return true;
    return false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::P2MpInformation::P2MpInformation()
    :
    transport{YType::enumeration, "transport"},
    signaling{YType::enumeration, "signaling"},
    ptree_id{YType::uint32, "ptree-id"},
    attribute_set_name{YType::str, "attribute-set-name"},
    transport_status{YType::enumeration, "transport-status"},
    local_label{YType::uint32, "local-label"},
    tunnel_interface{YType::str, "tunnel-interface"}
{

    yang_name = "p2mp-information"; yang_parent_name = "bridge-access-vfi"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::P2MpInformation::~P2MpInformation()
{
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::P2MpInformation::has_data() const
{
    return transport.is_set
	|| signaling.is_set
	|| ptree_id.is_set
	|| attribute_set_name.is_set
	|| transport_status.is_set
	|| local_label.is_set
	|| tunnel_interface.is_set;
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::P2MpInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(transport.yfilter)
	|| ydk::is_set(signaling.yfilter)
	|| ydk::is_set(ptree_id.yfilter)
	|| ydk::is_set(attribute_set_name.yfilter)
	|| ydk::is_set(transport_status.yfilter)
	|| ydk::is_set(local_label.yfilter)
	|| ydk::is_set(tunnel_interface.yfilter);
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::P2MpInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/bridge-domains/bridge-domain/bridge-domain-info/bridge-access-vfi/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::P2MpInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2mp-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::P2MpInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transport.is_set || is_set(transport.yfilter)) leaf_name_data.push_back(transport.get_name_leafdata());
    if (signaling.is_set || is_set(signaling.yfilter)) leaf_name_data.push_back(signaling.get_name_leafdata());
    if (ptree_id.is_set || is_set(ptree_id.yfilter)) leaf_name_data.push_back(ptree_id.get_name_leafdata());
    if (attribute_set_name.is_set || is_set(attribute_set_name.yfilter)) leaf_name_data.push_back(attribute_set_name.get_name_leafdata());
    if (transport_status.is_set || is_set(transport_status.yfilter)) leaf_name_data.push_back(transport_status.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.yfilter)) leaf_name_data.push_back(local_label.get_name_leafdata());
    if (tunnel_interface.is_set || is_set(tunnel_interface.yfilter)) leaf_name_data.push_back(tunnel_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::P2MpInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::P2MpInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::P2MpInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transport")
    {
        transport = value;
        transport.value_namespace = name_space;
        transport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signaling")
    {
        signaling = value;
        signaling.value_namespace = name_space;
        signaling.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ptree-id")
    {
        ptree_id = value;
        ptree_id.value_namespace = name_space;
        ptree_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-set-name")
    {
        attribute_set_name = value;
        attribute_set_name.value_namespace = name_space;
        attribute_set_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transport-status")
    {
        transport_status = value;
        transport_status.value_namespace = name_space;
        transport_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-label")
    {
        local_label = value;
        local_label.value_namespace = name_space;
        local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface = value;
        tunnel_interface.value_namespace = name_space;
        tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::P2MpInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transport")
    {
        transport.yfilter = yfilter;
    }
    if(value_path == "signaling")
    {
        signaling.yfilter = yfilter;
    }
    if(value_path == "ptree-id")
    {
        ptree_id.yfilter = yfilter;
    }
    if(value_path == "attribute-set-name")
    {
        attribute_set_name.yfilter = yfilter;
    }
    if(value_path == "transport-status")
    {
        transport_status.yfilter = yfilter;
    }
    if(value_path == "local-label")
    {
        local_label.yfilter = yfilter;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::P2MpInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transport" || name == "signaling" || name == "ptree-id" || name == "attribute-set-name" || name == "transport-status" || name == "local-label" || name == "tunnel-interface")
        return true;
    return false;
}

L2Vpnv2::Standby::DiscoverySummary::DiscoverySummary()
    :
    number_bridge_domainvpns{YType::uint32, "number-bridge-domainvpns"},
    number_mp2m_pxconnect_vpns{YType::uint32, "number-mp2m-pxconnect-vpns"},
    number_local_edges_bridge_domain{YType::uint32, "number-local-edges-bridge-domain"},
    number_remote_edges_bridge_domain{YType::uint32, "number-remote-edges-bridge-domain"},
    number_nlri_bridge_domain{YType::uint32, "number-nlri-bridge-domain"},
    number_local_edges_xconnect{YType::uint32, "number-local-edges-xconnect"},
    number_remote_edges_xconnect{YType::uint32, "number-remote-edges-xconnect"},
    number_nlri_xconnect{YType::uint32, "number-nlri-xconnect"},
    bgp_stateon_active_rp{YType::boolean, "bgp-stateon-active-rp"},
    bgp_stateon_standby_rp{YType::boolean, "bgp-stateon-standby-rp"},
    vpls_registered{YType::boolean, "vpls-registered"},
    vpws_registered{YType::boolean, "vpws-registered"},
    bgp_ipc_transport_mode{YType::enumeration, "bgp-ipc-transport-mode"},
    bgp_current_node_id{YType::str, "bgp-current-node-id"}
{

    yang_name = "discovery-summary"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::DiscoverySummary::~DiscoverySummary()
{
}

bool L2Vpnv2::Standby::DiscoverySummary::has_data() const
{
    return number_bridge_domainvpns.is_set
	|| number_mp2m_pxconnect_vpns.is_set
	|| number_local_edges_bridge_domain.is_set
	|| number_remote_edges_bridge_domain.is_set
	|| number_nlri_bridge_domain.is_set
	|| number_local_edges_xconnect.is_set
	|| number_remote_edges_xconnect.is_set
	|| number_nlri_xconnect.is_set
	|| bgp_stateon_active_rp.is_set
	|| bgp_stateon_standby_rp.is_set
	|| vpls_registered.is_set
	|| vpws_registered.is_set
	|| bgp_ipc_transport_mode.is_set
	|| bgp_current_node_id.is_set;
}

bool L2Vpnv2::Standby::DiscoverySummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number_bridge_domainvpns.yfilter)
	|| ydk::is_set(number_mp2m_pxconnect_vpns.yfilter)
	|| ydk::is_set(number_local_edges_bridge_domain.yfilter)
	|| ydk::is_set(number_remote_edges_bridge_domain.yfilter)
	|| ydk::is_set(number_nlri_bridge_domain.yfilter)
	|| ydk::is_set(number_local_edges_xconnect.yfilter)
	|| ydk::is_set(number_remote_edges_xconnect.yfilter)
	|| ydk::is_set(number_nlri_xconnect.yfilter)
	|| ydk::is_set(bgp_stateon_active_rp.yfilter)
	|| ydk::is_set(bgp_stateon_standby_rp.yfilter)
	|| ydk::is_set(vpls_registered.yfilter)
	|| ydk::is_set(vpws_registered.yfilter)
	|| ydk::is_set(bgp_ipc_transport_mode.yfilter)
	|| ydk::is_set(bgp_current_node_id.yfilter);
}

std::string L2Vpnv2::Standby::DiscoverySummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::DiscoverySummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discovery-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::DiscoverySummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number_bridge_domainvpns.is_set || is_set(number_bridge_domainvpns.yfilter)) leaf_name_data.push_back(number_bridge_domainvpns.get_name_leafdata());
    if (number_mp2m_pxconnect_vpns.is_set || is_set(number_mp2m_pxconnect_vpns.yfilter)) leaf_name_data.push_back(number_mp2m_pxconnect_vpns.get_name_leafdata());
    if (number_local_edges_bridge_domain.is_set || is_set(number_local_edges_bridge_domain.yfilter)) leaf_name_data.push_back(number_local_edges_bridge_domain.get_name_leafdata());
    if (number_remote_edges_bridge_domain.is_set || is_set(number_remote_edges_bridge_domain.yfilter)) leaf_name_data.push_back(number_remote_edges_bridge_domain.get_name_leafdata());
    if (number_nlri_bridge_domain.is_set || is_set(number_nlri_bridge_domain.yfilter)) leaf_name_data.push_back(number_nlri_bridge_domain.get_name_leafdata());
    if (number_local_edges_xconnect.is_set || is_set(number_local_edges_xconnect.yfilter)) leaf_name_data.push_back(number_local_edges_xconnect.get_name_leafdata());
    if (number_remote_edges_xconnect.is_set || is_set(number_remote_edges_xconnect.yfilter)) leaf_name_data.push_back(number_remote_edges_xconnect.get_name_leafdata());
    if (number_nlri_xconnect.is_set || is_set(number_nlri_xconnect.yfilter)) leaf_name_data.push_back(number_nlri_xconnect.get_name_leafdata());
    if (bgp_stateon_active_rp.is_set || is_set(bgp_stateon_active_rp.yfilter)) leaf_name_data.push_back(bgp_stateon_active_rp.get_name_leafdata());
    if (bgp_stateon_standby_rp.is_set || is_set(bgp_stateon_standby_rp.yfilter)) leaf_name_data.push_back(bgp_stateon_standby_rp.get_name_leafdata());
    if (vpls_registered.is_set || is_set(vpls_registered.yfilter)) leaf_name_data.push_back(vpls_registered.get_name_leafdata());
    if (vpws_registered.is_set || is_set(vpws_registered.yfilter)) leaf_name_data.push_back(vpws_registered.get_name_leafdata());
    if (bgp_ipc_transport_mode.is_set || is_set(bgp_ipc_transport_mode.yfilter)) leaf_name_data.push_back(bgp_ipc_transport_mode.get_name_leafdata());
    if (bgp_current_node_id.is_set || is_set(bgp_current_node_id.yfilter)) leaf_name_data.push_back(bgp_current_node_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::DiscoverySummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::DiscoverySummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::DiscoverySummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number-bridge-domainvpns")
    {
        number_bridge_domainvpns = value;
        number_bridge_domainvpns.value_namespace = name_space;
        number_bridge_domainvpns.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-mp2m-pxconnect-vpns")
    {
        number_mp2m_pxconnect_vpns = value;
        number_mp2m_pxconnect_vpns.value_namespace = name_space;
        number_mp2m_pxconnect_vpns.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-local-edges-bridge-domain")
    {
        number_local_edges_bridge_domain = value;
        number_local_edges_bridge_domain.value_namespace = name_space;
        number_local_edges_bridge_domain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-remote-edges-bridge-domain")
    {
        number_remote_edges_bridge_domain = value;
        number_remote_edges_bridge_domain.value_namespace = name_space;
        number_remote_edges_bridge_domain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-nlri-bridge-domain")
    {
        number_nlri_bridge_domain = value;
        number_nlri_bridge_domain.value_namespace = name_space;
        number_nlri_bridge_domain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-local-edges-xconnect")
    {
        number_local_edges_xconnect = value;
        number_local_edges_xconnect.value_namespace = name_space;
        number_local_edges_xconnect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-remote-edges-xconnect")
    {
        number_remote_edges_xconnect = value;
        number_remote_edges_xconnect.value_namespace = name_space;
        number_remote_edges_xconnect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-nlri-xconnect")
    {
        number_nlri_xconnect = value;
        number_nlri_xconnect.value_namespace = name_space;
        number_nlri_xconnect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-stateon-active-rp")
    {
        bgp_stateon_active_rp = value;
        bgp_stateon_active_rp.value_namespace = name_space;
        bgp_stateon_active_rp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-stateon-standby-rp")
    {
        bgp_stateon_standby_rp = value;
        bgp_stateon_standby_rp.value_namespace = name_space;
        bgp_stateon_standby_rp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpls-registered")
    {
        vpls_registered = value;
        vpls_registered.value_namespace = name_space;
        vpls_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpws-registered")
    {
        vpws_registered = value;
        vpws_registered.value_namespace = name_space;
        vpws_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-ipc-transport-mode")
    {
        bgp_ipc_transport_mode = value;
        bgp_ipc_transport_mode.value_namespace = name_space;
        bgp_ipc_transport_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-current-node-id")
    {
        bgp_current_node_id = value;
        bgp_current_node_id.value_namespace = name_space;
        bgp_current_node_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::DiscoverySummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number-bridge-domainvpns")
    {
        number_bridge_domainvpns.yfilter = yfilter;
    }
    if(value_path == "number-mp2m-pxconnect-vpns")
    {
        number_mp2m_pxconnect_vpns.yfilter = yfilter;
    }
    if(value_path == "number-local-edges-bridge-domain")
    {
        number_local_edges_bridge_domain.yfilter = yfilter;
    }
    if(value_path == "number-remote-edges-bridge-domain")
    {
        number_remote_edges_bridge_domain.yfilter = yfilter;
    }
    if(value_path == "number-nlri-bridge-domain")
    {
        number_nlri_bridge_domain.yfilter = yfilter;
    }
    if(value_path == "number-local-edges-xconnect")
    {
        number_local_edges_xconnect.yfilter = yfilter;
    }
    if(value_path == "number-remote-edges-xconnect")
    {
        number_remote_edges_xconnect.yfilter = yfilter;
    }
    if(value_path == "number-nlri-xconnect")
    {
        number_nlri_xconnect.yfilter = yfilter;
    }
    if(value_path == "bgp-stateon-active-rp")
    {
        bgp_stateon_active_rp.yfilter = yfilter;
    }
    if(value_path == "bgp-stateon-standby-rp")
    {
        bgp_stateon_standby_rp.yfilter = yfilter;
    }
    if(value_path == "vpls-registered")
    {
        vpls_registered.yfilter = yfilter;
    }
    if(value_path == "vpws-registered")
    {
        vpws_registered.yfilter = yfilter;
    }
    if(value_path == "bgp-ipc-transport-mode")
    {
        bgp_ipc_transport_mode.yfilter = yfilter;
    }
    if(value_path == "bgp-current-node-id")
    {
        bgp_current_node_id.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::DiscoverySummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number-bridge-domainvpns" || name == "number-mp2m-pxconnect-vpns" || name == "number-local-edges-bridge-domain" || name == "number-remote-edges-bridge-domain" || name == "number-nlri-bridge-domain" || name == "number-local-edges-xconnect" || name == "number-remote-edges-xconnect" || name == "number-nlri-xconnect" || name == "bgp-stateon-active-rp" || name == "bgp-stateon-standby-rp" || name == "vpls-registered" || name == "vpws-registered" || name == "bgp-ipc-transport-mode" || name == "bgp-current-node-id")
        return true;
    return false;
}

L2Vpnv2::Standby::G8032::G8032()
    :
    g8032_rings(std::make_shared<L2Vpnv2::Standby::G8032::G8032Rings>())
{
    g8032_rings->parent = this;

    yang_name = "g8032"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::G8032::~G8032()
{
}

bool L2Vpnv2::Standby::G8032::has_data() const
{
    return (g8032_rings !=  nullptr && g8032_rings->has_data());
}

bool L2Vpnv2::Standby::G8032::has_operation() const
{
    return is_set(yfilter)
	|| (g8032_rings !=  nullptr && g8032_rings->has_operation());
}

std::string L2Vpnv2::Standby::G8032::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::G8032::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "g8032";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::G8032::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::G8032::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "g8032-rings")
    {
        if(g8032_rings == nullptr)
        {
            g8032_rings = std::make_shared<L2Vpnv2::Standby::G8032::G8032Rings>();
        }
        return g8032_rings;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::G8032::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(g8032_rings != nullptr)
    {
        children["g8032-rings"] = g8032_rings;
    }

    return children;
}

void L2Vpnv2::Standby::G8032::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Standby::G8032::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Standby::G8032::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "g8032-rings")
        return true;
    return false;
}

L2Vpnv2::Standby::G8032::G8032Rings::G8032Rings()
{

    yang_name = "g8032-rings"; yang_parent_name = "g8032"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::G8032::G8032Rings::~G8032Rings()
{
}

bool L2Vpnv2::Standby::G8032::G8032Rings::has_data() const
{
    for (std::size_t index=0; index<g8032_ring.size(); index++)
    {
        if(g8032_ring[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpnv2::Standby::G8032::G8032Rings::has_operation() const
{
    for (std::size_t index=0; index<g8032_ring.size(); index++)
    {
        if(g8032_ring[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpnv2::Standby::G8032::G8032Rings::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/g8032/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::G8032::G8032Rings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "g8032-rings";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::G8032::G8032Rings::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::G8032::G8032Rings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "g8032-ring")
    {
        auto c = std::make_shared<L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring>();
        c->parent = this;
        g8032_ring.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::G8032::G8032Rings::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : g8032_ring)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2Vpnv2::Standby::G8032::G8032Rings::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Standby::G8032::G8032Rings::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Standby::G8032::G8032Rings::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "g8032-ring")
        return true;
    return false;
}

L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032Ring()
    :
    ring_name{YType::str, "ring-name"}
    	,
    g8032_ring_detail(std::make_shared<L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingDetail>())
	,g8032_ring_instance_summaries(std::make_shared<L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceSummaries>())
	,g8032_ring_summary(std::make_shared<L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingSummary>())
	,g8032_ring_instance_details(std::make_shared<L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceDetails>())
{
    g8032_ring_detail->parent = this;
    g8032_ring_instance_summaries->parent = this;
    g8032_ring_summary->parent = this;
    g8032_ring_instance_details->parent = this;

    yang_name = "g8032-ring"; yang_parent_name = "g8032-rings"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::~G8032Ring()
{
}

bool L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::has_data() const
{
    return ring_name.is_set
	|| (g8032_ring_detail !=  nullptr && g8032_ring_detail->has_data())
	|| (g8032_ring_instance_summaries !=  nullptr && g8032_ring_instance_summaries->has_data())
	|| (g8032_ring_summary !=  nullptr && g8032_ring_summary->has_data())
	|| (g8032_ring_instance_details !=  nullptr && g8032_ring_instance_details->has_data());
}

bool L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ring_name.yfilter)
	|| (g8032_ring_detail !=  nullptr && g8032_ring_detail->has_operation())
	|| (g8032_ring_instance_summaries !=  nullptr && g8032_ring_instance_summaries->has_operation())
	|| (g8032_ring_summary !=  nullptr && g8032_ring_summary->has_operation())
	|| (g8032_ring_instance_details !=  nullptr && g8032_ring_instance_details->has_operation());
}

std::string L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/g8032/g8032-rings/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "g8032-ring" <<"[ring-name='" <<ring_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ring_name.is_set || is_set(ring_name.yfilter)) leaf_name_data.push_back(ring_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "g8032-ring-detail")
    {
        if(g8032_ring_detail == nullptr)
        {
            g8032_ring_detail = std::make_shared<L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingDetail>();
        }
        return g8032_ring_detail;
    }

    if(child_yang_name == "g8032-ring-instance-summaries")
    {
        if(g8032_ring_instance_summaries == nullptr)
        {
            g8032_ring_instance_summaries = std::make_shared<L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceSummaries>();
        }
        return g8032_ring_instance_summaries;
    }

    if(child_yang_name == "g8032-ring-summary")
    {
        if(g8032_ring_summary == nullptr)
        {
            g8032_ring_summary = std::make_shared<L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingSummary>();
        }
        return g8032_ring_summary;
    }

    if(child_yang_name == "g8032-ring-instance-details")
    {
        if(g8032_ring_instance_details == nullptr)
        {
            g8032_ring_instance_details = std::make_shared<L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceDetails>();
        }
        return g8032_ring_instance_details;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(g8032_ring_detail != nullptr)
    {
        children["g8032-ring-detail"] = g8032_ring_detail;
    }

    if(g8032_ring_instance_summaries != nullptr)
    {
        children["g8032-ring-instance-summaries"] = g8032_ring_instance_summaries;
    }

    if(g8032_ring_summary != nullptr)
    {
        children["g8032-ring-summary"] = g8032_ring_summary;
    }

    if(g8032_ring_instance_details != nullptr)
    {
        children["g8032-ring-instance-details"] = g8032_ring_instance_details;
    }

    return children;
}

void L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ring-name")
    {
        ring_name = value;
        ring_name.value_namespace = name_space;
        ring_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ring-name")
    {
        ring_name.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "g8032-ring-detail" || name == "g8032-ring-instance-summaries" || name == "g8032-ring-summary" || name == "g8032-ring-instance-details" || name == "ring-name")
        return true;
    return false;
}

L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingDetail::G8032RingDetail()
    :
    ring_name{YType::str, "ring-name"},
    port0{YType::str, "port0"},
    port1{YType::str, "port1"},
    monitor0{YType::str, "monitor0"},
    monitor1{YType::str, "monitor1"},
    is_provider_bridge{YType::boolean, "is-provider-bridge"},
    is_open_ring{YType::boolean, "is-open-ring"},
    tcn_propagation{YType::boolean, "tcn-propagation"}
{

    yang_name = "g8032-ring-detail"; yang_parent_name = "g8032-ring"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingDetail::~G8032RingDetail()
{
}

bool L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingDetail::has_data() const
{
    for (std::size_t index=0; index<excluded_vlan_id.size(); index++)
    {
        if(excluded_vlan_id[index]->has_data())
            return true;
    }
    return ring_name.is_set
	|| port0.is_set
	|| port1.is_set
	|| monitor0.is_set
	|| monitor1.is_set
	|| is_provider_bridge.is_set
	|| is_open_ring.is_set
	|| tcn_propagation.is_set;
}

bool L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingDetail::has_operation() const
{
    for (std::size_t index=0; index<excluded_vlan_id.size(); index++)
    {
        if(excluded_vlan_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ring_name.yfilter)
	|| ydk::is_set(port0.yfilter)
	|| ydk::is_set(port1.yfilter)
	|| ydk::is_set(monitor0.yfilter)
	|| ydk::is_set(monitor1.yfilter)
	|| ydk::is_set(is_provider_bridge.yfilter)
	|| ydk::is_set(is_open_ring.yfilter)
	|| ydk::is_set(tcn_propagation.yfilter);
}

std::string L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "g8032-ring-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ring_name.is_set || is_set(ring_name.yfilter)) leaf_name_data.push_back(ring_name.get_name_leafdata());
    if (port0.is_set || is_set(port0.yfilter)) leaf_name_data.push_back(port0.get_name_leafdata());
    if (port1.is_set || is_set(port1.yfilter)) leaf_name_data.push_back(port1.get_name_leafdata());
    if (monitor0.is_set || is_set(monitor0.yfilter)) leaf_name_data.push_back(monitor0.get_name_leafdata());
    if (monitor1.is_set || is_set(monitor1.yfilter)) leaf_name_data.push_back(monitor1.get_name_leafdata());
    if (is_provider_bridge.is_set || is_set(is_provider_bridge.yfilter)) leaf_name_data.push_back(is_provider_bridge.get_name_leafdata());
    if (is_open_ring.is_set || is_set(is_open_ring.yfilter)) leaf_name_data.push_back(is_open_ring.get_name_leafdata());
    if (tcn_propagation.is_set || is_set(tcn_propagation.yfilter)) leaf_name_data.push_back(tcn_propagation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "excluded-vlan-id")
    {
        auto c = std::make_shared<L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingDetail::ExcludedVlanId>();
        c->parent = this;
        excluded_vlan_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : excluded_vlan_id)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ring-name")
    {
        ring_name = value;
        ring_name.value_namespace = name_space;
        ring_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port0")
    {
        port0 = value;
        port0.value_namespace = name_space;
        port0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port1")
    {
        port1 = value;
        port1.value_namespace = name_space;
        port1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "monitor0")
    {
        monitor0 = value;
        monitor0.value_namespace = name_space;
        monitor0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "monitor1")
    {
        monitor1 = value;
        monitor1.value_namespace = name_space;
        monitor1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-provider-bridge")
    {
        is_provider_bridge = value;
        is_provider_bridge.value_namespace = name_space;
        is_provider_bridge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-open-ring")
    {
        is_open_ring = value;
        is_open_ring.value_namespace = name_space;
        is_open_ring.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcn-propagation")
    {
        tcn_propagation = value;
        tcn_propagation.value_namespace = name_space;
        tcn_propagation.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ring-name")
    {
        ring_name.yfilter = yfilter;
    }
    if(value_path == "port0")
    {
        port0.yfilter = yfilter;
    }
    if(value_path == "port1")
    {
        port1.yfilter = yfilter;
    }
    if(value_path == "monitor0")
    {
        monitor0.yfilter = yfilter;
    }
    if(value_path == "monitor1")
    {
        monitor1.yfilter = yfilter;
    }
    if(value_path == "is-provider-bridge")
    {
        is_provider_bridge.yfilter = yfilter;
    }
    if(value_path == "is-open-ring")
    {
        is_open_ring.yfilter = yfilter;
    }
    if(value_path == "tcn-propagation")
    {
        tcn_propagation.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "excluded-vlan-id" || name == "ring-name" || name == "port0" || name == "port1" || name == "monitor0" || name == "monitor1" || name == "is-provider-bridge" || name == "is-open-ring" || name == "tcn-propagation")
        return true;
    return false;
}

L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingDetail::ExcludedVlanId::ExcludedVlanId()
    :
    entry{YType::uint16, "entry"}
{

    yang_name = "excluded-vlan-id"; yang_parent_name = "g8032-ring-detail"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingDetail::ExcludedVlanId::~ExcludedVlanId()
{
}

bool L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingDetail::ExcludedVlanId::has_data() const
{
    return entry.is_set;
}

bool L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingDetail::ExcludedVlanId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingDetail::ExcludedVlanId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "excluded-vlan-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingDetail::ExcludedVlanId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingDetail::ExcludedVlanId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingDetail::ExcludedVlanId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingDetail::ExcludedVlanId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingDetail::ExcludedVlanId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingDetail::ExcludedVlanId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceSummaries::G8032RingInstanceSummaries()
{

    yang_name = "g8032-ring-instance-summaries"; yang_parent_name = "g8032-ring"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceSummaries::~G8032RingInstanceSummaries()
{
}

bool L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceSummaries::has_data() const
{
    for (std::size_t index=0; index<g8032_ring_instance_summary.size(); index++)
    {
        if(g8032_ring_instance_summary[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceSummaries::has_operation() const
{
    for (std::size_t index=0; index<g8032_ring_instance_summary.size(); index++)
    {
        if(g8032_ring_instance_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "g8032-ring-instance-summaries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceSummaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "g8032-ring-instance-summary")
    {
        auto c = std::make_shared<L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceSummaries::G8032RingInstanceSummary>();
        c->parent = this;
        g8032_ring_instance_summary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : g8032_ring_instance_summary)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceSummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceSummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceSummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "g8032-ring-instance-summary")
        return true;
    return false;
}

L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceSummaries::G8032RingInstanceSummary::G8032RingInstanceSummary()
    :
    instance{YType::int32, "instance"},
    ring_instance{YType::uint32, "ring-instance"},
    aps_port0{YType::str, "aps-port0"},
    aps_port1{YType::str, "aps-port1"},
    config_state{YType::boolean, "config-state"}
{

    yang_name = "g8032-ring-instance-summary"; yang_parent_name = "g8032-ring-instance-summaries"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceSummaries::G8032RingInstanceSummary::~G8032RingInstanceSummary()
{
}

bool L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceSummaries::G8032RingInstanceSummary::has_data() const
{
    for (std::size_t index=0; index<included_vlan_id.size(); index++)
    {
        if(included_vlan_id[index]->has_data())
            return true;
    }
    return instance.is_set
	|| ring_instance.is_set
	|| aps_port0.is_set
	|| aps_port1.is_set
	|| config_state.is_set;
}

bool L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceSummaries::G8032RingInstanceSummary::has_operation() const
{
    for (std::size_t index=0; index<included_vlan_id.size(); index++)
    {
        if(included_vlan_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(ring_instance.yfilter)
	|| ydk::is_set(aps_port0.yfilter)
	|| ydk::is_set(aps_port1.yfilter)
	|| ydk::is_set(config_state.yfilter);
}

std::string L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceSummaries::G8032RingInstanceSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "g8032-ring-instance-summary" <<"[instance='" <<instance <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceSummaries::G8032RingInstanceSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (ring_instance.is_set || is_set(ring_instance.yfilter)) leaf_name_data.push_back(ring_instance.get_name_leafdata());
    if (aps_port0.is_set || is_set(aps_port0.yfilter)) leaf_name_data.push_back(aps_port0.get_name_leafdata());
    if (aps_port1.is_set || is_set(aps_port1.yfilter)) leaf_name_data.push_back(aps_port1.get_name_leafdata());
    if (config_state.is_set || is_set(config_state.yfilter)) leaf_name_data.push_back(config_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceSummaries::G8032RingInstanceSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "included-vlan-id")
    {
        auto c = std::make_shared<L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceSummaries::G8032RingInstanceSummary::IncludedVlanId>();
        c->parent = this;
        included_vlan_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceSummaries::G8032RingInstanceSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : included_vlan_id)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceSummaries::G8032RingInstanceSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ring-instance")
    {
        ring_instance = value;
        ring_instance.value_namespace = name_space;
        ring_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aps-port0")
    {
        aps_port0 = value;
        aps_port0.value_namespace = name_space;
        aps_port0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aps-port1")
    {
        aps_port1 = value;
        aps_port1.value_namespace = name_space;
        aps_port1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-state")
    {
        config_state = value;
        config_state.value_namespace = name_space;
        config_state.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceSummaries::G8032RingInstanceSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "ring-instance")
    {
        ring_instance.yfilter = yfilter;
    }
    if(value_path == "aps-port0")
    {
        aps_port0.yfilter = yfilter;
    }
    if(value_path == "aps-port1")
    {
        aps_port1.yfilter = yfilter;
    }
    if(value_path == "config-state")
    {
        config_state.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceSummaries::G8032RingInstanceSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "included-vlan-id" || name == "instance" || name == "ring-instance" || name == "aps-port0" || name == "aps-port1" || name == "config-state")
        return true;
    return false;
}

L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceSummaries::G8032RingInstanceSummary::IncludedVlanId::IncludedVlanId()
    :
    entry{YType::uint16, "entry"}
{

    yang_name = "included-vlan-id"; yang_parent_name = "g8032-ring-instance-summary"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceSummaries::G8032RingInstanceSummary::IncludedVlanId::~IncludedVlanId()
{
}

bool L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceSummaries::G8032RingInstanceSummary::IncludedVlanId::has_data() const
{
    return entry.is_set;
}

bool L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceSummaries::G8032RingInstanceSummary::IncludedVlanId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceSummaries::G8032RingInstanceSummary::IncludedVlanId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "included-vlan-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceSummaries::G8032RingInstanceSummary::IncludedVlanId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceSummaries::G8032RingInstanceSummary::IncludedVlanId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceSummaries::G8032RingInstanceSummary::IncludedVlanId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceSummaries::G8032RingInstanceSummary::IncludedVlanId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceSummaries::G8032RingInstanceSummary::IncludedVlanId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceSummaries::G8032RingInstanceSummary::IncludedVlanId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingSummary::G8032RingSummary()
    :
    ring_name{YType::str, "ring-name"},
    port0{YType::str, "port0"},
    port1{YType::str, "port1"}
{

    yang_name = "g8032-ring-summary"; yang_parent_name = "g8032-ring"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingSummary::~G8032RingSummary()
{
}

bool L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingSummary::has_data() const
{
    return ring_name.is_set
	|| port0.is_set
	|| port1.is_set;
}

bool L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ring_name.yfilter)
	|| ydk::is_set(port0.yfilter)
	|| ydk::is_set(port1.yfilter);
}

std::string L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "g8032-ring-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ring_name.is_set || is_set(ring_name.yfilter)) leaf_name_data.push_back(ring_name.get_name_leafdata());
    if (port0.is_set || is_set(port0.yfilter)) leaf_name_data.push_back(port0.get_name_leafdata());
    if (port1.is_set || is_set(port1.yfilter)) leaf_name_data.push_back(port1.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ring-name")
    {
        ring_name = value;
        ring_name.value_namespace = name_space;
        ring_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port0")
    {
        port0 = value;
        port0.value_namespace = name_space;
        port0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port1")
    {
        port1 = value;
        port1.value_namespace = name_space;
        port1.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ring-name")
    {
        ring_name.yfilter = yfilter;
    }
    if(value_path == "port0")
    {
        port0.yfilter = yfilter;
    }
    if(value_path == "port1")
    {
        port1.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ring-name" || name == "port0" || name == "port1")
        return true;
    return false;
}

L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceDetails::G8032RingInstanceDetails()
{

    yang_name = "g8032-ring-instance-details"; yang_parent_name = "g8032-ring"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceDetails::~G8032RingInstanceDetails()
{
}

bool L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceDetails::has_data() const
{
    for (std::size_t index=0; index<g8032_ring_instance_detail.size(); index++)
    {
        if(g8032_ring_instance_detail[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceDetails::has_operation() const
{
    for (std::size_t index=0; index<g8032_ring_instance_detail.size(); index++)
    {
        if(g8032_ring_instance_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "g8032-ring-instance-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "g8032-ring-instance-detail")
    {
        auto c = std::make_shared<L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceDetails::G8032RingInstanceDetail>();
        c->parent = this;
        g8032_ring_instance_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : g8032_ring_instance_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "g8032-ring-instance-detail")
        return true;
    return false;
}

L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceDetails::G8032RingInstanceDetail::G8032RingInstanceDetail()
    :
    instance{YType::int32, "instance"},
    ring_instance{YType::uint32, "ring-instance"},
    ring_description{YType::str, "ring-description"},
    ring_profile{YType::str, "ring-profile"},
    rpl{YType::enumeration, "rpl"},
    aps_port0{YType::str, "aps-port0"},
    aps_port1{YType::str, "aps-port1"},
    config_state{YType::boolean, "config-state"},
    unresolved_reason{YType::enumeration, "unresolved-reason"},
    aps_channel_level{YType::uint32, "aps-channel-level"}
{

    yang_name = "g8032-ring-instance-detail"; yang_parent_name = "g8032-ring-instance-details"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceDetails::G8032RingInstanceDetail::~G8032RingInstanceDetail()
{
}

bool L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceDetails::G8032RingInstanceDetail::has_data() const
{
    for (std::size_t index=0; index<included_vlan_id.size(); index++)
    {
        if(included_vlan_id[index]->has_data())
            return true;
    }
    return instance.is_set
	|| ring_instance.is_set
	|| ring_description.is_set
	|| ring_profile.is_set
	|| rpl.is_set
	|| aps_port0.is_set
	|| aps_port1.is_set
	|| config_state.is_set
	|| unresolved_reason.is_set
	|| aps_channel_level.is_set;
}

bool L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceDetails::G8032RingInstanceDetail::has_operation() const
{
    for (std::size_t index=0; index<included_vlan_id.size(); index++)
    {
        if(included_vlan_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(ring_instance.yfilter)
	|| ydk::is_set(ring_description.yfilter)
	|| ydk::is_set(ring_profile.yfilter)
	|| ydk::is_set(rpl.yfilter)
	|| ydk::is_set(aps_port0.yfilter)
	|| ydk::is_set(aps_port1.yfilter)
	|| ydk::is_set(config_state.yfilter)
	|| ydk::is_set(unresolved_reason.yfilter)
	|| ydk::is_set(aps_channel_level.yfilter);
}

std::string L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceDetails::G8032RingInstanceDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "g8032-ring-instance-detail" <<"[instance='" <<instance <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceDetails::G8032RingInstanceDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (ring_instance.is_set || is_set(ring_instance.yfilter)) leaf_name_data.push_back(ring_instance.get_name_leafdata());
    if (ring_description.is_set || is_set(ring_description.yfilter)) leaf_name_data.push_back(ring_description.get_name_leafdata());
    if (ring_profile.is_set || is_set(ring_profile.yfilter)) leaf_name_data.push_back(ring_profile.get_name_leafdata());
    if (rpl.is_set || is_set(rpl.yfilter)) leaf_name_data.push_back(rpl.get_name_leafdata());
    if (aps_port0.is_set || is_set(aps_port0.yfilter)) leaf_name_data.push_back(aps_port0.get_name_leafdata());
    if (aps_port1.is_set || is_set(aps_port1.yfilter)) leaf_name_data.push_back(aps_port1.get_name_leafdata());
    if (config_state.is_set || is_set(config_state.yfilter)) leaf_name_data.push_back(config_state.get_name_leafdata());
    if (unresolved_reason.is_set || is_set(unresolved_reason.yfilter)) leaf_name_data.push_back(unresolved_reason.get_name_leafdata());
    if (aps_channel_level.is_set || is_set(aps_channel_level.yfilter)) leaf_name_data.push_back(aps_channel_level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceDetails::G8032RingInstanceDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "included-vlan-id")
    {
        auto c = std::make_shared<L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceDetails::G8032RingInstanceDetail::IncludedVlanId>();
        c->parent = this;
        included_vlan_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceDetails::G8032RingInstanceDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : included_vlan_id)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceDetails::G8032RingInstanceDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ring-instance")
    {
        ring_instance = value;
        ring_instance.value_namespace = name_space;
        ring_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ring-description")
    {
        ring_description = value;
        ring_description.value_namespace = name_space;
        ring_description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ring-profile")
    {
        ring_profile = value;
        ring_profile.value_namespace = name_space;
        ring_profile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpl")
    {
        rpl = value;
        rpl.value_namespace = name_space;
        rpl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aps-port0")
    {
        aps_port0 = value;
        aps_port0.value_namespace = name_space;
        aps_port0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aps-port1")
    {
        aps_port1 = value;
        aps_port1.value_namespace = name_space;
        aps_port1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-state")
    {
        config_state = value;
        config_state.value_namespace = name_space;
        config_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unresolved-reason")
    {
        unresolved_reason = value;
        unresolved_reason.value_namespace = name_space;
        unresolved_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aps-channel-level")
    {
        aps_channel_level = value;
        aps_channel_level.value_namespace = name_space;
        aps_channel_level.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceDetails::G8032RingInstanceDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "ring-instance")
    {
        ring_instance.yfilter = yfilter;
    }
    if(value_path == "ring-description")
    {
        ring_description.yfilter = yfilter;
    }
    if(value_path == "ring-profile")
    {
        ring_profile.yfilter = yfilter;
    }
    if(value_path == "rpl")
    {
        rpl.yfilter = yfilter;
    }
    if(value_path == "aps-port0")
    {
        aps_port0.yfilter = yfilter;
    }
    if(value_path == "aps-port1")
    {
        aps_port1.yfilter = yfilter;
    }
    if(value_path == "config-state")
    {
        config_state.yfilter = yfilter;
    }
    if(value_path == "unresolved-reason")
    {
        unresolved_reason.yfilter = yfilter;
    }
    if(value_path == "aps-channel-level")
    {
        aps_channel_level.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceDetails::G8032RingInstanceDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "included-vlan-id" || name == "instance" || name == "ring-instance" || name == "ring-description" || name == "ring-profile" || name == "rpl" || name == "aps-port0" || name == "aps-port1" || name == "config-state" || name == "unresolved-reason" || name == "aps-channel-level")
        return true;
    return false;
}

L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceDetails::G8032RingInstanceDetail::IncludedVlanId::IncludedVlanId()
    :
    entry{YType::uint16, "entry"}
{

    yang_name = "included-vlan-id"; yang_parent_name = "g8032-ring-instance-detail"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceDetails::G8032RingInstanceDetail::IncludedVlanId::~IncludedVlanId()
{
}

bool L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceDetails::G8032RingInstanceDetail::IncludedVlanId::has_data() const
{
    return entry.is_set;
}

bool L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceDetails::G8032RingInstanceDetail::IncludedVlanId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceDetails::G8032RingInstanceDetail::IncludedVlanId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "included-vlan-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceDetails::G8032RingInstanceDetail::IncludedVlanId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceDetails::G8032RingInstanceDetail::IncludedVlanId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceDetails::G8032RingInstanceDetail::IncludedVlanId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceDetails::G8032RingInstanceDetail::IncludedVlanId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceDetails::G8032RingInstanceDetail::IncludedVlanId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceDetails::G8032RingInstanceDetail::IncludedVlanId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

L2Vpnv2::Standby::PseudowireClasses::PseudowireClasses()
{

    yang_name = "pseudowire-classes"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::PseudowireClasses::~PseudowireClasses()
{
}

bool L2Vpnv2::Standby::PseudowireClasses::has_data() const
{
    for (std::size_t index=0; index<pseudowire_class.size(); index++)
    {
        if(pseudowire_class[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpnv2::Standby::PseudowireClasses::has_operation() const
{
    for (std::size_t index=0; index<pseudowire_class.size(); index++)
    {
        if(pseudowire_class[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpnv2::Standby::PseudowireClasses::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::PseudowireClasses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-classes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::PseudowireClasses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::PseudowireClasses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pseudowire-class")
    {
        auto c = std::make_shared<L2Vpnv2::Standby::PseudowireClasses::PseudowireClass>();
        c->parent = this;
        pseudowire_class.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::PseudowireClasses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : pseudowire_class)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2Vpnv2::Standby::PseudowireClasses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Standby::PseudowireClasses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Standby::PseudowireClasses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pseudowire-class")
        return true;
    return false;
}

L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::PseudowireClass()
    :
    pseudowire_class_name{YType::str, "pseudowire-class-name"},
    pw_class_name{YType::str, "pw-class-name"},
    control_word{YType::enumeration, "control-word"},
    transport_mode{YType::enumeration, "transport-mode"},
    sequencing_type{YType::enumeration, "sequencing-type"},
    resync_enabled{YType::boolean, "resync-enabled"},
    resync_threshold{YType::uint32, "resync-threshold"},
    protocol{YType::enumeration, "protocol"},
    disable_never{YType::boolean, "disable-never"},
    disable_delay{YType::uint8, "disable-delay"},
    backup_mac_withdraw{YType::boolean, "backup-mac-withdraw"},
    tag_rewrite{YType::uint16, "tag-rewrite"},
    preferred_path_disable_fallback{YType::boolean, "preferred-path-disable-fallback"},
    load_balance{YType::enumeration, "load-balance"},
    pw_flow_label_type_cfg{YType::enumeration, "pw-flow-label-type-cfg"},
    pw_flow_label_code17_disabled{YType::boolean, "pw-flow-label-code17-disabled"},
    is_flow_label_static{YType::boolean, "is-flow-label-static"}
    	,
    encapsulation_info(std::make_shared<L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::EncapsulationInfo>())
	,preferred_path(std::make_shared<L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::PreferredPath>())
	,local_source_address(std::make_shared<L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::LocalSourceAddress>())
{
    encapsulation_info->parent = this;
    preferred_path->parent = this;
    local_source_address->parent = this;

    yang_name = "pseudowire-class"; yang_parent_name = "pseudowire-classes"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::~PseudowireClass()
{
}

bool L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::has_data() const
{
    return pseudowire_class_name.is_set
	|| pw_class_name.is_set
	|| control_word.is_set
	|| transport_mode.is_set
	|| sequencing_type.is_set
	|| resync_enabled.is_set
	|| resync_threshold.is_set
	|| protocol.is_set
	|| disable_never.is_set
	|| disable_delay.is_set
	|| backup_mac_withdraw.is_set
	|| tag_rewrite.is_set
	|| preferred_path_disable_fallback.is_set
	|| load_balance.is_set
	|| pw_flow_label_type_cfg.is_set
	|| pw_flow_label_code17_disabled.is_set
	|| is_flow_label_static.is_set
	|| (encapsulation_info !=  nullptr && encapsulation_info->has_data())
	|| (preferred_path !=  nullptr && preferred_path->has_data())
	|| (local_source_address !=  nullptr && local_source_address->has_data());
}

bool L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pseudowire_class_name.yfilter)
	|| ydk::is_set(pw_class_name.yfilter)
	|| ydk::is_set(control_word.yfilter)
	|| ydk::is_set(transport_mode.yfilter)
	|| ydk::is_set(sequencing_type.yfilter)
	|| ydk::is_set(resync_enabled.yfilter)
	|| ydk::is_set(resync_threshold.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(disable_never.yfilter)
	|| ydk::is_set(disable_delay.yfilter)
	|| ydk::is_set(backup_mac_withdraw.yfilter)
	|| ydk::is_set(tag_rewrite.yfilter)
	|| ydk::is_set(preferred_path_disable_fallback.yfilter)
	|| ydk::is_set(load_balance.yfilter)
	|| ydk::is_set(pw_flow_label_type_cfg.yfilter)
	|| ydk::is_set(pw_flow_label_code17_disabled.yfilter)
	|| ydk::is_set(is_flow_label_static.yfilter)
	|| (encapsulation_info !=  nullptr && encapsulation_info->has_operation())
	|| (preferred_path !=  nullptr && preferred_path->has_operation())
	|| (local_source_address !=  nullptr && local_source_address->has_operation());
}

std::string L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/pseudowire-classes/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-class" <<"[pseudowire-class-name='" <<pseudowire_class_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pseudowire_class_name.is_set || is_set(pseudowire_class_name.yfilter)) leaf_name_data.push_back(pseudowire_class_name.get_name_leafdata());
    if (pw_class_name.is_set || is_set(pw_class_name.yfilter)) leaf_name_data.push_back(pw_class_name.get_name_leafdata());
    if (control_word.is_set || is_set(control_word.yfilter)) leaf_name_data.push_back(control_word.get_name_leafdata());
    if (transport_mode.is_set || is_set(transport_mode.yfilter)) leaf_name_data.push_back(transport_mode.get_name_leafdata());
    if (sequencing_type.is_set || is_set(sequencing_type.yfilter)) leaf_name_data.push_back(sequencing_type.get_name_leafdata());
    if (resync_enabled.is_set || is_set(resync_enabled.yfilter)) leaf_name_data.push_back(resync_enabled.get_name_leafdata());
    if (resync_threshold.is_set || is_set(resync_threshold.yfilter)) leaf_name_data.push_back(resync_threshold.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (disable_never.is_set || is_set(disable_never.yfilter)) leaf_name_data.push_back(disable_never.get_name_leafdata());
    if (disable_delay.is_set || is_set(disable_delay.yfilter)) leaf_name_data.push_back(disable_delay.get_name_leafdata());
    if (backup_mac_withdraw.is_set || is_set(backup_mac_withdraw.yfilter)) leaf_name_data.push_back(backup_mac_withdraw.get_name_leafdata());
    if (tag_rewrite.is_set || is_set(tag_rewrite.yfilter)) leaf_name_data.push_back(tag_rewrite.get_name_leafdata());
    if (preferred_path_disable_fallback.is_set || is_set(preferred_path_disable_fallback.yfilter)) leaf_name_data.push_back(preferred_path_disable_fallback.get_name_leafdata());
    if (load_balance.is_set || is_set(load_balance.yfilter)) leaf_name_data.push_back(load_balance.get_name_leafdata());
    if (pw_flow_label_type_cfg.is_set || is_set(pw_flow_label_type_cfg.yfilter)) leaf_name_data.push_back(pw_flow_label_type_cfg.get_name_leafdata());
    if (pw_flow_label_code17_disabled.is_set || is_set(pw_flow_label_code17_disabled.yfilter)) leaf_name_data.push_back(pw_flow_label_code17_disabled.get_name_leafdata());
    if (is_flow_label_static.is_set || is_set(is_flow_label_static.yfilter)) leaf_name_data.push_back(is_flow_label_static.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encapsulation-info")
    {
        if(encapsulation_info == nullptr)
        {
            encapsulation_info = std::make_shared<L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::EncapsulationInfo>();
        }
        return encapsulation_info;
    }

    if(child_yang_name == "preferred-path")
    {
        if(preferred_path == nullptr)
        {
            preferred_path = std::make_shared<L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::PreferredPath>();
        }
        return preferred_path;
    }

    if(child_yang_name == "local-source-address")
    {
        if(local_source_address == nullptr)
        {
            local_source_address = std::make_shared<L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::LocalSourceAddress>();
        }
        return local_source_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(encapsulation_info != nullptr)
    {
        children["encapsulation-info"] = encapsulation_info;
    }

    if(preferred_path != nullptr)
    {
        children["preferred-path"] = preferred_path;
    }

    if(local_source_address != nullptr)
    {
        children["local-source-address"] = local_source_address;
    }

    return children;
}

void L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pseudowire-class-name")
    {
        pseudowire_class_name = value;
        pseudowire_class_name.value_namespace = name_space;
        pseudowire_class_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-class-name")
    {
        pw_class_name = value;
        pw_class_name.value_namespace = name_space;
        pw_class_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "control-word")
    {
        control_word = value;
        control_word.value_namespace = name_space;
        control_word.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transport-mode")
    {
        transport_mode = value;
        transport_mode.value_namespace = name_space;
        transport_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequencing-type")
    {
        sequencing_type = value;
        sequencing_type.value_namespace = name_space;
        sequencing_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resync-enabled")
    {
        resync_enabled = value;
        resync_enabled.value_namespace = name_space;
        resync_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resync-threshold")
    {
        resync_threshold = value;
        resync_threshold.value_namespace = name_space;
        resync_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable-never")
    {
        disable_never = value;
        disable_never.value_namespace = name_space;
        disable_never.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable-delay")
    {
        disable_delay = value;
        disable_delay.value_namespace = name_space;
        disable_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-mac-withdraw")
    {
        backup_mac_withdraw = value;
        backup_mac_withdraw.value_namespace = name_space;
        backup_mac_withdraw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag-rewrite")
    {
        tag_rewrite = value;
        tag_rewrite.value_namespace = name_space;
        tag_rewrite.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preferred-path-disable-fallback")
    {
        preferred_path_disable_fallback = value;
        preferred_path_disable_fallback.value_namespace = name_space;
        preferred_path_disable_fallback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-balance")
    {
        load_balance = value;
        load_balance.value_namespace = name_space;
        load_balance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-flow-label-type-cfg")
    {
        pw_flow_label_type_cfg = value;
        pw_flow_label_type_cfg.value_namespace = name_space;
        pw_flow_label_type_cfg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-flow-label-code17-disabled")
    {
        pw_flow_label_code17_disabled = value;
        pw_flow_label_code17_disabled.value_namespace = name_space;
        pw_flow_label_code17_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-flow-label-static")
    {
        is_flow_label_static = value;
        is_flow_label_static.value_namespace = name_space;
        is_flow_label_static.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pseudowire-class-name")
    {
        pseudowire_class_name.yfilter = yfilter;
    }
    if(value_path == "pw-class-name")
    {
        pw_class_name.yfilter = yfilter;
    }
    if(value_path == "control-word")
    {
        control_word.yfilter = yfilter;
    }
    if(value_path == "transport-mode")
    {
        transport_mode.yfilter = yfilter;
    }
    if(value_path == "sequencing-type")
    {
        sequencing_type.yfilter = yfilter;
    }
    if(value_path == "resync-enabled")
    {
        resync_enabled.yfilter = yfilter;
    }
    if(value_path == "resync-threshold")
    {
        resync_threshold.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "disable-never")
    {
        disable_never.yfilter = yfilter;
    }
    if(value_path == "disable-delay")
    {
        disable_delay.yfilter = yfilter;
    }
    if(value_path == "backup-mac-withdraw")
    {
        backup_mac_withdraw.yfilter = yfilter;
    }
    if(value_path == "tag-rewrite")
    {
        tag_rewrite.yfilter = yfilter;
    }
    if(value_path == "preferred-path-disable-fallback")
    {
        preferred_path_disable_fallback.yfilter = yfilter;
    }
    if(value_path == "load-balance")
    {
        load_balance.yfilter = yfilter;
    }
    if(value_path == "pw-flow-label-type-cfg")
    {
        pw_flow_label_type_cfg.yfilter = yfilter;
    }
    if(value_path == "pw-flow-label-code17-disabled")
    {
        pw_flow_label_code17_disabled.yfilter = yfilter;
    }
    if(value_path == "is-flow-label-static")
    {
        is_flow_label_static.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encapsulation-info" || name == "preferred-path" || name == "local-source-address" || name == "pseudowire-class-name" || name == "pw-class-name" || name == "control-word" || name == "transport-mode" || name == "sequencing-type" || name == "resync-enabled" || name == "resync-threshold" || name == "protocol" || name == "disable-never" || name == "disable-delay" || name == "backup-mac-withdraw" || name == "tag-rewrite" || name == "preferred-path-disable-fallback" || name == "load-balance" || name == "pw-flow-label-type-cfg" || name == "pw-flow-label-code17-disabled" || name == "is-flow-label-static")
        return true;
    return false;
}

L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::EncapsulationInfo::EncapsulationInfo()
    :
    encapsulation{YType::enumeration, "encapsulation"}
    	,
    l2tpv3(std::make_shared<L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::EncapsulationInfo::L2Tpv3>())
{
    l2tpv3->parent = this;

    yang_name = "encapsulation-info"; yang_parent_name = "pseudowire-class"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::EncapsulationInfo::~EncapsulationInfo()
{
}

bool L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::EncapsulationInfo::has_data() const
{
    return encapsulation.is_set
	|| (l2tpv3 !=  nullptr && l2tpv3->has_data());
}

bool L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::EncapsulationInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| (l2tpv3 !=  nullptr && l2tpv3->has_operation());
}

std::string L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::EncapsulationInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::EncapsulationInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::EncapsulationInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2tpv3")
    {
        if(l2tpv3 == nullptr)
        {
            l2tpv3 = std::make_shared<L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::EncapsulationInfo::L2Tpv3>();
        }
        return l2tpv3;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::EncapsulationInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(l2tpv3 != nullptr)
    {
        children["l2tpv3"] = l2tpv3;
    }

    return children;
}

void L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::EncapsulationInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::EncapsulationInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::EncapsulationInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2tpv3" || name == "encapsulation")
        return true;
    return false;
}

L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::EncapsulationInfo::L2Tpv3::L2Tpv3()
    :
    l2tp_class_name{YType::str, "l2tp-class-name"},
    ipv4_source_address{YType::str, "ipv4-source-address"},
    path_mtu_enabled{YType::boolean, "path-mtu-enabled"},
    path_mtu_max_value{YType::uint16, "path-mtu-max-value"},
    dont_fragment_bit{YType::boolean, "dont-fragment-bit"},
    tos_mode{YType::enumeration, "tos-mode"},
    tos{YType::uint8, "tos"},
    ttl{YType::uint8, "ttl"},
    cookie_size{YType::uint8, "cookie-size"}
{

    yang_name = "l2tpv3"; yang_parent_name = "encapsulation-info"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::EncapsulationInfo::L2Tpv3::~L2Tpv3()
{
}

bool L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::EncapsulationInfo::L2Tpv3::has_data() const
{
    return l2tp_class_name.is_set
	|| ipv4_source_address.is_set
	|| path_mtu_enabled.is_set
	|| path_mtu_max_value.is_set
	|| dont_fragment_bit.is_set
	|| tos_mode.is_set
	|| tos.is_set
	|| ttl.is_set
	|| cookie_size.is_set;
}

bool L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::EncapsulationInfo::L2Tpv3::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2tp_class_name.yfilter)
	|| ydk::is_set(ipv4_source_address.yfilter)
	|| ydk::is_set(path_mtu_enabled.yfilter)
	|| ydk::is_set(path_mtu_max_value.yfilter)
	|| ydk::is_set(dont_fragment_bit.yfilter)
	|| ydk::is_set(tos_mode.yfilter)
	|| ydk::is_set(tos.yfilter)
	|| ydk::is_set(ttl.yfilter)
	|| ydk::is_set(cookie_size.yfilter);
}

std::string L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::EncapsulationInfo::L2Tpv3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tpv3";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::EncapsulationInfo::L2Tpv3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2tp_class_name.is_set || is_set(l2tp_class_name.yfilter)) leaf_name_data.push_back(l2tp_class_name.get_name_leafdata());
    if (ipv4_source_address.is_set || is_set(ipv4_source_address.yfilter)) leaf_name_data.push_back(ipv4_source_address.get_name_leafdata());
    if (path_mtu_enabled.is_set || is_set(path_mtu_enabled.yfilter)) leaf_name_data.push_back(path_mtu_enabled.get_name_leafdata());
    if (path_mtu_max_value.is_set || is_set(path_mtu_max_value.yfilter)) leaf_name_data.push_back(path_mtu_max_value.get_name_leafdata());
    if (dont_fragment_bit.is_set || is_set(dont_fragment_bit.yfilter)) leaf_name_data.push_back(dont_fragment_bit.get_name_leafdata());
    if (tos_mode.is_set || is_set(tos_mode.yfilter)) leaf_name_data.push_back(tos_mode.get_name_leafdata());
    if (tos.is_set || is_set(tos.yfilter)) leaf_name_data.push_back(tos.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());
    if (cookie_size.is_set || is_set(cookie_size.yfilter)) leaf_name_data.push_back(cookie_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::EncapsulationInfo::L2Tpv3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::EncapsulationInfo::L2Tpv3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::EncapsulationInfo::L2Tpv3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2tp-class-name")
    {
        l2tp_class_name = value;
        l2tp_class_name.value_namespace = name_space;
        l2tp_class_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-source-address")
    {
        ipv4_source_address = value;
        ipv4_source_address.value_namespace = name_space;
        ipv4_source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-mtu-enabled")
    {
        path_mtu_enabled = value;
        path_mtu_enabled.value_namespace = name_space;
        path_mtu_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-mtu-max-value")
    {
        path_mtu_max_value = value;
        path_mtu_max_value.value_namespace = name_space;
        path_mtu_max_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dont-fragment-bit")
    {
        dont_fragment_bit = value;
        dont_fragment_bit.value_namespace = name_space;
        dont_fragment_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos-mode")
    {
        tos_mode = value;
        tos_mode.value_namespace = name_space;
        tos_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos")
    {
        tos = value;
        tos.value_namespace = name_space;
        tos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cookie-size")
    {
        cookie_size = value;
        cookie_size.value_namespace = name_space;
        cookie_size.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::EncapsulationInfo::L2Tpv3::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2tp-class-name")
    {
        l2tp_class_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-source-address")
    {
        ipv4_source_address.yfilter = yfilter;
    }
    if(value_path == "path-mtu-enabled")
    {
        path_mtu_enabled.yfilter = yfilter;
    }
    if(value_path == "path-mtu-max-value")
    {
        path_mtu_max_value.yfilter = yfilter;
    }
    if(value_path == "dont-fragment-bit")
    {
        dont_fragment_bit.yfilter = yfilter;
    }
    if(value_path == "tos-mode")
    {
        tos_mode.yfilter = yfilter;
    }
    if(value_path == "tos")
    {
        tos.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
    if(value_path == "cookie-size")
    {
        cookie_size.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::EncapsulationInfo::L2Tpv3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2tp-class-name" || name == "ipv4-source-address" || name == "path-mtu-enabled" || name == "path-mtu-max-value" || name == "dont-fragment-bit" || name == "tos-mode" || name == "tos" || name == "ttl" || name == "cookie-size")
        return true;
    return false;
}

L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::PreferredPath::PreferredPath()
    :
    option{YType::enumeration, "option"},
    next_hop_ip{YType::uint32, "next-hop-ip"},
    te_tunnel_interface_number{YType::uint32, "te-tunnel-interface-number"},
    ip_tunnel_interface_number{YType::uint32, "ip-tunnel-interface-number"},
    tp_tunnel_interface_number{YType::uint32, "tp-tunnel-interface-number"}
    	,
    srte_policy(std::make_shared<L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::PreferredPath::SrtePolicy>())
{
    srte_policy->parent = this;

    yang_name = "preferred-path"; yang_parent_name = "pseudowire-class"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::PreferredPath::~PreferredPath()
{
}

bool L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::PreferredPath::has_data() const
{
    return option.is_set
	|| next_hop_ip.is_set
	|| te_tunnel_interface_number.is_set
	|| ip_tunnel_interface_number.is_set
	|| tp_tunnel_interface_number.is_set
	|| (srte_policy !=  nullptr && srte_policy->has_data());
}

bool L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::PreferredPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(option.yfilter)
	|| ydk::is_set(next_hop_ip.yfilter)
	|| ydk::is_set(te_tunnel_interface_number.yfilter)
	|| ydk::is_set(ip_tunnel_interface_number.yfilter)
	|| ydk::is_set(tp_tunnel_interface_number.yfilter)
	|| (srte_policy !=  nullptr && srte_policy->has_operation());
}

std::string L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::PreferredPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preferred-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::PreferredPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (option.is_set || is_set(option.yfilter)) leaf_name_data.push_back(option.get_name_leafdata());
    if (next_hop_ip.is_set || is_set(next_hop_ip.yfilter)) leaf_name_data.push_back(next_hop_ip.get_name_leafdata());
    if (te_tunnel_interface_number.is_set || is_set(te_tunnel_interface_number.yfilter)) leaf_name_data.push_back(te_tunnel_interface_number.get_name_leafdata());
    if (ip_tunnel_interface_number.is_set || is_set(ip_tunnel_interface_number.yfilter)) leaf_name_data.push_back(ip_tunnel_interface_number.get_name_leafdata());
    if (tp_tunnel_interface_number.is_set || is_set(tp_tunnel_interface_number.yfilter)) leaf_name_data.push_back(tp_tunnel_interface_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::PreferredPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "srte-policy")
    {
        if(srte_policy == nullptr)
        {
            srte_policy = std::make_shared<L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::PreferredPath::SrtePolicy>();
        }
        return srte_policy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::PreferredPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(srte_policy != nullptr)
    {
        children["srte-policy"] = srte_policy;
    }

    return children;
}

void L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::PreferredPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "option")
    {
        option = value;
        option.value_namespace = name_space;
        option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-ip")
    {
        next_hop_ip = value;
        next_hop_ip.value_namespace = name_space;
        next_hop_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-tunnel-interface-number")
    {
        te_tunnel_interface_number = value;
        te_tunnel_interface_number.value_namespace = name_space;
        te_tunnel_interface_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-tunnel-interface-number")
    {
        ip_tunnel_interface_number = value;
        ip_tunnel_interface_number.value_namespace = name_space;
        ip_tunnel_interface_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tp-tunnel-interface-number")
    {
        tp_tunnel_interface_number = value;
        tp_tunnel_interface_number.value_namespace = name_space;
        tp_tunnel_interface_number.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::PreferredPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "option")
    {
        option.yfilter = yfilter;
    }
    if(value_path == "next-hop-ip")
    {
        next_hop_ip.yfilter = yfilter;
    }
    if(value_path == "te-tunnel-interface-number")
    {
        te_tunnel_interface_number.yfilter = yfilter;
    }
    if(value_path == "ip-tunnel-interface-number")
    {
        ip_tunnel_interface_number.yfilter = yfilter;
    }
    if(value_path == "tp-tunnel-interface-number")
    {
        tp_tunnel_interface_number.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::PreferredPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srte-policy" || name == "option" || name == "next-hop-ip" || name == "te-tunnel-interface-number" || name == "ip-tunnel-interface-number" || name == "tp-tunnel-interface-number")
        return true;
    return false;
}

L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::PreferredPath::SrtePolicy::SrtePolicy()
    :
    policy_name{YType::str, "policy-name"}
{

    yang_name = "srte-policy"; yang_parent_name = "preferred-path"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::PreferredPath::SrtePolicy::~SrtePolicy()
{
}

bool L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::PreferredPath::SrtePolicy::has_data() const
{
    return policy_name.is_set;
}

bool L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::PreferredPath::SrtePolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_name.yfilter);
}

std::string L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::PreferredPath::SrtePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srte-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::PreferredPath::SrtePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::PreferredPath::SrtePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::PreferredPath::SrtePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::PreferredPath::SrtePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::PreferredPath::SrtePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::PreferredPath::SrtePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-name")
        return true;
    return false;
}

L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::LocalSourceAddress::LocalSourceAddress()
    :
    configuration{YType::enumeration, "configuration"},
    address{YType::str, "address"}
{

    yang_name = "local-source-address"; yang_parent_name = "pseudowire-class"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::LocalSourceAddress::~LocalSourceAddress()
{
}

bool L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::LocalSourceAddress::has_data() const
{
    return configuration.is_set
	|| address.is_set;
}

bool L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::LocalSourceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(configuration.yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::LocalSourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-source-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::LocalSourceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configuration.is_set || is_set(configuration.yfilter)) leaf_name_data.push_back(configuration.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::LocalSourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::LocalSourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::LocalSourceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "configuration")
    {
        configuration = value;
        configuration.value_namespace = name_space;
        configuration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::LocalSourceAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "configuration")
    {
        configuration.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::LocalSourceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "configuration" || name == "address")
        return true;
    return false;
}

L2Vpnv2::Standby::L2VpnCollaborators::L2VpnCollaborators()
    :
    collaborator_statistics(std::make_shared<L2Vpnv2::Standby::L2VpnCollaborators::CollaboratorStatistics>())
{
    collaborator_statistics->parent = this;

    yang_name = "l2vpn-collaborators"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::L2VpnCollaborators::~L2VpnCollaborators()
{
}

bool L2Vpnv2::Standby::L2VpnCollaborators::has_data() const
{
    return (collaborator_statistics !=  nullptr && collaborator_statistics->has_data());
}

bool L2Vpnv2::Standby::L2VpnCollaborators::has_operation() const
{
    return is_set(yfilter)
	|| (collaborator_statistics !=  nullptr && collaborator_statistics->has_operation());
}

std::string L2Vpnv2::Standby::L2VpnCollaborators::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::L2VpnCollaborators::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-collaborators";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::L2VpnCollaborators::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::L2VpnCollaborators::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "collaborator-statistics")
    {
        if(collaborator_statistics == nullptr)
        {
            collaborator_statistics = std::make_shared<L2Vpnv2::Standby::L2VpnCollaborators::CollaboratorStatistics>();
        }
        return collaborator_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::L2VpnCollaborators::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(collaborator_statistics != nullptr)
    {
        children["collaborator-statistics"] = collaborator_statistics;
    }

    return children;
}

void L2Vpnv2::Standby::L2VpnCollaborators::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Standby::L2VpnCollaborators::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Standby::L2VpnCollaborators::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "collaborator-statistics")
        return true;
    return false;
}

L2Vpnv2::Standby::L2VpnCollaborators::CollaboratorStatistics::CollaboratorStatistics()
{

    yang_name = "collaborator-statistics"; yang_parent_name = "l2vpn-collaborators"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::L2VpnCollaborators::CollaboratorStatistics::~CollaboratorStatistics()
{
}

bool L2Vpnv2::Standby::L2VpnCollaborators::CollaboratorStatistics::has_data() const
{
    for (std::size_t index=0; index<count.size(); index++)
    {
        if(count[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpnv2::Standby::L2VpnCollaborators::CollaboratorStatistics::has_operation() const
{
    for (std::size_t index=0; index<count.size(); index++)
    {
        if(count[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpnv2::Standby::L2VpnCollaborators::CollaboratorStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/l2vpn-collaborators/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::L2VpnCollaborators::CollaboratorStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "collaborator-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::L2VpnCollaborators::CollaboratorStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::L2VpnCollaborators::CollaboratorStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "count")
    {
        auto c = std::make_shared<L2Vpnv2::Standby::L2VpnCollaborators::CollaboratorStatistics::Count>();
        c->parent = this;
        count.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::L2VpnCollaborators::CollaboratorStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : count)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2Vpnv2::Standby::L2VpnCollaborators::CollaboratorStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Standby::L2VpnCollaborators::CollaboratorStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Standby::L2VpnCollaborators::CollaboratorStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "count")
        return true;
    return false;
}

L2Vpnv2::Standby::L2VpnCollaborators::CollaboratorStatistics::Count::Count()
    :
    collaborator_name{YType::str, "collaborator-name"},
    up{YType::uint32, "up"},
    down{YType::uint32, "down"},
    is_up{YType::boolean, "is-up"}
{

    yang_name = "count"; yang_parent_name = "collaborator-statistics"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::L2VpnCollaborators::CollaboratorStatistics::Count::~Count()
{
}

bool L2Vpnv2::Standby::L2VpnCollaborators::CollaboratorStatistics::Count::has_data() const
{
    return collaborator_name.is_set
	|| up.is_set
	|| down.is_set
	|| is_up.is_set;
}

bool L2Vpnv2::Standby::L2VpnCollaborators::CollaboratorStatistics::Count::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(collaborator_name.yfilter)
	|| ydk::is_set(up.yfilter)
	|| ydk::is_set(down.yfilter)
	|| ydk::is_set(is_up.yfilter);
}

std::string L2Vpnv2::Standby::L2VpnCollaborators::CollaboratorStatistics::Count::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/l2vpn-collaborators/collaborator-statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::L2VpnCollaborators::CollaboratorStatistics::Count::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "count";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::L2VpnCollaborators::CollaboratorStatistics::Count::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (collaborator_name.is_set || is_set(collaborator_name.yfilter)) leaf_name_data.push_back(collaborator_name.get_name_leafdata());
    if (up.is_set || is_set(up.yfilter)) leaf_name_data.push_back(up.get_name_leafdata());
    if (down.is_set || is_set(down.yfilter)) leaf_name_data.push_back(down.get_name_leafdata());
    if (is_up.is_set || is_set(is_up.yfilter)) leaf_name_data.push_back(is_up.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::L2VpnCollaborators::CollaboratorStatistics::Count::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::L2VpnCollaborators::CollaboratorStatistics::Count::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::L2VpnCollaborators::CollaboratorStatistics::Count::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "collaborator-name")
    {
        collaborator_name = value;
        collaborator_name.value_namespace = name_space;
        collaborator_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up")
    {
        up = value;
        up.value_namespace = name_space;
        up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down")
    {
        down = value;
        down.value_namespace = name_space;
        down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-up")
    {
        is_up = value;
        is_up.value_namespace = name_space;
        is_up.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::L2VpnCollaborators::CollaboratorStatistics::Count::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "collaborator-name")
    {
        collaborator_name.yfilter = yfilter;
    }
    if(value_path == "up")
    {
        up.yfilter = yfilter;
    }
    if(value_path == "down")
    {
        down.yfilter = yfilter;
    }
    if(value_path == "is-up")
    {
        is_up.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::L2VpnCollaborators::CollaboratorStatistics::Count::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "collaborator-name" || name == "up" || name == "down" || name == "is-up")
        return true;
    return false;
}

L2Vpnv2::Standby::Mvrp::Mvrp()
    :
    mvrp_main_ports(std::make_shared<L2Vpnv2::Standby::Mvrp::MvrpMainPorts>())
{
    mvrp_main_ports->parent = this;

    yang_name = "mvrp"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::Mvrp::~Mvrp()
{
}

bool L2Vpnv2::Standby::Mvrp::has_data() const
{
    return (mvrp_main_ports !=  nullptr && mvrp_main_ports->has_data());
}

bool L2Vpnv2::Standby::Mvrp::has_operation() const
{
    return is_set(yfilter)
	|| (mvrp_main_ports !=  nullptr && mvrp_main_ports->has_operation());
}

std::string L2Vpnv2::Standby::Mvrp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::Mvrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mvrp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::Mvrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::Mvrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mvrp-main-ports")
    {
        if(mvrp_main_ports == nullptr)
        {
            mvrp_main_ports = std::make_shared<L2Vpnv2::Standby::Mvrp::MvrpMainPorts>();
        }
        return mvrp_main_ports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::Mvrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(mvrp_main_ports != nullptr)
    {
        children["mvrp-main-ports"] = mvrp_main_ports;
    }

    return children;
}

void L2Vpnv2::Standby::Mvrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Standby::Mvrp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Standby::Mvrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mvrp-main-ports")
        return true;
    return false;
}

L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPorts()
{

    yang_name = "mvrp-main-ports"; yang_parent_name = "mvrp"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::Mvrp::MvrpMainPorts::~MvrpMainPorts()
{
}

bool L2Vpnv2::Standby::Mvrp::MvrpMainPorts::has_data() const
{
    for (std::size_t index=0; index<mvrp_main_port.size(); index++)
    {
        if(mvrp_main_port[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpnv2::Standby::Mvrp::MvrpMainPorts::has_operation() const
{
    for (std::size_t index=0; index<mvrp_main_port.size(); index++)
    {
        if(mvrp_main_port[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpnv2::Standby::Mvrp::MvrpMainPorts::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/mvrp/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::Mvrp::MvrpMainPorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mvrp-main-ports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::Mvrp::MvrpMainPorts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::Mvrp::MvrpMainPorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mvrp-main-port")
    {
        auto c = std::make_shared<L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort>();
        c->parent = this;
        mvrp_main_port.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::Mvrp::MvrpMainPorts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : mvrp_main_port)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2Vpnv2::Standby::Mvrp::MvrpMainPorts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Standby::Mvrp::MvrpMainPorts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Standby::Mvrp::MvrpMainPorts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mvrp-main-port")
        return true;
    return false;
}

L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPort()
    :
    main_port_interface_name{YType::str, "main-port-interface-name"}
    	,
    mvrp_main_port_info(std::make_shared<L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo>())
	,mvrp_bridge_ports(std::make_shared<L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts>())
{
    mvrp_main_port_info->parent = this;
    mvrp_bridge_ports->parent = this;

    yang_name = "mvrp-main-port"; yang_parent_name = "mvrp-main-ports"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::~MvrpMainPort()
{
}

bool L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::has_data() const
{
    return main_port_interface_name.is_set
	|| (mvrp_main_port_info !=  nullptr && mvrp_main_port_info->has_data())
	|| (mvrp_bridge_ports !=  nullptr && mvrp_bridge_ports->has_data());
}

bool L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(main_port_interface_name.yfilter)
	|| (mvrp_main_port_info !=  nullptr && mvrp_main_port_info->has_operation())
	|| (mvrp_bridge_ports !=  nullptr && mvrp_bridge_ports->has_operation());
}

std::string L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/mvrp/mvrp-main-ports/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mvrp-main-port" <<"[main-port-interface-name='" <<main_port_interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (main_port_interface_name.is_set || is_set(main_port_interface_name.yfilter)) leaf_name_data.push_back(main_port_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mvrp-main-port-info")
    {
        if(mvrp_main_port_info == nullptr)
        {
            mvrp_main_port_info = std::make_shared<L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo>();
        }
        return mvrp_main_port_info;
    }

    if(child_yang_name == "mvrp-bridge-ports")
    {
        if(mvrp_bridge_ports == nullptr)
        {
            mvrp_bridge_ports = std::make_shared<L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts>();
        }
        return mvrp_bridge_ports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(mvrp_main_port_info != nullptr)
    {
        children["mvrp-main-port-info"] = mvrp_main_port_info;
    }

    if(mvrp_bridge_ports != nullptr)
    {
        children["mvrp-bridge-ports"] = mvrp_bridge_ports;
    }

    return children;
}

void L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "main-port-interface-name")
    {
        main_port_interface_name = value;
        main_port_interface_name.value_namespace = name_space;
        main_port_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "main-port-interface-name")
    {
        main_port_interface_name.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mvrp-main-port-info" || name == "mvrp-bridge-ports" || name == "main-port-interface-name")
        return true;
    return false;
}

L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::MvrpMainPortInfo()
    :
    main_port_interface_name{YType::str, "main-port-interface-name"},
    is_trunk{YType::boolean, "is-trunk"},
    is_default_encap{YType::boolean, "is-default-encap"},
    number_of_bridge_ports{YType::uint32, "number-of-bridge-ports"}
    	,
    default_bridge_port(std::make_shared<L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::DefaultBridgePort>())
{
    default_bridge_port->parent = this;

    yang_name = "mvrp-main-port-info"; yang_parent_name = "mvrp-main-port"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::~MvrpMainPortInfo()
{
}

bool L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::has_data() const
{
    return main_port_interface_name.is_set
	|| is_trunk.is_set
	|| is_default_encap.is_set
	|| number_of_bridge_ports.is_set
	|| (default_bridge_port !=  nullptr && default_bridge_port->has_data());
}

bool L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(main_port_interface_name.yfilter)
	|| ydk::is_set(is_trunk.yfilter)
	|| ydk::is_set(is_default_encap.yfilter)
	|| ydk::is_set(number_of_bridge_ports.yfilter)
	|| (default_bridge_port !=  nullptr && default_bridge_port->has_operation());
}

std::string L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mvrp-main-port-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (main_port_interface_name.is_set || is_set(main_port_interface_name.yfilter)) leaf_name_data.push_back(main_port_interface_name.get_name_leafdata());
    if (is_trunk.is_set || is_set(is_trunk.yfilter)) leaf_name_data.push_back(is_trunk.get_name_leafdata());
    if (is_default_encap.is_set || is_set(is_default_encap.yfilter)) leaf_name_data.push_back(is_default_encap.get_name_leafdata());
    if (number_of_bridge_ports.is_set || is_set(number_of_bridge_ports.yfilter)) leaf_name_data.push_back(number_of_bridge_ports.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default-bridge-port")
    {
        if(default_bridge_port == nullptr)
        {
            default_bridge_port = std::make_shared<L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::DefaultBridgePort>();
        }
        return default_bridge_port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(default_bridge_port != nullptr)
    {
        children["default-bridge-port"] = default_bridge_port;
    }

    return children;
}

void L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "main-port-interface-name")
    {
        main_port_interface_name = value;
        main_port_interface_name.value_namespace = name_space;
        main_port_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-trunk")
    {
        is_trunk = value;
        is_trunk.value_namespace = name_space;
        is_trunk.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-default-encap")
    {
        is_default_encap = value;
        is_default_encap.value_namespace = name_space;
        is_default_encap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-bridge-ports")
    {
        number_of_bridge_ports = value;
        number_of_bridge_ports.value_namespace = name_space;
        number_of_bridge_ports.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "main-port-interface-name")
    {
        main_port_interface_name.yfilter = yfilter;
    }
    if(value_path == "is-trunk")
    {
        is_trunk.yfilter = yfilter;
    }
    if(value_path == "is-default-encap")
    {
        is_default_encap.yfilter = yfilter;
    }
    if(value_path == "number-of-bridge-ports")
    {
        number_of_bridge_ports.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-bridge-port" || name == "main-port-interface-name" || name == "is-trunk" || name == "is-default-encap" || name == "number-of-bridge-ports")
        return true;
    return false;
}

L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::DefaultBridgePort::DefaultBridgePort()
    :
    bridge_port_interface_name{YType::str, "bridge-port-interface-name"},
    bridge_port_xconnect_id{YType::uint32, "bridge-port-xconnect-id"},
    mvrp_sequence_number{YType::uint16, "mvrp-sequence-number"}
{

    yang_name = "default-bridge-port"; yang_parent_name = "mvrp-main-port-info"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::DefaultBridgePort::~DefaultBridgePort()
{
}

bool L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::DefaultBridgePort::has_data() const
{
    for (std::size_t index=0; index<vlan_range.size(); index++)
    {
        if(vlan_range[index]->has_data())
            return true;
    }
    return bridge_port_interface_name.is_set
	|| bridge_port_xconnect_id.is_set
	|| mvrp_sequence_number.is_set;
}

bool L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::DefaultBridgePort::has_operation() const
{
    for (std::size_t index=0; index<vlan_range.size(); index++)
    {
        if(vlan_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(bridge_port_interface_name.yfilter)
	|| ydk::is_set(bridge_port_xconnect_id.yfilter)
	|| ydk::is_set(mvrp_sequence_number.yfilter);
}

std::string L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::DefaultBridgePort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-bridge-port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::DefaultBridgePort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bridge_port_interface_name.is_set || is_set(bridge_port_interface_name.yfilter)) leaf_name_data.push_back(bridge_port_interface_name.get_name_leafdata());
    if (bridge_port_xconnect_id.is_set || is_set(bridge_port_xconnect_id.yfilter)) leaf_name_data.push_back(bridge_port_xconnect_id.get_name_leafdata());
    if (mvrp_sequence_number.is_set || is_set(mvrp_sequence_number.yfilter)) leaf_name_data.push_back(mvrp_sequence_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::DefaultBridgePort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan-range")
    {
        auto c = std::make_shared<L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::DefaultBridgePort::VlanRange>();
        c->parent = this;
        vlan_range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::DefaultBridgePort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : vlan_range)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::DefaultBridgePort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bridge-port-interface-name")
    {
        bridge_port_interface_name = value;
        bridge_port_interface_name.value_namespace = name_space;
        bridge_port_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-port-xconnect-id")
    {
        bridge_port_xconnect_id = value;
        bridge_port_xconnect_id.value_namespace = name_space;
        bridge_port_xconnect_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mvrp-sequence-number")
    {
        mvrp_sequence_number = value;
        mvrp_sequence_number.value_namespace = name_space;
        mvrp_sequence_number.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::DefaultBridgePort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bridge-port-interface-name")
    {
        bridge_port_interface_name.yfilter = yfilter;
    }
    if(value_path == "bridge-port-xconnect-id")
    {
        bridge_port_xconnect_id.yfilter = yfilter;
    }
    if(value_path == "mvrp-sequence-number")
    {
        mvrp_sequence_number.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::DefaultBridgePort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-range" || name == "bridge-port-interface-name" || name == "bridge-port-xconnect-id" || name == "mvrp-sequence-number")
        return true;
    return false;
}

L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::DefaultBridgePort::VlanRange::VlanRange()
    :
    lower{YType::uint16, "lower"},
    upper{YType::uint16, "upper"}
{

    yang_name = "vlan-range"; yang_parent_name = "default-bridge-port"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::DefaultBridgePort::VlanRange::~VlanRange()
{
}

bool L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::DefaultBridgePort::VlanRange::has_data() const
{
    return lower.is_set
	|| upper.is_set;
}

bool L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::DefaultBridgePort::VlanRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lower.yfilter)
	|| ydk::is_set(upper.yfilter);
}

std::string L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::DefaultBridgePort::VlanRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::DefaultBridgePort::VlanRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lower.is_set || is_set(lower.yfilter)) leaf_name_data.push_back(lower.get_name_leafdata());
    if (upper.is_set || is_set(upper.yfilter)) leaf_name_data.push_back(upper.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::DefaultBridgePort::VlanRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::DefaultBridgePort::VlanRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::DefaultBridgePort::VlanRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lower")
    {
        lower = value;
        lower.value_namespace = name_space;
        lower.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upper")
    {
        upper = value;
        upper.value_namespace = name_space;
        upper.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::DefaultBridgePort::VlanRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lower")
    {
        lower.yfilter = yfilter;
    }
    if(value_path == "upper")
    {
        upper.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::DefaultBridgePort::VlanRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lower" || name == "upper")
        return true;
    return false;
}

L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::MvrpBridgePorts()
{

    yang_name = "mvrp-bridge-ports"; yang_parent_name = "mvrp-main-port"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::~MvrpBridgePorts()
{
}

bool L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::has_data() const
{
    for (std::size_t index=0; index<mvrp_bridge_port.size(); index++)
    {
        if(mvrp_bridge_port[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::has_operation() const
{
    for (std::size_t index=0; index<mvrp_bridge_port.size(); index++)
    {
        if(mvrp_bridge_port[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mvrp-bridge-ports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mvrp-bridge-port")
    {
        auto c = std::make_shared<L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::MvrpBridgePort>();
        c->parent = this;
        mvrp_bridge_port.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : mvrp_bridge_port)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mvrp-bridge-port")
        return true;
    return false;
}

L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::MvrpBridgePort::MvrpBridgePort()
    :
    interface_name{YType::str, "interface-name"},
    bridge_port_interface_name{YType::str, "bridge-port-interface-name"},
    bridge_port_xconnect_id{YType::uint32, "bridge-port-xconnect-id"},
    mvrp_sequence_number{YType::uint16, "mvrp-sequence-number"}
{

    yang_name = "mvrp-bridge-port"; yang_parent_name = "mvrp-bridge-ports"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::MvrpBridgePort::~MvrpBridgePort()
{
}

bool L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::MvrpBridgePort::has_data() const
{
    for (std::size_t index=0; index<vlan_range.size(); index++)
    {
        if(vlan_range[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| bridge_port_interface_name.is_set
	|| bridge_port_xconnect_id.is_set
	|| mvrp_sequence_number.is_set;
}

bool L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::MvrpBridgePort::has_operation() const
{
    for (std::size_t index=0; index<vlan_range.size(); index++)
    {
        if(vlan_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(bridge_port_interface_name.yfilter)
	|| ydk::is_set(bridge_port_xconnect_id.yfilter)
	|| ydk::is_set(mvrp_sequence_number.yfilter);
}

std::string L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::MvrpBridgePort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mvrp-bridge-port" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::MvrpBridgePort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (bridge_port_interface_name.is_set || is_set(bridge_port_interface_name.yfilter)) leaf_name_data.push_back(bridge_port_interface_name.get_name_leafdata());
    if (bridge_port_xconnect_id.is_set || is_set(bridge_port_xconnect_id.yfilter)) leaf_name_data.push_back(bridge_port_xconnect_id.get_name_leafdata());
    if (mvrp_sequence_number.is_set || is_set(mvrp_sequence_number.yfilter)) leaf_name_data.push_back(mvrp_sequence_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::MvrpBridgePort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan-range")
    {
        auto c = std::make_shared<L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::MvrpBridgePort::VlanRange>();
        c->parent = this;
        vlan_range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::MvrpBridgePort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : vlan_range)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::MvrpBridgePort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-port-interface-name")
    {
        bridge_port_interface_name = value;
        bridge_port_interface_name.value_namespace = name_space;
        bridge_port_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-port-xconnect-id")
    {
        bridge_port_xconnect_id = value;
        bridge_port_xconnect_id.value_namespace = name_space;
        bridge_port_xconnect_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mvrp-sequence-number")
    {
        mvrp_sequence_number = value;
        mvrp_sequence_number.value_namespace = name_space;
        mvrp_sequence_number.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::MvrpBridgePort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "bridge-port-interface-name")
    {
        bridge_port_interface_name.yfilter = yfilter;
    }
    if(value_path == "bridge-port-xconnect-id")
    {
        bridge_port_xconnect_id.yfilter = yfilter;
    }
    if(value_path == "mvrp-sequence-number")
    {
        mvrp_sequence_number.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::MvrpBridgePort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-range" || name == "interface-name" || name == "bridge-port-interface-name" || name == "bridge-port-xconnect-id" || name == "mvrp-sequence-number")
        return true;
    return false;
}

L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::MvrpBridgePort::VlanRange::VlanRange()
    :
    lower{YType::uint16, "lower"},
    upper{YType::uint16, "upper"}
{

    yang_name = "vlan-range"; yang_parent_name = "mvrp-bridge-port"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::MvrpBridgePort::VlanRange::~VlanRange()
{
}

bool L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::MvrpBridgePort::VlanRange::has_data() const
{
    return lower.is_set
	|| upper.is_set;
}

bool L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::MvrpBridgePort::VlanRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lower.yfilter)
	|| ydk::is_set(upper.yfilter);
}

std::string L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::MvrpBridgePort::VlanRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::MvrpBridgePort::VlanRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lower.is_set || is_set(lower.yfilter)) leaf_name_data.push_back(lower.get_name_leafdata());
    if (upper.is_set || is_set(upper.yfilter)) leaf_name_data.push_back(upper.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::MvrpBridgePort::VlanRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::MvrpBridgePort::VlanRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::MvrpBridgePort::VlanRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lower")
    {
        lower = value;
        lower.value_namespace = name_space;
        lower.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upper")
    {
        upper = value;
        upper.value_namespace = name_space;
        upper.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::MvrpBridgePort::VlanRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lower")
    {
        lower.yfilter = yfilter;
    }
    if(value_path == "upper")
    {
        upper.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::MvrpBridgePort::VlanRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lower" || name == "upper")
        return true;
    return false;
}

L2Vpnv2::Standby::GenericInterfaceLists::GenericInterfaceLists()
{

    yang_name = "generic-interface-lists"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::GenericInterfaceLists::~GenericInterfaceLists()
{
}

bool L2Vpnv2::Standby::GenericInterfaceLists::has_data() const
{
    for (std::size_t index=0; index<generic_interface_list.size(); index++)
    {
        if(generic_interface_list[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpnv2::Standby::GenericInterfaceLists::has_operation() const
{
    for (std::size_t index=0; index<generic_interface_list.size(); index++)
    {
        if(generic_interface_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpnv2::Standby::GenericInterfaceLists::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::GenericInterfaceLists::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-interface-lists";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::GenericInterfaceLists::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::GenericInterfaceLists::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "generic-interface-list")
    {
        auto c = std::make_shared<L2Vpnv2::Standby::GenericInterfaceLists::GenericInterfaceList>();
        c->parent = this;
        generic_interface_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::GenericInterfaceLists::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : generic_interface_list)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2Vpnv2::Standby::GenericInterfaceLists::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Standby::GenericInterfaceLists::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Standby::GenericInterfaceLists::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "generic-interface-list")
        return true;
    return false;
}

L2Vpnv2::Standby::GenericInterfaceLists::GenericInterfaceList::GenericInterfaceList()
    :
    interface_list_name{YType::str, "interface-list-name"},
    interface_list_name_xr{YType::str, "interface-list-name-xr"},
    interface_list_id{YType::uint32, "interface-list-id"},
    number_of_interfaces{YType::uint32, "number-of-interfaces"},
    items{YType::uint32, "items"}
{

    yang_name = "generic-interface-list"; yang_parent_name = "generic-interface-lists"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::GenericInterfaceLists::GenericInterfaceList::~GenericInterfaceList()
{
}

bool L2Vpnv2::Standby::GenericInterfaceLists::GenericInterfaceList::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return interface_list_name.is_set
	|| interface_list_name_xr.is_set
	|| interface_list_id.is_set
	|| number_of_interfaces.is_set
	|| items.is_set;
}

bool L2Vpnv2::Standby::GenericInterfaceLists::GenericInterfaceList::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_list_name.yfilter)
	|| ydk::is_set(interface_list_name_xr.yfilter)
	|| ydk::is_set(interface_list_id.yfilter)
	|| ydk::is_set(number_of_interfaces.yfilter)
	|| ydk::is_set(items.yfilter);
}

std::string L2Vpnv2::Standby::GenericInterfaceLists::GenericInterfaceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/generic-interface-lists/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::GenericInterfaceLists::GenericInterfaceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-interface-list" <<"[interface-list-name='" <<interface_list_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::GenericInterfaceLists::GenericInterfaceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_list_name.is_set || is_set(interface_list_name.yfilter)) leaf_name_data.push_back(interface_list_name.get_name_leafdata());
    if (interface_list_name_xr.is_set || is_set(interface_list_name_xr.yfilter)) leaf_name_data.push_back(interface_list_name_xr.get_name_leafdata());
    if (interface_list_id.is_set || is_set(interface_list_id.yfilter)) leaf_name_data.push_back(interface_list_id.get_name_leafdata());
    if (number_of_interfaces.is_set || is_set(number_of_interfaces.yfilter)) leaf_name_data.push_back(number_of_interfaces.get_name_leafdata());
    if (items.is_set || is_set(items.yfilter)) leaf_name_data.push_back(items.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::GenericInterfaceLists::GenericInterfaceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto c = std::make_shared<L2Vpnv2::Standby::GenericInterfaceLists::GenericInterfaceList::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::GenericInterfaceLists::GenericInterfaceList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2Vpnv2::Standby::GenericInterfaceLists::GenericInterfaceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-list-name")
    {
        interface_list_name = value;
        interface_list_name.value_namespace = name_space;
        interface_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-list-name-xr")
    {
        interface_list_name_xr = value;
        interface_list_name_xr.value_namespace = name_space;
        interface_list_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-list-id")
    {
        interface_list_id = value;
        interface_list_id.value_namespace = name_space;
        interface_list_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-interfaces")
    {
        number_of_interfaces = value;
        number_of_interfaces.value_namespace = name_space;
        number_of_interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "items")
    {
        items = value;
        items.value_namespace = name_space;
        items.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::GenericInterfaceLists::GenericInterfaceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-list-name")
    {
        interface_list_name.yfilter = yfilter;
    }
    if(value_path == "interface-list-name-xr")
    {
        interface_list_name_xr.yfilter = yfilter;
    }
    if(value_path == "interface-list-id")
    {
        interface_list_id.yfilter = yfilter;
    }
    if(value_path == "number-of-interfaces")
    {
        number_of_interfaces.yfilter = yfilter;
    }
    if(value_path == "items")
    {
        items.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::GenericInterfaceLists::GenericInterfaceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "interface-list-name" || name == "interface-list-name-xr" || name == "interface-list-id" || name == "number-of-interfaces" || name == "items")
        return true;
    return false;
}

L2Vpnv2::Standby::GenericInterfaceLists::GenericInterfaceList::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    pending_replications{YType::uint32, "pending-replications"},
    not_supported_replications{YType::uint32, "not-supported-replications"},
    is_fib_downloaded{YType::boolean, "is-fib-downloaded"}
{

    yang_name = "interface"; yang_parent_name = "generic-interface-list"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::GenericInterfaceLists::GenericInterfaceList::Interface::~Interface()
{
}

bool L2Vpnv2::Standby::GenericInterfaceLists::GenericInterfaceList::Interface::has_data() const
{
    return interface_name.is_set
	|| pending_replications.is_set
	|| not_supported_replications.is_set
	|| is_fib_downloaded.is_set;
}

bool L2Vpnv2::Standby::GenericInterfaceLists::GenericInterfaceList::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(pending_replications.yfilter)
	|| ydk::is_set(not_supported_replications.yfilter)
	|| ydk::is_set(is_fib_downloaded.yfilter);
}

std::string L2Vpnv2::Standby::GenericInterfaceLists::GenericInterfaceList::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::GenericInterfaceLists::GenericInterfaceList::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (pending_replications.is_set || is_set(pending_replications.yfilter)) leaf_name_data.push_back(pending_replications.get_name_leafdata());
    if (not_supported_replications.is_set || is_set(not_supported_replications.yfilter)) leaf_name_data.push_back(not_supported_replications.get_name_leafdata());
    if (is_fib_downloaded.is_set || is_set(is_fib_downloaded.yfilter)) leaf_name_data.push_back(is_fib_downloaded.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::GenericInterfaceLists::GenericInterfaceList::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::GenericInterfaceLists::GenericInterfaceList::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::GenericInterfaceLists::GenericInterfaceList::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pending-replications")
    {
        pending_replications = value;
        pending_replications.value_namespace = name_space;
        pending_replications.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-supported-replications")
    {
        not_supported_replications = value;
        not_supported_replications.value_namespace = name_space;
        not_supported_replications.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-fib-downloaded")
    {
        is_fib_downloaded = value;
        is_fib_downloaded.value_namespace = name_space;
        is_fib_downloaded.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::GenericInterfaceLists::GenericInterfaceList::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "pending-replications")
    {
        pending_replications.yfilter = yfilter;
    }
    if(value_path == "not-supported-replications")
    {
        not_supported_replications.yfilter = yfilter;
    }
    if(value_path == "is-fib-downloaded")
    {
        is_fib_downloaded.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::GenericInterfaceLists::GenericInterfaceList::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "pending-replications" || name == "not-supported-replications" || name == "is-fib-downloaded")
        return true;
    return false;
}

L2Vpnv2::Standby::MstpVlans::MstpVlans()
{

    yang_name = "mstp-vlans"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::MstpVlans::~MstpVlans()
{
}

bool L2Vpnv2::Standby::MstpVlans::has_data() const
{
    for (std::size_t index=0; index<mstp_vlan.size(); index++)
    {
        if(mstp_vlan[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpnv2::Standby::MstpVlans::has_operation() const
{
    for (std::size_t index=0; index<mstp_vlan.size(); index++)
    {
        if(mstp_vlan[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpnv2::Standby::MstpVlans::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::MstpVlans::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mstp-vlans";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::MstpVlans::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::MstpVlans::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mstp-vlan")
    {
        auto c = std::make_shared<L2Vpnv2::Standby::MstpVlans::MstpVlan>();
        c->parent = this;
        mstp_vlan.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::MstpVlans::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : mstp_vlan)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2Vpnv2::Standby::MstpVlans::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Standby::MstpVlans::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Standby::MstpVlans::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mstp-vlan")
        return true;
    return false;
}

L2Vpnv2::Standby::MstpVlans::MstpVlan::MstpVlan()
    :
    vlan_id{YType::uint32, "vlan-id"},
    vlan_id_xr{YType::uint32, "vlan-id-xr"},
    msti_id{YType::uint32, "msti-id"},
    port_count{YType::uint32, "port-count"}
{

    yang_name = "mstp-vlan"; yang_parent_name = "mstp-vlans"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::MstpVlans::MstpVlan::~MstpVlan()
{
}

bool L2Vpnv2::Standby::MstpVlans::MstpVlan::has_data() const
{
    for (std::size_t index=0; index<sub_interface.size(); index++)
    {
        if(sub_interface[index]->has_data())
            return true;
    }
    return vlan_id.is_set
	|| vlan_id_xr.is_set
	|| msti_id.is_set
	|| port_count.is_set;
}

bool L2Vpnv2::Standby::MstpVlans::MstpVlan::has_operation() const
{
    for (std::size_t index=0; index<sub_interface.size(); index++)
    {
        if(sub_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(vlan_id.yfilter)
	|| ydk::is_set(vlan_id_xr.yfilter)
	|| ydk::is_set(msti_id.yfilter)
	|| ydk::is_set(port_count.yfilter);
}

std::string L2Vpnv2::Standby::MstpVlans::MstpVlan::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/mstp-vlans/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::MstpVlans::MstpVlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mstp-vlan" <<"[vlan-id='" <<vlan_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::MstpVlans::MstpVlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_id.is_set || is_set(vlan_id.yfilter)) leaf_name_data.push_back(vlan_id.get_name_leafdata());
    if (vlan_id_xr.is_set || is_set(vlan_id_xr.yfilter)) leaf_name_data.push_back(vlan_id_xr.get_name_leafdata());
    if (msti_id.is_set || is_set(msti_id.yfilter)) leaf_name_data.push_back(msti_id.get_name_leafdata());
    if (port_count.is_set || is_set(port_count.yfilter)) leaf_name_data.push_back(port_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::MstpVlans::MstpVlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sub-interface")
    {
        auto c = std::make_shared<L2Vpnv2::Standby::MstpVlans::MstpVlan::SubInterface>();
        c->parent = this;
        sub_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::MstpVlans::MstpVlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : sub_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2Vpnv2::Standby::MstpVlans::MstpVlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan-id")
    {
        vlan_id = value;
        vlan_id.value_namespace = name_space;
        vlan_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-id-xr")
    {
        vlan_id_xr = value;
        vlan_id_xr.value_namespace = name_space;
        vlan_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msti-id")
    {
        msti_id = value;
        msti_id.value_namespace = name_space;
        msti_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-count")
    {
        port_count = value;
        port_count.value_namespace = name_space;
        port_count.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::MstpVlans::MstpVlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan-id")
    {
        vlan_id.yfilter = yfilter;
    }
    if(value_path == "vlan-id-xr")
    {
        vlan_id_xr.yfilter = yfilter;
    }
    if(value_path == "msti-id")
    {
        msti_id.yfilter = yfilter;
    }
    if(value_path == "port-count")
    {
        port_count.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::MstpVlans::MstpVlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sub-interface" || name == "vlan-id" || name == "vlan-id-xr" || name == "msti-id" || name == "port-count")
        return true;
    return false;
}

L2Vpnv2::Standby::MstpVlans::MstpVlan::SubInterface::SubInterface()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "sub-interface"; yang_parent_name = "mstp-vlan"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::MstpVlans::MstpVlan::SubInterface::~SubInterface()
{
}

bool L2Vpnv2::Standby::MstpVlans::MstpVlan::SubInterface::has_data() const
{
    return interface_name.is_set;
}

bool L2Vpnv2::Standby::MstpVlans::MstpVlan::SubInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string L2Vpnv2::Standby::MstpVlans::MstpVlan::SubInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sub-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::MstpVlans::MstpVlan::SubInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::MstpVlans::MstpVlan::SubInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::MstpVlans::MstpVlan::SubInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::MstpVlans::MstpVlan::SubInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::MstpVlans::MstpVlan::SubInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::MstpVlans::MstpVlan::SubInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

L2Vpnv2::Standby::L2VpnPbbBsa::L2VpnPbbBsa()
    :
    provisioned{YType::boolean, "provisioned"},
    chassis_is_provisioned{YType::boolean, "chassis-is-provisioned"},
    bmac_sa{YType::str, "bmac-sa"},
    chassis_mac{YType::str, "chassis-mac"}
{

    yang_name = "l2vpn-pbb-bsa"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::L2VpnPbbBsa::~L2VpnPbbBsa()
{
}

bool L2Vpnv2::Standby::L2VpnPbbBsa::has_data() const
{
    return provisioned.is_set
	|| chassis_is_provisioned.is_set
	|| bmac_sa.is_set
	|| chassis_mac.is_set;
}

bool L2Vpnv2::Standby::L2VpnPbbBsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(provisioned.yfilter)
	|| ydk::is_set(chassis_is_provisioned.yfilter)
	|| ydk::is_set(bmac_sa.yfilter)
	|| ydk::is_set(chassis_mac.yfilter);
}

std::string L2Vpnv2::Standby::L2VpnPbbBsa::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::L2VpnPbbBsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-pbb-bsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::L2VpnPbbBsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (provisioned.is_set || is_set(provisioned.yfilter)) leaf_name_data.push_back(provisioned.get_name_leafdata());
    if (chassis_is_provisioned.is_set || is_set(chassis_is_provisioned.yfilter)) leaf_name_data.push_back(chassis_is_provisioned.get_name_leafdata());
    if (bmac_sa.is_set || is_set(bmac_sa.yfilter)) leaf_name_data.push_back(bmac_sa.get_name_leafdata());
    if (chassis_mac.is_set || is_set(chassis_mac.yfilter)) leaf_name_data.push_back(chassis_mac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::L2VpnPbbBsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::L2VpnPbbBsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::L2VpnPbbBsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "provisioned")
    {
        provisioned = value;
        provisioned.value_namespace = name_space;
        provisioned.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "chassis-is-provisioned")
    {
        chassis_is_provisioned = value;
        chassis_is_provisioned.value_namespace = name_space;
        chassis_is_provisioned.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmac-sa")
    {
        bmac_sa = value;
        bmac_sa.value_namespace = name_space;
        bmac_sa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "chassis-mac")
    {
        chassis_mac = value;
        chassis_mac.value_namespace = name_space;
        chassis_mac.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::L2VpnPbbBsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "provisioned")
    {
        provisioned.yfilter = yfilter;
    }
    if(value_path == "chassis-is-provisioned")
    {
        chassis_is_provisioned.yfilter = yfilter;
    }
    if(value_path == "bmac-sa")
    {
        bmac_sa.yfilter = yfilter;
    }
    if(value_path == "chassis-mac")
    {
        chassis_mac.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::L2VpnPbbBsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "provisioned" || name == "chassis-is-provisioned" || name == "bmac-sa" || name == "chassis-mac")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectServices()
{

    yang_name = "flexible-xconnect-services"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::~FlexibleXconnectServices()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::has_data() const
{
    for (std::size_t index=0; index<flexible_xconnect_service.size(); index++)
    {
        if(flexible_xconnect_service[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::has_operation() const
{
    for (std::size_t index=0; index<flexible_xconnect_service.size(); index++)
    {
        if(flexible_xconnect_service[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flexible-xconnect-services";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flexible-xconnect-service")
    {
        auto c = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService>();
        c->parent = this;
        flexible_xconnect_service.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : flexible_xconnect_service)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Standby::FlexibleXconnectServices::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flexible-xconnect-service")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectService()
    :
    name{YType::str, "name"}
    	,
    flexible_xconnect_service_acs(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs>())
	,flexible_xconnect_service_info(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo>())
{
    flexible_xconnect_service_acs->parent = this;
    flexible_xconnect_service_info->parent = this;

    yang_name = "flexible-xconnect-service"; yang_parent_name = "flexible-xconnect-services"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::~FlexibleXconnectService()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::has_data() const
{
    return name.is_set
	|| (flexible_xconnect_service_acs !=  nullptr && flexible_xconnect_service_acs->has_data())
	|| (flexible_xconnect_service_info !=  nullptr && flexible_xconnect_service_info->has_data());
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (flexible_xconnect_service_acs !=  nullptr && flexible_xconnect_service_acs->has_operation())
	|| (flexible_xconnect_service_info !=  nullptr && flexible_xconnect_service_info->has_operation());
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/flexible-xconnect-services/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flexible-xconnect-service" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flexible-xconnect-service-acs")
    {
        if(flexible_xconnect_service_acs == nullptr)
        {
            flexible_xconnect_service_acs = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs>();
        }
        return flexible_xconnect_service_acs;
    }

    if(child_yang_name == "flexible-xconnect-service-info")
    {
        if(flexible_xconnect_service_info == nullptr)
        {
            flexible_xconnect_service_info = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo>();
        }
        return flexible_xconnect_service_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(flexible_xconnect_service_acs != nullptr)
    {
        children["flexible-xconnect-service-acs"] = flexible_xconnect_service_acs;
    }

    if(flexible_xconnect_service_info != nullptr)
    {
        children["flexible-xconnect-service-info"] = flexible_xconnect_service_info;
    }

    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flexible-xconnect-service-acs" || name == "flexible-xconnect-service-info" || name == "name")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAcs()
{

    yang_name = "flexible-xconnect-service-acs"; yang_parent_name = "flexible-xconnect-service"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::~FlexibleXconnectServiceAcs()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::has_data() const
{
    for (std::size_t index=0; index<flexible_xconnect_service_ac.size(); index++)
    {
        if(flexible_xconnect_service_ac[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::has_operation() const
{
    for (std::size_t index=0; index<flexible_xconnect_service_ac.size(); index++)
    {
        if(flexible_xconnect_service_ac[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flexible-xconnect-service-acs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flexible-xconnect-service-ac")
    {
        auto c = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc>();
        c->parent = this;
        flexible_xconnect_service_ac.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : flexible_xconnect_service_ac)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flexible-xconnect-service-ac")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::FlexibleXconnectServiceAc()
    :
    interface_name{YType::str, "interface-name"}
    	,
    attachment_circuit(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit>())
{
    attachment_circuit->parent = this;

    yang_name = "flexible-xconnect-service-ac"; yang_parent_name = "flexible-xconnect-service-acs"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::~FlexibleXconnectServiceAc()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::has_data() const
{
    return interface_name.is_set
	|| (attachment_circuit !=  nullptr && attachment_circuit->has_data());
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| (attachment_circuit !=  nullptr && attachment_circuit->has_operation());
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flexible-xconnect-service-ac" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attachment-circuit")
    {
        if(attachment_circuit == nullptr)
        {
            attachment_circuit = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit>();
        }
        return attachment_circuit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(attachment_circuit != nullptr)
    {
        children["attachment-circuit"] = attachment_circuit;
    }

    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attachment-circuit" || name == "interface-name")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::AttachmentCircuit()
    :
    state{YType::enumeration, "state"},
    msti{YType::str, "msti"},
    internal_ms_ti{YType::str, "internal-ms-ti"},
    interface_handle{YType::str, "interface-handle"},
    node_id{YType::str, "node-id"},
    xconnect_id{YType::uint32, "xconnect-id"},
    ms_ti_mismatch{YType::boolean, "ms-ti-mismatch"},
    mtu_mismatched{YType::boolean, "mtu-mismatched"},
    tdm_media_mismatched{YType::boolean, "tdm-media-mismatched"},
    bvi_mac_conflict{YType::boolean, "bvi-mac-conflict"},
    bvi_no_port_up{YType::boolean, "bvi-no-port-up"},
    control_word_mismatched{YType::boolean, "control-word-mismatched"},
    encapsulation_mismatched{YType::boolean, "encapsulation-mismatched"},
    encapsulation_error{YType::str, "encapsulation-error"},
    interworking{YType::enumeration, "interworking"},
    out_of_memory_state{YType::uint32, "out-of-memory-state"},
    msti_mismatch_down{YType::boolean, "msti-mismatch-down"},
    mac_limit_oper_down{YType::boolean, "mac-limit-oper-down"},
    redundancy_group_id{YType::uint32, "redundancy-group-id"},
    redundancy_group_state{YType::enumeration, "redundancy-group-state"},
    redundancy_object_id{YType::uint64, "redundancy-object-id"},
    is_ac_partially_programmed{YType::boolean, "is-ac-partially-programmed"},
    evpn_internal_label{YType::uint32, "evpn-internal-label"}
    	,
    interface(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface>())
	,statistics(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics>())
	,l2vpn_protection(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::L2VpnProtection>())
{
    interface->parent = this;
    statistics->parent = this;
    l2vpn_protection->parent = this;

    yang_name = "attachment-circuit"; yang_parent_name = "flexible-xconnect-service-ac"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::~AttachmentCircuit()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::has_data() const
{
    return state.is_set
	|| msti.is_set
	|| internal_ms_ti.is_set
	|| interface_handle.is_set
	|| node_id.is_set
	|| xconnect_id.is_set
	|| ms_ti_mismatch.is_set
	|| mtu_mismatched.is_set
	|| tdm_media_mismatched.is_set
	|| bvi_mac_conflict.is_set
	|| bvi_no_port_up.is_set
	|| control_word_mismatched.is_set
	|| encapsulation_mismatched.is_set
	|| encapsulation_error.is_set
	|| interworking.is_set
	|| out_of_memory_state.is_set
	|| msti_mismatch_down.is_set
	|| mac_limit_oper_down.is_set
	|| redundancy_group_id.is_set
	|| redundancy_group_state.is_set
	|| redundancy_object_id.is_set
	|| is_ac_partially_programmed.is_set
	|| evpn_internal_label.is_set
	|| (interface !=  nullptr && interface->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (l2vpn_protection !=  nullptr && l2vpn_protection->has_data());
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(msti.yfilter)
	|| ydk::is_set(internal_ms_ti.yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(xconnect_id.yfilter)
	|| ydk::is_set(ms_ti_mismatch.yfilter)
	|| ydk::is_set(mtu_mismatched.yfilter)
	|| ydk::is_set(tdm_media_mismatched.yfilter)
	|| ydk::is_set(bvi_mac_conflict.yfilter)
	|| ydk::is_set(bvi_no_port_up.yfilter)
	|| ydk::is_set(control_word_mismatched.yfilter)
	|| ydk::is_set(encapsulation_mismatched.yfilter)
	|| ydk::is_set(encapsulation_error.yfilter)
	|| ydk::is_set(interworking.yfilter)
	|| ydk::is_set(out_of_memory_state.yfilter)
	|| ydk::is_set(msti_mismatch_down.yfilter)
	|| ydk::is_set(mac_limit_oper_down.yfilter)
	|| ydk::is_set(redundancy_group_id.yfilter)
	|| ydk::is_set(redundancy_group_state.yfilter)
	|| ydk::is_set(redundancy_object_id.yfilter)
	|| ydk::is_set(is_ac_partially_programmed.yfilter)
	|| ydk::is_set(evpn_internal_label.yfilter)
	|| (interface !=  nullptr && interface->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (l2vpn_protection !=  nullptr && l2vpn_protection->has_operation());
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attachment-circuit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (msti.is_set || is_set(msti.yfilter)) leaf_name_data.push_back(msti.get_name_leafdata());
    if (internal_ms_ti.is_set || is_set(internal_ms_ti.yfilter)) leaf_name_data.push_back(internal_ms_ti.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (xconnect_id.is_set || is_set(xconnect_id.yfilter)) leaf_name_data.push_back(xconnect_id.get_name_leafdata());
    if (ms_ti_mismatch.is_set || is_set(ms_ti_mismatch.yfilter)) leaf_name_data.push_back(ms_ti_mismatch.get_name_leafdata());
    if (mtu_mismatched.is_set || is_set(mtu_mismatched.yfilter)) leaf_name_data.push_back(mtu_mismatched.get_name_leafdata());
    if (tdm_media_mismatched.is_set || is_set(tdm_media_mismatched.yfilter)) leaf_name_data.push_back(tdm_media_mismatched.get_name_leafdata());
    if (bvi_mac_conflict.is_set || is_set(bvi_mac_conflict.yfilter)) leaf_name_data.push_back(bvi_mac_conflict.get_name_leafdata());
    if (bvi_no_port_up.is_set || is_set(bvi_no_port_up.yfilter)) leaf_name_data.push_back(bvi_no_port_up.get_name_leafdata());
    if (control_word_mismatched.is_set || is_set(control_word_mismatched.yfilter)) leaf_name_data.push_back(control_word_mismatched.get_name_leafdata());
    if (encapsulation_mismatched.is_set || is_set(encapsulation_mismatched.yfilter)) leaf_name_data.push_back(encapsulation_mismatched.get_name_leafdata());
    if (encapsulation_error.is_set || is_set(encapsulation_error.yfilter)) leaf_name_data.push_back(encapsulation_error.get_name_leafdata());
    if (interworking.is_set || is_set(interworking.yfilter)) leaf_name_data.push_back(interworking.get_name_leafdata());
    if (out_of_memory_state.is_set || is_set(out_of_memory_state.yfilter)) leaf_name_data.push_back(out_of_memory_state.get_name_leafdata());
    if (msti_mismatch_down.is_set || is_set(msti_mismatch_down.yfilter)) leaf_name_data.push_back(msti_mismatch_down.get_name_leafdata());
    if (mac_limit_oper_down.is_set || is_set(mac_limit_oper_down.yfilter)) leaf_name_data.push_back(mac_limit_oper_down.get_name_leafdata());
    if (redundancy_group_id.is_set || is_set(redundancy_group_id.yfilter)) leaf_name_data.push_back(redundancy_group_id.get_name_leafdata());
    if (redundancy_group_state.is_set || is_set(redundancy_group_state.yfilter)) leaf_name_data.push_back(redundancy_group_state.get_name_leafdata());
    if (redundancy_object_id.is_set || is_set(redundancy_object_id.yfilter)) leaf_name_data.push_back(redundancy_object_id.get_name_leafdata());
    if (is_ac_partially_programmed.is_set || is_set(is_ac_partially_programmed.yfilter)) leaf_name_data.push_back(is_ac_partially_programmed.get_name_leafdata());
    if (evpn_internal_label.is_set || is_set(evpn_internal_label.yfilter)) leaf_name_data.push_back(evpn_internal_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface>();
        }
        return interface;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "l2vpn-protection")
    {
        if(l2vpn_protection == nullptr)
        {
            l2vpn_protection = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::L2VpnProtection>();
        }
        return l2vpn_protection;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    if(l2vpn_protection != nullptr)
    {
        children["l2vpn-protection"] = l2vpn_protection;
    }

    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msti")
    {
        msti = value;
        msti.value_namespace = name_space;
        msti.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-ms-ti")
    {
        internal_ms_ti = value;
        internal_ms_ti.value_namespace = name_space;
        internal_ms_ti.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xconnect-id")
    {
        xconnect_id = value;
        xconnect_id.value_namespace = name_space;
        xconnect_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ms-ti-mismatch")
    {
        ms_ti_mismatch = value;
        ms_ti_mismatch.value_namespace = name_space;
        ms_ti_mismatch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu-mismatched")
    {
        mtu_mismatched = value;
        mtu_mismatched.value_namespace = name_space;
        mtu_mismatched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tdm-media-mismatched")
    {
        tdm_media_mismatched = value;
        tdm_media_mismatched.value_namespace = name_space;
        tdm_media_mismatched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bvi-mac-conflict")
    {
        bvi_mac_conflict = value;
        bvi_mac_conflict.value_namespace = name_space;
        bvi_mac_conflict.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bvi-no-port-up")
    {
        bvi_no_port_up = value;
        bvi_no_port_up.value_namespace = name_space;
        bvi_no_port_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "control-word-mismatched")
    {
        control_word_mismatched = value;
        control_word_mismatched.value_namespace = name_space;
        control_word_mismatched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation-mismatched")
    {
        encapsulation_mismatched = value;
        encapsulation_mismatched.value_namespace = name_space;
        encapsulation_mismatched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation-error")
    {
        encapsulation_error = value;
        encapsulation_error.value_namespace = name_space;
        encapsulation_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interworking")
    {
        interworking = value;
        interworking.value_namespace = name_space;
        interworking.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-of-memory-state")
    {
        out_of_memory_state = value;
        out_of_memory_state.value_namespace = name_space;
        out_of_memory_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msti-mismatch-down")
    {
        msti_mismatch_down = value;
        msti_mismatch_down.value_namespace = name_space;
        msti_mismatch_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-limit-oper-down")
    {
        mac_limit_oper_down = value;
        mac_limit_oper_down.value_namespace = name_space;
        mac_limit_oper_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy-group-id")
    {
        redundancy_group_id = value;
        redundancy_group_id.value_namespace = name_space;
        redundancy_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy-group-state")
    {
        redundancy_group_state = value;
        redundancy_group_state.value_namespace = name_space;
        redundancy_group_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy-object-id")
    {
        redundancy_object_id = value;
        redundancy_object_id.value_namespace = name_space;
        redundancy_object_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ac-partially-programmed")
    {
        is_ac_partially_programmed = value;
        is_ac_partially_programmed.value_namespace = name_space;
        is_ac_partially_programmed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evpn-internal-label")
    {
        evpn_internal_label = value;
        evpn_internal_label.value_namespace = name_space;
        evpn_internal_label.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "msti")
    {
        msti.yfilter = yfilter;
    }
    if(value_path == "internal-ms-ti")
    {
        internal_ms_ti.yfilter = yfilter;
    }
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "xconnect-id")
    {
        xconnect_id.yfilter = yfilter;
    }
    if(value_path == "ms-ti-mismatch")
    {
        ms_ti_mismatch.yfilter = yfilter;
    }
    if(value_path == "mtu-mismatched")
    {
        mtu_mismatched.yfilter = yfilter;
    }
    if(value_path == "tdm-media-mismatched")
    {
        tdm_media_mismatched.yfilter = yfilter;
    }
    if(value_path == "bvi-mac-conflict")
    {
        bvi_mac_conflict.yfilter = yfilter;
    }
    if(value_path == "bvi-no-port-up")
    {
        bvi_no_port_up.yfilter = yfilter;
    }
    if(value_path == "control-word-mismatched")
    {
        control_word_mismatched.yfilter = yfilter;
    }
    if(value_path == "encapsulation-mismatched")
    {
        encapsulation_mismatched.yfilter = yfilter;
    }
    if(value_path == "encapsulation-error")
    {
        encapsulation_error.yfilter = yfilter;
    }
    if(value_path == "interworking")
    {
        interworking.yfilter = yfilter;
    }
    if(value_path == "out-of-memory-state")
    {
        out_of_memory_state.yfilter = yfilter;
    }
    if(value_path == "msti-mismatch-down")
    {
        msti_mismatch_down.yfilter = yfilter;
    }
    if(value_path == "mac-limit-oper-down")
    {
        mac_limit_oper_down.yfilter = yfilter;
    }
    if(value_path == "redundancy-group-id")
    {
        redundancy_group_id.yfilter = yfilter;
    }
    if(value_path == "redundancy-group-state")
    {
        redundancy_group_state.yfilter = yfilter;
    }
    if(value_path == "redundancy-object-id")
    {
        redundancy_object_id.yfilter = yfilter;
    }
    if(value_path == "is-ac-partially-programmed")
    {
        is_ac_partially_programmed.yfilter = yfilter;
    }
    if(value_path == "evpn-internal-label")
    {
        evpn_internal_label.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "statistics" || name == "l2vpn-protection" || name == "state" || name == "msti" || name == "internal-ms-ti" || name == "interface-handle" || name == "node-id" || name == "xconnect-id" || name == "ms-ti-mismatch" || name == "mtu-mismatched" || name == "tdm-media-mismatched" || name == "bvi-mac-conflict" || name == "bvi-no-port-up" || name == "control-word-mismatched" || name == "encapsulation-mismatched" || name == "encapsulation-error" || name == "interworking" || name == "out-of-memory-state" || name == "msti-mismatch-down" || name == "mac-limit-oper-down" || name == "redundancy-group-id" || name == "redundancy-group-state" || name == "redundancy-object-id" || name == "is-ac-partially-programmed" || name == "evpn-internal-label")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Interface()
    :
    name{YType::str, "name"},
    mtu{YType::uint32, "mtu"},
    payload_bytes{YType::uint16, "payload-bytes"}
    	,
    parameters(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters>())
{
    parameters->parent = this;

    yang_name = "interface"; yang_parent_name = "attachment-circuit"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::~Interface()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::has_data() const
{
    return name.is_set
	|| mtu.is_set
	|| payload_bytes.is_set
	|| (parameters !=  nullptr && parameters->has_data());
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(payload_bytes.yfilter)
	|| (parameters !=  nullptr && parameters->has_operation());
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (payload_bytes.is_set || is_set(payload_bytes.yfilter)) leaf_name_data.push_back(payload_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "parameters")
    {
        if(parameters == nullptr)
        {
            parameters = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters>();
        }
        return parameters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(parameters != nullptr)
    {
        children["parameters"] = parameters;
    }

    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload-bytes")
    {
        payload_bytes = value;
        payload_bytes.value_namespace = name_space;
        payload_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "payload-bytes")
    {
        payload_bytes.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "parameters" || name == "name" || name == "mtu" || name == "payload-bytes")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Parameters()
    :
    type{YType::enumeration, "type"}
    	,
    ethernet(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Ethernet>())
	,vlan(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Vlan>())
	,tdm(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Tdm>())
	,atm(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Atm>())
	,fr(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Fr>())
	,pseudowire_ether(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireEther>())
	,pseudowire_iw(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireIw>())
{
    ethernet->parent = this;
    vlan->parent = this;
    tdm->parent = this;
    atm->parent = this;
    fr->parent = this;
    pseudowire_ether->parent = this;
    pseudowire_iw->parent = this;

    yang_name = "parameters"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::~Parameters()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::has_data() const
{
    return type.is_set
	|| (ethernet !=  nullptr && ethernet->has_data())
	|| (vlan !=  nullptr && vlan->has_data())
	|| (tdm !=  nullptr && tdm->has_data())
	|| (atm !=  nullptr && atm->has_data())
	|| (fr !=  nullptr && fr->has_data())
	|| (pseudowire_ether !=  nullptr && pseudowire_ether->has_data())
	|| (pseudowire_iw !=  nullptr && pseudowire_iw->has_data());
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (ethernet !=  nullptr && ethernet->has_operation())
	|| (vlan !=  nullptr && vlan->has_operation())
	|| (tdm !=  nullptr && tdm->has_operation())
	|| (atm !=  nullptr && atm->has_operation())
	|| (fr !=  nullptr && fr->has_operation())
	|| (pseudowire_ether !=  nullptr && pseudowire_ether->has_operation())
	|| (pseudowire_iw !=  nullptr && pseudowire_iw->has_operation());
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parameters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ethernet")
    {
        if(ethernet == nullptr)
        {
            ethernet = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Ethernet>();
        }
        return ethernet;
    }

    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Vlan>();
        }
        return vlan;
    }

    if(child_yang_name == "tdm")
    {
        if(tdm == nullptr)
        {
            tdm = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Tdm>();
        }
        return tdm;
    }

    if(child_yang_name == "atm")
    {
        if(atm == nullptr)
        {
            atm = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Atm>();
        }
        return atm;
    }

    if(child_yang_name == "fr")
    {
        if(fr == nullptr)
        {
            fr = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Fr>();
        }
        return fr;
    }

    if(child_yang_name == "pseudowire-ether")
    {
        if(pseudowire_ether == nullptr)
        {
            pseudowire_ether = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireEther>();
        }
        return pseudowire_ether;
    }

    if(child_yang_name == "pseudowire-iw")
    {
        if(pseudowire_iw == nullptr)
        {
            pseudowire_iw = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireIw>();
        }
        return pseudowire_iw;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ethernet != nullptr)
    {
        children["ethernet"] = ethernet;
    }

    if(vlan != nullptr)
    {
        children["vlan"] = vlan;
    }

    if(tdm != nullptr)
    {
        children["tdm"] = tdm;
    }

    if(atm != nullptr)
    {
        children["atm"] = atm;
    }

    if(fr != nullptr)
    {
        children["fr"] = fr;
    }

    if(pseudowire_ether != nullptr)
    {
        children["pseudowire-ether"] = pseudowire_ether;
    }

    if(pseudowire_iw != nullptr)
    {
        children["pseudowire-iw"] = pseudowire_iw;
    }

    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet" || name == "vlan" || name == "tdm" || name == "atm" || name == "fr" || name == "pseudowire-ether" || name == "pseudowire-iw" || name == "type")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Ethernet::Ethernet()
    :
    xconnect_tags{YType::uint8, "xconnect-tags"}
{

    yang_name = "ethernet"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Ethernet::~Ethernet()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Ethernet::has_data() const
{
    return xconnect_tags.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Ethernet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(xconnect_tags.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Ethernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Ethernet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (xconnect_tags.is_set || is_set(xconnect_tags.yfilter)) leaf_name_data.push_back(xconnect_tags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Ethernet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Ethernet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "xconnect-tags")
    {
        xconnect_tags = value;
        xconnect_tags.value_namespace = name_space;
        xconnect_tags.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Ethernet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "xconnect-tags")
    {
        xconnect_tags.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Ethernet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xconnect-tags")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Vlan::Vlan()
    :
    xconnect_tags{YType::uint8, "xconnect-tags"},
    vlan_rewrite_tag{YType::uint16, "vlan-rewrite-tag"},
    simple_efp{YType::uint8, "simple-efp"},
    encapsulation_type{YType::uint8, "encapsulation-type"},
    outer_tag{YType::uint16, "outer-tag"}
{

    yang_name = "vlan"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Vlan::~Vlan()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Vlan::has_data() const
{
    for (std::size_t index=0; index<rewrite_tag.size(); index++)
    {
        if(rewrite_tag[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vlan_range.size(); index++)
    {
        if(vlan_range[index]->has_data())
            return true;
    }
    return xconnect_tags.is_set
	|| vlan_rewrite_tag.is_set
	|| simple_efp.is_set
	|| encapsulation_type.is_set
	|| outer_tag.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Vlan::has_operation() const
{
    for (std::size_t index=0; index<rewrite_tag.size(); index++)
    {
        if(rewrite_tag[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vlan_range.size(); index++)
    {
        if(vlan_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(xconnect_tags.yfilter)
	|| ydk::is_set(vlan_rewrite_tag.yfilter)
	|| ydk::is_set(simple_efp.yfilter)
	|| ydk::is_set(encapsulation_type.yfilter)
	|| ydk::is_set(outer_tag.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (xconnect_tags.is_set || is_set(xconnect_tags.yfilter)) leaf_name_data.push_back(xconnect_tags.get_name_leafdata());
    if (vlan_rewrite_tag.is_set || is_set(vlan_rewrite_tag.yfilter)) leaf_name_data.push_back(vlan_rewrite_tag.get_name_leafdata());
    if (simple_efp.is_set || is_set(simple_efp.yfilter)) leaf_name_data.push_back(simple_efp.get_name_leafdata());
    if (encapsulation_type.is_set || is_set(encapsulation_type.yfilter)) leaf_name_data.push_back(encapsulation_type.get_name_leafdata());
    if (outer_tag.is_set || is_set(outer_tag.yfilter)) leaf_name_data.push_back(outer_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rewrite-tag")
    {
        auto c = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Vlan::RewriteTag>();
        c->parent = this;
        rewrite_tag.push_back(c);
        return c;
    }

    if(child_yang_name == "vlan-range")
    {
        auto c = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange>();
        c->parent = this;
        vlan_range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : rewrite_tag)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : vlan_range)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "xconnect-tags")
    {
        xconnect_tags = value;
        xconnect_tags.value_namespace = name_space;
        xconnect_tags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-rewrite-tag")
    {
        vlan_rewrite_tag = value;
        vlan_rewrite_tag.value_namespace = name_space;
        vlan_rewrite_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "simple-efp")
    {
        simple_efp = value;
        simple_efp.value_namespace = name_space;
        simple_efp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation-type")
    {
        encapsulation_type = value;
        encapsulation_type.value_namespace = name_space;
        encapsulation_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outer-tag")
    {
        outer_tag = value;
        outer_tag.value_namespace = name_space;
        outer_tag.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "xconnect-tags")
    {
        xconnect_tags.yfilter = yfilter;
    }
    if(value_path == "vlan-rewrite-tag")
    {
        vlan_rewrite_tag.yfilter = yfilter;
    }
    if(value_path == "simple-efp")
    {
        simple_efp.yfilter = yfilter;
    }
    if(value_path == "encapsulation-type")
    {
        encapsulation_type.yfilter = yfilter;
    }
    if(value_path == "outer-tag")
    {
        outer_tag.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rewrite-tag" || name == "vlan-range" || name == "xconnect-tags" || name == "vlan-rewrite-tag" || name == "simple-efp" || name == "encapsulation-type" || name == "outer-tag")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Vlan::RewriteTag::RewriteTag()
    :
    entry{YType::uint16, "entry"}
{

    yang_name = "rewrite-tag"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Vlan::RewriteTag::~RewriteTag()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Vlan::RewriteTag::has_data() const
{
    return entry.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Vlan::RewriteTag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Vlan::RewriteTag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rewrite-tag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Vlan::RewriteTag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Vlan::RewriteTag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Vlan::RewriteTag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Vlan::RewriteTag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Vlan::RewriteTag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Vlan::RewriteTag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange::VlanRange()
    :
    lower{YType::uint16, "lower"},
    upper{YType::uint16, "upper"}
{

    yang_name = "vlan-range"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange::~VlanRange()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange::has_data() const
{
    return lower.is_set
	|| upper.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lower.yfilter)
	|| ydk::is_set(upper.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lower.is_set || is_set(lower.yfilter)) leaf_name_data.push_back(lower.get_name_leafdata());
    if (upper.is_set || is_set(upper.yfilter)) leaf_name_data.push_back(upper.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lower")
    {
        lower = value;
        lower.value_namespace = name_space;
        lower.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upper")
    {
        upper = value;
        upper.value_namespace = name_space;
        upper.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lower")
    {
        lower.yfilter = yfilter;
    }
    if(value_path == "upper")
    {
        upper.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lower" || name == "upper")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Tdm::Tdm()
    :
    timeslot_group{YType::str, "timeslot-group"},
    timeslot_rate{YType::uint8, "timeslot-rate"},
    tdm_mode{YType::enumeration, "tdm-mode"}
    	,
    tdm_options(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions>())
{
    tdm_options->parent = this;

    yang_name = "tdm"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Tdm::~Tdm()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Tdm::has_data() const
{
    return timeslot_group.is_set
	|| timeslot_rate.is_set
	|| tdm_mode.is_set
	|| (tdm_options !=  nullptr && tdm_options->has_data());
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Tdm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeslot_group.yfilter)
	|| ydk::is_set(timeslot_rate.yfilter)
	|| ydk::is_set(tdm_mode.yfilter)
	|| (tdm_options !=  nullptr && tdm_options->has_operation());
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Tdm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tdm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Tdm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeslot_group.is_set || is_set(timeslot_group.yfilter)) leaf_name_data.push_back(timeslot_group.get_name_leafdata());
    if (timeslot_rate.is_set || is_set(timeslot_rate.yfilter)) leaf_name_data.push_back(timeslot_rate.get_name_leafdata());
    if (tdm_mode.is_set || is_set(tdm_mode.yfilter)) leaf_name_data.push_back(tdm_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Tdm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tdm-options")
    {
        if(tdm_options == nullptr)
        {
            tdm_options = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions>();
        }
        return tdm_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Tdm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(tdm_options != nullptr)
    {
        children["tdm-options"] = tdm_options;
    }

    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Tdm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeslot-group")
    {
        timeslot_group = value;
        timeslot_group.value_namespace = name_space;
        timeslot_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeslot-rate")
    {
        timeslot_rate = value;
        timeslot_rate.value_namespace = name_space;
        timeslot_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tdm-mode")
    {
        tdm_mode = value;
        tdm_mode.value_namespace = name_space;
        tdm_mode.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Tdm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeslot-group")
    {
        timeslot_group.yfilter = yfilter;
    }
    if(value_path == "timeslot-rate")
    {
        timeslot_rate.yfilter = yfilter;
    }
    if(value_path == "tdm-mode")
    {
        tdm_mode.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Tdm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tdm-options" || name == "timeslot-group" || name == "timeslot-rate" || name == "tdm-mode")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions::TdmOptions()
    :
    payload_bytes{YType::uint16, "payload-bytes"},
    bit_rate{YType::uint32, "bit-rate"},
    rtp{YType::enumeration, "rtp"},
    timestamp_mode{YType::enumeration, "timestamp-mode"},
    signalling_packets{YType::uint8, "signalling-packets"},
    cas{YType::uint8, "cas"},
    rtp_header_payload_type{YType::uint8, "rtp-header-payload-type"},
    timestamp_clock_freq{YType::uint16, "timestamp-clock-freq"},
    ssrc{YType::uint32, "ssrc"}
{

    yang_name = "tdm-options"; yang_parent_name = "tdm"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions::~TdmOptions()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions::has_data() const
{
    return payload_bytes.is_set
	|| bit_rate.is_set
	|| rtp.is_set
	|| timestamp_mode.is_set
	|| signalling_packets.is_set
	|| cas.is_set
	|| rtp_header_payload_type.is_set
	|| timestamp_clock_freq.is_set
	|| ssrc.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(payload_bytes.yfilter)
	|| ydk::is_set(bit_rate.yfilter)
	|| ydk::is_set(rtp.yfilter)
	|| ydk::is_set(timestamp_mode.yfilter)
	|| ydk::is_set(signalling_packets.yfilter)
	|| ydk::is_set(cas.yfilter)
	|| ydk::is_set(rtp_header_payload_type.yfilter)
	|| ydk::is_set(timestamp_clock_freq.yfilter)
	|| ydk::is_set(ssrc.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tdm-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (payload_bytes.is_set || is_set(payload_bytes.yfilter)) leaf_name_data.push_back(payload_bytes.get_name_leafdata());
    if (bit_rate.is_set || is_set(bit_rate.yfilter)) leaf_name_data.push_back(bit_rate.get_name_leafdata());
    if (rtp.is_set || is_set(rtp.yfilter)) leaf_name_data.push_back(rtp.get_name_leafdata());
    if (timestamp_mode.is_set || is_set(timestamp_mode.yfilter)) leaf_name_data.push_back(timestamp_mode.get_name_leafdata());
    if (signalling_packets.is_set || is_set(signalling_packets.yfilter)) leaf_name_data.push_back(signalling_packets.get_name_leafdata());
    if (cas.is_set || is_set(cas.yfilter)) leaf_name_data.push_back(cas.get_name_leafdata());
    if (rtp_header_payload_type.is_set || is_set(rtp_header_payload_type.yfilter)) leaf_name_data.push_back(rtp_header_payload_type.get_name_leafdata());
    if (timestamp_clock_freq.is_set || is_set(timestamp_clock_freq.yfilter)) leaf_name_data.push_back(timestamp_clock_freq.get_name_leafdata());
    if (ssrc.is_set || is_set(ssrc.yfilter)) leaf_name_data.push_back(ssrc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "payload-bytes")
    {
        payload_bytes = value;
        payload_bytes.value_namespace = name_space;
        payload_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bit-rate")
    {
        bit_rate = value;
        bit_rate.value_namespace = name_space;
        bit_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtp")
    {
        rtp = value;
        rtp.value_namespace = name_space;
        rtp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp-mode")
    {
        timestamp_mode = value;
        timestamp_mode.value_namespace = name_space;
        timestamp_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signalling-packets")
    {
        signalling_packets = value;
        signalling_packets.value_namespace = name_space;
        signalling_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cas")
    {
        cas = value;
        cas.value_namespace = name_space;
        cas.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtp-header-payload-type")
    {
        rtp_header_payload_type = value;
        rtp_header_payload_type.value_namespace = name_space;
        rtp_header_payload_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp-clock-freq")
    {
        timestamp_clock_freq = value;
        timestamp_clock_freq.value_namespace = name_space;
        timestamp_clock_freq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ssrc")
    {
        ssrc = value;
        ssrc.value_namespace = name_space;
        ssrc.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "payload-bytes")
    {
        payload_bytes.yfilter = yfilter;
    }
    if(value_path == "bit-rate")
    {
        bit_rate.yfilter = yfilter;
    }
    if(value_path == "rtp")
    {
        rtp.yfilter = yfilter;
    }
    if(value_path == "timestamp-mode")
    {
        timestamp_mode.yfilter = yfilter;
    }
    if(value_path == "signalling-packets")
    {
        signalling_packets.yfilter = yfilter;
    }
    if(value_path == "cas")
    {
        cas.yfilter = yfilter;
    }
    if(value_path == "rtp-header-payload-type")
    {
        rtp_header_payload_type.yfilter = yfilter;
    }
    if(value_path == "timestamp-clock-freq")
    {
        timestamp_clock_freq.yfilter = yfilter;
    }
    if(value_path == "ssrc")
    {
        ssrc.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "payload-bytes" || name == "bit-rate" || name == "rtp" || name == "timestamp-mode" || name == "signalling-packets" || name == "cas" || name == "rtp-header-payload-type" || name == "timestamp-clock-freq" || name == "ssrc")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Atm::Atm()
    :
    maximum_number_cells_packed{YType::uint16, "maximum-number-cells-packed"},
    maximum_number_cells_un_packed{YType::uint16, "maximum-number-cells-un-packed"},
    atm_mode{YType::enumeration, "atm-mode"},
    vpi{YType::uint16, "vpi"},
    vci{YType::uint16, "vci"}
{

    yang_name = "atm"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Atm::~Atm()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Atm::has_data() const
{
    return maximum_number_cells_packed.is_set
	|| maximum_number_cells_un_packed.is_set
	|| atm_mode.is_set
	|| vpi.is_set
	|| vci.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Atm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_number_cells_packed.yfilter)
	|| ydk::is_set(maximum_number_cells_un_packed.yfilter)
	|| ydk::is_set(atm_mode.yfilter)
	|| ydk::is_set(vpi.yfilter)
	|| ydk::is_set(vci.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Atm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Atm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_number_cells_packed.is_set || is_set(maximum_number_cells_packed.yfilter)) leaf_name_data.push_back(maximum_number_cells_packed.get_name_leafdata());
    if (maximum_number_cells_un_packed.is_set || is_set(maximum_number_cells_un_packed.yfilter)) leaf_name_data.push_back(maximum_number_cells_un_packed.get_name_leafdata());
    if (atm_mode.is_set || is_set(atm_mode.yfilter)) leaf_name_data.push_back(atm_mode.get_name_leafdata());
    if (vpi.is_set || is_set(vpi.yfilter)) leaf_name_data.push_back(vpi.get_name_leafdata());
    if (vci.is_set || is_set(vci.yfilter)) leaf_name_data.push_back(vci.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Atm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Atm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Atm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum-number-cells-packed")
    {
        maximum_number_cells_packed = value;
        maximum_number_cells_packed.value_namespace = name_space;
        maximum_number_cells_packed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-number-cells-un-packed")
    {
        maximum_number_cells_un_packed = value;
        maximum_number_cells_un_packed.value_namespace = name_space;
        maximum_number_cells_un_packed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atm-mode")
    {
        atm_mode = value;
        atm_mode.value_namespace = name_space;
        atm_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpi")
    {
        vpi = value;
        vpi.value_namespace = name_space;
        vpi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vci")
    {
        vci = value;
        vci.value_namespace = name_space;
        vci.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Atm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-number-cells-packed")
    {
        maximum_number_cells_packed.yfilter = yfilter;
    }
    if(value_path == "maximum-number-cells-un-packed")
    {
        maximum_number_cells_un_packed.yfilter = yfilter;
    }
    if(value_path == "atm-mode")
    {
        atm_mode.yfilter = yfilter;
    }
    if(value_path == "vpi")
    {
        vpi.yfilter = yfilter;
    }
    if(value_path == "vci")
    {
        vci.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Atm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-number-cells-packed" || name == "maximum-number-cells-un-packed" || name == "atm-mode" || name == "vpi" || name == "vci")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Fr::Fr()
    :
    fr_mode{YType::enumeration, "fr-mode"},
    dlci{YType::uint32, "dlci"}
{

    yang_name = "fr"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Fr::~Fr()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Fr::has_data() const
{
    return fr_mode.is_set
	|| dlci.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Fr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fr_mode.yfilter)
	|| ydk::is_set(dlci.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Fr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Fr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fr_mode.is_set || is_set(fr_mode.yfilter)) leaf_name_data.push_back(fr_mode.get_name_leafdata());
    if (dlci.is_set || is_set(dlci.yfilter)) leaf_name_data.push_back(dlci.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Fr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Fr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Fr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fr-mode")
    {
        fr_mode = value;
        fr_mode.value_namespace = name_space;
        fr_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dlci")
    {
        dlci = value;
        dlci.value_namespace = name_space;
        dlci.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Fr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fr-mode")
    {
        fr_mode.yfilter = yfilter;
    }
    if(value_path == "dlci")
    {
        dlci.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::Fr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fr-mode" || name == "dlci")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireEther::PseudowireEther()
    :
    is_valid{YType::boolean, "is-valid"},
    internal_label{YType::uint32, "internal-label"}
    	,
    interface_list(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList>())
{
    interface_list->parent = this;

    yang_name = "pseudowire-ether"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireEther::~PseudowireEther()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireEther::has_data() const
{
    return is_valid.is_set
	|| internal_label.is_set
	|| (interface_list !=  nullptr && interface_list->has_data());
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireEther::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_valid.yfilter)
	|| ydk::is_set(internal_label.yfilter)
	|| (interface_list !=  nullptr && interface_list->has_operation());
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireEther::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-ether";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireEther::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_valid.is_set || is_set(is_valid.yfilter)) leaf_name_data.push_back(is_valid.get_name_leafdata());
    if (internal_label.is_set || is_set(internal_label.yfilter)) leaf_name_data.push_back(internal_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireEther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-list")
    {
        if(interface_list == nullptr)
        {
            interface_list = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList>();
        }
        return interface_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireEther::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(interface_list != nullptr)
    {
        children["interface-list"] = interface_list;
    }

    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireEther::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-valid")
    {
        is_valid = value;
        is_valid.value_namespace = name_space;
        is_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-label")
    {
        internal_label = value;
        internal_label.value_namespace = name_space;
        internal_label.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireEther::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-valid")
    {
        is_valid.yfilter = yfilter;
    }
    if(value_path == "internal-label")
    {
        internal_label.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireEther::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-list" || name == "is-valid" || name == "internal-label")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::InterfaceList()
    :
    interface_list_name{YType::str, "interface-list-name"},
    interface_list_id{YType::uint32, "interface-list-id"}
{

    yang_name = "interface-list"; yang_parent_name = "pseudowire-ether"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::~InterfaceList()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return interface_list_name.is_set
	|| interface_list_id.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_list_name.yfilter)
	|| ydk::is_set(interface_list_id.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_list_name.is_set || is_set(interface_list_name.yfilter)) leaf_name_data.push_back(interface_list_name.get_name_leafdata());
    if (interface_list_id.is_set || is_set(interface_list_id.yfilter)) leaf_name_data.push_back(interface_list_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto c = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-list-name")
    {
        interface_list_name = value;
        interface_list_name.value_namespace = name_space;
        interface_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-list-id")
    {
        interface_list_id = value;
        interface_list_id.value_namespace = name_space;
        interface_list_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-list-name")
    {
        interface_list_name.yfilter = yfilter;
    }
    if(value_path == "interface-list-id")
    {
        interface_list_id.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "interface-list-name" || name == "interface-list-id")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_::Interface_()
    :
    interface_name{YType::str, "interface-name"},
    replicate_status{YType::enumeration, "replicate-status"}
{

    yang_name = "interface"; yang_parent_name = "interface-list"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_::~Interface_()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_::has_data() const
{
    return interface_name.is_set
	|| replicate_status.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(replicate_status.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (replicate_status.is_set || is_set(replicate_status.yfilter)) leaf_name_data.push_back(replicate_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "replicate-status")
    {
        replicate_status = value;
        replicate_status.value_namespace = name_space;
        replicate_status.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "replicate-status")
    {
        replicate_status.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "replicate-status")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireIw::PseudowireIw()
    :
    is_valid{YType::boolean, "is-valid"},
    internal_label{YType::uint32, "internal-label"}
    	,
    interface_list(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList>())
{
    interface_list->parent = this;

    yang_name = "pseudowire-iw"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireIw::~PseudowireIw()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireIw::has_data() const
{
    return is_valid.is_set
	|| internal_label.is_set
	|| (interface_list !=  nullptr && interface_list->has_data());
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireIw::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_valid.yfilter)
	|| ydk::is_set(internal_label.yfilter)
	|| (interface_list !=  nullptr && interface_list->has_operation());
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireIw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-iw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireIw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_valid.is_set || is_set(is_valid.yfilter)) leaf_name_data.push_back(is_valid.get_name_leafdata());
    if (internal_label.is_set || is_set(internal_label.yfilter)) leaf_name_data.push_back(internal_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireIw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-list")
    {
        if(interface_list == nullptr)
        {
            interface_list = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList>();
        }
        return interface_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireIw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(interface_list != nullptr)
    {
        children["interface-list"] = interface_list;
    }

    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireIw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-valid")
    {
        is_valid = value;
        is_valid.value_namespace = name_space;
        is_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-label")
    {
        internal_label = value;
        internal_label.value_namespace = name_space;
        internal_label.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireIw::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-valid")
    {
        is_valid.yfilter = yfilter;
    }
    if(value_path == "internal-label")
    {
        internal_label.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireIw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-list" || name == "is-valid" || name == "internal-label")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::InterfaceList()
    :
    interface_list_name{YType::str, "interface-list-name"},
    interface_list_id{YType::uint32, "interface-list-id"}
{

    yang_name = "interface-list"; yang_parent_name = "pseudowire-iw"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::~InterfaceList()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return interface_list_name.is_set
	|| interface_list_id.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_list_name.yfilter)
	|| ydk::is_set(interface_list_id.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_list_name.is_set || is_set(interface_list_name.yfilter)) leaf_name_data.push_back(interface_list_name.get_name_leafdata());
    if (interface_list_id.is_set || is_set(interface_list_id.yfilter)) leaf_name_data.push_back(interface_list_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto c = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-list-name")
    {
        interface_list_name = value;
        interface_list_name.value_namespace = name_space;
        interface_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-list-id")
    {
        interface_list_id = value;
        interface_list_id.value_namespace = name_space;
        interface_list_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-list-name")
    {
        interface_list_name.yfilter = yfilter;
    }
    if(value_path == "interface-list-id")
    {
        interface_list_id.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "interface-list-name" || name == "interface-list-id")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_::Interface_()
    :
    interface_name{YType::str, "interface-name"},
    replicate_status{YType::enumeration, "replicate-status"}
{

    yang_name = "interface"; yang_parent_name = "interface-list"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_::~Interface_()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_::has_data() const
{
    return interface_name.is_set
	|| replicate_status.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(replicate_status.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (replicate_status.is_set || is_set(replicate_status.yfilter)) leaf_name_data.push_back(replicate_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "replicate-status")
    {
        replicate_status = value;
        replicate_status.value_namespace = name_space;
        replicate_status.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "replicate-status")
    {
        replicate_status.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "replicate-status")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::Statistics()
    :
    impostion_stats(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats>())
	,dispostion_stats(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats>())
	,sequence_number(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::SequenceNumber>())
{
    impostion_stats->parent = this;
    dispostion_stats->parent = this;
    sequence_number->parent = this;

    yang_name = "statistics"; yang_parent_name = "attachment-circuit"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::~Statistics()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::has_data() const
{
    return (impostion_stats !=  nullptr && impostion_stats->has_data())
	|| (dispostion_stats !=  nullptr && dispostion_stats->has_data())
	|| (sequence_number !=  nullptr && sequence_number->has_data());
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| (impostion_stats !=  nullptr && impostion_stats->has_operation())
	|| (dispostion_stats !=  nullptr && dispostion_stats->has_operation())
	|| (sequence_number !=  nullptr && sequence_number->has_operation());
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "impostion-stats")
    {
        if(impostion_stats == nullptr)
        {
            impostion_stats = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats>();
        }
        return impostion_stats;
    }

    if(child_yang_name == "dispostion-stats")
    {
        if(dispostion_stats == nullptr)
        {
            dispostion_stats = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats>();
        }
        return dispostion_stats;
    }

    if(child_yang_name == "sequence-number")
    {
        if(sequence_number == nullptr)
        {
            sequence_number = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::SequenceNumber>();
        }
        return sequence_number;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(impostion_stats != nullptr)
    {
        children["impostion-stats"] = impostion_stats;
    }

    if(dispostion_stats != nullptr)
    {
        children["dispostion-stats"] = dispostion_stats;
    }

    if(sequence_number != nullptr)
    {
        children["sequence-number"] = sequence_number;
    }

    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "impostion-stats" || name == "dispostion-stats" || name == "sequence-number")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::ImpostionStats()
    :
    imposition_stat(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat>())
	,imposition_mtu_drop(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop>())
	,impostion_tail_drop(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop>())
	,l2fsbi_drop(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::L2FsbiDrop>())
	,multicast(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::Multicast>())
	,broadcast(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::Broadcast>())
	,known_unicast(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast>())
	,unknown_unicast(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast>())
{
    imposition_stat->parent = this;
    imposition_mtu_drop->parent = this;
    impostion_tail_drop->parent = this;
    l2fsbi_drop->parent = this;
    multicast->parent = this;
    broadcast->parent = this;
    known_unicast->parent = this;
    unknown_unicast->parent = this;

    yang_name = "impostion-stats"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::~ImpostionStats()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::has_data() const
{
    return (imposition_stat !=  nullptr && imposition_stat->has_data())
	|| (imposition_mtu_drop !=  nullptr && imposition_mtu_drop->has_data())
	|| (impostion_tail_drop !=  nullptr && impostion_tail_drop->has_data())
	|| (l2fsbi_drop !=  nullptr && l2fsbi_drop->has_data())
	|| (multicast !=  nullptr && multicast->has_data())
	|| (broadcast !=  nullptr && broadcast->has_data())
	|| (known_unicast !=  nullptr && known_unicast->has_data())
	|| (unknown_unicast !=  nullptr && unknown_unicast->has_data());
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::has_operation() const
{
    return is_set(yfilter)
	|| (imposition_stat !=  nullptr && imposition_stat->has_operation())
	|| (imposition_mtu_drop !=  nullptr && imposition_mtu_drop->has_operation())
	|| (impostion_tail_drop !=  nullptr && impostion_tail_drop->has_operation())
	|| (l2fsbi_drop !=  nullptr && l2fsbi_drop->has_operation())
	|| (multicast !=  nullptr && multicast->has_operation())
	|| (broadcast !=  nullptr && broadcast->has_operation())
	|| (known_unicast !=  nullptr && known_unicast->has_operation())
	|| (unknown_unicast !=  nullptr && unknown_unicast->has_operation());
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "impostion-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "imposition-stat")
    {
        if(imposition_stat == nullptr)
        {
            imposition_stat = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat>();
        }
        return imposition_stat;
    }

    if(child_yang_name == "imposition-mtu-drop")
    {
        if(imposition_mtu_drop == nullptr)
        {
            imposition_mtu_drop = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop>();
        }
        return imposition_mtu_drop;
    }

    if(child_yang_name == "impostion-tail-drop")
    {
        if(impostion_tail_drop == nullptr)
        {
            impostion_tail_drop = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop>();
        }
        return impostion_tail_drop;
    }

    if(child_yang_name == "l2fsbi-drop")
    {
        if(l2fsbi_drop == nullptr)
        {
            l2fsbi_drop = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::L2FsbiDrop>();
        }
        return l2fsbi_drop;
    }

    if(child_yang_name == "multicast")
    {
        if(multicast == nullptr)
        {
            multicast = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::Multicast>();
        }
        return multicast;
    }

    if(child_yang_name == "broadcast")
    {
        if(broadcast == nullptr)
        {
            broadcast = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::Broadcast>();
        }
        return broadcast;
    }

    if(child_yang_name == "known-unicast")
    {
        if(known_unicast == nullptr)
        {
            known_unicast = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast>();
        }
        return known_unicast;
    }

    if(child_yang_name == "unknown-unicast")
    {
        if(unknown_unicast == nullptr)
        {
            unknown_unicast = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast>();
        }
        return unknown_unicast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(imposition_stat != nullptr)
    {
        children["imposition-stat"] = imposition_stat;
    }

    if(imposition_mtu_drop != nullptr)
    {
        children["imposition-mtu-drop"] = imposition_mtu_drop;
    }

    if(impostion_tail_drop != nullptr)
    {
        children["impostion-tail-drop"] = impostion_tail_drop;
    }

    if(l2fsbi_drop != nullptr)
    {
        children["l2fsbi-drop"] = l2fsbi_drop;
    }

    if(multicast != nullptr)
    {
        children["multicast"] = multicast;
    }

    if(broadcast != nullptr)
    {
        children["broadcast"] = broadcast;
    }

    if(known_unicast != nullptr)
    {
        children["known-unicast"] = known_unicast;
    }

    if(unknown_unicast != nullptr)
    {
        children["unknown-unicast"] = unknown_unicast;
    }

    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "imposition-stat" || name == "imposition-mtu-drop" || name == "impostion-tail-drop" || name == "l2fsbi-drop" || name == "multicast" || name == "broadcast" || name == "known-unicast" || name == "unknown-unicast")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat::ImpositionStat()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "imposition-stat"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat::~ImpositionStat()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "imposition-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop::ImpositionMtuDrop()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "imposition-mtu-drop"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop::~ImpositionMtuDrop()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "imposition-mtu-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop::ImpostionTailDrop()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "impostion-tail-drop"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop::~ImpostionTailDrop()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "impostion-tail-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::L2FsbiDrop::L2FsbiDrop()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "l2fsbi-drop"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::L2FsbiDrop::~L2FsbiDrop()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::L2FsbiDrop::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::L2FsbiDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::L2FsbiDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fsbi-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::L2FsbiDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::L2FsbiDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::L2FsbiDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::L2FsbiDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::L2FsbiDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::L2FsbiDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::Multicast::Multicast()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "multicast"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::Multicast::~Multicast()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::Multicast::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::Multicast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::Multicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::Multicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::Multicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::Multicast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::Multicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::Broadcast::Broadcast()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "broadcast"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::Broadcast::~Broadcast()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::Broadcast::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::Broadcast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::Broadcast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::Broadcast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::Broadcast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::Broadcast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::Broadcast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::Broadcast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::Broadcast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast::KnownUnicast()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "known-unicast"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast::~KnownUnicast()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "known-unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast::UnknownUnicast()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "unknown-unicast"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast::~UnknownUnicast()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispostionStats()
    :
    disposition_stat(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionStat>())
	,disposition_mtu_drop(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop>())
	,disposition_tail_drop(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop>())
	,multicast_drop(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop>())
	,unicast_drop(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop>())
	,broadcast_drop(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop>())
	,received_drops(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops>())
	,dai_drop(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DaiDrop>())
	,ipsg_drop(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop>())
	,disposition_oo_o_drops(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops>())
	,disposition_p2mp_stats(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats>())
	,known_unicast(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast>())
	,mac_move(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::MacMove>())
{
    disposition_stat->parent = this;
    disposition_mtu_drop->parent = this;
    disposition_tail_drop->parent = this;
    multicast_drop->parent = this;
    unicast_drop->parent = this;
    broadcast_drop->parent = this;
    received_drops->parent = this;
    dai_drop->parent = this;
    ipsg_drop->parent = this;
    disposition_oo_o_drops->parent = this;
    disposition_p2mp_stats->parent = this;
    known_unicast->parent = this;
    mac_move->parent = this;

    yang_name = "dispostion-stats"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::~DispostionStats()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::has_data() const
{
    return (disposition_stat !=  nullptr && disposition_stat->has_data())
	|| (disposition_mtu_drop !=  nullptr && disposition_mtu_drop->has_data())
	|| (disposition_tail_drop !=  nullptr && disposition_tail_drop->has_data())
	|| (multicast_drop !=  nullptr && multicast_drop->has_data())
	|| (unicast_drop !=  nullptr && unicast_drop->has_data())
	|| (broadcast_drop !=  nullptr && broadcast_drop->has_data())
	|| (received_drops !=  nullptr && received_drops->has_data())
	|| (dai_drop !=  nullptr && dai_drop->has_data())
	|| (ipsg_drop !=  nullptr && ipsg_drop->has_data())
	|| (disposition_oo_o_drops !=  nullptr && disposition_oo_o_drops->has_data())
	|| (disposition_p2mp_stats !=  nullptr && disposition_p2mp_stats->has_data())
	|| (known_unicast !=  nullptr && known_unicast->has_data())
	|| (mac_move !=  nullptr && mac_move->has_data());
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::has_operation() const
{
    return is_set(yfilter)
	|| (disposition_stat !=  nullptr && disposition_stat->has_operation())
	|| (disposition_mtu_drop !=  nullptr && disposition_mtu_drop->has_operation())
	|| (disposition_tail_drop !=  nullptr && disposition_tail_drop->has_operation())
	|| (multicast_drop !=  nullptr && multicast_drop->has_operation())
	|| (unicast_drop !=  nullptr && unicast_drop->has_operation())
	|| (broadcast_drop !=  nullptr && broadcast_drop->has_operation())
	|| (received_drops !=  nullptr && received_drops->has_operation())
	|| (dai_drop !=  nullptr && dai_drop->has_operation())
	|| (ipsg_drop !=  nullptr && ipsg_drop->has_operation())
	|| (disposition_oo_o_drops !=  nullptr && disposition_oo_o_drops->has_operation())
	|| (disposition_p2mp_stats !=  nullptr && disposition_p2mp_stats->has_operation())
	|| (known_unicast !=  nullptr && known_unicast->has_operation())
	|| (mac_move !=  nullptr && mac_move->has_operation());
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dispostion-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "disposition-stat")
    {
        if(disposition_stat == nullptr)
        {
            disposition_stat = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionStat>();
        }
        return disposition_stat;
    }

    if(child_yang_name == "disposition-mtu-drop")
    {
        if(disposition_mtu_drop == nullptr)
        {
            disposition_mtu_drop = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop>();
        }
        return disposition_mtu_drop;
    }

    if(child_yang_name == "disposition-tail-drop")
    {
        if(disposition_tail_drop == nullptr)
        {
            disposition_tail_drop = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop>();
        }
        return disposition_tail_drop;
    }

    if(child_yang_name == "multicast-drop")
    {
        if(multicast_drop == nullptr)
        {
            multicast_drop = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop>();
        }
        return multicast_drop;
    }

    if(child_yang_name == "unicast-drop")
    {
        if(unicast_drop == nullptr)
        {
            unicast_drop = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop>();
        }
        return unicast_drop;
    }

    if(child_yang_name == "broadcast-drop")
    {
        if(broadcast_drop == nullptr)
        {
            broadcast_drop = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop>();
        }
        return broadcast_drop;
    }

    if(child_yang_name == "received-drops")
    {
        if(received_drops == nullptr)
        {
            received_drops = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops>();
        }
        return received_drops;
    }

    if(child_yang_name == "dai-drop")
    {
        if(dai_drop == nullptr)
        {
            dai_drop = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DaiDrop>();
        }
        return dai_drop;
    }

    if(child_yang_name == "ipsg-drop")
    {
        if(ipsg_drop == nullptr)
        {
            ipsg_drop = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop>();
        }
        return ipsg_drop;
    }

    if(child_yang_name == "disposition-oo-o-drops")
    {
        if(disposition_oo_o_drops == nullptr)
        {
            disposition_oo_o_drops = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops>();
        }
        return disposition_oo_o_drops;
    }

    if(child_yang_name == "disposition-p2mp-stats")
    {
        if(disposition_p2mp_stats == nullptr)
        {
            disposition_p2mp_stats = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats>();
        }
        return disposition_p2mp_stats;
    }

    if(child_yang_name == "known-unicast")
    {
        if(known_unicast == nullptr)
        {
            known_unicast = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast>();
        }
        return known_unicast;
    }

    if(child_yang_name == "mac-move")
    {
        if(mac_move == nullptr)
        {
            mac_move = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::MacMove>();
        }
        return mac_move;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(disposition_stat != nullptr)
    {
        children["disposition-stat"] = disposition_stat;
    }

    if(disposition_mtu_drop != nullptr)
    {
        children["disposition-mtu-drop"] = disposition_mtu_drop;
    }

    if(disposition_tail_drop != nullptr)
    {
        children["disposition-tail-drop"] = disposition_tail_drop;
    }

    if(multicast_drop != nullptr)
    {
        children["multicast-drop"] = multicast_drop;
    }

    if(unicast_drop != nullptr)
    {
        children["unicast-drop"] = unicast_drop;
    }

    if(broadcast_drop != nullptr)
    {
        children["broadcast-drop"] = broadcast_drop;
    }

    if(received_drops != nullptr)
    {
        children["received-drops"] = received_drops;
    }

    if(dai_drop != nullptr)
    {
        children["dai-drop"] = dai_drop;
    }

    if(ipsg_drop != nullptr)
    {
        children["ipsg-drop"] = ipsg_drop;
    }

    if(disposition_oo_o_drops != nullptr)
    {
        children["disposition-oo-o-drops"] = disposition_oo_o_drops;
    }

    if(disposition_p2mp_stats != nullptr)
    {
        children["disposition-p2mp-stats"] = disposition_p2mp_stats;
    }

    if(known_unicast != nullptr)
    {
        children["known-unicast"] = known_unicast;
    }

    if(mac_move != nullptr)
    {
        children["mac-move"] = mac_move;
    }

    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disposition-stat" || name == "disposition-mtu-drop" || name == "disposition-tail-drop" || name == "multicast-drop" || name == "unicast-drop" || name == "broadcast-drop" || name == "received-drops" || name == "dai-drop" || name == "ipsg-drop" || name == "disposition-oo-o-drops" || name == "disposition-p2mp-stats" || name == "known-unicast" || name == "mac-move")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionStat::DispositionStat()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "disposition-stat"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionStat::~DispositionStat()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionStat::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop::DispositionMtuDrop()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "disposition-mtu-drop"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop::~DispositionMtuDrop()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-mtu-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop::DispositionTailDrop()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "disposition-tail-drop"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop::~DispositionTailDrop()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-tail-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop::MulticastDrop()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "multicast-drop"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop::~MulticastDrop()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop::UnicastDrop()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "unicast-drop"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop::~UnicastDrop()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unicast-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop::BroadcastDrop()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "broadcast-drop"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop::~BroadcastDrop()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops::ReceivedDrops()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "received-drops"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops::~ReceivedDrops()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-drops";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DaiDrop::DaiDrop()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "dai-drop"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DaiDrop::~DaiDrop()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DaiDrop::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DaiDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DaiDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dai-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DaiDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DaiDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DaiDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DaiDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DaiDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DaiDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop::IpsgDrop()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "ipsg-drop"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop::~IpsgDrop()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsg-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops::DispositionOoODrops()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "disposition-oo-o-drops"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops::~DispositionOoODrops()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-oo-o-drops";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats::DispositionP2MpStats()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "disposition-p2mp-stats"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats::~DispositionP2MpStats()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-p2mp-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast::KnownUnicast()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "known-unicast"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast::~KnownUnicast()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "known-unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::MacMove::MacMove()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "mac-move"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::MacMove::~MacMove()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::MacMove::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::MacMove::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::MacMove::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-move";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::MacMove::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::MacMove::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::MacMove::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::MacMove::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::MacMove::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::DispostionStats::MacMove::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::SequenceNumber::SequenceNumber()
    :
    sequence_number_sent{YType::uint32, "sequence-number-sent"},
    sequence_number_expected{YType::uint32, "sequence-number-expected"},
    bypassed_inbound_sequence_packet{YType::uint64, "bypassed-inbound-sequence-packet"},
    bypassed_out_sequence_packet{YType::uint64, "bypassed-out-sequence-packet"}
{

    yang_name = "sequence-number"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::SequenceNumber::~SequenceNumber()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::SequenceNumber::has_data() const
{
    return sequence_number_sent.is_set
	|| sequence_number_expected.is_set
	|| bypassed_inbound_sequence_packet.is_set
	|| bypassed_out_sequence_packet.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::SequenceNumber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sequence_number_sent.yfilter)
	|| ydk::is_set(sequence_number_expected.yfilter)
	|| ydk::is_set(bypassed_inbound_sequence_packet.yfilter)
	|| ydk::is_set(bypassed_out_sequence_packet.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::SequenceNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sequence-number";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::SequenceNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence_number_sent.is_set || is_set(sequence_number_sent.yfilter)) leaf_name_data.push_back(sequence_number_sent.get_name_leafdata());
    if (sequence_number_expected.is_set || is_set(sequence_number_expected.yfilter)) leaf_name_data.push_back(sequence_number_expected.get_name_leafdata());
    if (bypassed_inbound_sequence_packet.is_set || is_set(bypassed_inbound_sequence_packet.yfilter)) leaf_name_data.push_back(bypassed_inbound_sequence_packet.get_name_leafdata());
    if (bypassed_out_sequence_packet.is_set || is_set(bypassed_out_sequence_packet.yfilter)) leaf_name_data.push_back(bypassed_out_sequence_packet.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::SequenceNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::SequenceNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::SequenceNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sequence-number-sent")
    {
        sequence_number_sent = value;
        sequence_number_sent.value_namespace = name_space;
        sequence_number_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number-expected")
    {
        sequence_number_expected = value;
        sequence_number_expected.value_namespace = name_space;
        sequence_number_expected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bypassed-inbound-sequence-packet")
    {
        bypassed_inbound_sequence_packet = value;
        bypassed_inbound_sequence_packet.value_namespace = name_space;
        bypassed_inbound_sequence_packet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bypassed-out-sequence-packet")
    {
        bypassed_out_sequence_packet = value;
        bypassed_out_sequence_packet.value_namespace = name_space;
        bypassed_out_sequence_packet.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::SequenceNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sequence-number-sent")
    {
        sequence_number_sent.yfilter = yfilter;
    }
    if(value_path == "sequence-number-expected")
    {
        sequence_number_expected.yfilter = yfilter;
    }
    if(value_path == "bypassed-inbound-sequence-packet")
    {
        bypassed_inbound_sequence_packet.yfilter = yfilter;
    }
    if(value_path == "bypassed-out-sequence-packet")
    {
        bypassed_out_sequence_packet.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::Statistics::SequenceNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sequence-number-sent" || name == "sequence-number-expected" || name == "bypassed-inbound-sequence-packet" || name == "bypassed-out-sequence-packet")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::L2VpnProtection::L2VpnProtection()
    :
    protection_type{YType::enumeration, "protection-type"},
    protection_configured{YType::enumeration, "protection-configured"},
    protection_name{YType::str, "protection-name"},
    protected_name{YType::str, "protected-name"},
    active{YType::boolean, "active"}
{

    yang_name = "l2vpn-protection"; yang_parent_name = "attachment-circuit"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::L2VpnProtection::~L2VpnProtection()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::L2VpnProtection::has_data() const
{
    return protection_type.is_set
	|| protection_configured.is_set
	|| protection_name.is_set
	|| protected_name.is_set
	|| active.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::L2VpnProtection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protection_type.yfilter)
	|| ydk::is_set(protection_configured.yfilter)
	|| ydk::is_set(protection_name.yfilter)
	|| ydk::is_set(protected_name.yfilter)
	|| ydk::is_set(active.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::L2VpnProtection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-protection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::L2VpnProtection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protection_type.is_set || is_set(protection_type.yfilter)) leaf_name_data.push_back(protection_type.get_name_leafdata());
    if (protection_configured.is_set || is_set(protection_configured.yfilter)) leaf_name_data.push_back(protection_configured.get_name_leafdata());
    if (protection_name.is_set || is_set(protection_name.yfilter)) leaf_name_data.push_back(protection_name.get_name_leafdata());
    if (protected_name.is_set || is_set(protected_name.yfilter)) leaf_name_data.push_back(protected_name.get_name_leafdata());
    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::L2VpnProtection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::L2VpnProtection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::L2VpnProtection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protection-type")
    {
        protection_type = value;
        protection_type.value_namespace = name_space;
        protection_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protection-configured")
    {
        protection_configured = value;
        protection_configured.value_namespace = name_space;
        protection_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protection-name")
    {
        protection_name = value;
        protection_name.value_namespace = name_space;
        protection_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected-name")
    {
        protected_name = value;
        protected_name.value_namespace = name_space;
        protected_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::L2VpnProtection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protection-type")
    {
        protection_type.yfilter = yfilter;
    }
    if(value_path == "protection-configured")
    {
        protection_configured.yfilter = yfilter;
    }
    if(value_path == "protection-name")
    {
        protection_name.yfilter = yfilter;
    }
    if(value_path == "protected-name")
    {
        protected_name.yfilter = yfilter;
    }
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceAcs::FlexibleXconnectServiceAc::AttachmentCircuit::L2VpnProtection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protection-type" || name == "protection-configured" || name == "protection-name" || name == "protected-name" || name == "active")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::FlexibleXconnectServiceInfo()
    :
    fxc_id{YType::uint32, "fxc-id"},
    name{YType::str, "name"},
    state{YType::enumeration, "state"},
    num_p_ws{YType::uint8, "num-p-ws"}
{

    yang_name = "flexible-xconnect-service-info"; yang_parent_name = "flexible-xconnect-service"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::~FlexibleXconnectServiceInfo()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::has_data() const
{
    for (std::size_t index=0; index<pseudowire.size(); index++)
    {
        if(pseudowire[index]->has_data())
            return true;
    }
    return fxc_id.is_set
	|| name.is_set
	|| state.is_set
	|| num_p_ws.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::has_operation() const
{
    for (std::size_t index=0; index<pseudowire.size(); index++)
    {
        if(pseudowire[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(fxc_id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(num_p_ws.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flexible-xconnect-service-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fxc_id.is_set || is_set(fxc_id.yfilter)) leaf_name_data.push_back(fxc_id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (num_p_ws.is_set || is_set(num_p_ws.yfilter)) leaf_name_data.push_back(num_p_ws.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pseudowire")
    {
        auto c = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire>();
        c->parent = this;
        pseudowire.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : pseudowire)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fxc-id")
    {
        fxc_id = value;
        fxc_id.value_namespace = name_space;
        fxc_id.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "num-p-ws")
    {
        num_p_ws = value;
        num_p_ws.value_namespace = name_space;
        num_p_ws.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fxc-id")
    {
        fxc_id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "num-p-ws")
    {
        num_p_ws.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pseudowire" || name == "fxc-id" || name == "name" || name == "state" || name == "num-p-ws")
        return true;
    return false;
}


}
}

