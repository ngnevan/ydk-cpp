
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_66.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_bgp_oper {

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathCompWinner::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "best-path-comp-winner"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathCompWinner::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathCompWinner::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathCompWinner::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathCompWinner::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathCompWinner::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathCompWinner::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathCompWinner::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathCompWinner::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathCompWinner::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathCompWinner::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNbrAddr::MvpnNbrAddr()
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
    l2vpn_vpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNbrAddr::L2VpnVplsAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNbrAddr::L2VpnMspwAddress>())
	,ipv4_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNbrAddr::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNbrAddr::Ipv6SrPolicyAddress>())
{
    l2vpn_vpls_address->parent = this;
    l2vpn_mspw_address->parent = this;
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;

    yang_name = "mvpn-nbr-addr"; yang_parent_name = "path-information"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNbrAddr::~MvpnNbrAddr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNbrAddr::has_data() const
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNbrAddr::has_operation() const
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

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNbrAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mvpn-nbr-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNbrAddr::get_name_leaf_data() const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNbrAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNbrAddr::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNbrAddr::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNbrAddr::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNbrAddr::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNbrAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNbrAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNbrAddr::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNbrAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-vpls-address" || name == "l2vpn-mspw-address" || name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-mcast-address" || name == "ipv4-label-address" || name == "ipv4-tunnel-address" || name == "ipv4-mdt-address" || name == "ipv4vpn-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-mcast-address" || name == "ipv6-label-address" || name == "ipv6vpn-address" || name == "ipv6vpn-mcast-address" || name == "rt-constraint-address" || name == "ipv6mvpn-address" || name == "ipv4mvpn-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "ipv4-flowspec-address" || name == "ipv6-flowspec-address" || name == "ipv4vpn-flowspec-address" || name == "ipv6vpn-flowspec-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNbrAddr::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "mvpn-nbr-addr"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNbrAddr::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNbrAddr::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNbrAddr::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNbrAddr::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNbrAddr::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNbrAddr::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNbrAddr::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNbrAddr::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNbrAddr::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNbrAddr::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNbrAddr::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "mvpn-nbr-addr"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNbrAddr::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNbrAddr::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNbrAddr::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNbrAddr::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNbrAddr::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNbrAddr::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNbrAddr::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNbrAddr::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNbrAddr::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNbrAddr::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNbrAddr::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "mvpn-nbr-addr"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNbrAddr::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNbrAddr::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNbrAddr::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNbrAddr::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNbrAddr::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNbrAddr::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNbrAddr::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNbrAddr::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNbrAddr::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNbrAddr::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNbrAddr::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "mvpn-nbr-addr"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNbrAddr::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNbrAddr::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNbrAddr::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNbrAddr::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNbrAddr::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNbrAddr::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNbrAddr::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNbrAddr::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNbrAddr::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNbrAddr::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNexthopAddr::MvpnNexthopAddr()
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
    l2vpn_vpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNexthopAddr::L2VpnVplsAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNexthopAddr::L2VpnMspwAddress>())
	,ipv4_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNexthopAddr::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNexthopAddr::Ipv6SrPolicyAddress>())
{
    l2vpn_vpls_address->parent = this;
    l2vpn_mspw_address->parent = this;
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;

    yang_name = "mvpn-nexthop-addr"; yang_parent_name = "path-information"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNexthopAddr::~MvpnNexthopAddr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNexthopAddr::has_data() const
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNexthopAddr::has_operation() const
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

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNexthopAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mvpn-nexthop-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNexthopAddr::get_name_leaf_data() const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNexthopAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNexthopAddr::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNexthopAddr::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNexthopAddr::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNexthopAddr::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNexthopAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNexthopAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNexthopAddr::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNexthopAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-vpls-address" || name == "l2vpn-mspw-address" || name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-mcast-address" || name == "ipv4-label-address" || name == "ipv4-tunnel-address" || name == "ipv4-mdt-address" || name == "ipv4vpn-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-mcast-address" || name == "ipv6-label-address" || name == "ipv6vpn-address" || name == "ipv6vpn-mcast-address" || name == "rt-constraint-address" || name == "ipv6mvpn-address" || name == "ipv4mvpn-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "ipv4-flowspec-address" || name == "ipv6-flowspec-address" || name == "ipv4vpn-flowspec-address" || name == "ipv6vpn-flowspec-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNexthopAddr::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "mvpn-nexthop-addr"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNexthopAddr::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNexthopAddr::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNexthopAddr::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNexthopAddr::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNexthopAddr::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNexthopAddr::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNexthopAddr::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNexthopAddr::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNexthopAddr::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNexthopAddr::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNexthopAddr::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "mvpn-nexthop-addr"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNexthopAddr::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNexthopAddr::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNexthopAddr::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNexthopAddr::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNexthopAddr::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNexthopAddr::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNexthopAddr::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNexthopAddr::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNexthopAddr::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNexthopAddr::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNexthopAddr::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "mvpn-nexthop-addr"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNexthopAddr::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNexthopAddr::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNexthopAddr::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNexthopAddr::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNexthopAddr::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNexthopAddr::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNexthopAddr::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNexthopAddr::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNexthopAddr::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNexthopAddr::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNexthopAddr::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "mvpn-nexthop-addr"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNexthopAddr::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNexthopAddr::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNexthopAddr::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNexthopAddr::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNexthopAddr::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNexthopAddr::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNexthopAddr::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNexthopAddr::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNexthopAddr::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNexthopAddr::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::VpnNexthopAddr::VpnNexthopAddr()
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
    l2vpn_vpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::VpnNexthopAddr::L2VpnVplsAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::VpnNexthopAddr::L2VpnMspwAddress>())
	,ipv4_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::VpnNexthopAddr::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::VpnNexthopAddr::Ipv6SrPolicyAddress>())
{
    l2vpn_vpls_address->parent = this;
    l2vpn_mspw_address->parent = this;
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;

    yang_name = "vpn-nexthop-addr"; yang_parent_name = "path-information"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::VpnNexthopAddr::~VpnNexthopAddr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::VpnNexthopAddr::has_data() const
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::VpnNexthopAddr::has_operation() const
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

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::VpnNexthopAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpn-nexthop-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::VpnNexthopAddr::get_name_leaf_data() const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::VpnNexthopAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::VpnNexthopAddr::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::VpnNexthopAddr::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::VpnNexthopAddr::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::VpnNexthopAddr::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::VpnNexthopAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::VpnNexthopAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::VpnNexthopAddr::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::VpnNexthopAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-vpls-address" || name == "l2vpn-mspw-address" || name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-mcast-address" || name == "ipv4-label-address" || name == "ipv4-tunnel-address" || name == "ipv4-mdt-address" || name == "ipv4vpn-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-mcast-address" || name == "ipv6-label-address" || name == "ipv6vpn-address" || name == "ipv6vpn-mcast-address" || name == "rt-constraint-address" || name == "ipv6mvpn-address" || name == "ipv4mvpn-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "ipv4-flowspec-address" || name == "ipv6-flowspec-address" || name == "ipv4vpn-flowspec-address" || name == "ipv6vpn-flowspec-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::VpnNexthopAddr::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "vpn-nexthop-addr"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::VpnNexthopAddr::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::VpnNexthopAddr::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::VpnNexthopAddr::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::VpnNexthopAddr::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::VpnNexthopAddr::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::VpnNexthopAddr::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::VpnNexthopAddr::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::VpnNexthopAddr::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::VpnNexthopAddr::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::VpnNexthopAddr::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::VpnNexthopAddr::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "vpn-nexthop-addr"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::VpnNexthopAddr::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::VpnNexthopAddr::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::VpnNexthopAddr::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::VpnNexthopAddr::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::VpnNexthopAddr::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::VpnNexthopAddr::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::VpnNexthopAddr::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::VpnNexthopAddr::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::VpnNexthopAddr::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::VpnNexthopAddr::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::VpnNexthopAddr::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "vpn-nexthop-addr"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::VpnNexthopAddr::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::VpnNexthopAddr::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::VpnNexthopAddr::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::VpnNexthopAddr::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::VpnNexthopAddr::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::VpnNexthopAddr::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::VpnNexthopAddr::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::VpnNexthopAddr::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::VpnNexthopAddr::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::VpnNexthopAddr::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::VpnNexthopAddr::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "vpn-nexthop-addr"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::VpnNexthopAddr::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::VpnNexthopAddr::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::VpnNexthopAddr::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::VpnNexthopAddr::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::VpnNexthopAddr::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::VpnNexthopAddr::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::VpnNexthopAddr::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::VpnNexthopAddr::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::VpnNexthopAddr::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::VpnNexthopAddr::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::RcvdLabel::RcvdLabel()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "rcvd-label"; yang_parent_name = "path-information"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::RcvdLabel::~RcvdLabel()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::RcvdLabel::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::RcvdLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::RcvdLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rcvd-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::RcvdLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::RcvdLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::RcvdLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::RcvdLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::RcvdLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::RcvdLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::L2VpnCircuitStatusValue::L2VpnCircuitStatusValue()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "l2vpn-circuit-status-value"; yang_parent_name = "path-information"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::L2VpnCircuitStatusValue::~L2VpnCircuitStatusValue()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::L2VpnCircuitStatusValue::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::L2VpnCircuitStatusValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::L2VpnCircuitStatusValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-circuit-status-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::L2VpnCircuitStatusValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::L2VpnCircuitStatusValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::L2VpnCircuitStatusValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::L2VpnCircuitStatusValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::L2VpnCircuitStatusValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::L2VpnCircuitStatusValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnPmsiValue::MvpnPmsiValue()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "mvpn-pmsi-value"; yang_parent_name = "path-information"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnPmsiValue::~MvpnPmsiValue()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnPmsiValue::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnPmsiValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnPmsiValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mvpn-pmsi-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnPmsiValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnPmsiValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnPmsiValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnPmsiValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnPmsiValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnPmsiValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::ExtendedCommunity::ExtendedCommunity()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "extended-community"; yang_parent_name = "path-information"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::ExtendedCommunity::~ExtendedCommunity()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::ExtendedCommunity::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::ExtendedCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::ExtendedCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::ExtendedCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::ExtendedCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::ExtendedCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::ExtendedCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::ExtendedCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::ExtendedCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::LocalPeersAdvertisedTo()
    :
    is_neighbor{YType::boolean, "is-neighbor"},
    update_group_number{YType::uint32, "update-group-number"}
    	,
    neighbor_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress>())
{
    neighbor_address->parent = this;

    yang_name = "local-peers-advertised-to"; yang_parent_name = "path-information"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::~LocalPeersAdvertisedTo()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::has_data() const
{
    return is_neighbor.is_set
	|| update_group_number.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_neighbor.yfilter)
	|| ydk::is_set(update_group_number.yfilter)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-peers-advertised-to";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_neighbor.is_set || is_set(is_neighbor.yfilter)) leaf_name_data.push_back(is_neighbor.get_name_leafdata());
    if (update_group_number.is_set || is_set(update_group_number.yfilter)) leaf_name_data.push_back(update_group_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address == nullptr)
        {
            neighbor_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress>();
        }
        return neighbor_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(neighbor_address != nullptr)
    {
        children["neighbor-address"] = neighbor_address;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-neighbor")
    {
        is_neighbor = value;
        is_neighbor.value_namespace = name_space;
        is_neighbor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-group-number")
    {
        update_group_number = value;
        update_group_number.value_namespace = name_space;
        update_group_number.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-neighbor")
    {
        is_neighbor.yfilter = yfilter;
    }
    if(value_path == "update-group-number")
    {
        update_group_number.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address" || name == "is-neighbor" || name == "update-group-number")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::NeighborAddress()
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
    l2vpn_vpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress>())
	,ipv4_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress>())
{
    l2vpn_vpls_address->parent = this;
    l2vpn_mspw_address->parent = this;
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;

    yang_name = "neighbor-address"; yang_parent_name = "local-peers-advertised-to"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::has_data() const
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::has_operation() const
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

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::get_name_leaf_data() const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-vpls-address" || name == "l2vpn-mspw-address" || name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-mcast-address" || name == "ipv4-label-address" || name == "ipv4-tunnel-address" || name == "ipv4-mdt-address" || name == "ipv4vpn-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-mcast-address" || name == "ipv6-label-address" || name == "ipv6vpn-address" || name == "ipv6vpn-mcast-address" || name == "rt-constraint-address" || name == "ipv6mvpn-address" || name == "ipv4mvpn-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "ipv4-flowspec-address" || name == "ipv6-flowspec-address" || name == "ipv4vpn-flowspec-address" || name == "ipv6vpn-flowspec-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::PePeersAdvertisedTo()
    :
    is_neighbor{YType::boolean, "is-neighbor"},
    update_group_number{YType::uint32, "update-group-number"}
    	,
    neighbor_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress>())
{
    neighbor_address->parent = this;

    yang_name = "pe-peers-advertised-to"; yang_parent_name = "path-information"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::~PePeersAdvertisedTo()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::has_data() const
{
    return is_neighbor.is_set
	|| update_group_number.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_neighbor.yfilter)
	|| ydk::is_set(update_group_number.yfilter)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pe-peers-advertised-to";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_neighbor.is_set || is_set(is_neighbor.yfilter)) leaf_name_data.push_back(is_neighbor.get_name_leafdata());
    if (update_group_number.is_set || is_set(update_group_number.yfilter)) leaf_name_data.push_back(update_group_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address == nullptr)
        {
            neighbor_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress>();
        }
        return neighbor_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(neighbor_address != nullptr)
    {
        children["neighbor-address"] = neighbor_address;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-neighbor")
    {
        is_neighbor = value;
        is_neighbor.value_namespace = name_space;
        is_neighbor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-group-number")
    {
        update_group_number = value;
        update_group_number.value_namespace = name_space;
        update_group_number.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-neighbor")
    {
        is_neighbor.yfilter = yfilter;
    }
    if(value_path == "update-group-number")
    {
        update_group_number.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address" || name == "is-neighbor" || name == "update-group-number")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::NeighborAddress()
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
    l2vpn_vpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress>())
	,ipv4_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress>())
{
    l2vpn_vpls_address->parent = this;
    l2vpn_mspw_address->parent = this;
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;

    yang_name = "neighbor-address"; yang_parent_name = "pe-peers-advertised-to"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::has_data() const
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::has_operation() const
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

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::get_name_leaf_data() const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-vpls-address" || name == "l2vpn-mspw-address" || name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-mcast-address" || name == "ipv4-label-address" || name == "ipv4-tunnel-address" || name == "ipv4-mdt-address" || name == "ipv4vpn-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-mcast-address" || name == "ipv6-label-address" || name == "ipv6vpn-address" || name == "ipv6vpn-mcast-address" || name == "rt-constraint-address" || name == "ipv6mvpn-address" || name == "ipv4mvpn-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "ipv4-flowspec-address" || name == "ipv6-flowspec-address" || name == "ipv4vpn-flowspec-address" || name == "ipv6vpn-flowspec-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::BestPathOrrBitfield()
    :
    is_neighbor{YType::boolean, "is-neighbor"},
    update_group_number{YType::uint32, "update-group-number"}
    	,
    neighbor_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress>())
{
    neighbor_address->parent = this;

    yang_name = "best-path-orr-bitfield"; yang_parent_name = "path-information"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::~BestPathOrrBitfield()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::has_data() const
{
    return is_neighbor.is_set
	|| update_group_number.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_neighbor.yfilter)
	|| ydk::is_set(update_group_number.yfilter)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "best-path-orr-bitfield";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_neighbor.is_set || is_set(is_neighbor.yfilter)) leaf_name_data.push_back(is_neighbor.get_name_leafdata());
    if (update_group_number.is_set || is_set(update_group_number.yfilter)) leaf_name_data.push_back(update_group_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address == nullptr)
        {
            neighbor_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress>();
        }
        return neighbor_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(neighbor_address != nullptr)
    {
        children["neighbor-address"] = neighbor_address;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-neighbor")
    {
        is_neighbor = value;
        is_neighbor.value_namespace = name_space;
        is_neighbor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-group-number")
    {
        update_group_number = value;
        update_group_number.value_namespace = name_space;
        update_group_number.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-neighbor")
    {
        is_neighbor.yfilter = yfilter;
    }
    if(value_path == "update-group-number")
    {
        update_group_number.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address" || name == "is-neighbor" || name == "update-group-number")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::NeighborAddress()
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
    l2vpn_vpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnVplsAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress>())
	,ipv4_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress>())
{
    l2vpn_vpls_address->parent = this;
    l2vpn_mspw_address->parent = this;
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;

    yang_name = "neighbor-address"; yang_parent_name = "best-path-orr-bitfield"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::has_data() const
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::has_operation() const
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

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::get_name_leaf_data() const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-vpls-address" || name == "l2vpn-mspw-address" || name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-mcast-address" || name == "ipv4-label-address" || name == "ipv4-tunnel-address" || name == "ipv4-mdt-address" || name == "ipv4vpn-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-mcast-address" || name == "ipv6-label-address" || name == "ipv6vpn-address" || name == "ipv6vpn-mcast-address" || name == "rt-constraint-address" || name == "ipv6mvpn-address" || name == "ipv4mvpn-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "ipv4-flowspec-address" || name == "ipv6-flowspec-address" || name == "ipv4vpn-flowspec-address" || name == "ipv6vpn-flowspec-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::AddPathOrrBitfield()
    :
    is_neighbor{YType::boolean, "is-neighbor"},
    update_group_number{YType::uint32, "update-group-number"}
    	,
    neighbor_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress>())
{
    neighbor_address->parent = this;

    yang_name = "add-path-orr-bitfield"; yang_parent_name = "path-information"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::~AddPathOrrBitfield()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::has_data() const
{
    return is_neighbor.is_set
	|| update_group_number.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_neighbor.yfilter)
	|| ydk::is_set(update_group_number.yfilter)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "add-path-orr-bitfield";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_neighbor.is_set || is_set(is_neighbor.yfilter)) leaf_name_data.push_back(is_neighbor.get_name_leafdata());
    if (update_group_number.is_set || is_set(update_group_number.yfilter)) leaf_name_data.push_back(update_group_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address == nullptr)
        {
            neighbor_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress>();
        }
        return neighbor_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(neighbor_address != nullptr)
    {
        children["neighbor-address"] = neighbor_address;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-neighbor")
    {
        is_neighbor = value;
        is_neighbor.value_namespace = name_space;
        is_neighbor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-group-number")
    {
        update_group_number = value;
        update_group_number.value_namespace = name_space;
        update_group_number.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-neighbor")
    {
        is_neighbor.yfilter = yfilter;
    }
    if(value_path == "update-group-number")
    {
        update_group_number.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address" || name == "is-neighbor" || name == "update-group-number")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::NeighborAddress()
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
    l2vpn_vpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnVplsAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnMspwAddress>())
	,ipv4_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress>())
{
    l2vpn_vpls_address->parent = this;
    l2vpn_mspw_address->parent = this;
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;

    yang_name = "neighbor-address"; yang_parent_name = "add-path-orr-bitfield"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::has_data() const
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::has_operation() const
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

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::get_name_leaf_data() const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-vpls-address" || name == "l2vpn-mspw-address" || name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-mcast-address" || name == "ipv4-label-address" || name == "ipv4-tunnel-address" || name == "ipv4-mdt-address" || name == "ipv4vpn-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-mcast-address" || name == "ipv6-label-address" || name == "ipv6vpn-address" || name == "ipv6vpn-mcast-address" || name == "rt-constraint-address" || name == "ipv6mvpn-address" || name == "ipv4mvpn-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "ipv4-flowspec-address" || name == "ipv6-flowspec-address" || name == "ipv4vpn-flowspec-address" || name == "ipv6vpn-flowspec-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttributesAfterPolicyIn()
    :
    is_as_path2_byte{YType::boolean, "is-as-path2-byte"},
    is_application_gateway_present{YType::boolean, "is-application-gateway-present"},
    is_attr_set_present{YType::boolean, "is-attr-set-present"},
    set_aigp_inbound_igp{YType::boolean, "set-aigp-inbound-igp"},
    set_aigp_inbound_metric{YType::boolean, "set-aigp-inbound-metric"},
    is_rnh_present{YType::boolean, "is-rnh-present"},
    is_ribrnh_present{YType::boolean, "is-ribrnh-present"},
    attribute_key_number{YType::uint32, "attribute-key-number"},
    attribute_reuse_id_config{YType::boolean, "attribute-reuse-id-config"},
    attribute_reuse_id_max_id{YType::uint32, "attribute-reuse-id-max-id"},
    attribute_reuse_id_node{YType::uint32, "attribute-reuse-id-node"},
    attribute_reuse_id_current{YType::uint32, "attribute-reuse-id-current"},
    attribute_reuse_id_keys{YType::uint32, "attribute-reuse-id-keys"},
    attribute_reuse_id_recover_sec{YType::uint32, "attribute-reuse-id-recover-sec"},
    vpn_distinguisher{YType::uint32, "vpn-distinguisher"},
    rnh_type{YType::uint16, "rnh-type"},
    rnh_len{YType::uint8, "rnh-len"},
    rnh_addr_len{YType::uint32, "rnh-addr-len"},
    ribrnh_table{YType::uint32, "ribrnh-table"},
    ribrnh_mac{YType::str, "ribrnh-mac"},
    ribrnhip_table{YType::uint32, "ribrnhip-table"},
    ribrnh_vni{YType::uint32, "ribrnh-vni"},
    ribrnh_encap{YType::uint8, "ribrnh-encap"}
    	,
    common_attributes(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes>())
	,attr_set(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet>())
	,rnh_addr(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RnhAddr>())
	,ribrnh_ip(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp>())
{
    common_attributes->parent = this;
    attr_set->parent = this;
    rnh_addr->parent = this;
    ribrnh_ip->parent = this;

    yang_name = "attributes-after-policy-in"; yang_parent_name = "dampening"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::~AttributesAfterPolicyIn()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::has_data() const
{
    return is_as_path2_byte.is_set
	|| is_application_gateway_present.is_set
	|| is_attr_set_present.is_set
	|| set_aigp_inbound_igp.is_set
	|| set_aigp_inbound_metric.is_set
	|| is_rnh_present.is_set
	|| is_ribrnh_present.is_set
	|| attribute_key_number.is_set
	|| attribute_reuse_id_config.is_set
	|| attribute_reuse_id_max_id.is_set
	|| attribute_reuse_id_node.is_set
	|| attribute_reuse_id_current.is_set
	|| attribute_reuse_id_keys.is_set
	|| attribute_reuse_id_recover_sec.is_set
	|| vpn_distinguisher.is_set
	|| rnh_type.is_set
	|| rnh_len.is_set
	|| rnh_addr_len.is_set
	|| ribrnh_table.is_set
	|| ribrnh_mac.is_set
	|| ribrnhip_table.is_set
	|| ribrnh_vni.is_set
	|| ribrnh_encap.is_set
	|| (common_attributes !=  nullptr && common_attributes->has_data())
	|| (attr_set !=  nullptr && attr_set->has_data())
	|| (rnh_addr !=  nullptr && rnh_addr->has_data())
	|| (ribrnh_ip !=  nullptr && ribrnh_ip->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_as_path2_byte.yfilter)
	|| ydk::is_set(is_application_gateway_present.yfilter)
	|| ydk::is_set(is_attr_set_present.yfilter)
	|| ydk::is_set(set_aigp_inbound_igp.yfilter)
	|| ydk::is_set(set_aigp_inbound_metric.yfilter)
	|| ydk::is_set(is_rnh_present.yfilter)
	|| ydk::is_set(is_ribrnh_present.yfilter)
	|| ydk::is_set(attribute_key_number.yfilter)
	|| ydk::is_set(attribute_reuse_id_config.yfilter)
	|| ydk::is_set(attribute_reuse_id_max_id.yfilter)
	|| ydk::is_set(attribute_reuse_id_node.yfilter)
	|| ydk::is_set(attribute_reuse_id_current.yfilter)
	|| ydk::is_set(attribute_reuse_id_keys.yfilter)
	|| ydk::is_set(attribute_reuse_id_recover_sec.yfilter)
	|| ydk::is_set(vpn_distinguisher.yfilter)
	|| ydk::is_set(rnh_type.yfilter)
	|| ydk::is_set(rnh_len.yfilter)
	|| ydk::is_set(rnh_addr_len.yfilter)
	|| ydk::is_set(ribrnh_table.yfilter)
	|| ydk::is_set(ribrnh_mac.yfilter)
	|| ydk::is_set(ribrnhip_table.yfilter)
	|| ydk::is_set(ribrnh_vni.yfilter)
	|| ydk::is_set(ribrnh_encap.yfilter)
	|| (common_attributes !=  nullptr && common_attributes->has_operation())
	|| (attr_set !=  nullptr && attr_set->has_operation())
	|| (rnh_addr !=  nullptr && rnh_addr->has_operation())
	|| (ribrnh_ip !=  nullptr && ribrnh_ip->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes-after-policy-in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_as_path2_byte.is_set || is_set(is_as_path2_byte.yfilter)) leaf_name_data.push_back(is_as_path2_byte.get_name_leafdata());
    if (is_application_gateway_present.is_set || is_set(is_application_gateway_present.yfilter)) leaf_name_data.push_back(is_application_gateway_present.get_name_leafdata());
    if (is_attr_set_present.is_set || is_set(is_attr_set_present.yfilter)) leaf_name_data.push_back(is_attr_set_present.get_name_leafdata());
    if (set_aigp_inbound_igp.is_set || is_set(set_aigp_inbound_igp.yfilter)) leaf_name_data.push_back(set_aigp_inbound_igp.get_name_leafdata());
    if (set_aigp_inbound_metric.is_set || is_set(set_aigp_inbound_metric.yfilter)) leaf_name_data.push_back(set_aigp_inbound_metric.get_name_leafdata());
    if (is_rnh_present.is_set || is_set(is_rnh_present.yfilter)) leaf_name_data.push_back(is_rnh_present.get_name_leafdata());
    if (is_ribrnh_present.is_set || is_set(is_ribrnh_present.yfilter)) leaf_name_data.push_back(is_ribrnh_present.get_name_leafdata());
    if (attribute_key_number.is_set || is_set(attribute_key_number.yfilter)) leaf_name_data.push_back(attribute_key_number.get_name_leafdata());
    if (attribute_reuse_id_config.is_set || is_set(attribute_reuse_id_config.yfilter)) leaf_name_data.push_back(attribute_reuse_id_config.get_name_leafdata());
    if (attribute_reuse_id_max_id.is_set || is_set(attribute_reuse_id_max_id.yfilter)) leaf_name_data.push_back(attribute_reuse_id_max_id.get_name_leafdata());
    if (attribute_reuse_id_node.is_set || is_set(attribute_reuse_id_node.yfilter)) leaf_name_data.push_back(attribute_reuse_id_node.get_name_leafdata());
    if (attribute_reuse_id_current.is_set || is_set(attribute_reuse_id_current.yfilter)) leaf_name_data.push_back(attribute_reuse_id_current.get_name_leafdata());
    if (attribute_reuse_id_keys.is_set || is_set(attribute_reuse_id_keys.yfilter)) leaf_name_data.push_back(attribute_reuse_id_keys.get_name_leafdata());
    if (attribute_reuse_id_recover_sec.is_set || is_set(attribute_reuse_id_recover_sec.yfilter)) leaf_name_data.push_back(attribute_reuse_id_recover_sec.get_name_leafdata());
    if (vpn_distinguisher.is_set || is_set(vpn_distinguisher.yfilter)) leaf_name_data.push_back(vpn_distinguisher.get_name_leafdata());
    if (rnh_type.is_set || is_set(rnh_type.yfilter)) leaf_name_data.push_back(rnh_type.get_name_leafdata());
    if (rnh_len.is_set || is_set(rnh_len.yfilter)) leaf_name_data.push_back(rnh_len.get_name_leafdata());
    if (rnh_addr_len.is_set || is_set(rnh_addr_len.yfilter)) leaf_name_data.push_back(rnh_addr_len.get_name_leafdata());
    if (ribrnh_table.is_set || is_set(ribrnh_table.yfilter)) leaf_name_data.push_back(ribrnh_table.get_name_leafdata());
    if (ribrnh_mac.is_set || is_set(ribrnh_mac.yfilter)) leaf_name_data.push_back(ribrnh_mac.get_name_leafdata());
    if (ribrnhip_table.is_set || is_set(ribrnhip_table.yfilter)) leaf_name_data.push_back(ribrnhip_table.get_name_leafdata());
    if (ribrnh_vni.is_set || is_set(ribrnh_vni.yfilter)) leaf_name_data.push_back(ribrnh_vni.get_name_leafdata());
    if (ribrnh_encap.is_set || is_set(ribrnh_encap.yfilter)) leaf_name_data.push_back(ribrnh_encap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "common-attributes")
    {
        if(common_attributes == nullptr)
        {
            common_attributes = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes>();
        }
        return common_attributes;
    }

    if(child_yang_name == "attr-set")
    {
        if(attr_set == nullptr)
        {
            attr_set = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet>();
        }
        return attr_set;
    }

    if(child_yang_name == "rnh-addr")
    {
        if(rnh_addr == nullptr)
        {
            rnh_addr = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RnhAddr>();
        }
        return rnh_addr;
    }

    if(child_yang_name == "ribrnh-ip")
    {
        if(ribrnh_ip == nullptr)
        {
            ribrnh_ip = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp>();
        }
        return ribrnh_ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(common_attributes != nullptr)
    {
        children["common-attributes"] = common_attributes;
    }

    if(attr_set != nullptr)
    {
        children["attr-set"] = attr_set;
    }

    if(rnh_addr != nullptr)
    {
        children["rnh-addr"] = rnh_addr;
    }

    if(ribrnh_ip != nullptr)
    {
        children["ribrnh-ip"] = ribrnh_ip;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-as-path2-byte")
    {
        is_as_path2_byte = value;
        is_as_path2_byte.value_namespace = name_space;
        is_as_path2_byte.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-application-gateway-present")
    {
        is_application_gateway_present = value;
        is_application_gateway_present.value_namespace = name_space;
        is_application_gateway_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-attr-set-present")
    {
        is_attr_set_present = value;
        is_attr_set_present.value_namespace = name_space;
        is_attr_set_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-aigp-inbound-igp")
    {
        set_aigp_inbound_igp = value;
        set_aigp_inbound_igp.value_namespace = name_space;
        set_aigp_inbound_igp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-aigp-inbound-metric")
    {
        set_aigp_inbound_metric = value;
        set_aigp_inbound_metric.value_namespace = name_space;
        set_aigp_inbound_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-rnh-present")
    {
        is_rnh_present = value;
        is_rnh_present.value_namespace = name_space;
        is_rnh_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ribrnh-present")
    {
        is_ribrnh_present = value;
        is_ribrnh_present.value_namespace = name_space;
        is_ribrnh_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-key-number")
    {
        attribute_key_number = value;
        attribute_key_number.value_namespace = name_space;
        attribute_key_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-reuse-id-config")
    {
        attribute_reuse_id_config = value;
        attribute_reuse_id_config.value_namespace = name_space;
        attribute_reuse_id_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-reuse-id-max-id")
    {
        attribute_reuse_id_max_id = value;
        attribute_reuse_id_max_id.value_namespace = name_space;
        attribute_reuse_id_max_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-reuse-id-node")
    {
        attribute_reuse_id_node = value;
        attribute_reuse_id_node.value_namespace = name_space;
        attribute_reuse_id_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-reuse-id-current")
    {
        attribute_reuse_id_current = value;
        attribute_reuse_id_current.value_namespace = name_space;
        attribute_reuse_id_current.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-reuse-id-keys")
    {
        attribute_reuse_id_keys = value;
        attribute_reuse_id_keys.value_namespace = name_space;
        attribute_reuse_id_keys.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-reuse-id-recover-sec")
    {
        attribute_reuse_id_recover_sec = value;
        attribute_reuse_id_recover_sec.value_namespace = name_space;
        attribute_reuse_id_recover_sec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpn-distinguisher")
    {
        vpn_distinguisher = value;
        vpn_distinguisher.value_namespace = name_space;
        vpn_distinguisher.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rnh-type")
    {
        rnh_type = value;
        rnh_type.value_namespace = name_space;
        rnh_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rnh-len")
    {
        rnh_len = value;
        rnh_len.value_namespace = name_space;
        rnh_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rnh-addr-len")
    {
        rnh_addr_len = value;
        rnh_addr_len.value_namespace = name_space;
        rnh_addr_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ribrnh-table")
    {
        ribrnh_table = value;
        ribrnh_table.value_namespace = name_space;
        ribrnh_table.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ribrnh-mac")
    {
        ribrnh_mac = value;
        ribrnh_mac.value_namespace = name_space;
        ribrnh_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ribrnhip-table")
    {
        ribrnhip_table = value;
        ribrnhip_table.value_namespace = name_space;
        ribrnhip_table.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ribrnh-vni")
    {
        ribrnh_vni = value;
        ribrnh_vni.value_namespace = name_space;
        ribrnh_vni.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ribrnh-encap")
    {
        ribrnh_encap = value;
        ribrnh_encap.value_namespace = name_space;
        ribrnh_encap.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-as-path2-byte")
    {
        is_as_path2_byte.yfilter = yfilter;
    }
    if(value_path == "is-application-gateway-present")
    {
        is_application_gateway_present.yfilter = yfilter;
    }
    if(value_path == "is-attr-set-present")
    {
        is_attr_set_present.yfilter = yfilter;
    }
    if(value_path == "set-aigp-inbound-igp")
    {
        set_aigp_inbound_igp.yfilter = yfilter;
    }
    if(value_path == "set-aigp-inbound-metric")
    {
        set_aigp_inbound_metric.yfilter = yfilter;
    }
    if(value_path == "is-rnh-present")
    {
        is_rnh_present.yfilter = yfilter;
    }
    if(value_path == "is-ribrnh-present")
    {
        is_ribrnh_present.yfilter = yfilter;
    }
    if(value_path == "attribute-key-number")
    {
        attribute_key_number.yfilter = yfilter;
    }
    if(value_path == "attribute-reuse-id-config")
    {
        attribute_reuse_id_config.yfilter = yfilter;
    }
    if(value_path == "attribute-reuse-id-max-id")
    {
        attribute_reuse_id_max_id.yfilter = yfilter;
    }
    if(value_path == "attribute-reuse-id-node")
    {
        attribute_reuse_id_node.yfilter = yfilter;
    }
    if(value_path == "attribute-reuse-id-current")
    {
        attribute_reuse_id_current.yfilter = yfilter;
    }
    if(value_path == "attribute-reuse-id-keys")
    {
        attribute_reuse_id_keys.yfilter = yfilter;
    }
    if(value_path == "attribute-reuse-id-recover-sec")
    {
        attribute_reuse_id_recover_sec.yfilter = yfilter;
    }
    if(value_path == "vpn-distinguisher")
    {
        vpn_distinguisher.yfilter = yfilter;
    }
    if(value_path == "rnh-type")
    {
        rnh_type.yfilter = yfilter;
    }
    if(value_path == "rnh-len")
    {
        rnh_len.yfilter = yfilter;
    }
    if(value_path == "rnh-addr-len")
    {
        rnh_addr_len.yfilter = yfilter;
    }
    if(value_path == "ribrnh-table")
    {
        ribrnh_table.yfilter = yfilter;
    }
    if(value_path == "ribrnh-mac")
    {
        ribrnh_mac.yfilter = yfilter;
    }
    if(value_path == "ribrnhip-table")
    {
        ribrnhip_table.yfilter = yfilter;
    }
    if(value_path == "ribrnh-vni")
    {
        ribrnh_vni.yfilter = yfilter;
    }
    if(value_path == "ribrnh-encap")
    {
        ribrnh_encap.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common-attributes" || name == "attr-set" || name == "rnh-addr" || name == "ribrnh-ip" || name == "is-as-path2-byte" || name == "is-application-gateway-present" || name == "is-attr-set-present" || name == "set-aigp-inbound-igp" || name == "set-aigp-inbound-metric" || name == "is-rnh-present" || name == "is-ribrnh-present" || name == "attribute-key-number" || name == "attribute-reuse-id-config" || name == "attribute-reuse-id-max-id" || name == "attribute-reuse-id-node" || name == "attribute-reuse-id-current" || name == "attribute-reuse-id-keys" || name == "attribute-reuse-id-recover-sec" || name == "vpn-distinguisher" || name == "rnh-type" || name == "rnh-len" || name == "rnh-addr-len" || name == "ribrnh-table" || name == "ribrnh-mac" || name == "ribrnhip-table" || name == "ribrnh-vni" || name == "ribrnh-encap")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::CommonAttributes()
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
    tunnel_encap(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap>())
{
    tunnel_encap->parent = this;

    yang_name = "common-attributes"; yang_parent_name = "attributes-after-policy-in"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::~CommonAttributes()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::has_data() const
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::has_operation() const
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

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::get_name_leaf_data() const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel-encap")
    {
        if(tunnel_encap == nullptr)
        {
            tunnel_encap = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap>();
        }
        return tunnel_encap;
    }

    if(child_yang_name == "community")
    {
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::Community>();
        c->parent = this;
        community.push_back(c);
        return c;
    }

    if(child_yang_name == "extended-community")
    {
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::ExtendedCommunity>();
        c->parent = this;
        extended_community.push_back(c);
        return c;
    }

    if(child_yang_name == "unknown-attribute")
    {
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::UnknownAttribute>();
        c->parent = this;
        unknown_attribute.push_back(c);
        return c;
    }

    if(child_yang_name == "cluster")
    {
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::Cluster>();
        c->parent = this;
        cluster.push_back(c);
        return c;
    }

    if(child_yang_name == "l2tpv3-cookie")
    {
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::L2Tpv3Cookie>();
        c->parent = this;
        l2tpv3_cookie.push_back(c);
        return c;
    }

    if(child_yang_name == "connector-value")
    {
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::ConnectorValue>();
        c->parent = this;
        connector_value.push_back(c);
        return c;
    }

    if(child_yang_name == "pmsi-value")
    {
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::PmsiValue>();
        c->parent = this;
        pmsi_value.push_back(c);
        return c;
    }

    if(child_yang_name == "ls-attr")
    {
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::LsAttr>();
        c->parent = this;
        ls_attr.push_back(c);
        return c;
    }

    if(child_yang_name == "label-index-attr")
    {
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::LabelIndexAttr>();
        c->parent = this;
        label_index_attr.push_back(c);
        return c;
    }

    if(child_yang_name == "pe-distinguisher-label")
    {
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::PeDistinguisherLabel>();
        c->parent = this;
        pe_distinguisher_label.push_back(c);
        return c;
    }

    if(child_yang_name == "large-community")
    {
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::LargeCommunity>();
        c->parent = this;
        large_community.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(tunnel_encap != nullptr)
    {
        children["tunnel-encap"] = tunnel_encap;
    }

    count = 0;
    for (auto const & c : community)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : extended_community)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : unknown_attribute)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : cluster)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : l2tpv3_cookie)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : connector_value)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : pmsi_value)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : ls_attr)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : label_index_attr)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : pe_distinguisher_label)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : large_community)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-encap" || name == "community" || name == "extended-community" || name == "unknown-attribute" || name == "cluster" || name == "l2tpv3-cookie" || name == "connector-value" || name == "pmsi-value" || name == "ls-attr" || name == "label-index-attr" || name == "pe-distinguisher-label" || name == "large-community" || name == "is-metric-present" || name == "is-local-pref-present" || name == "is-atomic-aggregate-present" || name == "is-aggregator-present" || name == "is-origin-present" || name == "is-as-path-present" || name == "is-community-present" || name == "is-extended-community-present" || name == "is-ssa-present" || name == "is-connector-present" || name == "is-pmsi-present" || name == "is-pppmp-present" || name == "is-aigp-present" || name == "is-pe-distinguisher-label-present" || name == "is-ls-attribute-present" || name == "is-label-index-present" || name == "neighbor-as" || name == "aggregator-as" || name == "aggregator-address" || name == "metric" || name == "local-preference" || name == "origin" || name == "as-path" || name == "extended-community-flags" || name == "originator" || name == "l2tpv3-session-id" || name == "connector-type" || name == "aigp-metric-value" || name == "pmsi-type" || name == "pmsi-flags" || name == "pmsi-label" || name == "ppm-pvalue" || name == "is-large-community-present")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::TunnelEncap()
    :
    sr_policy(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy>())
{
    sr_policy->parent = this;

    yang_name = "tunnel-encap"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::~TunnelEncap()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::has_data() const
{
    return (sr_policy !=  nullptr && sr_policy->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::has_operation() const
{
    return is_set(yfilter)
	|| (sr_policy !=  nullptr && sr_policy->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-encap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-policy")
    {
        if(sr_policy == nullptr)
        {
            sr_policy = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy>();
        }
        return sr_policy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sr_policy != nullptr)
    {
        children["sr-policy"] = sr_policy;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-policy")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SrPolicy()
    :
    tunnel_encap_type{YType::uint16, "tunnel-encap-type"},
    preference{YType::uint32, "preference"},
    state{YType::boolean, "state"},
    request_state{YType::enumeration, "request-state"}
    	,
    binding_sid(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::BindingSid>())
	,allocated_binding_sid(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid>())
{
    binding_sid->parent = this;
    allocated_binding_sid->parent = this;

    yang_name = "sr-policy"; yang_parent_name = "tunnel-encap"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::~SrPolicy()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::has_data() const
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::has_operation() const
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

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_encap_type.is_set || is_set(tunnel_encap_type.yfilter)) leaf_name_data.push_back(tunnel_encap_type.get_name_leafdata());
    if (preference.is_set || is_set(preference.yfilter)) leaf_name_data.push_back(preference.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (request_state.is_set || is_set(request_state.yfilter)) leaf_name_data.push_back(request_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "binding-sid")
    {
        if(binding_sid == nullptr)
        {
            binding_sid = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::BindingSid>();
        }
        return binding_sid;
    }

    if(child_yang_name == "allocated-binding-sid")
    {
        if(allocated_binding_sid == nullptr)
        {
            allocated_binding_sid = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid>();
        }
        return allocated_binding_sid;
    }

    if(child_yang_name == "segment-list")
    {
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList>();
        c->parent = this;
        segment_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(binding_sid != nullptr)
    {
        children["binding-sid"] = binding_sid;
    }

    if(allocated_binding_sid != nullptr)
    {
        children["allocated-binding-sid"] = allocated_binding_sid;
    }

    count = 0;
    for (auto const & c : segment_list)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "binding-sid" || name == "allocated-binding-sid" || name == "segment-list" || name == "tunnel-encap-type" || name == "preference" || name == "state" || name == "request-state")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::BindingSid::BindingSid()
    :
    type{YType::enumeration, "type"},
    label{YType::uint32, "label"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "binding-sid"; yang_parent_name = "sr-policy"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::BindingSid::~BindingSid()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::BindingSid::has_data() const
{
    return type.is_set
	|| label.is_set
	|| ipv6_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::BindingSid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::BindingSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::BindingSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::BindingSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::BindingSid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::BindingSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::BindingSid::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::BindingSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "label" || name == "ipv6-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::AllocatedBindingSid()
    :
    type{YType::enumeration, "type"},
    label{YType::uint32, "label"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "allocated-binding-sid"; yang_parent_name = "sr-policy"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::~AllocatedBindingSid()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::has_data() const
{
    return type.is_set
	|| label.is_set
	|| ipv6_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allocated-binding-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "label" || name == "ipv6-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::SegmentList()
    :
    weight{YType::uint8, "weight"}
{

    yang_name = "segment-list"; yang_parent_name = "sr-policy"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::~SegmentList()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::has_data() const
{
    for (std::size_t index=0; index<segment.size(); index++)
    {
        if(segment[index]->has_data())
            return true;
    }
    return weight.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::has_operation() const
{
    for (std::size_t index=0; index<segment.size(); index++)
    {
        if(segment[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "segment")
    {
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment>();
        c->parent = this;
        segment.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : segment)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "segment" || name == "weight")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::Segment()
    :
    type{YType::enumeration, "type"},
    label{YType::uint32, "label"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "segment"; yang_parent_name = "segment-list"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::~Segment()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::has_data() const
{
    return type.is_set
	|| label.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "label" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::Community::Community()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "community"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::Community::~Community()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::Community::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::Community::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::Community::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::Community::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::Community::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::Community::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::Community::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::Community::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::Community::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::ExtendedCommunity::ExtendedCommunity()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "extended-community"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::ExtendedCommunity::~ExtendedCommunity()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::ExtendedCommunity::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::ExtendedCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::ExtendedCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::ExtendedCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::ExtendedCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::ExtendedCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::ExtendedCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::ExtendedCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::ExtendedCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::UnknownAttribute::UnknownAttribute()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "unknown-attribute"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::UnknownAttribute::~UnknownAttribute()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::UnknownAttribute::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::UnknownAttribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::UnknownAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-attribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::UnknownAttribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::UnknownAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::UnknownAttribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::UnknownAttribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::UnknownAttribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::UnknownAttribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::Cluster::Cluster()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "cluster"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::Cluster::~Cluster()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::Cluster::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::Cluster::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::Cluster::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cluster";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::Cluster::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::Cluster::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::Cluster::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::Cluster::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::Cluster::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::Cluster::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::L2Tpv3Cookie::L2Tpv3Cookie()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "l2tpv3-cookie"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::L2Tpv3Cookie::~L2Tpv3Cookie()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::L2Tpv3Cookie::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::L2Tpv3Cookie::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::L2Tpv3Cookie::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tpv3-cookie";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::L2Tpv3Cookie::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::L2Tpv3Cookie::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::L2Tpv3Cookie::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::L2Tpv3Cookie::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::L2Tpv3Cookie::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::L2Tpv3Cookie::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::ConnectorValue::ConnectorValue()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "connector-value"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::ConnectorValue::~ConnectorValue()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::ConnectorValue::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::ConnectorValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::ConnectorValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connector-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::ConnectorValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::ConnectorValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::ConnectorValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::ConnectorValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::ConnectorValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::ConnectorValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::PmsiValue::PmsiValue()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "pmsi-value"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::PmsiValue::~PmsiValue()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::PmsiValue::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::PmsiValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::PmsiValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmsi-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::PmsiValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::PmsiValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::PmsiValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::PmsiValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::PmsiValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::PmsiValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::LsAttr::LsAttr()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "ls-attr"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::LsAttr::~LsAttr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::LsAttr::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::LsAttr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::LsAttr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ls-attr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::LsAttr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::LsAttr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::LsAttr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::LsAttr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::LsAttr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::LsAttr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::LabelIndexAttr::LabelIndexAttr()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "label-index-attr"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::LabelIndexAttr::~LabelIndexAttr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::LabelIndexAttr::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::LabelIndexAttr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::LabelIndexAttr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-index-attr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::LabelIndexAttr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::LabelIndexAttr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::LabelIndexAttr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::LabelIndexAttr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::LabelIndexAttr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::LabelIndexAttr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::PeDistinguisherLabel::PeDistinguisherLabel()
    :
    pe_address{YType::str, "pe-address"},
    label{YType::uint32, "label"}
{

    yang_name = "pe-distinguisher-label"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::PeDistinguisherLabel::~PeDistinguisherLabel()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::PeDistinguisherLabel::has_data() const
{
    return pe_address.is_set
	|| label.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::PeDistinguisherLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pe_address.yfilter)
	|| ydk::is_set(label.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::PeDistinguisherLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pe-distinguisher-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::PeDistinguisherLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pe_address.is_set || is_set(pe_address.yfilter)) leaf_name_data.push_back(pe_address.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::PeDistinguisherLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::PeDistinguisherLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::PeDistinguisherLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::PeDistinguisherLabel::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::PeDistinguisherLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pe-address" || name == "label")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::LargeCommunity::LargeCommunity()
    :
    global_admin{YType::uint32, "global-admin"},
    local_data1{YType::uint32, "local-data1"},
    local_data2{YType::uint32, "local-data2"}
{

    yang_name = "large-community"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::LargeCommunity::~LargeCommunity()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::LargeCommunity::has_data() const
{
    return global_admin.is_set
	|| local_data1.is_set
	|| local_data2.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::LargeCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(global_admin.yfilter)
	|| ydk::is_set(local_data1.yfilter)
	|| ydk::is_set(local_data2.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::LargeCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "large-community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::LargeCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (global_admin.is_set || is_set(global_admin.yfilter)) leaf_name_data.push_back(global_admin.get_name_leafdata());
    if (local_data1.is_set || is_set(local_data1.yfilter)) leaf_name_data.push_back(local_data1.get_name_leafdata());
    if (local_data2.is_set || is_set(local_data2.yfilter)) leaf_name_data.push_back(local_data2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::LargeCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::LargeCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::LargeCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::LargeCommunity::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::LargeCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global-admin" || name == "local-data1" || name == "local-data2")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::AttrSet()
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
    tunnel_encap(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap>())
{
    tunnel_encap->parent = this;

    yang_name = "attr-set"; yang_parent_name = "attributes-after-policy-in"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::~AttrSet()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::has_data() const
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::has_operation() const
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

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attr-set";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::get_name_leaf_data() const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel-encap")
    {
        if(tunnel_encap == nullptr)
        {
            tunnel_encap = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap>();
        }
        return tunnel_encap;
    }

    if(child_yang_name == "community")
    {
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::Community>();
        c->parent = this;
        community.push_back(c);
        return c;
    }

    if(child_yang_name == "extended-community")
    {
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity>();
        c->parent = this;
        extended_community.push_back(c);
        return c;
    }

    if(child_yang_name == "unknown-attribute")
    {
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::UnknownAttribute>();
        c->parent = this;
        unknown_attribute.push_back(c);
        return c;
    }

    if(child_yang_name == "cluster")
    {
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::Cluster>();
        c->parent = this;
        cluster.push_back(c);
        return c;
    }

    if(child_yang_name == "l2tpv3-cookie")
    {
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::L2Tpv3Cookie>();
        c->parent = this;
        l2tpv3_cookie.push_back(c);
        return c;
    }

    if(child_yang_name == "connector-value")
    {
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::ConnectorValue>();
        c->parent = this;
        connector_value.push_back(c);
        return c;
    }

    if(child_yang_name == "pmsi-value")
    {
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::PmsiValue>();
        c->parent = this;
        pmsi_value.push_back(c);
        return c;
    }

    if(child_yang_name == "ls-attr")
    {
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::LsAttr>();
        c->parent = this;
        ls_attr.push_back(c);
        return c;
    }

    if(child_yang_name == "label-index-attr")
    {
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::LabelIndexAttr>();
        c->parent = this;
        label_index_attr.push_back(c);
        return c;
    }

    if(child_yang_name == "pe-distinguisher-label")
    {
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel>();
        c->parent = this;
        pe_distinguisher_label.push_back(c);
        return c;
    }

    if(child_yang_name == "large-community")
    {
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::LargeCommunity>();
        c->parent = this;
        large_community.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(tunnel_encap != nullptr)
    {
        children["tunnel-encap"] = tunnel_encap;
    }

    count = 0;
    for (auto const & c : community)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : extended_community)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : unknown_attribute)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : cluster)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : l2tpv3_cookie)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : connector_value)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : pmsi_value)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : ls_attr)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : label_index_attr)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : pe_distinguisher_label)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : large_community)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-encap" || name == "community" || name == "extended-community" || name == "unknown-attribute" || name == "cluster" || name == "l2tpv3-cookie" || name == "connector-value" || name == "pmsi-value" || name == "ls-attr" || name == "label-index-attr" || name == "pe-distinguisher-label" || name == "large-community" || name == "is-metric-present" || name == "is-local-pref-present" || name == "is-atomic-aggregate-present" || name == "is-aggregator-present" || name == "is-origin-present" || name == "is-as-path-present" || name == "is-community-present" || name == "is-extended-community-present" || name == "is-ssa-present" || name == "is-connector-present" || name == "is-pmsi-present" || name == "is-pppmp-present" || name == "is-aigp-present" || name == "is-pe-distinguisher-label-present" || name == "is-ls-attribute-present" || name == "is-label-index-present" || name == "neighbor-as" || name == "aggregator-as" || name == "aggregator-address" || name == "metric" || name == "local-preference" || name == "origin" || name == "as-path" || name == "extended-community-flags" || name == "originator" || name == "l2tpv3-session-id" || name == "connector-type" || name == "aigp-metric-value" || name == "pmsi-type" || name == "pmsi-flags" || name == "pmsi-label" || name == "ppm-pvalue" || name == "is-large-community-present")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::TunnelEncap()
    :
    sr_policy(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy>())
{
    sr_policy->parent = this;

    yang_name = "tunnel-encap"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::~TunnelEncap()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::has_data() const
{
    return (sr_policy !=  nullptr && sr_policy->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::has_operation() const
{
    return is_set(yfilter)
	|| (sr_policy !=  nullptr && sr_policy->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-encap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-policy")
    {
        if(sr_policy == nullptr)
        {
            sr_policy = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy>();
        }
        return sr_policy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sr_policy != nullptr)
    {
        children["sr-policy"] = sr_policy;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-policy")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SrPolicy()
    :
    tunnel_encap_type{YType::uint16, "tunnel-encap-type"},
    preference{YType::uint32, "preference"},
    state{YType::boolean, "state"},
    request_state{YType::enumeration, "request-state"}
    	,
    binding_sid(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::BindingSid>())
	,allocated_binding_sid(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid>())
{
    binding_sid->parent = this;
    allocated_binding_sid->parent = this;

    yang_name = "sr-policy"; yang_parent_name = "tunnel-encap"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::~SrPolicy()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::has_data() const
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::has_operation() const
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

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_encap_type.is_set || is_set(tunnel_encap_type.yfilter)) leaf_name_data.push_back(tunnel_encap_type.get_name_leafdata());
    if (preference.is_set || is_set(preference.yfilter)) leaf_name_data.push_back(preference.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (request_state.is_set || is_set(request_state.yfilter)) leaf_name_data.push_back(request_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "binding-sid")
    {
        if(binding_sid == nullptr)
        {
            binding_sid = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::BindingSid>();
        }
        return binding_sid;
    }

    if(child_yang_name == "allocated-binding-sid")
    {
        if(allocated_binding_sid == nullptr)
        {
            allocated_binding_sid = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid>();
        }
        return allocated_binding_sid;
    }

    if(child_yang_name == "segment-list")
    {
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList>();
        c->parent = this;
        segment_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(binding_sid != nullptr)
    {
        children["binding-sid"] = binding_sid;
    }

    if(allocated_binding_sid != nullptr)
    {
        children["allocated-binding-sid"] = allocated_binding_sid;
    }

    count = 0;
    for (auto const & c : segment_list)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "binding-sid" || name == "allocated-binding-sid" || name == "segment-list" || name == "tunnel-encap-type" || name == "preference" || name == "state" || name == "request-state")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::BindingSid::BindingSid()
    :
    type{YType::enumeration, "type"},
    label{YType::uint32, "label"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "binding-sid"; yang_parent_name = "sr-policy"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::BindingSid::~BindingSid()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::BindingSid::has_data() const
{
    return type.is_set
	|| label.is_set
	|| ipv6_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::BindingSid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::BindingSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::BindingSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::BindingSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::BindingSid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::BindingSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::BindingSid::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::BindingSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "label" || name == "ipv6-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::AllocatedBindingSid()
    :
    type{YType::enumeration, "type"},
    label{YType::uint32, "label"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "allocated-binding-sid"; yang_parent_name = "sr-policy"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::~AllocatedBindingSid()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::has_data() const
{
    return type.is_set
	|| label.is_set
	|| ipv6_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allocated-binding-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "label" || name == "ipv6-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::SegmentList()
    :
    weight{YType::uint8, "weight"}
{

    yang_name = "segment-list"; yang_parent_name = "sr-policy"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::~SegmentList()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::has_data() const
{
    for (std::size_t index=0; index<segment.size(); index++)
    {
        if(segment[index]->has_data())
            return true;
    }
    return weight.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::has_operation() const
{
    for (std::size_t index=0; index<segment.size(); index++)
    {
        if(segment[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "segment")
    {
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment>();
        c->parent = this;
        segment.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : segment)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "segment" || name == "weight")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::Segment()
    :
    type{YType::enumeration, "type"},
    label{YType::uint32, "label"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "segment"; yang_parent_name = "segment-list"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::~Segment()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::has_data() const
{
    return type.is_set
	|| label.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "label" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::Community::Community()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "community"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::Community::~Community()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::Community::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::Community::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::Community::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::Community::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::Community::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::Community::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::Community::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::Community::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::Community::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity::ExtendedCommunity()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "extended-community"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity::~ExtendedCommunity()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::UnknownAttribute::UnknownAttribute()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "unknown-attribute"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::UnknownAttribute::~UnknownAttribute()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::UnknownAttribute::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::UnknownAttribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::UnknownAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-attribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::UnknownAttribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::UnknownAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::UnknownAttribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::UnknownAttribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::UnknownAttribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::UnknownAttribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::Cluster::Cluster()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "cluster"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::Cluster::~Cluster()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::Cluster::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::Cluster::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::Cluster::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cluster";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::Cluster::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::Cluster::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::Cluster::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::Cluster::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::Cluster::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::Cluster::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::L2Tpv3Cookie::L2Tpv3Cookie()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "l2tpv3-cookie"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::L2Tpv3Cookie::~L2Tpv3Cookie()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::L2Tpv3Cookie::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::L2Tpv3Cookie::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::L2Tpv3Cookie::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tpv3-cookie";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::L2Tpv3Cookie::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::L2Tpv3Cookie::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::L2Tpv3Cookie::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::L2Tpv3Cookie::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::L2Tpv3Cookie::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::L2Tpv3Cookie::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::ConnectorValue::ConnectorValue()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "connector-value"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::ConnectorValue::~ConnectorValue()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::ConnectorValue::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::ConnectorValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::ConnectorValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connector-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::ConnectorValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::ConnectorValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::ConnectorValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::ConnectorValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::ConnectorValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::ConnectorValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::PmsiValue::PmsiValue()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "pmsi-value"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::PmsiValue::~PmsiValue()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::PmsiValue::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::PmsiValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::PmsiValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmsi-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::PmsiValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::PmsiValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::PmsiValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::PmsiValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::PmsiValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::PmsiValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::LsAttr::LsAttr()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "ls-attr"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::LsAttr::~LsAttr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::LsAttr::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::LsAttr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::LsAttr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ls-attr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::LsAttr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::LsAttr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::LsAttr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::LsAttr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::LsAttr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::LsAttr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::LabelIndexAttr::LabelIndexAttr()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "label-index-attr"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::LabelIndexAttr::~LabelIndexAttr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::LabelIndexAttr::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::LabelIndexAttr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::LabelIndexAttr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-index-attr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::LabelIndexAttr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::LabelIndexAttr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::LabelIndexAttr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::LabelIndexAttr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::LabelIndexAttr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::LabelIndexAttr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel::PeDistinguisherLabel()
    :
    pe_address{YType::str, "pe-address"},
    label{YType::uint32, "label"}
{

    yang_name = "pe-distinguisher-label"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel::~PeDistinguisherLabel()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel::has_data() const
{
    return pe_address.is_set
	|| label.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pe_address.yfilter)
	|| ydk::is_set(label.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pe-distinguisher-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pe_address.is_set || is_set(pe_address.yfilter)) leaf_name_data.push_back(pe_address.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pe-address" || name == "label")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::LargeCommunity::LargeCommunity()
    :
    global_admin{YType::uint32, "global-admin"},
    local_data1{YType::uint32, "local-data1"},
    local_data2{YType::uint32, "local-data2"}
{

    yang_name = "large-community"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::LargeCommunity::~LargeCommunity()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::LargeCommunity::has_data() const
{
    return global_admin.is_set
	|| local_data1.is_set
	|| local_data2.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::LargeCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(global_admin.yfilter)
	|| ydk::is_set(local_data1.yfilter)
	|| ydk::is_set(local_data2.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::LargeCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "large-community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::LargeCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (global_admin.is_set || is_set(global_admin.yfilter)) leaf_name_data.push_back(global_admin.get_name_leafdata());
    if (local_data1.is_set || is_set(local_data1.yfilter)) leaf_name_data.push_back(local_data1.get_name_leafdata());
    if (local_data2.is_set || is_set(local_data2.yfilter)) leaf_name_data.push_back(local_data2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::LargeCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::LargeCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::LargeCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::LargeCommunity::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::LargeCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global-admin" || name == "local-data1" || name == "local-data2")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RnhAddr::RnhAddr()
    :
    len{YType::enumeration, "len"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"},
    mac_address{YType::str, "mac-address"}
{

    yang_name = "rnh-addr"; yang_parent_name = "attributes-after-policy-in"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RnhAddr::~RnhAddr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RnhAddr::has_data() const
{
    return len.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set
	|| mac_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RnhAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(len.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(mac_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RnhAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rnh-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RnhAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (len.is_set || is_set(len.yfilter)) leaf_name_data.push_back(len.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RnhAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RnhAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RnhAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RnhAddr::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RnhAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "len" || name == "ipv4-address" || name == "ipv6-address" || name == "mac-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::RibrnhIp()
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
    l2vpn_vpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::L2VpnVplsAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::L2VpnMspwAddress>())
	,ipv4_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress>())
{
    l2vpn_vpls_address->parent = this;
    l2vpn_mspw_address->parent = this;
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;

    yang_name = "ribrnh-ip"; yang_parent_name = "attributes-after-policy-in"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::~RibrnhIp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::has_data() const
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::has_operation() const
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

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ribrnh-ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::get_name_leaf_data() const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-vpls-address" || name == "l2vpn-mspw-address" || name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-mcast-address" || name == "ipv4-label-address" || name == "ipv4-tunnel-address" || name == "ipv4-mdt-address" || name == "ipv4vpn-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-mcast-address" || name == "ipv6-label-address" || name == "ipv6vpn-address" || name == "ipv6vpn-mcast-address" || name == "rt-constraint-address" || name == "ipv6mvpn-address" || name == "ipv4mvpn-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "ipv4-flowspec-address" || name == "ipv6-flowspec-address" || name == "ipv4vpn-flowspec-address" || name == "ipv6vpn-flowspec-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "ribrnh-ip"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "ribrnh-ip"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "ribrnh-ip"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "ribrnh-ip"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilters()
{

    yang_name = "prefix-filters"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::~PrefixFilters()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::has_data() const
{
    for (std::size_t index=0; index<prefix_filter.size(); index++)
    {
        if(prefix_filter[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::has_operation() const
{
    for (std::size_t index=0; index<prefix_filter.size(); index++)
    {
        if(prefix_filter[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-filters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-filter")
    {
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter>();
        c->parent = this;
        prefix_filter.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : prefix_filter)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-filter")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixFilter()
    :
    neighbor_address{YType::str, "neighbor-address"},
    af_name{YType::enumeration, "af-name"}
    	,
    neighbor_address_xr(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr>())
	,prefix_list_info(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo>())
{
    neighbor_address_xr->parent = this;
    prefix_list_info->parent = this;

    yang_name = "prefix-filter"; yang_parent_name = "prefix-filters"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::~PrefixFilter()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::has_data() const
{
    return neighbor_address.is_set
	|| af_name.is_set
	|| (neighbor_address_xr !=  nullptr && neighbor_address_xr->has_data())
	|| (prefix_list_info !=  nullptr && prefix_list_info->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| (neighbor_address_xr !=  nullptr && neighbor_address_xr->has_operation())
	|| (prefix_list_info !=  nullptr && prefix_list_info->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-filter" <<"[neighbor-address='" <<neighbor_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-address-xr")
    {
        if(neighbor_address_xr == nullptr)
        {
            neighbor_address_xr = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr>();
        }
        return neighbor_address_xr;
    }

    if(child_yang_name == "prefix-list-info")
    {
        if(prefix_list_info == nullptr)
        {
            prefix_list_info = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo>();
        }
        return prefix_list_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(neighbor_address_xr != nullptr)
    {
        children["neighbor-address-xr"] = neighbor_address_xr;
    }

    if(prefix_list_info != nullptr)
    {
        children["prefix-list-info"] = prefix_list_info;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address-xr" || name == "prefix-list-info" || name == "neighbor-address" || name == "af-name")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::NeighborAddressXr()
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
    l2vpn_vpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::L2VpnVplsAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::L2VpnMspwAddress>())
	,ipv4_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::Ipv6SrPolicyAddress>())
{
    l2vpn_vpls_address->parent = this;
    l2vpn_mspw_address->parent = this;
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;

    yang_name = "neighbor-address-xr"; yang_parent_name = "prefix-filter"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::~NeighborAddressXr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::has_data() const
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::has_operation() const
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

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::get_name_leaf_data() const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-vpls-address" || name == "l2vpn-mspw-address" || name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-mcast-address" || name == "ipv4-label-address" || name == "ipv4-tunnel-address" || name == "ipv4-mdt-address" || name == "ipv4vpn-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-mcast-address" || name == "ipv6-label-address" || name == "ipv6vpn-address" || name == "ipv6vpn-mcast-address" || name == "rt-constraint-address" || name == "ipv6mvpn-address" || name == "ipv4mvpn-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "ipv4-flowspec-address" || name == "ipv6-flowspec-address" || name == "ipv4vpn-flowspec-address" || name == "ipv6vpn-flowspec-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "neighbor-address-xr"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address-xr"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "neighbor-address-xr"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "neighbor-address-xr"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::PrefixListInfo()
{

    yang_name = "prefix-list-info"; yang_parent_name = "prefix-filter"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::~PrefixListInfo()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::has_data() const
{
    for (std::size_t index=0; index<bgp_pfxlst.size(); index++)
    {
        if(bgp_pfxlst[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::has_operation() const
{
    for (std::size_t index=0; index<bgp_pfxlst.size(); index++)
    {
        if(bgp_pfxlst[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-list-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-pfxlst")
    {
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst>();
        c->parent = this;
        bgp_pfxlst.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : bgp_pfxlst)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-pfxlst")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPfxlst()
    :
    sequence_number{YType::uint32, "sequence-number"},
    is_prefix_grant{YType::boolean, "is-prefix-grant"},
    min_prefix_length{YType::uint8, "min-prefix-length"},
    max_prefix_length{YType::uint8, "max-prefix-length"}
    	,
    bgp_prefix(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix>())
{
    bgp_prefix->parent = this;

    yang_name = "bgp-pfxlst"; yang_parent_name = "prefix-list-info"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::~BgpPfxlst()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::has_data() const
{
    return sequence_number.is_set
	|| is_prefix_grant.is_set
	|| min_prefix_length.is_set
	|| max_prefix_length.is_set
	|| (bgp_prefix !=  nullptr && bgp_prefix->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sequence_number.yfilter)
	|| ydk::is_set(is_prefix_grant.yfilter)
	|| ydk::is_set(min_prefix_length.yfilter)
	|| ydk::is_set(max_prefix_length.yfilter)
	|| (bgp_prefix !=  nullptr && bgp_prefix->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-pfxlst";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());
    if (is_prefix_grant.is_set || is_set(is_prefix_grant.yfilter)) leaf_name_data.push_back(is_prefix_grant.get_name_leafdata());
    if (min_prefix_length.is_set || is_set(min_prefix_length.yfilter)) leaf_name_data.push_back(min_prefix_length.get_name_leafdata());
    if (max_prefix_length.is_set || is_set(max_prefix_length.yfilter)) leaf_name_data.push_back(max_prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-prefix")
    {
        if(bgp_prefix == nullptr)
        {
            bgp_prefix = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix>();
        }
        return bgp_prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(bgp_prefix != nullptr)
    {
        children["bgp-prefix"] = bgp_prefix;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-prefix-grant")
    {
        is_prefix_grant = value;
        is_prefix_grant.value_namespace = name_space;
        is_prefix_grant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-prefix-length")
    {
        min_prefix_length = value;
        min_prefix_length.value_namespace = name_space;
        min_prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-prefix-length")
    {
        max_prefix_length = value;
        max_prefix_length.value_namespace = name_space;
        max_prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
    if(value_path == "is-prefix-grant")
    {
        is_prefix_grant.yfilter = yfilter;
    }
    if(value_path == "min-prefix-length")
    {
        min_prefix_length.yfilter = yfilter;
    }
    if(value_path == "max-prefix-length")
    {
        max_prefix_length.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-prefix" || name == "sequence-number" || name == "is-prefix-grant" || name == "min-prefix-length" || name == "max-prefix-length")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::BgpPrefix()
    :
    prefix_length{YType::uint16, "prefix-length"}
    	,
    prefix(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix>())
{
    prefix->parent = this;

    yang_name = "bgp-prefix"; yang_parent_name = "bgp-pfxlst"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::~BgpPrefix()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::has_data() const
{
    return prefix_length.is_set
	|| (prefix !=  nullptr && prefix->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| (prefix !=  nullptr && prefix->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix>();
        }
        return prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(prefix != nullptr)
    {
        children["prefix"] = prefix;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::Prefix()
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
    l2vpn_vpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::L2VpnVplsAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::L2VpnMspwAddress>())
	,ipv4_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::Ipv6SrPolicyAddress>())
{
    l2vpn_vpls_address->parent = this;
    l2vpn_mspw_address->parent = this;
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;

    yang_name = "prefix"; yang_parent_name = "bgp-prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::~Prefix()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::has_data() const
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::has_operation() const
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

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::get_name_leaf_data() const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-vpls-address" || name == "l2vpn-mspw-address" || name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-mcast-address" || name == "ipv4-label-address" || name == "ipv4-tunnel-address" || name == "ipv4-mdt-address" || name == "ipv4vpn-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-mcast-address" || name == "ipv6-label-address" || name == "ipv6vpn-address" || name == "ipv6vpn-mcast-address" || name == "rt-constraint-address" || name == "ipv6mvpn-address" || name == "ipv4mvpn-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "ipv4-flowspec-address" || name == "ipv6-flowspec-address" || name == "ipv4vpn-flowspec-address" || name == "ipv6vpn-flowspec-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attributes()
{

    yang_name = "attributes"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::~Attributes()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::has_data() const
{
    for (std::size_t index=0; index<attribute.size(); index++)
    {
        if(attribute[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::has_operation() const
{
    for (std::size_t index=0; index<attribute.size(); index++)
    {
        if(attribute[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute")
    {
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute>();
        c->parent = this;
        attribute.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : attribute)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::Attribute()
    :
    attribute_iid{YType::int32, "attribute-iid"},
    attribute_cache_bucket{YType::int32, "attribute-cache-bucket"},
    attribute_cache_id{YType::int32, "attribute-cache-id"},
    process_instance_id{YType::uint8, "process-instance-id"},
    attribute_instance_id{YType::uint8, "attribute-instance-id"},
    attribute_structure_id{YType::uint32, "attribute-structure-id"},
    attribute_structure_hash_value{YType::uint32, "attribute-structure-hash-value"},
    reference_count{YType::uint32, "reference-count"}
    	,
    attribute_info(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo>())
{
    attribute_info->parent = this;

    yang_name = "attribute"; yang_parent_name = "attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::~Attribute()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::has_data() const
{
    return attribute_iid.is_set
	|| attribute_cache_bucket.is_set
	|| attribute_cache_id.is_set
	|| process_instance_id.is_set
	|| attribute_instance_id.is_set
	|| attribute_structure_id.is_set
	|| attribute_structure_hash_value.is_set
	|| reference_count.is_set
	|| (attribute_info !=  nullptr && attribute_info->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attribute_iid.yfilter)
	|| ydk::is_set(attribute_cache_bucket.yfilter)
	|| ydk::is_set(attribute_cache_id.yfilter)
	|| ydk::is_set(process_instance_id.yfilter)
	|| ydk::is_set(attribute_instance_id.yfilter)
	|| ydk::is_set(attribute_structure_id.yfilter)
	|| ydk::is_set(attribute_structure_hash_value.yfilter)
	|| ydk::is_set(reference_count.yfilter)
	|| (attribute_info !=  nullptr && attribute_info->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute_iid.is_set || is_set(attribute_iid.yfilter)) leaf_name_data.push_back(attribute_iid.get_name_leafdata());
    if (attribute_cache_bucket.is_set || is_set(attribute_cache_bucket.yfilter)) leaf_name_data.push_back(attribute_cache_bucket.get_name_leafdata());
    if (attribute_cache_id.is_set || is_set(attribute_cache_id.yfilter)) leaf_name_data.push_back(attribute_cache_id.get_name_leafdata());
    if (process_instance_id.is_set || is_set(process_instance_id.yfilter)) leaf_name_data.push_back(process_instance_id.get_name_leafdata());
    if (attribute_instance_id.is_set || is_set(attribute_instance_id.yfilter)) leaf_name_data.push_back(attribute_instance_id.get_name_leafdata());
    if (attribute_structure_id.is_set || is_set(attribute_structure_id.yfilter)) leaf_name_data.push_back(attribute_structure_id.get_name_leafdata());
    if (attribute_structure_hash_value.is_set || is_set(attribute_structure_hash_value.yfilter)) leaf_name_data.push_back(attribute_structure_hash_value.get_name_leafdata());
    if (reference_count.is_set || is_set(reference_count.yfilter)) leaf_name_data.push_back(reference_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute-info")
    {
        if(attribute_info == nullptr)
        {
            attribute_info = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo>();
        }
        return attribute_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(attribute_info != nullptr)
    {
        children["attribute-info"] = attribute_info;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attribute-iid")
    {
        attribute_iid = value;
        attribute_iid.value_namespace = name_space;
        attribute_iid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-cache-bucket")
    {
        attribute_cache_bucket = value;
        attribute_cache_bucket.value_namespace = name_space;
        attribute_cache_bucket.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-cache-id")
    {
        attribute_cache_id = value;
        attribute_cache_id.value_namespace = name_space;
        attribute_cache_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-instance-id")
    {
        process_instance_id = value;
        process_instance_id.value_namespace = name_space;
        process_instance_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-instance-id")
    {
        attribute_instance_id = value;
        attribute_instance_id.value_namespace = name_space;
        attribute_instance_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-structure-id")
    {
        attribute_structure_id = value;
        attribute_structure_id.value_namespace = name_space;
        attribute_structure_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-structure-hash-value")
    {
        attribute_structure_hash_value = value;
        attribute_structure_hash_value.value_namespace = name_space;
        attribute_structure_hash_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reference-count")
    {
        reference_count = value;
        reference_count.value_namespace = name_space;
        reference_count.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attribute-iid")
    {
        attribute_iid.yfilter = yfilter;
    }
    if(value_path == "attribute-cache-bucket")
    {
        attribute_cache_bucket.yfilter = yfilter;
    }
    if(value_path == "attribute-cache-id")
    {
        attribute_cache_id.yfilter = yfilter;
    }
    if(value_path == "process-instance-id")
    {
        process_instance_id.yfilter = yfilter;
    }
    if(value_path == "attribute-instance-id")
    {
        attribute_instance_id.yfilter = yfilter;
    }
    if(value_path == "attribute-structure-id")
    {
        attribute_structure_id.yfilter = yfilter;
    }
    if(value_path == "attribute-structure-hash-value")
    {
        attribute_structure_hash_value.yfilter = yfilter;
    }
    if(value_path == "reference-count")
    {
        reference_count.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-info" || name == "attribute-iid" || name == "attribute-cache-bucket" || name == "attribute-cache-id" || name == "process-instance-id" || name == "attribute-instance-id" || name == "attribute-structure-id" || name == "attribute-structure-hash-value" || name == "reference-count")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttributeInfo()
    :
    is_as_path2_byte{YType::boolean, "is-as-path2-byte"},
    is_application_gateway_present{YType::boolean, "is-application-gateway-present"},
    is_attr_set_present{YType::boolean, "is-attr-set-present"},
    set_aigp_inbound_igp{YType::boolean, "set-aigp-inbound-igp"},
    set_aigp_inbound_metric{YType::boolean, "set-aigp-inbound-metric"},
    is_rnh_present{YType::boolean, "is-rnh-present"},
    is_ribrnh_present{YType::boolean, "is-ribrnh-present"},
    attribute_key_number{YType::uint32, "attribute-key-number"},
    attribute_reuse_id_config{YType::boolean, "attribute-reuse-id-config"},
    attribute_reuse_id_max_id{YType::uint32, "attribute-reuse-id-max-id"},
    attribute_reuse_id_node{YType::uint32, "attribute-reuse-id-node"},
    attribute_reuse_id_current{YType::uint32, "attribute-reuse-id-current"},
    attribute_reuse_id_keys{YType::uint32, "attribute-reuse-id-keys"},
    attribute_reuse_id_recover_sec{YType::uint32, "attribute-reuse-id-recover-sec"},
    vpn_distinguisher{YType::uint32, "vpn-distinguisher"},
    rnh_type{YType::uint16, "rnh-type"},
    rnh_len{YType::uint8, "rnh-len"},
    rnh_addr_len{YType::uint32, "rnh-addr-len"},
    ribrnh_table{YType::uint32, "ribrnh-table"},
    ribrnh_mac{YType::str, "ribrnh-mac"},
    ribrnhip_table{YType::uint32, "ribrnhip-table"},
    ribrnh_vni{YType::uint32, "ribrnh-vni"},
    ribrnh_encap{YType::uint8, "ribrnh-encap"}
    	,
    common_attributes(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes>())
	,attr_set(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet>())
	,rnh_addr(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RnhAddr>())
	,ribrnh_ip(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp>())
{
    common_attributes->parent = this;
    attr_set->parent = this;
    rnh_addr->parent = this;
    ribrnh_ip->parent = this;

    yang_name = "attribute-info"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::~AttributeInfo()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::has_data() const
{
    return is_as_path2_byte.is_set
	|| is_application_gateway_present.is_set
	|| is_attr_set_present.is_set
	|| set_aigp_inbound_igp.is_set
	|| set_aigp_inbound_metric.is_set
	|| is_rnh_present.is_set
	|| is_ribrnh_present.is_set
	|| attribute_key_number.is_set
	|| attribute_reuse_id_config.is_set
	|| attribute_reuse_id_max_id.is_set
	|| attribute_reuse_id_node.is_set
	|| attribute_reuse_id_current.is_set
	|| attribute_reuse_id_keys.is_set
	|| attribute_reuse_id_recover_sec.is_set
	|| vpn_distinguisher.is_set
	|| rnh_type.is_set
	|| rnh_len.is_set
	|| rnh_addr_len.is_set
	|| ribrnh_table.is_set
	|| ribrnh_mac.is_set
	|| ribrnhip_table.is_set
	|| ribrnh_vni.is_set
	|| ribrnh_encap.is_set
	|| (common_attributes !=  nullptr && common_attributes->has_data())
	|| (attr_set !=  nullptr && attr_set->has_data())
	|| (rnh_addr !=  nullptr && rnh_addr->has_data())
	|| (ribrnh_ip !=  nullptr && ribrnh_ip->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_as_path2_byte.yfilter)
	|| ydk::is_set(is_application_gateway_present.yfilter)
	|| ydk::is_set(is_attr_set_present.yfilter)
	|| ydk::is_set(set_aigp_inbound_igp.yfilter)
	|| ydk::is_set(set_aigp_inbound_metric.yfilter)
	|| ydk::is_set(is_rnh_present.yfilter)
	|| ydk::is_set(is_ribrnh_present.yfilter)
	|| ydk::is_set(attribute_key_number.yfilter)
	|| ydk::is_set(attribute_reuse_id_config.yfilter)
	|| ydk::is_set(attribute_reuse_id_max_id.yfilter)
	|| ydk::is_set(attribute_reuse_id_node.yfilter)
	|| ydk::is_set(attribute_reuse_id_current.yfilter)
	|| ydk::is_set(attribute_reuse_id_keys.yfilter)
	|| ydk::is_set(attribute_reuse_id_recover_sec.yfilter)
	|| ydk::is_set(vpn_distinguisher.yfilter)
	|| ydk::is_set(rnh_type.yfilter)
	|| ydk::is_set(rnh_len.yfilter)
	|| ydk::is_set(rnh_addr_len.yfilter)
	|| ydk::is_set(ribrnh_table.yfilter)
	|| ydk::is_set(ribrnh_mac.yfilter)
	|| ydk::is_set(ribrnhip_table.yfilter)
	|| ydk::is_set(ribrnh_vni.yfilter)
	|| ydk::is_set(ribrnh_encap.yfilter)
	|| (common_attributes !=  nullptr && common_attributes->has_operation())
	|| (attr_set !=  nullptr && attr_set->has_operation())
	|| (rnh_addr !=  nullptr && rnh_addr->has_operation())
	|| (ribrnh_ip !=  nullptr && ribrnh_ip->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_as_path2_byte.is_set || is_set(is_as_path2_byte.yfilter)) leaf_name_data.push_back(is_as_path2_byte.get_name_leafdata());
    if (is_application_gateway_present.is_set || is_set(is_application_gateway_present.yfilter)) leaf_name_data.push_back(is_application_gateway_present.get_name_leafdata());
    if (is_attr_set_present.is_set || is_set(is_attr_set_present.yfilter)) leaf_name_data.push_back(is_attr_set_present.get_name_leafdata());
    if (set_aigp_inbound_igp.is_set || is_set(set_aigp_inbound_igp.yfilter)) leaf_name_data.push_back(set_aigp_inbound_igp.get_name_leafdata());
    if (set_aigp_inbound_metric.is_set || is_set(set_aigp_inbound_metric.yfilter)) leaf_name_data.push_back(set_aigp_inbound_metric.get_name_leafdata());
    if (is_rnh_present.is_set || is_set(is_rnh_present.yfilter)) leaf_name_data.push_back(is_rnh_present.get_name_leafdata());
    if (is_ribrnh_present.is_set || is_set(is_ribrnh_present.yfilter)) leaf_name_data.push_back(is_ribrnh_present.get_name_leafdata());
    if (attribute_key_number.is_set || is_set(attribute_key_number.yfilter)) leaf_name_data.push_back(attribute_key_number.get_name_leafdata());
    if (attribute_reuse_id_config.is_set || is_set(attribute_reuse_id_config.yfilter)) leaf_name_data.push_back(attribute_reuse_id_config.get_name_leafdata());
    if (attribute_reuse_id_max_id.is_set || is_set(attribute_reuse_id_max_id.yfilter)) leaf_name_data.push_back(attribute_reuse_id_max_id.get_name_leafdata());
    if (attribute_reuse_id_node.is_set || is_set(attribute_reuse_id_node.yfilter)) leaf_name_data.push_back(attribute_reuse_id_node.get_name_leafdata());
    if (attribute_reuse_id_current.is_set || is_set(attribute_reuse_id_current.yfilter)) leaf_name_data.push_back(attribute_reuse_id_current.get_name_leafdata());
    if (attribute_reuse_id_keys.is_set || is_set(attribute_reuse_id_keys.yfilter)) leaf_name_data.push_back(attribute_reuse_id_keys.get_name_leafdata());
    if (attribute_reuse_id_recover_sec.is_set || is_set(attribute_reuse_id_recover_sec.yfilter)) leaf_name_data.push_back(attribute_reuse_id_recover_sec.get_name_leafdata());
    if (vpn_distinguisher.is_set || is_set(vpn_distinguisher.yfilter)) leaf_name_data.push_back(vpn_distinguisher.get_name_leafdata());
    if (rnh_type.is_set || is_set(rnh_type.yfilter)) leaf_name_data.push_back(rnh_type.get_name_leafdata());
    if (rnh_len.is_set || is_set(rnh_len.yfilter)) leaf_name_data.push_back(rnh_len.get_name_leafdata());
    if (rnh_addr_len.is_set || is_set(rnh_addr_len.yfilter)) leaf_name_data.push_back(rnh_addr_len.get_name_leafdata());
    if (ribrnh_table.is_set || is_set(ribrnh_table.yfilter)) leaf_name_data.push_back(ribrnh_table.get_name_leafdata());
    if (ribrnh_mac.is_set || is_set(ribrnh_mac.yfilter)) leaf_name_data.push_back(ribrnh_mac.get_name_leafdata());
    if (ribrnhip_table.is_set || is_set(ribrnhip_table.yfilter)) leaf_name_data.push_back(ribrnhip_table.get_name_leafdata());
    if (ribrnh_vni.is_set || is_set(ribrnh_vni.yfilter)) leaf_name_data.push_back(ribrnh_vni.get_name_leafdata());
    if (ribrnh_encap.is_set || is_set(ribrnh_encap.yfilter)) leaf_name_data.push_back(ribrnh_encap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "common-attributes")
    {
        if(common_attributes == nullptr)
        {
            common_attributes = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes>();
        }
        return common_attributes;
    }

    if(child_yang_name == "attr-set")
    {
        if(attr_set == nullptr)
        {
            attr_set = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet>();
        }
        return attr_set;
    }

    if(child_yang_name == "rnh-addr")
    {
        if(rnh_addr == nullptr)
        {
            rnh_addr = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RnhAddr>();
        }
        return rnh_addr;
    }

    if(child_yang_name == "ribrnh-ip")
    {
        if(ribrnh_ip == nullptr)
        {
            ribrnh_ip = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp>();
        }
        return ribrnh_ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(common_attributes != nullptr)
    {
        children["common-attributes"] = common_attributes;
    }

    if(attr_set != nullptr)
    {
        children["attr-set"] = attr_set;
    }

    if(rnh_addr != nullptr)
    {
        children["rnh-addr"] = rnh_addr;
    }

    if(ribrnh_ip != nullptr)
    {
        children["ribrnh-ip"] = ribrnh_ip;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-as-path2-byte")
    {
        is_as_path2_byte = value;
        is_as_path2_byte.value_namespace = name_space;
        is_as_path2_byte.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-application-gateway-present")
    {
        is_application_gateway_present = value;
        is_application_gateway_present.value_namespace = name_space;
        is_application_gateway_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-attr-set-present")
    {
        is_attr_set_present = value;
        is_attr_set_present.value_namespace = name_space;
        is_attr_set_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-aigp-inbound-igp")
    {
        set_aigp_inbound_igp = value;
        set_aigp_inbound_igp.value_namespace = name_space;
        set_aigp_inbound_igp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-aigp-inbound-metric")
    {
        set_aigp_inbound_metric = value;
        set_aigp_inbound_metric.value_namespace = name_space;
        set_aigp_inbound_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-rnh-present")
    {
        is_rnh_present = value;
        is_rnh_present.value_namespace = name_space;
        is_rnh_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ribrnh-present")
    {
        is_ribrnh_present = value;
        is_ribrnh_present.value_namespace = name_space;
        is_ribrnh_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-key-number")
    {
        attribute_key_number = value;
        attribute_key_number.value_namespace = name_space;
        attribute_key_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-reuse-id-config")
    {
        attribute_reuse_id_config = value;
        attribute_reuse_id_config.value_namespace = name_space;
        attribute_reuse_id_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-reuse-id-max-id")
    {
        attribute_reuse_id_max_id = value;
        attribute_reuse_id_max_id.value_namespace = name_space;
        attribute_reuse_id_max_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-reuse-id-node")
    {
        attribute_reuse_id_node = value;
        attribute_reuse_id_node.value_namespace = name_space;
        attribute_reuse_id_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-reuse-id-current")
    {
        attribute_reuse_id_current = value;
        attribute_reuse_id_current.value_namespace = name_space;
        attribute_reuse_id_current.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-reuse-id-keys")
    {
        attribute_reuse_id_keys = value;
        attribute_reuse_id_keys.value_namespace = name_space;
        attribute_reuse_id_keys.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-reuse-id-recover-sec")
    {
        attribute_reuse_id_recover_sec = value;
        attribute_reuse_id_recover_sec.value_namespace = name_space;
        attribute_reuse_id_recover_sec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpn-distinguisher")
    {
        vpn_distinguisher = value;
        vpn_distinguisher.value_namespace = name_space;
        vpn_distinguisher.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rnh-type")
    {
        rnh_type = value;
        rnh_type.value_namespace = name_space;
        rnh_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rnh-len")
    {
        rnh_len = value;
        rnh_len.value_namespace = name_space;
        rnh_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rnh-addr-len")
    {
        rnh_addr_len = value;
        rnh_addr_len.value_namespace = name_space;
        rnh_addr_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ribrnh-table")
    {
        ribrnh_table = value;
        ribrnh_table.value_namespace = name_space;
        ribrnh_table.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ribrnh-mac")
    {
        ribrnh_mac = value;
        ribrnh_mac.value_namespace = name_space;
        ribrnh_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ribrnhip-table")
    {
        ribrnhip_table = value;
        ribrnhip_table.value_namespace = name_space;
        ribrnhip_table.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ribrnh-vni")
    {
        ribrnh_vni = value;
        ribrnh_vni.value_namespace = name_space;
        ribrnh_vni.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ribrnh-encap")
    {
        ribrnh_encap = value;
        ribrnh_encap.value_namespace = name_space;
        ribrnh_encap.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-as-path2-byte")
    {
        is_as_path2_byte.yfilter = yfilter;
    }
    if(value_path == "is-application-gateway-present")
    {
        is_application_gateway_present.yfilter = yfilter;
    }
    if(value_path == "is-attr-set-present")
    {
        is_attr_set_present.yfilter = yfilter;
    }
    if(value_path == "set-aigp-inbound-igp")
    {
        set_aigp_inbound_igp.yfilter = yfilter;
    }
    if(value_path == "set-aigp-inbound-metric")
    {
        set_aigp_inbound_metric.yfilter = yfilter;
    }
    if(value_path == "is-rnh-present")
    {
        is_rnh_present.yfilter = yfilter;
    }
    if(value_path == "is-ribrnh-present")
    {
        is_ribrnh_present.yfilter = yfilter;
    }
    if(value_path == "attribute-key-number")
    {
        attribute_key_number.yfilter = yfilter;
    }
    if(value_path == "attribute-reuse-id-config")
    {
        attribute_reuse_id_config.yfilter = yfilter;
    }
    if(value_path == "attribute-reuse-id-max-id")
    {
        attribute_reuse_id_max_id.yfilter = yfilter;
    }
    if(value_path == "attribute-reuse-id-node")
    {
        attribute_reuse_id_node.yfilter = yfilter;
    }
    if(value_path == "attribute-reuse-id-current")
    {
        attribute_reuse_id_current.yfilter = yfilter;
    }
    if(value_path == "attribute-reuse-id-keys")
    {
        attribute_reuse_id_keys.yfilter = yfilter;
    }
    if(value_path == "attribute-reuse-id-recover-sec")
    {
        attribute_reuse_id_recover_sec.yfilter = yfilter;
    }
    if(value_path == "vpn-distinguisher")
    {
        vpn_distinguisher.yfilter = yfilter;
    }
    if(value_path == "rnh-type")
    {
        rnh_type.yfilter = yfilter;
    }
    if(value_path == "rnh-len")
    {
        rnh_len.yfilter = yfilter;
    }
    if(value_path == "rnh-addr-len")
    {
        rnh_addr_len.yfilter = yfilter;
    }
    if(value_path == "ribrnh-table")
    {
        ribrnh_table.yfilter = yfilter;
    }
    if(value_path == "ribrnh-mac")
    {
        ribrnh_mac.yfilter = yfilter;
    }
    if(value_path == "ribrnhip-table")
    {
        ribrnhip_table.yfilter = yfilter;
    }
    if(value_path == "ribrnh-vni")
    {
        ribrnh_vni.yfilter = yfilter;
    }
    if(value_path == "ribrnh-encap")
    {
        ribrnh_encap.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common-attributes" || name == "attr-set" || name == "rnh-addr" || name == "ribrnh-ip" || name == "is-as-path2-byte" || name == "is-application-gateway-present" || name == "is-attr-set-present" || name == "set-aigp-inbound-igp" || name == "set-aigp-inbound-metric" || name == "is-rnh-present" || name == "is-ribrnh-present" || name == "attribute-key-number" || name == "attribute-reuse-id-config" || name == "attribute-reuse-id-max-id" || name == "attribute-reuse-id-node" || name == "attribute-reuse-id-current" || name == "attribute-reuse-id-keys" || name == "attribute-reuse-id-recover-sec" || name == "vpn-distinguisher" || name == "rnh-type" || name == "rnh-len" || name == "rnh-addr-len" || name == "ribrnh-table" || name == "ribrnh-mac" || name == "ribrnhip-table" || name == "ribrnh-vni" || name == "ribrnh-encap")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::CommonAttributes()
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
    tunnel_encap(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap>())
{
    tunnel_encap->parent = this;

    yang_name = "common-attributes"; yang_parent_name = "attribute-info"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::~CommonAttributes()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::has_data() const
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::has_operation() const
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

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::get_name_leaf_data() const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel-encap")
    {
        if(tunnel_encap == nullptr)
        {
            tunnel_encap = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap>();
        }
        return tunnel_encap;
    }

    if(child_yang_name == "community")
    {
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Community>();
        c->parent = this;
        community.push_back(c);
        return c;
    }

    if(child_yang_name == "extended-community")
    {
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity>();
        c->parent = this;
        extended_community.push_back(c);
        return c;
    }

    if(child_yang_name == "unknown-attribute")
    {
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute>();
        c->parent = this;
        unknown_attribute.push_back(c);
        return c;
    }

    if(child_yang_name == "cluster")
    {
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster>();
        c->parent = this;
        cluster.push_back(c);
        return c;
    }

    if(child_yang_name == "l2tpv3-cookie")
    {
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::L2Tpv3Cookie>();
        c->parent = this;
        l2tpv3_cookie.push_back(c);
        return c;
    }

    if(child_yang_name == "connector-value")
    {
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue>();
        c->parent = this;
        connector_value.push_back(c);
        return c;
    }

    if(child_yang_name == "pmsi-value")
    {
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue>();
        c->parent = this;
        pmsi_value.push_back(c);
        return c;
    }

    if(child_yang_name == "ls-attr")
    {
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr>();
        c->parent = this;
        ls_attr.push_back(c);
        return c;
    }

    if(child_yang_name == "label-index-attr")
    {
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LabelIndexAttr>();
        c->parent = this;
        label_index_attr.push_back(c);
        return c;
    }

    if(child_yang_name == "pe-distinguisher-label")
    {
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel>();
        c->parent = this;
        pe_distinguisher_label.push_back(c);
        return c;
    }

    if(child_yang_name == "large-community")
    {
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LargeCommunity>();
        c->parent = this;
        large_community.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(tunnel_encap != nullptr)
    {
        children["tunnel-encap"] = tunnel_encap;
    }

    count = 0;
    for (auto const & c : community)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : extended_community)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : unknown_attribute)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : cluster)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : l2tpv3_cookie)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : connector_value)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : pmsi_value)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : ls_attr)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : label_index_attr)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : pe_distinguisher_label)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : large_community)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-encap" || name == "community" || name == "extended-community" || name == "unknown-attribute" || name == "cluster" || name == "l2tpv3-cookie" || name == "connector-value" || name == "pmsi-value" || name == "ls-attr" || name == "label-index-attr" || name == "pe-distinguisher-label" || name == "large-community" || name == "is-metric-present" || name == "is-local-pref-present" || name == "is-atomic-aggregate-present" || name == "is-aggregator-present" || name == "is-origin-present" || name == "is-as-path-present" || name == "is-community-present" || name == "is-extended-community-present" || name == "is-ssa-present" || name == "is-connector-present" || name == "is-pmsi-present" || name == "is-pppmp-present" || name == "is-aigp-present" || name == "is-pe-distinguisher-label-present" || name == "is-ls-attribute-present" || name == "is-label-index-present" || name == "neighbor-as" || name == "aggregator-as" || name == "aggregator-address" || name == "metric" || name == "local-preference" || name == "origin" || name == "as-path" || name == "extended-community-flags" || name == "originator" || name == "l2tpv3-session-id" || name == "connector-type" || name == "aigp-metric-value" || name == "pmsi-type" || name == "pmsi-flags" || name == "pmsi-label" || name == "ppm-pvalue" || name == "is-large-community-present")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::TunnelEncap()
    :
    sr_policy(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy>())
{
    sr_policy->parent = this;

    yang_name = "tunnel-encap"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::~TunnelEncap()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::has_data() const
{
    return (sr_policy !=  nullptr && sr_policy->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::has_operation() const
{
    return is_set(yfilter)
	|| (sr_policy !=  nullptr && sr_policy->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-encap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-policy")
    {
        if(sr_policy == nullptr)
        {
            sr_policy = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy>();
        }
        return sr_policy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sr_policy != nullptr)
    {
        children["sr-policy"] = sr_policy;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-policy")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SrPolicy()
    :
    tunnel_encap_type{YType::uint16, "tunnel-encap-type"},
    preference{YType::uint32, "preference"},
    state{YType::boolean, "state"},
    request_state{YType::enumeration, "request-state"}
    	,
    binding_sid(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::BindingSid>())
	,allocated_binding_sid(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid>())
{
    binding_sid->parent = this;
    allocated_binding_sid->parent = this;

    yang_name = "sr-policy"; yang_parent_name = "tunnel-encap"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::~SrPolicy()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::has_data() const
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::has_operation() const
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

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_encap_type.is_set || is_set(tunnel_encap_type.yfilter)) leaf_name_data.push_back(tunnel_encap_type.get_name_leafdata());
    if (preference.is_set || is_set(preference.yfilter)) leaf_name_data.push_back(preference.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (request_state.is_set || is_set(request_state.yfilter)) leaf_name_data.push_back(request_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "binding-sid")
    {
        if(binding_sid == nullptr)
        {
            binding_sid = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::BindingSid>();
        }
        return binding_sid;
    }

    if(child_yang_name == "allocated-binding-sid")
    {
        if(allocated_binding_sid == nullptr)
        {
            allocated_binding_sid = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid>();
        }
        return allocated_binding_sid;
    }

    if(child_yang_name == "segment-list")
    {
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList>();
        c->parent = this;
        segment_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(binding_sid != nullptr)
    {
        children["binding-sid"] = binding_sid;
    }

    if(allocated_binding_sid != nullptr)
    {
        children["allocated-binding-sid"] = allocated_binding_sid;
    }

    count = 0;
    for (auto const & c : segment_list)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "binding-sid" || name == "allocated-binding-sid" || name == "segment-list" || name == "tunnel-encap-type" || name == "preference" || name == "state" || name == "request-state")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::BindingSid::BindingSid()
    :
    type{YType::enumeration, "type"},
    label{YType::uint32, "label"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "binding-sid"; yang_parent_name = "sr-policy"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::BindingSid::~BindingSid()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::BindingSid::has_data() const
{
    return type.is_set
	|| label.is_set
	|| ipv6_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::BindingSid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::BindingSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::BindingSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::BindingSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::BindingSid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::BindingSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::BindingSid::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::BindingSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "label" || name == "ipv6-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::AllocatedBindingSid()
    :
    type{YType::enumeration, "type"},
    label{YType::uint32, "label"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "allocated-binding-sid"; yang_parent_name = "sr-policy"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::~AllocatedBindingSid()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::has_data() const
{
    return type.is_set
	|| label.is_set
	|| ipv6_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allocated-binding-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "label" || name == "ipv6-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::SegmentList()
    :
    weight{YType::uint8, "weight"}
{

    yang_name = "segment-list"; yang_parent_name = "sr-policy"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::~SegmentList()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::has_data() const
{
    for (std::size_t index=0; index<segment.size(); index++)
    {
        if(segment[index]->has_data())
            return true;
    }
    return weight.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::has_operation() const
{
    for (std::size_t index=0; index<segment.size(); index++)
    {
        if(segment[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "segment")
    {
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment>();
        c->parent = this;
        segment.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : segment)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "segment" || name == "weight")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::Segment()
    :
    type{YType::enumeration, "type"},
    label{YType::uint32, "label"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "segment"; yang_parent_name = "segment-list"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::~Segment()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::has_data() const
{
    return type.is_set
	|| label.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "label" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Community::Community()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "community"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Community::~Community()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Community::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Community::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Community::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Community::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Community::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Community::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Community::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Community::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Community::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity::ExtendedCommunity()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "extended-community"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity::~ExtendedCommunity()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::UnknownAttribute()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "unknown-attribute"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::~UnknownAttribute()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-attribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::Cluster()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "cluster"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::~Cluster()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cluster";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::L2Tpv3Cookie::L2Tpv3Cookie()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "l2tpv3-cookie"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::L2Tpv3Cookie::~L2Tpv3Cookie()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::L2Tpv3Cookie::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::L2Tpv3Cookie::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::L2Tpv3Cookie::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tpv3-cookie";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::L2Tpv3Cookie::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::L2Tpv3Cookie::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::L2Tpv3Cookie::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::L2Tpv3Cookie::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::L2Tpv3Cookie::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::L2Tpv3Cookie::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::ConnectorValue()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "connector-value"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::~ConnectorValue()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connector-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::PmsiValue()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "pmsi-value"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::~PmsiValue()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmsi-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::LsAttr()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "ls-attr"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::~LsAttr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ls-attr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LabelIndexAttr::LabelIndexAttr()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "label-index-attr"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LabelIndexAttr::~LabelIndexAttr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LabelIndexAttr::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LabelIndexAttr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LabelIndexAttr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-index-attr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LabelIndexAttr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LabelIndexAttr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LabelIndexAttr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LabelIndexAttr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LabelIndexAttr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LabelIndexAttr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::PeDistinguisherLabel()
    :
    pe_address{YType::str, "pe-address"},
    label{YType::uint32, "label"}
{

    yang_name = "pe-distinguisher-label"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::~PeDistinguisherLabel()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::has_data() const
{
    return pe_address.is_set
	|| label.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pe_address.yfilter)
	|| ydk::is_set(label.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pe-distinguisher-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pe_address.is_set || is_set(pe_address.yfilter)) leaf_name_data.push_back(pe_address.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pe-address" || name == "label")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LargeCommunity::LargeCommunity()
    :
    global_admin{YType::uint32, "global-admin"},
    local_data1{YType::uint32, "local-data1"},
    local_data2{YType::uint32, "local-data2"}
{

    yang_name = "large-community"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LargeCommunity::~LargeCommunity()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LargeCommunity::has_data() const
{
    return global_admin.is_set
	|| local_data1.is_set
	|| local_data2.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LargeCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(global_admin.yfilter)
	|| ydk::is_set(local_data1.yfilter)
	|| ydk::is_set(local_data2.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LargeCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "large-community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LargeCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (global_admin.is_set || is_set(global_admin.yfilter)) leaf_name_data.push_back(global_admin.get_name_leafdata());
    if (local_data1.is_set || is_set(local_data1.yfilter)) leaf_name_data.push_back(local_data1.get_name_leafdata());
    if (local_data2.is_set || is_set(local_data2.yfilter)) leaf_name_data.push_back(local_data2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LargeCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LargeCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LargeCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LargeCommunity::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LargeCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global-admin" || name == "local-data1" || name == "local-data2")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::AttrSet()
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
    tunnel_encap(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap>())
{
    tunnel_encap->parent = this;

    yang_name = "attr-set"; yang_parent_name = "attribute-info"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::~AttrSet()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::has_data() const
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::has_operation() const
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

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attr-set";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::get_name_leaf_data() const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel-encap")
    {
        if(tunnel_encap == nullptr)
        {
            tunnel_encap = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap>();
        }
        return tunnel_encap;
    }

    if(child_yang_name == "community")
    {
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Community>();
        c->parent = this;
        community.push_back(c);
        return c;
    }

    if(child_yang_name == "extended-community")
    {
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity>();
        c->parent = this;
        extended_community.push_back(c);
        return c;
    }

    if(child_yang_name == "unknown-attribute")
    {
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute>();
        c->parent = this;
        unknown_attribute.push_back(c);
        return c;
    }

    if(child_yang_name == "cluster")
    {
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Cluster>();
        c->parent = this;
        cluster.push_back(c);
        return c;
    }

    if(child_yang_name == "l2tpv3-cookie")
    {
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::L2Tpv3Cookie>();
        c->parent = this;
        l2tpv3_cookie.push_back(c);
        return c;
    }

    if(child_yang_name == "connector-value")
    {
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue>();
        c->parent = this;
        connector_value.push_back(c);
        return c;
    }

    if(child_yang_name == "pmsi-value")
    {
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue>();
        c->parent = this;
        pmsi_value.push_back(c);
        return c;
    }

    if(child_yang_name == "ls-attr")
    {
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr>();
        c->parent = this;
        ls_attr.push_back(c);
        return c;
    }

    if(child_yang_name == "label-index-attr")
    {
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LabelIndexAttr>();
        c->parent = this;
        label_index_attr.push_back(c);
        return c;
    }

    if(child_yang_name == "pe-distinguisher-label")
    {
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel>();
        c->parent = this;
        pe_distinguisher_label.push_back(c);
        return c;
    }

    if(child_yang_name == "large-community")
    {
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LargeCommunity>();
        c->parent = this;
        large_community.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(tunnel_encap != nullptr)
    {
        children["tunnel-encap"] = tunnel_encap;
    }

    count = 0;
    for (auto const & c : community)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : extended_community)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : unknown_attribute)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : cluster)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : l2tpv3_cookie)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : connector_value)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : pmsi_value)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : ls_attr)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : label_index_attr)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : pe_distinguisher_label)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : large_community)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-encap" || name == "community" || name == "extended-community" || name == "unknown-attribute" || name == "cluster" || name == "l2tpv3-cookie" || name == "connector-value" || name == "pmsi-value" || name == "ls-attr" || name == "label-index-attr" || name == "pe-distinguisher-label" || name == "large-community" || name == "is-metric-present" || name == "is-local-pref-present" || name == "is-atomic-aggregate-present" || name == "is-aggregator-present" || name == "is-origin-present" || name == "is-as-path-present" || name == "is-community-present" || name == "is-extended-community-present" || name == "is-ssa-present" || name == "is-connector-present" || name == "is-pmsi-present" || name == "is-pppmp-present" || name == "is-aigp-present" || name == "is-pe-distinguisher-label-present" || name == "is-ls-attribute-present" || name == "is-label-index-present" || name == "neighbor-as" || name == "aggregator-as" || name == "aggregator-address" || name == "metric" || name == "local-preference" || name == "origin" || name == "as-path" || name == "extended-community-flags" || name == "originator" || name == "l2tpv3-session-id" || name == "connector-type" || name == "aigp-metric-value" || name == "pmsi-type" || name == "pmsi-flags" || name == "pmsi-label" || name == "ppm-pvalue" || name == "is-large-community-present")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::TunnelEncap()
    :
    sr_policy(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy>())
{
    sr_policy->parent = this;

    yang_name = "tunnel-encap"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::~TunnelEncap()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::has_data() const
{
    return (sr_policy !=  nullptr && sr_policy->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::has_operation() const
{
    return is_set(yfilter)
	|| (sr_policy !=  nullptr && sr_policy->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-encap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-policy")
    {
        if(sr_policy == nullptr)
        {
            sr_policy = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy>();
        }
        return sr_policy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sr_policy != nullptr)
    {
        children["sr-policy"] = sr_policy;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-policy")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SrPolicy()
    :
    tunnel_encap_type{YType::uint16, "tunnel-encap-type"},
    preference{YType::uint32, "preference"},
    state{YType::boolean, "state"},
    request_state{YType::enumeration, "request-state"}
    	,
    binding_sid(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid>())
	,allocated_binding_sid(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid>())
{
    binding_sid->parent = this;
    allocated_binding_sid->parent = this;

    yang_name = "sr-policy"; yang_parent_name = "tunnel-encap"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::~SrPolicy()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::has_data() const
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::has_operation() const
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

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_encap_type.is_set || is_set(tunnel_encap_type.yfilter)) leaf_name_data.push_back(tunnel_encap_type.get_name_leafdata());
    if (preference.is_set || is_set(preference.yfilter)) leaf_name_data.push_back(preference.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (request_state.is_set || is_set(request_state.yfilter)) leaf_name_data.push_back(request_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "binding-sid")
    {
        if(binding_sid == nullptr)
        {
            binding_sid = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid>();
        }
        return binding_sid;
    }

    if(child_yang_name == "allocated-binding-sid")
    {
        if(allocated_binding_sid == nullptr)
        {
            allocated_binding_sid = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid>();
        }
        return allocated_binding_sid;
    }

    if(child_yang_name == "segment-list")
    {
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList>();
        c->parent = this;
        segment_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(binding_sid != nullptr)
    {
        children["binding-sid"] = binding_sid;
    }

    if(allocated_binding_sid != nullptr)
    {
        children["allocated-binding-sid"] = allocated_binding_sid;
    }

    count = 0;
    for (auto const & c : segment_list)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "binding-sid" || name == "allocated-binding-sid" || name == "segment-list" || name == "tunnel-encap-type" || name == "preference" || name == "state" || name == "request-state")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid::BindingSid()
    :
    type{YType::enumeration, "type"},
    label{YType::uint32, "label"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "binding-sid"; yang_parent_name = "sr-policy"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid::~BindingSid()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid::has_data() const
{
    return type.is_set
	|| label.is_set
	|| ipv6_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "label" || name == "ipv6-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::AllocatedBindingSid()
    :
    type{YType::enumeration, "type"},
    label{YType::uint32, "label"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "allocated-binding-sid"; yang_parent_name = "sr-policy"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::~AllocatedBindingSid()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::has_data() const
{
    return type.is_set
	|| label.is_set
	|| ipv6_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allocated-binding-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "label" || name == "ipv6-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::SegmentList()
    :
    weight{YType::uint8, "weight"}
{

    yang_name = "segment-list"; yang_parent_name = "sr-policy"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::~SegmentList()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::has_data() const
{
    for (std::size_t index=0; index<segment.size(); index++)
    {
        if(segment[index]->has_data())
            return true;
    }
    return weight.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::has_operation() const
{
    for (std::size_t index=0; index<segment.size(); index++)
    {
        if(segment[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "segment")
    {
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment>();
        c->parent = this;
        segment.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : segment)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "segment" || name == "weight")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::Segment()
    :
    type{YType::enumeration, "type"},
    label{YType::uint32, "label"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "segment"; yang_parent_name = "segment-list"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::~Segment()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::has_data() const
{
    return type.is_set
	|| label.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "label" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Community::Community()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "community"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Community::~Community()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Community::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Community::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Community::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Community::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Community::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Community::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Community::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Community::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Community::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::ExtendedCommunity()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "extended-community"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::~ExtendedCommunity()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::UnknownAttribute()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "unknown-attribute"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::~UnknownAttribute()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-attribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::Cluster()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "cluster"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::~Cluster()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cluster";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::L2Tpv3Cookie::L2Tpv3Cookie()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "l2tpv3-cookie"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::L2Tpv3Cookie::~L2Tpv3Cookie()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::L2Tpv3Cookie::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::L2Tpv3Cookie::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::L2Tpv3Cookie::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tpv3-cookie";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::L2Tpv3Cookie::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::L2Tpv3Cookie::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::L2Tpv3Cookie::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::L2Tpv3Cookie::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::L2Tpv3Cookie::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::L2Tpv3Cookie::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::ConnectorValue()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "connector-value"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::~ConnectorValue()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connector-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::PmsiValue()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "pmsi-value"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::~PmsiValue()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmsi-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::LsAttr()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "ls-attr"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::~LsAttr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ls-attr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LabelIndexAttr::LabelIndexAttr()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "label-index-attr"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LabelIndexAttr::~LabelIndexAttr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LabelIndexAttr::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LabelIndexAttr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LabelIndexAttr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-index-attr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LabelIndexAttr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LabelIndexAttr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LabelIndexAttr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LabelIndexAttr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LabelIndexAttr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LabelIndexAttr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::PeDistinguisherLabel()
    :
    pe_address{YType::str, "pe-address"},
    label{YType::uint32, "label"}
{

    yang_name = "pe-distinguisher-label"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::~PeDistinguisherLabel()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::has_data() const
{
    return pe_address.is_set
	|| label.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pe_address.yfilter)
	|| ydk::is_set(label.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pe-distinguisher-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pe_address.is_set || is_set(pe_address.yfilter)) leaf_name_data.push_back(pe_address.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pe-address" || name == "label")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LargeCommunity::LargeCommunity()
    :
    global_admin{YType::uint32, "global-admin"},
    local_data1{YType::uint32, "local-data1"},
    local_data2{YType::uint32, "local-data2"}
{

    yang_name = "large-community"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LargeCommunity::~LargeCommunity()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LargeCommunity::has_data() const
{
    return global_admin.is_set
	|| local_data1.is_set
	|| local_data2.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LargeCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(global_admin.yfilter)
	|| ydk::is_set(local_data1.yfilter)
	|| ydk::is_set(local_data2.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LargeCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "large-community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LargeCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (global_admin.is_set || is_set(global_admin.yfilter)) leaf_name_data.push_back(global_admin.get_name_leafdata());
    if (local_data1.is_set || is_set(local_data1.yfilter)) leaf_name_data.push_back(local_data1.get_name_leafdata());
    if (local_data2.is_set || is_set(local_data2.yfilter)) leaf_name_data.push_back(local_data2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LargeCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LargeCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LargeCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LargeCommunity::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LargeCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global-admin" || name == "local-data1" || name == "local-data2")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RnhAddr::RnhAddr()
    :
    len{YType::enumeration, "len"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"},
    mac_address{YType::str, "mac-address"}
{

    yang_name = "rnh-addr"; yang_parent_name = "attribute-info"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RnhAddr::~RnhAddr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RnhAddr::has_data() const
{
    return len.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set
	|| mac_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RnhAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(len.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(mac_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RnhAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rnh-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RnhAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (len.is_set || is_set(len.yfilter)) leaf_name_data.push_back(len.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RnhAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RnhAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RnhAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RnhAddr::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RnhAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "len" || name == "ipv4-address" || name == "ipv6-address" || name == "mac-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::RibrnhIp()
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
    l2vpn_vpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnVplsAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnMspwAddress>())
	,ipv4_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress>())
{
    l2vpn_vpls_address->parent = this;
    l2vpn_mspw_address->parent = this;
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;

    yang_name = "ribrnh-ip"; yang_parent_name = "attribute-info"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::~RibrnhIp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::has_data() const
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::has_operation() const
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

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ribrnh-ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::get_name_leaf_data() const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-vpls-address" || name == "l2vpn-mspw-address" || name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-mcast-address" || name == "ipv4-label-address" || name == "ipv4-tunnel-address" || name == "ipv4-mdt-address" || name == "ipv4vpn-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-mcast-address" || name == "ipv6-label-address" || name == "ipv6vpn-address" || name == "ipv6vpn-mcast-address" || name == "rt-constraint-address" || name == "ipv6mvpn-address" || name == "ipv4mvpn-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "ipv4-flowspec-address" || name == "ipv6-flowspec-address" || name == "ipv4vpn-flowspec-address" || name == "ipv6vpn-flowspec-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "ribrnh-ip"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "ribrnh-ip"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "ribrnh-ip"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "ribrnh-ip"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Information::Information()
    :
    route_distinguisher{YType::str, "route-distinguisher"}
{

    yang_name = "information"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Information::~Information()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Information::has_data() const
{
    return route_distinguisher.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Information::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_distinguisher.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Information::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Information::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_distinguisher.is_set || is_set(route_distinguisher.yfilter)) leaf_name_data.push_back(route_distinguisher.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Information::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Information::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Information::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-distinguisher")
    {
        route_distinguisher = value;
        route_distinguisher.value_namespace = name_space;
        route_distinguisher.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Information::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-distinguisher")
    {
        route_distinguisher.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Information::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-distinguisher")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::UpdateInboundFilterVrf()
    :
    update_vrf_name{YType::str, "update-vrf-name"},
    update_filtered_message_count{YType::uint32, "update-filtered-message-count"},
    update_filtered_neighbor_count{YType::uint32, "update-filtered-neighbor-count"},
    last_update_filtered_age{YType::uint32, "last-update-filtered-age"}
    	,
    last_update_filtered_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp>())
{
    last_update_filtered_timestamp->parent = this;

    yang_name = "update-inbound-filter-vrf"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::~UpdateInboundFilterVrf()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::has_data() const
{
    return update_vrf_name.is_set
	|| update_filtered_message_count.is_set
	|| update_filtered_neighbor_count.is_set
	|| last_update_filtered_age.is_set
	|| (last_update_filtered_timestamp !=  nullptr && last_update_filtered_timestamp->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(update_vrf_name.yfilter)
	|| ydk::is_set(update_filtered_message_count.yfilter)
	|| ydk::is_set(update_filtered_neighbor_count.yfilter)
	|| ydk::is_set(last_update_filtered_age.yfilter)
	|| (last_update_filtered_timestamp !=  nullptr && last_update_filtered_timestamp->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-inbound-filter-vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (update_vrf_name.is_set || is_set(update_vrf_name.yfilter)) leaf_name_data.push_back(update_vrf_name.get_name_leafdata());
    if (update_filtered_message_count.is_set || is_set(update_filtered_message_count.yfilter)) leaf_name_data.push_back(update_filtered_message_count.get_name_leafdata());
    if (update_filtered_neighbor_count.is_set || is_set(update_filtered_neighbor_count.yfilter)) leaf_name_data.push_back(update_filtered_neighbor_count.get_name_leafdata());
    if (last_update_filtered_age.is_set || is_set(last_update_filtered_age.yfilter)) leaf_name_data.push_back(last_update_filtered_age.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-update-filtered-timestamp")
    {
        if(last_update_filtered_timestamp == nullptr)
        {
            last_update_filtered_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp>();
        }
        return last_update_filtered_timestamp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(last_update_filtered_timestamp != nullptr)
    {
        children["last-update-filtered-timestamp"] = last_update_filtered_timestamp;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "update-vrf-name")
    {
        update_vrf_name = value;
        update_vrf_name.value_namespace = name_space;
        update_vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-filtered-message-count")
    {
        update_filtered_message_count = value;
        update_filtered_message_count.value_namespace = name_space;
        update_filtered_message_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-filtered-neighbor-count")
    {
        update_filtered_neighbor_count = value;
        update_filtered_neighbor_count.value_namespace = name_space;
        update_filtered_neighbor_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-update-filtered-age")
    {
        last_update_filtered_age = value;
        last_update_filtered_age.value_namespace = name_space;
        last_update_filtered_age.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "update-vrf-name")
    {
        update_vrf_name.yfilter = yfilter;
    }
    if(value_path == "update-filtered-message-count")
    {
        update_filtered_message_count.yfilter = yfilter;
    }
    if(value_path == "update-filtered-neighbor-count")
    {
        update_filtered_neighbor_count.yfilter = yfilter;
    }
    if(value_path == "last-update-filtered-age")
    {
        last_update_filtered_age.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-update-filtered-timestamp" || name == "update-vrf-name" || name == "update-filtered-message-count" || name == "update-filtered-neighbor-count" || name == "last-update-filtered-age")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp::LastUpdateFilteredTimestamp()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "last-update-filtered-timestamp"; yang_parent_name = "update-inbound-filter-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp::~LastUpdateFilteredTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp::has_data() const
{
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-update-filtered-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}


}
}

